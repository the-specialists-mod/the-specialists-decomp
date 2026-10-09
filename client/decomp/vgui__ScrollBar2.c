/* client.dll - vgui__ScrollBar2 (20 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10014f30  vgui::ScrollBar2::operator=  (571 bytes)
 * ScrollBar2 * operator=(ScrollBar2 * param_1)
 */
/* public: class vgui::ScrollBar2 & __thiscall vgui::ScrollBar2::operator=(class vgui::ScrollBar2
   const &) */

ScrollBar2 * __thiscall vgui::ScrollBar2::operator=(ScrollBar2 *this,ScrollBar2 *param_1)

{
  ScrollBar2 *pSVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x14f30  137  ??4ScrollBar2@vgui@@QAEAAV01@ABV01@@Z
                       0x14f30  138  ??4ScrollBar@vgui@@QAEAAV01@ABV01@@Z */
  iVar2 = (int)param_1 - (int)this;
  iVar3 = 2;
  pSVar1 = this;
  do {
    pSVar1 = pSVar1 + 4;
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0xc;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0x14;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0x1c;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0x24;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  pSVar1 = this + 0x58;
  iVar3 = 4;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  this[0x70] = param_1[0x70];
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  this[0x78] = param_1[0x78];
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  this[0x8c] = param_1[0x8c];
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  this[0x94] = param_1[0x94];
  this[0x95] = param_1[0x95];
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  pSVar1 = this + 0xa0;
  do {
    *pSVar1 = pSVar1[(int)(param_1 + (0x9c - (int)(this + 0x9c)))];
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 + (-4 - (int)(this + 0x9c)) < (ScrollBar2 *)0x4);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pSVar1 = this + 0xac;
  do {
    *pSVar1 = pSVar1[(int)(param_1 + (0xa8 - (int)(this + 0xa8)))];
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 + (-4 - (int)(this + 0xa8)) < (ScrollBar2 *)0x4);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  pSVar1 = this + 0xbc;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  return this;
}

/* 100153f0  vgui::ScrollBar2::ScrollBar2  (1230 bytes)
 * undefined ScrollBar2(int param_1, int param_2, int param_3, int param_4, bool param_5)
 * called by: FUN_1005b490
 */
/* public: __thiscall vgui::ScrollBar2::ScrollBar2(int,int,int,int,bool) */

ScrollBar2 * __thiscall
vgui::ScrollBar2::ScrollBar2
          (ScrollBar2 *this,int param_1,int param_2,int param_3,int param_4,bool param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  Slider2 *pSVar4;
  Button *pBVar5;
  Image *pIVar6;
  Color *pCVar7;
  void *this_00;
  int iVar8;
  undefined4 *extraout_EDX;
  undefined4 *puVar9;
  Color local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  code *local_8;
  undefined4 uStack_4;
  
                    /* 0x153f0  74  ??0ScrollBar2@vgui@@QAE@HHHH_N@Z */
  uStack_4 = 0xffffffff;
  local_8 = FUN_10077802;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel((Panel *)this,param_1,param_2,param_3,param_4);
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  uVar1 = 1;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 * 2;
  } while ((int)uVar1 < 4);
  puVar3 = operator_new(uVar2 << 3);
  puVar9 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    FUN_1006ad84(0);
    puVar9 = extraout_EDX;
  }
  for (iVar8 = (uVar2 & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  *(undefined4 **)(this + 0xcc) = puVar3;
  iVar8 = 0;
  if (0 < *(int *)(this + 200)) {
    do {
      iVar8 = iVar8 + 1;
      *(undefined4 *)(param_1 + -4 + iVar8 * 4) =
           *(undefined4 *)(*(int *)(this + 0xd0) + -4 + iVar8 * 4);
    } while (iVar8 < *(int *)(this + 200));
  }
  FUN_1006ad4c(*(LPVOID *)(this + 0xd0));
  *(int *)(this + 0xd0) = param_1;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  if ((char)param_4 == '\0') {
    pSVar4 = operator_new(0xfc);
    local_8 = (code *)0x3;
    if (pSVar4 == (Slider2 *)0x0) {
      pSVar4 = (Slider2 *)0x0;
    }
    else {
      pSVar4 = (Slider2 *)Slider2::Slider2(pSVar4,param_4,0,param_3 + param_4 * -2,param_4,false);
    }
    local_8 = (code *)0xffffffff;
    setSlider(this,pSVar4);
    pBVar5 = operator_new(0x134);
    local_8 = (code *)0x4;
    if (pBVar5 == (Button *)0x0) {
      pBVar5 = (Button *)0x0;
    }
    else {
      vgui::Button::Button(pBVar5,s_,0,0,param_4 + 1,param_4 + 1);
      pCVar7 = (Color *)vgui::Color::Color(local_1c,0x3c,0x3c,0x3c,0);
      Color::Color((Color *)&stack0xffffffbc,pCVar7);
      vgui::LineBorder::LineBorder((LineBorder *)(pBVar5 + 0xf0));
      *(undefined ***)pBVar5 = &PTR_setPos_1007be7c;
      pIVar6 = (Image *)FUN_1005b8d0(s_gfx_vgui_320_arrowlt_tga_10092ac8);
      if (pIVar6 != (Image *)0x0) {
        iVar8 = *(int *)pIVar6;
        pCVar7 = (Color *)vgui::Color::Color((Color *)&stack0xffffffd8,0x8c,0x8c,0x8c,0);
        Color::Color((Color *)&stack0xffffffbc,pCVar7);
        (**(code **)(iVar8 + 0xc))();
        vgui::Label::setImage((Label *)pBVar5,pIVar6);
        param_4 = uVar1;
      }
      vgui::Panel::setBorder((Panel *)pBVar5,(Border *)(pBVar5 + 0xf0));
    }
    local_8 = (code *)0xffffffff;
    setButton(this,pBVar5,0);
    this_00 = operator_new(0x134);
    local_8 = (code *)0x5;
    if (this_00 == (void *)0x0) {
      pBVar5 = (Button *)0x0;
    }
    else {
      pBVar5 = FUN_100158c0(this_00,s_gfx_vgui_320_arrowrt_tga_10092aac,param_3 - param_4,0,
                            param_4 + 1U,param_4 + 1U);
    }
  }
  else {
    pSVar4 = operator_new(0xfc);
    local_8 = (code *)0x0;
    if (pSVar4 == (Slider2 *)0x0) {
      pSVar4 = (Slider2 *)0x0;
    }
    else {
      pSVar4 = (Slider2 *)
               Slider2::Slider2(pSVar4,0,param_3 + -1,param_3,param_4 + param_3 * -2 + 2,true);
    }
    local_8 = (code *)0xffffffff;
    setSlider(this,pSVar4);
    pBVar5 = operator_new(0x134);
    local_8 = (code *)0x1;
    if (pBVar5 == (Button *)0x0) {
      pBVar5 = (Button *)0x0;
    }
    else {
      vgui::Button::Button(pBVar5,s_,0,0,param_3,param_3);
      vgui::Color::Color((Color *)&stack0xffffffd8,0x3c,0x3c,0x3c,0);
      vgui::LineBorder::LineBorder((LineBorder *)(pBVar5 + 0xf0));
      *(undefined ***)pBVar5 = &PTR_setPos_1007be7c;
      pIVar6 = (Image *)FUN_1005b8d0(s_gfx_vgui_arrowup_tga_10092afc);
      if (pIVar6 != (Image *)0x0) {
        vgui::Color::Color(local_1c,0x8c,0x8c,0x8c,0);
        (**(code **)(*(int *)pIVar6 + 0xc))();
        vgui::Label::setImage((Label *)pBVar5,pIVar6);
      }
      vgui::Panel::setBorder((Panel *)pBVar5,(Border *)(pBVar5 + 0xf0));
      param_4 = uVar1;
    }
    local_8 = (code *)0xffffffff;
    setButton(this,pBVar5,0);
    pBVar5 = operator_new(0x134);
    local_8 = (code *)0x2;
    if (pBVar5 == (Button *)0x0) {
      pBVar5 = (Button *)0x0;
    }
    else {
      vgui::Button::Button(pBVar5,s_,0,param_4 - param_3,param_3,param_3);
      vgui::Color::Color(local_1c,0x3c,0x3c,0x3c,0);
      vgui::LineBorder::LineBorder((LineBorder *)(pBVar5 + 0xf0));
      *(undefined ***)pBVar5 = &PTR_setPos_1007be7c;
      pIVar6 = (Image *)FUN_1005b8d0(s_gfx_vgui_arrowdown_tga_10092ae4);
      if (pIVar6 != (Image *)0x0) {
        vgui::Color::Color((Color *)&stack0xffffffd8,0x8c,0x8c,0x8c,0);
        (**(code **)(*(int *)pIVar6 + 0xc))();
        vgui::Label::setImage((Label *)pBVar5,pIVar6);
      }
      vgui::Panel::setBorder((Panel *)pBVar5,(Border *)(pBVar5 + 0xf0));
    }
  }
  local_8 = (code *)0xffffffff;
  setButton(this,pBVar5,1);
  vgui::Panel::setPaintBorderEnabled((Panel *)this,true);
  vgui::Panel::setPaintBackgroundEnabled((Panel *)this,true);
  vgui::Panel::setPaintEnabled((Panel *)this,true);
  setButtonPressedScrollValue(this,0xf);
  validate(this);
  ExceptionList = pvStack_10;
  return this;
}

/* 100159e0  vgui::ScrollBar2::setSize  (258 bytes)
 * void setSize(int param_1, int param_2)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setSize(int,int) */

void __thiscall vgui::ScrollBar2::setSize(ScrollBar2 *this,int param_1,int param_2)

{
  char cVar1;
  int unaff_EBX;
  int unaff_retaddr;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* 0x159e0  458  ?setSize@ScrollBar2@vgui@@UAEXHH@Z */
  vgui::Panel::setSize((Panel *)this,param_1,param_2);
  if (((*(int *)(this + 0xc4) != 0) && (*(int *)(this + 0xbc) != 0)) && (*(int *)(this + 0xc0) != 0)
     ) {
    piVar4 = &param_2;
    piVar3 = &param_1;
    (**(code **)(*(int *)this + 0xe8))(piVar3,piVar4);
    cVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x204))();
    if (cVar1 != '\0') {
      iVar2 = 0;
      (**(code **)(**(int **)(this + 0xc4) + 0x10))
                (0,unaff_EBX,unaff_EBX,unaff_retaddr + unaff_EBX * -2);
      (**(code **)(**(int **)(this + 0xbc) + 0x10))(0,0,piVar3,piVar3);
      (**(code **)(**(int **)(this + 0xc0) + 0x10))(0,unaff_EBX - iVar2,iVar2,iVar2);
      return;
    }
    iVar2 = 0;
    (**(code **)(**(int **)(this + 0xc4) + 0x10))
              (unaff_retaddr,0,unaff_EBX + unaff_retaddr * -2,unaff_retaddr);
    (**(code **)(**(int **)(this + 0xbc) + 0x10))(0,0,piVar4,piVar4);
    (**(code **)(**(int **)(this + 0xc0) + 0x10))(unaff_retaddr - iVar2,0,iVar2,iVar2);
  }
  return;
}

/* 10015af0  vgui::ScrollBar2::setValue  (22 bytes)
 * void setValue(int param_1)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setValue(int) */

void __thiscall vgui::ScrollBar2::setValue(ScrollBar2 *this,int param_1)

{
                    /* 0x15af0  461  ?setValue@ScrollBar2@vgui@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0xc4) + 0x1fc))(param_1);
  return;
}

/* 10015b10  vgui::ScrollBar2::getValue  (14 bytes)
 * int getValue(void)
 */
/* public: virtual int __thiscall vgui::ScrollBar2::getValue(void) */

int __thiscall vgui::ScrollBar2::getValue(ScrollBar2 *this)

{
  int iVar1;
  
                    /* 0x15b10  291  ?getValue@ScrollBar2@vgui@@UAEHXZ */
                    /* WARNING: Could not recover jumptable at 0x10015b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x200))();
  return iVar1;
}

/* 10015b20  vgui::ScrollBar2::addIntChangeSignal  (273 bytes)
 * void addIntChangeSignal(IntChangeSignal * param_1)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::addIntChangeSignal(class vgui::IntChangeSignal
   *) */

void __thiscall vgui::ScrollBar2::addIntChangeSignal(ScrollBar2 *this,IntChangeSignal *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 unaff_retaddr;
  
                    /* 0x15b20  246
                       ?addIntChangeSignal@ScrollBar2@vgui@@UAEXPAVIntChangeSignal@2@@Z */
  iVar2 = 0;
  iVar4 = *(int *)(this + 200);
  if (0 < iVar4) {
    piVar5 = *(int **)(this + 0xd0);
    do {
      if ((IntChangeSignal *)*piVar5 == param_1) goto LAB_10015c00;
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < iVar4);
  }
  uVar6 = *(uint *)(this + 0xcc);
  if ((int)uVar6 < iVar4 + 1) {
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    for (; (int)uVar6 < iVar4 + 1; uVar6 = uVar6 * 2) {
    }
    puVar1 = operator_new(uVar6 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_1006ad84(0);
    }
    puVar7 = puVar1;
    for (uVar3 = uVar6 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(uint *)(this + 0xcc) = uVar6;
    iVar4 = 0;
    if (0 < *(int *)(this + 200)) {
      do {
        iVar2 = iVar4 + 1;
        puVar1[iVar4] = *(undefined4 *)(*(int *)(this + 0xd0) + -4 + iVar2 * 4);
        iVar4 = iVar2;
      } while (iVar2 < *(int *)(this + 200));
    }
    FUN_1006ad4c(*(LPVOID *)(this + 0xd0));
    *(undefined4 **)(this + 0xd0) = puVar1;
  }
  *(undefined4 *)(*(int *)(this + 0xd0) + *(int *)(this + 200) * 4) = unaff_retaddr;
  *(int *)(this + 200) = *(int *)(this + 200) + 1;
LAB_10015c00:
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_1007c318;
    puVar1[1] = this;
  }
  (**(code **)(**(int **)(this + 0xc4) + 0x208))(puVar1);
  return;
}

/* 10015c50  vgui::ScrollBar2::setRange  (27 bytes)
 * void setRange(int param_1, int param_2)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setRange(int,int) */

void __thiscall vgui::ScrollBar2::setRange(ScrollBar2 *this,int param_1,int param_2)

{
                    /* 0x15c50  452  ?setRange@ScrollBar2@vgui@@UAEXHH@Z */
  (**(code **)(**(int **)(this + 0xc4) + 0x20c))(param_1,param_2);
  return;
}

/* 10015c70  vgui::ScrollBar2::fireIntChangeSignal  (82 bytes)
 * void fireIntChangeSignal(void)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::fireIntChangeSignal(void) */

void __thiscall vgui::ScrollBar2::fireIntChangeSignal(ScrollBar2 *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* 0x15c70  267  ?fireIntChangeSignal@ScrollBar2@vgui@@UAEXXZ */
  iVar3 = 0;
  if (0 < *(int *)(this + 200)) {
    do {
      if ((iVar3 < 0) || (*(int *)(this + 200) <= iVar3)) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = *(undefined4 **)(*(int *)(this + 0xd0) + iVar3 * 4);
      }
      puVar2 = (undefined4 *)*puVar2;
      uVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x200))(this);
      (*(code *)*puVar2)(uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 200));
  }
  return;
}

/* 10015cd0  vgui::ScrollBar2::isVertical  (14 bytes)
 * bool isVertical(void)
 */
/* public: virtual bool __thiscall vgui::ScrollBar2::isVertical(void) */

bool __thiscall vgui::ScrollBar2::isVertical(ScrollBar2 *this)

{
  undefined1 uVar1;
  
                    /* 0x15cd0  331  ?isVertical@ScrollBar2@vgui@@UAE_NXZ */
                    /* WARNING: Could not recover jumptable at 0x10015cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x204))();
  return (bool)uVar1;
}

/* 10015ce0  vgui::ScrollBar2::hasFullRange  (14 bytes)
 * bool hasFullRange(void)
 */
/* public: virtual bool __thiscall vgui::ScrollBar2::hasFullRange(void) */

bool __thiscall vgui::ScrollBar2::hasFullRange(ScrollBar2 *this)

{
  undefined1 uVar1;
  
                    /* 0x15ce0  311  ?hasFullRange@ScrollBar2@vgui@@UAE_NXZ */
                    /* WARNING: Could not recover jumptable at 0x10015ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x220))();
  return (bool)uVar1;
}

/* 10015cf0  vgui::ScrollBar2::setButton  (105 bytes)
 * void setButton(Button * param_1, int param_2)
 * called by: vgui::ScrollBar2::ScrollBar2
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setButton(class vgui::Button *,int) */

void __thiscall vgui::ScrollBar2::setButton(ScrollBar2 *this,Button *param_1,int param_2)

{
  undefined4 *puVar1;
  
                    /* 0x15cf0  412  ?setButton@ScrollBar2@vgui@@UAEXPAVButton@2@H@Z */
  if (*(int *)(this + param_2 * 4 + 0xbc) != 0) {
    (**(code **)(*(int *)this + 0x4c))(*(int *)(this + param_2 * 4 + 0xbc));
  }
  *(Button **)(this + param_2 * 4 + 0xbc) = param_1;
  (**(code **)(*(int *)this + 0x44))(param_1);
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_1007c31c;
    puVar1[1] = this;
    puVar1[2] = param_2;
  }
  (**(code **)(**(int **)(this + param_2 * 4 + 0xbc) + 0x240))(puVar1);
  (**(code **)(*(int *)this + 0x234))();
  return;
}

/* 10015d80  vgui::ScrollBar2::getButton  (14 bytes)
 * Button * getButton(int param_1)
 */
/* public: virtual class vgui::Button * __thiscall vgui::ScrollBar2::getButton(int) */

Button * __thiscall vgui::ScrollBar2::getButton(ScrollBar2 *this,int param_1)

{
                    /* 0x15d80  269  ?getButton@ScrollBar2@vgui@@UAEPAVButton@2@H@Z */
  return *(Button **)(this + param_1 * 4 + 0xbc);
}

/* 10015d90  vgui::ScrollBar2::setSlider  (93 bytes)
 * void setSlider(Slider2 * param_1)
 * called by: vgui::ScrollBar2::ScrollBar2
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setSlider(class vgui::Slider2 *) */

void __thiscall vgui::ScrollBar2::setSlider(ScrollBar2 *this,Slider2 *param_1)

{
  undefined4 *puVar1;
  
                    /* 0x15d90  460  ?setSlider@ScrollBar2@vgui@@UAEXPAVSlider2@2@@Z */
  if (*(int *)(this + 0xc4) != 0) {
    (**(code **)(*(int *)this + 0x4c))(*(int *)(this + 0xc4));
  }
  *(Slider2 **)(this + 0xc4) = param_1;
  (**(code **)(*(int *)this + 0x44))(param_1);
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_1007c318;
    puVar1[1] = this;
  }
  (**(code **)(**(int **)(this + 0xc4) + 0x208))(puVar1);
  (**(code **)(*(int *)this + 0x234))();
  return;
}

/* 10015df0  vgui::ScrollBar2::getSlider  (7 bytes)
 * Slider2 * getSlider(void)
 */
/* public: virtual class vgui::Slider2 * __thiscall vgui::ScrollBar2::getSlider(void) */

Slider2 * __thiscall vgui::ScrollBar2::getSlider(ScrollBar2 *this)

{
                    /* 0x15df0  290  ?getSlider@ScrollBar2@vgui@@UAEPAVSlider2@2@XZ */
  return *(Slider2 **)(this + 0xc4);
}

/* 10015e00  vgui::ScrollBar2::ScrollBar2  (509 bytes)
 * undefined ScrollBar2(ScrollBar2 * param_1)
 */
/* public: __thiscall vgui::ScrollBar2::ScrollBar2(class vgui::ScrollBar2 const &) */

void __thiscall vgui::ScrollBar2::ScrollBar2(ScrollBar2 *this,ScrollBar2 *param_1)

{
                    /* 0x15e00  73  ??0ScrollBar2@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  this[0x70] = param_1[0x70];
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  this[0x78] = param_1[0x78];
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  this[0x8c] = param_1[0x8c];
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  this[0x94] = param_1[0x94];
  this[0x95] = param_1[0x95];
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined ***)(this + 0x9c) = &Color::_vftable_;
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined ***)(this + 0xa8) = &Color::_vftable_;
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  *(undefined ***)this = &Panel::_vftable_;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined ***)this = &_vftable_;
  return;
}

/* 10016000  vgui::ScrollBar2::doButtonPressed  (84 bytes)
 * void doButtonPressed(int param_1)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::doButtonPressed(int) */

void __thiscall vgui::ScrollBar2::doButtonPressed(ScrollBar2 *this,int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x16000  248  ?doButtonPressed@ScrollBar2@vgui@@UAEXH@Z */
  iVar1 = **(int **)(this + 0xc4);
  if (param_1 == 0) {
    iVar2 = (**(code **)(iVar1 + 0x200))();
    (**(code **)(iVar1 + 0x1fc))(iVar2 - *(int *)(this + 0xd4));
    return;
  }
  iVar2 = (**(code **)(iVar1 + 0x200))();
  (**(code **)(iVar1 + 0x1fc))(iVar2 + *(int *)(this + 0xd4));
  return;
}

/* 10016060  vgui::ScrollBar2::setButtonPressedScrollValue  (13 bytes)
 * void setButtonPressedScrollValue(int param_1)
 * called by: vgui::ScrollBar2::ScrollBar2
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setButtonPressedScrollValue(int) */

void __thiscall vgui::ScrollBar2::setButtonPressedScrollValue(ScrollBar2 *this,int param_1)

{
                    /* 0x16060  414  ?setButtonPressedScrollValue@ScrollBar2@vgui@@UAEXH@Z */
  *(int *)(this + 0xd4) = param_1;
  return;
}

/* 10016070  vgui::ScrollBar2::setRangeWindow  (22 bytes)
 * void setRangeWindow(int param_1)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setRangeWindow(int) */

void __thiscall vgui::ScrollBar2::setRangeWindow(ScrollBar2 *this,int param_1)

{
                    /* 0x16070  454  ?setRangeWindow@ScrollBar2@vgui@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0xc4) + 0x214))(param_1);
  return;
}

/* 10016090  vgui::ScrollBar2::setRangeWindowEnabled  (22 bytes)
 * void setRangeWindowEnabled(bool param_1)
 */
/* public: virtual void __thiscall vgui::ScrollBar2::setRangeWindowEnabled(bool) */

void __thiscall vgui::ScrollBar2::setRangeWindowEnabled(ScrollBar2 *this,bool param_1)

{
  undefined3 in_stack_00000005;
  
                    /* 0x16090  456  ?setRangeWindowEnabled@ScrollBar2@vgui@@UAEX_N@Z */
  (**(code **)(**(int **)(this + 0xc4) + 0x218))(_param_1);
  return;
}

/* 10016330  vgui::ScrollBar2::validate  (144 bytes)
 * void validate(void)
 * called by: vgui::ScrollBar2::ScrollBar2
 */
/* public: virtual void __thiscall vgui::ScrollBar2::validate(void) */

void __thiscall vgui::ScrollBar2::validate(ScrollBar2 *this)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int iVar3;
  ScrollBar2 *pSVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
                    /* 0x16330  463  ?validate@ScrollBar2@vgui@@UAEXXZ */
  if (*(int *)(this + 0xc4) != 0) {
    iVar5 = 0;
    pSVar4 = this + 0xbc;
    iVar3 = 2;
    do {
      if (*(int **)pSVar4 != (int *)0x0) {
        cVar1 = (**(code **)(**(int **)pSVar4 + 0x28))();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x204))();
          if (cVar1 == '\0') {
            iVar2 = (**(code **)(**(int **)pSVar4 + 0x18))();
          }
          else {
            iVar2 = (**(code **)(**(int **)pSVar4 + 0x1c))();
          }
          iVar5 = iVar5 + iVar2;
        }
      }
      pSVar4 = pSVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    (**(code **)(**(int **)(this + 0xc4) + 0x224))(iVar5);
  }
  puVar6 = local_8;
  (**(code **)(*(int *)this + 0xc))(local_4,puVar6);
  (**(code **)(*(int *)this + 8))(unaff_EBX,puVar6);
  return;
}

