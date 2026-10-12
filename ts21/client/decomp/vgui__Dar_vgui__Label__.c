/* client.dll - vgui__Dar_vgui__Label__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100010a0  vgui::Dar<vgui::Label*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Label *>::setCount(int) */

void __thiscall vgui::Dar<vgui::Label*>::setCount(Dar<vgui::Label*> *this,int param_1)

{
                    /* 0x10a0  428  ?setCount@?$Dar@PAVLabel@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10001325  vgui::Dar<vgui::Label*>::insertElementAt  (5 bytes)
 * void insertElementAt(Label * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::Label *>::insertElementAt(class vgui::Label *,int)
    */

void __thiscall
vgui::Dar<vgui::Label*>::insertElementAt(Dar<vgui::Label*> *this,Label *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x1325  326  ?insertElementAt@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@H@Z
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
      *(Label **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 1000165e  vgui::Dar<vgui::Label*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_10013d00, FUN_10013d50, FUN_10013f30
 */
/* public: void __thiscall vgui::Dar<class vgui::Label *>::ensureCapacity(int) */

void __thiscall vgui::Dar<vgui::Label*>::ensureCapacity(Dar<vgui::Label*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x165e  262  ?ensureCapacity@?$Dar@PAVLabel@vgui@@@vgui@@QAEXH@Z */
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

/* 10001753  vgui::Dar<vgui::Label*>::removeElement  (5 bytes)
 * void removeElement(Label * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Label *>::removeElement(class vgui::Label *) */

void __thiscall vgui::Dar<vgui::Label*>::removeElement(Dar<vgui::Label*> *this,Label *param_1)

{
  int iStack_c;
  
                    /* 0x1753  389  ?removeElement@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(Label **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 100017cb  vgui::Dar<vgui::Label*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::Label *>::getCount(void) */

int __thiscall vgui::Dar<vgui::Label*>::getCount(Dar<vgui::Label*> *this)

{
                    /* 0x17cb  283  ?getCount@?$Dar@PAVLabel@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10001a2d  vgui::Dar<vgui::Label*>::Dar<vgui::Label*>  (5 bytes)
 * undefined Dar<vgui::Label*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::Label *>::Dar<class vgui::Label *>(int) */

Dar<vgui::Label*> * __thiscall
vgui::Dar<vgui::Label*>::Dar<vgui::Label*>(Dar<vgui::Label*> *this,int param_1)

{
                    /* 0x1a2d  27  ??0?$Dar@PAVLabel@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 10001c26  vgui::Dar<vgui::Label*>::operator[]  (5 bytes)
 * Label * operator[](int param_1)
 */
/* public: class vgui::Label * __thiscall vgui::Dar<class vgui::Label *>::operator[](int) */

Label * __thiscall vgui::Dar<vgui::Label*>::operator[](Dar<vgui::Label*> *this,int param_1)

{
  Label *pLVar1;
  
                    /* 0x1c26  164  ??A?$Dar@PAVLabel@vgui@@@vgui@@QAEPAVLabel@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pLVar1 = (Label *)0x0;
  }
  else {
    pLVar1 = *(Label **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pLVar1;
}

/* 10002a36  vgui::Dar<vgui::Label*>::putElement  (5 bytes)
 * void putElement(Label * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Label *>::putElement(class vgui::Label *) */

void __thiscall vgui::Dar<vgui::Label*>::putElement(Dar<vgui::Label*> *this,Label *param_1)

{
  bool bVar1;
  
                    /* 0x2a36  351  ?putElement@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10002d15  vgui::Dar<vgui::Label*>::Dar<vgui::Label*>  (5 bytes)
 * undefined Dar<vgui::Label*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::Label *>::Dar<class vgui::Label *>(void) */

Dar<vgui::Label*> * __thiscall vgui::Dar<vgui::Label*>::Dar<vgui::Label*>(Dar<vgui::Label*> *this)

{
                    /* 0x2d15  28  ??0?$Dar@PAVLabel@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 10002e00  vgui::Dar<vgui::Label*>::addElement  (5 bytes)
 * void addElement(Label * param_1)
 * called by: FUN_10013ff0, FUN_10014040
 */
/* public: void __thiscall vgui::Dar<class vgui::Label *>::addElement(class vgui::Label *) */

void __thiscall vgui::Dar<vgui::Label*>::addElement(Dar<vgui::Label*> *this,Label *param_1)

{
                    /* 0x2e00  241  ?addElement@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(Label **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10003332  vgui::Dar<vgui::Label*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::Label *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::Label*>::removeAll(Dar<vgui::Label*> *this)

{
                    /* 0x3332  371  ?removeAll@?$Dar@PAVLabel@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 1000344a  vgui::Dar<vgui::Label*>::hasElement  (5 bytes)
 * bool hasElement(Label * param_1)
 * called by: FUN_10013ff0
 */
/* public: bool __thiscall vgui::Dar<class vgui::Label *>::hasElement(class vgui::Label *) */

bool __thiscall vgui::Dar<vgui::Label*>::hasElement(Dar<vgui::Label*> *this,Label *param_1)

{
  int iStack_c;
  
                    /* 0x344a  306  ?hasElement@?$Dar@PAVLabel@vgui@@@vgui@@QAE_NPAVLabel@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(Label **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 10003909  vgui::Dar<vgui::Label*>::operator=  (5 bytes)
 * Dar<class_vgui::Label*> * operator=(Dar<class_vgui::Label*> * param_1)
 */
/* public: class vgui::Dar<class vgui::Label *> & __thiscall vgui::Dar<class vgui::Label
   *>::operator=(class vgui::Dar<class vgui::Label *> const &) */

Dar<class_vgui::Label*> * __thiscall
vgui::Dar<vgui::Label*>::operator=(Dar<vgui::Label*> *this,Dar<class_vgui::Label*> *param_1)

{
                    /* 0x3909  102  ??4?$Dar@PAVLabel@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::Label*> *)this;
}

/* 100039e0  vgui::Dar<vgui::Label*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_100141f0
 */
/* public: void __thiscall vgui::Dar<class vgui::Label *>::removeElementAt(int) */

void __thiscall vgui::Dar<vgui::Label*>::removeElementAt(Dar<vgui::Label*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x39e0  407  ?removeElementAt@?$Dar@PAVLabel@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 10003ac1  vgui::Dar<vgui::Label*>::setElementAt  (5 bytes)
 * void setElementAt(Label * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::Label *>::setElementAt(class vgui::Label *,int) */

void __thiscall
vgui::Dar<vgui::Label*>::setElementAt(Dar<vgui::Label*> *this,Label *param_1,int param_2)

{
                    /* 0x3ac1  446  ?setElementAt@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(Label **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

