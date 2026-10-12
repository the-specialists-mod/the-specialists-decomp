/* client.dll - vgui__Dar_vgui__FrameSignal__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001c1c  vgui::Dar<vgui::FrameSignal*>::putElement  (5 bytes)
 * void putElement(FrameSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::FrameSignal *>::putElement(class vgui::FrameSignal
   *) */

void __thiscall
vgui::Dar<vgui::FrameSignal*>::putElement(Dar<vgui::FrameSignal*> *this,FrameSignal *param_1)

{
  bool bVar1;
  
                    /* 0x1c1c  348
                       ?putElement@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10001ee2  vgui::Dar<vgui::FrameSignal*>::addElement  (5 bytes)
 * void addElement(FrameSignal * param_1)
 * called by: FUN_10010b10, FUN_10010b60
 */
/* public: void __thiscall vgui::Dar<class vgui::FrameSignal *>::addElement(class vgui::FrameSignal
   *) */

void __thiscall
vgui::Dar<vgui::FrameSignal*>::addElement(Dar<vgui::FrameSignal*> *this,FrameSignal *param_1)

{
                    /* 0x1ee2  238
                       ?addElement@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(FrameSignal **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 100024a0  vgui::Dar<vgui::FrameSignal*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_10010d10
 */
/* public: void __thiscall vgui::Dar<class vgui::FrameSignal *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::FrameSignal*>::removeElementAt(Dar<vgui::FrameSignal*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x24a0  404  ?removeElementAt@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 1000274d  vgui::Dar<vgui::FrameSignal*>::hasElement  (5 bytes)
 * bool hasElement(FrameSignal * param_1)
 * called by: FUN_10010b10
 */
/* public: bool __thiscall vgui::Dar<class vgui::FrameSignal *>::hasElement(class vgui::FrameSignal
   *) */

bool __thiscall
vgui::Dar<vgui::FrameSignal*>::hasElement(Dar<vgui::FrameSignal*> *this,FrameSignal *param_1)

{
  int iStack_c;
  
                    /* 0x274d  303
                       ?hasElement@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAE_NPAVFrameSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(FrameSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 100029b4  vgui::Dar<vgui::FrameSignal*>::operator=  (5 bytes)
 * Dar<class_vgui::FrameSignal*> * operator=(Dar<class_vgui::FrameSignal*> * param_1)
 */
/* public: class vgui::Dar<class vgui::FrameSignal *> & __thiscall vgui::Dar<class vgui::FrameSignal
   *>::operator=(class vgui::Dar<class vgui::FrameSignal *> const &) */

Dar<class_vgui::FrameSignal*> * __thiscall
vgui::Dar<vgui::FrameSignal*>::operator=
          (Dar<vgui::FrameSignal*> *this,Dar<class_vgui::FrameSignal*> *param_1)

{
                    /* 0x29b4  99  ??4?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::FrameSignal*> *)this;
}

/* 100029d2  vgui::Dar<vgui::FrameSignal*>::removeElement  (5 bytes)
 * void removeElement(FrameSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::FrameSignal *>::removeElement(class
   vgui::FrameSignal *) */

void __thiscall
vgui::Dar<vgui::FrameSignal*>::removeElement(Dar<vgui::FrameSignal*> *this,FrameSignal *param_1)

{
  int iStack_c;
  
                    /* 0x29d2  386
                       ?removeElement@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(FrameSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 10002a04  vgui::Dar<vgui::FrameSignal*>::setElementAt  (5 bytes)
 * void setElementAt(FrameSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::FrameSignal *>::setElementAt(class
   vgui::FrameSignal *,int) */

void __thiscall
vgui::Dar<vgui::FrameSignal*>::setElementAt
          (Dar<vgui::FrameSignal*> *this,FrameSignal *param_1,int param_2)

{
                    /* 0x2a04  443
                       ?setElementAt@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(FrameSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10002a4f  vgui::Dar<vgui::FrameSignal*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_10010820, FUN_10010870, FUN_10010a50
 */
/* public: void __thiscall vgui::Dar<class vgui::FrameSignal *>::ensureCapacity(int) */

void __thiscall
vgui::Dar<vgui::FrameSignal*>::ensureCapacity(Dar<vgui::FrameSignal*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x2a4f  259  ?ensureCapacity@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXH@Z */
  if (*(int *)(this + 4) < param_1) {
    iStack_c = *(int *)(this + 4);
    if (iStack_c == 0) {
      iStack_c = 1;
    }
    for (; iStack_c < param_1; iStack_c = iStack_c << 1) {
    }
    _Dst = operator_new(iStack_c << 2);
    if (_Dst == (void *)0x0) {
      FUN_100bbc60(0);
    }
    _memset(_Dst,0,iStack_c << 2);
    *(int *)(this + 4) = iStack_c;
    for (iStack_14 = 0; iStack_14 < *(int *)this; iStack_14 = iStack_14 + 1) {
      *(undefined4 *)((int)_Dst + iStack_14 * 4) =
           *(undefined4 *)(*(int *)(this + 8) + iStack_14 * 4);
    }
    FUN_100bbb10(*(void **)(this + 8));
    *(void **)(this + 8) = _Dst;
  }
  return;
}

/* 100031b1  vgui::Dar<vgui::FrameSignal*>::Dar<vgui::FrameSignal*>  (5 bytes)
 * undefined Dar<vgui::FrameSignal*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::FrameSignal *>::Dar<class vgui::FrameSignal *>(void) */

Dar<vgui::FrameSignal*> * __thiscall
vgui::Dar<vgui::FrameSignal*>::Dar<vgui::FrameSignal*>(Dar<vgui::FrameSignal*> *this)

{
                    /* 0x31b1  22  ??0?$Dar@PAVFrameSignal@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 100032ab  vgui::Dar<vgui::FrameSignal*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::FrameSignal *>::setCount(int) */

void __thiscall vgui::Dar<vgui::FrameSignal*>::setCount(Dar<vgui::FrameSignal*> *this,int param_1)

{
                    /* 0x32ab  425  ?setCount@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 100037a6  vgui::Dar<vgui::FrameSignal*>::insertElementAt  (5 bytes)
 * void insertElementAt(FrameSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::FrameSignal *>::insertElementAt(class
   vgui::FrameSignal *,int) */

void __thiscall
vgui::Dar<vgui::FrameSignal*>::insertElementAt
          (Dar<vgui::FrameSignal*> *this,FrameSignal *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x37a6  323
                       ?insertElementAt@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@H@Z
                        */
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      addElement(this,param_1);
    }
    else {
      addElement(this,param_1);
      iStack_c = *(int *)this;
      while (iStack_c = iStack_c + -1, param_2 < iStack_c) {
        *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
             *(undefined4 *)(*(int *)(this + 8) + -4 + iStack_c * 4);
      }
      *(FrameSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 100037c4  vgui::Dar<vgui::FrameSignal*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::FrameSignal *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::FrameSignal*>::removeAll(Dar<vgui::FrameSignal*> *this)

{
                    /* 0x37c4  368  ?removeAll@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 100038c8  vgui::Dar<vgui::FrameSignal*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::FrameSignal *>::getCount(void) */

int __thiscall vgui::Dar<vgui::FrameSignal*>::getCount(Dar<vgui::FrameSignal*> *this)

{
                    /* 0x38c8  280  ?getCount@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10003cb0  vgui::Dar<vgui::FrameSignal*>::operator[]  (5 bytes)
 * FrameSignal * operator[](int param_1)
 */
/* public: class vgui::FrameSignal * __thiscall vgui::Dar<class vgui::FrameSignal
   *>::operator[](int) */

FrameSignal * __thiscall
vgui::Dar<vgui::FrameSignal*>::operator[](Dar<vgui::FrameSignal*> *this,int param_1)

{
  FrameSignal *pFVar1;
  
                    /* 0x3cb0  161  ??A?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEPAVFrameSignal@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pFVar1 = (FrameSignal *)0x0;
  }
  else {
    pFVar1 = *(FrameSignal **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pFVar1;
}

/* 10004165  vgui::Dar<vgui::FrameSignal*>::Dar<vgui::FrameSignal*>  (5 bytes)
 * undefined Dar<vgui::FrameSignal*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::FrameSignal *>::Dar<class vgui::FrameSignal *>(int) */

Dar<vgui::FrameSignal*> * __thiscall
vgui::Dar<vgui::FrameSignal*>::Dar<vgui::FrameSignal*>(Dar<vgui::FrameSignal*> *this,int param_1)

{
                    /* 0x4165  21  ??0?$Dar@PAVFrameSignal@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

