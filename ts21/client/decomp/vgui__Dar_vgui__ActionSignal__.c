/* client.dll - vgui__Dar_vgui__ActionSignal__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000149c  vgui::Dar<vgui::ActionSignal*>::insertElementAt  (5 bytes)
 * void insertElementAt(ActionSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::ActionSignal *>::insertElementAt(class
   vgui::ActionSignal *,int) */

void __thiscall
vgui::Dar<vgui::ActionSignal*>::insertElementAt
          (Dar<vgui::ActionSignal*> *this,ActionSignal *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x149c  317
                       ?insertElementAt@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@H@Z
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
      *(ActionSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 100015fa  vgui::Dar<vgui::ActionSignal*>::hasElement  (5 bytes)
 * bool hasElement(ActionSignal * param_1)
 * called by: FUN_100110f0
 */
/* public: bool __thiscall vgui::Dar<class vgui::ActionSignal *>::hasElement(class
   vgui::ActionSignal *) */

bool __thiscall
vgui::Dar<vgui::ActionSignal*>::hasElement(Dar<vgui::ActionSignal*> *this,ActionSignal *param_1)

{
  int iStack_c;
  
                    /* 0x15fa  297
                       ?hasElement@?$Dar@PAVActionSignal@vgui@@@vgui@@QAE_NPAVActionSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(ActionSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 10001a0f  vgui::Dar<vgui::ActionSignal*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_10010e00, FUN_10010e50, FUN_10011030
 */
/* public: void __thiscall vgui::Dar<class vgui::ActionSignal *>::ensureCapacity(int) */

void __thiscall
vgui::Dar<vgui::ActionSignal*>::ensureCapacity(Dar<vgui::ActionSignal*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x1a0f  253  ?ensureCapacity@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXH@Z */
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

/* 10001de3  vgui::Dar<vgui::ActionSignal*>::setElementAt  (5 bytes)
 * void setElementAt(ActionSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::ActionSignal *>::setElementAt(class
   vgui::ActionSignal *,int) */

void __thiscall
vgui::Dar<vgui::ActionSignal*>::setElementAt
          (Dar<vgui::ActionSignal*> *this,ActionSignal *param_1,int param_2)

{
                    /* 0x1de3  437
                       ?setElementAt@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(ActionSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 1000227f  vgui::Dar<vgui::ActionSignal*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::ActionSignal *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::ActionSignal*>::removeAll(Dar<vgui::ActionSignal*> *this)

{
                    /* 0x227f  362  ?removeAll@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 10002b85  vgui::Dar<vgui::ActionSignal*>::putElement  (5 bytes)
 * void putElement(ActionSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::ActionSignal *>::putElement(class
   vgui::ActionSignal *) */

void __thiscall
vgui::Dar<vgui::ActionSignal*>::putElement(Dar<vgui::ActionSignal*> *this,ActionSignal *param_1)

{
  bool bVar1;
  
                    /* 0x2b85  342
                       ?putElement@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10002cf2  vgui::Dar<vgui::ActionSignal*>::operator=  (5 bytes)
 * Dar<class_vgui::ActionSignal*> * operator=(Dar<class_vgui::ActionSignal*> * param_1)
 */
/* public: class vgui::Dar<class vgui::ActionSignal *> & __thiscall vgui::Dar<class
   vgui::ActionSignal *>::operator=(class vgui::Dar<class vgui::ActionSignal *> const &) */

Dar<class_vgui::ActionSignal*> * __thiscall
vgui::Dar<vgui::ActionSignal*>::operator=
          (Dar<vgui::ActionSignal*> *this,Dar<class_vgui::ActionSignal*> *param_1)

{
                    /* 0x2cf2  93  ??4?$Dar@PAVActionSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::ActionSignal*> *)this;
}

/* 10002e14  vgui::Dar<vgui::ActionSignal*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_100112f0
 */
/* public: void __thiscall vgui::Dar<class vgui::ActionSignal *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::ActionSignal*>::removeElementAt(Dar<vgui::ActionSignal*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x2e14  398  ?removeElementAt@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 10002e78  vgui::Dar<vgui::ActionSignal*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::ActionSignal *>::setCount(int) */

void __thiscall vgui::Dar<vgui::ActionSignal*>::setCount(Dar<vgui::ActionSignal*> *this,int param_1)

{
                    /* 0x2e78  419  ?setCount@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10003279  vgui::Dar<vgui::ActionSignal*>::addElement  (5 bytes)
 * void addElement(ActionSignal * param_1)
 * called by: FUN_100110f0, FUN_10011140
 */
/* public: void __thiscall vgui::Dar<class vgui::ActionSignal *>::addElement(class
   vgui::ActionSignal *) */

void __thiscall
vgui::Dar<vgui::ActionSignal*>::addElement(Dar<vgui::ActionSignal*> *this,ActionSignal *param_1)

{
                    /* 0x3279  232
                       ?addElement@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(ActionSignal **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 100032ce  vgui::Dar<vgui::ActionSignal*>::removeElement  (5 bytes)
 * void removeElement(ActionSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::ActionSignal *>::removeElement(class
   vgui::ActionSignal *) */

void __thiscall
vgui::Dar<vgui::ActionSignal*>::removeElement(Dar<vgui::ActionSignal*> *this,ActionSignal *param_1)

{
  int iStack_c;
  
                    /* 0x32ce  380
                       ?removeElement@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(ActionSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 100035f3  vgui::Dar<vgui::ActionSignal*>::operator[]  (5 bytes)
 * ActionSignal * operator[](int param_1)
 */
/* public: class vgui::ActionSignal * __thiscall vgui::Dar<class vgui::ActionSignal
   *>::operator[](int) */

ActionSignal * __thiscall
vgui::Dar<vgui::ActionSignal*>::operator[](Dar<vgui::ActionSignal*> *this,int param_1)

{
  ActionSignal *pAVar1;
  
                    /* 0x35f3  155  ??A?$Dar@PAVActionSignal@vgui@@@vgui@@QAEPAVActionSignal@1@H@Z
                        */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pAVar1 = (ActionSignal *)0x0;
  }
  else {
    pAVar1 = *(ActionSignal **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pAVar1;
}

/* 10003ba2  vgui::Dar<vgui::ActionSignal*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::ActionSignal *>::getCount(void) */

int __thiscall vgui::Dar<vgui::ActionSignal*>::getCount(Dar<vgui::ActionSignal*> *this)

{
                    /* 0x3ba2  274  ?getCount@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10003d37  vgui::Dar<vgui::ActionSignal*>::Dar<vgui::ActionSignal*>  (5 bytes)
 * undefined Dar<vgui::ActionSignal*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::ActionSignal *>::Dar<class vgui::ActionSignal *>(void)
    */

Dar<vgui::ActionSignal*> * __thiscall
vgui::Dar<vgui::ActionSignal*>::Dar<vgui::ActionSignal*>(Dar<vgui::ActionSignal*> *this)

{
                    /* 0x3d37  10  ??0?$Dar@PAVActionSignal@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 10003f62  vgui::Dar<vgui::ActionSignal*>::Dar<vgui::ActionSignal*>  (5 bytes)
 * undefined Dar<vgui::ActionSignal*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::ActionSignal *>::Dar<class vgui::ActionSignal *>(int) */

Dar<vgui::ActionSignal*> * __thiscall
vgui::Dar<vgui::ActionSignal*>::Dar<vgui::ActionSignal*>(Dar<vgui::ActionSignal*> *this,int param_1)

{
                    /* 0x3f62  9  ??0?$Dar@PAVActionSignal@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

