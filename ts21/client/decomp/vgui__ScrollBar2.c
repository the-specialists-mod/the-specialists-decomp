/* client.dll - vgui__ScrollBar2 (21 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100012c1  vgui::ScrollBar2::setValue  (5 bytes)
 * void setValue(int param_1)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setValue(int) */

void __thiscall vgui::ScrollBar2::setValue(ScrollBar2 *this,int param_1)

{
                    /* 0x12c1  461  ?setValue@ScrollBar2@vgui@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0xc4) + 0x1fc))(param_1);
  return;
}

/* 10001375  vgui::ScrollBar2::operator=  (5 bytes)
 * ScrollBar2 * operator=(ScrollBar2 * param_1)
 */
/* public: class vgui::ScrollBar2 & __thiscall vgui::ScrollBar2::operator=(class vgui::ScrollBar2
   const &) */

ScrollBar2 * __thiscall vgui::ScrollBar2::operator=(ScrollBar2 *this,ScrollBar2 *param_1)

{
  uint uStack_c;
  
                    /* 0x1375  137  ??4ScrollBar2@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 0xbc) = *(undefined4 *)(param_1 + uStack_c * 4 + 0xbc);
  }
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  return this;
}

/* 100014c4  vgui::ScrollBar2::getSlider  (5 bytes)
 * Slider2 * getSlider(void)
 */
/* public: virtual class vgui::Slider2 * __thiscall vgui::ScrollBar2::getSlider(void) */

Slider2 * __thiscall vgui::ScrollBar2::getSlider(ScrollBar2 *this)

{
                    /* 0x14c4  290  ?getSlider@ScrollBar2@vgui@@UAEPAVSlider2@2@XZ */
  return *(Slider2 **)(this + 0xc4);
}

/* 100015af  vgui::ScrollBar2::addIntChangeSignal  (5 bytes)
 * void addIntChangeSignal(IntChangeSignal * param_1)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::addIntChangeSignal(class vgui::IntChangeSignal
   *) */

void __thiscall vgui::ScrollBar2::addIntChangeSignal(ScrollBar2 *this,IntChangeSignal *param_1)

{
  void *this_00;
  IntChangeSignal *pIStack_60;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
                    /* 0x15af  246  ?addIntChangeSignal@ScrollBar2@vgui@@UAEXPAVIntChangeSignal@2@@Z
                        */
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_100e562b;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  Dar<vgui::IntChangeSignal*>::putElement((Dar<vgui::IntChangeSignal*> *)(this + 200),param_1);
  this_00 = operator_new(8);
  uStack_8 = 0;
  if (this_00 == (void *)0x0) {
    pIStack_60 = (IntChangeSignal *)0x0;
  }
  else {
    pIStack_60 = thunk_FUN_10033830(this_00,this);
  }
  uStack_8 = 0xffffffff;
  (**(code **)(**(int **)(this + 0xc4) + 0x208))(pIStack_60);
  ExceptionList = pvStack_10;
  return;
}

/* 10001e38  vgui::ScrollBar2::ScrollBar2  (5 bytes)
 * undefined ScrollBar2(ScrollBar2 * param_1)
 */
/* public: __thiscall vgui::ScrollBar2::ScrollBar2(class vgui::ScrollBar2 const &) */

ScrollBar2 * __thiscall vgui::ScrollBar2::ScrollBar2(ScrollBar2 *this,ScrollBar2 *param_1)

{
                    /* 0x1e38  73  ??0ScrollBar2@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10001e65  vgui::ScrollBar2::performLayout  (5 bytes)
 * void performLayout(void)
 */
/* protected: virtual void __thiscall vgui::ScrollBar2::performLayout(void) */

void __thiscall vgui::ScrollBar2::performLayout(ScrollBar2 *this)

{
                    /* 0x1e65  334  ?performLayout@ScrollBar2@vgui@@MAEXXZ */
  return;
}

/* 10001ef6  vgui::ScrollBar2::getButton  (5 bytes)
 * Button * getButton(int param_1)
 */
/* public: virtual class vgui::Button * __thiscall vgui::ScrollBar2::getButton(int) */

Button * __thiscall vgui::ScrollBar2::getButton(ScrollBar2 *this,int param_1)

{
                    /* 0x1ef6  269  ?getButton@ScrollBar2@vgui@@UAEPAVButton@2@H@Z */
  return *(Button **)(this + param_1 * 4 + 0xbc);
}

/* 1000209f  vgui::ScrollBar2::setButton  (5 bytes)
 * void setButton(Button * param_1, int param_2)
 * called by: FUN_10032f40
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setButton(class vgui::Button *,int) */

void __thiscall vgui::ScrollBar2::setButton(ScrollBar2 *this,Button *param_1,int param_2)

{
  void *this_00;
  ActionSignal *pAStack_60;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
                    /* 0x209f  412  ?setButton@ScrollBar2@vgui@@UAEXPAVButton@2@H@Z */
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_100e564b;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + param_2 * 4 + 0xbc) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*(int *)this + 0x4c))(*(undefined4 *)(this + param_2 * 4 + 0xbc));
  }
  *(Button **)(this + param_2 * 4 + 0xbc) = param_1;
  (**(code **)(*(int *)this + 0x44))(*(undefined4 *)(this + param_2 * 4 + 0xbc));
  this_00 = operator_new(0xc);
  uStack_8 = 0;
  if (this_00 == (void *)0x0) {
    pAStack_60 = (ActionSignal *)0x0;
  }
  else {
    pAStack_60 = thunk_FUN_10033b60(this_00,this,param_2);
  }
  uStack_8 = 0xffffffff;
  (**(code **)(**(int **)(this + param_2 * 4 + 0xbc) + 0x240))(pAStack_60);
  (**(code **)(*(int *)this + 0x234))();
  ExceptionList = pvStack_10;
  return;
}

/* 10002428  vgui::ScrollBar2::getValue  (5 bytes)
 * int getValue(void)
 */
/* public: virtual int __thiscall vgui::ScrollBar2::getValue(void) */

int __thiscall vgui::ScrollBar2::getValue(ScrollBar2 *this)

{
  int iVar1;
  
                    /* 0x2428  291  ?getValue@ScrollBar2@vgui@@UAEHXZ */
  iVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x200))();
  return iVar1;
}

/* 100029f0  vgui::ScrollBar2::isVertical  (5 bytes)
 * bool isVertical(void)
 */
/* public: virtual bool __thiscall vgui::ScrollBar2::isVertical(void) */

bool __thiscall vgui::ScrollBar2::isVertical(ScrollBar2 *this)

{
  undefined1 uVar1;
  
                    /* 0x29f0  331  ?isVertical@ScrollBar2@vgui@@UAE_NXZ */
  uVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x204))();
  return (bool)uVar1;
}

/* 10002a3b  vgui::ScrollBar2::setSlider  (5 bytes)
 * void setSlider(Slider2 * param_1)
 * called by: FUN_10032f40
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setSlider(class vgui::Slider2 *) */

void __thiscall vgui::ScrollBar2::setSlider(ScrollBar2 *this,Slider2 *param_1)

{
  void *this_00;
  IntChangeSignal *pIStack_60;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
                    /* 0x2a3b  460  ?setSlider@ScrollBar2@vgui@@UAEXPAVSlider2@2@@Z */
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_100e566b;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 0xc4) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*(int *)this + 0x4c))(*(undefined4 *)(this + 0xc4));
  }
  *(Slider2 **)(this + 0xc4) = param_1;
  (**(code **)(*(int *)this + 0x44))(*(undefined4 *)(this + 0xc4));
  this_00 = operator_new(8);
  uStack_8 = 0;
  if (this_00 == (void *)0x0) {
    pIStack_60 = (IntChangeSignal *)0x0;
  }
  else {
    pIStack_60 = thunk_FUN_10033830(this_00,this);
  }
  uStack_8 = 0xffffffff;
  (**(code **)(**(int **)(this + 0xc4) + 0x208))(pIStack_60);
  (**(code **)(*(int *)this + 0x234))();
  ExceptionList = pvStack_10;
  return;
}

/* 10002a72  vgui::ScrollBar2::hasFullRange  (5 bytes)
 * bool hasFullRange(void)
 */
/* public: virtual bool __thiscall vgui::ScrollBar2::hasFullRange(void) */

bool __thiscall vgui::ScrollBar2::hasFullRange(ScrollBar2 *this)

{
  undefined1 uVar1;
  
                    /* 0x2a72  311  ?hasFullRange@ScrollBar2@vgui@@UAE_NXZ */
  uVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x220))();
  return (bool)uVar1;
}

/* 10002c02  vgui::ScrollBar2::setButtonPressedScrollValue  (5 bytes)
 * void setButtonPressedScrollValue(int param_1)
 * called by: FUN_10032f40
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setButtonPressedScrollValue(int) */

void __thiscall vgui::ScrollBar2::setButtonPressedScrollValue(ScrollBar2 *this,int param_1)

{
                    /* 0x2c02  414  ?setButtonPressedScrollValue@ScrollBar2@vgui@@UAEXH@Z */
  *(int *)(this + 0xd4) = param_1;
  return;
}

/* 10003337  vgui::ScrollBar2::setRangeWindowEnabled  (5 bytes)
 * void setRangeWindowEnabled(bool param_1)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setRangeWindowEnabled(bool) */

void __thiscall vgui::ScrollBar2::setRangeWindowEnabled(ScrollBar2 *this,bool param_1)

{
                    /* 0x3337  456  ?setRangeWindowEnabled@ScrollBar2@vgui@@UAEX_N@Z */
  (**(code **)(**(int **)(this + 0xc4) + 0x218))(param_1);
  return;
}

/* 100035fd  vgui::ScrollBar2::setSize  (5 bytes)
 * void setSize(int param_1, int param_2)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setSize(int,int) */

void __thiscall vgui::ScrollBar2::setSize(ScrollBar2 *this,int param_1,int param_2)

{
  char cVar1;
  
                    /* 0x35fd  458  ?setSize@ScrollBar2@vgui@@UAEXHH@Z */
  vgui::Panel::setSize((Panel *)this,param_1,param_2);
  if (((*(int *)(this + 0xc4) != 0) && (*(int *)(this + 0xbc) != 0)) && (*(int *)(this + 0xc0) != 0)
     ) {
    (**(code **)(*(int *)this + 0xe8))(&param_1,&param_2);
    cVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x204))();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(this + 0xc4) + 0x10))(param_2,0,param_1 + param_2 * -2,param_2);
      (**(code **)(**(int **)(this + 0xbc) + 0x10))(0,0,param_2,param_2);
      (**(code **)(**(int **)(this + 0xc0) + 0x10))(param_1 - param_2,0,param_2,param_2);
    }
    else {
      (**(code **)(**(int **)(this + 0xc4) + 0x10))(0,param_1,param_1,param_2 + param_1 * -2);
      (**(code **)(**(int **)(this + 0xbc) + 0x10))(0,0,param_1,param_1);
      (**(code **)(**(int **)(this + 0xc0) + 0x10))(0,param_2 - param_1,param_1,param_1);
    }
  }
  return;
}

/* 10003710  vgui::ScrollBar2::doButtonPressed  (5 bytes)
 * void doButtonPressed(int param_1)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::doButtonPressed(int) */

void __thiscall vgui::ScrollBar2::doButtonPressed(ScrollBar2 *this,int param_1)

{
  int iVar1;
  
                    /* 0x3710  248  ?doButtonPressed@ScrollBar2@vgui@@UAEXH@Z */
  if (param_1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x200))();
    (**(code **)(**(int **)(this + 0xc4) + 0x1fc))(iVar1 - *(int *)(this + 0xd4));
  }
  else {
    iVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x200))();
    (**(code **)(**(int **)(this + 0xc4) + 0x1fc))(iVar1 + *(int *)(this + 0xd4));
  }
  return;
}

/* 10003a08  vgui::ScrollBar2::setRange  (5 bytes)
 * void setRange(int param_1, int param_2)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setRange(int,int) */

void __thiscall vgui::ScrollBar2::setRange(ScrollBar2 *this,int param_1,int param_2)

{
                    /* 0x3a08  452  ?setRange@ScrollBar2@vgui@@UAEXHH@Z */
  (**(code **)(**(int **)(this + 0xc4) + 0x20c))(param_1,param_2);
  return;
}

/* 10003a4e  vgui::ScrollBar2::setRangeWindow  (5 bytes)
 * void setRangeWindow(int param_1)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setRangeWindow(int) */

void __thiscall vgui::ScrollBar2::setRangeWindow(ScrollBar2 *this,int param_1)

{
                    /* 0x3a4e  454  ?setRangeWindow@ScrollBar2@vgui@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0xc4) + 0x214))(param_1);
  return;
}

/* 10003a58  vgui::ScrollBar2::fireIntChangeSignal  (5 bytes)
 * void fireIntChangeSignal(void)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::fireIntChangeSignal(void) */

void __thiscall vgui::ScrollBar2::fireIntChangeSignal(ScrollBar2 *this)

{
  int iVar1;
  undefined4 uVar2;
  IntChangeSignal *pIVar3;
  int iStack_c;
  
                    /* 0x3a58  267  ?fireIntChangeSignal@ScrollBar2@vgui@@UAEXXZ */
  iStack_c = 0;
  while( true ) {
    iVar1 = Dar<vgui::IntChangeSignal*>::getCount((Dar<vgui::IntChangeSignal*> *)(this + 200));
    if (iVar1 <= iStack_c) break;
    uVar2 = (**(code **)(**(int **)(this + 0xc4) + 0x200))(this);
    pIVar3 = Dar<vgui::IntChangeSignal*>::operator[]
                       ((Dar<vgui::IntChangeSignal*> *)(this + 200),iStack_c);
    (*(code *)**(undefined4 **)pIVar3)(uVar2);
    iStack_c = iStack_c + 1;
  }
  return;
}

/* 10003b70  vgui::ScrollBar2::ScrollBar2  (5 bytes)
 * undefined ScrollBar2(int param_1, int param_2, int param_3, int param_4, bool param_5)
 * called by: FUN_1009fc20
 */
/* public: __thiscall vgui::ScrollBar2::ScrollBar2(int,int,int,int,bool) */

ScrollBar2 * __thiscall
vgui::ScrollBar2::ScrollBar2
          (ScrollBar2 *this,int param_1,int param_2,int param_3,int param_4,bool param_5)

{
  Slider2 *pSVar1;
  void *pvVar2;
  Slider2 *pSStack_88;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
                    /* 0x3b70  74  ??0ScrollBar2@vgui@@QAE@HHHH_N@Z */
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_100e5602;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  vgui::Panel::Panel((Panel *)this,param_1,param_2,param_3,param_4);
  Dar<vgui::IntChangeSignal*>::Dar<vgui::IntChangeSignal*>
            ((Dar<vgui::IntChangeSignal*> *)(this + 200));
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  if (param_5) {
    pSVar1 = operator_new(0xfc);
    uStack_8 = 0;
    if (pSVar1 == (Slider2 *)0x0) {
      pSStack_88 = (Slider2 *)0x0;
    }
    else {
      pSStack_88 = (Slider2 *)
                   Slider2::Slider2(pSVar1,0,param_3 + -1,param_3,param_4 + param_3 * -2 + 2,true);
    }
    uStack_8 = 0xffffffff;
    setSlider(this,pSStack_88);
    pvVar2 = operator_new(0x134);
    uStack_8 = 1;
    if (pvVar2 == (void *)0x0) {
      pSStack_88 = (Slider2 *)0x0;
    }
    else {
      pSStack_88 = (Slider2 *)thunk_FUN_10033370(pvVar2,"gfx/vgui/arrowup.tga",0,0,param_3,param_3);
    }
    uStack_8 = 0xffffffff;
    setButton(this,(Button *)pSStack_88,0);
    pvVar2 = operator_new(0x134);
    uStack_8 = 2;
    if (pvVar2 == (void *)0x0) {
      pSStack_88 = (Slider2 *)0x0;
    }
    else {
      pSStack_88 = (Slider2 *)
                   thunk_FUN_10033370(pvVar2,"gfx/vgui/arrowdown.tga",0,param_4 - param_3,param_3,
                                      param_3);
    }
    uStack_8 = 0xffffffff;
    setButton(this,(Button *)pSStack_88,1);
  }
  else {
    pSVar1 = operator_new(0xfc);
    uStack_8 = 3;
    if (pSVar1 == (Slider2 *)0x0) {
      pSStack_88 = (Slider2 *)0x0;
    }
    else {
      pSStack_88 = (Slider2 *)
                   Slider2::Slider2(pSVar1,param_4,0,param_3 + param_4 * -2,param_4,false);
    }
    uStack_8 = 0xffffffff;
    setSlider(this,pSStack_88);
    pvVar2 = operator_new(0x134);
    uStack_8 = 4;
    if (pvVar2 == (void *)0x0) {
      pSStack_88 = (Slider2 *)0x0;
    }
    else {
      pSStack_88 = (Slider2 *)
                   thunk_FUN_10033370(pvVar2,"gfx/vgui/320_arrowlt.tga",0,0,param_4 + 1,param_4 + 1)
      ;
    }
    uStack_8 = 0xffffffff;
    setButton(this,(Button *)pSStack_88,0);
    pvVar2 = operator_new(0x134);
    uStack_8 = 5;
    if (pvVar2 == (void *)0x0) {
      pSStack_88 = (Slider2 *)0x0;
    }
    else {
      pSStack_88 = (Slider2 *)
                   thunk_FUN_10033370(pvVar2,"gfx/vgui/320_arrowrt.tga",param_3 - param_4,0,
                                      param_4 + 1,param_4 + 1);
    }
    uStack_8 = 0xffffffff;
    setButton(this,(Button *)pSStack_88,1);
  }
  vgui::Panel::setPaintBorderEnabled((Panel *)this,true);
  vgui::Panel::setPaintBackgroundEnabled((Panel *)this,true);
  vgui::Panel::setPaintEnabled((Panel *)this,true);
  setButtonPressedScrollValue(this,0xf);
  validate(this);
  ExceptionList = pvStack_10;
  return this;
}

/* 10003d64  vgui::ScrollBar2::validate  (5 bytes)
 * void validate(void)
 * called by: FUN_10032f40
 */
/* public: virtual void __thiscall vgui::ScrollBar2::validate(void) */

void __thiscall vgui::ScrollBar2::validate(ScrollBar2 *this)

{
  char cVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  ScrollBar2 *pSStack_8;
  
                    /* 0x3d64  463  ?validate@ScrollBar2@vgui@@UAEXXZ */
  pSStack_8 = this;
  if (*(int *)(this + 0xc4) != 0) {
    iStack_c = 0;
    for (iStack_10 = 0; iStack_10 < 2; iStack_10 = iStack_10 + 1) {
      if (*(int *)(pSStack_8 + iStack_10 * 4 + 0xbc) != 0) {
        cVar1 = (**(code **)(**(int **)(pSStack_8 + iStack_10 * 4 + 0xbc) + 0x28))();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(**(int **)(pSStack_8 + 0xc4) + 0x204))();
          if (cVar1 == '\0') {
            iVar2 = (**(code **)(**(int **)(pSStack_8 + iStack_10 * 4 + 0xbc) + 0x18))();
            iStack_c = iStack_c + iVar2;
          }
          else {
            iVar2 = (**(code **)(**(int **)(pSStack_8 + iStack_10 * 4 + 0xbc) + 0x1c))();
            iStack_c = iStack_c + iVar2;
          }
        }
      }
    }
    (**(code **)(**(int **)(pSStack_8 + 0xc4) + 0x224))(iStack_c);
  }
  (**(code **)(*(int *)pSStack_8 + 0xc))(&uStack_14,&uStack_18);
  (**(code **)(*(int *)pSStack_8 + 8))(uStack_14,uStack_18);
  return;
}

