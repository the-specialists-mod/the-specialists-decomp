/* client.dll - vgui__Dar_char_ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100010ff  vgui::Dar<char>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_1000df00, FUN_1000df50, FUN_1000e120
 */
/* public: void __thiscall vgui::Dar<char>::ensureCapacity(int) */

void __thiscall vgui::Dar<char>::ensureCapacity(Dar<char> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  uint uStack_c;
  
                    /* 0x10ff  249  ?ensureCapacity@?$Dar@D@vgui@@QAEXH@Z */
  if (*(int *)(this + 4) < param_1) {
    uStack_c = *(uint *)(this + 4);
    if (uStack_c == 0) {
      uStack_c = 1;
    }
    for (; (int)uStack_c < param_1; uStack_c = uStack_c << 1) {
    }
    _Dst = operator_new(uStack_c);
    if (_Dst == (void *)0x0) {
      FUN_100bbc60(0);
    }
    _memset(_Dst,0,uStack_c);
    *(uint *)(this + 4) = uStack_c;
    for (iStack_14 = 0; iStack_14 < *(int *)this; iStack_14 = iStack_14 + 1) {
      *(undefined1 *)((int)_Dst + iStack_14) = *(undefined1 *)(*(int *)(this + 8) + iStack_14);
    }
    FUN_100bbb10(*(void **)(this + 8));
    *(void **)(this + 8) = _Dst;
  }
  return;
}

/* 1000132f  vgui::Dar<char>::operator[]  (5 bytes)
 * char operator[](int param_1)
 */
/* public: char __thiscall vgui::Dar<char>::operator[](int) */

char __thiscall vgui::Dar<char>::operator[](Dar<char> *this,int param_1)

{
  char cVar1;
  
                    /* 0x132f  151  ??A?$Dar@D@vgui@@QAEDH@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = *(char *)(*(int *)(this + 8) + param_1);
  }
  return cVar1;
}

/* 100013cf  vgui::Dar<char>::addElement  (5 bytes)
 * void addElement(char param_1)
 * called by: FUN_1000e1f0, FUN_1000e240
 */
/* public: void __thiscall vgui::Dar<char>::addElement(char) */

void __thiscall vgui::Dar<char>::addElement(Dar<char> *this,char param_1)

{
                    /* 0x13cf  228  ?addElement@?$Dar@D@vgui@@QAEXD@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(char *)(*(int *)(this + 8) + *(int *)this) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10001523  vgui::Dar<char>::Dar<char>  (5 bytes)
 * undefined Dar<char>(void)
 */
/* public: __thiscall vgui::Dar<char>::Dar<char>(void) */

Dar<char> * __thiscall vgui::Dar<char>::Dar<char>(Dar<char> *this)

{
                    /* 0x1523  2  ??0?$Dar@D@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 100020c7  vgui::Dar<char>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<char>::removeAll(void) */

void __thiscall vgui::Dar<char>::removeAll(Dar<char> *this)

{
                    /* 0x20c7  358  ?removeAll@?$Dar@D@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 100023e7  vgui::Dar<char>::operator=  (5 bytes)
 * Dar<char> * operator=(Dar<char> * param_1)
 */
/* public: class vgui::Dar<char> & __thiscall vgui::Dar<char>::operator=(class vgui::Dar<char> const
   &) */

Dar<char> * __thiscall vgui::Dar<char>::operator=(Dar<char> *this,Dar<char> *param_1)

{
                    /* 0x23e7  89  ??4?$Dar@D@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

/* 100024eb  vgui::Dar<char>::setElementAt  (5 bytes)
 * void setElementAt(char param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<char>::setElementAt(char,int) */

void __thiscall vgui::Dar<char>::setElementAt(Dar<char> *this,char param_1,int param_2)

{
                    /* 0x24eb  433  ?setElementAt@?$Dar@D@vgui@@QAEXDH@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(char *)(*(int *)(this + 8) + param_2) = param_1;
  }
  return;
}

/* 10002e05  vgui::Dar<char>::hasElement  (5 bytes)
 * bool hasElement(char param_1)
 * called by: FUN_1000e1f0
 */
/* public: bool __thiscall vgui::Dar<char>::hasElement(char) */

bool __thiscall vgui::Dar<char>::hasElement(Dar<char> *this,char param_1)

{
  int iStack_c;
  
                    /* 0x2e05  293  ?hasElement@?$Dar@D@vgui@@QAE_ND@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(char *)(*(int *)(this + 8) + iStack_c) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 100030ee  vgui::Dar<char>::removeElement  (5 bytes)
 * void removeElement(char param_1)
 */
/* public: void __thiscall vgui::Dar<char>::removeElement(char) */

void __thiscall vgui::Dar<char>::removeElement(Dar<char> *this,char param_1)

{
  int iStack_c;
  
                    /* 0x30ee  376  ?removeElement@?$Dar@D@vgui@@QAEXD@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(char *)(*(int *)(this + 8) + iStack_c) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 100031fc  vgui::Dar<char>::putElement  (5 bytes)
 * void putElement(char param_1)
 */
/* public: void __thiscall vgui::Dar<char>::putElement(char) */

void __thiscall vgui::Dar<char>::putElement(Dar<char> *this,char param_1)

{
  bool bVar1;
  
                    /* 0x31fc  338  ?putElement@?$Dar@D@vgui@@QAEXD@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 100034e0  vgui::Dar<char>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<char>::setCount(int) */

void __thiscall vgui::Dar<char>::setCount(Dar<char> *this,int param_1)

{
                    /* 0x34e0  415  ?setCount@?$Dar@D@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 100039a9  vgui::Dar<char>::insertElementAt  (5 bytes)
 * void insertElementAt(char param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<char>::insertElementAt(char,int) */

void __thiscall vgui::Dar<char>::insertElementAt(Dar<char> *this,char param_1,int param_2)

{
  int iVar1;
  int iStack_c;
  
                    /* 0x39a9  313  ?insertElementAt@?$Dar@D@vgui@@QAEXDH@Z */
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      addElement(this,param_1);
    }
    else {
      addElement(this,param_1);
      iVar1 = *(int *)this;
      while (iStack_c = iVar1 + -1, param_2 < iStack_c) {
        *(undefined1 *)(*(int *)(this + 8) + iStack_c) =
             *(undefined1 *)(iVar1 + -2 + *(int *)(this + 8));
        iVar1 = iStack_c;
      }
      *(char *)(*(int *)(this + 8) + param_2) = param_1;
    }
  }
  return;
}

/* 10003a26  vgui::Dar<char>::Dar<char>  (5 bytes)
 * undefined Dar<char>(int param_1)
 */
/* public: __thiscall vgui::Dar<char>::Dar<char>(int) */

Dar<char> * __thiscall vgui::Dar<char>::Dar<char>(Dar<char> *this,int param_1)

{
                    /* 0x3a26  1  ??0?$Dar@D@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 10003f3f  vgui::Dar<char>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<char>::getCount(void) */

int __thiscall vgui::Dar<char>::getCount(Dar<char> *this)

{
                    /* 0x3f3f  270  ?getCount@?$Dar@D@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10004174  vgui::Dar<char>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_1000e3f0
 */
/* public: void __thiscall vgui::Dar<char>::removeElementAt(int) */

void __thiscall vgui::Dar<char>::removeElementAt(Dar<char> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x4174  394  ?removeElementAt@?$Dar@D@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined1 *)(*(int *)(this + 8) + iStack_c) =
           *(undefined1 *)(iStack_c + 1 + *(int *)(this + 8));
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

