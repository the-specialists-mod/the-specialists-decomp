/* client.dll - vgui__Dar_vgui__Button__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001226  vgui::Dar<vgui::Button*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_1000f590
 */
/* public: void __thiscall vgui::Dar<class vgui::Button *>::removeElementAt(int) */

void __thiscall vgui::Dar<vgui::Button*>::removeElementAt(Dar<vgui::Button*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x1226  399  ?removeElementAt@?$Dar@PAVButton@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 1000164a  vgui::Dar<vgui::Button*>::operator=  (5 bytes)
 * Dar<class_vgui::Button*> * operator=(Dar<class_vgui::Button*> * param_1)
 */
/* public: class vgui::Dar<class vgui::Button *> & __thiscall vgui::Dar<class vgui::Button
   *>::operator=(class vgui::Dar<class vgui::Button *> const &) */

Dar<class_vgui::Button*> * __thiscall
vgui::Dar<vgui::Button*>::operator=(Dar<vgui::Button*> *this,Dar<class_vgui::Button*> *param_1)

{
                    /* 0x164a  94  ??4?$Dar@PAVButton@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::Button*> *)this;
}

/* 10001744  vgui::Dar<vgui::Button*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Button *>::setCount(int) */

void __thiscall vgui::Dar<vgui::Button*>::setCount(Dar<vgui::Button*> *this,int param_1)

{
                    /* 0x1744  420  ?setCount@?$Dar@PAVButton@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10001d07  vgui::Dar<vgui::Button*>::operator[]  (5 bytes)
 * Button * operator[](int param_1)
 */
/* public: class vgui::Button * __thiscall vgui::Dar<class vgui::Button *>::operator[](int) */

Button * __thiscall vgui::Dar<vgui::Button*>::operator[](Dar<vgui::Button*> *this,int param_1)

{
  Button *pBVar1;
  
                    /* 0x1d07  156  ??A?$Dar@PAVButton@vgui@@@vgui@@QAEPAVButton@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pBVar1 = (Button *)0x0;
  }
  else {
    pBVar1 = *(Button **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pBVar1;
}

/* 10001e47  vgui::Dar<vgui::Button*>::hasElement  (5 bytes)
 * bool hasElement(Button * param_1)
 * called by: FUN_1000f390
 */
/* public: bool __thiscall vgui::Dar<class vgui::Button *>::hasElement(class vgui::Button *) */

bool __thiscall vgui::Dar<vgui::Button*>::hasElement(Dar<vgui::Button*> *this,Button *param_1)

{
  int iStack_c;
  
                    /* 0x1e47  298  ?hasElement@?$Dar@PAVButton@vgui@@@vgui@@QAE_NPAVButton@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(Button **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 10001eec  vgui::Dar<vgui::Button*>::Dar<vgui::Button*>  (5 bytes)
 * undefined Dar<vgui::Button*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::Button *>::Dar<class vgui::Button *>(void) */

Dar<vgui::Button*> * __thiscall
vgui::Dar<vgui::Button*>::Dar<vgui::Button*>(Dar<vgui::Button*> *this)

{
                    /* 0x1eec  12  ??0?$Dar@PAVButton@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 100020e0  vgui::Dar<vgui::Button*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::Button *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::Button*>::removeAll(Dar<vgui::Button*> *this)

{
                    /* 0x20e0  363  ?removeAll@?$Dar@PAVButton@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 100020ea  vgui::Dar<vgui::Button*>::Dar<vgui::Button*>  (5 bytes)
 * undefined Dar<vgui::Button*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::Button *>::Dar<class vgui::Button *>(int) */

Dar<vgui::Button*> * __thiscall
vgui::Dar<vgui::Button*>::Dar<vgui::Button*>(Dar<vgui::Button*> *this,int param_1)

{
                    /* 0x20ea  11  ??0?$Dar@PAVButton@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 100023f6  vgui::Dar<vgui::Button*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_1000f0a0, FUN_1000f0f0, FUN_1000f2d0
 */
/* public: void __thiscall vgui::Dar<class vgui::Button *>::ensureCapacity(int) */

void __thiscall vgui::Dar<vgui::Button*>::ensureCapacity(Dar<vgui::Button*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x23f6  254  ?ensureCapacity@?$Dar@PAVButton@vgui@@@vgui@@QAEXH@Z */
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

/* 10002815  vgui::Dar<vgui::Button*>::setElementAt  (5 bytes)
 * void setElementAt(Button * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::Button *>::setElementAt(class vgui::Button *,int)
    */

void __thiscall
vgui::Dar<vgui::Button*>::setElementAt(Dar<vgui::Button*> *this,Button *param_1,int param_2)

{
                    /* 0x2815  438  ?setElementAt@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@H@Z
                        */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(Button **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10003017  vgui::Dar<vgui::Button*>::removeElement  (5 bytes)
 * void removeElement(Button * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Button *>::removeElement(class vgui::Button *) */

void __thiscall vgui::Dar<vgui::Button*>::removeElement(Dar<vgui::Button*> *this,Button *param_1)

{
  int iStack_c;
  
                    /* 0x3017  381  ?removeElement@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@@Z
                        */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(Button **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 1000355d  vgui::Dar<vgui::Button*>::addElement  (5 bytes)
 * void addElement(Button * param_1)
 * called by: FUN_1000f390, FUN_1000f3e0
 */
/* public: void __thiscall vgui::Dar<class vgui::Button *>::addElement(class vgui::Button *) */

void __thiscall vgui::Dar<vgui::Button*>::addElement(Dar<vgui::Button*> *this,Button *param_1)

{
                    /* 0x355d  233  ?addElement@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(Button **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 100037fb  vgui::Dar<vgui::Button*>::insertElementAt  (5 bytes)
 * void insertElementAt(Button * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::Button *>::insertElementAt(class vgui::Button
   *,int) */

void __thiscall
vgui::Dar<vgui::Button*>::insertElementAt(Dar<vgui::Button*> *this,Button *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x37fb  318
                       ?insertElementAt@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@H@Z */
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
      *(Button **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10003ac6  vgui::Dar<vgui::Button*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::Button *>::getCount(void) */

int __thiscall vgui::Dar<vgui::Button*>::getCount(Dar<vgui::Button*> *this)

{
                    /* 0x3ac6  275  ?getCount@?$Dar@PAVButton@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10003bfc  vgui::Dar<vgui::Button*>::putElement  (5 bytes)
 * void putElement(Button * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Button *>::putElement(class vgui::Button *) */

void __thiscall vgui::Dar<vgui::Button*>::putElement(Dar<vgui::Button*> *this,Button *param_1)

{
  bool bVar1;
  
                    /* 0x3bfc  343  ?putElement@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

