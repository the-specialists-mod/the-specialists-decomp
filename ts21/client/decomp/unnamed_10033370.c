/* client.dll - unnamed_10033370 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10033370  FUN_10033370  (182 bytes)
 * Button * FUN_10033370(undefined4 param_1, int param_2, int param_3, int param_4, int param_5)
 */
Button * __thiscall
FUN_10033370(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  Image *pIVar1;
  
  vgui::Button::Button(this,"",param_2,param_3,param_4,param_5);
  vgui::Color::Color((Color *)&stack0xffffff94,0x3c,0x3c,0x3c,0);
  vgui::LineBorder::LineBorder((LineBorder *)((int)this + 0xf0));
  *(undefined ***)this = &PTR_setPos_1026cb44;
  pIVar1 = (Image *)thunk_FUN_100a05e0(param_1);
  if (pIVar1 != (Image *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffff88,0x8c,0x8c,0x8c,0);
    (**(code **)(*(int *)pIVar1 + 0xc))();
    vgui::Label::setImage(this,pIVar1);
  }
  vgui::Panel::setBorder(this,(Border *)((int)this + 0xf0));
  return this;
}

/* 10033460  FUN_10033460  (89 bytes)
 * undefined FUN_10033460(int * param_1)
 * called by: thunk_FUN_10033460
 */
void __fastcall FUN_10033460(int *param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0xe8))(&local_c,&local_10);
  (**(code **)(*local_8 + 0x178))(0,0,0,0);
  (**(code **)(*local_8 + 0x180))(0,0,local_c,local_10);
  return;
}

/* 100334d0  FUN_100334d0  (391 bytes)
 * undefined FUN_100334d0(int param_1, int param_2)
 */
void __thiscall FUN_100334d0(void *this,int param_1,int param_2)

{
  char cVar1;
  
  vgui::Panel::setSize(this,param_1,param_2);
  if (((*(int *)((int)this + 0xc4) != 0) && (*(int *)((int)this + 0xbc) != 0)) &&
     (*(int *)((int)this + 0xc0) != 0)) {
    (**(code **)(*(int *)this + 0xe8))(&param_1,&param_2);
    cVar1 = (**(code **)(**(int **)((int)this + 0xc4) + 0x204))();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)((int)this + 0xc4) + 0x10))(param_2,0,param_1 + param_2 * -2,param_2);
      (**(code **)(**(int **)((int)this + 0xbc) + 0x10))(0,0,param_2,param_2);
      (**(code **)(**(int **)((int)this + 0xc0) + 0x10))(param_1 - param_2,0,param_2,param_2);
    }
    else {
      (**(code **)(**(int **)((int)this + 0xc4) + 0x10))(0,param_1,param_1,param_2 + param_1 * -2);
      (**(code **)(**(int **)((int)this + 0xbc) + 0x10))(0,0,param_1,param_1);
      (**(code **)(**(int **)((int)this + 0xc0) + 0x10))(0,param_2 - param_1,param_1,param_1);
    }
  }
  return;
}

/* 100336c0  FUN_100336c0  (19 bytes)
 * undefined FUN_100336c0(void)
 */
void FUN_100336c0(void)

{
  return;
}

/* 100336e0  FUN_100336e0  (51 bytes)
 * undefined FUN_100336e0(undefined4 param_1)
 */
void __thiscall FUN_100336e0(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0xc4) + 0x1fc))(param_1);
  return;
}

/* 10033720  FUN_10033720  (47 bytes)
 * undefined FUN_10033720(int param_1)
 */
void __fastcall FUN_10033720(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x200))();
  return;
}

/* 10033760  FUN_10033760  (165 bytes)
 * undefined FUN_10033760(IntChangeSignal * param_1)
 */
void __thiscall FUN_10033760(void *this,IntChangeSignal *param_1)

{
  void *this_00;
  IntChangeSignal *local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e562b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Dar<vgui::IntChangeSignal*>::putElement
            ((Dar<vgui::IntChangeSignal*> *)((int)this + 200),param_1);
  this_00 = operator_new(8);
  local_8 = 0;
  if (this_00 == (void *)0x0) {
    local_60 = (IntChangeSignal *)0x0;
  }
  else {
    local_60 = thunk_FUN_10033830(this_00,this);
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)((int)this + 0xc4) + 0x208))(local_60);
  ExceptionList = local_10;
  return;
}

/* 10033830  FUN_10033830  (50 bytes)
 * IntChangeSignal * FUN_10033830(undefined4 param_1)
 */
IntChangeSignal * __thiscall FUN_10033830(void *this,undefined4 param_1)

{
  vgui::IntChangeSignal::IntChangeSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_10033870_1026ce24;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}

/* 10033870  FUN_10033870  (43 bytes)
 * undefined FUN_10033870(int param_1)
 * called by: thunk_FUN_10033870
 */
void __fastcall FUN_10033870(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x238))();
  return;
}

/* 100338b0  FUN_100338b0  (55 bytes)
 * undefined FUN_100338b0(undefined4 param_1, undefined4 param_2)
 */
void __thiscall FUN_100338b0(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0xc4) + 0x20c))(param_1,param_2);
  return;
}

/* 10033900  FUN_10033900  (120 bytes)
 * undefined FUN_10033900(int param_1)
 */
void __fastcall FUN_10033900(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  IntChangeSignal *pIVar3;
  undefined4 local_c;
  
  local_c = 0;
  while( true ) {
    iVar1 = vgui::Dar<vgui::IntChangeSignal*>::getCount
                      ((Dar<vgui::IntChangeSignal*> *)(param_1 + 200));
    if (iVar1 <= local_c) break;
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc4) + 0x200))(param_1);
    pIVar3 = vgui::Dar<vgui::IntChangeSignal*>::operator[]
                       ((Dar<vgui::IntChangeSignal*> *)(param_1 + 200),local_c);
    (*(code *)**(undefined4 **)pIVar3)(uVar2);
    local_c = local_c + 1;
  }
  return;
}

/* 100339a0  FUN_100339a0  (47 bytes)
 * undefined FUN_100339a0(int param_1)
 */
void __fastcall FUN_100339a0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x204))();
  return;
}

/* 100339e0  FUN_100339e0  (47 bytes)
 * undefined FUN_100339e0(int param_1)
 */
void __fastcall FUN_100339e0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x220))();
  return;
}

/* 10033a20  FUN_10033a20  (253 bytes)
 * undefined FUN_10033a20(int param_1, int param_2)
 */
void __thiscall FUN_10033a20(void *this,int param_1,int param_2)

{
  void *this_00;
  ActionSignal *local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e564b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + param_2 * 4 + 0xbc) != 0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)this + 0x4c))(*(undefined4 *)((int)this + param_2 * 4 + 0xbc));
  }
  *(int *)((int)this + param_2 * 4 + 0xbc) = param_1;
  (**(code **)(*(int *)this + 0x44))(*(undefined4 *)((int)this + param_2 * 4 + 0xbc));
  this_00 = operator_new(0xc);
  local_8 = 0;
  if (this_00 == (void *)0x0) {
    local_60 = (ActionSignal *)0x0;
  }
  else {
    local_60 = thunk_FUN_10033b60(this_00,this,param_2);
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)((int)this + param_2 * 4 + 0xbc) + 0x240))(local_60);
  (**(code **)(*(int *)this + 0x234))();
  ExceptionList = local_10;
  return;
}

/* 10033b60  FUN_10033b60  (59 bytes)
 * ActionSignal * FUN_10033b60(undefined4 param_1, undefined4 param_2)
 */
ActionSignal * __thiscall FUN_10033b60(void *this,undefined4 param_1,undefined4 param_2)

{
  vgui::ActionSignal::ActionSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_10033bb0_1026ce30;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return this;
}

/* 10033bb0  FUN_10033bb0  (48 bytes)
 * undefined FUN_10033bb0(int param_1)
 * called by: thunk_FUN_10033bb0
 */
void __fastcall FUN_10033bb0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x22c))(*(undefined4 *)(param_1 + 8));
  return;
}

/* 10033bf0  FUN_10033bf0  (34 bytes)
 * undefined4 FUN_10033bf0(int param_1)
 */
undefined4 __thiscall FUN_10033bf0(void *this,int param_1)

{
  return *(undefined4 *)((int)this + param_1 * 4 + 0xbc);
}

/* 10033c20  FUN_10033c20  (227 bytes)
 * undefined FUN_10033c20(int param_1)
 */
void __thiscall FUN_10033c20(void *this,int param_1)

{
  void *this_00;
  IntChangeSignal *local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e566b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0xc4) != 0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)this + 0x4c))(*(undefined4 *)((int)this + 0xc4));
  }
  *(int *)((int)this + 0xc4) = param_1;
  (**(code **)(*(int *)this + 0x44))(*(undefined4 *)((int)this + 0xc4));
  this_00 = operator_new(8);
  local_8 = 0;
  if (this_00 == (void *)0x0) {
    local_60 = (IntChangeSignal *)0x0;
  }
  else {
    local_60 = thunk_FUN_10033830(this_00,this);
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)((int)this + 0xc4) + 0x208))(local_60);
  (**(code **)(*(int *)this + 0x234))();
  ExceptionList = local_10;
  return;
}

/* 10033d40  FUN_10033d40  (144 bytes)
 * Panel * FUN_10033d40(Panel * param_1)
 */
Panel * __thiscall FUN_10033d40(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined ***)this = &vgui::ScrollBar2::_vftable_;
  return this;
}

/* 10033e00  FUN_10033e00  (28 bytes)
 * undefined4 FUN_10033e00(int param_1)
 */
undefined4 __fastcall FUN_10033e00(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}

/* 10033e30  FUN_10033e30  (157 bytes)
 * undefined FUN_10033e30(int param_1)
 */
void __thiscall FUN_10033e30(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0xc4) + 0x200))();
    (**(code **)(**(int **)((int)this + 0xc4) + 0x1fc))(iVar1 - *(int *)((int)this + 0xd4));
  }
  else {
    iVar1 = (**(code **)(**(int **)((int)this + 0xc4) + 0x200))();
    (**(code **)(**(int **)((int)this + 0xc4) + 0x1fc))(iVar1 + *(int *)((int)this + 0xd4));
  }
  return;
}

/* 10033f00  FUN_10033f00  (157 bytes)
 * Panel * FUN_10033f00(Panel * param_1)
 */
Panel * __thiscall FUN_10033f00(void *this,Panel *param_1)

{
  uint local_c;
  
  vgui::Panel::operator=(this,param_1);
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 0xbc) = *(undefined4 *)(param_1 + local_c * 4 + 0xbc);
  }
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  return this;
}

/* 10033fd0  FUN_10033fd0  (33 bytes)
 * undefined FUN_10033fd0(undefined4 param_1)
 */
void __thiscall FUN_10033fd0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xd4) = param_1;
  return;
}

/* 10034000  FUN_10034000  (51 bytes)
 * undefined FUN_10034000(undefined4 param_1)
 */
void __thiscall FUN_10034000(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0xc4) + 0x214))(param_1);
  return;
}

/* 10034040  FUN_10034040  (306 bytes)
 * Panel * FUN_10034040(Panel * param_1)
 */
Panel * __thiscall FUN_10034040(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(Panel *)((int)this + 0xbc) = param_1[0xbc];
  *(Panel *)((int)this + 0xbd) = param_1[0xbd];
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
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(Panel *)((int)this + 0xf4) = param_1[0xf4];
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined ***)this = &vgui::Slider2::_vftable_;
  return this;
}

/* 100341c0  FUN_100341c0  (51 bytes)
 * undefined FUN_100341c0(undefined1 param_1)
 */
void __thiscall FUN_100341c0(void *this,undefined1 param_1)

{
  (**(code **)(**(int **)((int)this + 0xc4) + 0x218))(param_1);
  return;
}

/* 10034200  FUN_10034200  (320 bytes)
 * undefined FUN_10034200(int * param_1)
 */
void __fastcall FUN_10034200(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  if (param_1[0x31] != 0) {
    local_c = 0;
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      if (local_8[local_10 + 0x2f] != 0) {
        cVar1 = (**(code **)(*(int *)local_8[local_10 + 0x2f] + 0x28))();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*(int *)local_8[0x31] + 0x204))();
          if (cVar1 == '\0') {
            iVar2 = (**(code **)(*(int *)local_8[local_10 + 0x2f] + 0x18))();
            local_c = local_c + iVar2;
          }
          else {
            iVar2 = (**(code **)(*(int *)local_8[local_10 + 0x2f] + 0x1c))();
            local_c = local_c + iVar2;
          }
        }
      }
    }
    (**(code **)(*(int *)local_8[0x31] + 0x224))(local_c);
  }
  (**(code **)(*local_8 + 0xc))(&local_14,&local_18);
  (**(code **)(*local_8 + 8))(local_14,local_18);
  return;
}

/* 10034390  FUN_10034390  (385 bytes)
 * Panel * FUN_10034390(Panel * param_1)
 */
Panel * __thiscall FUN_10034390(void *this,Panel *param_1)

{
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  vgui::Panel::operator=(this,param_1);
  *(Panel *)((int)this + 0xbc) = param_1[0xbc];
  *(Panel *)((int)this + 0xbd) = param_1[0xbd];
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 0xc0) = *(undefined4 *)(param_1 + local_c * 4 + 0xc0);
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined4 *)((int)this + local_10 * 4 + 200) = *(undefined4 *)(param_1 + local_10 * 4 + 200);
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    *(undefined4 *)((int)this + local_14 * 4 + 0xd0) =
         *(undefined4 *)(param_1 + local_14 * 4 + 0xd0);
  }
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    *(undefined4 *)((int)this + local_18 * 4 + 0xe4) =
         *(undefined4 *)(param_1 + local_18 * 4 + 0xe4);
  }
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(Panel *)((int)this + 0xf4) = param_1[0xf4];
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  return this;
}

/* 10034580  FUN_10034580  (31 bytes)
 * undefined4 * FUN_10034580(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_10034580(undefined4 *param_1)

{
  *param_1 = &vgui::IntChangeSignal::_vftable_;
  return param_1;
}

/* 100345b0  FUN_100345b0  (33 bytes)
 * undefined4 * FUN_100345b0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_100345b0(undefined4 *param_1)

{
  *param_1 = &vgui::IntChangeSignal::_vftable_;
  return param_1;
}

/* 100345e0  FUN_100345e0  (24 bytes)
 * undefined4 FUN_100345e0(undefined4 param_1)
 */
undefined4 __fastcall FUN_100345e0(undefined4 param_1)

{
  return param_1;
}

/* 10034600  FUN_10034600  (282 bytes)
 * Panel * FUN_10034600(Panel * param_1, int param_2, int param_3, int param_4, int param_5, Panel param_6)
 */
Panel * __thiscall
FUN_10034600(Panel *param_1,int param_2,int param_3,int param_4,int param_5,Panel param_6)

{
  void *this;
  InputSignal *local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e568b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(param_1,param_2,param_3,param_4,param_5);
  vgui::Dar<vgui::IntChangeSignal*>::Dar<vgui::IntChangeSignal*>
            ((Dar<vgui::IntChangeSignal*> *)(param_1 + 0xd8));
  *(undefined ***)param_1 = &vgui::Slider2::_vftable_;
  param_1[0xbc] = param_6;
  param_1[0xbd] = (Panel)0x0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 299;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0xf4] = (Panel)0x0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  vgui::Slider2::recomputeNobPosFromValue((Slider2 *)param_1);
  this = operator_new(8);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_60 = (InputSignal *)0x0;
  }
  else {
    local_60 = thunk_FUN_10034760(this,param_1);
  }
  local_8 = 0xffffffff;
  vgui::Panel::addInputSignal(param_1,local_60);
  ExceptionList = local_10;
  return param_1;
}

/* 10034760  FUN_10034760  (50 bytes)
 * InputSignal * FUN_10034760(undefined4 param_1)
 */
InputSignal * __thiscall FUN_10034760(void *this,undefined4 param_1)

{
  vgui::InputSignal::InputSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_100347a0_1026d100;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}

/* 100347a0  FUN_100347a0  (55 bytes)
 * undefined FUN_100347a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_100347a0
 */
void __thiscall FUN_100347a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)((int)this + 4) + 0x230))(param_1,param_2,param_3);
  return;
}

/* 100347f0  FUN_100347f0  (21 bytes)
 * undefined FUN_100347f0(void)
 * called by: thunk_FUN_100347f0
 */
void FUN_100347f0(void)

{
  return;
}

/* 10034810  FUN_10034810  (21 bytes)
 * undefined FUN_10034810(void)
 * called by: thunk_FUN_10034810
 */
void FUN_10034810(void)

{
  return;
}

/* 10034830  FUN_10034830  (21 bytes)
 * undefined FUN_10034830(void)
 * called by: thunk_FUN_10034830
 */
void FUN_10034830(void)

{
  return;
}

/* 10034850  FUN_10034850  (49 bytes)
 * undefined FUN_10034850(undefined4 param_1, undefined4 param_2)
 * called by: thunk_FUN_10034850
 */
void __thiscall FUN_10034850(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 4) + 0x234))(param_1,param_2);
  return;
}

/* 10034890  FUN_10034890  (49 bytes)
 * undefined FUN_10034890(undefined4 param_1, undefined4 param_2)
 * called by: thunk_FUN_10034890
 */
void __thiscall FUN_10034890(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 4) + 0x238))(param_1,param_2);
  return;
}

/* 100348d0  FUN_100348d0  (21 bytes)
 * undefined FUN_100348d0(void)
 * called by: thunk_FUN_100348d0
 */
void FUN_100348d0(void)

{
  return;
}

/* 100348f0  FUN_100348f0  (21 bytes)
 * undefined FUN_100348f0(void)
 * called by: thunk_FUN_100348f0
 */
void FUN_100348f0(void)

{
  return;
}

/* 10034910  FUN_10034910  (21 bytes)
 * undefined FUN_10034910(void)
 * called by: thunk_FUN_10034910
 */
void FUN_10034910(void)

{
  return;
}

/* 10034930  FUN_10034930  (21 bytes)
 * undefined FUN_10034930(void)
 * called by: thunk_FUN_10034930
 */
void FUN_10034930(void)

{
  return;
}

/* 10034950  FUN_10034950  (21 bytes)
 * undefined FUN_10034950(void)
 * called by: thunk_FUN_10034950
 */
void FUN_10034950(void)

{
  return;
}

/* 10034970  FUN_10034970  (51 bytes)
 * undefined FUN_10034970(int param_1, int param_2)
 */
void __thiscall FUN_10034970(void *this,int param_1,int param_2)

{
  vgui::Panel::setSize(this,param_1,param_2);
  (**(code **)(*(int *)this + 0x228))();
  return;
}

/* 100349b0  FUN_100349b0  (28 bytes)
 * undefined1 FUN_100349b0(int param_1)
 */
undefined1 __fastcall FUN_100349b0(int param_1)

{
  return *(undefined1 *)(param_1 + 0xbc);
}

/* 100349e0  FUN_100349e0  (139 bytes)
 * undefined FUN_100349e0(int param_1)
 */
void __thiscall FUN_100349e0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xec);
  if (param_1 < *(int *)((int)this + 0xe4)) {
    param_1 = *(int *)((int)this + 0xe4);
  }
  if (*(int *)((int)this + 0xe8) < param_1) {
    param_1 = *(int *)((int)this + 0xe8);
  }
  *(int *)((int)this + 0xec) = param_1;
  (**(code **)(*(int *)this + 0x228))();
  if (*(int *)((int)this + 0xec) != iVar1) {
    (**(code **)(*(int *)this + 0x23c))();
  }
  return;
}

/* 10034a90  FUN_10034a90  (28 bytes)
 * undefined4 FUN_10034a90(int param_1)
 */
undefined4 __fastcall FUN_10034a90(int param_1)

{
  return *(undefined4 *)(param_1 + 0xec);
}

/* 10034ac0  FUN_10034ac0  (443 bytes)
 * undefined FUN_10034ac0(int * param_1)
 */
void __fastcall FUN_10034ac0(int *param_1)

{
  longlong lVar1;
  float local_28;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0xe8))(&local_c,&local_10);
  local_28 = (float)local_8[0x3c];
  if (local_28 < 0.0) {
    local_28 = 0.0;
  }
  if ((char)local_8[0x3d] == '\0') {
    local_28 = (float)(local_8[0x3a] - local_8[0x39]);
  }
  if (0.0 < local_28) {
    if ((char)local_8[0x2f] == '\0') {
      lVar1 = __ftol();
      local_8[0x30] = (int)lVar1;
      lVar1 = __ftol();
      local_8[0x31] = (int)lVar1;
      if (local_c < local_8[0x31]) {
        lVar1 = __ftol();
        local_8[0x30] = local_c - (int)lVar1;
        local_8[0x31] = local_c;
      }
    }
    else {
      lVar1 = __ftol();
      local_8[0x30] = (int)lVar1;
      lVar1 = __ftol();
      local_8[0x31] = (int)lVar1;
      if (local_10 < local_8[0x31]) {
        lVar1 = __ftol();
        local_8[0x30] = local_10 - (int)lVar1;
        local_8[0x31] = local_10;
      }
    }
  }
  (**(code **)(*local_8 + 0x30))();
  return;
}

/* 10034cf0  FUN_10034cf0  (342 bytes)
 * undefined FUN_10034cf0(int * param_1)
 */
void __fastcall FUN_10034cf0(int *param_1)

{
  longlong lVar1;
  int local_74;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0xe8))(local_c,local_10);
  lVar1 = __ftol();
  local_8[0x3b] = (int)lVar1;
  if (local_8[0x3b] < local_8[0x3a]) {
    local_74 = local_8[0x3b];
  }
  else {
    local_74 = local_8[0x3a];
  }
  local_8[0x3b] = local_74;
  return;
}

/* 10034ea0  FUN_10034ea0  (229 bytes)
 * uint FUN_10034ea0(int * param_1)
 */
uint __fastcall FUN_10034ea0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  float local_20;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0xe8))(&local_c,&local_10);
  local_20 = (float)local_8[0x3c];
  if (local_20 < 0.0) {
    local_20 = 0.0;
  }
  if ((char)local_8[0x3d] == '\0') {
    local_20 = (float)(local_8[0x3a] - local_8[0x39]);
  }
  uVar3 = (uint)(ushort)((ushort)(local_20 < 0.0) << 8 | (ushort)(local_20 == 0.0) << 0xe);
  if (local_20 >= 0.0 && (local_20 == 0.0) == 0) {
    if ((char)local_8[0x2f] == '\0') {
      bVar1 = (float)local_8[0x3e] + (float)local_c < local_20;
      uVar2 = (uint)bVar1;
      uVar3 = uVar2 << 8;
      if (uVar2 == 0) {
        uVar3 = CONCAT31((uint3)bVar1,1);
      }
    }
    else {
      bVar1 = (float)local_8[0x3e] + (float)local_10 < local_20;
      uVar2 = (uint)bVar1;
      uVar3 = uVar2 << 8;
      if (uVar2 == 0) {
        uVar3 = CONCAT31((uint3)bVar1,1);
      }
    }
  }
  return uVar3;
}

/* 10034fc0  FUN_10034fc0  (39 bytes)
 * undefined FUN_10034fc0(IntChangeSignal * param_1)
 */
void __thiscall FUN_10034fc0(void *this,IntChangeSignal *param_1)

{
  vgui::Dar<vgui::IntChangeSignal*>::putElement
            ((Dar<vgui::IntChangeSignal*> *)((int)this + 0xd8),param_1);
  return;
}

/* 10034ff0  FUN_10034ff0  (108 bytes)
 * undefined FUN_10034ff0(int * param_1)
 */
void __fastcall FUN_10034ff0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  IntChangeSignal *pIVar3;
  int local_c;
  
  local_c = 0;
  while( true ) {
    iVar1 = vgui::Dar<vgui::IntChangeSignal*>::getCount
                      ((Dar<vgui::IntChangeSignal*> *)(param_1 + 0x36));
    if (iVar1 <= local_c) break;
    uVar2 = (**(code **)(*param_1 + 0x200))(param_1);
    pIVar3 = vgui::Dar<vgui::IntChangeSignal*>::operator[]
                       ((Dar<vgui::IntChangeSignal*> *)(param_1 + 0x36),local_c);
    (*(code *)**(undefined4 **)pIVar3)(uVar2);
    local_c = local_c + 1;
  }
  return;
}

/* 10035080  FUN_10035080  (568 bytes)
 * undefined FUN_10035080(int * param_1)
 */
void __fastcall FUN_10035080(int *param_1)

{
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0xe8))(&local_c,&local_10);
  if ((char)local_8[0x2f] == '\0') {
    (**(code **)(*local_8 + 0x17c))(8);
    (**(code **)(*local_8 + 0x180))(0,0,local_c,local_10);
    (**(code **)(*local_8 + 0x17c))(1);
    (**(code **)(*local_8 + 0x184))(0,0,local_c,local_10);
    (**(code **)(*local_8 + 0x17c))(4);
    (**(code **)(*local_8 + 0x180))(local_8[0x30],0,local_8[0x31],local_10);
    (**(code **)(*local_8 + 0x17c))(1);
    (**(code **)(*local_8 + 0x184))(local_8[0x30],0,local_8[0x31],local_10);
  }
  else {
    (**(code **)(*local_8 + 0x178))(0x28,0x28,0x28,0);
    (**(code **)(*local_8 + 0x180))(0,0,local_c,local_10);
    (**(code **)(*local_8 + 0x178))(0,0,0,0);
    (**(code **)(*local_8 + 0x180))(0,local_8[0x30],local_c,local_8[0x31]);
    (**(code **)(*local_8 + 0x178))(0x3c,0x3c,0x3c,0);
    (**(code **)(*local_8 + 0x180))(0,local_8[0x30],local_c,local_8[0x30] + 1);
    (**(code **)(*local_8 + 0x180))(0,local_8[0x31],local_c,local_8[0x31] + 1);
    (**(code **)(*local_8 + 0x180))(0,local_8[0x30] + 1,1,local_8[0x31]);
    (**(code **)(*local_8 + 0x180))(local_c + -1,local_8[0x30] + 1,local_c,local_8[0x31]);
  }
  return;
}

/* 10035350  FUN_10035350  (73 bytes)
 * undefined FUN_10035350(int param_1, int param_2)
 */
void __thiscall FUN_10035350(void *this,int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  *(int *)((int)this + 0xe4) = param_1;
  *(int *)((int)this + 0xe8) = param_2;
  return;
}

/* 100353b0  FUN_100353b0  (49 bytes)
 * undefined FUN_100353b0(undefined4 * param_1, undefined4 * param_2)
 */
void __thiscall FUN_100353b0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *(undefined4 *)((int)this + 0xe4);
  *param_2 = *(undefined4 *)((int)this + 0xe8);
  return;
}

/* 100353f0  FUN_100353f0  (524 bytes)
 * undefined FUN_100353f0(int param_1, int param_2)
 */
void __thiscall FUN_100353f0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int local_10;
  int local_c;
  int *local_8;
  
  if (*(char *)((int)this + 0xbd) != '\0') {
    local_8 = this;
    piVar1 = (int *)(**(code **)(*(int *)this + 0x14c))(&param_1,&param_2);
    (**(code **)(*piVar1 + 0x34))();
    (**(code **)(*local_8 + 0x8c))(&param_1,&param_2);
    (**(code **)(*local_8 + 0xe8))(&local_c,&local_10);
    if ((char)local_8[0x2f] == '\0') {
      local_8[0x30] = (param_1 - local_8[0x34]) + local_8[0x32];
      local_8[0x31] = (param_1 - local_8[0x34]) + local_8[0x33];
      if (local_c < local_8[0x31]) {
        local_8[0x30] = local_c - (local_8[0x31] - local_8[0x30]);
        local_8[0x31] = local_c;
      }
      if (local_8[0x30] < 0) {
        local_8[0x31] = local_8[0x31] - local_8[0x30];
        local_8[0x30] = 0;
      }
    }
    else {
      local_8[0x30] = (param_2 - local_8[0x35]) + local_8[0x32];
      local_8[0x31] = (param_2 - local_8[0x35]) + local_8[0x33];
      if (local_10 < local_8[0x31]) {
        local_8[0x30] = local_10 - (local_8[0x31] - local_8[0x30]);
        local_8[0x31] = local_10;
      }
      if (local_8[0x30] < 0) {
        local_8[0x31] = local_8[0x31] - local_8[0x30];
        local_8[0x30] = 0;
      }
    }
    (**(code **)(*local_8 + 0x22c))();
    (**(code **)(*local_8 + 0x30))();
    (**(code **)(*local_8 + 0x23c))();
  }
  return;
}

/* 10035680  FUN_10035680  (363 bytes)
 * undefined FUN_10035680(int * param_1)
 */
void __fastcall FUN_10035680(int *param_1)

{
  int *piVar1;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  piVar1 = (int *)(**(code **)(*param_1 + 0x14c))(&local_c,&local_10);
  (**(code **)(*piVar1 + 0x34))();
  (**(code **)(*local_8 + 0x8c))(&local_c,&local_10);
  if ((char)local_8[0x2f] == '\0') {
    if ((local_8[0x30] <= local_c) && (local_c < local_8[0x31])) {
      *(undefined1 *)((int)local_8 + 0xbd) = 1;
      piVar1 = (int *)(**(code **)(*local_8 + 0x14c))(local_8);
      (**(code **)(*piVar1 + 0x38))();
      local_8[0x32] = local_8[0x30];
      local_8[0x33] = local_8[0x31];
      local_8[0x34] = local_c;
      local_8[0x35] = local_10;
    }
  }
  else if ((local_8[0x30] <= local_10) && (local_10 < local_8[0x31])) {
    *(undefined1 *)((int)local_8 + 0xbd) = 1;
    piVar1 = (int *)(**(code **)(*local_8 + 0x14c))(local_8);
    (**(code **)(*piVar1 + 0x38))();
    local_8[0x32] = local_8[0x30];
    local_8[0x33] = local_8[0x31];
    local_8[0x34] = local_c;
    local_8[0x35] = local_10;
  }
  return;
}

/* 10035850  FUN_10035850  (61 bytes)
 * undefined FUN_10035850(int * param_1)
 */
void __fastcall FUN_10035850(int *param_1)

{
  int *piVar1;
  
  *(undefined1 *)((int)param_1 + 0xbd) = 0;
  piVar1 = (int *)(**(code **)(*param_1 + 0x14c))(0);
  (**(code **)(*piVar1 + 0x38))();
  return;
}

/* 100358a0  FUN_100358a0  (49 bytes)
 * undefined FUN_100358a0(undefined4 * param_1, undefined4 * param_2)
 */
void __thiscall FUN_100358a0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *(undefined4 *)((int)this + 0xc0);
  *param_2 = *(undefined4 *)((int)this + 0xc4);
  return;
}

/* 100358e0  FUN_100358e0  (33 bytes)
 * undefined FUN_100358e0(undefined4 param_1)
 */
void __thiscall FUN_100358e0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xf0) = param_1;
  return;
}

/* 10035910  FUN_10035910  (33 bytes)
 * undefined FUN_10035910(undefined1 param_1)
 */
void __thiscall FUN_10035910(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xf4) = param_1;
  return;
}

/* 10035940  FUN_10035940  (33 bytes)
 * undefined FUN_10035940(undefined4 param_1)
 */
void __thiscall FUN_10035940(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xf8) = param_1;
  return;
}

/* 10035970  FUN_10035970  (69 bytes)
 * char FUN_10035970(int param_1)
 */
char __cdecl FUN_10035970(int param_1)

{
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = '\0';
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    local_5 = local_5 + *(char *)(param_1 + local_c);
  }
  return local_5;
}

/* 100359d0  FUN_100359d0  (30 bytes)
 * int FUN_100359d0(int param_1)
 */
int __fastcall FUN_100359d0(int param_1)

{
  thunk_FUN_10035f40(param_1);
  return param_1;
}

/* 10035a00  FUN_10035a00  (27 bytes)
 * undefined FUN_10035a00(int param_1)
 */
void __fastcall FUN_10035a00(int param_1)

{
  thunk_FUN_10035bc0(param_1);
  return;
}

/* 10035a30  FUN_10035a30  (311 bytes)
 * undefined4 FUN_10035a30(void * param_1)
 */
undefined4 __fastcall FUN_10035a30(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_228 [16];
  int local_218;
  uint local_214;
  int local_210;
  undefined **local_20c;
  CHAR local_208 [512];
  void *local_8;
  
  local_8 = param_1;
  thunk_FUN_10035bc0((int)param_1);
  FUN_100bd300(local_208,0x200,(byte_conflict *)"%s/%s");
  local_20c = (undefined **)FUN_100bd2e0(local_208,"rb");
  uVar2 = 0;
  if (local_20c != (undefined **)0x0) {
    FUN_100bcfd0((char *)&local_210,1,4,local_20c);
    if (local_210 == 1) {
      FUN_100bce30(local_20c,0,2);
      iVar1 = FUN_100bcb20(local_20c);
      local_214 = iVar1 - 4U >> 4;
      FUN_100bce30(local_20c,4,0);
      for (local_218 = 0; local_218 < (int)local_214; local_218 = local_218 + 1) {
        FUN_100bcfd0(local_228,1,0x10,local_20c);
        thunk_FUN_10036050(local_8,(undefined4 *)local_228);
      }
    }
    uVar2 = FUN_100bc9d0(local_20c);
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

/* 10035bc0  FUN_10035bc0  (124 bytes)
 * undefined FUN_10035bc0(int param_1)
 */
void __fastcall FUN_10035bc0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 local_18;
  undefined4 local_c;
  
  for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
    pvVar2 = (void *)(param_1 + local_c * 0x18);
    local_18 = *(void **)((int)pvVar2 + 0x14);
    while (local_18 != pvVar2) {
      pvVar1 = *(void **)((int)local_18 + 0x14);
      FUN_100bbb10(local_18);
      local_18 = pvVar1;
    }
  }
  thunk_FUN_10035f40(param_1);
  return;
}

/* 10035c60  FUN_10035c60  (284 bytes)
 * undefined FUN_10035c60(void)
 */
void FUN_10035c60(void)

{
  char *pcVar1;
  char *local_21c;
  int local_214;
  char local_210 [4];
  undefined **local_20c;
  CHAR local_208 [512];
  int local_8;
  
  FUN_100bd300(local_208,0x200,(byte_conflict *)"%s/%s");
  local_20c = (undefined **)FUN_100bd2e0(local_208,"wb");
  if (local_20c != (undefined **)0x0) {
    local_210[0] = '\x01';
    local_210[1] = '\0';
    local_210[2] = '\0';
    local_210[3] = '\0';
    FUN_100bd400(local_210,1,4,local_20c);
    for (local_214 = 0; local_214 < 0x100; local_214 = local_214 + 1) {
      pcVar1 = (char *)(local_8 + local_214 * 0x18);
      for (local_21c = *(char **)(pcVar1 + 0x14); local_21c != pcVar1;
          local_21c = *(char **)(local_21c + 0x14)) {
        FUN_100bd400(local_21c,1,0x10,local_20c);
      }
    }
    FUN_100bc9d0(local_20c);
  }
  return;
}

/* 10035dd0  FUN_10035dd0  (39 bytes)
 * bool FUN_10035dd0(void * param_1)
 */
bool __thiscall FUN_10035dd0(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = thunk_FUN_10035fc0(this,param_1);
  return pvVar1 != (void *)0x0;
}

/* 10035e00  FUN_10035e00  (136 bytes)
 * undefined FUN_10035e00(undefined4 * param_1, char param_2)
 */
void __thiscall FUN_10035e00(void *this,undefined4 *param_1,char param_2)

{
  bool bVar1;
  void *pvVar2;
  
  if (param_2 == '\0') {
    pvVar2 = thunk_FUN_10035fc0(this,param_1);
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)(*(int *)((int)pvVar2 + 0x10) + 0x14) = *(undefined4 *)((int)pvVar2 + 0x14);
      *(undefined4 *)(*(int *)((int)pvVar2 + 0x14) + 0x10) = *(undefined4 *)((int)pvVar2 + 0x10);
      FUN_100bbb10(pvVar2);
    }
  }
  else {
    bVar1 = thunk_FUN_10035dd0(this,param_1);
    if (!bVar1) {
      thunk_FUN_10036050(this,param_1);
    }
  }
  return;
}

/* 10035eb0  FUN_10035eb0  (105 bytes)
 * undefined FUN_10035eb0(undefined * param_1)
 */
void __thiscall FUN_10035eb0(void *this,undefined *param_1)

{
  void *local_10;
  int local_c;
  
  for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
    for (local_10 = *(void **)((int)this + local_c * 0x18 + 0x14);
        local_10 != (void *)((int)this + local_c * 0x18);
        local_10 = *(void **)((int)local_10 + 0x14)) {
      (*(code *)param_1)(local_10);
    }
  }
  return;
}

/* 10035f40  FUN_10035f40  (98 bytes)
 * undefined FUN_10035f40(int param_1)
 */
void __fastcall FUN_10035f40(int param_1)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
    *(int *)(param_1 + 0x10 + local_c * 0x18) = param_1 + local_c * 0x18;
    *(undefined4 *)(param_1 + 0x14 + local_c * 0x18) =
         *(undefined4 *)(param_1 + 0x10 + local_c * 0x18);
  }
  return;
}

/* 10035fc0  FUN_10035fc0  (114 bytes)
 * void * FUN_10035fc0(void * param_1)
 */
void * __thiscall FUN_10035fc0(void *this,void *param_1)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  void *local_14;
  
  bVar1 = thunk_FUN_10035970((int)param_1);
  pvVar3 = (void *)((int)this + (uint)bVar1 * 0x18);
  local_14 = *(void **)((int)pvVar3 + 0x14);
  while( true ) {
    if (local_14 == pvVar3) {
      return (void *)0x0;
    }
    iVar2 = _memcmp(param_1,local_14,0x10);
    if (iVar2 == 0) break;
    local_14 = *(void **)((int)local_14 + 0x14);
  }
  return local_14;
}

/* 10036050  FUN_10036050  (151 bytes)
 * undefined4 * FUN_10036050(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10036050(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    bVar1 = thunk_FUN_10035970((int)param_1);
    FUN_100bc090(puVar2,param_1,0x10);
    puVar2[5] = (void *)((int)this + (uint)bVar1 * 0x18);
    puVar2[4] = *(undefined4 *)((int)this + (uint)bVar1 * 0x18 + 0x10);
    *(undefined4 **)(puVar2[5] + 0x10) = puVar2;
    *(undefined4 **)(puVar2[4] + 0x14) = puVar2;
  }
  return puVar2;
}

/* 10036110  FUN_10036110  (26 bytes)
 * undefined FUN_10036110(void)
 */
void FUN_10036110(void)

{
  FUN_10036130();
  FUN_10036150();
  return;
}

/* 10036130  FUN_10036130  (26 bytes)
 * undefined FUN_10036130(void)
 * called by: FUN_10036110
 */
void FUN_10036130(void)

{
  thunk_FUN_100363d0((undefined4 *)&DAT_102b8308);
  return;
}

/* 10036150  FUN_10036150  (29 bytes)
 * undefined FUN_10036150(void)
 * called by: FUN_10036110
 */
void FUN_10036150(void)

{
  FUN_100bc490(0x10036180);
  return;
}

/* 10036180  FUN_10036180  (26 bytes)
 * undefined FUN_10036180(void)
 */
void FUN_10036180(void)

{
  thunk_FUN_10036850((undefined4 *)&DAT_102b8308);
  return;
}

/* 100361a0  FUN_100361a0  (21 bytes)
 * undefined * FUN_100361a0(void)
 */
undefined * FUN_100361a0(void)

{
  return &DAT_102b8308;
}

/* 100361c0  FUN_100361c0  (49 bytes)
 * undefined4 FUN_100361c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_100361c0
 */
undefined4 __cdecl FUN_100361c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_102d137c != 0) {
    thunk_FUN_100384a0(param_2,param_3);
  }
  return 1;
}

/* 10036200  FUN_10036200  (49 bytes)
 * undefined4 FUN_10036200(void)
 * called by: thunk_FUN_10036200
 */
undefined4 FUN_10036200(void)

{
  if (DAT_102d137c != 0) {
    thunk_FUN_10038600();
  }
  return 1;
}

/* 10036240  FUN_10036240  (231 bytes)
 * undefined FUN_10036240(void)
 * called by: thunk_FUN_10036240
 */
void FUN_10036240(void)

{
  uint local_104 [64];
  
  DAT_102d1378 = DAT_102d1378 + 1;
  FUN_100bb6e0((undefined1 *)local_104,
               (byte_conflict *)"Ban %d: %2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x\n");
  FUN_100dc830(local_104);
  (*DAT_102e14d0)(local_104);
  return;
}

/* 10036360  FUN_10036360  (85 bytes)
 * undefined FUN_10036360(void)
 * called by: thunk_FUN_10036360
 */
void FUN_10036360(void)

{
  if (DAT_102d137c != 0) {
    DAT_102d1378 = 0;
    (*DAT_102e14d0)("------- BANNED PLAYERS -------\n");
    thunk_FUN_10035eb0((void *)(DAT_102d137c + 0x177f8),thunk_FUN_10036240);
    (*DAT_102e14d0)("------------------------------\n");
  }
  return;
}

/* 100363d0  FUN_100363d0  (378 bytes)
 * undefined4 * FUN_100363d0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_100363d0(undefined4 *param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e56a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_100393d0(param_1);
  local_8 = 0;
  thunk_FUN_10036600((InputSignal *)(param_1 + 5));
  thunk_FUN_10039570((int)(param_1 + 9));
  thunk_FUN_10039570((int)(param_1 + 10));
  thunk_FUN_10039570((int)(param_1 + 0xb));
  thunk_FUN_10039570((int)(param_1 + 0xc));
  thunk_FUN_1000cb80(param_1 + 0xd,3000,0x20,thunk_FUN_10036630);
  thunk_FUN_100359d0((int)(param_1 + 0x5dfe));
  *param_1 = &PTR_thunk_FUN_100365b0_1026d230;
  param_1[5] = &PTR_thunk_FUN_10039270_1026d1f4;
  *(undefined1 *)(param_1 + 0x63fe) = 0;
  param_1[6] = 0;
  param_1[0x5df9] = 0;
  param_1[0x5dd0] = 0;
  param_1[0x5dd1] = 0;
  param_1[0x5dd2] = 0;
  param_1[0x5dd3] = 0;
  param_1[0x5dd4] = 0;
  param_1[0x5dd5] = 0;
  param_1[0x5dfa] = 0;
  param_1[0x5dfb] = 0;
  *(undefined1 *)((int)param_1 + 0x177f5) = 0;
  *(undefined1 *)(param_1 + 0x5dfd) = 0;
  _memset(param_1 + 0x5dd6,0,0x80);
  param_1[7] = 0xffffffff;
  ExceptionList = local_10;
  return param_1;
}

/* 100365b0  FUN_100365b0  (54 bytes)
 * undefined4 * FUN_100365b0(uint param_1)
 * called by: thunk_FUN_100365b0
 */
undefined4 * __thiscall FUN_100365b0(void *this,uint param_1)

{
  thunk_FUN_10036850(this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 10036600  FUN_10036600  (39 bytes)
 * InputSignal * FUN_10036600(InputSignal * param_1)
 */
InputSignal * __fastcall FUN_10036600(InputSignal *param_1)

{
  vgui::InputSignal::InputSignal(param_1);
  *(undefined ***)param_1 = &PTR_thunk_FUN_10039270_1026d25c;
  return param_1;
}

/* 10036630  FUN_10036630  (149 bytes)
 * int FUN_10036630(int param_1)
 * called by: thunk_FUN_10036630
 */
int __fastcall FUN_10036630(int param_1)

{
  thunk_FUN_100366f0(param_1 + 8);
  thunk_FUN_100366f0(param_1 + 0x15c);
  thunk_FUN_100366f0(param_1 + 0x2b0);
  thunk_FUN_1000cb80(param_1 + 0x408,0x1c,0x40,thunk_FUN_100367d0);
  thunk_FUN_10036810(param_1 + 0xb10);
  thunk_FUN_10007fe0(param_1 + 0xb48);
  thunk_FUN_10007fe0(param_1 + 0xb54);
  thunk_FUN_1000cb80(param_1 + 0xb60,0xc,4,thunk_FUN_10007fe0);
  return param_1;
}

/* 100366f0  FUN_100366f0  (178 bytes)
 * int FUN_100366f0(int param_1)
 */
int __fastcall FUN_100366f0(int param_1)

{
  thunk_FUN_10007fe0(param_1 + 0x10);
  thunk_FUN_10007fe0(param_1 + 0x1c);
  thunk_FUN_10007fe0(param_1 + 0x70);
  thunk_FUN_10007fe0(param_1 + 0x7c);
  thunk_FUN_10007fe0(param_1 + 0x88);
  thunk_FUN_10007fe0(param_1 + 0xbc);
  thunk_FUN_10007fe0(param_1 + 0xe4);
  thunk_FUN_10007fe0(param_1 + 0xf0);
  thunk_FUN_10007fe0(param_1 + 0x124);
  thunk_FUN_10007fe0(param_1 + 0x130);
  thunk_FUN_10007fe0(param_1 + 0x13c);
  thunk_FUN_10007fe0(param_1 + 0x148);
  return param_1;
}

/* 100367d0  FUN_100367d0  (44 bytes)
 * int FUN_100367d0(int param_1)
 * called by: thunk_FUN_100367d0
 */
int __fastcall FUN_100367d0(int param_1)

{
  thunk_FUN_10007fe0(param_1 + 4);
  thunk_FUN_10007fe0(param_1 + 0x10);
  return param_1;
}

/* 10036810  FUN_10036810  (44 bytes)
 * int FUN_10036810(int param_1)
 */
int __fastcall FUN_10036810(int param_1)

{
  thunk_FUN_10007fe0(param_1 + 0xc);
  thunk_FUN_10007fe0(param_1 + 0x18);
  return param_1;
}

/* 10036850  FUN_10036850  (396 bytes)
 * undefined FUN_10036850(undefined4 * param_1)
 */
void __fastcall FUN_10036850(undefined4 *param_1)

{
  int iVar1;
  int local_18;
  void *local_10;
  code *pcStack_c;
  uint local_8;
  
  pcStack_c = FUN_100e56d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_thunk_FUN_100365b0_1026d230;
  param_1[5] = &PTR_thunk_FUN_10039270_1026d1f4;
  local_8 = 1;
  DAT_102d137c = 0;
  for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
    FUN_100bbb10((void *)param_1[local_18 * 4 + 0x63ff]);
    param_1[local_18 * 4 + 0x63ff] = 0;
    FUN_100bbb10((void *)param_1[local_18 * 4 + 0x6401]);
    param_1[local_18 * 4 + 0x6401] = 0;
    FUN_100bbb10((void *)param_1[local_18 * 4 + 0x6400]);
    param_1[local_18 * 4 + 0x6400] = 0;
  }
  FUN_100bbb10((void *)param_1[0x5dfc]);
  param_1[0x5dfc] = 0;
  thunk_FUN_10038ce0((int)param_1);
  iVar1 = (*DAT_102e1574)();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x63fe) != '\0')) {
    (*DAT_102e1574)();
    thunk_FUN_10035c60();
  }
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_10035a00((int)(param_1 + 0x5dfe));
  local_8 = 0xffffffff;
  thunk_FUN_10037840(param_1);
  ExceptionList = local_10;
  return;
}

/* 10036a40  FUN_10036a40  (841 bytes)
 * undefined4 FUN_10036a40(undefined4 param_1, undefined4 param_2)
 * called by: thunk_FUN_10036a40
 */
undefined4 __thiscall FUN_10036a40(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  Label *pLVar3;
  ImagePanel *pIVar4;
  int local_80;
  int local_18;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e571c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (*DAT_102e1490)("voice_modenable",&DAT_1026d38c,1);
  (*DAT_102e1490)("voice_clientdebug",&DAT_1026d374,0);
  (*DAT_102e149c)("voice_showbanned",thunk_FUN_10036360);
  iVar2 = (*DAT_102e1574)();
  if (iVar2 != 0) {
    (*DAT_102e1574)();
    thunk_FUN_10035a30((void *)((int)this + 0x177f8));
    *(undefined1 *)((int)this + 0x18ff8) = 1;
  }
  if (DAT_102d137c != (void *)0x0) {
    FUN_100bd710((uint *)"!g_pInternalVoiceStatus",
                 (uint *)
                 "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\voice_status.cpp"
                 ,DAT_1028977c + 0xe);
  }
  DAT_102d137c = this;
  *(undefined4 *)((int)this + 0x17738) = 0;
  *(undefined4 *)((int)this + 0x1773c) = 0;
  *(undefined4 *)((int)this + 0x177dc) = 0;
  _memset((void *)((int)this + 0x18ffc),0,0x70);
  for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
    piVar1 = (int *)((int)this + local_18 * 0x10 + 0x18ffc);
    pLVar3 = operator_new(0xd0);
    local_8 = 0;
    if (pLVar3 == (Label *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = vgui::Label::Label(pLVar3,"");
    }
    local_8 = 0xffffffff;
    piVar1[1] = local_80;
    pLVar3 = operator_new(0xd0);
    local_8 = 1;
    if (pLVar3 == (Label *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = vgui::Label::Label(pLVar3,"");
    }
    local_8 = 0xffffffff;
    *piVar1 = local_80;
    if (local_80 != 0) {
      (**(code **)(*(int *)*piVar1 + 0x20c))(2);
      (**(code **)(*(int *)*piVar1 + 0x218))(5);
      (**(code **)(*(int *)*piVar1 + 0x21c))(5);
      (**(code **)(*(int *)*piVar1 + 0x40))(piVar1[1]);
    }
    pIVar4 = operator_new(0xc0);
    local_8 = 2;
    if (pIVar4 == (ImagePanel *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = vgui::ImagePanel::ImagePanel(pIVar4,(Image *)0x0);
    }
    local_8 = 0xffffffff;
    piVar1[2] = local_80;
    if (local_80 != 0) {
      (**(code **)(*(int *)piVar1[2] + 0x40))(piVar1[1]);
    }
    piVar1[3] = -1;
  }
  pIVar4 = operator_new(0xc0);
  local_8 = 3;
  if (pIVar4 == (ImagePanel *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = vgui::ImagePanel::ImagePanel(pIVar4,(Image *)0x0);
  }
  local_8 = 0xffffffff;
  *(int *)((int)this + 0x177f0) = local_80;
  *(undefined1 *)((int)this + 0x177d8) = 0;
  *(undefined4 *)((int)this + 0x17734) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  thunk_FUN_10046ec0(&DAT_102da3c8,(int)this);
  *(undefined4 *)((int)this + 0x10) = 1;
  (*DAT_102e14a0)("VoiceMask",thunk_FUN_100361c0);
  (*DAT_102e14a0)("ReqState",thunk_FUN_10036200);
  ExceptionList = local_10;
  return 1;
}

/* 10036e60  FUN_10036e60  (1020 bytes)
 * undefined4 FUN_10036e60(void)
 * called by: thunk_FUN_10036e60
 */
undefined4 FUN_10036e60(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  float10 fVar3;
  byte_conflict local_100c [4052];
  undefined4 uStackY_38;
  
  FUN_100bdb10();
  thunk_FUN_10038ce0(extraout_ECX);
  uVar1 = thunk_FUN_100a05e0("gfx/vgui/icntlk_pl.tga");
  *(undefined4 *)(extraout_ECX + 0x177e8) = uVar1;
  if (*(int *)(extraout_ECX + 0x177e8) != 0) {
    vgui::Color::Color((Color *)&stack0xffffffe4,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x177e8) + 0xc))();
  }
  uVar1 = thunk_FUN_100a05e0("gfx/vgui/icntlk_sv.tga");
  *(undefined4 *)(extraout_ECX + 0x177ec) = uVar1;
  if (*(int *)(extraout_ECX + 0x177ec) != 0) {
    vgui::Color::Color((Color *)&stack0xffffffe4,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x177ec) + 0xc))();
  }
  (**(code **)(**(int **)(extraout_ECX + 0x177f0) + 0x1fc))();
  (**(code **)(**(int **)(extraout_ECX + 0x177f0) + 0x24))();
  uVar1 = thunk_FUN_100a0920("gfx/vgui/speaker4.tga");
  *(undefined4 *)(extraout_ECX + 0x177e4) = uVar1;
  if (*(int *)(extraout_ECX + 0x177e4) != 0) {
    uStackY_38 = 0x10036fa3;
    vgui::Color::Color((Color *)&stack0xffffffdc,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x177e4) + 0xc))();
  }
  uVar1 = thunk_FUN_100a0920("gfx/vgui/640_speaker1.tga");
  *(undefined4 *)(extraout_ECX + 0x17740) = uVar1;
  if (*(int *)(extraout_ECX + 0x17740) != 0) {
    uStackY_38 = 0x10036ff9;
    vgui::Color::Color((Color *)&stack0xffffffdc,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17740) + 0xc))();
  }
  uVar1 = thunk_FUN_100a0920("gfx/vgui/640_speaker2.tga");
  *(undefined4 *)(extraout_ECX + 0x17744) = uVar1;
  if (*(int *)(extraout_ECX + 0x17744) != 0) {
    uStackY_38 = 0x1003704f;
    vgui::Color::Color((Color *)&stack0xffffffdc,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17744) + 0xc))();
  }
  uVar1 = thunk_FUN_100a0920("gfx/vgui/640_speaker3.tga");
  *(undefined4 *)(extraout_ECX + 0x17748) = uVar1;
  if (*(int *)(extraout_ECX + 0x17748) != 0) {
    uStackY_38 = 0x100370a5;
    vgui::Color::Color((Color *)&stack0xffffffdc,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17748) + 0xc))();
  }
  uVar1 = thunk_FUN_100a0920("gfx/vgui/640_speaker4.tga");
  *(undefined4 *)(extraout_ECX + 0x1774c) = uVar1;
  if (*(int *)(extraout_ECX + 0x1774c) != 0) {
    uStackY_38 = 0x100370fb;
    vgui::Color::Color((Color *)&stack0xffffffdc,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x1774c) + 0xc))();
  }
  uVar1 = thunk_FUN_100a05e0("gfx/vgui/icntlk_squelch.tga");
  *(undefined4 *)(extraout_ECX + 0x17750) = uVar1;
  if (*(int *)(extraout_ECX + 0x17750) != 0) {
    uStackY_38 = 0x10037151;
    vgui::Color::Color((Color *)&stack0xffffffdc,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17750) + 0xc))();
  }
  uVar1 = thunk_FUN_100a05e0("gfx/vgui/640_voiceblocked.tga");
  *(undefined4 *)(extraout_ECX + 0x17754) = uVar1;
  if (*(int *)(extraout_ECX + 0x17754) != 0) {
    uStackY_38 = 0x100371a7;
    vgui::Color::Color((Color *)&stack0xffffffdc,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17754) + 0xc))();
  }
  *(undefined4 *)(extraout_ECX + 0x177e0) = 0x42340000;
  iVar2 = (*DAT_102e1594)();
  if (iVar2 != 0) {
    (*DAT_102e1598)();
    if (('/' < (char)local_100c[0]) && ((char)local_100c[0] < ':')) {
      fVar3 = FUN_100bda90(local_100c);
      *(float *)(extraout_ECX + 0x177e0) = (float)fVar3;
    }
    (*DAT_102e159c)();
  }
  uVar1 = (*DAT_102e1458)();
  *(undefined4 *)(extraout_ECX + 0x177dc) = uVar1;
  return 1;
}

/* 10037360  FUN_10037360  (302 bytes)
 * undefined FUN_10037360(double param_1)
 */
void __thiscall FUN_10037360(void *this,double param_1)

{
  char cVar1;
  float10 fVar2;
  int local_14;
  int local_10;
  int local_c;
  
  fVar2 = (float10)(*DAT_102e1530)();
  if ((float10)1.0 < fVar2 - (float10)*(float *)((int)this + 0x18)) {
    thunk_FUN_10037dc0('\0');
  }
  *(double *)((int)this + 0x17738) = param_1 + *(double *)((int)this + 0x17738);
  cVar1 = (**(code **)(**(int **)((int)this + 0x17734) + 0x10))();
  if (cVar1 == '\0') {
    for (local_10 = 0; local_10 < 7; local_10 = local_10 + 1) {
      (**(code **)(**(int **)((int)this + local_10 * 0x10 + 0x18ffc) + 0x24))(0);
    }
  }
  else {
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      (**(code **)(**(int **)((int)this + local_c * 0x10 + 0x18ffc) + 0x24))
                (*(int *)((int)this + local_c * 0x10 + 0x19008) != -1);
    }
  }
  for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
    thunk_FUN_10038220(this,local_14);
  }
  return;
}

/* 100374e0  FUN_100374e0  (683 bytes)
 * undefined FUN_100374e0(int param_1)
 */
void __fastcall FUN_100374e0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  undefined1 local_24 [8];
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x177dc) != 0) {
    local_8 = param_1;
    local_c = (*DAT_102e1524)();
    local_10 = 0;
    for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
      piVar3 = thunk_FUN_100395c0((void *)(local_8 + 0x24),local_24,local_14);
      uVar4 = thunk_FUN_10039220(piVar3);
      if ((((uVar4 != 0) && (local_18 = (*DAT_102e152c)(local_14 + 1), local_18 != 0)) &&
          (*(int *)(local_c + 700) <= *(int *)(local_18 + 700))) &&
         (((*(uint *)(local_18 + 0x2ec) & 0x80) == 0 &&
          ((local_18 != local_c || (DAT_102e8118 != 0)))))) {
        local_1c = (void *)(local_8 + 0x34 + local_10 * 3000);
        local_10 = local_10 + 1;
        _memset(local_1c,0,3000);
        *(undefined4 *)((int)local_1c + 0x2f8) = 5;
        *(undefined4 *)((int)local_1c + 0x2fc) = 0xff;
        *(undefined4 *)((int)local_1c + 0x54) = 0xff;
        *(undefined4 *)((int)local_1c + 0x304) = 0xe;
        *(undefined4 *)((int)local_1c + 0x310) = 0x3f800000;
        *(undefined4 *)((int)local_1c + 0x2e0) = 0;
        uVar5 = (*DAT_102e1550)(*(undefined4 *)(local_8 + 0x177dc));
        *(undefined4 *)((int)local_1c + 0xb94) = uVar5;
        iVar6 = thunk_FUN_10008500((int)local_1c + 0xb54);
        *(undefined4 *)(iVar6 + 8) = 0;
        iVar6 = thunk_FUN_10008500((int)local_1c + 0xb54);
        *(undefined4 *)(iVar6 + 4) = 0;
        puVar7 = (undefined4 *)thunk_FUN_10008500((int)local_1c + 0xb54);
        *puVar7 = 0;
        *(undefined4 *)((int)local_1c + 0x2f0) = 0x3f000000;
        iVar6 = thunk_FUN_10008500((int)local_1c + 0xb48);
        *(undefined4 *)(iVar6 + 4) = 0;
        puVar7 = (undefined4 *)thunk_FUN_10008500((int)local_1c + 0xb48);
        *puVar7 = 0;
        iVar6 = thunk_FUN_10008500((int)local_1c + 0xb48);
        *(undefined4 *)(iVar6 + 8) = 0x42340000;
        pfVar8 = (float *)thunk_FUN_10008500((int)local_1c + 0xb48);
        pfVar9 = (float *)thunk_FUN_10008500(local_18 + 0xb48);
        fVar1 = *pfVar8;
        fVar2 = *pfVar9;
        pfVar8 = (float *)thunk_FUN_10008500((int)local_1c + 0xb48);
        *pfVar8 = fVar1 + fVar2;
        iVar6 = thunk_FUN_10008500((int)local_1c + 0xb48);
        iVar10 = thunk_FUN_10008500(local_18 + 0xb48);
        fVar1 = *(float *)(iVar6 + 4);
        fVar2 = *(float *)(iVar10 + 4);
        iVar6 = thunk_FUN_10008500((int)local_1c + 0xb48);
        *(float *)(iVar6 + 4) = fVar1 + fVar2;
        iVar6 = thunk_FUN_10008500((int)local_1c + 0xb48);
        iVar10 = thunk_FUN_10008500(local_18 + 0xb48);
        fVar1 = *(float *)(iVar6 + 8);
        fVar2 = *(float *)(iVar10 + 8);
        iVar6 = thunk_FUN_10008500((int)local_1c + 0xb48);
        *(float *)(iVar6 + 8) = fVar1 + fVar2;
        (*DAT_102e154c)(0,local_1c);
      }
    }
  }
  return;
}

/* 10037840  FUN_10037840  (28 bytes)
 * undefined FUN_10037840(undefined4 * param_1)
 */
void __fastcall FUN_10037840(undefined4 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10037930_1026d4e8;
  return;
}

/* 10037870  FUN_10037870  (21 bytes)
 * undefined4 FUN_10037870(void)
 * called by: thunk_FUN_10037870
 */
undefined4 FUN_10037870(void)

{
  return 0;
}

/* 10037890  FUN_10037890  (21 bytes)
 * undefined4 FUN_10037890(void)
 * called by: thunk_FUN_10037890
 */
undefined4 FUN_10037890(void)

{
  return 0;
}

/* 100378b0  FUN_100378b0  (23 bytes)
 * undefined4 FUN_100378b0(void)
 * called by: thunk_FUN_100378b0
 */
undefined4 FUN_100378b0(void)

{
  return 0;
}

/* 100378d0  FUN_100378d0  (19 bytes)
 * undefined FUN_100378d0(void)
 * called by: thunk_FUN_100378d0
 */
void FUN_100378d0(void)

{
  return;
}

/* 100378f0  FUN_100378f0  (19 bytes)
 * undefined FUN_100378f0(void)
 * called by: thunk_FUN_100378f0
 */
void FUN_100378f0(void)

{
  return;
}

/* 10037910  FUN_10037910  (19 bytes)
 * undefined FUN_10037910(void)
 * called by: thunk_FUN_10037910
 */
void FUN_10037910(void)

{
  return;
}

/* 10037930  FUN_10037930  (54 bytes)
 * undefined4 * FUN_10037930(uint param_1)
 * called by: thunk_FUN_10037930
 */
undefined4 * __thiscall FUN_10037930(void *this,uint param_1)

{
  thunk_FUN_10037840(this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 10037980  FUN_10037980  (868 bytes)
 * undefined FUN_10037980(int param_1, int param_2)
 */
void __thiscall FUN_10037980(void *this,int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  float10 fVar3;
  int iVar4;
  undefined1 local_348 [8];
  undefined1 local_340 [8];
  undefined1 local_338 [8];
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined1 local_324 [512];
  undefined1 local_124 [20];
  int *local_110;
  int local_10c;
  undefined1 local_108 [256];
  void *local_8;
  
  if (**(int **)((int)this + 0x20) != 0) {
    local_8 = this;
    fVar3 = (float10)(*DAT_102e1494)("voice_clientdebug");
    if (fVar3 != (float10)0.0) {
      FUN_100bd300(local_108,0x100,
                   (byte_conflict *)"CVoiceStatus::UpdateSpeakerStatus: ent %d talking = %d\n");
      (*DAT_102e14d0)(local_108);
    }
    if (param_1 == -1) {
      *(bool *)((int)local_8 + 0x177f4) = param_2 != 0;
      if (param_2 != 0) {
        (*DAT_102e14a8)("voice_modenable 1");
      }
    }
    else if (param_1 == -2) {
      *(bool *)((int)local_8 + 0x177f5) = param_2 != 0;
    }
    else if ((-1 < param_1) && (param_1 < 0x20)) {
      local_10c = param_1 + -1;
      if (local_10c < 0) {
        return;
      }
      local_110 = (int *)thunk_FUN_10038740(local_8,local_10c);
      if (param_2 == 0) {
        iVar4 = 0;
        pvVar1 = thunk_FUN_100395c0((void *)((int)local_8 + 0x24),local_348,local_10c);
        thunk_FUN_10038fd0(pvVar1,iVar4);
        if (local_110 != (int *)0x0) {
          (**(code **)(*(int *)*local_110 + 0x24))(0);
          local_110[3] = -1;
        }
      }
      else {
        iVar4 = 1;
        pvVar1 = thunk_FUN_100395c0((void *)((int)local_8 + 0x24),local_338,local_10c);
        thunk_FUN_10038fd0(pvVar1,iVar4);
        iVar4 = 1;
        pvVar1 = thunk_FUN_100395c0((void *)((int)local_8 + 0x2c),local_340,local_10c);
        thunk_FUN_10038fd0(pvVar1,iVar4);
        if ((local_110 == (int *)0x0) &&
           (local_110 = (int *)thunk_FUN_100387b0(local_8), local_110 != (int *)0x0)) {
          _memset(local_124,0,0x14);
          (*DAT_102e14ac)(param_1,local_124);
          FUN_100bd300(local_324,0x200,(byte_conflict *)"%s   ");
          (**(code **)(**(int **)((int)local_8 + 0x17734) + 4))(param_1,&local_330);
          if (local_110[1] != 0) {
            (**(code **)(*(int *)local_110[1] + 300))(local_330,local_32c,local_328,100);
            (**(code **)(*(int *)local_110[1] + 0x40))(**(undefined4 **)((int)local_8 + 0x20));
            uVar2 = (**(code **)(**(int **)((int)local_8 + 0x17734) + 0x10))();
            (**(code **)(*(int *)local_110[1] + 0x24))(uVar2);
          }
          if (*local_110 != 0) {
            (**(code **)(*(int *)*local_110 + 0x120))(0xff,0xff,0xff,0);
            (**(code **)(*(int *)*local_110 + 300))(0,0,0,0xff);
            (**(code **)(*(int *)*local_110 + 0x200))(*local_110,local_324);
          }
          local_110[3] = local_10c;
        }
      }
    }
    thunk_FUN_100387e0((int)local_8);
  }
  return;
}

/* 10037dc0  FUN_10037dc0  (824 bytes)
 * undefined FUN_10037dc0(char param_1)
 */
void FUN_10037dc0(char param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  uint local_d80;
  undefined1 local_d3c [8];
  undefined1 local_d34 [256];
  uint local_c34 [128];
  undefined1 local_a34 [16];
  uint local_a24;
  uint local_a20;
  uint local_a1c;
  int local_a18;
  char local_a11;
  uint local_a10 [512];
  undefined1 local_210 [256];
  undefined1 local_110 [256];
  uint local_10;
  char *local_c;
  int local_8;
  
  local_c = (char *)(*DAT_102e1580)();
  if (*local_c == '\0') {
    fVar5 = (float10)(*DAT_102e1494)("voice_clientdebug");
    if (fVar5 != (float10)0.0) {
      (*DAT_102e14d0)("CVoiceStatus::UpdateServerState: pLevelName[0]==0\n");
    }
  }
  else {
    fVar5 = (float10)(*DAT_102e1494)("voice_modenable");
    local_d80 = (uint)(fVar5 != (float10)0.0);
    local_10 = local_d80;
    if ((param_1 != '\0') || (*(uint *)(local_8 + 0x1c) != local_d80)) {
      *(uint *)(local_8 + 0x1c) = local_d80;
      FUN_100bd300(local_110,0x100,(byte_conflict *)"VModEnable %d");
      (*DAT_102e14a4)(local_110);
      fVar5 = (float10)(*DAT_102e1494)("voice_clientdebug");
      if (fVar5 != (float10)0.0) {
        FUN_100bb6e0(local_210,(byte_conflict *)"CVoiceStatus::UpdateServerState: Sending \'%s\'\n")
        ;
        (*DAT_102e14d0)(local_210);
      }
    }
    FUN_100bb6e0((undefined1 *)local_a10,"vban");
    local_a11 = '\0';
    for (local_a18 = 0; local_a18 == 0; local_a18 = local_a18 + 1) {
      local_a1c = 0;
      local_a20 = 0;
      for (local_a24 = 0; local_a24 < 0x20; local_a24 = local_a24 + 1) {
        iVar2 = (*DAT_102e15d0)(local_a24 + 1,local_a34);
        if (iVar2 != 0) {
          bVar1 = thunk_FUN_10035dd0((void *)(local_8 + 0x177f8),local_a34);
          if (bVar1) {
            local_a20 = local_a20 | 1 << ((byte)local_a24 & 0x1f);
          }
          piVar3 = thunk_FUN_100395c0((void *)(local_8 + 0x30),local_d3c,
                                      local_a18 * 0x20 + local_a24);
          uVar4 = thunk_FUN_10039220(piVar3);
          if (uVar4 != 0) {
            local_a1c = local_a1c | 1 << ((byte)local_a24 & 0x1f);
          }
        }
      }
      if (local_a1c != local_a20) {
        local_a11 = '\x01';
      }
      FUN_100bb6e0((undefined1 *)local_c34," %x");
      FUN_100bba30(local_a10,local_c34);
    }
    if ((local_a11 == '\0') && (param_1 == '\0')) {
      fVar5 = (float10)(*DAT_102e1494)("voice_clientdebug");
      if (fVar5 != (float10)0.0) {
        (*DAT_102e14d0)("CVoiceStatus::UpdateServerState: no change\n");
      }
    }
    else {
      fVar5 = (float10)(*DAT_102e1494)("voice_clientdebug");
      if (fVar5 != (float10)0.0) {
        FUN_100bb6e0(local_d34,(byte_conflict *)"CVoiceStatus::UpdateServerState: Sending \'%s\'\n")
        ;
        (*DAT_102e14d0)(local_d34);
      }
      (*DAT_102e15dc)(local_a10);
    }
    fVar5 = (float10)(*DAT_102e1530)();
    *(float *)(local_8 + 0x18) = (float)fVar5;
  }
  return;
}

/* 100381d0  FUN_100381d0  (52 bytes)
 * undefined FUN_100381d0(undefined4 param_1, int param_2)
 */
void __thiscall FUN_100381d0(void *this,undefined4 param_1,int param_2)

{
  *(undefined4 *)((int)this + param_2 * 4 + 0x17754) = param_1;
  thunk_FUN_10038220(this,param_2 + -1);
  return;
}

/* 10038220  FUN_10038220  (512 bytes)
 * undefined FUN_10038220(int param_1)
 */
void __thiscall FUN_10038220(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  undefined1 local_34 [8];
  undefined1 local_2c [11];
  char local_21;
  char local_20;
  char local_1f;
  char local_1e;
  char local_1d;
  undefined1 local_1c [16];
  int *local_c;
  void *local_8;
  
  local_c = *(int **)((int)this + param_1 * 4 + 0x17758);
  if ((local_c != (int *)0x0) &&
     (local_8 = this, iVar2 = (*DAT_102e15d0)(param_1 + 1,local_1c), iVar2 != 0)) {
    fVar5 = (float10)FUN_100bdb40(*(uint *)((int)local_8 + 0x17738),*(int *)((int)local_8 + 0x1773c)
                                  ,0x33333333,0x3fe33333);
    local_1d = fVar5 < (float10)0.3;
    piVar3 = thunk_FUN_100395c0((void *)((int)local_8 + 0x24),local_2c,param_1);
    uVar4 = thunk_FUN_10039220(piVar3);
    local_1e = uVar4 != 0;
    bVar1 = thunk_FUN_10038f80(local_8,param_1 + 1);
    local_1f = '\x01' - bVar1;
    local_20 = thunk_FUN_10035dd0((void *)((int)local_8 + 0x177f8),local_1c);
    piVar3 = thunk_FUN_100395c0((void *)((int)local_8 + 0x2c),local_34,param_1);
    uVar4 = thunk_FUN_10039220(piVar3);
    local_21 = '\x01' - (uVar4 != 0);
    if (local_1f == '\0') {
      if (local_20 == '\0') {
        if (local_1e == '\0') {
          if (local_21 == '\0') {
            (**(code **)(*local_c + 0x1fc))(*(undefined4 *)((int)local_8 + 0x17744));
          }
          else {
            (**(code **)(*local_c + 0x1fc))(*(undefined4 *)((int)local_8 + 0x17740));
            (**(code **)(*local_c + 0x120))(100,100,100,1);
          }
        }
        else {
          if (local_1d == '\0') {
            (**(code **)(*local_c + 0x1fc))(*(undefined4 *)((int)local_8 + 0x17748));
          }
          else {
            (**(code **)(*local_c + 0x1fc))(*(undefined4 *)((int)local_8 + 0x1774c));
          }
          (**(code **)(*local_c + 0x120))(0xff,0xaa,0,1);
        }
      }
      else {
        (**(code **)(*local_c + 0x1fc))(*(undefined4 *)((int)local_8 + 0x17754));
      }
    }
    else {
      (**(code **)(*local_c + 0x1fc))(0);
    }
  }
  return;
}

/* 100384a0  FUN_100384a0  (279 bytes)
 * undefined FUN_100384a0(undefined4 param_1, undefined4 param_2)
 */
void FUN_100384a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined1 local_10c [256];
  int local_c;
  int local_8;
  
  thunk_FUN_10056240(param_2,param_1);
  for (local_c = 0; local_c == 0; local_c = local_c + 1) {
    iVar1 = thunk_FUN_10056420();
    thunk_FUN_100396d0((void *)(local_8 + 0x28),local_c,iVar1);
    iVar1 = thunk_FUN_10056420();
    thunk_FUN_100396d0((void *)(local_8 + 0x30),local_c,iVar1);
    fVar3 = (float10)(*DAT_102e1494)("voice_clientdebug");
    if (fVar3 != (float10)0.0) {
      (*DAT_102e14d0)("CVoiceStatus::HandleVoiceMaskMsg\n");
      thunk_FUN_10039670((void *)(local_8 + 0x28),local_c);
      FUN_100bb6e0(local_10c,(byte_conflict *)"    - m_AudiblePlayers[%d] = %lu\n");
      (*DAT_102e14d0)(local_10c);
      thunk_FUN_10039670((void *)(local_8 + 0x30),local_c);
      FUN_100bb6e0(local_10c,(byte_conflict *)"    - m_ServerBannedPlayers[%d] = %lu\n");
      (*DAT_102e14d0)(local_10c);
    }
  }
  uVar2 = thunk_FUN_10056300();
  *(uint *)(local_8 + 0x1c) = uVar2;
  return;
}

/* 10038600  FUN_10038600  (72 bytes)
 * undefined FUN_10038600(void)
 */
void FUN_10038600(void)

{
  float10 fVar1;
  
  fVar1 = (float10)(*DAT_102e1494)("voice_clientdebug");
  if (fVar1 != (float10)0.0) {
    (*DAT_102e14d0)("CVoiceStatus::HandleReqStateMsg\n");
  }
  thunk_FUN_10037dc0('\x01');
  return;
}

/* 10038660  FUN_10038660  (71 bytes)
 * undefined FUN_10038660(int param_1)
 */
void __fastcall FUN_10038660(int param_1)

{
  if (*(char *)(param_1 + 0x177d8) == '\0') {
    *(undefined1 *)(param_1 + 0x177d8) = 1;
    (**(code **)(**(int **)(param_1 + 0x17734) + 8))();
  }
  return;
}

/* 100386c0  FUN_100386c0  (54 bytes)
 * undefined FUN_100386c0(int param_1)
 */
void __fastcall FUN_100386c0(int param_1)

{
  *(undefined1 *)(param_1 + 0x177d8) = 0;
  (**(code **)(**(int **)(param_1 + 0x17734) + 8))();
  return;
}

/* 10038710  FUN_10038710  (28 bytes)
 * undefined1 FUN_10038710(int param_1)
 */
undefined1 __fastcall FUN_10038710(int param_1)

{
  return *(undefined1 *)(param_1 + 0x177d8);
}

/* 10038740  FUN_10038740  (88 bytes)
 * int FUN_10038740(int param_1)
 */
int __thiscall FUN_10038740(void *this,int param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (6 < local_c) {
      return 0;
    }
    if (*(int *)((int)this + local_c * 0x10 + 0x19008) == param_1) break;
    local_c = local_c + 1;
  }
  return (int)this + local_c * 0x10 + 0x18ffc;
}

/* 100387b0  FUN_100387b0  (29 bytes)
 * undefined FUN_100387b0(void * param_1)
 */
void __fastcall FUN_100387b0(void *param_1)

{
  thunk_FUN_10038740(param_1,-1);
  return;
}

/* 100387e0  FUN_100387e0  (1015 bytes)
 * undefined FUN_100387e0(int param_1)
 */
void __fastcall FUN_100387e0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  int local_8c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = DAT_102e1238 / 2;
  local_10 = 8;
  local_14 = 8;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x177e4) != 0) {
    (**(code **)(**(int **)(param_1 + 0x177e4) + 8))(&local_10,&local_14);
  }
  for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
    local_1c = (int *)(local_8 + 0x18ffc + local_18 * 0x10);
    if ((local_1c[3] == -1) || (*local_1c == 0)) {
      if (local_1c[2] != 0) {
        (**(code **)(*(int *)local_1c[2] + 0x24))(0);
      }
      if (local_1c[1] != 0) {
        (**(code **)(*(int *)local_1c[1] + 0x24))(0);
      }
      if (*local_1c != 0) {
        (**(code **)(*(int *)*local_1c + 0x24))(0);
      }
    }
    else {
      (**(code **)(*(int *)*local_1c + 0x214))(&local_20,&local_24);
      if ((DAT_102e1234 << 1) / 3 < local_20) {
        local_20 = (DAT_102e1234 << 1) / 3;
      }
      local_28 = 2;
      local_2c = local_20 + local_10 + 6;
      if (local_14 < local_24) {
        local_8c = local_24;
      }
      else {
        local_8c = local_14;
      }
      local_30 = local_8c + 4;
      (**(code **)(*(int *)local_1c[1] + 0x10))
                ((DAT_102e1234 - local_2c) + -8,local_c,local_2c,local_30);
      (**(code **)(*(int *)*local_1c + 0x10))(local_28,(local_30 - local_24) / 2,local_20,local_24);
      local_34 = local_28 * 2 + local_20;
      local_38 = (local_30 - local_14) / 2;
      if (local_1c[2] == 0) {
        (**(code **)(*(int *)local_1c[2] + 0x24))(0);
      }
      else {
        (**(code **)(*(int *)local_1c[2] + 0x1fc))(*(undefined4 *)(local_8 + 0x177e4));
        (**(code **)(*(int *)local_1c[2] + 0x24))(1);
        (**(code **)(*(int *)local_1c[2] + 0x10))(local_34,local_38,local_10,local_14);
      }
      local_c = local_c + 2 + local_30;
    }
  }
  if ((((*(int *)(local_8 + 0x177e8) == 0) || (*(int *)(local_8 + 0x177ec) == 0)) ||
      (*(int *)(local_8 + 0x177f0) == 0)) ||
     ((*(char *)(local_8 + 0x177f4) == '\0' && (*(char *)(local_8 + 0x177f5) == '\0')))) {
    (**(code **)(**(int **)(local_8 + 0x177f0) + 0x24))(0);
  }
  else {
    (**(code **)(**(int **)(local_8 + 0x177f0) + 0x40))(**(undefined4 **)(local_8 + 0x20));
    (**(code **)(**(int **)(local_8 + 0x177f0) + 0x24))(1);
    if ((*(char *)(local_8 + 0x177f5) == '\0') ||
       (fVar3 = (float10)(*DAT_102e1494)("voice_clientdebug"), fVar3 == (float10)0.0)) {
      (**(code **)(**(int **)(local_8 + 0x177f0) + 0x1fc))(*(undefined4 *)(local_8 + 0x177e8));
    }
    else {
      (**(code **)(**(int **)(local_8 + 0x177f0) + 0x1fc))(*(undefined4 *)(local_8 + 0x177ec));
    }
    (**(code **)(**(int **)(local_8 + 0x177e8) + 8))(&local_3c,&local_40);
    iVar1 = DAT_102e1234 - local_3c;
    iVar2 = (**(code **)(**(int **)(local_8 + 0x17734) + 0xc))();
    (**(code **)**(undefined4 **)(local_8 + 0x177f0))(iVar1 + -10,iVar2 - local_40);
  }
  return;
}

/* 10038ce0  FUN_10038ce0  (472 bytes)
 * undefined FUN_10038ce0(int param_1)
 */
void __fastcall FUN_10038ce0(int param_1)

{
  undefined4 local_c;
  
  FUN_100bbb10(*(void **)(param_1 + 0x177e8));
  *(undefined4 *)(param_1 + 0x177e8) = 0;
  FUN_100bbb10(*(void **)(param_1 + 0x177ec));
  *(undefined4 *)(param_1 + 0x177ec) = 0;
  FUN_100bbb10(*(void **)(param_1 + 0x177e4));
  *(undefined4 *)(param_1 + 0x177e4) = 0;
  FUN_100bbb10(*(void **)(param_1 + 0x17740));
  *(undefined4 *)(param_1 + 0x17740) = 0;
  FUN_100bbb10(*(void **)(param_1 + 0x17744));
  *(undefined4 *)(param_1 + 0x17744) = 0;
  FUN_100bbb10(*(void **)(param_1 + 0x17748));
  *(undefined4 *)(param_1 + 0x17748) = 0;
  FUN_100bbb10(*(void **)(param_1 + 0x1774c));
  *(undefined4 *)(param_1 + 0x1774c) = 0;
  FUN_100bbb10(*(void **)(param_1 + 0x17750));
  *(undefined4 *)(param_1 + 0x17750) = 0;
  FUN_100bbb10(*(void **)(param_1 + 0x17754));
  *(undefined4 *)(param_1 + 0x17754) = 0;
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    if (*(int *)(param_1 + 0x17758 + local_c * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x17758 + local_c * 4) + 0x1fc))(0);
    }
  }
  if (*(int *)(param_1 + 0x177f0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x177f0) + 0x1fc))(0);
  }
  return;
}

/* 10038f30  FUN_10038f30  (64 bytes)
 * bool FUN_10038f30(undefined4 param_1)
 */
bool FUN_10038f30(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_18 [16];
  int local_8;
  
  iVar2 = (*DAT_102e15d0)(param_1,local_18);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = thunk_FUN_10035dd0((void *)(local_8 + 0x177f8),local_18);
  }
  return bVar1;
}

/* 10038f80  FUN_10038f80  (56 bytes)
 * bool FUN_10038f80(int param_1)
 */
bool __thiscall FUN_10038f80(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 local_10 [8];
  void *local_8;
  
  local_8 = this;
  piVar1 = thunk_FUN_100395c0((void *)((int)this + 0x28),local_10,param_1 + -1);
  uVar2 = thunk_FUN_10039220(piVar1);
  return uVar2 != 0;
}

/* 10038fd0  FUN_10038fd0  (135 bytes)
 * undefined FUN_10038fd0(int param_1)
 */
void __thiscall FUN_10038fd0(void *this,int param_1)

{
  if (param_1 == 0) {
    *(uint *)(*(int *)this + (*(int *)((int)this + 4) >> 5) * 4) =
         *(uint *)(*(int *)this + (*(int *)((int)this + 4) >> 5) * 4) &
         ~(1 << ((byte)*(undefined4 *)((int)this + 4) & 0x1f));
  }
  else {
    *(uint *)(*(int *)this + (*(int *)((int)this + 4) >> 5) * 4) =
         *(uint *)(*(int *)this + (*(int *)((int)this + 4) >> 5) * 4) |
         1 << ((byte)*(undefined4 *)((int)this + 4) & 0x1f);
  }
  return;
}

/* 10039080  FUN_10039080  (325 bytes)
 * undefined FUN_10039080(int param_1)
 */
void FUN_10039080(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  undefined1 local_120 [8];
  undefined1 local_118 [256];
  undefined4 local_18 [4];
  int local_8;
  
  fVar5 = (float10)(*DAT_102e1494)("voice_clientdebug");
  if (fVar5 != (float10)0.0) {
    (*DAT_102e14d0)("CVoiceStatus::SetPlayerBlockedState part 1\n");
  }
  iVar2 = (*DAT_102e15d0)(param_1,local_18);
  if (iVar2 != 0) {
    fVar5 = (float10)(*DAT_102e1494)("voice_clientdebug");
    if (fVar5 != (float10)0.0) {
      (*DAT_102e14d0)("CVoiceStatus::SetPlayerBlockedState part 2\n");
    }
    piVar3 = thunk_FUN_100395c0((void *)(local_8 + 0x28),local_120,param_1 + -1);
    uVar4 = thunk_FUN_10039220(piVar3);
    if (uVar4 != 0) {
      fVar5 = (float10)(*DAT_102e1494)("voice_clientdebug");
      if (fVar5 != (float10)0.0) {
        thunk_FUN_10035dd0((void *)(local_8 + 0x177f8),local_18);
        FUN_100bb6e0(local_118,
                     (byte_conflict *)
                     "CVoiceStatus::SetPlayerBlockedState: setting player %d ban to %d\n");
        (*DAT_102e14d0)(local_118);
      }
      bVar1 = thunk_FUN_10035dd0((void *)(local_8 + 0x177f8),local_18);
      thunk_FUN_10035e00((void *)(local_8 + 0x177f8),local_18,!bVar1);
      thunk_FUN_10037dc0('\0');
    }
  }
  return;
}

/* 10039220  FUN_10039220  (54 bytes)
 * uint FUN_10039220(int * param_1)
 */
uint __fastcall FUN_10039220(int *param_1)

{
  return *(uint *)(*param_1 + (param_1[1] >> 5) * 4) & 1 << ((byte)param_1[1] & 0x1f);
}

/* 10039270  FUN_10039270  (21 bytes)
 * undefined FUN_10039270(void)
 * called by: thunk_FUN_10039270
 */
void FUN_10039270(void)

{
  return;
}

/* 10039290  FUN_10039290  (21 bytes)
 * undefined FUN_10039290(void)
 * called by: thunk_FUN_10039290
 */
void FUN_10039290(void)

{
  return;
}

/* 100392b0  FUN_100392b0  (21 bytes)
 * undefined FUN_100392b0(void)
 * called by: thunk_FUN_100392b0
 */
void FUN_100392b0(void)

{
  return;
}

/* 100392d0  FUN_100392d0  (21 bytes)
 * undefined FUN_100392d0(void)
 * called by: thunk_FUN_100392d0
 */
void FUN_100392d0(void)

{
  return;
}

/* 100392f0  FUN_100392f0  (21 bytes)
 * undefined FUN_100392f0(void)
 * called by: thunk_FUN_100392f0
 */
void FUN_100392f0(void)

{
  return;
}

/* 10039310  FUN_10039310  (21 bytes)
 * undefined FUN_10039310(void)
 * called by: thunk_FUN_10039310
 */
void FUN_10039310(void)

{
  return;
}

/* 10039330  FUN_10039330  (21 bytes)
 * undefined FUN_10039330(void)
 * called by: thunk_FUN_10039330
 */
void FUN_10039330(void)

{
  return;
}

/* 10039350  FUN_10039350  (21 bytes)
 * undefined FUN_10039350(void)
 * called by: thunk_FUN_10039350
 */
void FUN_10039350(void)

{
  return;
}

/* 10039370  FUN_10039370  (21 bytes)
 * undefined FUN_10039370(void)
 * called by: thunk_FUN_10039370
 */
void FUN_10039370(void)

{
  return;
}

/* 10039390  FUN_10039390  (21 bytes)
 * undefined FUN_10039390(void)
 * called by: thunk_FUN_10039390
 */
void FUN_10039390(void)

{
  return;
}

/* 100393b0  FUN_100393b0  (21 bytes)
 * undefined FUN_100393b0(void)
 * called by: thunk_FUN_100393b0
 */
void FUN_100393b0(void)

{
  return;
}

/* 100393d0  FUN_100393d0  (31 bytes)
 * undefined4 * FUN_100393d0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_100393d0(undefined4 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10037930_1026d4e8;
  return param_1;
}

/* 10039400  FUN_10039400  (139 bytes)
 * Image * FUN_10039400(Image * param_1)
 */
Image * __thiscall FUN_10039400(void *this,Image *param_1)

{
  vgui::Image::Image(this,param_1);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined ***)this = &vgui::TextImage::_vftable_;
  return this;
}

/* 100394b0  FUN_100394b0  (142 bytes)
 * Image * FUN_100394b0(Image * param_1)
 */
Image * __thiscall FUN_100394b0(void *this,Image *param_1)

{
  uint local_c;
  
  vgui::Image::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 0x34) = *(undefined4 *)(param_1 + local_c * 4 + 0x34);
  }
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  return this;
}

/* 10039570  FUN_10039570  (61 bytes)
 * int FUN_10039570(int param_1)
 */
int __fastcall FUN_10039570(int param_1)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < 1; local_c = local_c + 1) {
    *(undefined4 *)(param_1 + local_c * 4) = 0;
  }
  return param_1;
}

/* 100395c0  FUN_100395c0  (82 bytes)
 * void * FUN_100395c0(void * param_1, int param_2)
 */
void * __thiscall FUN_100395c0(void *this,void *param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = thunk_FUN_10039730();
    if (param_2 < iVar1) goto LAB_100395f6;
  }
  FUN_100bd710((uint *)"i >= 0 && i < GetNumBits()",
               (uint *)
               "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\bitvec.h"
               ,0x85);
LAB_100395f6:
  thunk_FUN_10039630(param_1,this,param_2);
  return param_1;
}

/* 10039630  FUN_10039630  (41 bytes)
 * undefined4 * FUN_10039630(undefined4 param_1, undefined4 param_2)
 */
undefined4 * __thiscall FUN_10039630(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return this;
}

/* 10039670  FUN_10039670  (65 bytes)
 * undefined4 FUN_10039670(int param_1)
 */
undefined4 __thiscall FUN_10039670(void *this,int param_1)

{
  if ((param_1 < 0) || (0 < param_1)) {
    FUN_100bd710((uint *)"i >= 0 && i < NUM_DWORDS",
                 (uint *)
                 "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\bitvec.h"
                 ,0xa5);
  }
  return *(undefined4 *)((int)this + param_1 * 4);
}

/* 100396d0  FUN_100396d0  (68 bytes)
 * undefined FUN_100396d0(int param_1, undefined4 param_2)
 */
void __thiscall FUN_100396d0(void *this,int param_1,undefined4 param_2)

{
  if ((param_1 < 0) || (0 < param_1)) {
    FUN_100bd710((uint *)"i >= 0 && i < NUM_DWORDS",
                 (uint *)
                 "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\bitvec.h"
                 ,0xad);
  }
  *(undefined4 *)((int)this + param_1 * 4) = param_2;
  return;
}

/* 10039730  FUN_10039730  (24 bytes)
 * undefined4 FUN_10039730(void)
 */
undefined4 FUN_10039730(void)

{
  return 0x20;
}

/* 10039750  FUN_10039750  (21 bytes)
 * undefined1 FUN_10039750(void)
 */
undefined1 FUN_10039750(void)

{
  return DAT_102d6df0;
}

/* 10039770  FUN_10039770  (26 bytes)
 * undefined FUN_10039770(void)
 */
void FUN_10039770(void)

{
  FUN_10039790();
  FUN_100397b0();
  return;
}

/* 10039790  FUN_10039790  (26 bytes)
 * undefined FUN_10039790(void)
 * called by: FUN_10039770
 */
void FUN_10039790(void)

{
  thunk_FUN_10039c50((undefined4 *)&DAT_102d63a0);
  return;
}

/* 100397b0  FUN_100397b0  (29 bytes)
 * undefined FUN_100397b0(void)
 * called by: FUN_10039770
 */
void FUN_100397b0(void)

{
  FUN_100bc490(0x100397e0);
  return;
}

/* 100397e0  FUN_100397e0  (26 bytes)
 * undefined FUN_100397e0(void)
 */
void FUN_100397e0(void)

{
  thunk_FUN_10039e00((undefined4 *)&DAT_102d63a0);
  return;
}

/* 10039800  FUN_10039800  (21 bytes)
 * undefined * FUN_10039800(void)
 */
undefined * FUN_10039800(void)

{
  return &DAT_102d63a0;
}

/* 10039820  FUN_10039820  (21 bytes)
 * undefined FUN_10039820(void)
 */
void FUN_10039820(void)

{
  FUN_10039840();
  return;
}

/* 10039840  FUN_10039840  (26 bytes)
 * undefined FUN_10039840(void)
 * called by: FUN_10039820
 */
void FUN_10039840(void)

{
  thunk_FUN_10039860((ActionSignal *)&DAT_102d6398);
  return;
}

