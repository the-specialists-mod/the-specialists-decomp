/* client.dll - vgui__Slider2 (22 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100013f2  vgui::Slider2::paintBackground  (5 bytes)
 * void paintBackground(void)
 */
/* protected: virtual void __thiscall vgui::Slider2::paintBackground(void) */

void __thiscall vgui::Slider2::paintBackground(Slider2 *this)

{
  undefined4 uStack_10;
  int iStack_c;
  Slider2 *pSStack_8;
  
                    /* 0x13f2  333  ?paintBackground@Slider2@vgui@@MAEXXZ */
  pSStack_8 = this;
  (**(code **)(*(int *)this + 0xe8))(&iStack_c,&uStack_10);
  if (pSStack_8[0xbc] == (Slider2)0x0) {
    (**(code **)(*(int *)pSStack_8 + 0x17c))(8);
    (**(code **)(*(int *)pSStack_8 + 0x180))(0,0,iStack_c,uStack_10);
    (**(code **)(*(int *)pSStack_8 + 0x17c))(1);
    (**(code **)(*(int *)pSStack_8 + 0x184))(0,0,iStack_c,uStack_10);
    (**(code **)(*(int *)pSStack_8 + 0x17c))(4);
    (**(code **)(*(int *)pSStack_8 + 0x180))
              (*(int *)(pSStack_8 + 0xc0),0,*(int *)(pSStack_8 + 0xc4),uStack_10);
    (**(code **)(*(int *)pSStack_8 + 0x17c))(1);
    (**(code **)(*(int *)pSStack_8 + 0x184))
              (*(int *)(pSStack_8 + 0xc0),0,*(int *)(pSStack_8 + 0xc4),uStack_10);
  }
  else {
    (**(code **)(*(int *)pSStack_8 + 0x178))(0x28,0x28,0x28,0);
    (**(code **)(*(int *)pSStack_8 + 0x180))(0,0,iStack_c,uStack_10);
    (**(code **)(*(int *)pSStack_8 + 0x178))(0,0,0,0);
    (**(code **)(*(int *)pSStack_8 + 0x180))
              (0,*(int *)(pSStack_8 + 0xc0),iStack_c,*(int *)(pSStack_8 + 0xc4));
    (**(code **)(*(int *)pSStack_8 + 0x178))(0x3c,0x3c,0x3c,0);
    (**(code **)(*(int *)pSStack_8 + 0x180))
              (0,*(int *)(pSStack_8 + 0xc0),iStack_c,*(int *)(pSStack_8 + 0xc0) + 1);
    (**(code **)(*(int *)pSStack_8 + 0x180))
              (0,*(int *)(pSStack_8 + 0xc4),iStack_c,*(int *)(pSStack_8 + 0xc4) + 1);
    (**(code **)(*(int *)pSStack_8 + 0x180))
              (0,*(int *)(pSStack_8 + 0xc0) + 1,1,*(int *)(pSStack_8 + 0xc4));
    (**(code **)(*(int *)pSStack_8 + 0x180))
              (iStack_c + -1,*(int *)(pSStack_8 + 0xc0) + 1,iStack_c,*(int *)(pSStack_8 + 0xc4));
  }
  return;
}

/* 1000158c  vgui::Slider2::hasFullRange  (5 bytes)
 * bool hasFullRange(void)
 */
/* public: virtual bool __thiscall vgui::Slider2::hasFullRange(void) */

bool __thiscall vgui::Slider2::hasFullRange(Slider2 *this)

{
  float fStack_20;
  int iStack_10;
  int iStack_c;
  Slider2 *pSStack_8;
  
                    /* 0x158c  312  ?hasFullRange@Slider2@vgui@@UAE_NXZ */
  pSStack_8 = this;
  (**(code **)(*(int *)this + 0xe8))(&iStack_c,&iStack_10);
  fStack_20 = (float)*(int *)(pSStack_8 + 0xf0);
  if (fStack_20 < 0.0) {
    fStack_20 = 0.0;
  }
  if (pSStack_8[0xf4] == (Slider2)0x0) {
    fStack_20 = (float)(*(int *)(pSStack_8 + 0xe8) - *(int *)(pSStack_8 + 0xe4));
  }
  if (0.0 < fStack_20) {
    if (pSStack_8[0xbc] == (Slider2)0x0) {
      if (fStack_20 <= (float)*(int *)(pSStack_8 + 0xf8) + (float)iStack_c) {
        return true;
      }
    }
    else if (fStack_20 <= (float)*(int *)(pSStack_8 + 0xf8) + (float)iStack_10) {
      return true;
    }
  }
  return false;
}

/* 10001690  vgui::Slider2::privateCursorMoved  (5 bytes)
 * void privateCursorMoved(int param_1, int param_2, Panel * param_3)
 */
/* public: virtual void __thiscall vgui::Slider2::privateCursorMoved(int,int,class vgui::Panel *) */

void __thiscall
vgui::Slider2::privateCursorMoved(Slider2 *this,int param_1,int param_2,Panel *param_3)

{
  int *piVar1;
  int iStack_10;
  int iStack_c;
  Slider2 *pSStack_8;
  
                    /* 0x1690  335  ?privateCursorMoved@Slider2@vgui@@UAEXHHPAVPanel@2@@Z */
  if (this[0xbd] != (Slider2)0x0) {
    pSStack_8 = this;
    piVar1 = (int *)(**(code **)(*(int *)this + 0x14c))(&param_1,&param_2);
    (**(code **)(*piVar1 + 0x34))();
    (**(code **)(*(int *)pSStack_8 + 0x8c))(&param_1,&param_2);
    (**(code **)(*(int *)pSStack_8 + 0xe8))(&iStack_c,&iStack_10);
    if (pSStack_8[0xbc] == (Slider2)0x0) {
      *(int *)(pSStack_8 + 0xc0) =
           (param_1 - *(int *)(pSStack_8 + 0xd0)) + *(int *)(pSStack_8 + 200);
      *(int *)(pSStack_8 + 0xc4) =
           (param_1 - *(int *)(pSStack_8 + 0xd0)) + *(int *)(pSStack_8 + 0xcc);
      if (iStack_c < *(int *)(pSStack_8 + 0xc4)) {
        *(int *)(pSStack_8 + 0xc0) =
             iStack_c - (*(int *)(pSStack_8 + 0xc4) - *(int *)(pSStack_8 + 0xc0));
        *(int *)(pSStack_8 + 0xc4) = iStack_c;
      }
      if (*(int *)(pSStack_8 + 0xc0) < 0) {
        *(int *)(pSStack_8 + 0xc4) = *(int *)(pSStack_8 + 0xc4) - *(int *)(pSStack_8 + 0xc0);
        *(int *)(pSStack_8 + 0xc0) = 0;
      }
    }
    else {
      *(int *)(pSStack_8 + 0xc0) =
           (param_2 - *(int *)(pSStack_8 + 0xd4)) + *(int *)(pSStack_8 + 200);
      *(int *)(pSStack_8 + 0xc4) =
           (param_2 - *(int *)(pSStack_8 + 0xd4)) + *(int *)(pSStack_8 + 0xcc);
      if (iStack_10 < *(int *)(pSStack_8 + 0xc4)) {
        *(int *)(pSStack_8 + 0xc0) =
             iStack_10 - (*(int *)(pSStack_8 + 0xc4) - *(int *)(pSStack_8 + 0xc0));
        *(int *)(pSStack_8 + 0xc4) = iStack_10;
      }
      if (*(int *)(pSStack_8 + 0xc0) < 0) {
        *(int *)(pSStack_8 + 0xc4) = *(int *)(pSStack_8 + 0xc4) - *(int *)(pSStack_8 + 0xc0);
        *(int *)(pSStack_8 + 0xc0) = 0;
      }
    }
    (**(code **)(*(int *)pSStack_8 + 0x22c))();
    (**(code **)(*(int *)pSStack_8 + 0x30))();
    (**(code **)(*(int *)pSStack_8 + 0x23c))();
  }
  return;
}

/* 100017a3  vgui::Slider2::recomputeNobPosFromValue  (5 bytes)
 * void recomputeNobPosFromValue(void)
 * called by: FUN_10034600
 */
/* private: virtual void __thiscall vgui::Slider2::recomputeNobPosFromValue(void) */

void __thiscall vgui::Slider2::recomputeNobPosFromValue(Slider2 *this)

{
  longlong lVar1;
  float fStack_28;
  int iStack_10;
  int iStack_c;
  Slider2 *pSStack_8;
  
                    /* 0x17a3  356  ?recomputeNobPosFromValue@Slider2@vgui@@EAEXXZ */
  pSStack_8 = this;
  (**(code **)(*(int *)this + 0xe8))(&iStack_c,&iStack_10);
  fStack_28 = (float)*(int *)(pSStack_8 + 0xf0);
  if (fStack_28 < 0.0) {
    fStack_28 = 0.0;
  }
  if (pSStack_8[0xf4] == (Slider2)0x0) {
    fStack_28 = (float)(*(int *)(pSStack_8 + 0xe8) - *(int *)(pSStack_8 + 0xe4));
  }
  if (0.0 < fStack_28) {
    if (pSStack_8[0xbc] == (Slider2)0x0) {
      lVar1 = __ftol();
      *(int *)(pSStack_8 + 0xc0) = (int)lVar1;
      lVar1 = __ftol();
      *(int *)(pSStack_8 + 0xc4) = (int)lVar1;
      if (iStack_c < *(int *)(pSStack_8 + 0xc4)) {
        lVar1 = __ftol();
        *(int *)(pSStack_8 + 0xc0) = iStack_c - (int)lVar1;
        *(int *)(pSStack_8 + 0xc4) = iStack_c;
      }
    }
    else {
      lVar1 = __ftol();
      *(int *)(pSStack_8 + 0xc0) = (int)lVar1;
      lVar1 = __ftol();
      *(int *)(pSStack_8 + 0xc4) = (int)lVar1;
      if (iStack_10 < *(int *)(pSStack_8 + 0xc4)) {
        lVar1 = __ftol();
        *(int *)(pSStack_8 + 0xc0) = iStack_10 - (int)lVar1;
        *(int *)(pSStack_8 + 0xc4) = iStack_10;
      }
    }
  }
  (**(code **)(*(int *)pSStack_8 + 0x30))();
  return;
}

/* 10001acd  vgui::Slider2::setRange  (5 bytes)
 * void setRange(int param_1, int param_2)
 */
/* public: virtual void __thiscall vgui::Slider2::setRange(int,int) */

void __thiscall vgui::Slider2::setRange(Slider2 *this,int param_1,int param_2)

{
                    /* 0x1acd  453  ?setRange@Slider2@vgui@@UAEXHH@Z */
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  *(int *)(this + 0xe4) = param_1;
  *(int *)(this + 0xe8) = param_2;
  return;
}

/* 10002090  vgui::Slider2::setSize  (5 bytes)
 * void setSize(int param_1, int param_2)
 */
/* public: virtual void __thiscall vgui::Slider2::setSize(int,int) */

void __thiscall vgui::Slider2::setSize(Slider2 *this,int param_1,int param_2)

{
                    /* 0x2090  459  ?setSize@Slider2@vgui@@UAEXHH@Z */
  vgui::Panel::setSize((Panel *)this,param_1,param_2);
  (**(code **)(*(int *)this + 0x228))();
  return;
}

/* 10002126  vgui::Slider2::setRangeWindow  (5 bytes)
 * void setRangeWindow(int param_1)
 */
/* public: virtual void __thiscall vgui::Slider2::setRangeWindow(int) */

void __thiscall vgui::Slider2::setRangeWindow(Slider2 *this,int param_1)

{
                    /* 0x2126  455  ?setRangeWindow@Slider2@vgui@@UAEXH@Z */
  *(int *)(this + 0xf0) = param_1;
  return;
}

/* 10002829  vgui::Slider2::setRangeWindowEnabled  (5 bytes)
 * void setRangeWindowEnabled(bool param_1)
 */
/* public: virtual void __thiscall vgui::Slider2::setRangeWindowEnabled(bool) */

void __thiscall vgui::Slider2::setRangeWindowEnabled(Slider2 *this,bool param_1)

{
                    /* 0x2829  457  ?setRangeWindowEnabled@Slider2@vgui@@UAEX_N@Z */
  this[0xf4] = (Slider2)param_1;
  return;
}

/* 10002b30  vgui::Slider2::Slider2  (5 bytes)
 * undefined Slider2(int param_1, int param_2, int param_3, int param_4, bool param_5)
 * called by: FUN_10032f40, FUN_1009fc20
 */
/* public: __thiscall vgui::Slider2::Slider2(int,int,int,int,bool) */

Slider2 * __thiscall
vgui::Slider2::Slider2(Slider2 *this,int param_1,int param_2,int param_3,int param_4,bool param_5)

{
  void *this_00;
  InputSignal *pIStack_60;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
                    /* 0x2b30  78  ??0Slider2@vgui@@QAE@HHHH_N@Z */
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_100e568b;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  vgui::Panel::Panel((Panel *)this,param_1,param_2,param_3,param_4);
  Dar<vgui::IntChangeSignal*>::Dar<vgui::IntChangeSignal*>
            ((Dar<vgui::IntChangeSignal*> *)(this + 0xd8));
  *(undefined ***)this = &_vftable_;
  this[0xbc] = (Slider2)param_5;
  this[0xbd] = (Slider2)0x0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 299;
  *(undefined4 *)(this + 0xf0) = 0;
  this[0xf4] = (Slider2)0x0;
  *(undefined4 *)(this + 0xf8) = 0;
  recomputeNobPosFromValue(this);
  this_00 = operator_new(8);
  uStack_8 = 0;
  if (this_00 == (void *)0x0) {
    pIStack_60 = (InputSignal *)0x0;
  }
  else {
    pIStack_60 = thunk_FUN_10034760(this_00,this);
  }
  uStack_8 = 0xffffffff;
  vgui::Panel::addInputSignal((Panel *)this,pIStack_60);
  ExceptionList = pvStack_10;
  return this;
}

/* 10002b35  vgui::Slider2::Slider2  (5 bytes)
 * undefined Slider2(Slider2 * param_1)
 */
/* public: __thiscall vgui::Slider2::Slider2(class vgui::Slider2 const &) */

Slider2 * __thiscall vgui::Slider2::Slider2(Slider2 *this,Slider2 *param_1)

{
                    /* 0x2b35  77  ??0Slider2@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  this[0xf4] = param_1[0xf4];
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10002b71  vgui::Slider2::getRange  (5 bytes)
 * void getRange(int * param_1, int * param_2)
 */
/* public: virtual void __thiscall vgui::Slider2::getRange(int &,int &) */

void __thiscall vgui::Slider2::getRange(Slider2 *this,int *param_1,int *param_2)

{
                    /* 0x2b71  289  ?getRange@Slider2@vgui@@UAEXAAH0@Z */
  *param_1 = *(int *)(this + 0xe4);
  *param_2 = *(int *)(this + 0xe8);
  return;
}

/* 10002b9e  vgui::Slider2::getNobPos  (5 bytes)
 * void getNobPos(int * param_1, int * param_2)
 */
/* public: virtual void __thiscall vgui::Slider2::getNobPos(int &,int &) */

void __thiscall vgui::Slider2::getNobPos(Slider2 *this,int *param_1,int *param_2)

{
                    /* 0x2b9e  288  ?getNobPos@Slider2@vgui@@UAEXAAH0@Z */
  *param_1 = *(int *)(this + 0xc0);
  *param_2 = *(int *)(this + 0xc4);
  return;
}

/* 10002ed2  vgui::Slider2::setValue  (5 bytes)
 * void setValue(int param_1)
 */
/* public: virtual void __thiscall vgui::Slider2::setValue(int) */

void __thiscall vgui::Slider2::setValue(Slider2 *this,int param_1)

{
  int iVar1;
  
                    /* 0x2ed2  462  ?setValue@Slider2@vgui@@UAEXH@Z */
  iVar1 = *(int *)(this + 0xec);
  if (param_1 < *(int *)(this + 0xe4)) {
    param_1 = *(int *)(this + 0xe4);
  }
  if (*(int *)(this + 0xe8) < param_1) {
    param_1 = *(int *)(this + 0xe8);
  }
  *(int *)(this + 0xec) = param_1;
  (**(code **)(*(int *)this + 0x228))();
  if (*(int *)(this + 0xec) != iVar1) {
    (**(code **)(*(int *)this + 0x23c))();
  }
  return;
}

/* 10002fe0  vgui::Slider2::addIntChangeSignal  (5 bytes)
 * void addIntChangeSignal(IntChangeSignal * param_1)
 */
/* public: virtual void __thiscall vgui::Slider2::addIntChangeSignal(class vgui::IntChangeSignal *)
    */

void __thiscall vgui::Slider2::addIntChangeSignal(Slider2 *this,IntChangeSignal *param_1)

{
                    /* 0x2fe0  247  ?addIntChangeSignal@Slider2@vgui@@UAEXPAVIntChangeSignal@2@@Z */
  Dar<vgui::IntChangeSignal*>::putElement((Dar<vgui::IntChangeSignal*> *)(this + 0xd8),param_1);
  return;
}

/* 10002ffe  vgui::Slider2::isVertical  (5 bytes)
 * bool isVertical(void)
 */
/* public: virtual bool __thiscall vgui::Slider2::isVertical(void) */

bool __thiscall vgui::Slider2::isVertical(Slider2 *this)

{
                    /* 0x2ffe  332  ?isVertical@Slider2@vgui@@UAE_NXZ */
  return (bool)this[0xbc];
}

/* 100030a8  vgui::Slider2::privateMousePressed  (5 bytes)
 * void privateMousePressed(MouseCode param_1, Panel * param_2)
 */
/* public: virtual void __thiscall vgui::Slider2::privateMousePressed(enum vgui::MouseCode,class
   vgui::Panel *) */

void __thiscall vgui::Slider2::privateMousePressed(Slider2 *this,MouseCode param_1,Panel *param_2)

{
  int *piVar1;
  int iStack_10;
  int iStack_c;
  Slider2 *pSStack_8;
  
                    /* 0x30a8  336
                       ?privateMousePressed@Slider2@vgui@@UAEXW4MouseCode@2@PAVPanel@2@@Z */
  pSStack_8 = this;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14c))(&iStack_c,&iStack_10);
  (**(code **)(*piVar1 + 0x34))();
  (**(code **)(*(int *)pSStack_8 + 0x8c))(&iStack_c,&iStack_10);
  if (pSStack_8[0xbc] == (Slider2)0x0) {
    if ((*(int *)(pSStack_8 + 0xc0) <= iStack_c) && (iStack_c < *(int *)(pSStack_8 + 0xc4))) {
      pSStack_8[0xbd] = (Slider2)0x1;
      piVar1 = (int *)(**(code **)(*(int *)pSStack_8 + 0x14c))(pSStack_8);
      (**(code **)(*piVar1 + 0x38))();
      *(int *)(pSStack_8 + 200) = *(int *)(pSStack_8 + 0xc0);
      *(int *)(pSStack_8 + 0xcc) = *(int *)(pSStack_8 + 0xc4);
      *(int *)(pSStack_8 + 0xd0) = iStack_c;
      *(int *)(pSStack_8 + 0xd4) = iStack_10;
    }
  }
  else if ((*(int *)(pSStack_8 + 0xc0) <= iStack_10) && (iStack_10 < *(int *)(pSStack_8 + 0xc4))) {
    pSStack_8[0xbd] = (Slider2)0x1;
    piVar1 = (int *)(**(code **)(*(int *)pSStack_8 + 0x14c))(pSStack_8);
    (**(code **)(*piVar1 + 0x38))();
    *(int *)(pSStack_8 + 200) = *(int *)(pSStack_8 + 0xc0);
    *(int *)(pSStack_8 + 0xcc) = *(int *)(pSStack_8 + 0xc4);
    *(int *)(pSStack_8 + 0xd0) = iStack_c;
    *(int *)(pSStack_8 + 0xd4) = iStack_10;
  }
  return;
}

/* 100031a2  vgui::Slider2::fireIntChangeSignal  (5 bytes)
 * void fireIntChangeSignal(void)
 */
/* protected: virtual void __thiscall vgui::Slider2::fireIntChangeSignal(void) */

void __thiscall vgui::Slider2::fireIntChangeSignal(Slider2 *this)

{
  int iVar1;
  undefined4 uVar2;
  IntChangeSignal *pIVar3;
  int iStack_c;
  
                    /* 0x31a2  268  ?fireIntChangeSignal@Slider2@vgui@@MAEXXZ */
  iStack_c = 0;
  while( true ) {
    iVar1 = Dar<vgui::IntChangeSignal*>::getCount((Dar<vgui::IntChangeSignal*> *)(this + 0xd8));
    if (iVar1 <= iStack_c) break;
    uVar2 = (**(code **)(*(int *)this + 0x200))(this);
    pIVar3 = Dar<vgui::IntChangeSignal*>::operator[]
                       ((Dar<vgui::IntChangeSignal*> *)(this + 0xd8),iStack_c);
    (*(code *)**(undefined4 **)pIVar3)(uVar2);
    iStack_c = iStack_c + 1;
  }
  return;
}

/* 100036f2  vgui::Slider2::setButtonOffset  (5 bytes)
 * void setButtonOffset(int param_1)
 */
/* public: virtual void __thiscall vgui::Slider2::setButtonOffset(int) */

void __thiscall vgui::Slider2::setButtonOffset(Slider2 *this,int param_1)

{
                    /* 0x36f2  413  ?setButtonOffset@Slider2@vgui@@UAEXH@Z */
  *(int *)(this + 0xf8) = param_1;
  return;
}

/* 10003837  vgui::Slider2::getValue  (5 bytes)
 * int getValue(void)
 */
/* public: virtual int __thiscall vgui::Slider2::getValue(void) */

int __thiscall vgui::Slider2::getValue(Slider2 *this)

{
                    /* 0x3837  292  ?getValue@Slider2@vgui@@UAEHXZ */
  return *(int *)(this + 0xec);
}

/* 10003963  vgui::Slider2::operator=  (5 bytes)
 * Slider2 * operator=(Slider2 * param_1)
 */
/* public: class vgui::Slider2 & __thiscall vgui::Slider2::operator=(class vgui::Slider2 const &) */

Slider2 * __thiscall vgui::Slider2::operator=(Slider2 *this,Slider2 *param_1)

{
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
                    /* 0x3963  140  ??4Slider2@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 0xc0) = *(undefined4 *)(param_1 + uStack_c * 4 + 0xc0);
  }
  for (uStack_10 = 0; uStack_10 < 2; uStack_10 = uStack_10 + 1) {
    *(undefined4 *)(this + uStack_10 * 4 + 200) = *(undefined4 *)(param_1 + uStack_10 * 4 + 200);
  }
  for (uStack_14 = 0; uStack_14 < 2; uStack_14 = uStack_14 + 1) {
    *(undefined4 *)(this + uStack_14 * 4 + 0xd0) = *(undefined4 *)(param_1 + uStack_14 * 4 + 0xd0);
  }
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    *(undefined4 *)(this + uStack_18 * 4 + 0xe4) = *(undefined4 *)(param_1 + uStack_18 * 4 + 0xe4);
  }
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  this[0xf4] = param_1[0xf4];
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  return this;
}

/* 10003f94  vgui::Slider2::privateMouseReleased  (5 bytes)
 * void privateMouseReleased(MouseCode param_1, Panel * param_2)
 */
/* public: virtual void __thiscall vgui::Slider2::privateMouseReleased(enum vgui::MouseCode,class
   vgui::Panel *) */

void __thiscall vgui::Slider2::privateMouseReleased(Slider2 *this,MouseCode param_1,Panel *param_2)

{
  int *piVar1;
  
                    /* 0x3f94  337
                       ?privateMouseReleased@Slider2@vgui@@UAEXW4MouseCode@2@PAVPanel@2@@Z */
  this[0xbd] = (Slider2)0x0;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14c))(0);
  (**(code **)(*piVar1 + 0x38))();
  return;
}

/* 10004197  vgui::Slider2::recomputeValueFromNobPos  (5 bytes)
 * void recomputeValueFromNobPos(void)
 */
/* private: virtual void __thiscall vgui::Slider2::recomputeValueFromNobPos(void) */

void __thiscall vgui::Slider2::recomputeValueFromNobPos(Slider2 *this)

{
  longlong lVar1;
  undefined4 uStack_74;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  Slider2 *pSStack_8;
  
                    /* 0x4197  357  ?recomputeValueFromNobPos@Slider2@vgui@@EAEXXZ */
  pSStack_8 = this;
  (**(code **)(*(int *)this + 0xe8))(auStack_c,auStack_10);
  lVar1 = __ftol();
  *(int *)(pSStack_8 + 0xec) = (int)lVar1;
  if (*(int *)(pSStack_8 + 0xec) < *(int *)(pSStack_8 + 0xe8)) {
    uStack_74 = *(undefined4 *)(pSStack_8 + 0xec);
  }
  else {
    uStack_74 = *(undefined4 *)(pSStack_8 + 0xe8);
  }
  *(undefined4 *)(pSStack_8 + 0xec) = uStack_74;
  return;
}

