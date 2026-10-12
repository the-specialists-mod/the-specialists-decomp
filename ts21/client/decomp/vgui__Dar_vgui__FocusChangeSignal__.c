/* client.dll - vgui__Dar_vgui__FocusChangeSignal__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001041  vgui::Dar<vgui::FocusChangeSignal*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::FocusChangeSignal*>::removeAll(Dar<vgui::FocusChangeSignal*> *this)

{
                    /* 0x1041  366  ?removeAll@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 1000106e  vgui::Dar<vgui::FocusChangeSignal*>::addElement  (5 bytes)
 * void addElement(FocusChangeSignal * param_1)
 * called by: FUN_10010530, FUN_10010580
 */
/* public: void __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::addElement(class
   vgui::FocusChangeSignal *) */

void __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::addElement
          (Dar<vgui::FocusChangeSignal*> *this,FocusChangeSignal *param_1)

{
                    /* 0x106e  236
                       ?addElement@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@@Z
                        */
  ensureCapacity(this,*(int *)this + 1);
  *(FocusChangeSignal **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 1000133e  vgui::Dar<vgui::FocusChangeSignal*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_10010730
 */
/* public: void __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::removeElementAt
          (Dar<vgui::FocusChangeSignal*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x133e  402  ?removeElementAt@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXH@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 10001415  vgui::Dar<vgui::FocusChangeSignal*>::removeElement  (5 bytes)
 * void removeElement(FocusChangeSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::removeElement(class
   vgui::FocusChangeSignal *) */

void __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::removeElement
          (Dar<vgui::FocusChangeSignal*> *this,FocusChangeSignal *param_1)

{
  int iStack_c;
  
                    /* 0x1415  384
                       ?removeElement@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@@Z
                        */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(FocusChangeSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 100016f4  vgui::Dar<vgui::FocusChangeSignal*>::Dar<vgui::FocusChangeSignal*>  (5 bytes)
 * undefined Dar<vgui::FocusChangeSignal*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::Dar<class vgui::FocusChangeSignal
   *>(int) */

Dar<vgui::FocusChangeSignal*> * __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::Dar<vgui::FocusChangeSignal*>
          (Dar<vgui::FocusChangeSignal*> *this,int param_1)

{
                    /* 0x16f4  17  ??0?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 10001c6c  vgui::Dar<vgui::FocusChangeSignal*>::operator=  (5 bytes)
 * Dar<class_vgui::FocusChangeSignal*> * operator=(Dar<class_vgui::FocusChangeSignal*> * param_1)
 */
/* public: class vgui::Dar<class vgui::FocusChangeSignal *> & __thiscall vgui::Dar<class
   vgui::FocusChangeSignal *>::operator=(class vgui::Dar<class vgui::FocusChangeSignal *> const &)
    */

Dar<class_vgui::FocusChangeSignal*> * __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::operator=
          (Dar<vgui::FocusChangeSignal*> *this,Dar<class_vgui::FocusChangeSignal*> *param_1)

{
                    /* 0x1c6c  97  ??4?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::FocusChangeSignal*> *)this;
}

/* 10001d61  vgui::Dar<vgui::FocusChangeSignal*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_10010240, FUN_10010290, FUN_10010470
 */
/* public: void __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::ensureCapacity(int) */

void __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::ensureCapacity(Dar<vgui::FocusChangeSignal*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x1d61  257  ?ensureCapacity@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXH@Z
                        */
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

/* 100020c2  vgui::Dar<vgui::FocusChangeSignal*>::hasElement  (5 bytes)
 * bool hasElement(FocusChangeSignal * param_1)
 * called by: FUN_10010530
 */
/* public: bool __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::hasElement(class
   vgui::FocusChangeSignal *) */

bool __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::hasElement
          (Dar<vgui::FocusChangeSignal*> *this,FocusChangeSignal *param_1)

{
  int iStack_c;
  
                    /* 0x20c2  301
                       ?hasElement@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAE_NPAVFocusChangeSignal@2@@Z
                        */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(FocusChangeSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 1000252c  vgui::Dar<vgui::FocusChangeSignal*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::getCount(void) */

int __thiscall vgui::Dar<vgui::FocusChangeSignal*>::getCount(Dar<vgui::FocusChangeSignal*> *this)

{
                    /* 0x252c  278  ?getCount@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 1000286f  vgui::Dar<vgui::FocusChangeSignal*>::setElementAt  (5 bytes)
 * void setElementAt(FocusChangeSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::setElementAt(class
   vgui::FocusChangeSignal *,int) */

void __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::setElementAt
          (Dar<vgui::FocusChangeSignal*> *this,FocusChangeSignal *param_1,int param_2)

{
                    /* 0x286f  441
                       ?setElementAt@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@H@Z
                        */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(FocusChangeSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10002888  vgui::Dar<vgui::FocusChangeSignal*>::putElement  (5 bytes)
 * void putElement(FocusChangeSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::putElement(class
   vgui::FocusChangeSignal *) */

void __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::putElement
          (Dar<vgui::FocusChangeSignal*> *this,FocusChangeSignal *param_1)

{
  bool bVar1;
  
                    /* 0x2888  346
                       ?putElement@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@@Z
                        */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10002e82  vgui::Dar<vgui::FocusChangeSignal*>::operator[]  (5 bytes)
 * FocusChangeSignal * operator[](int param_1)
 */
/* public: class vgui::FocusChangeSignal * __thiscall vgui::Dar<class vgui::FocusChangeSignal
   *>::operator[](int) */

FocusChangeSignal * __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::operator[](Dar<vgui::FocusChangeSignal*> *this,int param_1)

{
  FocusChangeSignal *pFVar1;
  
                    /* 0x2e82  159
                       ??A?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEPAVFocusChangeSignal@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pFVar1 = (FocusChangeSignal *)0x0;
  }
  else {
    pFVar1 = *(FocusChangeSignal **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pFVar1;
}

/* 1000309e  vgui::Dar<vgui::FocusChangeSignal*>::Dar<vgui::FocusChangeSignal*>  (5 bytes)
 * undefined Dar<vgui::FocusChangeSignal*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::Dar<class vgui::FocusChangeSignal
   *>(void) */

Dar<vgui::FocusChangeSignal*> * __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::Dar<vgui::FocusChangeSignal*>
          (Dar<vgui::FocusChangeSignal*> *this)

{
                    /* 0x309e  18  ??0?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 10003238  vgui::Dar<vgui::FocusChangeSignal*>::insertElementAt  (5 bytes)
 * void insertElementAt(FocusChangeSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::insertElementAt(class
   vgui::FocusChangeSignal *,int) */

void __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::insertElementAt
          (Dar<vgui::FocusChangeSignal*> *this,FocusChangeSignal *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x3238  321
                       ?insertElementAt@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@H@Z
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
      *(FocusChangeSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 1000375b  vgui::Dar<vgui::FocusChangeSignal*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::FocusChangeSignal *>::setCount(int) */

void __thiscall
vgui::Dar<vgui::FocusChangeSignal*>::setCount(Dar<vgui::FocusChangeSignal*> *this,int param_1)

{
                    /* 0x375b  423  ?setCount@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

