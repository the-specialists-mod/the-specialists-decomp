/* client.dll - vgui__Dar_vgui__Dar_char___ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000161d  vgui::Dar<vgui::Dar<char>*>::Dar<vgui::Dar<char>*>  (5 bytes)
 * undefined Dar<vgui::Dar<char>*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::Dar<char> *>::Dar<class vgui::Dar<char> *>(int) */

Dar<vgui::Dar<char>*> * __thiscall
vgui::Dar<vgui::Dar<char>*>::Dar<vgui::Dar<char>*>(Dar<vgui::Dar<char>*> *this,int param_1)

{
                    /* 0x161d  7  ??0?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 1000169a  vgui::Dar<vgui::Dar<char>*>::hasElement  (5 bytes)
 * bool hasElement(Dar<char> * param_1)
 * called by: FUN_10012290
 */
/* public: bool __thiscall vgui::Dar<class vgui::Dar<char> *>::hasElement(class vgui::Dar<char> *)
    */

bool __thiscall
vgui::Dar<vgui::Dar<char>*>::hasElement(Dar<vgui::Dar<char>*> *this,Dar<char> *param_1)

{
  int iStack_c;
  
                    /* 0x169a  296  ?hasElement@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAE_NPAV?$Dar@D@2@@Z
                        */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(Dar<char> **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 100016ef  vgui::Dar<vgui::Dar<char>*>::putElement  (5 bytes)
 * void putElement(Dar<char> * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Dar<char> *>::putElement(class vgui::Dar<char> *)
    */

void __thiscall
vgui::Dar<vgui::Dar<char>*>::putElement(Dar<vgui::Dar<char>*> *this,Dar<char> *param_1)

{
  bool bVar1;
  
                    /* 0x16ef  341  ?putElement@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10001cd0  vgui::Dar<vgui::Dar<char>*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_10011fa0, FUN_10011ff0, FUN_100121d0
 */
/* public: void __thiscall vgui::Dar<class vgui::Dar<char> *>::ensureCapacity(int) */

void __thiscall vgui::Dar<vgui::Dar<char>*>::ensureCapacity(Dar<vgui::Dar<char>*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x1cd0  252  ?ensureCapacity@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXH@Z */
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

/* 1000205e  vgui::Dar<vgui::Dar<char>*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_10012490
 */
/* public: void __thiscall vgui::Dar<class vgui::Dar<char> *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::Dar<char>*>::removeElementAt(Dar<vgui::Dar<char>*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x205e  397  ?removeElementAt@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 10002c7f  vgui::Dar<vgui::Dar<char>*>::operator=  (5 bytes)
 * Dar<class_vgui::Dar<char>*> * operator=(Dar<class_vgui::Dar<char>*> * param_1)
 */
/* public: class vgui::Dar<class vgui::Dar<char> *> & __thiscall vgui::Dar<class vgui::Dar<char>
   *>::operator=(class vgui::Dar<class vgui::Dar<char> *> const &) */

Dar<class_vgui::Dar<char>*> * __thiscall
vgui::Dar<vgui::Dar<char>*>::operator=
          (Dar<vgui::Dar<char>*> *this,Dar<class_vgui::Dar<char>*> *param_1)

{
                    /* 0x2c7f  92  ??4?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::Dar<char>*> *)this;
}

/* 10003062  vgui::Dar<vgui::Dar<char>*>::setElementAt  (5 bytes)
 * void setElementAt(Dar<char> * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::Dar<char> *>::setElementAt(class vgui::Dar<char>
   *,int) */

void __thiscall
vgui::Dar<vgui::Dar<char>*>::setElementAt
          (Dar<vgui::Dar<char>*> *this,Dar<char> *param_1,int param_2)

{
                    /* 0x3062  436  ?setElementAt@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@H@Z
                        */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(Dar<char> **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10003215  vgui::Dar<vgui::Dar<char>*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::Dar<char> *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::Dar<char>*>::removeAll(Dar<vgui::Dar<char>*> *this)

{
                    /* 0x3215  361  ?removeAll@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 100032ba  vgui::Dar<vgui::Dar<char>*>::Dar<vgui::Dar<char>*>  (5 bytes)
 * undefined Dar<vgui::Dar<char>*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::Dar<char> *>::Dar<class vgui::Dar<char> *>(void) */

Dar<vgui::Dar<char>*> * __thiscall
vgui::Dar<vgui::Dar<char>*>::Dar<vgui::Dar<char>*>(Dar<vgui::Dar<char>*> *this)

{
                    /* 0x32ba  8  ??0?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 10003783  vgui::Dar<vgui::Dar<char>*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Dar<char> *>::setCount(int) */

void __thiscall vgui::Dar<vgui::Dar<char>*>::setCount(Dar<vgui::Dar<char>*> *this,int param_1)

{
                    /* 0x3783  418  ?setCount@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10003797  vgui::Dar<vgui::Dar<char>*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::Dar<char> *>::getCount(void) */

int __thiscall vgui::Dar<vgui::Dar<char>*>::getCount(Dar<vgui::Dar<char>*> *this)

{
                    /* 0x3797  273  ?getCount@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 1000386e  vgui::Dar<vgui::Dar<char>*>::removeElement  (5 bytes)
 * void removeElement(Dar<char> * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Dar<char> *>::removeElement(class vgui::Dar<char>
   *) */

void __thiscall
vgui::Dar<vgui::Dar<char>*>::removeElement(Dar<vgui::Dar<char>*> *this,Dar<char> *param_1)

{
  int iStack_c;
  
                    /* 0x386e  379  ?removeElement@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@@Z
                        */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(Dar<char> **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 10003bd9  vgui::Dar<vgui::Dar<char>*>::operator[]  (5 bytes)
 * Dar<char> * operator[](int param_1)
 */
/* public: class vgui::Dar<char> * __thiscall vgui::Dar<class vgui::Dar<char> *>::operator[](int) */

Dar<char> * __thiscall
vgui::Dar<vgui::Dar<char>*>::operator[](Dar<vgui::Dar<char>*> *this,int param_1)

{
  Dar<char> *pDVar1;
  
                    /* 0x3bd9  154  ??A?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEPAV?$Dar@D@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pDVar1 = (Dar<char> *)0x0;
  }
  else {
    pDVar1 = *(Dar<char> **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pDVar1;
}

/* 10003cd8  vgui::Dar<vgui::Dar<char>*>::insertElementAt  (5 bytes)
 * void insertElementAt(Dar<char> * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::Dar<char> *>::insertElementAt(class vgui::Dar<char>
   *,int) */

void __thiscall
vgui::Dar<vgui::Dar<char>*>::insertElementAt
          (Dar<vgui::Dar<char>*> *this,Dar<char> *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x3cd8  316
                       ?insertElementAt@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@H@Z */
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
      *(Dar<char> **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 100040f2  vgui::Dar<vgui::Dar<char>*>::addElement  (5 bytes)
 * void addElement(Dar<char> * param_1)
 * called by: FUN_10012290, FUN_100122e0
 */
/* public: void __thiscall vgui::Dar<class vgui::Dar<char> *>::addElement(class vgui::Dar<char> *)
    */

void __thiscall
vgui::Dar<vgui::Dar<char>*>::addElement(Dar<vgui::Dar<char>*> *this,Dar<char> *param_1)

{
                    /* 0x40f2  231  ?addElement@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(Dar<char> **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

