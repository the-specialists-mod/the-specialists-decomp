/* client.dll - vgui__Dar_vgui__TickSignal__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000131b  vgui::Dar<vgui::TickSignal*>::Dar<vgui::TickSignal*>  (5 bytes)
 * undefined Dar<vgui::TickSignal*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::TickSignal *>::Dar<class vgui::TickSignal *>(void) */

Dar<vgui::TickSignal*> * __thiscall
vgui::Dar<vgui::TickSignal*>::Dar<vgui::TickSignal*>(Dar<vgui::TickSignal*> *this)

{
                    /* 0x131b  36  ??0?$Dar@PAVTickSignal@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 1000138e  vgui::Dar<vgui::TickSignal*>::operator=  (5 bytes)
 * Dar<class_vgui::TickSignal*> * operator=(Dar<class_vgui::TickSignal*> * param_1)
 */
/* public: class vgui::Dar<class vgui::TickSignal *> & __thiscall vgui::Dar<class vgui::TickSignal
   *>::operator=(class vgui::Dar<class vgui::TickSignal *> const &) */

Dar<class_vgui::TickSignal*> * __thiscall
vgui::Dar<vgui::TickSignal*>::operator=
          (Dar<vgui::TickSignal*> *this,Dar<class_vgui::TickSignal*> *param_1)

{
                    /* 0x138e  106  ??4?$Dar@PAVTickSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::TickSignal*> *)this;
}

/* 10001717  vgui::Dar<vgui::TickSignal*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::TickSignal *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::TickSignal*>::removeAll(Dar<vgui::TickSignal*> *this)

{
                    /* 0x1717  375  ?removeAll@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 10001721  vgui::Dar<vgui::TickSignal*>::setElementAt  (5 bytes)
 * void setElementAt(TickSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::TickSignal *>::setElementAt(class vgui::TickSignal
   *,int) */

void __thiscall
vgui::Dar<vgui::TickSignal*>::setElementAt
          (Dar<vgui::TickSignal*> *this,TickSignal *param_1,int param_2)

{
                    /* 0x1721  450
                       ?setElementAt@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(TickSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 100017da  vgui::Dar<vgui::TickSignal*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_100119c0, FUN_10011a10, FUN_10011bf0
 */
/* public: void __thiscall vgui::Dar<class vgui::TickSignal *>::ensureCapacity(int) */

void __thiscall
vgui::Dar<vgui::TickSignal*>::ensureCapacity(Dar<vgui::TickSignal*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x17da  266  ?ensureCapacity@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXH@Z */
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

/* 10001a82  vgui::Dar<vgui::TickSignal*>::removeElement  (5 bytes)
 * void removeElement(TickSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::TickSignal *>::removeElement(class vgui::TickSignal
   *) */

void __thiscall
vgui::Dar<vgui::TickSignal*>::removeElement(Dar<vgui::TickSignal*> *this,TickSignal *param_1)

{
  int iStack_c;
  
                    /* 0x1a82  393
                       ?removeElement@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(TickSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 10001e6f  vgui::Dar<vgui::TickSignal*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::TickSignal *>::getCount(void) */

int __thiscall vgui::Dar<vgui::TickSignal*>::getCount(Dar<vgui::TickSignal*> *this)

{
                    /* 0x1e6f  287  ?getCount@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10001ed8  vgui::Dar<vgui::TickSignal*>::insertElementAt  (5 bytes)
 * void insertElementAt(TickSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::TickSignal *>::insertElementAt(class
   vgui::TickSignal *,int) */

void __thiscall
vgui::Dar<vgui::TickSignal*>::insertElementAt
          (Dar<vgui::TickSignal*> *this,TickSignal *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x1ed8  330
                       ?insertElementAt@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@H@Z */
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
      *(TickSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10001fd2  vgui::Dar<vgui::TickSignal*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_10011eb0
 */
/* public: void __thiscall vgui::Dar<class vgui::TickSignal *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::TickSignal*>::removeElementAt(Dar<vgui::TickSignal*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x1fd2  411  ?removeElementAt@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 100020db  vgui::Dar<vgui::TickSignal*>::operator[]  (5 bytes)
 * TickSignal * operator[](int param_1)
 */
/* public: class vgui::TickSignal * __thiscall vgui::Dar<class vgui::TickSignal *>::operator[](int)
    */

TickSignal * __thiscall
vgui::Dar<vgui::TickSignal*>::operator[](Dar<vgui::TickSignal*> *this,int param_1)

{
  TickSignal *pTVar1;
  
                    /* 0x20db  168  ??A?$Dar@PAVTickSignal@vgui@@@vgui@@QAEPAVTickSignal@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pTVar1 = (TickSignal *)0x0;
  }
  else {
    pTVar1 = *(TickSignal **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pTVar1;
}

/* 1000260d  vgui::Dar<vgui::TickSignal*>::hasElement  (5 bytes)
 * bool hasElement(TickSignal * param_1)
 * called by: FUN_10011cb0
 */
/* public: bool __thiscall vgui::Dar<class vgui::TickSignal *>::hasElement(class vgui::TickSignal *)
    */

bool __thiscall
vgui::Dar<vgui::TickSignal*>::hasElement(Dar<vgui::TickSignal*> *this,TickSignal *param_1)

{
  int iStack_c;
  
                    /* 0x260d  310
                       ?hasElement@?$Dar@PAVTickSignal@vgui@@@vgui@@QAE_NPAVTickSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(TickSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 10002a09  vgui::Dar<vgui::TickSignal*>::addElement  (5 bytes)
 * void addElement(TickSignal * param_1)
 * called by: FUN_10011cb0, FUN_10011d00
 */
/* public: void __thiscall vgui::Dar<class vgui::TickSignal *>::addElement(class vgui::TickSignal *)
    */

void __thiscall
vgui::Dar<vgui::TickSignal*>::addElement(Dar<vgui::TickSignal*> *this,TickSignal *param_1)

{
                    /* 0x2a09  245
                       ?addElement@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(TickSignal **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 1000352b  vgui::Dar<vgui::TickSignal*>::Dar<vgui::TickSignal*>  (5 bytes)
 * undefined Dar<vgui::TickSignal*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::TickSignal *>::Dar<class vgui::TickSignal *>(int) */

Dar<vgui::TickSignal*> * __thiscall
vgui::Dar<vgui::TickSignal*>::Dar<vgui::TickSignal*>(Dar<vgui::TickSignal*> *this,int param_1)

{
                    /* 0x352b  35  ??0?$Dar@PAVTickSignal@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 10003c10  vgui::Dar<vgui::TickSignal*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::TickSignal *>::setCount(int) */

void __thiscall vgui::Dar<vgui::TickSignal*>::setCount(Dar<vgui::TickSignal*> *this,int param_1)

{
                    /* 0x3c10  432  ?setCount@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10003e04  vgui::Dar<vgui::TickSignal*>::putElement  (5 bytes)
 * void putElement(TickSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::TickSignal *>::putElement(class vgui::TickSignal *)
    */

void __thiscall
vgui::Dar<vgui::TickSignal*>::putElement(Dar<vgui::TickSignal*> *this,TickSignal *param_1)

{
  bool bVar1;
  
                    /* 0x3e04  355
                       ?putElement@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

