/* client.dll - vgui__Dar_vgui__InputSignal__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001122  vgui::Dar<vgui::InputSignal*>::removeElement  (5 bytes)
 * void removeElement(InputSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::InputSignal *>::removeElement(class
   vgui::InputSignal *) */

void __thiscall
vgui::Dar<vgui::InputSignal*>::removeElement(Dar<vgui::InputSignal*> *this,InputSignal *param_1)

{
  int iStack_c;
  
                    /* 0x1122  387
                       ?removeElement@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(InputSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 100013f7  vgui::Dar<vgui::InputSignal*>::insertElementAt  (5 bytes)
 * void insertElementAt(InputSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::InputSignal *>::insertElementAt(class
   vgui::InputSignal *,int) */

void __thiscall
vgui::Dar<vgui::InputSignal*>::insertElementAt
          (Dar<vgui::InputSignal*> *this,InputSignal *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x13f7  324
                       ?insertElementAt@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@H@Z
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
      *(InputSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10001433  vgui::Dar<vgui::InputSignal*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::InputSignal *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::InputSignal*>::removeAll(Dar<vgui::InputSignal*> *this)

{
                    /* 0x1433  369  ?removeAll@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 100014ba  vgui::Dar<vgui::InputSignal*>::putElement  (5 bytes)
 * void putElement(InputSignal * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::InputSignal *>::putElement(class vgui::InputSignal
   *) */

void __thiscall
vgui::Dar<vgui::InputSignal*>::putElement(Dar<vgui::InputSignal*> *this,InputSignal *param_1)

{
  bool bVar1;
  
                    /* 0x14ba  349
                       ?putElement@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 1000183e  vgui::Dar<vgui::InputSignal*>::hasElement  (5 bytes)
 * bool hasElement(InputSignal * param_1)
 * called by: FUN_1000ff50
 */
/* public: bool __thiscall vgui::Dar<class vgui::InputSignal *>::hasElement(class vgui::InputSignal
   *) */

bool __thiscall
vgui::Dar<vgui::InputSignal*>::hasElement(Dar<vgui::InputSignal*> *this,InputSignal *param_1)

{
  int iStack_c;
  
                    /* 0x183e  304
                       ?hasElement@?$Dar@PAVInputSignal@vgui@@@vgui@@QAE_NPAVInputSignal@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(InputSignal **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 10001889  vgui::Dar<vgui::InputSignal*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_1000fc60, FUN_1000fcb0, FUN_1000fe90
 */
/* public: void __thiscall vgui::Dar<class vgui::InputSignal *>::ensureCapacity(int) */

void __thiscall
vgui::Dar<vgui::InputSignal*>::ensureCapacity(Dar<vgui::InputSignal*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x1889  260  ?ensureCapacity@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXH@Z */
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

/* 1000206d  vgui::Dar<vgui::InputSignal*>::operator=  (5 bytes)
 * Dar<class_vgui::InputSignal*> * operator=(Dar<class_vgui::InputSignal*> * param_1)
 */
/* public: class vgui::Dar<class vgui::InputSignal *> & __thiscall vgui::Dar<class vgui::InputSignal
   *>::operator=(class vgui::Dar<class vgui::InputSignal *> const &) */

Dar<class_vgui::InputSignal*> * __thiscall
vgui::Dar<vgui::InputSignal*>::operator=
          (Dar<vgui::InputSignal*> *this,Dar<class_vgui::InputSignal*> *param_1)

{
                    /* 0x206d  100  ??4?$Dar@PAVInputSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::InputSignal*> *)this;
}

/* 10002180  vgui::Dar<vgui::InputSignal*>::addElement  (5 bytes)
 * void addElement(InputSignal * param_1)
 * called by: FUN_1000ff50, FUN_1000ffa0
 */
/* public: void __thiscall vgui::Dar<class vgui::InputSignal *>::addElement(class vgui::InputSignal
   *) */

void __thiscall
vgui::Dar<vgui::InputSignal*>::addElement(Dar<vgui::InputSignal*> *this,InputSignal *param_1)

{
                    /* 0x2180  239
                       ?addElement@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(InputSignal **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 100028fb  vgui::Dar<vgui::InputSignal*>::Dar<vgui::InputSignal*>  (5 bytes)
 * undefined Dar<vgui::InputSignal*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::InputSignal *>::Dar<class vgui::InputSignal *>(int) */

Dar<vgui::InputSignal*> * __thiscall
vgui::Dar<vgui::InputSignal*>::Dar<vgui::InputSignal*>(Dar<vgui::InputSignal*> *this,int param_1)

{
                    /* 0x28fb  23  ??0?$Dar@PAVInputSignal@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 10002ca7  vgui::Dar<vgui::InputSignal*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_10010150
 */
/* public: void __thiscall vgui::Dar<class vgui::InputSignal *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::InputSignal*>::removeElementAt(Dar<vgui::InputSignal*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x2ca7  405  ?removeElementAt@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 100030f3  vgui::Dar<vgui::InputSignal*>::getCount  (5 bytes)
 * int getCount(void)
 * called by: FUN_100a2ce0
 */
/* public: int __thiscall vgui::Dar<class vgui::InputSignal *>::getCount(void) */

int __thiscall vgui::Dar<vgui::InputSignal*>::getCount(Dar<vgui::InputSignal*> *this)

{
                    /* 0x30f3  281  ?getCount@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 100035cb  vgui::Dar<vgui::InputSignal*>::setElementAt  (5 bytes)
 * void setElementAt(InputSignal * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::InputSignal *>::setElementAt(class
   vgui::InputSignal *,int) */

void __thiscall
vgui::Dar<vgui::InputSignal*>::setElementAt
          (Dar<vgui::InputSignal*> *this,InputSignal *param_1,int param_2)

{
                    /* 0x35cb  444
                       ?setElementAt@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(InputSignal **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10003724  vgui::Dar<vgui::InputSignal*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::InputSignal *>::setCount(int) */

void __thiscall vgui::Dar<vgui::InputSignal*>::setCount(Dar<vgui::InputSignal*> *this,int param_1)

{
                    /* 0x3724  426  ?setCount@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10003cec  vgui::Dar<vgui::InputSignal*>::operator[]  (5 bytes)
 * InputSignal * operator[](int param_1)
 * called by: FUN_100a2ce0
 */
/* public: class vgui::InputSignal * __thiscall vgui::Dar<class vgui::InputSignal
   *>::operator[](int) */

InputSignal * __thiscall
vgui::Dar<vgui::InputSignal*>::operator[](Dar<vgui::InputSignal*> *this,int param_1)

{
  InputSignal *pIVar1;
  
                    /* 0x3cec  162  ??A?$Dar@PAVInputSignal@vgui@@@vgui@@QAEPAVInputSignal@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pIVar1 = (InputSignal *)0x0;
  }
  else {
    pIVar1 = *(InputSignal **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pIVar1;
}

/* 10003d8c  vgui::Dar<vgui::InputSignal*>::Dar<vgui::InputSignal*>  (5 bytes)
 * undefined Dar<vgui::InputSignal*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::InputSignal *>::Dar<class vgui::InputSignal *>(void) */

Dar<vgui::InputSignal*> * __thiscall
vgui::Dar<vgui::InputSignal*>::Dar<vgui::InputSignal*>(Dar<vgui::InputSignal*> *this)

{
                    /* 0x3d8c  24  ??0?$Dar@PAVInputSignal@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

