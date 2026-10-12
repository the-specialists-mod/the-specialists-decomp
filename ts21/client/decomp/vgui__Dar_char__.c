/* client.dll - vgui__Dar_char__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001118  vgui::Dar<char*>::Dar<char*>  (5 bytes)
 * undefined Dar<char*>(void)
 * called by: FUN_1009b9e0
 */
/* public: __thiscall vgui::Dar<char *>::Dar<char *>(void) */

Dar<char*> * __thiscall vgui::Dar<char*>::Dar<char*>(Dar<char*> *this)

{
                    /* 0x1118  6  ??0?$Dar@PAD@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 100011c2  vgui::Dar<char*>::addElement  (5 bytes)
 * void addElement(char * param_1)
 * called by: FUN_1000e7d0, FUN_1000e820, FUN_1009c870
 */
/* public: void __thiscall vgui::Dar<char *>::addElement(char *) */

void __thiscall vgui::Dar<char*>::addElement(Dar<char*> *this,char *param_1)

{
                    /* 0x11c2  230  ?addElement@?$Dar@PAD@vgui@@QAEXPAD@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(char **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 100011e5  vgui::Dar<char*>::insertElementAt  (5 bytes)
 * void insertElementAt(char * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<char *>::insertElementAt(char *,int) */

void __thiscall vgui::Dar<char*>::insertElementAt(Dar<char*> *this,char *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x11e5  315  ?insertElementAt@?$Dar@PAD@vgui@@QAEXPADH@Z */
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
      *(char **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 1000124e  vgui::Dar<char*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<char *>::removeAll(void) */

void __thiscall vgui::Dar<char*>::removeAll(Dar<char*> *this)

{
                    /* 0x124e  360  ?removeAll@?$Dar@PAD@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 10002171  vgui::Dar<char*>::setElementAt  (5 bytes)
 * void setElementAt(char * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<char *>::setElementAt(char *,int) */

void __thiscall vgui::Dar<char*>::setElementAt(Dar<char*> *this,char *param_1,int param_2)

{
                    /* 0x2171  435  ?setElementAt@?$Dar@PAD@vgui@@QAEXPADH@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(char **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10002202  vgui::Dar<char*>::operator=  (5 bytes)
 * Dar<char*> * operator=(Dar<char*> * param_1)
 */
/* public: class vgui::Dar<char *> & __thiscall vgui::Dar<char *>::operator=(class vgui::Dar<char *>
   const &) */

Dar<char*> * __thiscall vgui::Dar<char*>::operator=(Dar<char*> *this,Dar<char*> *param_1)

{
                    /* 0x2202  91  ??4?$Dar@PAD@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

/* 10002338  vgui::Dar<char*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<char *>::setCount(int) */

void __thiscall vgui::Dar<char*>::setCount(Dar<char*> *this,int param_1)

{
                    /* 0x2338  417  ?setCount@?$Dar@PAD@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10002720  vgui::Dar<char*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_1000e4e0, FUN_1000e530, FUN_1000e710
 */
/* public: void __thiscall vgui::Dar<char *>::ensureCapacity(int) */

void __thiscall vgui::Dar<char*>::ensureCapacity(Dar<char*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x2720  251  ?ensureCapacity@?$Dar@PAD@vgui@@QAEXH@Z */
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

/* 10002dc9  vgui::Dar<char*>::getCount  (5 bytes)
 * int getCount(void)
 * called by: FUN_1009c8d0
 */
/* public: int __thiscall vgui::Dar<char *>::getCount(void) */

int __thiscall vgui::Dar<char*>::getCount(Dar<char*> *this)

{
                    /* 0x2dc9  272  ?getCount@?$Dar@PAD@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10002ee6  vgui::Dar<char*>::putElement  (5 bytes)
 * void putElement(char * param_1)
 */
/* public: void __thiscall vgui::Dar<char *>::putElement(char *) */

void __thiscall vgui::Dar<char*>::putElement(Dar<char*> *this,char *param_1)

{
  bool bVar1;
  
                    /* 0x2ee6  340  ?putElement@?$Dar@PAD@vgui@@QAEXPAD@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 1000362f  vgui::Dar<char*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_1000e9d0
 */
/* public: void __thiscall vgui::Dar<char *>::removeElementAt(int) */

void __thiscall vgui::Dar<char*>::removeElementAt(Dar<char*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x362f  396  ?removeElementAt@?$Dar@PAD@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 10003b2a  vgui::Dar<char*>::operator[]  (5 bytes)
 * char * operator[](int param_1)
 * called by: FUN_1009c900
 */
/* public: char * __thiscall vgui::Dar<char *>::operator[](int) */

char * __thiscall vgui::Dar<char*>::operator[](Dar<char*> *this,int param_1)

{
  char *pcVar1;
  
                    /* 0x3b2a  153  ??A?$Dar@PAD@vgui@@QAEPADH@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = *(char **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pcVar1;
}

/* 10003b52  vgui::Dar<char*>::hasElement  (5 bytes)
 * bool hasElement(char * param_1)
 * called by: FUN_1000e7d0
 */
/* public: bool __thiscall vgui::Dar<char *>::hasElement(char *) */

bool __thiscall vgui::Dar<char*>::hasElement(Dar<char*> *this,char *param_1)

{
  int iStack_c;
  
                    /* 0x3b52  295  ?hasElement@?$Dar@PAD@vgui@@QAE_NPAD@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(char **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 10003dff  vgui::Dar<char*>::removeElement  (5 bytes)
 * void removeElement(char * param_1)
 */
/* public: void __thiscall vgui::Dar<char *>::removeElement(char *) */

void __thiscall vgui::Dar<char*>::removeElement(Dar<char*> *this,char *param_1)

{
  int iStack_c;
  
                    /* 0x3dff  378  ?removeElement@?$Dar@PAD@vgui@@QAEXPAD@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(char **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 10003e6d  vgui::Dar<char*>::Dar<char*>  (5 bytes)
 * undefined Dar<char*>(int param_1)
 */
/* public: __thiscall vgui::Dar<char *>::Dar<char *>(int) */

Dar<char*> * __thiscall vgui::Dar<char*>::Dar<char*>(Dar<char*> *this,int param_1)

{
                    /* 0x3e6d  5  ??0?$Dar@PAD@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

