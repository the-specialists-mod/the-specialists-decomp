/* client.dll - vgui__Dar_int_ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001276  vgui::Dar<int>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<int>::removeAll(void) */

void __thiscall vgui::Dar<int>::removeAll(Dar<int> *this)

{
                    /* 0x1276  359  ?removeAll@?$Dar@H@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 10001569  vgui::Dar<int>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_1000efb0
 */
/* public: void __thiscall vgui::Dar<int>::removeElementAt(int) */

void __thiscall vgui::Dar<int>::removeElementAt(Dar<int> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x1569  395  ?removeElementAt@?$Dar@H@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 1000177b  vgui::Dar<int>::hasElement  (5 bytes)
 * bool hasElement(int param_1)
 * called by: FUN_1000edb0
 */
/* public: bool __thiscall vgui::Dar<int>::hasElement(int) */

bool __thiscall vgui::Dar<int>::hasElement(Dar<int> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x177b  294  ?hasElement@?$Dar@H@vgui@@QAE_NH@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(int *)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 10001ccb  vgui::Dar<int>::putElement  (5 bytes)
 * void putElement(int param_1)
 */
/* public: void __thiscall vgui::Dar<int>::putElement(int) */

void __thiscall vgui::Dar<int>::putElement(Dar<int> *this,int param_1)

{
  bool bVar1;
  
                    /* 0x1ccb  339  ?putElement@?$Dar@H@vgui@@QAEXH@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 100020d1  vgui::Dar<int>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<int>::setCount(int) */

void __thiscall vgui::Dar<int>::setCount(Dar<int> *this,int param_1)

{
                    /* 0x20d1  416  ?setCount@?$Dar@H@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10002270  vgui::Dar<int>::Dar<int>  (5 bytes)
 * undefined Dar<int>(int param_1)
 */
/* public: __thiscall vgui::Dar<int>::Dar<int>(int) */

Dar<int> * __thiscall vgui::Dar<int>::Dar<int>(Dar<int> *this,int param_1)

{
                    /* 0x2270  3  ??0?$Dar@H@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 100025b3  vgui::Dar<int>::operator[]  (5 bytes)
 * int operator[](int param_1)
 */
/* public: int __thiscall vgui::Dar<int>::operator[](int) */

int __thiscall vgui::Dar<int>::operator[](Dar<int> *this,int param_1)

{
  int iVar1;
  
                    /* 0x25b3  152  ??A?$Dar@H@vgui@@QAEHH@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(this + 8) + param_1 * 4);
  }
  return iVar1;
}

/* 10002b76  vgui::Dar<int>::setElementAt  (5 bytes)
 * void setElementAt(int param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<int>::setElementAt(int,int) */

void __thiscall vgui::Dar<int>::setElementAt(Dar<int> *this,int param_1,int param_2)

{
                    /* 0x2b76  434  ?setElementAt@?$Dar@H@vgui@@QAEXHH@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(int *)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10003297  vgui::Dar<int>::operator=  (5 bytes)
 * Dar<int> * operator=(Dar<int> * param_1)
 */
/* public: class vgui::Dar<int> & __thiscall vgui::Dar<int>::operator=(class vgui::Dar<int> const &)
    */

Dar<int> * __thiscall vgui::Dar<int>::operator=(Dar<int> *this,Dar<int> *param_1)

{
                    /* 0x3297  90  ??4?$Dar@H@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

/* 10003431  vgui::Dar<int>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<int>::getCount(void) */

int __thiscall vgui::Dar<int>::getCount(Dar<int> *this)

{
                    /* 0x3431  271  ?getCount@?$Dar@H@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10003477  vgui::Dar<int>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_1000eac0, FUN_1000eb10, FUN_1000ecf0
 */
/* public: void __thiscall vgui::Dar<int>::ensureCapacity(int) */

void __thiscall vgui::Dar<int>::ensureCapacity(Dar<int> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x3477  250  ?ensureCapacity@?$Dar@H@vgui@@QAEXH@Z */
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

/* 100036cf  vgui::Dar<int>::Dar<int>  (5 bytes)
 * undefined Dar<int>(void)
 */
/* public: __thiscall vgui::Dar<int>::Dar<int>(void) */

Dar<int> * __thiscall vgui::Dar<int>::Dar<int>(Dar<int> *this)

{
                    /* 0x36cf  4  ??0?$Dar@H@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 10003a3f  vgui::Dar<int>::addElement  (5 bytes)
 * void addElement(int param_1)
 * called by: FUN_1000edb0, FUN_1000ee00
 */
/* public: void __thiscall vgui::Dar<int>::addElement(int) */

void __thiscall vgui::Dar<int>::addElement(Dar<int> *this,int param_1)

{
                    /* 0x3a3f  229  ?addElement@?$Dar@H@vgui@@QAEXH@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(int *)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10003be3  vgui::Dar<int>::removeElement  (5 bytes)
 * void removeElement(int param_1)
 */
/* public: void __thiscall vgui::Dar<int>::removeElement(int) */

void __thiscall vgui::Dar<int>::removeElement(Dar<int> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x3be3  377  ?removeElement@?$Dar@H@vgui@@QAEXH@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(int *)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 10003fa3  vgui::Dar<int>::insertElementAt  (5 bytes)
 * void insertElementAt(int param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<int>::insertElementAt(int,int) */

void __thiscall vgui::Dar<int>::insertElementAt(Dar<int> *this,int param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x3fa3  314  ?insertElementAt@?$Dar@H@vgui@@QAEXHH@Z */
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
      *(int *)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

