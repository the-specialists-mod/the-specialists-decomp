/* client.dll - vgui__Dar_vgui__ChangeSignal__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100010f0  vgui::Dar<vgui::ChangeSignal*>::insertElementAt  (5 bytes)
 * void insertElementAt(ChangeSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::ChangeSignal *>::insertElementAt(class
   vgui::ChangeSignal *,int) */

void __thiscall
vgui::Dar<vgui::ChangeSignal*>::insertElementAt
          (Dar<vgui::ChangeSignal*> *this,ChangeSignal *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x10f0  319
                       ?insertElementAt@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@H@Z
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
      *(ChangeSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 1000110e  vgui::Dar<vgui::ChangeSignal*>::putElement  (5 bytes)
 * void putElement(ChangeSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::ChangeSignal *>::putElement(class
   vgui::ChangeSignal *) */

void __thiscall
vgui::Dar<vgui::ChangeSignal*>::putElement(Dar<vgui::ChangeSignal*> *this,ChangeSignal *param_1)

{
  bool bVar1;
  
                    /* 0x110e  344
                       ?putElement@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10001370  vgui::Dar<vgui::ChangeSignal*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::ChangeSignal *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::ChangeSignal*>::removeAll(Dar<vgui::ChangeSignal*> *this)

{
                    /* 0x1370  364  ?removeAll@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 10001456  vgui::Dar<vgui::ChangeSignal*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::ChangeSignal *>::setCount(int) */

void __thiscall vgui::Dar<vgui::ChangeSignal*>::setCount(Dar<vgui::ChangeSignal*> *this,int param_1)

{
                    /* 0x1456  421  ?setCount@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10001492  vgui::Dar<vgui::ChangeSignal*>::hasElement  (5 bytes)
 * bool hasElement(ChangeSignal * param_1)
 * called by: FUN_10013430
 */
/* public: bool __thiscall vgui::Dar<class vgui::ChangeSignal *>::hasElement(class
   vgui::ChangeSignal *) */

bool __thiscall
vgui::Dar<vgui::ChangeSignal*>::hasElement(Dar<vgui::ChangeSignal*> *this,ChangeSignal *param_1)

{
  int iStack_c;
  
                    /* 0x1492  299
                       ?hasElement@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAE_NPAVChangeSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(ChangeSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 100017d5  vgui::Dar<vgui::ChangeSignal*>::setElementAt  (5 bytes)
 * void setElementAt(ChangeSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::ChangeSignal *>::setElementAt(class
   vgui::ChangeSignal *,int) */

void __thiscall
vgui::Dar<vgui::ChangeSignal*>::setElementAt
          (Dar<vgui::ChangeSignal*> *this,ChangeSignal *param_1,int param_2)

{
                    /* 0x17d5  439
                       ?setElementAt@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(ChangeSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10001ab9  vgui::Dar<vgui::ChangeSignal*>::removeElement  (5 bytes)
 * void removeElement(ChangeSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::ChangeSignal *>::removeElement(class
   vgui::ChangeSignal *) */

void __thiscall
vgui::Dar<vgui::ChangeSignal*>::removeElement(Dar<vgui::ChangeSignal*> *this,ChangeSignal *param_1)

{
  int iStack_c;
  
                    /* 0x1ab9  382
                       ?removeElement@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(ChangeSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 100021a8  vgui::Dar<vgui::ChangeSignal*>::operator[]  (5 bytes)
 * ChangeSignal * operator[](int param_1)
 */
/* public: class vgui::ChangeSignal * __thiscall vgui::Dar<class vgui::ChangeSignal
   *>::operator[](int) */

ChangeSignal * __thiscall
vgui::Dar<vgui::ChangeSignal*>::operator[](Dar<vgui::ChangeSignal*> *this,int param_1)

{
  ChangeSignal *pCVar1;
  
                    /* 0x21a8  157  ??A?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEPAVChangeSignal@1@H@Z
                        */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pCVar1 = (ChangeSignal *)0x0;
  }
  else {
    pCVar1 = *(ChangeSignal **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pCVar1;
}

/* 1000249b  vgui::Dar<vgui::ChangeSignal*>::Dar<vgui::ChangeSignal*>  (5 bytes)
 * undefined Dar<vgui::ChangeSignal*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::ChangeSignal *>::Dar<class vgui::ChangeSignal *>(void)
    */

Dar<vgui::ChangeSignal*> * __thiscall
vgui::Dar<vgui::ChangeSignal*>::Dar<vgui::ChangeSignal*>(Dar<vgui::ChangeSignal*> *this)

{
                    /* 0x249b  14  ??0?$Dar@PAVChangeSignal@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 100024d2  vgui::Dar<vgui::ChangeSignal*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_10013140, FUN_10013190, FUN_10013370
 */
/* public: void __thiscall vgui::Dar<class vgui::ChangeSignal *>::ensureCapacity(int) */

void __thiscall
vgui::Dar<vgui::ChangeSignal*>::ensureCapacity(Dar<vgui::ChangeSignal*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x24d2  255  ?ensureCapacity@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXH@Z */
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

/* 10003012  vgui::Dar<vgui::ChangeSignal*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_10013630
 */
/* public: void __thiscall vgui::Dar<class vgui::ChangeSignal *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::ChangeSignal*>::removeElementAt(Dar<vgui::ChangeSignal*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x3012  400  ?removeElementAt@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 1000312f  vgui::Dar<vgui::ChangeSignal*>::operator=  (5 bytes)
 * Dar<class_vgui::ChangeSignal*> * operator=(Dar<class_vgui::ChangeSignal*> * param_1)
 */
/* public: class vgui::Dar<class vgui::ChangeSignal *> & __thiscall vgui::Dar<class
   vgui::ChangeSignal *>::operator=(class vgui::Dar<class vgui::ChangeSignal *> const &) */

Dar<class_vgui::ChangeSignal*> * __thiscall
vgui::Dar<vgui::ChangeSignal*>::operator=
          (Dar<vgui::ChangeSignal*> *this,Dar<class_vgui::ChangeSignal*> *param_1)

{
                    /* 0x312f  95  ??4?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::ChangeSignal*> *)this;
}

/* 10003693  vgui::Dar<vgui::ChangeSignal*>::Dar<vgui::ChangeSignal*>  (5 bytes)
 * undefined Dar<vgui::ChangeSignal*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::ChangeSignal *>::Dar<class vgui::ChangeSignal *>(int) */

Dar<vgui::ChangeSignal*> * __thiscall
vgui::Dar<vgui::ChangeSignal*>::Dar<vgui::ChangeSignal*>(Dar<vgui::ChangeSignal*> *this,int param_1)

{
                    /* 0x3693  13  ??0?$Dar@PAVChangeSignal@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 100039d1  vgui::Dar<vgui::ChangeSignal*>::addElement  (5 bytes)
 * void addElement(ChangeSignal * param_1)
 * called by: FUN_10013430, FUN_10013480
 */
/* public: void __thiscall vgui::Dar<class vgui::ChangeSignal *>::addElement(class
   vgui::ChangeSignal *) */

void __thiscall
vgui::Dar<vgui::ChangeSignal*>::addElement(Dar<vgui::ChangeSignal*> *this,ChangeSignal *param_1)

{
                    /* 0x39d1  234
                       ?addElement@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(ChangeSignal **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 100040a2  vgui::Dar<vgui::ChangeSignal*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::ChangeSignal *>::getCount(void) */

int __thiscall vgui::Dar<vgui::ChangeSignal*>::getCount(Dar<vgui::ChangeSignal*> *this)

{
                    /* 0x40a2  276  ?getCount@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

