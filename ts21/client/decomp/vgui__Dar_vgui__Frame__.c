/* client.dll - vgui__Dar_vgui__Frame__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001203  vgui::Dar<vgui::Frame*>::addElement  (5 bytes)
 * void addElement(Frame * param_1)
 * called by: FUN_10012870, FUN_100128c0
 */
/* public: void __thiscall vgui::Dar<class vgui::Frame *>::addElement(class vgui::Frame *) */

void __thiscall vgui::Dar<vgui::Frame*>::addElement(Dar<vgui::Frame*> *this,Frame *param_1)

{
                    /* 0x1203  237  ?addElement@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(Frame **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10001311  vgui::Dar<vgui::Frame*>::operator[]  (5 bytes)
 * Frame * operator[](int param_1)
 */
/* public: class vgui::Frame * __thiscall vgui::Dar<class vgui::Frame *>::operator[](int) */

Frame * __thiscall vgui::Dar<vgui::Frame*>::operator[](Dar<vgui::Frame*> *this,int param_1)

{
  Frame *pFVar1;
  
                    /* 0x1311  160  ??A?$Dar@PAVFrame@vgui@@@vgui@@QAEPAVFrame@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pFVar1 = (Frame *)0x0;
  }
  else {
    pFVar1 = *(Frame **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pFVar1;
}

/* 1000179e  vgui::Dar<vgui::Frame*>::putElement  (5 bytes)
 * void putElement(Frame * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Frame *>::putElement(class vgui::Frame *) */

void __thiscall vgui::Dar<vgui::Frame*>::putElement(Dar<vgui::Frame*> *this,Frame *param_1)

{
  bool bVar1;
  
                    /* 0x179e  347  ?putElement@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10001f4b  vgui::Dar<vgui::Frame*>::setElementAt  (5 bytes)
 * void setElementAt(Frame * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::Frame *>::setElementAt(class vgui::Frame *,int) */

void __thiscall
vgui::Dar<vgui::Frame*>::setElementAt(Dar<vgui::Frame*> *this,Frame *param_1,int param_2)

{
                    /* 0x1f4b  442  ?setElementAt@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(Frame **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10002199  vgui::Dar<vgui::Frame*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::Frame *>::getCount(void) */

int __thiscall vgui::Dar<vgui::Frame*>::getCount(Dar<vgui::Frame*> *this)

{
                    /* 0x2199  279  ?getCount@?$Dar@PAVFrame@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 1000233d  vgui::Dar<vgui::Frame*>::operator=  (5 bytes)
 * Dar<class_vgui::Frame*> * operator=(Dar<class_vgui::Frame*> * param_1)
 */
/* public: class vgui::Dar<class vgui::Frame *> & __thiscall vgui::Dar<class vgui::Frame
   *>::operator=(class vgui::Dar<class vgui::Frame *> const &) */

Dar<class_vgui::Frame*> * __thiscall
vgui::Dar<vgui::Frame*>::operator=(Dar<vgui::Frame*> *this,Dar<class_vgui::Frame*> *param_1)

{
                    /* 0x233d  98  ??4?$Dar@PAVFrame@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::Frame*> *)this;
}

/* 1000280b  vgui::Dar<vgui::Frame*>::Dar<vgui::Frame*>  (5 bytes)
 * undefined Dar<vgui::Frame*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::Frame *>::Dar<class vgui::Frame *>(int) */

Dar<vgui::Frame*> * __thiscall
vgui::Dar<vgui::Frame*>::Dar<vgui::Frame*>(Dar<vgui::Frame*> *this,int param_1)

{
                    /* 0x280b  19  ??0?$Dar@PAVFrame@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 10002f2c  vgui::Dar<vgui::Frame*>::removeElement  (5 bytes)
 * void removeElement(Frame * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Frame *>::removeElement(class vgui::Frame *) */

void __thiscall vgui::Dar<vgui::Frame*>::removeElement(Dar<vgui::Frame*> *this,Frame *param_1)

{
  int iStack_c;
  
                    /* 0x2f2c  385  ?removeElement@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(Frame **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 100031d9  vgui::Dar<vgui::Frame*>::insertElementAt  (5 bytes)
 * void insertElementAt(Frame * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::Frame *>::insertElementAt(class vgui::Frame *,int)
    */

void __thiscall
vgui::Dar<vgui::Frame*>::insertElementAt(Dar<vgui::Frame*> *this,Frame *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x31d9  322  ?insertElementAt@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@H@Z
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
      *(Frame **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10003387  vgui::Dar<vgui::Frame*>::hasElement  (5 bytes)
 * bool hasElement(Frame * param_1)
 * called by: FUN_10012870
 */
/* public: bool __thiscall vgui::Dar<class vgui::Frame *>::hasElement(class vgui::Frame *) */

bool __thiscall vgui::Dar<vgui::Frame*>::hasElement(Dar<vgui::Frame*> *this,Frame *param_1)

{
  int iStack_c;
  
                    /* 0x3387  302  ?hasElement@?$Dar@PAVFrame@vgui@@@vgui@@QAE_NPAVFrame@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(Frame **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 100033f0  vgui::Dar<vgui::Frame*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::Frame *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::Frame*>::removeAll(Dar<vgui::Frame*> *this)

{
                    /* 0x33f0  367  ?removeAll@?$Dar@PAVFrame@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 100035b7  vgui::Dar<vgui::Frame*>::Dar<vgui::Frame*>  (5 bytes)
 * undefined Dar<vgui::Frame*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::Frame *>::Dar<class vgui::Frame *>(void) */

Dar<vgui::Frame*> * __thiscall vgui::Dar<vgui::Frame*>::Dar<vgui::Frame*>(Dar<vgui::Frame*> *this)

{
                    /* 0x35b7  20  ??0?$Dar@PAVFrame@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 100038f0  vgui::Dar<vgui::Frame*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Frame *>::setCount(int) */

void __thiscall vgui::Dar<vgui::Frame*>::setCount(Dar<vgui::Frame*> *this,int param_1)

{
                    /* 0x38f0  424  ?setCount@?$Dar@PAVFrame@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10003a7b  vgui::Dar<vgui::Frame*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_10012580, FUN_100125d0, FUN_100127b0
 */
/* public: void __thiscall vgui::Dar<class vgui::Frame *>::ensureCapacity(int) */

void __thiscall vgui::Dar<vgui::Frame*>::ensureCapacity(Dar<vgui::Frame*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x3a7b  258  ?ensureCapacity@?$Dar@PAVFrame@vgui@@@vgui@@QAEXH@Z */
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

/* 10003c8d  vgui::Dar<vgui::Frame*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_10012a70
 */
/* public: void __thiscall vgui::Dar<class vgui::Frame *>::removeElementAt(int) */

void __thiscall vgui::Dar<vgui::Frame*>::removeElementAt(Dar<vgui::Frame*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x3c8d  403  ?removeElementAt@?$Dar@PAVFrame@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

