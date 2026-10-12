/* client.dll - vgui__Dar_vgui__RepaintSignal__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001005  vgui::Dar<vgui::RepaintSignal*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_100147d0
 */
/* public: void __thiscall vgui::Dar<class vgui::RepaintSignal *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::RepaintSignal*>::removeElementAt(Dar<vgui::RepaintSignal*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x1005  409  ?removeElementAt@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 10002027  vgui::Dar<vgui::RepaintSignal*>::operator=  (5 bytes)
 * Dar<class_vgui::RepaintSignal*> * operator=(Dar<class_vgui::RepaintSignal*> * param_1)
 */
/* public: class vgui::Dar<class vgui::RepaintSignal *> & __thiscall vgui::Dar<class
   vgui::RepaintSignal *>::operator=(class vgui::Dar<class vgui::RepaintSignal *> const &) */

Dar<class_vgui::RepaintSignal*> * __thiscall
vgui::Dar<vgui::RepaintSignal*>::operator=
          (Dar<vgui::RepaintSignal*> *this,Dar<class_vgui::RepaintSignal*> *param_1)

{
                    /* 0x2027  104  ??4?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::RepaintSignal*> *)this;
}

/* 10002554  vgui::Dar<vgui::RepaintSignal*>::operator[]  (5 bytes)
 * RepaintSignal * operator[](int param_1)
 */
/* public: class vgui::RepaintSignal * __thiscall vgui::Dar<class vgui::RepaintSignal
   *>::operator[](int) */

RepaintSignal * __thiscall
vgui::Dar<vgui::RepaintSignal*>::operator[](Dar<vgui::RepaintSignal*> *this,int param_1)

{
  RepaintSignal *pRVar1;
  
                    /* 0x2554  166  ??A?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEPAVRepaintSignal@1@H@Z
                        */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pRVar1 = (RepaintSignal *)0x0;
  }
  else {
    pRVar1 = *(RepaintSignal **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pRVar1;
}

/* 10002c34  vgui::Dar<vgui::RepaintSignal*>::Dar<vgui::RepaintSignal*>  (5 bytes)
 * undefined Dar<vgui::RepaintSignal*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::RepaintSignal *>::Dar<class vgui::RepaintSignal *>(int)
    */

Dar<vgui::RepaintSignal*> * __thiscall
vgui::Dar<vgui::RepaintSignal*>::Dar<vgui::RepaintSignal*>
          (Dar<vgui::RepaintSignal*> *this,int param_1)

{
                    /* 0x2c34  31  ??0?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 10002c4d  vgui::Dar<vgui::RepaintSignal*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::RepaintSignal *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::RepaintSignal*>::removeAll(Dar<vgui::RepaintSignal*> *this)

{
                    /* 0x2c4d  373  ?removeAll@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 10002cc5  vgui::Dar<vgui::RepaintSignal*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_100142e0, FUN_10014330, FUN_10014510
 */
/* public: void __thiscall vgui::Dar<class vgui::RepaintSignal *>::ensureCapacity(int) */

void __thiscall
vgui::Dar<vgui::RepaintSignal*>::ensureCapacity(Dar<vgui::RepaintSignal*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x2cc5  264  ?ensureCapacity@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXH@Z */
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

/* 10002d88  vgui::Dar<vgui::RepaintSignal*>::putElement  (5 bytes)
 * void putElement(RepaintSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::RepaintSignal *>::putElement(class
   vgui::RepaintSignal *) */

void __thiscall
vgui::Dar<vgui::RepaintSignal*>::putElement(Dar<vgui::RepaintSignal*> *this,RepaintSignal *param_1)

{
  bool bVar1;
  
                    /* 0x2d88  353
                       ?putElement@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10002f1d  vgui::Dar<vgui::RepaintSignal*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::RepaintSignal *>::getCount(void) */

int __thiscall vgui::Dar<vgui::RepaintSignal*>::getCount(Dar<vgui::RepaintSignal*> *this)

{
                    /* 0x2f1d  285  ?getCount@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10002f86  vgui::Dar<vgui::RepaintSignal*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::RepaintSignal *>::setCount(int) */

void __thiscall
vgui::Dar<vgui::RepaintSignal*>::setCount(Dar<vgui::RepaintSignal*> *this,int param_1)

{
                    /* 0x2f86  430  ?setCount@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 100034c2  vgui::Dar<vgui::RepaintSignal*>::removeElement  (5 bytes)
 * void removeElement(RepaintSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::RepaintSignal *>::removeElement(class
   vgui::RepaintSignal *) */

void __thiscall
vgui::Dar<vgui::RepaintSignal*>::removeElement
          (Dar<vgui::RepaintSignal*> *this,RepaintSignal *param_1)

{
  int iStack_c;
  
                    /* 0x34c2  391
                       ?removeElement@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@@Z
                        */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(RepaintSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 100035b2  vgui::Dar<vgui::RepaintSignal*>::setElementAt  (5 bytes)
 * void setElementAt(RepaintSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::RepaintSignal *>::setElementAt(class
   vgui::RepaintSignal *,int) */

void __thiscall
vgui::Dar<vgui::RepaintSignal*>::setElementAt
          (Dar<vgui::RepaintSignal*> *this,RepaintSignal *param_1,int param_2)

{
                    /* 0x35b2  448
                       ?setElementAt@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@H@Z
                        */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(RepaintSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10003832  vgui::Dar<vgui::RepaintSignal*>::hasElement  (5 bytes)
 * bool hasElement(RepaintSignal * param_1)
 * called by: FUN_100145d0
 */
/* public: bool __thiscall vgui::Dar<class vgui::RepaintSignal *>::hasElement(class
   vgui::RepaintSignal *) */

bool __thiscall
vgui::Dar<vgui::RepaintSignal*>::hasElement(Dar<vgui::RepaintSignal*> *this,RepaintSignal *param_1)

{
  int iStack_c;
  
                    /* 0x3832  308
                       ?hasElement@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAE_NPAVRepaintSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(RepaintSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 10003891  vgui::Dar<vgui::RepaintSignal*>::Dar<vgui::RepaintSignal*>  (5 bytes)
 * undefined Dar<vgui::RepaintSignal*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::RepaintSignal *>::Dar<class vgui::RepaintSignal *>(void)
    */

Dar<vgui::RepaintSignal*> * __thiscall
vgui::Dar<vgui::RepaintSignal*>::Dar<vgui::RepaintSignal*>(Dar<vgui::RepaintSignal*> *this)

{
                    /* 0x3891  32  ??0?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 10003c3d  vgui::Dar<vgui::RepaintSignal*>::insertElementAt  (5 bytes)
 * void insertElementAt(RepaintSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::RepaintSignal *>::insertElementAt(class
   vgui::RepaintSignal *,int) */

void __thiscall
vgui::Dar<vgui::RepaintSignal*>::insertElementAt
          (Dar<vgui::RepaintSignal*> *this,RepaintSignal *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x3c3d  328
                       ?insertElementAt@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@H@Z
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
      *(RepaintSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10003e59  vgui::Dar<vgui::RepaintSignal*>::addElement  (5 bytes)
 * void addElement(RepaintSignal * param_1)
 * called by: FUN_100145d0, FUN_10014620
 */
/* public: void __thiscall vgui::Dar<class vgui::RepaintSignal *>::addElement(class
   vgui::RepaintSignal *) */

void __thiscall
vgui::Dar<vgui::RepaintSignal*>::addElement(Dar<vgui::RepaintSignal*> *this,RepaintSignal *param_1)

{
                    /* 0x3e59  243
                       ?addElement@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(RepaintSignal **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

