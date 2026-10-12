/* client.dll - unnamed_100a8800 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100a8800  FUN_100a8800  (420 bytes)
 * undefined FUN_100a8800(int param_1, int param_2)
 * called by: thunk_FUN_100a8800
 */
void __thiscall FUN_100a8800(void *this,int param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  vgui::Panel::setSize(this,param_1,param_2);
  lVar1 = __ftol();
  (**(code **)(**(int **)((int)this + 0xc0) + 0x10))(0,0,param_1,(int)lVar1);
  lVar1 = __ftol();
  uVar2 = (undefined4)lVar1;
  lVar1 = __ftol();
  (**(code **)(**(int **)((int)this + 0xc4) + 0x10))(0,(int)lVar1,param_1,uVar2);
  uVar3 = 0xf;
  uVar2 = 0x4b;
  lVar1 = __ftol();
  (**(code **)(**(int **)((int)this + 200) + 0x10))(5,(int)lVar1,uVar2,uVar3);
  uVar3 = 0xf;
  uVar2 = 0x4b;
  lVar1 = __ftol();
  (**(code **)(**(int **)((int)this + 0xcc) + 0x10))(0x55,(int)lVar1,uVar2,uVar3);
  uVar3 = 0xf;
  uVar2 = 0x4b;
  lVar1 = __ftol();
  (**(code **)(**(int **)((int)this + 0xd4) + 0x10))(0xa5,(int)lVar1,uVar2,uVar3);
  uVar3 = 0xf;
  uVar2 = 0x4b;
  lVar1 = __ftol();
  (**(code **)(**(int **)((int)this + 0xdc) + 0x10))(0xf5,(int)lVar1,uVar2,uVar3);
  return;
}

/* 100a8a10  FUN_100a8a10  (140 bytes)
 * undefined FUN_100a8a10(int param_1, int * param_2)
 * called by: thunk_FUN_100a8a10
 */
void FUN_100a8a10(int param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)(**(code **)(*param_2 + 0x14c))(local_c,local_10);
    (**(code **)(*piVar1 + 0x34))();
    (**(code **)(*param_2 + 0x8c))(local_c,local_10);
    lVar2 = __ftol();
    thunk_FUN_100a8ac0(*(void **)(local_8 + 4),(int)lVar2);
  }
  return;
}

/* 100a8ac0  FUN_100a8ac0  (33 bytes)
 * undefined FUN_100a8ac0(undefined4 param_1)
 */
void __thiscall FUN_100a8ac0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x108) = param_1;
  return;
}

/* 100a8af0  FUN_100a8af0  (151 bytes)
 * undefined FUN_100a8af0(int param_1, int * param_2)
 * called by: thunk_FUN_100a8af0
 */
void FUN_100a8af0(int param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)(**(code **)(*param_2 + 0x14c))(local_c,local_10);
    (**(code **)(*piVar1 + 0x34))();
    (**(code **)(*param_2 + 0x8c))(local_c,local_10);
    lVar2 = __ftol();
    thunk_FUN_100a8ac0(*(void **)(local_8 + 4),(int)lVar2);
    thunk_FUN_100a81b0(*(int *)(local_8 + 4));
  }
  return;
}

/* 100a8bb0  FUN_100a8bb0  (119 bytes)
 * undefined * FUN_100a8bb0(byte.conflict * param_1)
 */
undefined * __cdecl FUN_100a8bb0(byte_conflict *param_1)

{
  undefined1 local_108 [256];
  undefined4 local_8;
  
  if (DAT_102e1234 < 0x280) {
    local_8 = 0x140;
  }
  else {
    local_8 = 0x280;
  }
  FUN_100bb6e0(local_108,param_1);
  (*DAT_102e1574)();
  FUN_100bb6e0(&DAT_10320538,(byte_conflict *)"%s/gfx/vgui/%s.tga");
  return &DAT_10320538;
}

/* 100a8c50  FUN_100a8c50  (169 bytes)
 * undefined FUN_100a8c50(Label * param_1)
 */
void __thiscall FUN_100a8c50(void *this,Label *param_1)

{
  if (*(int *)((int)this + 600) < 100) {
    *(Label **)((int)this + *(int *)((int)this + 600) * 4 + 200) = param_1;
    *(int *)((int)this + 600) = *(int *)((int)this + 600) + 1;
    (**(code **)(*(int *)param_1 + 0x40))(this);
    (**(code **)(*(int *)param_1 + 0x20c))(3);
    if (*(int *)((int)this + 600) < 10) {
      thunk_FUN_1009d090(param_1,(Label)((char)*(undefined4 *)((int)this + 600) + '0'));
    }
    else if (*(int *)((int)this + 600) == 10) {
      thunk_FUN_1009d090(param_1,(Label)0x30);
    }
  }
  return;
}

/* 100a8d30  FUN_100a8d30  (222 bytes)
 * undefined4 FUN_100a8d30(int param_1)
 */
uint __thiscall FUN_100a8d30(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)((int)this + 600) <= local_c) {
      return (uint)this & 0xffffff00;
    }
    iVar2 = (**(code **)(**(int **)((int)this + local_c * 4 + 200) + 0x260))();
    if ((iVar2 == 0) &&
       (cVar1 = thunk_FUN_1009d0d0(*(int *)((int)this + local_c * 4 + 200)), cVar1 == param_1))
    break;
    local_c = local_c + 1;
  }
  iVar2 = thunk_FUN_1009e140(*(int *)((int)this + local_c * 4 + 200));
  if (iVar2 != 0) {
    uVar3 = thunk_FUN_1009e140(*(int *)((int)this + local_c * 4 + 200));
    uVar4 = thunk_FUN_100aefd0(DAT_102e15e0,uVar3);
    return uVar4 & 0xffffff00;
  }
  uVar3 = (**(code **)(**(int **)((int)this + local_c * 4 + 200) + 600))();
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

/* 100a8e50  FUN_100a8e50  (135 bytes)
 * undefined FUN_100a8e50(int param_1)
 */
void __fastcall FUN_100a8e50(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  while( true ) {
    iVar1 = thunk_FUN_100b0a70(param_1);
    if (iVar1 <= local_c) break;
    (**(code **)(**(int **)(param_1 + 200 + local_c * 4) + 0x234))(0);
    iVar1 = thunk_FUN_1009e140(*(int *)(param_1 + 200 + local_c * 4));
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_1009e140(*(int *)(param_1 + 200 + local_c * 4));
      thunk_FUN_100a8e50(iVar1);
    }
    local_c = local_c + 1;
  }
  return;
}

/* 100a8f00  FUN_100a8f00  (94 bytes)
 * undefined4 FUN_100a8f00(int param_1)
 */
undefined4 __thiscall FUN_100a8f00(void *this,int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    iVar1 = thunk_FUN_100b0a70((int)this);
    if (iVar1 <= local_c) {
      return 0;
    }
    iVar1 = thunk_FUN_1009e140(*(int *)((int)this + local_c * 4 + 200));
    if (iVar1 == param_1) break;
    local_c = local_c + 1;
  }
  return *(undefined4 *)((int)this + local_c * 4 + 200);
}

/* 100a8f80  FUN_100a8f80  (569 bytes)
 * undefined1 FUN_100a8f80(int param_1, char param_2)
 */
undefined1 __thiscall FUN_100a8f80(void *this,int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  int local_1c;
  undefined1 local_15;
  undefined1 local_14 [4];
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_15 = 0;
  local_8 = this;
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)this)(*(undefined4 *)((int)this + 4),param_1);
  }
  local_1c = 0;
  do {
    if (local_8[0x96] <= local_1c) {
      (**(code **)(*local_8 + 8))(local_8[3],local_c + 1);
      return local_15;
    }
    iVar2 = thunk_FUN_100b0310(local_8[local_1c + 0x32]);
    if ((((iVar2 == 0) || (iVar2 == DAT_10320530)) &&
        (iVar2 = (**(code **)(*(int *)local_8[local_1c + 0x32] + 0x260))(), iVar2 == 0)) &&
       (param_2 == '\0')) {
      iVar2 = thunk_FUN_1009e140(local_8[local_1c + 0x32]);
      if (iVar2 != 0) {
        cVar1 = '\0';
        iVar2 = local_8[2] + local_c;
        pvVar3 = (void *)thunk_FUN_1009e140(local_8[local_1c + 0x32]);
        cVar1 = thunk_FUN_100a8f80(pvVar3,iVar2,cVar1);
        if (cVar1 == '\0') {
          (**(code **)(*(int *)local_8[local_1c + 0x32] + 0x24))(0);
          goto LAB_100a8fbb;
        }
      }
      (**(code **)(*(int *)local_8[local_1c + 0x32] + 0x24))(1);
      (**(code **)(*(int *)local_8[local_1c + 0x32] + 4))(&local_10,local_14);
      (*(code *)**(undefined4 **)local_8[local_1c + 0x32])(local_10,local_c);
      lVar4 = __ftol();
      local_c = (int)lVar4;
      local_15 = 1;
    }
    else {
      (**(code **)(*(int *)local_8[local_1c + 0x32] + 0x24))(0);
      iVar2 = thunk_FUN_1009e140(local_8[local_1c + 0x32]);
      if (iVar2 != 0) {
        cVar1 = '\x01';
        iVar2 = local_8[2] + local_c;
        pvVar3 = (void *)thunk_FUN_1009e140(local_8[local_1c + 0x32]);
        thunk_FUN_100a8f80(pvVar3,iVar2,cVar1);
      }
    }
LAB_100a8fbb:
    local_1c = local_1c + 1;
  } while( true );
}

/* 100a9250  FUN_100a9250  (226 bytes)
 * undefined FUN_100a9250(int param_1)
 */
void __thiscall FUN_100a9250(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  int local_18;
  int local_10;
  int local_c;
  
  local_c = *(int *)((int)this + 8) + param_1;
  local_10 = 0;
  iVar1 = local_c + *(int *)((int)this + 0x10);
  if (DAT_102e1238 < iVar1) {
    while (local_10 < iVar1 - DAT_102e1238) {
      lVar2 = __ftol();
      local_10 = (int)lVar2;
    }
    local_c = local_c - local_10;
    if (local_c < 0) {
      local_10 = local_10 + local_c;
      local_c = 0;
    }
  }
  for (local_18 = 0; local_18 < *(int *)((int)this + 600); local_18 = local_18 + 1) {
    thunk_FUN_1009d140(*(void **)((int)this + local_18 * 4 + 200),local_10);
  }
  (*(code *)**(undefined4 **)this)(*(undefined4 *)((int)this + 4),local_c);
  return;
}

/* 100a9370  FUN_100a9370  (64 bytes)
 * undefined FUN_100a9370(int * param_1)
 */
void __fastcall FUN_100a9370(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(1);
  if (param_1[0x2f] != 0) {
    thunk_FUN_100a9370((int *)param_1[0x2f]);
  }
  return;
}

/* 100a93c0  FUN_100a93c0  (958 bytes)
 * Panel * FUN_100a93c0(int * param_1, int param_2)
 */
Panel * FUN_100a93c0(int *param_1,int param_2)

{
  Panel *pPVar1;
  Panel *pPVar2;
  Panel *pPVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  Panel *local_94;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e60bc;
  local_10 = ExceptionList;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &local_10;
  lVar6 = __ftol();
  if (param_2 != 0) {
    thunk_FUN_100b0a10(param_2);
    lVar7 = __ftol();
    local_18 = (int)lVar7;
    thunk_FUN_100b0a40(param_2);
    thunk_FUN_100b0a70(*(int *)(local_14 + 0xad4));
    lVar7 = __ftol();
    local_1c = (int)lVar7;
  }
  pvVar4 = operator_new(0x25c);
  local_8 = 0;
  if (pvVar4 == (void *)0x0) {
    local_94 = (Panel *)0x0;
  }
  else {
    local_94 = thunk_FUN_100b0440(pvVar4,param_2,local_18,local_1c,(int)lVar6,0);
  }
  pPVar1 = local_94;
  local_8 = 0xffffffff;
  (**(code **)(*(int *)local_94 + 0x40))(local_14);
  thunk_FUN_1009d100(param_1,(int)local_94);
  (**(code **)(*param_1 + 0x20c))(3);
  pvVar4 = operator_new(0xc);
  local_8 = 1;
  if (pvVar4 == (void *)0x0) {
    local_94 = (Panel *)0x0;
  }
  else {
    local_94 = (Panel *)thunk_FUN_100b0fd0(pvVar4,param_1,local_94);
  }
  pPVar2 = local_94;
  local_8 = 0xffffffff;
  (**(code **)(*param_1 + 0x70))(local_94);
  pvVar4 = operator_new(0xd4);
  local_8 = 2;
  if (pvVar4 == (void *)0x0) {
    local_94 = (Panel *)0x0;
  }
  else {
    lVar6 = __ftol();
    iVar5 = (int)lVar6;
    lVar6 = __ftol();
    local_94 = (Panel *)thunk_FUN_1009d580(pvVar4,"arrow",(int)lVar6,iVar5);
  }
  pPVar3 = local_94;
  local_8 = 0xffffffff;
  (**(code **)(*(int *)local_94 + 0x40))(param_1);
  (**(code **)(*(int *)local_94 + 0x70))(pPVar2);
  (**(code **)(*(int *)local_94 + 4))(&local_18,&local_1c);
  (**(code **)(*(int *)local_94 + 0x22c))();
  lVar6 = __ftol();
  (**(code **)(*(int *)local_94 + 0x230))((int)lVar6);
  lVar6 = __ftol();
  (*(code *)**(undefined4 **)local_94)((int)lVar6);
  if ((char)param_1[0x4a] == '\0') {
    pvVar4 = operator_new(0xc);
    local_8 = 3;
    if (pvVar4 == (void *)0x0) {
      local_94 = (Panel *)0x0;
    }
    else {
      local_94 = (Panel *)thunk_FUN_1009e1d0(pvVar4,param_1);
    }
    local_8 = 0xffffffff;
    (**(code **)(*(int *)pPVar3 + 0x70))(local_94);
  }
  ExceptionList = local_10;
  return pPVar1;
}

/* 100a9870  FUN_100a9870  (52 bytes)
 * void * FUN_100a9870(uint param_1)
 */
void * __cdecl FUN_100a9870(uint param_1)

{
  void *_Dst;
  
  _Dst = operator_new(param_1);
  _memset(_Dst,0,param_1);
  return _Dst;
}

/* 100a98c0  FUN_100a98c0  (877 bytes)
 * Panel * FUN_100a98c0(int param_1, int param_2, int param_3, int param_4)
 */
Panel * __thiscall FUN_100a98c0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  InputSignal *pIVar1;
  App *pAVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  InputSignal *local_80;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  Panel *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e60fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  thunk_FUN_100a16e0(local_14 + 0x22c,param_3);
  local_8 = 0;
  *(undefined ***)local_14 = &PTR_setPos_1027639c;
  DAT_102e15e0 = local_14;
  *(undefined4 *)(local_14 + 0xc4) = 0;
  *(undefined4 *)(local_14 + 0xaa0) = 0;
  *(undefined4 *)(local_14 + 0xaa4) = 0;
  *(undefined4 *)(local_14 + 0xaa8) = 0;
  *(undefined4 *)(local_14 + 0x884) = 0;
  *(undefined4 *)(local_14 + 0xa9c) = 0;
  *(undefined4 *)(local_14 + 0xad4) = 0;
  *(undefined4 *)(local_14 + 0xaac) = 0;
  thunk_FUN_100a9ec0(local_14);
  pIVar1 = operator_new(8);
  local_8._0_1_ = 1;
  if (pIVar1 == (InputSignal *)0x0) {
    local_80 = (InputSignal *)0x0;
  }
  else {
    local_80 = thunk_FUN_100a9d10(pIVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  vgui::Panel::addInputSignal(local_14,local_80);
  pAVar2 = vgui::App::getInstance();
  piVar3 = (int *)(**(code **)(*(int *)pAVar2 + 0x54))();
  iVar4 = thunk_FUN_100a28e0(local_14 + 0x22c,(byte_conflict *)"Primary Button Text");
  uVar5 = thunk_FUN_100a29a0(local_14 + 0x22c,iVar4);
  (**(code **)(*piVar3 + 8))(1,uVar5);
  thunk_FUN_100a29d0(local_14 + 0x22c,iVar4,&local_18,&local_1c,&local_20,&local_24);
  (**(code **)*piVar3)(3,local_18,local_1c,local_20,local_24);
  thunk_FUN_100a2a40(local_14 + 0x22c,iVar4,&local_18,&local_1c,&local_20,&local_24);
  (**(code **)*piVar3)(5,local_18,local_1c,local_20,local_24);
  thunk_FUN_100a2ab0(local_14 + 0x22c,iVar4,&local_18,&local_1c,&local_20,&local_24);
  (**(code **)*piVar3)(7,local_18,local_1c,local_20,local_24);
  thunk_FUN_100a2b20(local_14 + 0x22c,iVar4,&local_18,&local_1c,&local_20,&local_24);
  (**(code **)*piVar3)(4,local_18,local_1c,local_20,local_24);
  thunk_FUN_100a2c70(local_14 + 0x22c,iVar4,&local_18,&local_1c,&local_20,&local_24);
  (**(code **)*piVar3)(6,0xb2,0x76,0,0);
  iVar4 = thunk_FUN_100a28e0(local_14 + 0x22c,(byte_conflict *)"Scoreboard Text");
  uVar5 = thunk_FUN_100a29a0(local_14 + 0x22c,iVar4);
  (**(code **)(*piVar3 + 8))(2,uVar5);
  iVar4 = thunk_FUN_100a28e0(local_14 + 0x22c,"CommandMenu Text");
  uVar5 = thunk_FUN_100a29a0(local_14 + 0x22c,iVar4);
  (**(code **)(*piVar3 + 8))(3,uVar5);
  pAVar2 = vgui::App::getInstance();
  (**(code **)(*(int *)pAVar2 + 0x50))(piVar3);
  thunk_FUN_100aa0f0((int)local_14);
  thunk_FUN_100b01b0((int)local_14);
  thunk_FUN_100b0340((int)local_14);
  thunk_FUN_100af3c0((int)local_14);
  thunk_FUN_100aa190();
  thunk_FUN_100af550((int)local_14);
  thunk_FUN_100b04d0();
  ExceptionList = local_10;
  return local_14;
}

/* 100a9d10  FUN_100a9d10  (39 bytes)
 * InputSignal * FUN_100a9d10(InputSignal * param_1)
 */
InputSignal * __fastcall FUN_100a9d10(InputSignal *param_1)

{
  vgui::InputSignal::InputSignal(param_1);
  *(undefined ***)param_1 = &PTR_thunk_FUN_100a9d40_10276604;
  return param_1;
}

/* 100a9d40  FUN_100a9d40  (21 bytes)
 * undefined FUN_100a9d40(void)
 * called by: thunk_FUN_100a9d40
 */
void FUN_100a9d40(void)

{
  return;
}

/* 100a9d60  FUN_100a9d60  (21 bytes)
 * undefined FUN_100a9d60(void)
 * called by: thunk_FUN_100a9d60
 */
void FUN_100a9d60(void)

{
  return;
}

/* 100a9d80  FUN_100a9d80  (21 bytes)
 * undefined FUN_100a9d80(void)
 * called by: thunk_FUN_100a9d80
 */
void FUN_100a9d80(void)

{
  return;
}

/* 100a9da0  FUN_100a9da0  (41 bytes)
 * undefined FUN_100a9da0(int param_1)
 * called by: thunk_FUN_100a9da0
 */
void FUN_100a9da0(int param_1)

{
  if (param_1 != 0) {
    (*DAT_102e14a8)("ForceCloseCommandMenu\n");
  }
  return;
}

/* 100a9de0  FUN_100a9de0  (21 bytes)
 * undefined FUN_100a9de0(void)
 * called by: thunk_FUN_100a9de0
 */
void FUN_100a9de0(void)

{
  return;
}

/* 100a9e00  FUN_100a9e00  (21 bytes)
 * undefined FUN_100a9e00(void)
 * called by: thunk_FUN_100a9e00
 */
void FUN_100a9e00(void)

{
  return;
}

/* 100a9e20  FUN_100a9e20  (21 bytes)
 * undefined FUN_100a9e20(void)
 * called by: thunk_FUN_100a9e20
 */
void FUN_100a9e20(void)

{
  return;
}

/* 100a9e40  FUN_100a9e40  (21 bytes)
 * undefined FUN_100a9e40(void)
 * called by: thunk_FUN_100a9e40
 */
void FUN_100a9e40(void)

{
  return;
}

/* 100a9e60  FUN_100a9e60  (21 bytes)
 * undefined FUN_100a9e60(void)
 * called by: thunk_FUN_100a9e60
 */
void FUN_100a9e60(void)

{
  return;
}

/* 100a9e80  FUN_100a9e80  (21 bytes)
 * undefined FUN_100a9e80(void)
 * called by: thunk_FUN_100a9e80
 */
void FUN_100a9e80(void)

{
  return;
}

/* 100a9ea0  FUN_100a9ea0  (21 bytes)
 * undefined FUN_100a9ea0(void)
 * called by: thunk_FUN_100a9ea0
 */
void FUN_100a9ea0(void)

{
  return;
}

/* 100a9ec0  FUN_100a9ec0  (448 bytes)
 * undefined FUN_100a9ec0(void * param_1)
 */
void __fastcall FUN_100a9ec0(void *param_1)

{
  App *pAVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_c;
  
  if (*(int *)((int)param_1 + 0xaa0) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0xaa0) + 0x214))();
  }
  if (*(int *)((int)param_1 + 0xaa4) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0xaa4) + 0x214))();
  }
  if (*(int *)((int)param_1 + 0xaa8) != 0) {
    thunk_FUN_100a3aa0(*(int *)((int)param_1 + 0xaa8));
    thunk_FUN_100aeee0((int)param_1);
  }
  if (*(int *)((int)param_1 + 0x884) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0x884) + 0x24))(0);
  }
  if (*(int *)((int)param_1 + 0xaac) != 0) {
    thunk_FUN_100b4bf0(*(int **)((int)param_1 + 0xaac));
  }
  thunk_FUN_100b0010((int)param_1);
  thunk_FUN_100aedd0(param_1);
  *(undefined4 *)((int)param_1 + 0x23c) = 1;
  *(undefined4 *)((int)param_1 + 0x8b8) = 0;
  *(undefined4 *)((int)param_1 + 0x20c) = 0;
  DAT_10320530 = 0;
  DAT_10320644 = 0;
  FUN_100bba20((uint *)((int)param_1 + 0xa5c),(uint *)"");
  FUN_100bba20((uint *)((int)param_1 + 0xab0),(uint *)"");
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    *(undefined4 *)((int)param_1 + local_c * 4 + 0x894) = 0;
    FUN_100bba20((uint *)((int)param_1 + local_c * 0x40 + 0x8bc),(uint *)"");
  }
  uVar3 = 1;
  pAVar1 = vgui::App::getInstance();
  piVar2 = (int *)(**(code **)(*(int *)pAVar1 + 0x54))(uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x14))();
  pAVar1 = vgui::App::getInstance();
  (**(code **)(*(int *)pAVar1 + 0x8c))(uVar3);
  return;
}

/* 100aa0f0  FUN_100aa0f0  (121 bytes)
 * undefined FUN_100aa0f0(int param_1)
 */
void __fastcall FUN_100aa0f0(int param_1)

{
  int *piVar1;
  int *local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e611b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = thunk_FUN_100b4ba0(8);
  local_8 = 0;
  if (piVar1 == (int *)0x0) {
    local_60 = (int *)0x0;
  }
  else {
    local_60 = thunk_FUN_100b2c70(piVar1);
  }
  *(int **)(param_1 + 0xaac) = local_60;
  ExceptionList = local_10;
  return;
}

/* 100aa190  FUN_100aa190  (3156 bytes)
 * undefined FUN_100aa190(void)
 */
/* WARNING: Type propagation algorithm not settling */

void FUN_100aa190(void)

{
  bool bVar1;
  void *pvVar2;
  size_t sVar3;
  Panel *pPVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  Button *local_6b8;
  ActionSignal *local_6b4;
  Panel *local_6ac;
  int local_634;
  Button *local_630;
  int local_628;
  int local_620;
  char local_61c;
  undefined4 local_61b;
  undefined1 local_51d;
  undefined1 local_51c;
  undefined4 local_51b;
  undefined1 local_49d;
  char local_49c;
  undefined4 local_49b;
  undefined1 local_47d;
  Label local_47c;
  undefined4 local_47b;
  undefined1 local_45c;
  undefined4 local_45b;
  undefined1 local_43d;
  uint local_43c;
  char local_438 [28];
  int local_41c;
  uint local_418 [256];
  void *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e6184;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffff93c;
  ExceptionList = &pvStack_10;
  pvVar2 = operator_new(0x25c);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_6ac = (Panel *)0x0;
  }
  else {
    iVar10 = 300;
    lVar9 = __ftol();
    iVar6 = (int)lVar9;
    lVar9 = __ftol();
    local_6ac = thunk_FUN_100b0440(pvVar2,0,0,(int)lVar9,iVar6,iVar10);
  }
  local_8 = 0xffffffff;
  *(Panel **)((int)local_18 + 200) = local_6ac;
  (**(code **)(**(int **)((int)local_18 + 200) + 0x40))(local_18);
  (**(code **)(**(int **)((int)local_18 + 200) + 0x24))(0);
  *(undefined4 *)((int)local_18 + 0x210) = 1;
  *(undefined4 *)((int)local_18 + 0x224) = 0;
  *(undefined4 *)((int)local_18 + 0x220) = 0;
  *(undefined4 *)((int)local_18 + 0x21c) = 0;
  *(undefined4 *)((int)local_18 + 0x214) = 0;
  local_41c = (*DAT_102e1594)("commandmenu.txt",5,0);
  if (local_41c == 0) {
    (*DAT_102e14fc)("Unable to open commandmenu.txt\n");
    thunk_FUN_100aefd0(local_18,0);
    ExceptionList = pvStack_10;
    return;
  }
  local_8 = 1;
  thunk_FUN_10068580("#DetpackSet_For5Seconds",(char *)((int)local_18 + 0x9fc),0x20);
  thunk_FUN_10068580("#DetpackSet_For20Seconds",(char *)((int)local_18 + 0xa1c),0x20);
  thunk_FUN_10068580("#DetpackSet_For50Seconds",(char *)((int)local_18 + 0xa3c),0x20);
  *(undefined4 *)((int)local_18 + 0xad4) = *(undefined4 *)((int)local_18 + 200);
  local_43c._0_1_ = 'f';
  local_43c._1_1_ = 'i';
  local_43c._2_1_ = 'l';
  local_43c._3_1_ = 'e';
  builtin_strncpy(local_438," start",7);
  local_438[7] = '\0';
  local_438[8] = '\0';
  local_438[9] = '\0';
  local_438[10] = '\0';
  local_438[0xb] = '\0';
  local_438[0xc] = '\0';
  local_438[0xd] = '\0';
  local_438[0xe] = '\0';
  local_438[0xf] = '\0';
  local_438[0x10] = '\0';
  local_438[0x11] = '\0';
  local_438[0x12] = '\0';
  local_438[0x13] = '\0';
  local_438[0x14] = '\0';
  local_438[0x15] = '\0';
  local_438[0x16] = '\0';
  local_438[0x17] = '\0';
  local_438[0x18] = '\0';
  local_438[0x19] = '\0';
  local_438[0x1a] = '\0';
  local_438[0x1b] = 0;
  local_41c = (*DAT_102e1598)(local_41c,local_418);
  do {
    sVar3 = _strlen((char *)local_418);
    if ((sVar3 == 0) || (0x4f < *(int *)((int)local_18 + 0x210))) {
      FUN_100aae03();
      return;
    }
    while (((char)local_418[0] != '}' && (sVar3 = _strlen((char *)local_418), sVar3 != 0))) {
      local_45c = '\0';
      puVar7 = &local_45b;
      for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)puVar7 + 2) = 0;
      local_47c = (Label)0x0;
      puVar7 = &local_47b;
      for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)puVar7 + 2) = 0;
      local_49c = '\0';
      puVar7 = &local_49b;
      for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)puVar7 + 2) = 0;
      local_51c = '\0';
      puVar7 = &local_51b;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)puVar7 + 2) = 0;
      local_61c = '\0';
      puVar7 = &local_61b;
      for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)puVar7 + 2) = 0;
      local_620 = 0;
      bVar1 = false;
      local_628 = 0;
      bVar8 = true;
      if (*(int *)((int)local_18 + 0xad4) == 0) {
        (*DAT_102e14f8)("Error in Commandmenu.txt file after \'%s\'.\n",&local_43c);
        *(undefined4 *)((int)local_18 + 0xc4) = 0;
        ExceptionList = pvStack_10;
        return;
      }
      _strncpy(&local_49c,(char *)local_418,0x20);
      local_47d = 0;
      iVar6 = _strcmp(&local_49c,"CUSTOM");
      if (iVar6 == 0) {
        bVar1 = true;
        local_41c = (*DAT_102e1598)(local_41c,local_418);
      }
      else {
        iVar6 = _strcmp(&local_49c,"MAP");
        if (iVar6 == 0) {
          local_41c = (*DAT_102e1598)(local_41c,local_418);
          _strncpy(&local_61c,(char *)local_418,0x100);
          local_51d = 0;
          local_41c = (*DAT_102e1598)(local_41c,local_418);
        }
        else {
          iVar6 = _strncmp(&local_49c,"TEAM",4);
          if (iVar6 == 0) {
            local_628 = FUN_100c0d30((byte_conflict *)((int)&local_49b + 3));
            local_41c = (*DAT_102e1598)(local_41c,local_418);
          }
          else {
            for (local_634 = 1; local_634 < 10; local_634 = local_634 + 1) {
              iVar6 = _strcmp((char *)local_418,*(char **)(local_634 * 4 + 0x1028af28));
              if (iVar6 == 0) {
                local_620 = local_634;
                local_41c = (*DAT_102e1598)(local_41c,local_418);
                break;
              }
            }
          }
        }
      }
      _strncpy((char *)&local_47c,(char *)local_418,0x20);
      local_43d = 0;
      local_41c = (*DAT_102e1598)(local_41c,local_418);
      _strncpy(&local_45c,(char *)local_418,0x20);
      local_43d = 0;
      FUN_100bba20(&local_43c,(uint *)&local_45c);
      local_41c = (*DAT_102e1598)(local_41c,local_418);
      _strncpy(&local_51c,(char *)local_418,0x80);
      local_49d = 0;
      if (bVar1) {
        local_630 = thunk_FUN_100ab3f0(&local_45c,&local_51c);
        local_41c = (*DAT_102e1598)(local_41c,local_418);
        bVar8 = (char)local_418[0] == '{';
        if (bVar8) {
          FUN_100bba20((uint *)&local_51c,local_418);
        }
      }
      else if (local_61c == '\0') {
        if (local_628 == 0) {
          pvVar2 = operator_new(300);
          local_8._0_1_ = 4;
          if (pvVar2 == (void *)0x0) {
            local_6b8 = (Button *)0x0;
          }
          else {
            thunk_FUN_100b0a70(*(int *)((int)local_18 + 0xad4));
            lVar9 = __ftol();
            iVar6 = (int)lVar9;
            lVar9 = __ftol();
            iVar10 = (int)lVar9;
            lVar9 = __ftol();
            local_6b8 = thunk_FUN_1009cde0(pvVar2,local_620,&local_45c,0,(int)lVar9,iVar10,iVar6);
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          local_630 = local_6b8;
        }
        else {
          pvVar2 = operator_new(0x130);
          local_8._0_1_ = 3;
          if (pvVar2 == (void *)0x0) {
            local_6b8 = (Button *)0x0;
          }
          else {
            thunk_FUN_100b0a70(*(int *)((int)local_18 + 0xad4));
            lVar9 = __ftol();
            iVar6 = (int)lVar9;
            lVar9 = __ftol();
            iVar10 = (int)lVar9;
            lVar9 = __ftol();
            local_6b8 = thunk_FUN_100b2a20(pvVar2,local_628,&local_45c,0,(int)lVar9,iVar10,iVar6);
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          local_630 = local_6b8;
        }
      }
      else {
        pvVar2 = operator_new(0x22c);
        local_8._0_1_ = 2;
        if (pvVar2 == (void *)0x0) {
          local_6b8 = (Button *)0x0;
        }
        else {
          thunk_FUN_100b0a70(*(int *)((int)local_18 + 0xad4));
          lVar9 = __ftol();
          iVar6 = (int)lVar9;
          lVar9 = __ftol();
          iVar10 = (int)lVar9;
          lVar9 = __ftol();
          local_6b8 = thunk_FUN_100b2850(pvVar2,&local_61c,&local_45c,0,(int)lVar9,iVar10,iVar6);
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        local_630 = local_6b8;
      }
      if (local_630 != (Button *)0x0) {
        thunk_FUN_100a8c50(*(void **)((int)local_18 + 0xad4),(Label *)local_630);
        thunk_FUN_1009d090((Label *)local_630,local_47c);
        thunk_FUN_1009d3f0(local_630,*(undefined4 *)((int)local_18 + 0xad4));
        (**(code **)(*(int *)local_630 + 0x20c))(3);
      }
      if (local_51c == '{') {
        if (*(int *)((int)local_18 + 0x210) < 0x50) {
          pPVar4 = thunk_FUN_100a93c0((int *)local_630,*(int *)((int)local_18 + 0xad4));
          *(Panel **)((int)local_18 + *(int *)((int)local_18 + 0x210) * 4 + 200) = pPVar4;
          *(undefined4 *)((int)local_18 + 0xad4) =
               *(undefined4 *)((int)local_18 + *(int *)((int)local_18 + 0x210) * 4 + 200);
          *(int *)((int)local_18 + 0x210) = *(int *)((int)local_18 + 0x210) + 1;
        }
        else {
          (*DAT_102e14f8)("Too many menus in commandmenu.txt past \'%s\'\n",&local_43c);
        }
      }
      else if (!bVar1) {
        pvVar2 = operator_new(0x108);
        local_8._0_1_ = 5;
        if (pvVar2 == (void *)0x0) {
          local_6b4 = (ActionSignal *)0x0;
        }
        else {
          local_6b4 = thunk_FUN_100b0aa0(pvVar2,&local_51c);
        }
        local_8._0_1_ = 1;
        (**(code **)(*(int *)local_630 + 0x240))(local_6b4);
        pvVar2 = operator_new(0xc);
        local_8._0_1_ = 6;
        if (pvVar2 == (void *)0x0) {
          local_6b4 = (ActionSignal *)0x0;
        }
        else {
          local_6b4 = (ActionSignal *)
                      thunk_FUN_100b0fd0(pvVar2,local_630,*(undefined4 *)((int)local_18 + 0xad4));
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        (**(code **)(*(int *)local_630 + 0x70))(local_6b4);
      }
      if (bVar8) {
        local_41c = (*DAT_102e1598)(local_41c,local_418);
      }
    }
    uVar5 = thunk_FUN_1009e170(*(int *)((int)local_18 + 0xad4));
    *(undefined4 *)((int)local_18 + 0xad4) = uVar5;
    local_41c = (*DAT_102e1598)(local_41c,local_418);
  } while( true );
}

/* 100aae01  FUN_100aae01  (2 bytes)
 * undefined FUN_100aae01()
 */
void FUN_100aae01(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

/* 100aae03  FUN_100aae03  (73 bytes)
 * undefined FUN_100aae03(void)
 * called by: FUN_100aa190
 */
void FUN_100aae03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  thunk_FUN_100af650(*(void **)(unaff_EBP + -0x14),0);
  thunk_FUN_100aefd0(*(void **)(unaff_EBP + -0x14),0);
  (*DAT_102e159c)(*(undefined4 *)(unaff_EBP + -0x418));
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc4) = 1;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

/* 100ab180  FUN_100ab180  (492 bytes)
 * Panel * FUN_100ab180(int * param_1, int param_2)
 */
Panel * FUN_100ab180(int *param_1,int param_2)

{
  Button *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  void *this;
  longlong lVar6;
  int iVar7;
  Button BVar8;
  Button *local_174;
  char local_120 [256];
  Button *local_20;
  int local_1c;
  Panel *local_18;
  int local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e61cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = thunk_FUN_100a93c0(param_1,param_2);
  *(Panel **)(local_14 + 200 + *(int *)(local_14 + 0x210) * 4) = local_18;
  *(int *)(local_14 + 0x210) = *(int *)(local_14 + 0x210) + 1;
  for (local_1c = 1; local_1c < 10; local_1c = local_1c + 1) {
    pBVar1 = operator_new(300);
    local_8 = 0;
    if (pBVar1 == (Button *)0x0) {
      local_174 = (Button *)0x0;
    }
    else {
      BVar8 = (Button)0x0;
      lVar6 = __ftol();
      iVar2 = (int)lVar6;
      lVar6 = __ftol();
      iVar3 = (int)lVar6;
      lVar6 = __ftol();
      iVar4 = (int)lVar6;
      iVar7 = 0;
      pcVar5 = thunk_FUN_10068750((&PTR_s__Civilian_1028af54)[local_1c]);
      local_174 = thunk_FUN_1009cd50(pBVar1,pcVar5,iVar7,iVar4,iVar3,iVar2,BVar8);
    }
    local_8 = 0xffffffff;
    local_20 = local_174;
    FUN_100bb6e0(local_120,(byte_conflict *)"%s %d");
    this = operator_new(0x108);
    local_8 = 1;
    if (this == (void *)0x0) {
      local_174 = (Button *)0x0;
    }
    else {
      local_174 = (Button *)thunk_FUN_100b0aa0(this,local_120);
    }
    local_8 = 0xffffffff;
    (**(code **)(*(int *)local_20 + 0x240))(local_174);
    thunk_FUN_100a8c50(local_18,(Label *)local_20);
  }
  ExceptionList = local_10;
  return local_18;
}

/* 100ab3f0  FUN_100ab3f0  (11371 bytes)
 * Button * FUN_100ab3f0(char * param_1, char * param_2)
 */
Button * FUN_100ab3f0(char *param_1,char *param_2)

{
  int iVar1;
  Button *pBVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  Button BVar9;
  Button *local_5a8;
  Button *local_5a0;
  undefined1 local_330 [256];
  int local_230;
  Panel *local_22c;
  Button *local_228;
  char local_224 [256];
  int local_124;
  char local_120 [256];
  int local_20;
  Panel *local_1c;
  Button *local_18;
  int local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e65a6;
  local_10 = ExceptionList;
  local_18 = (Button *)0x0;
  local_1c = (Panel *)0x0;
  ExceptionList = &local_10;
  iVar1 = _strcmp(param_2,"!CHANGETEAM");
  if (iVar1 == 0) {
    pBVar2 = operator_new(300);
    local_8 = 0;
    if (pBVar2 == (Button *)0x0) {
      local_5a0 = (Button *)0x0;
    }
    else {
      BVar9 = (Button)0x0;
      lVar7 = __ftol();
      iVar1 = (int)lVar7;
      lVar7 = __ftol();
      iVar3 = (int)lVar7;
      lVar7 = __ftol();
      local_5a0 = thunk_FUN_1009cd50(pBVar2,param_1,0,(int)lVar7,iVar3,iVar1,BVar9);
    }
    local_8 = 0xffffffff;
    local_18 = local_5a0;
    local_1c = thunk_FUN_100a93c0((int *)local_5a0,*(int *)(local_14 + 0xad4));
    *(Panel **)(local_14 + 200 + *(int *)(local_14 + 0x210) * 4) = local_1c;
    *(int *)(local_14 + 0x210) = *(int *)(local_14 + 0x210) + 1;
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      FUN_100bb6e0(local_120,(byte_conflict *)"jointeam %d");
      pvVar4 = operator_new(0x130);
      local_8 = 1;
      if (pvVar4 == (void *)0x0) {
        local_5a0 = (Button *)0x0;
      }
      else {
        lVar7 = __ftol();
        iVar1 = (int)lVar7;
        lVar7 = __ftol();
        iVar3 = (int)lVar7;
        lVar7 = __ftol();
        local_5a0 = thunk_FUN_100b1c20(pvVar4,local_20 + 1,"teamname",0,(int)lVar7,iVar3,iVar1);
      }
      local_8 = 0xffffffff;
      *(Button **)(local_14 + 0x840 + local_20 * 4) = local_5a0;
      pvVar4 = operator_new(0x108);
      local_8 = 2;
      if (pvVar4 == (void *)0x0) {
        local_5a0 = (Button *)0x0;
      }
      else {
        local_5a0 = (Button *)thunk_FUN_100b0b10(pvVar4,local_120);
      }
      local_8 = 0xffffffff;
      (**(code **)(**(int **)(local_14 + 0x840 + local_20 * 4) + 0x240))(local_5a0);
      thunk_FUN_100a8c50(local_1c,*(Label **)(local_14 + 0x840 + local_20 * 4));
    }
    pvVar4 = operator_new(0x130);
    local_8 = 3;
    if (pvVar4 == (void *)0x0) {
      local_5a0 = (Button *)0x0;
    }
    else {
      lVar7 = __ftol();
      iVar1 = (int)lVar7;
      lVar7 = __ftol();
      iVar3 = (int)lVar7;
      lVar7 = __ftol();
      iVar5 = (int)lVar7;
      iVar8 = 0;
      pcVar6 = thunk_FUN_10068750("Auto assign");
      local_5a0 = thunk_FUN_100b1c20(pvVar4,5,pcVar6,iVar8,iVar5,iVar3,iVar1);
    }
    local_8 = 0xffffffff;
    *(Button **)(local_14 + 0x850) = local_5a0;
    pvVar4 = operator_new(0x108);
    local_8 = 4;
    if (pvVar4 == (void *)0x0) {
      local_5a0 = (Button *)0x0;
    }
    else {
      local_5a0 = (Button *)thunk_FUN_100b0aa0(pvVar4,"jointeam 5");
    }
    local_8 = 0xffffffff;
    (**(code **)(**(int **)(local_14 + 0x850) + 0x240))(local_5a0);
    thunk_FUN_100a8c50(local_1c,*(Label **)(local_14 + 0x850));
  }
  else {
    iVar1 = _strcmp(param_2,"!CHANGECLASS");
    if (iVar1 == 0) {
      pBVar2 = operator_new(0x130);
      local_8 = 5;
      if (pBVar2 == (Button *)0x0) {
        local_5a0 = (Button *)0x0;
      }
      else {
        BVar9 = (Button)0x0;
        lVar7 = __ftol();
        iVar1 = (int)lVar7;
        lVar7 = __ftol();
        iVar3 = (int)lVar7;
        lVar7 = __ftol();
        local_5a0 = thunk_FUN_1009b050(pBVar2,0xffffffff,param_1,0,(int)lVar7,iVar3,iVar1,BVar9);
      }
      local_8 = 0xffffffff;
      local_18 = local_5a0;
      local_1c = thunk_FUN_100a93c0((int *)local_5a0,*(int *)(local_14 + 0xad4));
      *(Panel **)(local_14 + 200 + *(int *)(local_14 + 0x210) * 4) = local_1c;
      *(int *)(local_14 + 0x210) = *(int *)(local_14 + 0x210) + 1;
      for (local_124 = 1; local_124 < 0xb; local_124 = local_124 + 1) {
        thunk_FUN_10068580((&PTR_s__Civilian_1028af54)[local_124],local_224,0x100);
        pBVar2 = operator_new(0x130);
        local_8 = 6;
        if (pBVar2 == (Button *)0x0) {
          local_5a0 = (Button *)0x0;
        }
        else {
          BVar9 = (Button)0x0;
          lVar7 = __ftol();
          iVar1 = (int)lVar7;
          lVar7 = __ftol();
          iVar3 = (int)lVar7;
          lVar7 = __ftol();
          local_5a0 = thunk_FUN_1009b050(pBVar2,local_124,local_224,0,(int)lVar7,iVar3,iVar1,BVar9);
        }
        local_8 = 0xffffffff;
        local_228 = local_5a0;
        FUN_100bb6e0(local_224,"%s");
        pvVar4 = operator_new(0x108);
        local_8 = 7;
        if (pvVar4 == (void *)0x0) {
          local_5a0 = (Button *)0x0;
        }
        else {
          local_5a0 = (Button *)thunk_FUN_100b0f90(pvVar4,local_224);
        }
        local_8 = 0xffffffff;
        (**(code **)(*(int *)local_228 + 0x240))(local_5a0);
        thunk_FUN_100a8c50(local_1c,(Label *)local_228);
      }
    }
    else {
      iVar1 = _strcmp(param_2,"!MAPBRIEFING");
      if (iVar1 == 0) {
        pBVar2 = operator_new(300);
        local_8 = 8;
        if (pBVar2 == (Button *)0x0) {
          local_5a8 = (Button *)0x0;
        }
        else {
          BVar9 = (Button)0x0;
          lVar7 = __ftol();
          iVar1 = (int)lVar7;
          lVar7 = __ftol();
          iVar3 = (int)lVar7;
          thunk_FUN_100b0a70(*(int *)(local_14 + 0xad4));
          lVar7 = __ftol();
          local_5a8 = thunk_FUN_1009cd50(pBVar2,param_1,0,(int)lVar7,iVar3,iVar1,BVar9);
        }
        local_8 = 0xffffffff;
        local_18 = local_5a8;
        pvVar4 = operator_new(8);
        local_8 = 9;
        if (pvVar4 == (void *)0x0) {
          local_5a0 = (Button *)0x0;
        }
        else {
          local_5a0 = (Button *)thunk_FUN_1009ae20(pvVar4,4);
        }
        local_8 = 0xffffffff;
        (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
        pvVar4 = operator_new(0xc);
        local_8 = 10;
        if (pvVar4 == (void *)0x0) {
          local_5a0 = (Button *)0x0;
        }
        else {
          local_5a0 = (Button *)
                      thunk_FUN_100b0fd0(pvVar4,local_18,*(undefined4 *)(local_14 + 0xad4));
        }
        local_8 = 0xffffffff;
        (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
      }
      else {
        iVar1 = _strcmp(param_2,"!CLASSDESC");
        if (iVar1 == 0) {
          pBVar2 = operator_new(0x130);
          local_8 = 0xb;
          if (pBVar2 == (Button *)0x0) {
            local_5a8 = (Button *)0x0;
          }
          else {
            BVar9 = (Button)0x0;
            lVar7 = __ftol();
            iVar1 = (int)lVar7;
            lVar7 = __ftol();
            iVar3 = (int)lVar7;
            thunk_FUN_100b0a70(*(int *)(local_14 + 0xad4));
            lVar7 = __ftol();
            local_5a8 = thunk_FUN_1009b050(pBVar2,0,param_1,0,(int)lVar7,iVar3,iVar1,BVar9);
          }
          local_8 = 0xffffffff;
          local_18 = local_5a8;
          pvVar4 = operator_new(8);
          local_8 = 0xc;
          if (pvVar4 == (void *)0x0) {
            local_5a0 = (Button *)0x0;
          }
          else {
            local_5a0 = (Button *)thunk_FUN_1009ae20(pvVar4,6);
          }
          local_8 = 0xffffffff;
          (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
          pvVar4 = operator_new(0xc);
          local_8 = 0xd;
          if (pvVar4 == (void *)0x0) {
            local_5a0 = (Button *)0x0;
          }
          else {
            local_5a0 = (Button *)
                        thunk_FUN_100b0fd0(pvVar4,local_18,*(undefined4 *)(local_14 + 0xad4));
          }
          local_8 = 0xffffffff;
          (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
        }
        else {
          iVar1 = _strcmp(param_2,"!SERVERINFO");
          if (iVar1 == 0) {
            pBVar2 = operator_new(0x130);
            local_8 = 0xe;
            if (pBVar2 == (Button *)0x0) {
              local_5a8 = (Button *)0x0;
            }
            else {
              BVar9 = (Button)0x0;
              lVar7 = __ftol();
              iVar1 = (int)lVar7;
              lVar7 = __ftol();
              iVar3 = (int)lVar7;
              thunk_FUN_100b0a70(*(int *)(local_14 + 0xad4));
              lVar7 = __ftol();
              local_5a8 = thunk_FUN_1009b050(pBVar2,0,param_1,0,(int)lVar7,iVar3,iVar1,BVar9);
            }
            local_8 = 0xffffffff;
            local_18 = local_5a8;
            pvVar4 = operator_new(8);
            local_8 = 0xf;
            if (pvVar4 == (void *)0x0) {
              local_5a0 = (Button *)0x0;
            }
            else {
              local_5a0 = (Button *)thunk_FUN_1009ae20(pvVar4,5);
            }
            local_8 = 0xffffffff;
            (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
            pvVar4 = operator_new(0xc);
            local_8 = 0x10;
            if (pvVar4 == (void *)0x0) {
              local_5a0 = (Button *)0x0;
            }
            else {
              local_5a0 = (Button *)
                          thunk_FUN_100b0fd0(pvVar4,local_18,*(undefined4 *)(local_14 + 0xad4));
            }
            local_8 = 0xffffffff;
            (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
          }
          else {
            iVar1 = _strcmp(param_2,"!SPY");
            if (iVar1 == 0) {
              pvVar4 = operator_new(0x134);
              local_8 = 0x11;
              if (pvVar4 == (void *)0x0) {
                local_5a0 = (Button *)0x0;
              }
              else {
                lVar7 = __ftol();
                iVar1 = (int)lVar7;
                lVar7 = __ftol();
                iVar3 = (int)lVar7;
                lVar7 = __ftol();
                local_5a0 = thunk_FUN_100b2020(pvVar4,0,param_1,0,(int)lVar7,iVar3,iVar1);
              }
              local_18 = local_5a0;
            }
            else {
              iVar1 = _strcmp(param_2,"!FEIGN");
              if (iVar1 == 0) {
                pvVar4 = operator_new(0x130);
                local_8 = 0x12;
                if (pvVar4 == (void *)0x0) {
                  local_5a0 = (Button *)0x0;
                }
                else {
                  lVar7 = __ftol();
                  iVar1 = (int)lVar7;
                  lVar7 = __ftol();
                  iVar3 = (int)lVar7;
                  lVar7 = __ftol();
                  local_5a0 = thunk_FUN_100b1dd0(pvVar4,0,param_1,0,(int)lVar7,iVar3,iVar1);
                }
                local_8 = 0xffffffff;
                local_18 = local_5a0;
                pvVar4 = operator_new(0x108);
                local_8 = 0x13;
                if (pvVar4 == (void *)0x0) {
                  local_5a0 = (Button *)0x0;
                }
                else {
                  local_5a0 = (Button *)thunk_FUN_100b0aa0(pvVar4,"feign");
                }
                local_8 = 0xffffffff;
                (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                pvVar4 = operator_new(0xc);
                local_8 = 0x14;
                if (pvVar4 == (void *)0x0) {
                  local_5a0 = (Button *)0x0;
                }
                else {
                  local_5a0 = (Button *)
                              thunk_FUN_100b0fd0(pvVar4,local_18,*(undefined4 *)(local_14 + 0xad4));
                }
                local_8 = 0xffffffff;
                (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
              }
              else {
                iVar1 = _strcmp(param_2,"!FEIGNSILENT");
                if (iVar1 == 0) {
                  pvVar4 = operator_new(0x130);
                  local_8 = 0x15;
                  if (pvVar4 == (void *)0x0) {
                    local_5a0 = (Button *)0x0;
                  }
                  else {
                    lVar7 = __ftol();
                    iVar1 = (int)lVar7;
                    lVar7 = __ftol();
                    iVar3 = (int)lVar7;
                    lVar7 = __ftol();
                    local_5a0 = thunk_FUN_100b1dd0(pvVar4,0,param_1,0,(int)lVar7,iVar3,iVar1);
                  }
                  local_8 = 0xffffffff;
                  local_18 = local_5a0;
                  pvVar4 = operator_new(0x108);
                  local_8 = 0x16;
                  if (pvVar4 == (void *)0x0) {
                    local_5a0 = (Button *)0x0;
                  }
                  else {
                    local_5a0 = (Button *)thunk_FUN_100b0aa0(pvVar4,"sfeign");
                  }
                  local_8 = 0xffffffff;
                  (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                  pvVar4 = operator_new(0xc);
                  local_8 = 0x17;
                  if (pvVar4 == (void *)0x0) {
                    local_5a0 = (Button *)0x0;
                  }
                  else {
                    local_5a0 = (Button *)
                                thunk_FUN_100b0fd0(pvVar4,local_18,*(undefined4 *)(local_14 + 0xad4)
                                                  );
                  }
                  local_8 = 0xffffffff;
                  (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                }
                else {
                  iVar1 = _strcmp(param_2,"!FEIGNSTOP");
                  if (iVar1 == 0) {
                    pvVar4 = operator_new(0x130);
                    local_8 = 0x18;
                    if (pvVar4 == (void *)0x0) {
                      local_5a0 = (Button *)0x0;
                    }
                    else {
                      lVar7 = __ftol();
                      iVar1 = (int)lVar7;
                      lVar7 = __ftol();
                      iVar3 = (int)lVar7;
                      lVar7 = __ftol();
                      local_5a0 = thunk_FUN_100b1dd0(pvVar4,1,param_1,0,(int)lVar7,iVar3,iVar1);
                    }
                    local_8 = 0xffffffff;
                    local_18 = local_5a0;
                    pvVar4 = operator_new(0x108);
                    local_8 = 0x19;
                    if (pvVar4 == (void *)0x0) {
                      local_5a0 = (Button *)0x0;
                    }
                    else {
                      local_5a0 = (Button *)thunk_FUN_100b0aa0(pvVar4,"feign");
                    }
                    local_8 = 0xffffffff;
                    (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                    pvVar4 = operator_new(0xc);
                    local_8 = 0x1a;
                    if (pvVar4 == (void *)0x0) {
                      local_5a0 = (Button *)0x0;
                    }
                    else {
                      local_5a0 = (Button *)
                                  thunk_FUN_100b0fd0(pvVar4,local_18,
                                                     *(undefined4 *)(local_14 + 0xad4));
                    }
                    local_8 = 0xffffffff;
                    (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                  }
                  else {
                    iVar1 = _strcmp(param_2,"!DISGUISEENEMY");
                    if (iVar1 == 0) {
                      pvVar4 = operator_new(0x134);
                      local_8 = 0x1b;
                      if (pvVar4 == (void *)0x0) {
                        local_5a0 = (Button *)0x0;
                      }
                      else {
                        lVar7 = __ftol();
                        iVar1 = (int)lVar7;
                        lVar7 = __ftol();
                        iVar3 = (int)lVar7;
                        lVar7 = __ftol();
                        local_5a0 = thunk_FUN_100b2020(pvVar4,2,param_1,0,(int)lVar7,iVar3,iVar1);
                      }
                      local_8 = 0xffffffff;
                      local_18 = local_5a0;
                      thunk_FUN_100ab180((int *)local_5a0,*(int *)(local_14 + 0xad4));
                    }
                    else {
                      iVar1 = _strcmp(param_2,"!DISGUISEFRIENDLY");
                      if (iVar1 == 0) {
                        pvVar4 = operator_new(0x134);
                        local_8 = 0x1c;
                        if (pvVar4 == (void *)0x0) {
                          local_5a0 = (Button *)0x0;
                        }
                        else {
                          lVar7 = __ftol();
                          iVar1 = (int)lVar7;
                          lVar7 = __ftol();
                          iVar3 = (int)lVar7;
                          lVar7 = __ftol();
                          local_5a0 = thunk_FUN_100b2020(pvVar4,3,param_1,0,(int)lVar7,iVar3,iVar1);
                        }
                        local_8 = 0xffffffff;
                        local_18 = local_5a0;
                        thunk_FUN_100ab180((int *)local_5a0,*(int *)(local_14 + 0xad4));
                      }
                      else {
                        iVar1 = _strcmp(param_2,"!DISGUISE");
                        if (iVar1 == 0) {
                          pvVar4 = operator_new(0x134);
                          local_8 = 0x1d;
                          if (pvVar4 == (void *)0x0) {
                            local_5a0 = (Button *)0x0;
                          }
                          else {
                            lVar7 = __ftol();
                            iVar1 = (int)lVar7;
                            lVar7 = __ftol();
                            iVar3 = (int)lVar7;
                            lVar7 = __ftol();
                            local_5a0 = thunk_FUN_100b2020(pvVar4,0xc,param_1,0,(int)lVar7,iVar3,
                                                           iVar1);
                          }
                          local_8 = 0xffffffff;
                          local_18 = local_5a0;
                          local_22c = thunk_FUN_100a93c0((int *)local_5a0,*(int *)(local_14 + 0xad4)
                                                        );
                          *(Panel **)(local_14 + 200 + *(int *)(local_14 + 0x210) * 4) = local_22c;
                          *(int *)(local_14 + 0x210) = *(int *)(local_14 + 0x210) + 1;
                          for (local_230 = 1; local_230 < 5; local_230 = local_230 + 1) {
                            pvVar4 = operator_new(0x134);
                            local_8 = 0x1e;
                            if (pvVar4 == (void *)0x0) {
                              local_5a0 = (Button *)0x0;
                            }
                            else {
                              lVar7 = __ftol();
                              iVar1 = (int)lVar7;
                              lVar7 = __ftol();
                              iVar3 = (int)lVar7;
                              lVar7 = __ftol();
                              local_5a0 = thunk_FUN_100b2020(pvVar4,(uint)((3 < local_230) - 1U & 4
                                                                          | 8),"Disguise",0,
                                                             (int)lVar7,iVar3,iVar1);
                            }
                            local_8 = 0xffffffff;
                            *(Button **)(local_14 + 0x858 + local_230 * 4) = local_5a0;
                            thunk_FUN_100a8c50(local_22c,
                                               *(Label **)(local_14 + 0x858 + local_230 * 4));
                            FUN_100bb6e0(local_330,(byte_conflict *)"disguise %d");
                            thunk_FUN_100ab180(*(int **)(local_14 + 0x858 + local_230 * 4),
                                               (int)local_22c);
                          }
                        }
                        else {
                          iVar1 = _strcmp(param_2,"!DETPACKSTART");
                          if (iVar1 == 0) {
                            pvVar4 = operator_new(0x130);
                            local_8 = 0x1f;
                            if (pvVar4 == (void *)0x0) {
                              local_5a0 = (Button *)0x0;
                            }
                            else {
                              lVar7 = __ftol();
                              iVar1 = (int)lVar7;
                              lVar7 = __ftol();
                              iVar3 = (int)lVar7;
                              lVar7 = __ftol();
                              local_5a0 = thunk_FUN_100b2200(pvVar4,2,param_1,0,(int)lVar7,iVar3,
                                                             iVar1);
                            }
                            local_8 = 0xffffffff;
                            local_18 = local_5a0;
                            local_1c = thunk_FUN_100a93c0((int *)local_5a0,
                                                          *(int *)(local_14 + 0xad4));
                            *(Panel **)(local_14 + 200 + *(int *)(local_14 + 0x210) * 4) = local_1c;
                            *(int *)(local_14 + 0x210) = *(int *)(local_14 + 0x210) + 1;
                            pBVar2 = operator_new(300);
                            local_8 = 0x20;
                            if (pBVar2 == (Button *)0x0) {
                              local_5a0 = (Button *)0x0;
                            }
                            else {
                              BVar9 = (Button)0x0;
                              lVar7 = __ftol();
                              iVar1 = (int)lVar7;
                              lVar7 = __ftol();
                              iVar3 = (int)lVar7;
                              lVar7 = __ftol();
                              local_5a0 = thunk_FUN_1009cd50(pBVar2,(char *)(local_14 + 0x9fc),0,
                                                             (int)lVar7,iVar3,iVar1,BVar9);
                            }
                            pBVar2 = local_5a0;
                            local_8 = 0xffffffff;
                            pvVar4 = operator_new(0x108);
                            local_8 = 0x21;
                            if (pvVar4 == (void *)0x0) {
                              local_5a0 = (Button *)0x0;
                            }
                            else {
                              local_5a0 = (Button *)thunk_FUN_100b0aa0(pvVar4,"detstart 5");
                            }
                            local_8 = 0xffffffff;
                            (**(code **)(*(int *)pBVar2 + 0x240))(local_5a0);
                            thunk_FUN_100a8c50(local_1c,(Label *)pBVar2);
                            pBVar2 = operator_new(300);
                            local_8 = 0x22;
                            if (pBVar2 == (Button *)0x0) {
                              local_5a0 = (Button *)0x0;
                            }
                            else {
                              BVar9 = (Button)0x0;
                              lVar7 = __ftol();
                              iVar1 = (int)lVar7;
                              lVar7 = __ftol();
                              iVar3 = (int)lVar7;
                              lVar7 = __ftol();
                              local_5a0 = thunk_FUN_1009cd50(pBVar2,(char *)(local_14 + 0xa1c),0,
                                                             (int)lVar7,iVar3,iVar1,BVar9);
                            }
                            pBVar2 = local_5a0;
                            local_8 = 0xffffffff;
                            pvVar4 = operator_new(0x108);
                            local_8 = 0x23;
                            if (pvVar4 == (void *)0x0) {
                              local_5a0 = (Button *)0x0;
                            }
                            else {
                              local_5a0 = (Button *)thunk_FUN_100b0aa0(pvVar4,"detstart 20");
                            }
                            local_8 = 0xffffffff;
                            (**(code **)(*(int *)pBVar2 + 0x240))(local_5a0);
                            thunk_FUN_100a8c50(local_1c,(Label *)pBVar2);
                            pBVar2 = operator_new(300);
                            local_8 = 0x24;
                            if (pBVar2 == (Button *)0x0) {
                              local_5a0 = (Button *)0x0;
                            }
                            else {
                              BVar9 = (Button)0x0;
                              lVar7 = __ftol();
                              iVar1 = (int)lVar7;
                              lVar7 = __ftol();
                              iVar3 = (int)lVar7;
                              lVar7 = __ftol();
                              local_5a0 = thunk_FUN_1009cd50(pBVar2,(char *)(local_14 + 0xa3c),0,
                                                             (int)lVar7,iVar3,iVar1,BVar9);
                            }
                            pBVar2 = local_5a0;
                            local_8 = 0xffffffff;
                            pvVar4 = operator_new(0x108);
                            local_8 = 0x25;
                            if (pvVar4 == (void *)0x0) {
                              local_5a0 = (Button *)0x0;
                            }
                            else {
                              local_5a0 = (Button *)thunk_FUN_100b0aa0(pvVar4,"detstart 50");
                            }
                            local_8 = 0xffffffff;
                            (**(code **)(*(int *)pBVar2 + 0x240))(local_5a0);
                            thunk_FUN_100a8c50(local_1c,(Label *)pBVar2);
                          }
                          else {
                            iVar1 = _strcmp(param_2,"!DETPACKSTOP");
                            if (iVar1 == 0) {
                              pvVar4 = operator_new(0x130);
                              local_8 = 0x26;
                              if (pvVar4 == (void *)0x0) {
                                local_5a0 = (Button *)0x0;
                              }
                              else {
                                lVar7 = __ftol();
                                iVar1 = (int)lVar7;
                                lVar7 = __ftol();
                                iVar3 = (int)lVar7;
                                lVar7 = __ftol();
                                local_5a0 = thunk_FUN_100b2200(pvVar4,1,param_1,0,(int)lVar7,iVar3,
                                                               iVar1);
                              }
                              local_8 = 0xffffffff;
                              local_18 = local_5a0;
                              pvVar4 = operator_new(0x108);
                              local_8 = 0x27;
                              if (pvVar4 == (void *)0x0) {
                                local_5a0 = (Button *)0x0;
                              }
                              else {
                                local_5a0 = (Button *)thunk_FUN_100b0aa0(pvVar4,"detstop");
                              }
                              local_8 = 0xffffffff;
                              (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                              pvVar4 = operator_new(0xc);
                              local_8 = 0x28;
                              if (pvVar4 == (void *)0x0) {
                                local_5a0 = (Button *)0x0;
                              }
                              else {
                                local_5a0 = (Button *)
                                            thunk_FUN_100b0fd0(pvVar4,local_18,
                                                               *(undefined4 *)(local_14 + 0xad4));
                              }
                              local_8 = 0xffffffff;
                              (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                            }
                            else {
                              iVar1 = _strcmp(param_2,"!BUILD");
                              if (iVar1 == 0) {
                                pvVar4 = operator_new(0x134);
                                local_8 = 0x29;
                                if (pvVar4 == (void *)0x0) {
                                  local_5a0 = (Button *)0x0;
                                }
                                else {
                                  lVar7 = __ftol();
                                  iVar1 = (int)lVar7;
                                  lVar7 = __ftol();
                                  iVar3 = (int)lVar7;
                                  lVar7 = __ftol();
                                  local_5a0 = thunk_FUN_100b2400(pvVar4,4,0,param_1,0,(int)lVar7,
                                                                 iVar3,iVar1);
                                }
                                local_18 = local_5a0;
                              }
                              else {
                                iVar1 = _strcmp(param_2,"!BUILDSENTRY");
                                if (iVar1 == 0) {
                                  pvVar4 = operator_new(0x134);
                                  local_8 = 0x2a;
                                  if (pvVar4 == (void *)0x0) {
                                    local_5a0 = (Button *)0x0;
                                  }
                                  else {
                                    lVar7 = __ftol();
                                    iVar1 = (int)lVar7;
                                    lVar7 = __ftol();
                                    iVar3 = (int)lVar7;
                                    lVar7 = __ftol();
                                    local_5a0 = thunk_FUN_100b2400(pvVar4,8,1,param_1,0,(int)lVar7,
                                                                   iVar3,iVar1);
                                  }
                                  local_8 = 0xffffffff;
                                  local_18 = local_5a0;
                                  pvVar4 = operator_new(0x108);
                                  local_8 = 0x2b;
                                  if (pvVar4 == (void *)0x0) {
                                    local_5a0 = (Button *)0x0;
                                  }
                                  else {
                                    local_5a0 = (Button *)thunk_FUN_100b0aa0(pvVar4,"build 2");
                                  }
                                  local_8 = 0xffffffff;
                                  (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                                  pvVar4 = operator_new(0xc);
                                  local_8 = 0x2c;
                                  if (pvVar4 == (void *)0x0) {
                                    local_5a0 = (Button *)0x0;
                                  }
                                  else {
                                    local_5a0 = (Button *)
                                                thunk_FUN_100b0fd0(pvVar4,local_18,
                                                                   *(undefined4 *)(local_14 + 0xad4)
                                                                  );
                                  }
                                  local_8 = 0xffffffff;
                                  (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                                }
                                else {
                                  iVar1 = _strcmp(param_2,"!BUILDDISPENSER");
                                  if (iVar1 == 0) {
                                    pvVar4 = operator_new(0x134);
                                    local_8 = 0x2d;
                                    if (pvVar4 == (void *)0x0) {
                                      local_5a0 = (Button *)0x0;
                                    }
                                    else {
                                      lVar7 = __ftol();
                                      iVar1 = (int)lVar7;
                                      lVar7 = __ftol();
                                      iVar3 = (int)lVar7;
                                      lVar7 = __ftol();
                                      local_5a0 = thunk_FUN_100b2400(pvVar4,8,0,param_1,0,(int)lVar7
                                                                     ,iVar3,iVar1);
                                    }
                                    local_8 = 0xffffffff;
                                    local_18 = local_5a0;
                                    pvVar4 = operator_new(0x108);
                                    local_8 = 0x2e;
                                    if (pvVar4 == (void *)0x0) {
                                      local_5a0 = (Button *)0x0;
                                    }
                                    else {
                                      local_5a0 = (Button *)thunk_FUN_100b0aa0(pvVar4,"build 1");
                                    }
                                    local_8 = 0xffffffff;
                                    (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                                    pvVar4 = operator_new(0xc);
                                    local_8 = 0x2f;
                                    if (pvVar4 == (void *)0x0) {
                                      local_5a0 = (Button *)0x0;
                                    }
                                    else {
                                      local_5a0 = (Button *)
                                                  thunk_FUN_100b0fd0(pvVar4,local_18,
                                                                     *(undefined4 *)
                                                                      (local_14 + 0xad4));
                                    }
                                    local_8 = 0xffffffff;
                                    (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                                  }
                                  else {
                                    iVar1 = _strcmp(param_2,"!ROTATESENTRY180");
                                    if (iVar1 == 0) {
                                      pvVar4 = operator_new(0x134);
                                      local_8 = 0x30;
                                      if (pvVar4 == (void *)0x0) {
                                        local_5a0 = (Button *)0x0;
                                      }
                                      else {
                                        lVar7 = __ftol();
                                        iVar1 = (int)lVar7;
                                        lVar7 = __ftol();
                                        iVar3 = (int)lVar7;
                                        lVar7 = __ftol();
                                        local_5a0 = thunk_FUN_100b2400(pvVar4,1,1,param_1,0,
                                                                       (int)lVar7,iVar3,iVar1);
                                      }
                                      local_8 = 0xffffffff;
                                      local_18 = local_5a0;
                                      pvVar4 = operator_new(0x108);
                                      local_8 = 0x31;
                                      if (pvVar4 == (void *)0x0) {
                                        local_5a0 = (Button *)0x0;
                                      }
                                      else {
                                        local_5a0 = (Button *)
                                                    thunk_FUN_100b0aa0(pvVar4,"rotatesentry180");
                                      }
                                      local_8 = 0xffffffff;
                                      (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                                      pvVar4 = operator_new(0xc);
                                      local_8 = 0x32;
                                      if (pvVar4 == (void *)0x0) {
                                        local_5a0 = (Button *)0x0;
                                      }
                                      else {
                                        local_5a0 = (Button *)
                                                    thunk_FUN_100b0fd0(pvVar4,local_18,
                                                                       *(undefined4 *)
                                                                        (local_14 + 0xad4));
                                      }
                                      local_8 = 0xffffffff;
                                      (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                                    }
                                    else {
                                      iVar1 = _strcmp(param_2,"!ROTATESENTRY");
                                      if (iVar1 == 0) {
                                        pvVar4 = operator_new(0x134);
                                        local_8 = 0x33;
                                        if (pvVar4 == (void *)0x0) {
                                          local_5a0 = (Button *)0x0;
                                        }
                                        else {
                                          lVar7 = __ftol();
                                          iVar1 = (int)lVar7;
                                          lVar7 = __ftol();
                                          iVar3 = (int)lVar7;
                                          lVar7 = __ftol();
                                          local_5a0 = thunk_FUN_100b2400(pvVar4,1,1,param_1,0,
                                                                         (int)lVar7,iVar3,iVar1);
                                        }
                                        local_8 = 0xffffffff;
                                        local_18 = local_5a0;
                                        pvVar4 = operator_new(0x108);
                                        local_8 = 0x34;
                                        if (pvVar4 == (void *)0x0) {
                                          local_5a0 = (Button *)0x0;
                                        }
                                        else {
                                          local_5a0 = (Button *)
                                                      thunk_FUN_100b0aa0(pvVar4,"rotatesentry");
                                        }
                                        local_8 = 0xffffffff;
                                        (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                                        pvVar4 = operator_new(0xc);
                                        local_8 = 0x35;
                                        if (pvVar4 == (void *)0x0) {
                                          local_5a0 = (Button *)0x0;
                                        }
                                        else {
                                          local_5a0 = (Button *)
                                                      thunk_FUN_100b0fd0(pvVar4,local_18,
                                                                         *(undefined4 *)
                                                                          (local_14 + 0xad4));
                                        }
                                        local_8 = 0xffffffff;
                                        (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                                      }
                                      else {
                                        iVar1 = _strcmp(param_2,"!DISMANTLEDISPENSER");
                                        if (iVar1 == 0) {
                                          pvVar4 = operator_new(0x134);
                                          local_8 = 0x36;
                                          if (pvVar4 == (void *)0x0) {
                                            local_5a0 = (Button *)0x0;
                                          }
                                          else {
                                            lVar7 = __ftol();
                                            iVar1 = (int)lVar7;
                                            lVar7 = __ftol();
                                            iVar3 = (int)lVar7;
                                            lVar7 = __ftol();
                                            local_5a0 = thunk_FUN_100b2400(pvVar4,1,0,param_1,0,
                                                                           (int)lVar7,iVar3,iVar1);
                                          }
                                          local_8 = 0xffffffff;
                                          local_18 = local_5a0;
                                          pvVar4 = operator_new(0x108);
                                          local_8 = 0x37;
                                          if (pvVar4 == (void *)0x0) {
                                            local_5a0 = (Button *)0x0;
                                          }
                                          else {
                                            local_5a0 = (Button *)
                                                        thunk_FUN_100b0aa0(pvVar4,"dismantle 1");
                                          }
                                          local_8 = 0xffffffff;
                                          (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                                          pvVar4 = operator_new(0xc);
                                          local_8 = 0x38;
                                          if (pvVar4 == (void *)0x0) {
                                            local_5a0 = (Button *)0x0;
                                          }
                                          else {
                                            local_5a0 = (Button *)
                                                        thunk_FUN_100b0fd0(pvVar4,local_18,
                                                                           *(undefined4 *)
                                                                            (local_14 + 0xad4));
                                          }
                                          local_8 = 0xffffffff;
                                          (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                                        }
                                        else {
                                          iVar1 = _strcmp(param_2,"!DISMANTLESENTRY");
                                          if (iVar1 == 0) {
                                            pvVar4 = operator_new(0x134);
                                            local_8 = 0x39;
                                            if (pvVar4 == (void *)0x0) {
                                              local_5a0 = (Button *)0x0;
                                            }
                                            else {
                                              lVar7 = __ftol();
                                              iVar1 = (int)lVar7;
                                              lVar7 = __ftol();
                                              iVar3 = (int)lVar7;
                                              lVar7 = __ftol();
                                              local_5a0 = thunk_FUN_100b2400(pvVar4,1,1,param_1,0,
                                                                             (int)lVar7,iVar3,iVar1)
                                              ;
                                            }
                                            local_8 = 0xffffffff;
                                            local_18 = local_5a0;
                                            pvVar4 = operator_new(0x108);
                                            local_8 = 0x3a;
                                            if (pvVar4 == (void *)0x0) {
                                              local_5a0 = (Button *)0x0;
                                            }
                                            else {
                                              local_5a0 = (Button *)
                                                          thunk_FUN_100b0aa0(pvVar4,"dismantle 2");
                                            }
                                            local_8 = 0xffffffff;
                                            (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                                            pvVar4 = operator_new(0xc);
                                            local_8 = 0x3b;
                                            if (pvVar4 == (void *)0x0) {
                                              local_5a0 = (Button *)0x0;
                                            }
                                            else {
                                              local_5a0 = (Button *)
                                                          thunk_FUN_100b0fd0(pvVar4,local_18,
                                                                             *(undefined4 *)
                                                                              (local_14 + 0xad4));
                                            }
                                            local_8 = 0xffffffff;
                                            (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                                          }
                                          else {
                                            iVar1 = _strcmp(param_2,"!DETONATEDISPENSER");
                                            if (iVar1 == 0) {
                                              pvVar4 = operator_new(0x134);
                                              local_8 = 0x3c;
                                              if (pvVar4 == (void *)0x0) {
                                                local_5a0 = (Button *)0x0;
                                              }
                                              else {
                                                lVar7 = __ftol();
                                                iVar1 = (int)lVar7;
                                                lVar7 = __ftol();
                                                iVar3 = (int)lVar7;
                                                lVar7 = __ftol();
                                                local_5a0 = thunk_FUN_100b2400(pvVar4,1,0,param_1,0,
                                                                               (int)lVar7,iVar3,
                                                                               iVar1);
                                              }
                                              local_8 = 0xffffffff;
                                              local_18 = local_5a0;
                                              pvVar4 = operator_new(0x108);
                                              local_8 = 0x3d;
                                              if (pvVar4 == (void *)0x0) {
                                                local_5a0 = (Button *)0x0;
                                              }
                                              else {
                                                local_5a0 = (Button *)
                                                            thunk_FUN_100b0aa0(pvVar4,"detdispenser"
                                                                              );
                                              }
                                              local_8 = 0xffffffff;
                                              (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                                              pvVar4 = operator_new(0xc);
                                              local_8 = 0x3e;
                                              if (pvVar4 == (void *)0x0) {
                                                local_5a0 = (Button *)0x0;
                                              }
                                              else {
                                                local_5a0 = (Button *)
                                                            thunk_FUN_100b0fd0(pvVar4,local_18,
                                                                               *(undefined4 *)
                                                                                (local_14 + 0xad4));
                                              }
                                              local_8 = 0xffffffff;
                                              (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                                            }
                                            else {
                                              iVar1 = _strcmp(param_2,"!DETONATESENTRY");
                                              if (iVar1 == 0) {
                                                pvVar4 = operator_new(0x134);
                                                local_8 = 0x3f;
                                                if (pvVar4 == (void *)0x0) {
                                                  local_5a0 = (Button *)0x0;
                                                }
                                                else {
                                                  lVar7 = __ftol();
                                                  iVar1 = (int)lVar7;
                                                  lVar7 = __ftol();
                                                  iVar3 = (int)lVar7;
                                                  lVar7 = __ftol();
                                                  local_5a0 = thunk_FUN_100b2400(pvVar4,1,1,param_1,
                                                                                 0,(int)lVar7,iVar3,
                                                                                 iVar1);
                                                }
                                                local_8 = 0xffffffff;
                                                local_18 = local_5a0;
                                                pvVar4 = operator_new(0x108);
                                                local_8 = 0x40;
                                                if (pvVar4 == (void *)0x0) {
                                                  local_5a0 = (Button *)0x0;
                                                }
                                                else {
                                                  local_5a0 = (Button *)
                                                              thunk_FUN_100b0aa0(pvVar4,"detsentry")
                                                  ;
                                                }
                                                local_8 = 0xffffffff;
                                                (**(code **)(*(int *)local_18 + 0x240))(local_5a0);
                                                pvVar4 = operator_new(0xc);
                                                local_8 = 0x41;
                                                if (pvVar4 == (void *)0x0) {
                                                  local_5a0 = (Button *)0x0;
                                                }
                                                else {
                                                  local_5a0 = (Button *)
                                                              thunk_FUN_100b0fd0(pvVar4,local_18,
                                                                                 *(undefined4 *)
                                                                                  (local_14 + 0xad4)
                                                                                );
                                                }
                                                local_8 = 0xffffffff;
                                                (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
                                              }
                                              else {
                                                iVar1 = _strcmp(param_2,"!BUILDSTOP");
                                                if (iVar1 == 0) {
                                                  pvVar4 = operator_new(0x134);
                                                  local_8 = 0x42;
                                                  if (pvVar4 == (void *)0x0) {
                                                    local_5a0 = (Button *)0x0;
                                                  }
                                                  else {
                                                    lVar7 = __ftol();
                                                    iVar1 = (int)lVar7;
                                                    lVar7 = __ftol();
                                                    iVar3 = (int)lVar7;
                                                    lVar7 = __ftol();
                                                    local_5a0 = thunk_FUN_100b2400(pvVar4,2,0,
                                                                                   param_1,0,
                                                                                   (int)lVar7,iVar3,
                                                                                   iVar1);
                                                  }
                                                  local_8 = 0xffffffff;
                                                  local_18 = local_5a0;
                                                  pvVar4 = operator_new(0x108);
                                                  local_8 = 0x43;
                                                  if (pvVar4 == (void *)0x0) {
                                                    local_5a0 = (Button *)0x0;
                                                  }
                                                  else {
                                                    local_5a0 = (Button *)
                                                                thunk_FUN_100b0aa0(pvVar4,"build");
                                                  }
                                                  local_8 = 0xffffffff;
                                                  (**(code **)(*(int *)local_18 + 0x240))(local_5a0)
                                                  ;
                                                  pvVar4 = operator_new(0xc);
                                                  local_8 = 0x44;
                                                  if (pvVar4 == (void *)0x0) {
                                                    local_5a0 = (Button *)0x0;
                                                  }
                                                  else {
                                                    local_5a0 = (Button *)
                                                                thunk_FUN_100b0fd0(pvVar4,local_18,
                                                                                   *(undefined4 *)
                                                                                    (local_14 +
                                                                                    0xad4));
                                                  }
                                                  local_8 = 0xffffffff;
                                                  (**(code **)(*(int *)local_18 + 0x70))(local_5a0);
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
        }
      }
    }
  }
  ExceptionList = local_10;
  return local_18;
}

/* 100aeb80  FUN_100aeb80  (145 bytes)
 * undefined FUN_100aeb80(int param_1)
 */
void __fastcall FUN_100aeb80(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0xc4) != 0) && (*(int *)(param_1 + 0xad0) != 0)) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xad0) + 0x28))();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1 + 0xad0) + 0x24))(1);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0xad0) + 0x24))(0);
    }
    thunk_FUN_100b0cd0(param_1);
  }
  return;
}

/* 100aec40  FUN_100aec40  (240 bytes)
 * undefined FUN_100aec40(void * param_1)
 */
void __fastcall FUN_100aec40(void *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int local_c;
  
  if ((*(int *)((int)param_1 + 0xc4) != 0) && (DAT_10320530 != 0)) {
    if (*(int *)((int)param_1 + 0xad4) == 0) {
      if (DAT_102e144c == 0) {
        thunk_FUN_100af070((int)param_1);
        thunk_FUN_100b0010((int)param_1);
        thunk_FUN_100aefd0(param_1,*(undefined4 *)((int)param_1 + 200));
        *(undefined4 *)((int)param_1 + 0x208) = DAT_102da3ec;
        thunk_FUN_100b0cd0((int)param_1);
        for (local_c = 2; iVar1 = (*DAT_102e14f0)(), local_c < iVar1; local_c = local_c + 1) {
          pcVar2 = (char *)(*DAT_102e14f4)(local_c + -1);
          if ((pcVar2 != (char *)0x0) &&
             (uVar3 = thunk_FUN_100a8d30(*(void **)((int)param_1 + 0xad4),(int)*pcVar2),
             (uVar3 & 0xff) != 0)) {
            thunk_FUN_100aedd0(param_1);
          }
        }
      }
    }
    else {
      thunk_FUN_100aedd0(param_1);
    }
  }
  return;
}

/* 100aed70  FUN_100aed70  (73 bytes)
 * undefined FUN_100aed70(void * param_1)
 */
void __fastcall FUN_100aed70(void *param_1)

{
  if ((*(int *)((int)param_1 + 0xc4) != 0) &&
     (*(float *)((int)param_1 + 0x208) + 0.3 <= DAT_102da3ec)) {
    thunk_FUN_100aedd0(param_1);
  }
  return;
}

/* 100aedd0  FUN_100aedd0  (90 bytes)
 * undefined FUN_100aedd0(void * param_1)
 */
void __fastcall FUN_100aedd0(void *param_1)

{
  if (*(int *)((int)param_1 + 0xc4) != 0) {
    if (*(int *)((int)param_1 + 200) != 0) {
      thunk_FUN_100a8e50(*(int *)((int)param_1 + 200));
    }
    *(undefined4 *)((int)param_1 + 0x208) = 0;
    thunk_FUN_100aefd0(param_1,0);
    thunk_FUN_100b0cd0((int)param_1);
  }
  return;
}

/* 100aee40  FUN_100aee40  (64 bytes)
 * undefined FUN_100aee40(int param_1)
 */
void __fastcall FUN_100aee40(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xaa8) != 0) {
    iVar1 = (*DAT_102e14e8)();
    if (1 < iVar1) {
      thunk_FUN_100a5790(*(int **)(param_1 + 0xaa8));
      thunk_FUN_100b0cd0(param_1);
    }
  }
  return;
}

/* 100aee90  FUN_100aee90  (60 bytes)
 * uint FUN_100aee90(uint param_1)
 */
uint __fastcall FUN_100aee90(uint param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xaa8) == 0) {
    uVar1 = param_1 & 0xffffff00;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0xaa8) + 0x28))();
  }
  return uVar1;
}

/* 100aeee0  FUN_100aeee0  (89 bytes)
 * undefined FUN_100aeee0(int param_1)
 */
void __fastcall FUN_100aeee0(int param_1)

{
  undefined *puVar1;
  
  if ((DAT_102e144c == 0) && (*(int *)(param_1 + 0xaa8) != 0)) {
    (**(code **)(**(int **)(param_1 + 0xaa8) + 0x24))(0);
    puVar1 = thunk_FUN_100361a0();
    thunk_FUN_100386c0((int)puVar1);
    thunk_FUN_100b0cd0(param_1);
  }
  return;
}

/* 100aef50  FUN_100aef50  (103 bytes)
 * undefined FUN_100aef50(void * param_1)
 */
void __fastcall FUN_100aef50(void *param_1)

{
  if (*(int *)((int)param_1 + 0xc4) != 0) {
    if ((DAT_10320530 == 9) || (DAT_10320530 == 8)) {
      thunk_FUN_100aec40(param_1);
      if (*(int *)((int)param_1 + 0xad4) != 0) {
        thunk_FUN_100a8d30(*(void **)((int)param_1 + 0xad4),0x37);
      }
    }
    else {
      (*DAT_102e14a8)("_special");
    }
  }
  return;
}

/* 100aefd0  FUN_100aefd0  (128 bytes)
 * undefined FUN_100aefd0(undefined4 param_1)
 */
void __thiscall FUN_100aefd0(void *this,undefined4 param_1)

{
  int local_c;
  
  for (local_c = 0; local_c < *(int *)((int)this + 0x210); local_c = local_c + 1) {
    (**(code **)(**(int **)((int)this + local_c * 4 + 200) + 0x24))(0);
  }
  *(undefined4 *)((int)this + 0xad4) = param_1;
  if (*(int *)((int)this + 0xad4) != 0) {
    thunk_FUN_100a9370(*(int **)((int)this + 0xad4));
  }
  return;
}

/* 100af070  FUN_100af070  (53 bytes)
 * undefined FUN_100af070(int param_1)
 */
void __fastcall FUN_100af070(int param_1)

{
  thunk_FUN_100a8f80(*(void **)(param_1 + 200),0,'\0');
  thunk_FUN_100a9250(*(void **)(param_1 + 200),0);
  return;
}

/* 100af0c0  FUN_100af0c0  (607 bytes)
 * undefined FUN_100af0c0(int param_1)
 */
void __fastcall FUN_100af0c0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  uint local_18c [32];
  int local_10c;
  char local_108 [128];
  uint local_88 [32];
  int local_8;
  
  *(undefined4 *)(param_1 + 0x21c) = DAT_10320638;
  *(undefined4 *)(param_1 + 0x220) = DAT_10320640;
  *(undefined4 *)(param_1 + 0x224) = DAT_1032063c;
  local_8 = param_1;
  lVar3 = __ftol();
  *(int *)(local_8 + 0x228) = (int)lVar3;
  if (*(int *)(local_8 + 0x884) != 0) {
    iVar1 = (*DAT_102e15b8)();
    if (iVar1 == 0) {
      local_10c = *(int *)(local_8 + 0x21c);
      FUN_100bb6e0(local_108,(byte_conflict *)"#Spec_TSHelp%d");
    }
    else {
      local_10c = DAT_102daab4;
      FUN_100bb6e0(local_108,(byte_conflict *)"#Spec_Only_Help");
    }
    if (((local_10c == 0) || (iVar1 = (*DAT_102e15b8)(), iVar1 == 2)) ||
       (*(float *)(DAT_102e8268 + 0xc) != 0.0)) {
      (**(code **)(**(int **)(local_8 + 0x884) + 0x24))(0);
    }
    else {
      (**(code **)(**(int **)(local_8 + 0x884) + 0x24))(1);
      if ((*(int *)(local_8 + 0x220) < 1) ||
         (iVar1 = (*DAT_102e14e8)(), iVar1 < *(int *)(local_8 + 0x220))) {
        FUN_100bb6e0((undefined1 *)local_88,(byte_conflict *)"#Spec_Mode%d");
      }
      else if (*(int *)(&DAT_1031f3e0 + *(int *)(local_8 + 0x220) * 0x14) == 0) {
        FUN_100bb6e0((undefined1 *)local_88,(byte_conflict *)"#Spec_Mode%d");
      }
      else {
        FUN_100bb6e0((undefined1 *)local_88,(byte_conflict *)"#Spec_Mode%d : %s");
      }
      if (*(int *)(local_8 + 0x21c) == 4) {
        FUN_100bb6e0((undefined1 *)local_18c,(byte_conflict *)"#Directed %s");
        FUN_100bba20(local_88,local_18c);
      }
      puVar2 = thunk_FUN_10068750((char *)local_88);
      (**(code **)(**(int **)(local_8 + 0x888) + 0x200))(*(undefined4 *)(local_8 + 0x888),puVar2);
      puVar2 = thunk_FUN_10068750(local_108);
      (**(code **)(**(int **)(local_8 + 0x88c) + 0x200))(*(undefined4 *)(local_8 + 0x88c),puVar2);
    }
  }
  return;
}

/* 100af3c0  FUN_100af3c0  (319 bytes)
 * undefined FUN_100af3c0(int param_1)
 */
void __fastcall FUN_100af3c0(int param_1)

{
  void *this;
  longlong lVar1;
  Panel *local_68;
  int local_1c;
  int local_18;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e66bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  lVar1 = __ftol();
  local_18 = (int)lVar1;
  lVar1 = __ftol();
  local_1c = (int)lVar1;
  if (DAT_102e1234 == 0x200) {
    local_18 = 0x1e;
    local_1c = 0x1e;
  }
  else if (DAT_102e1234 == 400) {
    local_18 = 0;
    local_1c = 0x14;
  }
  this = operator_new(0x26af0);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_68 = (Panel *)0x0;
  }
  else {
    local_68 = thunk_FUN_100a2d60(this,local_18,local_1c,DAT_102e1234 + local_18 * -2,
                                  DAT_102e1238 + local_1c * -2);
  }
  local_8 = 0xffffffff;
  *(Panel **)(param_1 + 0xaa8) = local_68;
  (**(code **)(**(int **)(param_1 + 0xaa8) + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0xaa8) + 0x24))(0);
  ExceptionList = local_10;
  return;
}

/* 100af550  FUN_100af550  (195 bytes)
 * undefined FUN_100af550(int param_1)
 */
void __fastcall FUN_100af550(int param_1)

{
  void *this;
  Panel *local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e66db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0xe4);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_60 = (Panel *)0x0;
  }
  else {
    local_60 = thunk_FUN_100a6c50(this,0,0,DAT_102e1234,DAT_102e1238);
  }
  local_8 = 0xffffffff;
  *(Panel **)(param_1 + 0xad0) = local_60;
  (**(code **)(**(int **)(param_1 + 0xad0) + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0xad0) + 0x24))(0);
  ExceptionList = local_10;
  return;
}

/* 100af650  FUN_100af650  (87 bytes)
 * undefined FUN_100af650(undefined4 param_1)
 */
void __thiscall FUN_100af650(void *this,undefined4 param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0xa9c) = param_1;
  if ((*(int *)((int)this + 0xa9c) != 0) && (iVar1 = (**(code **)(DAT_102e15ac + 4))(), iVar1 == 0))
  {
    (**(code **)(**(int **)((int)this + 0xa9c) + 0x200))();
  }
  return;
}

/* 100af6c0  FUN_100af6c0  (1331 bytes)
 * int * FUN_100af6c0(int param_1)
 */
int * __thiscall FUN_100af6c0(void *this,int param_1)

{
  uint *puVar1;
  uint *puVar2;
  size_t sVar3;
  undefined *puVar4;
  int *piVar5;
  uint local_130 [7];
  undefined1 local_111;
  undefined *local_110;
  undefined *local_10c;
  uint local_108 [64];
  void *local_8;
  
  local_110 = (undefined *)0x0;
  local_8 = this;
  if (param_1 == 3) {
    if ((this == (void *)0xfffff550) || (*(char *)((int)this + 0xab0) == '\0')) {
      FUN_100bba20(local_130,(uint *)"Half-Life");
    }
    else {
      _strncpy((char *)local_130,(char *)((int)this + 0xab0),0x20);
    }
    local_111 = 0;
    local_10c = (undefined *)((int)local_8 + 0x240);
  }
  else if (param_1 == 1) {
    if ((this == (void *)0xfffff5a4) || (*(char *)((int)this + 0xa5c) == '\0')) {
      puVar1 = (uint *)(*DAT_102e1580)();
      if (puVar1 == (uint *)0x0) {
        return (int *)0x0;
      }
      FUN_100bba20(local_108,puVar1);
      puVar2 = FUN_100c1d70(local_108,'.');
      *(undefined1 *)puVar2 = 0;
      FUN_100bba30(local_108,(uint *)&DAT_10276c64);
      FUN_100bba20((uint *)((int)local_8 + 0xa5c),puVar1);
      puVar1 = FUN_100c1d70((uint *)((int)local_8 + 0xa5c),'.');
      if (puVar1 != (uint *)0x0) {
        *(undefined1 *)puVar1 = 0;
      }
      puVar1 = FUN_100c1d70((uint *)((int)local_8 + 0xa5c),'/');
      if (puVar1 != (uint *)0x0) {
        sVar3 = _strlen((char *)puVar1);
        FUN_100bdc80((undefined4 *)((int)local_8 + 0xa5c),(undefined4 *)((int)puVar1 + 1),sVar3 + 1)
        ;
      }
    }
    else {
      FUN_100bba20(local_108,(uint *)"maps/");
      FUN_100bba30(local_108,(uint *)((int)local_8 + 0xa5c));
      FUN_100bba30(local_108,(uint *)&DAT_10276c64);
    }
    local_110 = (undefined *)(*DAT_102e1594)(local_108,5,0);
    if (local_110 == (undefined *)0x0) {
      return (int *)0x0;
    }
    local_10c = local_110;
    _strncpy((char *)local_130,(char *)((int)local_8 + 0xa5c),0x20);
    local_111 = 0;
  }
  else if (param_1 == 2) {
    switch(DAT_10320530) {
    case 1:
      local_10c = thunk_FUN_10068750("#Help_scout");
      thunk_FUN_10068580("#Title_scout",(char *)local_130,0x20);
      break;
    case 2:
      local_10c = thunk_FUN_10068750("#Help_sniper");
      thunk_FUN_10068580("#Title_sniper",(char *)local_130,0x20);
      break;
    case 3:
      local_10c = thunk_FUN_10068750("#Help_soldier");
      thunk_FUN_10068580("#Title_soldier",(char *)local_130,0x20);
      break;
    case 4:
      local_10c = thunk_FUN_10068750("#Help_demoman");
      thunk_FUN_10068580("#Title_demoman",(char *)local_130,0x20);
      break;
    case 5:
      local_10c = thunk_FUN_10068750("#Help_medic");
      thunk_FUN_10068580("#Title_medic",(char *)local_130,0x20);
      break;
    case 6:
      local_10c = thunk_FUN_10068750("#Help_hwguy");
      thunk_FUN_10068580("#Title_hwguy",(char *)local_130,0x20);
      break;
    case 7:
      local_10c = thunk_FUN_10068750("#Help_pyro");
      thunk_FUN_10068580("#Title_pyro",(char *)local_130,0x20);
      break;
    case 8:
      local_10c = thunk_FUN_10068750("#Help_spy");
      thunk_FUN_10068580("#Title_spy",(char *)local_130,0x20);
      break;
    case 9:
      local_10c = thunk_FUN_10068750("#Help_engineer");
      thunk_FUN_10068580("#Title_engineer",(char *)local_130,0x20);
      break;
    default:
      return (int *)0x0;
    case 0xb:
      local_10c = thunk_FUN_10068750("#Help_civilian");
      thunk_FUN_10068580("#Title_civilian",(char *)local_130,0x20);
    }
    if (DAT_10320530 == 0xb) {
      FUN_100bb6e0((undefined1 *)local_108,(byte_conflict *)"classes/long_civilian.txt");
    }
    else {
      FUN_100bb6e0((undefined1 *)local_108,"classes/long_%s.txt");
    }
    puVar4 = (undefined *)(*DAT_102e1594)(local_108,5,0);
    if (puVar4 != (undefined *)0x0) {
      local_10c = puVar4;
    }
  }
  piVar5 = thunk_FUN_100a0a10(local_10c,local_130,(uint)(DAT_10320530 == 0),0,0,0,DAT_102e1234,
                              DAT_102e1238);
  (**(code **)(*piVar5 + 0x40))(local_8);
  if (local_110 != (undefined *)0x0) {
    (*DAT_102e159c)(local_110);
  }
  return piVar5;
}

/* 100afd80  FUN_100afd80  (499 bytes)
 * undefined FUN_100afd80(int param_1)
 */
void __thiscall FUN_100afd80(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  iVar2 = (**(code **)(DAT_102e15ac + 4))();
  if ((iVar2 == 0) && ((DAT_102e144c == 0 || (param_1 == 5)))) {
    if (*(int *)((int)this + 0xa9c) != 0) {
      for (local_10 = *(int *)((int)this + 0xa9c); local_10 != 0;
          local_10 = thunk_FUN_100b2c10(local_10)) {
        iVar2 = thunk_FUN_100b2c40(local_10);
        if (iVar2 == param_1) {
          return;
        }
      }
    }
    switch(param_1) {
    case 2:
      local_c = (int *)thunk_FUN_100b0140((int)this);
      break;
    case 3:
      local_c = (int *)thunk_FUN_100b02b0((int)this);
      break;
    case 4:
      local_c = thunk_FUN_100af6c0(this,1);
      break;
    case 5:
      local_c = thunk_FUN_100af6c0(this,3);
      break;
    case 6:
      local_c = thunk_FUN_100af6c0(this,2);
    }
    if (local_c != (int *)0x0) {
      thunk_FUN_100aedd0(this);
      thunk_FUN_100b2bb0(local_c,param_1);
      thunk_FUN_100b2be0(local_c,1);
      (**(code **)(*local_c + 0x40))(this);
      if (*(int *)((int)this + 0xa9c) == 0) {
        *(int **)((int)this + 0xa9c) = local_c;
        (**(code **)(**(int **)((int)this + 0xa9c) + 0x200))();
        thunk_FUN_100b0cd0((int)this);
      }
      else {
        iVar2 = thunk_FUN_100b2c40(*(int *)((int)this + 0xa9c));
        if ((iVar2 == 3) && (param_1 == 2)) {
          uVar1 = *(undefined4 *)((int)this + 0xa9c);
          (**(code **)(**(int **)((int)this + 0xa9c) + 0x204))();
          *(int **)((int)this + 0xa9c) = local_c;
          thunk_FUN_100b2b50(*(void **)((int)this + 0xa9c),uVar1);
          (**(code **)(**(int **)((int)this + 0xa9c) + 0x200))();
          thunk_FUN_100b0cd0((int)this);
        }
        else {
          thunk_FUN_100b2b50(*(void **)((int)this + 0xa9c),local_c);
        }
      }
    }
  }
  return;
}

/* 100b0010  FUN_100b0010  (41 bytes)
 * undefined FUN_100b0010(int param_1)
 */
void __fastcall FUN_100b0010(int param_1)

{
  while (*(int *)(param_1 + 0xa9c) != 0) {
    thunk_FUN_100b0050(param_1);
  }
  return;
}

/* 100b0050  FUN_100b0050  (93 bytes)
 * undefined FUN_100b0050(int param_1)
 */
void __fastcall FUN_100b0050(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa9c) != 0) {
    (**(code **)(**(int **)(param_1 + 0xa9c) + 0x204))();
    uVar1 = thunk_FUN_100b2c10(*(int *)(param_1 + 0xa9c));
    thunk_FUN_100af650(DAT_102e15e0,uVar1);
  }
  thunk_FUN_100b0cd0(param_1);
  return;
}

/* 100b00d0  FUN_100b00d0  (87 bytes)
 * undefined4 FUN_100b00d0(int param_1)
 */
undefined4 __fastcall FUN_100b00d0(int param_1)

{
  if (((*(int *)(param_1 + 0xa9c) != 0) && (DAT_10320530 == 0)) &&
     ((param_1 = thunk_FUN_100b2c40(*(int *)(param_1 + 0xa9c)), param_1 == 2 ||
      (((param_1 == 3 || (param_1 == 5)) || (param_1 == 6)))))) {
    return param_1 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

/* 100b0140  FUN_100b0140  (85 bytes)
 * undefined4 FUN_100b0140(int param_1)
 */
undefined4 __fastcall FUN_100b0140(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_102da424 < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = (**(code **)(DAT_102e15ac + 4))();
    if (iVar2 == 0) {
      (**(code **)(**(int **)(param_1 + 0xaa0) + 0x1fc))();
      uVar1 = *(undefined4 *)(param_1 + 0xaa0);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* 100b01b0  FUN_100b01b0  (199 bytes)
 * undefined FUN_100b01b0(int param_1)
 */
void __fastcall FUN_100b01b0(int param_1)

{
  void *this;
  undefined4 *local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e66fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x124);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    local_60 = thunk_FUN_100b2ca0(this,100,0,0,0,DAT_102e1234,DAT_102e1238);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0xaa0) = local_60;
  (**(code **)(**(int **)(param_1 + 0xaa0) + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0xaa0) + 0x24))(0);
  ExceptionList = local_10;
  return;
}

/* 100b02b0  FUN_100b02b0  (72 bytes)
 * undefined4 FUN_100b02b0(int param_1)
 */
undefined4 __fastcall FUN_100b02b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(DAT_102e15ac + 4))();
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0xaa4) + 0x1fc))();
    uVar2 = *(undefined4 *)(param_1 + 0xaa4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 100b0310  FUN_100b0310  (28 bytes)
 * undefined4 FUN_100b0310(int param_1)
 */
undefined4 __fastcall FUN_100b0310(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf0);
}

/* 100b0340  FUN_100b0340  (199 bytes)
 * undefined FUN_100b0340(int param_1)
 */
void __fastcall FUN_100b0340(int param_1)

{
  void *this;
  undefined4 *local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e671b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0xdf0);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    local_60 = thunk_FUN_10098cc0(this,100,0,0,0,DAT_102e1234,DAT_102e1238);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0xaa4) = local_60;
  (**(code **)(**(int **)(param_1 + 0xaa4) + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0xaa4) + 0x24))(0);
  ExceptionList = local_10;
  return;
}

/* 100b0440  FUN_100b0440  (106 bytes)
 * Panel * FUN_100b0440(undefined4 param_1, int param_2, int param_3, int param_4, int param_5)
 */
Panel * __thiscall
FUN_100b0440(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  vgui::Panel::Panel(this,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_setPos_10276c84;
  *(undefined4 *)((int)this + 0xbc) = param_1;
  *(int *)((int)this + 0xc0) = param_2;
  *(int *)((int)this + 0xc4) = param_3;
  *(undefined4 *)((int)this + 600) = 0;
  return this;
}

/* 100b04d0  FUN_100b04d0  (1064 bytes)
 * undefined FUN_100b04d0(void)
 */
void FUN_100b04d0(void)

{
  void *this;
  int iVar1;
  Label *pLVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  Panel *local_8c;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e6751;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0xc0);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_8c = (Panel *)0x0;
  }
  else {
    lVar6 = __ftol();
    iVar1 = (int)lVar6;
    iVar8 = DAT_102e1234;
    lVar6 = __ftol();
    local_8c = thunk_FUN_1003a570(this,100,0,(int)lVar6,iVar8,iVar1);
  }
  local_8 = 0xffffffff;
  *(Panel **)(local_14 + 0x884) = local_8c;
  (**(code **)(**(int **)(local_14 + 0x884) + 0x40))(local_14);
  (**(code **)(**(int **)(local_14 + 0x884) + 0x24))(0);
  local_18 = (void *)thunk_FUN_1009ace0(DAT_102e15e0);
  local_1c = thunk_FUN_100a28e0(local_18,(byte_conflict *)"Primary Button Text");
  local_20 = thunk_FUN_100a28e0(local_18,(byte_conflict *)"Briefing Text");
  pLVar2 = operator_new(0xd0);
  local_8 = 1;
  if (pLVar2 == (Label *)0x0) {
    local_8c = (Panel *)0x0;
  }
  else {
    lVar6 = __ftol();
    local_8c = (Panel *)vgui::Label::Label(pLVar2,"Spectator",0,0,DAT_102e1234,(int)lVar6);
  }
  local_8 = 0xffffffff;
  *(Panel **)(local_14 + 0x888) = local_8c;
  (**(code **)(**(int **)(local_14 + 0x888) + 0x40))(*(undefined4 *)(local_14 + 0x884));
  uVar3 = thunk_FUN_100a29a0(local_18,local_1c);
  (**(code **)(**(int **)(local_14 + 0x888) + 0x208))(uVar3);
  thunk_FUN_100a29d0(local_18,local_1c,&local_24,&local_28,&local_2c,&local_30);
  (**(code **)(**(int **)(local_14 + 0x888) + 0x120))(local_24,local_28,local_2c,local_30);
  thunk_FUN_100a2a40(local_18,local_1c,&local_24,&local_28,&local_2c,&local_30);
  (**(code **)(**(int **)(local_14 + 0x888) + 300))(local_24,local_28,local_2c,0xff);
  (**(code **)(**(int **)(local_14 + 0x888) + 0x21c))(1);
  pLVar2 = operator_new(0xd0);
  local_8 = 2;
  if (pLVar2 == (Label *)0x0) {
    local_8c = (Panel *)0x0;
  }
  else {
    lVar6 = __ftol();
    iVar1 = (int)lVar6;
    iVar8 = DAT_102e1234;
    lVar6 = __ftol();
    iVar4 = (int)lVar6;
    iVar7 = 0;
    pcVar5 = thunk_FUN_10068750("#Spec_Help_TSTitle");
    local_8c = (Panel *)vgui::Label::Label(pLVar2,pcVar5,iVar7,iVar4,iVar8,iVar1);
  }
  local_8 = 0xffffffff;
  *(Panel **)(local_14 + 0x88c) = local_8c;
  (**(code **)(**(int **)(local_14 + 0x88c) + 0x40))(*(undefined4 *)(local_14 + 0x884));
  uVar3 = thunk_FUN_100a29a0(local_18,local_20);
  (**(code **)(**(int **)(local_14 + 0x88c) + 0x208))(uVar3);
  thunk_FUN_100a29d0(local_18,local_20,&local_24,&local_28,&local_2c,&local_30);
  (**(code **)(**(int **)(local_14 + 0x88c) + 0x120))(local_24,local_28,local_2c,local_30);
  thunk_FUN_100a2a40(local_18,local_20,&local_24,&local_28,&local_2c,&local_30);
  (**(code **)(**(int **)(local_14 + 0x88c) + 300))(local_24,local_28,local_2c,0xff);
  (**(code **)(**(int **)(local_14 + 0x88c) + 0x21c))(1);
  ExceptionList = local_10;
  return;
}

/* 100b0a10  FUN_100b0a10  (28 bytes)
 * undefined4 FUN_100b0a10(int param_1)
 */
undefined4 __fastcall FUN_100b0a10(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}

/* 100b0a40  FUN_100b0a40  (28 bytes)
 * undefined4 FUN_100b0a40(int param_1)
 */
undefined4 __fastcall FUN_100b0a40(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}

/* 100b0a70  FUN_100b0a70  (28 bytes)
 * undefined4 FUN_100b0a70(int param_1)
 */
undefined4 __fastcall FUN_100b0a70(int param_1)

{
  return *(undefined4 *)(param_1 + 600);
}

/* 100b0aa0  FUN_100b0aa0  (88 bytes)
 * ActionSignal * FUN_100b0aa0(char * param_1)
 */
ActionSignal * __thiscall FUN_100b0aa0(void *this,char *param_1)

{
  vgui::ActionSignal::ActionSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_1009adc0_102722b0;
  _strncpy((char *)((int)this + 4),param_1,0x100);
  *(undefined1 *)((int)this + 0x103) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  return this;
}

/* 100b0b10  FUN_100b0b10  (45 bytes)
 * undefined4 * FUN_100b0b10(char * param_1)
 */
undefined4 * __thiscall FUN_100b0b10(void *this,char *param_1)

{
  thunk_FUN_100b0aa0(this,param_1);
  *(undefined ***)this = &PTR_thunk_FUN_100b0bf0_10276f04;
  return this;
}

/* 100b0b50  FUN_100b0b50  (125 bytes)
 * undefined FUN_100b0b50(int param_1)
 */
void __fastcall FUN_100b0b50(int param_1)

{
  if (*(int *)(param_1 + 0xaa0) != 0) {
    (**(code **)(**(int **)(param_1 + 0xaa0) + 0x210))();
  }
  if (*(int *)(param_1 + 0xaa4) != 0) {
    (**(code **)(**(int **)(param_1 + 0xaa4) + 0x210))();
  }
  if (*(int *)(param_1 + 0xaa8) != 0) {
    thunk_FUN_100a3b30(*(void **)(param_1 + 0xaa8));
  }
  return;
}

/* 100b0bf0  FUN_100b0bf0  (175 bytes)
 * undefined FUN_100b0bf0(int param_1)
 * called by: thunk_FUN_100b0bf0
 */
void __fastcall FUN_100b0bf0(int param_1)

{
  int iVar1;
  
  thunk_FUN_1009adc0(param_1);
  iVar1 = _strcmp((char *)(param_1 + 4),"jointeam 1");
  if (iVar1 == 0) {
    DAT_10320644 = 1;
  }
  else {
    iVar1 = _strcmp((char *)(param_1 + 4),"jointeam 2");
    if (iVar1 == 0) {
      DAT_10320644 = 2;
    }
    else {
      iVar1 = _strcmp((char *)(param_1 + 4),"jointeam 3");
      if (iVar1 == 0) {
        DAT_10320644 = 3;
      }
      else {
        iVar1 = _strcmp((char *)(param_1 + 4),"jointeam 4");
        if (iVar1 == 0) {
          DAT_10320644 = 4;
        }
      }
    }
  }
  return;
}

/* 100b0cd0  FUN_100b0cd0  (554 bytes)
 * undefined FUN_100b0cd0(int param_1)
 */
void __fastcall FUN_100b0cd0(int param_1)

{
  char cVar1;
  undefined *puVar2;
  App *pAVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if (((*(int *)(param_1 + 0xa9c) == 0) &&
      (cVar1 = (**(code **)(**(int **)(param_1 + 0xaa0) + 0x28))(), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0xad0) + 0x28))(), cVar1 == '\0')) {
    puVar2 = thunk_FUN_100361a0();
    cVar1 = thunk_FUN_10038710((int)puVar2);
    if (cVar1 == '\0') {
      if (*(int *)(param_1 + 0xad4) == 0) {
        if (*(int *)(*(int *)(param_1 + 0xaac) + 4) != 0) {
          DAT_102e84a4 = 1;
          uVar5 = 2;
          pAVar3 = vgui::App::getInstance();
          piVar4 = (int *)(**(code **)(*(int *)pAVar3 + 0x54))(uVar5);
          uVar5 = (**(code **)(*piVar4 + 0x14))();
          pAVar3 = vgui::App::getInstance();
          (**(code **)(*(int *)pAVar3 + 0x8c))(uVar5);
          return;
        }
        cVar1 = thunk_FUN_10052960(&DAT_102dc084);
        if (cVar1 != '\0') {
          DAT_102e84a4 = 1;
          uVar5 = 2;
          pAVar3 = vgui::App::getInstance();
          piVar4 = (int *)(**(code **)(*(int *)pAVar3 + 0x54))(uVar5);
          uVar5 = (**(code **)(*piVar4 + 0x14))();
          pAVar3 = vgui::App::getInstance();
          (**(code **)(*(int *)pAVar3 + 0x8c))(uVar5);
          return;
        }
      }
      else if (*(float *)(DAT_102da42c + 0xc) != 0.0) {
        DAT_102e84a4 = 1;
        uVar5 = 2;
        pAVar3 = vgui::App::getInstance();
        piVar4 = (int *)(**(code **)(*(int *)pAVar3 + 0x54))(uVar5);
        uVar5 = (**(code **)(*piVar4 + 0x14))();
        pAVar3 = vgui::App::getInstance();
        (**(code **)(*(int *)pAVar3 + 0x8c))(uVar5);
        return;
      }
      thunk_FUN_10052760();
      DAT_102e84a4 = 0;
      uVar5 = 1;
      pAVar3 = vgui::App::getInstance();
      piVar4 = (int *)(**(code **)(*(int *)pAVar3 + 0x54))(uVar5);
      uVar5 = (**(code **)(*piVar4 + 0x14))();
      pAVar3 = vgui::App::getInstance();
      (**(code **)(*(int *)pAVar3 + 0x8c))(uVar5);
      return;
    }
  }
  DAT_102e84a4 = 1;
  uVar5 = 2;
  pAVar3 = vgui::App::getInstance();
  piVar4 = (int *)(**(code **)(*(int *)pAVar3 + 0x54))(uVar5);
  uVar5 = (**(code **)(*piVar4 + 0x14))();
  pAVar3 = vgui::App::getInstance();
  (**(code **)(*(int *)pAVar3 + 0x8c))(uVar5);
  return;
}

/* 100b0f90  FUN_100b0f90  (45 bytes)
 * undefined4 * FUN_100b0f90(char * param_1)
 */
undefined4 * __thiscall FUN_100b0f90(void *this,char *param_1)

{
  thunk_FUN_100b0aa0(this,param_1);
  *(undefined ***)this = &PTR_thunk_FUN_1009dff0_102722a4;
  return this;
}

/* 100b0fd0  FUN_100b0fd0  (59 bytes)
 * InputSignal * FUN_100b0fd0(undefined4 param_1, undefined4 param_2)
 */
InputSignal * __thiscall FUN_100b0fd0(void *this,undefined4 param_1,undefined4 param_2)

{
  vgui::InputSignal::InputSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_100b1020_10276f50;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_1;
  return this;
}

/* 100b1020  FUN_100b1020  (21 bytes)
 * undefined FUN_100b1020(void)
 * called by: thunk_FUN_100b1020
 */
void FUN_100b1020(void)

{
  return;
}

/* 100b1040  FUN_100b1040  (72 bytes)
 * undefined FUN_100b1040(int param_1)
 * called by: thunk_FUN_100b1040
 */
void __fastcall FUN_100b1040(int param_1)

{
  thunk_FUN_100aefd0(DAT_102e15e0,*(undefined4 *)(param_1 + 4));
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x234))(1);
  }
  return;
}

/* 100b10a0  FUN_100b10a0  (47 bytes)
 * undefined FUN_100b10a0(int param_1)
 */
void __fastcall FUN_100b10a0(int param_1)

{
  if (*(int *)(param_1 + 0xad4) != 0) {
    thunk_FUN_100a9370(*(int **)(param_1 + 0xad4));
  }
  return;
}

/* 100b10e0  FUN_100b10e0  (21 bytes)
 * undefined FUN_100b10e0(void)
 * called by: thunk_FUN_100b10e0
 */
void FUN_100b10e0(void)

{
  return;
}

/* 100b1100  FUN_100b1100  (106 bytes)
 * undefined FUN_100b1100(int param_1)
 */
void __fastcall FUN_100b1100(int param_1)

{
  int local_c;
  
  for (local_c = 1; local_c < 0x40; local_c = local_c + 1) {
    (*DAT_102e14ac)(local_c,&DAT_1031f3e0 + local_c * 0x14);
    if ((&DAT_1031f3e6)[local_c * 0x14] != '\0') {
      *(int *)(*(int *)(param_1 + 0xaa8) + 0x2684c) = local_c;
    }
  }
  return;
}

/* 100b1190  FUN_100b1190  (21 bytes)
 * undefined FUN_100b1190(void)
 * called by: thunk_FUN_100b1190
 */
void FUN_100b1190(void)

{
  return;
}

/* 100b11b0  FUN_100b11b0  (21 bytes)
 * undefined FUN_100b11b0(void)
 * called by: thunk_FUN_100b11b0
 */
void FUN_100b11b0(void)

{
  return;
}

/* 100b11d0  FUN_100b11d0  (21 bytes)
 * undefined FUN_100b11d0(void)
 * called by: thunk_FUN_100b11d0
 */
void FUN_100b11d0(void)

{
  return;
}

/* 100b11f0  FUN_100b11f0  (21 bytes)
 * undefined FUN_100b11f0(void)
 * called by: thunk_FUN_100b11f0
 */
void FUN_100b11f0(void)

{
  return;
}

/* 100b1210  FUN_100b1210  (473 bytes)
 * undefined FUN_100b1210(int * param_1)
 * called by: thunk_FUN_100b1210
 */
void __fastcall FUN_100b1210(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = param_1;
  if (param_1[0x2aa] != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x14c))(&local_c,&local_10);
    (**(code **)(*piVar2 + 0x34))();
    (*(code *)**(undefined4 **)(local_8[0x2aa] + 0xbc))(local_c,local_10,local_8[0x2aa]);
  }
  if (DAT_10320644 != local_8[0x85]) {
    thunk_FUN_100af070((int)local_8);
    if (local_8[0x2a9] != 0) {
      (**(code **)(*(int *)local_8[0x2a9] + 0x210))();
    }
    local_8[0x85] = DAT_10320644;
  }
  if (DAT_10320530 != local_8[0x86]) {
    thunk_FUN_100af070((int)local_8);
    local_8[0x86] = DAT_10320530;
  }
  if (((DAT_10320638 != local_8[0x87]) || (DAT_10320640 != local_8[0x88])) ||
     ((float)local_8[0x8a] != *(float *)(DAT_102e8268 + 0xc))) {
    thunk_FUN_100af0c0((int)local_8);
  }
  cVar1 = (**(code **)(*(int *)local_8[0x2aa] + 0x28))();
  if ((cVar1 != '\0') && ((float)local_8[0x83] < DAT_102da3ec)) {
    thunk_FUN_100a3b30((void *)local_8[0x2aa]);
    local_8[0x83] = (int)(DAT_102da3ec + 0.5);
  }
  (**(code **)(*local_8 + 0x38))(local_20,local_1c,local_18,local_14);
  thunk_FUN_1009f9b0(local_20);
  if ((*(uint *)(*(int *)(DAT_102e15e0 + 0xaac) + 4) & 1) != 0) {
    thunk_FUN_1002e960(**(int **)(DAT_102e15e0 + 0xaac));
  }
  return;
}

/* 100b1460  FUN_100b1460  (21 bytes)
 * undefined FUN_100b1460(void)
 * called by: thunk_FUN_100b1460
 */
void FUN_100b1460(void)

{
  return;
}

/* 100b1480  FUN_100b1480  (21 bytes)
 * undefined FUN_100b1480(void)
 * called by: thunk_FUN_100b1480
 */
void FUN_100b1480(void)

{
  return;
}

/* 100b14a0  FUN_100b14a0  (21 bytes)
 * undefined FUN_100b14a0(void)
 * called by: thunk_FUN_100b14a0
 */
void FUN_100b14a0(void)

{
  return;
}

/* 100b14c0  FUN_100b14c0  (21 bytes)
 * undefined FUN_100b14c0(void)
 * called by: thunk_FUN_100b14c0
 */
void FUN_100b14c0(void)

{
  return;
}

/* 100b14e0  FUN_100b14e0  (170 bytes)
 * undefined FUN_100b14e0(int param_1, int param_2)
 */
void __thiscall FUN_100b14e0(void *this,int param_1,int param_2)

{
  App *pAVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(char *)((int)this + 8) != '\0') {
    piVar3 = &param_2;
    piVar4 = &param_1;
    pAVar1 = vgui::App::getInstance();
    (**(code **)(*(int *)pAVar1 + 0x34))(piVar4,piVar3);
    (**(code **)**(undefined4 **)((int)this + 4))
              ((param_1 - *(int *)((int)this + 0x14)) + *(int *)((int)this + 0xc),
               (param_2 - *(int *)((int)this + 0x18)) + *(int *)((int)this + 0x10));
    iVar2 = (**(code **)(**(int **)((int)this + 4) + 0x20))();
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(**(int **)((int)this + 4) + 0x20))();
      (**(code **)(*piVar3 + 0x30))();
    }
  }
  return;
}

/* 100b15c0  FUN_100b15c0  (176 bytes)
 * undefined FUN_100b15c0(undefined4 param_1, undefined4 param_2)
 */
void FUN_100b15c0(undefined4 param_1,undefined4 param_2)

{
  App *pAVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puVar3 = &local_10;
  puVar2 = &local_c;
  pAVar1 = vgui::App::getInstance();
  (**(code **)(*(int *)pAVar1 + 0x34))(puVar2,puVar3);
  *(undefined1 *)(local_8 + 8) = 1;
  *(undefined4 *)(local_8 + 0x14) = local_c;
  *(undefined4 *)(local_8 + 0x18) = local_10;
  (**(code **)(**(int **)(local_8 + 4) + 4))(local_8 + 0xc,local_8 + 0x10);
  pAVar1 = vgui::App::getInstance();
  (**(code **)(*(int *)pAVar1 + 0x38))(param_2);
  (**(code **)(**(int **)(local_8 + 4) + 0x1fc))(*(undefined1 *)(local_8 + 8));
  (**(code **)(**(int **)(local_8 + 4) + 0xa4))();
  return;
}

/* 100b16a0  FUN_100b16a0  (76 bytes)
 * undefined FUN_100b16a0(int param_1)
 */
void __fastcall FUN_100b16a0(int param_1)

{
  App *pAVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 8) = 0;
  (**(code **)(**(int **)(param_1 + 4) + 0x1fc))(*(undefined1 *)(param_1 + 8));
  uVar2 = 0;
  pAVar1 = vgui::App::getInstance();
  (**(code **)(*(int *)pAVar1 + 0x38))(uVar2);
  return;
}

/* 100b1700  FUN_100b1700  (67 bytes)
 * uint FUN_100b1700(undefined4 param_1)
 */
uint __thiscall FUN_100b1700(void *this,undefined4 param_1)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0xa9c) == 0) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    uVar1 = (**(code **)(**(int **)((int)this + 0xa9c) + 0x208))(param_1);
  }
  return uVar1;
}

/* 100b1760  FUN_100b1760  (536 bytes)
 * undefined4 FUN_100b1760(int param_1, int param_2, char * param_3)
 */
undefined4 __thiscall FUN_100b1760(void *this,int param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  
  if ((((*(int *)((int)this + 0x21c) != 0) && (iVar1 = (*DAT_102e1570)(), iVar1 == 0)) &&
      (param_1 != 0)) && ((param_2 == 0xd || (param_2 == 0xa9)))) {
    thunk_FUN_100afd80(this,2);
  }
  if ((*(int *)((int)this + 0xa9c) != 0) && (iVar1 = (*DAT_102e1570)(), iVar1 == 0)) {
    iVar1 = thunk_FUN_100b2c40(*(int *)((int)this + 0xa9c));
    if ((iVar1 == 2) || (iVar1 == 3)) {
      if ((param_2 == 0x1b) &&
         (((iVar1 == 2 && (DAT_10320644 != 0)) || ((iVar1 == 3 && (DAT_10320530 != 0)))))) {
        thunk_FUN_100b0050((int)this);
        return 0;
      }
      for (local_10 = 0x30; local_10 < 0x3a; local_10 = local_10 + 1) {
        if ((param_1 != 0) && (param_2 == local_10)) {
          thunk_FUN_100b1700(this,local_10 + -0x30);
          return 0;
        }
      }
    }
    if ((param_1 != 0) &&
       (((((param_2 == 0xd || (param_2 == 0xa9)) || (param_2 == 0x20)) || (param_2 == 0x1b)) &&
        (((iVar1 == 4 || (iVar1 == 5)) || (iVar1 == 6)))))) {
      thunk_FUN_100b0050((int)this);
      return 0;
    }
    if (((param_3 != (char *)0x0) && (param_1 != 0)) &&
       ((iVar2 = _strcmp(param_3,"+jump"), iVar2 == 0 && (iVar1 == 2)))) {
      (**(code **)(**(int **)((int)this + 0xaa0) + 0x208))(5);
      return 0;
    }
  }
  if ((param_1 != 0) && (*(int *)((int)this + 0xad4) != 0)) {
    if (param_2 == 0x1b) {
      thunk_FUN_100aedd0(this);
      return 0;
    }
    if ((0x2f < param_2) && (param_2 < 0x3a)) {
      uVar3 = thunk_FUN_100a8d30(*(void **)((int)this + 0xad4),param_2);
      if ((uVar3 & 0xff) != 0) {
        thunk_FUN_100aedd0(this);
      }
      return 0;
    }
  }
  if ((*(uint *)(*(int *)((int)this + 0xaac) + 4) & 1) != 0) {
    (**(code **)(*(int *)(**(int **)((int)this + 0xaac) + 8) + 0x1c))(param_2,0);
  }
  return 1;
}

/* 100b1a00  FUN_100b1a00  (94 bytes)
 * undefined4 FUN_100b1a00(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b1a00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_c;
  
  thunk_FUN_10056240(param_3,param_2);
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    iVar1 = thunk_FUN_10056370();
    *(int *)((int)this + local_c * 4 + 0x894) = iVar1;
  }
  thunk_FUN_100af070((int)this);
  return 1;
}

/* 100b1a80  FUN_100b1a80  (327 bytes)
 * undefined4 FUN_100b1a80(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b1a80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int local_c;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x8b0) = uVar1;
  for (local_c = 0; local_c < *(int *)((int)this + 0x8b0); local_c = local_c + 1) {
    iVar2 = local_c + 1;
    if (iVar2 < 5) {
      iVar5 = 0x40;
      pcVar4 = (char *)((int)this + iVar2 * 0x40 + 0x8bc);
      pcVar3 = thunk_FUN_10056560();
      thunk_FUN_10068580(pcVar3,pcVar4,iVar5);
      if (*(int *)((int)this + local_c * 4 + 0x840) != 0) {
        (**(code **)(**(int **)((int)this + local_c * 4 + 0x840) + 0x264))
                  ((int)this + iVar2 * 0x40 + 0x8bc);
      }
      if ((iVar2 < 5) && (*(int *)((int)this + iVar2 * 4 + 0x858) != 0)) {
        (**(code **)(**(int **)((int)this + iVar2 * 4 + 0x858) + 0x264))
                  ((int)this + iVar2 * 0x40 + 0x8bc);
      }
    }
  }
  if (*(int *)((int)this + 0xaa0) != 0) {
    (**(code **)(**(int **)((int)this + 0xaa0) + 0x210))();
  }
  return 1;
}

/* 100b1c20  FUN_100b1c20  (75 bytes)
 * Button * FUN_100b1c20(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 */
Button * __thiscall
FUN_100b1c20(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  thunk_FUN_1009cd50(this,param_2,param_3,param_4,param_5,param_6,(Button)0x0);
  *(undefined ***)this = &PTR_setPos_10276f8c;
  *(undefined4 *)((int)this + 300) = param_1;
  return this;
}

/* 100b1c80  FUN_100b1c80  (64 bytes)
 * undefined4 FUN_100b1c80(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b1c80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x8a8) = uVar1;
  thunk_FUN_100af070((int)this);
  return 1;
}

/* 100b1cd0  FUN_100b1cd0  (102 bytes)
 * undefined4 FUN_100b1cd0(int param_1)
 * called by: thunk_FUN_100b1cd0
 */
undefined4 __fastcall FUN_100b1cd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_100b1d50(DAT_102e15e0);
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  else if (*(int *)(param_1 + 300) == 5) {
    uVar2 = 0;
  }
  else if ((iVar1 < *(int *)(param_1 + 300)) || (*(int *)(param_1 + 300) == DAT_10320644)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 100b1d50  FUN_100b1d50  (28 bytes)
 * undefined4 FUN_100b1d50(int param_1)
 */
undefined4 __fastcall FUN_100b1d50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8b0);
}

/* 100b1d80  FUN_100b1d80  (64 bytes)
 * undefined4 FUN_100b1d80(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b1d80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x8ac) = uVar1;
  thunk_FUN_100af070((int)this);
  return 1;
}

/* 100b1dd0  FUN_100b1dd0  (75 bytes)
 * Button * FUN_100b1dd0(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 */
Button * __thiscall
FUN_100b1dd0(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  thunk_FUN_1009cd50(this,param_2,param_3,param_4,param_5,param_6,(Button)0x0);
  *(undefined ***)this = &PTR_setPos_10277274;
  *(undefined4 *)((int)this + 300) = param_1;
  return this;
}

/* 100b1e30  FUN_100b1e30  (103 bytes)
 * undefined4 FUN_100b1e30(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b1e30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char *_Source;
  size_t _Count;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  if (uVar1 == 4) {
    _Count = 0x40;
    _Source = thunk_FUN_10056560();
    _strncpy((char *)((int)this + 0xa5c),_Source,_Count);
    *(undefined1 *)((int)this + 0xa9b) = 0;
  }
  thunk_FUN_100afd80(this,uVar1);
  return 1;
}

/* 100b1eb0  FUN_100b1eb0  (66 bytes)
 * undefined4 FUN_100b1eb0(int param_1)
 * called by: thunk_FUN_100b1eb0
 */
undefined4 __fastcall FUN_100b1eb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_10320530 == 8) {
    iVar2 = thunk_FUN_100b1f10(DAT_102e15e0);
    if (*(int *)(param_1 + 300) == iVar2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* 100b1f10  FUN_100b1f10  (28 bytes)
 * undefined4 FUN_100b1f10(int param_1)
 */
undefined4 __fastcall FUN_100b1f10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8a8);
}

/* 100b1f40  FUN_100b1f40  (178 bytes)
 * undefined4 FUN_100b1f40(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b1f40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  size_t sVar2;
  char *_Source;
  
  if (*(int *)((int)this + 0x23c) != 0) {
    *(undefined1 *)((int)this + 0x240) = 0;
  }
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x23c) = uVar1;
  sVar2 = _strlen((char *)((int)this + 0x240));
  uVar1 = ((int)(0x5ff - sVar2) < 0) - 1 & 0x5ff - sVar2;
  _Source = thunk_FUN_10056560();
  _strncat((char *)((int)this + 0x240),_Source,uVar1);
  *(undefined1 *)((int)this + 0x83f) = 0;
  if (*(int *)((int)this + 0x23c) != 0) {
    thunk_FUN_100afd80(this,5);
  }
  return 1;
}

/* 100b2020  FUN_100b2020  (75 bytes)
 * Button * FUN_100b2020(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 */
Button * __thiscall
FUN_100b2020(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  thunk_FUN_1009cd50(this,param_2,param_3,param_4,param_5,param_6,(Button)0x0);
  *(undefined ***)this = &PTR_setPos_1027755c;
  *(undefined4 *)((int)this + 300) = param_1;
  return this;
}

/* 100b2080  FUN_100b2080  (64 bytes)
 * undefined4 FUN_100b2080(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b2080(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x8b4) = uVar1;
  thunk_FUN_100af070((int)this);
  return 1;
}

/* 100b20d0  FUN_100b20d0  (102 bytes)
 * undefined4 FUN_100b20d0(int param_1)
 * called by: thunk_FUN_100b20d0
 */
undefined4 __fastcall FUN_100b20d0(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_10320530 == 8) {
    if (*(int *)(param_1 + 300) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = thunk_FUN_100b1d50(DAT_102e15e0);
      if ((*(uint *)(param_1 + 300) & 1 << ((char)uVar1 - 1U & 0x1f)) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* 100b2150  FUN_100b2150  (56 bytes)
 * undefined4 FUN_100b2150(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b2150(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x8b8) = uVar1;
  return 1;
}

/* 100b21a0  FUN_100b21a0  (67 bytes)
 * undefined4 FUN_100b21a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b21a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *_Source;
  size_t _Count;
  
  thunk_FUN_10056240(param_3,param_2);
  _Count = 0x20;
  _Source = thunk_FUN_10056560();
  _strncpy((char *)((int)this + 0xab0),_Source,_Count);
  return 1;
}

/* 100b2200  FUN_100b2200  (75 bytes)
 * Button * FUN_100b2200(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 */
Button * __thiscall
FUN_100b2200(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  thunk_FUN_1009cd50(this,param_2,param_3,param_4,param_5,param_6,(Button)0x0);
  *(undefined ***)this = &PTR_setPos_10277844;
  *(undefined4 *)((int)this + 300) = param_1;
  return this;
}

/* 100b2260  FUN_100b2260  (218 bytes)
 * undefined4 FUN_100b2260(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b2260(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar2 = thunk_FUN_10056300();
  sVar1 = (short)uVar2;
  iVar3 = thunk_FUN_10056370();
  iVar4 = thunk_FUN_10056370();
  iVar5 = thunk_FUN_10056370();
  iVar6 = thunk_FUN_10056370();
  if ((0 < sVar1) && (sVar1 < 0x41)) {
    *(short *)(&DAT_1031fa02 + sVar1 * 0x1a) = (short)iVar3;
    *(short *)(&DAT_1031fa04 + sVar1 * 0x1a) = (short)iVar4;
    *(short *)(&DAT_1031fa06 + sVar1 * 0x1a) = (short)iVar5;
    *(short *)(&DAT_1031fa08 + sVar1 * 0x1a) = (short)iVar6;
    if (*(short *)(&DAT_1031fa08 + sVar1 * 0x1a) < 0) {
      *(undefined2 *)(&DAT_1031fa08 + sVar1 * 0x1a) = 0;
    }
    thunk_FUN_100b0b50((int)this);
  }
  return 1;
}

/* 100b2370  FUN_100b2370  (66 bytes)
 * undefined4 FUN_100b2370(int param_1)
 * called by: thunk_FUN_100b2370
 */
undefined4 __fastcall FUN_100b2370(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_10320530 == 4) {
    iVar2 = thunk_FUN_100b23d0(DAT_102e15e0);
    if (*(int *)(param_1 + 300) == iVar2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* 100b23d0  FUN_100b23d0  (28 bytes)
 * undefined4 FUN_100b23d0(int param_1)
 */
undefined4 __fastcall FUN_100b23d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8ac);
}

/* 100b2400  FUN_100b2400  (87 bytes)
 * Button * FUN_100b2400(undefined4 param_1, undefined4 param_2, char * param_3, int param_4, int param_5, int param_6, int param_7)
 */
Button * __thiscall
FUN_100b2400(void *this,undefined4 param_1,undefined4 param_2,char *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  thunk_FUN_1009cd50(this,param_3,param_4,param_5,param_6,param_7,(Button)0x0);
  *(undefined ***)this = &PTR_setPos_10277b2c;
  *(undefined4 *)((int)this + 300) = param_1;
  *(undefined4 *)((int)this + 0x130) = param_2;
  return this;
}

/* 100b2470  FUN_100b2470  (349 bytes)
 * undefined4 FUN_100b2470(int param_1)
 * called by: thunk_FUN_100b2470
 */
undefined4 __fastcall FUN_100b2470(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (DAT_10320530 == 9) {
    if ((*(uint *)(param_1 + 300) & 2) == 0) {
      uVar2 = thunk_FUN_100b2630(DAT_102e15e0);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    else {
      uVar2 = thunk_FUN_100b2630(DAT_102e15e0);
      if ((uVar2 & 1) == 0) {
        return 1;
      }
    }
    if ((*(uint *)(param_1 + 300) & 4) == 0) {
      if ((*(uint *)(param_1 + 300) & 1) != 0) {
        if ((*(int *)(param_1 + 0x130) == 0) &&
           (uVar2 = thunk_FUN_100b2630(DAT_102e15e0), (uVar2 & 2) == 0)) {
          return 1;
        }
        if ((*(int *)(param_1 + 0x130) == 1) &&
           (uVar2 = thunk_FUN_100b2630(DAT_102e15e0), (uVar2 & 4) == 0)) {
          return 1;
        }
      }
      if ((*(uint *)(param_1 + 300) & 8) == 0) {
        uVar1 = 0;
      }
      else if ((*(int *)(param_1 + 0x130) == 0) &&
              (uVar2 = thunk_FUN_100b2630(DAT_102e15e0), (uVar2 & 8) != 0)) {
        uVar1 = 0;
      }
      else if ((*(int *)(param_1 + 0x130) == 1) &&
              (uVar2 = thunk_FUN_100b2630(DAT_102e15e0), (uVar2 & 0x10) != 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar2 = thunk_FUN_100b2630(DAT_102e15e0);
      if ((uVar2 & 0x1e) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* 100b2630  FUN_100b2630  (28 bytes)
 * undefined4 FUN_100b2630(int param_1)
 */
undefined4 __fastcall FUN_100b2630(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8b4);
}

/* 100b2660  FUN_100b2660  (199 bytes)
 * undefined4 FUN_100b2660(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b2660(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte_conflict *pbVar1;
  uint uVar2;
  int iVar3;
  int local_10;
  
  thunk_FUN_10056240(param_3,param_2);
  pbVar1 = thunk_FUN_10056560();
  local_10 = 1;
  while ((local_10 <= *(int *)(*(int *)((int)this + 0xaa8) + 0x26848) &&
         (uVar2 = FUN_100db540(pbVar1,&DAT_1031e9b8 + local_10 * 0x28), uVar2 != 0))) {
    local_10 = local_10 + 1;
  }
  if (local_10 <= *(int *)(*(int *)((int)this + 0xaa8) + 0x26848)) {
    *(undefined4 *)(local_10 * 0x28 + 0x1031e9d8) = 1;
    iVar3 = thunk_FUN_10056370();
    *(short *)(&DAT_1031e9c8 + local_10 * 0x28) = (short)iVar3;
    iVar3 = thunk_FUN_10056370();
    *(short *)(&DAT_1031e9ca + local_10 * 0x28) = (short)iVar3;
  }
  return 1;
}

/* 100b2760  FUN_100b2760  (130 bytes)
 * undefined4 FUN_100b2760(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b2760(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  char *_Source;
  size_t _Count;
  
  if (*(int *)((int)this + 0xaa8) != 0) {
    thunk_FUN_10056240(param_3,param_2);
    uVar2 = thunk_FUN_10056300();
    sVar1 = (short)uVar2;
    if ((0 < sVar1) && (sVar1 < 0x41)) {
      _Count = 0x10;
      _Source = thunk_FUN_10056560();
      _strncpy(&DAT_1031fa0a + sVar1 * 0x1a,_Source,_Count);
    }
    thunk_FUN_100a43d0(*(void **)((int)this + 0xaa8));
  }
  return 1;
}

/* 100b2810  FUN_100b2810  (43 bytes)
 * undefined FUN_100b2810(int param_1, int param_2)
 */
void __thiscall FUN_100b2810(void *this,int param_1,int param_2)

{
  thunk_FUN_100a56e0(*(void **)((int)this + 0xaa8),param_1,param_2);
  return;
}

/* 100b2850  FUN_100b2850  (90 bytes)
 * Button * FUN_100b2850(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 */
Button * __thiscall
FUN_100b2850(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  thunk_FUN_1009cd50(this,param_2,param_3,param_4,param_5,param_6,(Button)0x0);
  *(undefined ***)this = &PTR_setPos_10277e24;
  FUN_100bb6e0((undefined1 *)((int)this + 300),(byte_conflict *)"maps/%s.bsp");
  return this;
}

/* 100b28c0  FUN_100b28c0  (198 bytes)
 * undefined4 FUN_100b28c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_100b28c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar2 = thunk_FUN_10056300();
  sVar1 = (short)uVar2;
  if ((0 < sVar1) && (sVar1 < 0x41)) {
    uVar2 = thunk_FUN_10056300();
    *(uint *)(&DAT_1031f8f8 + sVar1 * 4) = uVar2;
    piVar3 = (int *)(*DAT_102e1524)();
    if (*piVar3 == (int)sVar1) {
      DAT_102e0281 = *(int *)(&DAT_1031f8f8 + sVar1 * 4) == 1;
      if ((bool)DAT_102e0281) {
        thunk_FUN_1006b3f0(&DAT_102dc084);
      }
      iVar4 = thunk_FUN_100b5a50();
      if (iVar4 != 0) {
        thunk_FUN_1008f090();
      }
      thunk_FUN_10019d50();
    }
    (&DAT_10316c64)[sVar1] = 0;
    (&DAT_1031fa01)[sVar1 * 0x1a] = (&DAT_1031f8f8)[sVar1 * 4];
  }
  return 1;
}

/* 100b29c0  FUN_100b29c0  (76 bytes)
 * undefined4 FUN_100b29c0(int param_1)
 * called by: thunk_FUN_100b29c0
 */
undefined4 __fastcall FUN_100b29c0(int param_1)

{
  char *_Str2;
  undefined4 uVar1;
  int iVar2;
  
  _Str2 = (char *)(*DAT_102e1580)();
  if (_Str2 == (char *)0x0) {
    uVar1 = 1;
  }
  else {
    iVar2 = _strcmp((char *)(param_1 + 300),_Str2);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

/* 100b2a20  FUN_100b2a20  (75 bytes)
 * Button * FUN_100b2a20(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 */
Button * __thiscall
FUN_100b2a20(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  thunk_FUN_1009cd50(this,param_2,param_3,param_4,param_5,param_6,(Button)0x0);
  *(undefined4 *)((int)this + 300) = param_1;
  *(undefined ***)this = &PTR_setPos_1027810c;
  return this;
}

/* 100b2a80  FUN_100b2a80  (51 bytes)
 * undefined4 FUN_100b2a80(int param_1)
 * called by: thunk_FUN_100b2a80
 */
undefined4 __fastcall FUN_100b2a80(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_10320644 == *(int *)(param_1 + 300)) {
    uVar1 = thunk_FUN_1009e120();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* 100b2ac0  FUN_100b2ac0  (104 bytes)
 * undefined4 FUN_100b2ac0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100b2ac0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x890) = uVar1;
  thunk_FUN_100af070((int)this);
  if (*(int *)((int)this + 0xaa0) != 0) {
    (**(code **)(**(int **)((int)this + 0xaa0) + 0x210))();
  }
  return 1;
}

/* 100b2b50  FUN_100b2b50  (65 bytes)
 * undefined FUN_100b2b50(undefined4 param_1)
 */
void __thiscall FUN_100b2b50(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0xc0) == 0) {
    *(undefined4 *)((int)this + 0xc0) = param_1;
  }
  else {
    thunk_FUN_100b2b50(*(void **)((int)this + 0xc0),param_1);
  }
  return;
}

/* 100b2bb0  FUN_100b2bb0  (33 bytes)
 * undefined FUN_100b2bb0(undefined4 param_1)
 */
void __thiscall FUN_100b2bb0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc4) = param_1;
  return;
}

/* 100b2be0  FUN_100b2be0  (33 bytes)
 * undefined FUN_100b2be0(undefined4 param_1)
 */
void __thiscall FUN_100b2be0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xcc) = param_1;
  return;
}

/* 100b2c10  FUN_100b2c10  (28 bytes)
 * undefined4 FUN_100b2c10(int param_1)
 */
undefined4 __fastcall FUN_100b2c10(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}

/* 100b2c40  FUN_100b2c40  (28 bytes)
 * undefined4 FUN_100b2c40(int param_1)
 */
undefined4 __fastcall FUN_100b2c40(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}

/* 100b2c70  FUN_100b2c70  (30 bytes)
 * int * FUN_100b2c70(int * param_1)
 */
int * __fastcall FUN_100b2c70(int *param_1)

{
  thunk_FUN_100b4bf0(param_1);
  return param_1;
}

/* 100b2ca0  FUN_100b2ca0  (3603 bytes)
 * undefined4 * FUN_100b2ca0(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)
 */
undefined4 * __thiscall
FUN_100b2ca0(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  Label *pLVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  LineBorder *pLVar6;
  TextPanel *pTVar7;
  undefined4 uVar8;
  undefined *puVar9;
  Button *pBVar10;
  char *pcVar11;
  longlong lVar12;
  int iVar13;
  Button BVar14;
  Panel *local_1ec;
  char local_140 [256];
  int local_40;
  int *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_18;
  undefined4 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e6818;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  thunk_FUN_1003a500(this,param_1,param_2,param_3,param_4,param_5,param_6);
  *local_14 = &PTR_setPos_1027844c;
  local_18 = (void *)thunk_FUN_1009ace0(DAT_102e15e0);
  local_1c = thunk_FUN_100a28e0(local_18,(byte_conflict *)"Title Font");
  local_20 = thunk_FUN_100a28e0(local_18,(byte_conflict *)"Briefing Text");
  local_24 = thunk_FUN_100a28e0(local_18,(byte_conflict *)"Team Info Text");
  local_28 = thunk_FUN_100a29a0(local_18,local_1c);
  pLVar1 = operator_new(0xd0);
  local_8 = 0;
  if (pLVar1 == (Label *)0x0) {
    local_1ec = (Panel *)0x0;
  }
  else {
    lVar12 = __ftol();
    iVar2 = (int)lVar12;
    lVar12 = __ftol();
    local_1ec = (Panel *)vgui::Label::Label(pLVar1,"",(int)lVar12,iVar2);
  }
  local_8 = 0xffffffff;
  local_3c = (int *)local_1ec;
  (**(code **)(*(int *)local_1ec + 0x40))();
  (**(code **)(*local_3c + 0x208))();
  thunk_FUN_100a29d0(local_18,local_1c,&local_2c,&local_30,&local_34,&local_38);
  (**(code **)(*local_3c + 0x120))();
  thunk_FUN_100a2a40(local_18,local_1c,&local_2c,&local_30,&local_34,&local_38);
  (**(code **)(*local_3c + 300))();
  (**(code **)(*local_3c + 0x21c))();
  thunk_FUN_10068750("Select Team");
  (**(code **)(*local_3c + 0x200))();
  pvVar3 = operator_new(0xc0);
  local_8 = 1;
  if (pvVar3 == (void *)0x0) {
    local_1ec = (Panel *)0x0;
  }
  else {
    lVar12 = __ftol();
    iVar2 = (int)lVar12;
    lVar12 = __ftol();
    iVar4 = (int)lVar12;
    lVar12 = __ftol();
    iVar5 = (int)lVar12;
    lVar12 = __ftol();
    local_1ec = thunk_FUN_1003a570(pvVar3,0xff,(int)lVar12,iVar5,iVar4,iVar2);
  }
  local_8 = 0xffffffff;
  local_14[0x36] = local_1ec;
  (**(code **)(*(int *)local_14[0x36] + 0x40))();
  pLVar6 = operator_new(0x44);
  local_8 = 2;
  if (pLVar6 != (LineBorder *)0x0) {
    vgui::Color::Color((Color *)&stack0xfffffdcc,0xb2,0x76,0,0);
    vgui::LineBorder::LineBorder(pLVar6);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)local_14[0x36] + 0xd4))();
  pLVar1 = operator_new(0xd0);
  local_8 = 3;
  if (pLVar1 == (Label *)0x0) {
    local_1ec = (Panel *)0x0;
  }
  else {
    lVar12 = __ftol();
    iVar2 = (int)lVar12;
    lVar12 = __ftol();
    local_1ec = (Panel *)vgui::Label::Label(pLVar1,"",(int)lVar12,iVar2);
  }
  local_8 = 0xffffffff;
  local_14[0x37] = local_1ec;
  (**(code **)(*(int *)local_14[0x37] + 0x208))();
  (**(code **)(*(int *)local_14[0x37] + 0x40))();
  thunk_FUN_100a29d0(local_18,local_1c,&local_2c,&local_30,&local_34,&local_38);
  (**(code **)(*(int *)local_14[0x37] + 0x120))(local_2c,local_30,local_34,local_38);
  thunk_FUN_100a2a40(local_18,local_1c,&local_2c,&local_30,&local_34,&local_38);
  (**(code **)(*(int *)local_14[0x37] + 300))(local_2c,local_30,local_34,local_38);
  (**(code **)(*(int *)local_14[0x37] + 0x21c))(3);
  pvVar3 = operator_new(0xd0);
  local_8 = 4;
  if (pvVar3 == (void *)0x0) {
    local_1ec = (Panel *)0x0;
  }
  else {
    lVar12 = __ftol();
    iVar2 = (int)lVar12;
    lVar12 = __ftol();
    iVar4 = (int)lVar12;
    lVar12 = __ftol();
    iVar5 = (int)lVar12;
    lVar12 = __ftol();
    local_1ec = (Panel *)thunk_FUN_1009db50(pvVar3,(int)lVar12,iVar5,iVar4,iVar2);
  }
  local_8 = 0xffffffff;
  local_14[0x35] = local_1ec;
  (**(code **)(*(int *)local_14[0x35] + 0x40))(local_14[0x36]);
  (**(code **)(*(int *)local_14[0x35] + 0x1fc))(0,0);
  pTVar7 = operator_new(0xc0);
  local_8 = 5;
  if (pTVar7 == (TextPanel *)0x0) {
    local_1ec = (Panel *)0x0;
  }
  else {
    lVar12 = __ftol();
    iVar2 = (int)lVar12;
    lVar12 = __ftol();
    local_1ec = (Panel *)vgui::TextPanel::TextPanel(pTVar7,"",0,0,(int)lVar12,iVar2);
  }
  local_8 = 0xffffffff;
  local_14[0x38] = local_1ec;
  uVar8 = (**(code **)(*(int *)local_14[0x35] + 0x204))();
  (**(code **)(*(int *)local_14[0x38] + 0x40))(uVar8);
  uVar8 = thunk_FUN_100a29a0(local_18,local_20);
  (**(code **)(*(int *)local_14[0x38] + 0x200))(uVar8);
  thunk_FUN_100a29d0(local_18,local_20,&local_2c,&local_30,&local_34,&local_38);
  (**(code **)(*(int *)local_14[0x38] + 0x120))(local_2c,local_30,local_34,local_38);
  thunk_FUN_100a2a40(local_18,local_20,&local_2c,&local_30,&local_34,&local_38);
  (**(code **)(*(int *)local_14[0x38] + 300))(local_2c,local_30,local_34,local_38);
  puVar9 = thunk_FUN_10068750("#Map_Description_not_available");
  (**(code **)(*(int *)local_14[0x38] + 0x1fc))(puVar9);
  for (local_40 = 1; local_40 < 6; local_40 = local_40 + 1) {
    lVar12 = __ftol();
    iVar2 = (int)lVar12;
    pBVar10 = operator_new(300);
    local_8 = 6;
    if (pBVar10 == (Button *)0x0) {
      local_1ec = (Panel *)0x0;
    }
    else {
      BVar14 = (Button)0x1;
      lVar12 = __ftol();
      iVar4 = (int)lVar12;
      lVar12 = __ftol();
      iVar5 = (int)lVar12;
      lVar12 = __ftol();
      local_1ec = (Panel *)thunk_FUN_1009cd50(pBVar10,"",(int)lVar12,iVar2,iVar5,iVar4,BVar14);
    }
    local_8 = 0xffffffff;
    local_14[local_40 + 0x3f] = local_1ec;
    (**(code **)(*(int *)local_14[local_40 + 0x3f] + 0x40))(local_14);
    (**(code **)(*(int *)local_14[local_40 + 0x3f] + 0x21c))(3);
    (**(code **)(*(int *)local_14[local_40 + 0x3f] + 0x24))(0);
    if (local_40 == 5) {
      thunk_FUN_1009d090((Label *)local_14[0x44],(Label)0x35);
      puVar9 = thunk_FUN_10068750("Auto assign");
      (**(code **)(*(int *)local_14[0x44] + 0x264))(puVar9);
      (**(code **)(*(int *)local_14[0x44] + 0x24))(1);
    }
    FUN_100bb6e0(local_140,(byte_conflict *)"jointeam %d");
    pvVar3 = operator_new(0x108);
    local_8 = 7;
    if (pvVar3 == (void *)0x0) {
      local_1ec = (Panel *)0x0;
    }
    else {
      local_1ec = (Panel *)thunk_FUN_100b4b20(pvVar3,local_140);
    }
    local_8 = 0xffffffff;
    (**(code **)(*(int *)local_14[local_40 + 0x3f] + 0x240))(local_1ec);
    pvVar3 = operator_new(0xc);
    local_8 = 8;
    if (pvVar3 == (void *)0x0) {
      local_1ec = (Panel *)0x0;
    }
    else {
      local_1ec = (Panel *)thunk_FUN_1009aec0(pvVar3,local_14,local_40);
    }
    local_8 = 0xffffffff;
    (**(code **)(*(int *)local_14[local_40 + 0x3f] + 0x70))(local_1ec);
    pTVar7 = operator_new(0xc0);
    local_8 = 9;
    if (pTVar7 == (TextPanel *)0x0) {
      local_1ec = (Panel *)0x0;
    }
    else {
      lVar12 = __ftol();
      iVar2 = (int)lVar12;
      lVar12 = __ftol();
      iVar4 = (int)lVar12;
      lVar12 = __ftol();
      iVar5 = (int)lVar12;
      lVar12 = __ftol();
      local_1ec = (Panel *)vgui::TextPanel::TextPanel(pTVar7,"",(int)lVar12,iVar5,iVar4,iVar2);
    }
    local_8 = 0xffffffff;
    local_14[local_40 + 0x39] = local_1ec;
    (**(code **)(*(int *)local_14[local_40 + 0x39] + 0x40))(local_14[0x36]);
    uVar8 = thunk_FUN_100a29a0(local_18,local_24);
    (**(code **)(*(int *)local_14[local_40 + 0x39] + 0x200))(uVar8);
    (**(code **)(*(int *)local_14[local_40 + 0x39] + 0x120))
              (*(undefined4 *)(&DAT_1028aeec + (local_40 % DAT_1028aee8) * 0xc),
               *(undefined4 *)(&DAT_1028aef0 + (local_40 % DAT_1028aee8) * 0xc),
               *(undefined4 *)(&DAT_1028aef4 + (local_40 % DAT_1028aee8) * 0xc),0);
    (**(code **)(*(int *)local_14[local_40 + 0x39] + 300))(0,0,0,0xff);
  }
  pBVar10 = operator_new(300);
  local_8 = 10;
  if (pBVar10 == (Button *)0x0) {
    local_1ec = (Panel *)0x0;
  }
  else {
    BVar14 = (Button)0x0;
    lVar12 = __ftol();
    iVar2 = (int)lVar12;
    lVar12 = __ftol();
    iVar4 = (int)lVar12;
    iVar13 = 0;
    lVar12 = __ftol();
    iVar5 = (int)lVar12;
    pcVar11 = thunk_FUN_10068750("#Menu_Cancel");
    local_1ec = (Panel *)thunk_FUN_1009cd50(pBVar10,pcVar11,iVar5,iVar13,iVar4,iVar2,BVar14);
  }
  local_8 = 0xffffffff;
  local_14[0x46] = local_1ec;
  (**(code **)(*(int *)local_14[0x46] + 0x40))(local_14);
  pvVar3 = operator_new(8);
  local_8 = 0xb;
  if (pvVar3 == (void *)0x0) {
    local_1ec = (Panel *)0x0;
  }
  else {
    local_1ec = (Panel *)thunk_FUN_1009ae20(pvVar3,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)local_14[0x46] + 0x240))(local_1ec);
  local_14[0x47] = 0;
  thunk_FUN_100b3e40((int)local_14);
  ExceptionList = local_10;
  return local_14;
}

/* 100b3e40  FUN_100b3e40  (88 bytes)
 * undefined FUN_100b3e40(int param_1)
 */
void __fastcall FUN_100b3e40(int param_1)

{
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x20c))(0,0);
  DAT_1031bee0 = 0;
  DAT_10297b20 = 0;
  return;
}

/* 100b3eb0  FUN_100b3eb0  (1910 bytes)
 * undefined FUN_100b3eb0(void)
 * called by: thunk_FUN_100b3eb0
 */
void FUN_100b3eb0(void)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 local_bcc;
  undefined4 local_bc8;
  int local_bc4;
  uint *local_bc0;
  uint local_bbc [64];
  uint local_abc [64];
  uint *local_9bc;
  char local_9b8 [1340];
  undefined1 local_47c;
  int local_478;
  int local_474;
  uint local_470 [271];
  undefined1 local_34;
  Label local_30 [32];
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  lVar4 = __ftol();
  local_c = (undefined4)lVar4;
  for (local_10 = 1; local_10 < 5; local_10 = local_10 + 1) {
    if (local_8[local_10 + 0x3f] != 0) {
      iVar1 = thunk_FUN_100b1d50((int)DAT_102e15e0);
      if (iVar1 < local_10) {
        (**(code **)(*(int *)local_8[local_10 + 0x3f] + 0x24))(0);
      }
      else {
        iVar1 = thunk_FUN_100a60e0(DAT_102e15e0,local_10);
        (**(code **)(*(int *)local_8[local_10 + 0x3f] + 0x264))(iVar1);
        FUN_100bb6e0(local_30,"%d");
        thunk_FUN_1009d090((Label *)local_8[local_10 + 0x3f],local_30[0]);
        (**(code **)(*(int *)local_8[local_10 + 0x3f] + 0x24))(1);
        uVar5 = local_c;
        lVar4 = __ftol();
        (*(code *)**(undefined4 **)local_8[local_10 + 0x3f])((int)lVar4,uVar5);
        lVar4 = __ftol();
        local_c = (undefined4)lVar4;
        if (local_8[0x48] == 0) {
          (**(code **)(*local_8 + 0x20c))(local_10);
        }
        FUN_100bba20(local_470,(uint *)&DAT_1026e6d0);
        local_474 = 0;
        for (local_478 = 1; local_478 < 0x40; local_478 = local_478 + 1) {
          if (((*(int *)(&DAT_1031f3e0 + local_478 * 0x14) != 0) &&
              ((&DAT_1031f3e6)[local_478 * 0x14] == '\0')) &&
             (*(short *)(&DAT_1031fa08 + local_478 * 0x1a) == local_10)) {
            local_474 = local_474 + 1;
            if (1 < local_474) {
              sVar2 = _strlen((char *)local_470);
              _strncat((char *)local_470,", ",0x43d - sVar2);
            }
            sVar2 = _strlen((char *)local_470);
            _strncat((char *)local_470,*(char **)(&DAT_1031f3e0 + local_478 * 0x14),0x43d - sVar2);
            local_34 = 0;
          }
        }
        if (local_474 < 1) {
          (**(code **)(*(int *)local_8[local_10 + 0x39] + 0x1fc))("");
        }
        else {
          if (local_474 == 1) {
            thunk_FUN_100a60e0(DAT_102e15e0,local_10);
            FUN_100bb6e0(local_9b8,(byte_conflict *)"%s: %d Player (%d points)");
          }
          else {
            thunk_FUN_100a60e0(DAT_102e15e0,local_10);
            FUN_100bb6e0(local_9b8,(byte_conflict *)"%s: %d Players (%d points)");
          }
          sVar2 = _strlen(local_9b8);
          _strncat(local_9b8,(char *)local_470,0x53d - sVar2);
          local_47c = 0;
          (**(code **)(*(int *)local_8[local_10 + 0x39] + 0x1fc))(local_9b8);
        }
      }
    }
  }
  uVar5 = local_c;
  lVar4 = __ftol();
  (*(code *)**(undefined4 **)local_8[0x44])((int)lVar4,uVar5);
  lVar4 = __ftol();
  local_c = (undefined4)lVar4;
  if (local_8[0x47] != 0) {
    iVar1 = (**(code **)(*(int *)local_8[0x47] + 0x260))();
    if (iVar1 == 0) {
      uVar5 = local_c;
      lVar4 = __ftol();
      (*(code *)**(undefined4 **)local_8[0x47])((int)lVar4,uVar5);
      (**(code **)(*(int *)local_8[0x47] + 0x24))(1);
      lVar4 = __ftol();
      local_c = (undefined4)lVar4;
    }
    else {
      (**(code **)(*(int *)local_8[0x47] + 0x24))(0);
    }
  }
  uVar5 = local_c;
  lVar4 = __ftol();
  (*(code *)**(undefined4 **)local_8[0x46])((int)lVar4,uVar5);
  lVar4 = __ftol();
  local_c = (undefined4)lVar4;
  (**(code **)(*(int *)local_8[0x46] + 0x24))(1);
  if ((((char)local_8[0x45] == '\0') &&
      (local_9bc = (uint *)(*DAT_102e1580)(), local_9bc != (uint *)0x0)) &&
     ((char)*local_9bc != '\0')) {
    FUN_100bba20(local_abc,local_9bc);
    local_bc0 = FUN_100c1d70(local_abc,'/');
    if (local_bc0 == (uint *)0x0) {
      local_bc0 = FUN_100c1d70(local_abc,'\\');
    }
    FUN_100bba20(local_bbc,(uint *)((int)local_bc0 + 1));
    local_bc0 = FUN_100c1d70(local_bbc,'.');
    *(undefined1 *)local_bc0 = 0;
    (**(code **)(*(int *)local_8[0x37] + 0x200))(local_8[0x37],local_bbc);
    *(undefined1 *)local_bc0 = 0x2e;
    FUN_100bba20(local_abc,local_9bc);
    local_bc0 = FUN_100c1d70(local_abc,'.');
    *(undefined1 *)local_bc0 = 0;
    FUN_100bba30(local_abc,(uint *)&DAT_10276c64);
    local_bc4 = (*DAT_102e1594)(local_abc,5,0);
    if (local_bc4 != 0) {
      (**(code **)(*(int *)local_8[0x38] + 0x1fc))(local_bc4);
      piVar3 = (int *)(**(code **)(*(int *)local_8[0x38] + 0x208))(&local_bc8,&local_bcc);
      (**(code **)(*piVar3 + 100))();
      (**(code **)(*(int *)local_8[0x38] + 8))(local_bc8,local_bcc);
    }
    *(undefined1 *)(local_8 + 0x45) = 1;
  }
  (**(code **)(*(int *)local_8[0x35] + 0x220))();
  return;
}

/* 100b4810  FUN_100b4810  (185 bytes)
 * undefined4 FUN_100b4810(int param_1)
 * called by: thunk_FUN_100b4810
 */
uint __thiscall FUN_100b4810(void *this,int param_1)

{
  char cVar1;
  uint in_EAX;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == 5) {
    uVar2 = (**(code **)(**(int **)((int)this + 0x110) + 600))();
    uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  else {
    if ((0 < param_1) && (in_EAX = thunk_FUN_100b1d50(DAT_102e15e0), param_1 <= (int)in_EAX)) {
      if (*(int *)((int)this + param_1 * 4 + 0xfc) == 0) {
        return param_1 & 0xffffff00;
      }
      cVar1 = (**(code **)(**(int **)((int)this + param_1 * 4 + 0xfc) + 0x28))();
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(**(int **)((int)this + param_1 * 4 + 0xfc) + 600))();
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      return 0;
    }
    uVar3 = in_EAX & 0xffffff00;
  }
  return uVar3;
}

/* 100b4900  FUN_100b4900  (41 bytes)
 * undefined FUN_100b4900(int * param_1)
 * called by: thunk_FUN_100b4900
 */
void __fastcall FUN_100b4900(int *param_1)

{
  (**(code **)(*param_1 + 0x210))();
  thunk_FUN_1003a620(param_1);
  return;
}

/* 100b4940  FUN_100b4940  (56 bytes)
 * undefined FUN_100b4940(int * param_1)
 * called by: thunk_FUN_100b4940
 */
void __fastcall FUN_100b4940(int *param_1)

{
  if ((char)param_1[0x45] == '\0') {
    (**(code **)(*param_1 + 0x210))();
  }
  thunk_FUN_1003a480(param_1);
  return;
}

/* 100b4990  FUN_100b4990  (317 bytes)
 * undefined FUN_100b4990(int param_1)
 * called by: thunk_FUN_100b4990
 */
void __thiscall FUN_100b4990(void *this,int param_1)

{
  int local_c;
  
  if (*(int *)((int)this + 0x11c) != 0) {
    (**(code **)(**(int **)((int)this + 0x11c) + 0x234))(0);
  }
  for (local_c = 1; local_c < 6; local_c = local_c + 1) {
    (**(code **)(**(int **)((int)this + local_c * 4 + 0xfc) + 0x234))(0);
    (**(code **)(**(int **)((int)this + local_c * 4 + 0xe4) + 0x24))(0);
  }
  if (param_1 == 6) {
    if (*(int *)((int)this + 0x11c) != 0) {
      (**(code **)(**(int **)((int)this + 0x11c) + 0x234))(1);
    }
  }
  else {
    (**(code **)(**(int **)((int)this + param_1 * 4 + 0xfc) + 0x234))(1);
    (**(code **)(**(int **)((int)this + param_1 * 4 + 0xe4) + 0x24))(1);
  }
  *(int *)((int)this + 0x120) = param_1;
  (**(code **)(**(int **)((int)this + 0xd4) + 0x220))();
  return;
}

/* 100b4b20  FUN_100b4b20  (49 bytes)
 * undefined4 * FUN_100b4b20(char * param_1)
 */
undefined4 * __thiscall FUN_100b4b20(void *this,char *param_1)

{
  thunk_FUN_1009ad50(this,param_1);
  *(undefined ***)this = &PTR_thunk_FUN_100b0bf0_10276f04;
  return this;
}

/* 100b4b60  FUN_100b4b60  (40 bytes)
 * undefined FUN_100b4b60(int param_1)
 * called by: thunk_FUN_100b4b60
 */
void __fastcall FUN_100b4b60(int param_1)

{
  thunk_FUN_1003a5d0(param_1);
  *(undefined4 *)(param_1 + 0x120) = 0;
  return;
}

/* 100b4ba0  FUN_100b4ba0  (52 bytes)
 * void * FUN_100b4ba0(uint param_1)
 */
void * __cdecl FUN_100b4ba0(uint param_1)

{
  void *_Dst;
  
  _Dst = operator_new(param_1);
  _memset(_Dst,0,param_1);
  return _Dst;
}

/* 100b4bf0  FUN_100b4bf0  (79 bytes)
 * undefined FUN_100b4bf0(int * param_1)
 */
void __fastcall FUN_100b4bf0(int *param_1)

{
  param_1[1] = 0;
  if ((*param_1 != 0) && ((void *)*param_1 != (void *)0x0)) {
    thunk_FUN_100b4c60((void *)*param_1,1);
  }
  return;
}

/* 100b4c60  FUN_100b4c60  (54 bytes)
 * undefined4 * FUN_100b4c60(uint param_1)
 */
undefined4 * __thiscall FUN_100b4c60(void *this,uint param_1)

{
  thunk_FUN_1002bcc0(this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 100b4cb0  FUN_100b4cb0  (61 bytes)
 * undefined FUN_100b4cb0(undefined4 * param_1)
 */
void __fastcall FUN_100b4cb0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    thunk_FUN_100b4c60((void *)*param_1,1);
  }
  return;
}

/* 100b4d00  FUN_100b4d00  (57 bytes)
 * undefined FUN_100b4d00(undefined4 * param_1)
 */
void __fastcall FUN_100b4d00(undefined4 *param_1)

{
  if ((param_1[1] & 1) == 0) {
    thunk_FUN_1002dc40((void *)*param_1,'\x01');
    thunk_FUN_100b0cd0(DAT_102e15e0);
  }
  return;
}

/* 100b4d50  FUN_100b4d50  (42 bytes)
 * undefined FUN_100b4d50(undefined4 * param_1)
 */
void __fastcall FUN_100b4d50(undefined4 *param_1)

{
  thunk_FUN_1002dc40((void *)*param_1,'\0');
  thunk_FUN_100b0cd0(DAT_102e15e0);
  return;
}

/* 100b4d90  FUN_100b4d90  (52 bytes)
 * void * FUN_100b4d90(uint param_1)
 */
void * __cdecl FUN_100b4d90(uint param_1)

{
  void *_Dst;
  
  _Dst = operator_new(param_1);
  _memset(_Dst,0,param_1);
  return _Dst;
}

/* 100b4de0  FUN_100b4de0  (58 bytes)
 * undefined FUN_100b4de0(undefined4 * param_1)
 */
void __fastcall FUN_100b4de0(undefined4 *param_1)

{
  *param_1 = &PTR_setPos_1026adac;
  if (param_1[0x37] != 0) {
    FUN_100bf140((void *)param_1[0x37]);
  }
  return;
}

/* 100b4e30  FUN_100b4e30  (198 bytes)
 * undefined FUN_100b4e30(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7)
 */
void __thiscall
FUN_100b4e30(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  void *pvVar1;
  
  *(int *)((int)this + 0xbc) = param_1;
  *(int *)((int)this + 0xc4) = param_2;
  *(int *)((int)this + 200) = param_3;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(int *)((int)this + 0xd4) = param_4;
  *(int *)((int)this + 0xd8) = param_5;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(int *)((int)this + 0xe0) = param_6;
  (**(code **)(*(int *)this + 0x70))(param_7);
  pvVar1 = _malloc(param_1 << 2);
  *(void **)((int)this + 0xdc) = pvVar1;
  _memset(*(void **)((int)this + 0xdc),0,param_1 << 2);
  return;
}

/* 100b4f30  FUN_100b4f30  (161 bytes)
 * undefined FUN_100b4f30(int * param_1)
 */
void __fastcall FUN_100b4f30(int *param_1)

{
  (**(code **)(*param_1 + 0x40))(DAT_102e15e0);
  (**(code **)(*param_1 + 300))(0,0,0,200);
  (**(code **)*param_1)(param_1[0x31],param_1[0x32]);
  (**(code **)(*param_1 + 8))(param_1[0x35],param_1[0x2f] * param_1[0x36]);
  (**(code **)(*param_1 + 0xd4))(0);
  (**(code **)(*param_1 + 0x24))(0);
  return;
}

/* 100b5000  FUN_100b5000  (522 bytes)
 * undefined FUN_100b5000(int param_1, uint * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 */
void __thiscall
FUN_100b5000(void *this,int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int *this_00;
  void *this_01;
  Button *local_68;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e685b;
  local_10 = ExceptionList;
  if ((*(int *)((int)this + 0xdc) != 0) && (param_1 < *(int *)((int)this + 0xbc))) {
    ExceptionList = &local_10;
    if (*(int *)(*(int *)((int)this + 0xdc) + param_1 * 4) != 0) {
      ExceptionList = &local_10;
      FUN_100bbb10(*(void **)(*(int *)((int)this + 0xdc) + param_1 * 4));
    }
    this_01 = operator_new(0x14c);
    local_8 = 0;
    if (this_01 == (void *)0x0) {
      local_68 = (Button *)0x0;
    }
    else {
      local_68 = thunk_FUN_100b53c0(this_01,param_2,*(int *)((int)this + 0xcc),
                                    *(int *)((int)this + 0xd0),*(int *)((int)this + 0xd4),
                                    *(int *)((int)this + 0xd8));
    }
    local_8 = 0xffffffff;
    *(Button **)(*(int *)((int)this + 0xdc) + param_1 * 4) = local_68;
    this_00 = *(int **)(*(int *)((int)this + 0xdc) + param_1 * 4);
    (**(code **)(*this_00 + 0x24))(1);
    thunk_FUN_100b5860(this_00,param_2);
    thunk_FUN_100b5440(this_00,param_3,param_4,param_5,param_7);
    thunk_FUN_100b58a0(this_00,param_8,param_9);
    (**(code **)*this_00)(*(undefined4 *)((int)this + 0xcc),*(undefined4 *)((int)this + 0xd0));
    (**(code **)(*this_00 + 8))(*(undefined4 *)((int)this + 0xd4),*(undefined4 *)((int)this + 0xd8))
    ;
    (**(code **)(*this_00 + 0x21c))(4);
    (**(code **)(*this_00 + 0x240))(*(undefined4 *)((int)this + 0xe0));
    if (this_00 == (int *)0x0) {
      local_68 = (Button *)0x0;
    }
    else {
      local_68 = (Button *)(this_00 + 0x3c);
    }
    (**(code **)(*this_00 + 0x70))(local_68);
    (**(code **)(*(int *)this + 0x44))(this_00);
    *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + *(int *)((int)this + 0xd8);
  }
  ExceptionList = local_10;
  return;
}

/* 100b5290  FUN_100b5290  (139 bytes)
 * undefined FUN_100b5290(int param_1, uint * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 */
void __thiscall
FUN_100b5290(void *this,int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  void *this_00;
  
  if (((*(int *)((int)this + 0xdc) != 0) && (param_1 < *(int *)((int)this + 0xbc))) &&
     (*(int *)(*(int *)((int)this + 0xdc) + param_1 * 4) != 0)) {
    this_00 = *(void **)(*(int *)((int)this + 0xdc) + param_1 * 4);
    thunk_FUN_100b5860(this_00,param_2);
    thunk_FUN_100b5440(this_00,param_3,param_4,param_5,param_7);
    thunk_FUN_100b58a0(this_00,param_8,param_9);
  }
  return;
}

/* 100b5340  FUN_100b5340  (100 bytes)
 * undefined FUN_100b5340(int param_1)
 */
void __thiscall FUN_100b5340(void *this,int param_1)

{
  if (((*(int *)((int)this + 0xdc) != 0) && (param_1 < *(int *)((int)this + 0xbc))) &&
     (*(int *)(*(int *)((int)this + 0xdc) + param_1 * 4) != 0)) {
    (**(code **)(**(int **)(*(int *)((int)this + 0xdc) + param_1 * 4) + 0x24))(0);
  }
  return;
}

