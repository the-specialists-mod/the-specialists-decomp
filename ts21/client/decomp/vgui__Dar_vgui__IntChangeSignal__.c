/* client.dll - vgui__Dar_vgui__IntChangeSignal__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000108c  vgui::Dar<vgui::IntChangeSignal*>::putElement  (5 bytes)
 * void putElement(IntChangeSignal * param_1)
 * called by: FUN_10033760, FUN_10034fc0
 */
/* public: void __thiscall vgui::Dar<class vgui::IntChangeSignal *>::putElement(class
   vgui::IntChangeSignal *) */

void __thiscall
vgui::Dar<vgui::IntChangeSignal*>::putElement
          (Dar<vgui::IntChangeSignal*> *this,IntChangeSignal *param_1)

{
  bool bVar1;
  
                    /* 0x108c  350
                       ?putElement@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@@Z
                        */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10001113  vgui::Dar<vgui::IntChangeSignal*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_100118d0
 */
/* public: void __thiscall vgui::Dar<class vgui::IntChangeSignal *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::IntChangeSignal*>::removeElementAt(Dar<vgui::IntChangeSignal*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x1113  406  ?removeElementAt@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXH@Z
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

/* 1000182f  vgui::Dar<vgui::IntChangeSignal*>::removeElement  (5 bytes)
 * void removeElement(IntChangeSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::IntChangeSignal *>::removeElement(class
   vgui::IntChangeSignal *) */

void __thiscall
vgui::Dar<vgui::IntChangeSignal*>::removeElement
          (Dar<vgui::IntChangeSignal*> *this,IntChangeSignal *param_1)

{
  int iStack_c;
  
                    /* 0x182f  388
                       ?removeElement@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@@Z
                        */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(IntChangeSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 10001b95  vgui::Dar<vgui::IntChangeSignal*>::operator[]  (5 bytes)
 * IntChangeSignal * operator[](int param_1)
 * called by: FUN_10033900, FUN_10034ff0
 */
/* public: class vgui::IntChangeSignal * __thiscall vgui::Dar<class vgui::IntChangeSignal
   *>::operator[](int) */

IntChangeSignal * __thiscall
vgui::Dar<vgui::IntChangeSignal*>::operator[](Dar<vgui::IntChangeSignal*> *this,int param_1)

{
  IntChangeSignal *pIVar1;
  
                    /* 0x1b95  163
                       ??A?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEPAVIntChangeSignal@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pIVar1 = (IntChangeSignal *)0x0;
  }
  else {
    pIVar1 = *(IntChangeSignal **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pIVar1;
}

/* 10001cc1  vgui::Dar<vgui::IntChangeSignal*>::getCount  (5 bytes)
 * int getCount(void)
 * called by: FUN_10033900, FUN_10034ff0
 */
/* public: int __thiscall vgui::Dar<class vgui::IntChangeSignal *>::getCount(void) */

int __thiscall vgui::Dar<vgui::IntChangeSignal*>::getCount(Dar<vgui::IntChangeSignal*> *this)

{
                    /* 0x1cc1  282  ?getCount@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10001cd5  vgui::Dar<vgui::IntChangeSignal*>::Dar<vgui::IntChangeSignal*>  (5 bytes)
 * undefined Dar<vgui::IntChangeSignal*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::IntChangeSignal *>::Dar<class vgui::IntChangeSignal
   *>(int) */

Dar<vgui::IntChangeSignal*> * __thiscall
vgui::Dar<vgui::IntChangeSignal*>::Dar<vgui::IntChangeSignal*>
          (Dar<vgui::IntChangeSignal*> *this,int param_1)

{
                    /* 0x1cd5  25  ??0?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 100020e5  vgui::Dar<vgui::IntChangeSignal*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_100113e0, FUN_10011430, FUN_10011610
 */
/* public: void __thiscall vgui::Dar<class vgui::IntChangeSignal *>::ensureCapacity(int) */

void __thiscall
vgui::Dar<vgui::IntChangeSignal*>::ensureCapacity(Dar<vgui::IntChangeSignal*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x20e5  261  ?ensureCapacity@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXH@Z */
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

/* 10002496  vgui::Dar<vgui::IntChangeSignal*>::hasElement  (5 bytes)
 * bool hasElement(IntChangeSignal * param_1)
 * called by: FUN_100116d0
 */
/* public: bool __thiscall vgui::Dar<class vgui::IntChangeSignal *>::hasElement(class
   vgui::IntChangeSignal *) */

bool __thiscall
vgui::Dar<vgui::IntChangeSignal*>::hasElement
          (Dar<vgui::IntChangeSignal*> *this,IntChangeSignal *param_1)

{
  int iStack_c;
  
                    /* 0x2496  305
                       ?hasElement@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAE_NPAVIntChangeSignal@2@@Z
                        */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(IntChangeSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 1000277f  vgui::Dar<vgui::IntChangeSignal*>::setElementAt  (5 bytes)
 * void setElementAt(IntChangeSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::IntChangeSignal *>::setElementAt(class
   vgui::IntChangeSignal *,int) */

void __thiscall
vgui::Dar<vgui::IntChangeSignal*>::setElementAt
          (Dar<vgui::IntChangeSignal*> *this,IntChangeSignal *param_1,int param_2)

{
                    /* 0x277f  445
                       ?setElementAt@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@H@Z
                        */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(IntChangeSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10002e64  vgui::Dar<vgui::IntChangeSignal*>::Dar<vgui::IntChangeSignal*>  (5 bytes)
 * undefined Dar<vgui::IntChangeSignal*>(void)
 * called by: FUN_10032f40, FUN_10034600
 */
/* public: __thiscall vgui::Dar<class vgui::IntChangeSignal *>::Dar<class vgui::IntChangeSignal
   *>(void) */

Dar<vgui::IntChangeSignal*> * __thiscall
vgui::Dar<vgui::IntChangeSignal*>::Dar<vgui::IntChangeSignal*>(Dar<vgui::IntChangeSignal*> *this)

{
                    /* 0x2e64  26  ??0?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 10002f63  vgui::Dar<vgui::IntChangeSignal*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::IntChangeSignal *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::IntChangeSignal*>::removeAll(Dar<vgui::IntChangeSignal*> *this)

{
                    /* 0x2f63  370  ?removeAll@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 100036bb  vgui::Dar<vgui::IntChangeSignal*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::IntChangeSignal *>::setCount(int) */

void __thiscall
vgui::Dar<vgui::IntChangeSignal*>::setCount(Dar<vgui::IntChangeSignal*> *this,int param_1)

{
                    /* 0x36bb  427  ?setCount@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10003882  vgui::Dar<vgui::IntChangeSignal*>::addElement  (5 bytes)
 * void addElement(IntChangeSignal * param_1)
 * called by: FUN_100116d0, FUN_10011720
 */
/* public: void __thiscall vgui::Dar<class vgui::IntChangeSignal *>::addElement(class
   vgui::IntChangeSignal *) */

void __thiscall
vgui::Dar<vgui::IntChangeSignal*>::addElement
          (Dar<vgui::IntChangeSignal*> *this,IntChangeSignal *param_1)

{
                    /* 0x3882  240
                       ?addElement@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@@Z
                        */
  ensureCapacity(this,*(int *)this + 1);
  *(IntChangeSignal **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10003c06  vgui::Dar<vgui::IntChangeSignal*>::operator=  (5 bytes)
 * Dar<class_vgui::IntChangeSignal*> * operator=(Dar<class_vgui::IntChangeSignal*> * param_1)
 */
/* public: class vgui::Dar<class vgui::IntChangeSignal *> & __thiscall vgui::Dar<class
   vgui::IntChangeSignal *>::operator=(class vgui::Dar<class vgui::IntChangeSignal *> const &) */

Dar<class_vgui::IntChangeSignal*> * __thiscall
vgui::Dar<vgui::IntChangeSignal*>::operator=
          (Dar<vgui::IntChangeSignal*> *this,Dar<class_vgui::IntChangeSignal*> *param_1)

{
                    /* 0x3c06  101  ??4?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::IntChangeSignal*> *)this;
}

/* 10004179  vgui::Dar<vgui::IntChangeSignal*>::insertElementAt  (5 bytes)
 * void insertElementAt(IntChangeSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::IntChangeSignal *>::insertElementAt(class
   vgui::IntChangeSignal *,int) */

void __thiscall
vgui::Dar<vgui::IntChangeSignal*>::insertElementAt
          (Dar<vgui::IntChangeSignal*> *this,IntChangeSignal *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x4179  325
                       ?insertElementAt@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@H@Z
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
      *(IntChangeSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

