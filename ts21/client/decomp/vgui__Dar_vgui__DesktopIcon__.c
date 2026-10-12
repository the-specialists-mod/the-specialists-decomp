/* client.dll - vgui__Dar_vgui__DesktopIcon__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100015a0  vgui::Dar<vgui::DesktopIcon*>::Dar<vgui::DesktopIcon*>  (5 bytes)
 * undefined Dar<vgui::DesktopIcon*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::DesktopIcon *>::Dar<class vgui::DesktopIcon *>(int) */

Dar<vgui::DesktopIcon*> * __thiscall
vgui::Dar<vgui::DesktopIcon*>::Dar<vgui::DesktopIcon*>(Dar<vgui::DesktopIcon*> *this,int param_1)

{
                    /* 0x15a0  15  ??0?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 10001901  vgui::Dar<vgui::DesktopIcon*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_10012b60, FUN_10012bb0, FUN_10012d90
 */
/* public: void __thiscall vgui::Dar<class vgui::DesktopIcon *>::ensureCapacity(int) */

void __thiscall
vgui::Dar<vgui::DesktopIcon*>::ensureCapacity(Dar<vgui::DesktopIcon*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x1901  256  ?ensureCapacity@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXH@Z */
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

/* 10001997  vgui::Dar<vgui::DesktopIcon*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::DesktopIcon *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::DesktopIcon*>::removeAll(Dar<vgui::DesktopIcon*> *this)

{
                    /* 0x1997  365  ?removeAll@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 10001ae6  vgui::Dar<vgui::DesktopIcon*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::DesktopIcon *>::setCount(int) */

void __thiscall vgui::Dar<vgui::DesktopIcon*>::setCount(Dar<vgui::DesktopIcon*> *this,int param_1)

{
                    /* 0x1ae6  422  ?setCount@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10001b31  vgui::Dar<vgui::DesktopIcon*>::Dar<vgui::DesktopIcon*>  (5 bytes)
 * undefined Dar<vgui::DesktopIcon*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::DesktopIcon *>::Dar<class vgui::DesktopIcon *>(void) */

Dar<vgui::DesktopIcon*> * __thiscall
vgui::Dar<vgui::DesktopIcon*>::Dar<vgui::DesktopIcon*>(Dar<vgui::DesktopIcon*> *this)

{
                    /* 0x1b31  16  ??0?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 1000213f  vgui::Dar<vgui::DesktopIcon*>::insertElementAt  (5 bytes)
 * void insertElementAt(DesktopIcon * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::DesktopIcon *>::insertElementAt(class
   vgui::DesktopIcon *,int) */

void __thiscall
vgui::Dar<vgui::DesktopIcon*>::insertElementAt
          (Dar<vgui::DesktopIcon*> *this,DesktopIcon *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x213f  320
                       ?insertElementAt@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@H@Z
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
      *(DesktopIcon **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 100022f7  vgui::Dar<vgui::DesktopIcon*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::DesktopIcon *>::getCount(void) */

int __thiscall vgui::Dar<vgui::DesktopIcon*>::getCount(Dar<vgui::DesktopIcon*> *this)

{
                    /* 0x22f7  277  ?getCount@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10002883  vgui::Dar<vgui::DesktopIcon*>::hasElement  (5 bytes)
 * bool hasElement(DesktopIcon * param_1)
 * called by: FUN_10012e50
 */
/* public: bool __thiscall vgui::Dar<class vgui::DesktopIcon *>::hasElement(class vgui::DesktopIcon
   *) */

bool __thiscall
vgui::Dar<vgui::DesktopIcon*>::hasElement(Dar<vgui::DesktopIcon*> *this,DesktopIcon *param_1)

{
  int iStack_c;
  
                    /* 0x2883  300
                       ?hasElement@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAE_NPAVDesktopIcon@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(DesktopIcon **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 10002f45  vgui::Dar<vgui::DesktopIcon*>::setElementAt  (5 bytes)
 * void setElementAt(DesktopIcon * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::DesktopIcon *>::setElementAt(class
   vgui::DesktopIcon *,int) */

void __thiscall
vgui::Dar<vgui::DesktopIcon*>::setElementAt
          (Dar<vgui::DesktopIcon*> *this,DesktopIcon *param_1,int param_2)

{
                    /* 0x2f45  440
                       ?setElementAt@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(DesktopIcon **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10003517  vgui::Dar<vgui::DesktopIcon*>::addElement  (5 bytes)
 * void addElement(DesktopIcon * param_1)
 * called by: FUN_10012e50, FUN_10012ea0
 */
/* public: void __thiscall vgui::Dar<class vgui::DesktopIcon *>::addElement(class vgui::DesktopIcon
   *) */

void __thiscall
vgui::Dar<vgui::DesktopIcon*>::addElement(Dar<vgui::DesktopIcon*> *this,DesktopIcon *param_1)

{
                    /* 0x3517  235
                       ?addElement@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(DesktopIcon **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10003698  vgui::Dar<vgui::DesktopIcon*>::operator[]  (5 bytes)
 * DesktopIcon * operator[](int param_1)
 */
/* public: class vgui::DesktopIcon * __thiscall vgui::Dar<class vgui::DesktopIcon
   *>::operator[](int) */

DesktopIcon * __thiscall
vgui::Dar<vgui::DesktopIcon*>::operator[](Dar<vgui::DesktopIcon*> *this,int param_1)

{
  DesktopIcon *pDVar1;
  
                    /* 0x3698  158  ??A?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEPAVDesktopIcon@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pDVar1 = (DesktopIcon *)0x0;
  }
  else {
    pDVar1 = *(DesktopIcon **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pDVar1;
}

/* 100039cc  vgui::Dar<vgui::DesktopIcon*>::operator=  (5 bytes)
 * Dar<class_vgui::DesktopIcon*> * operator=(Dar<class_vgui::DesktopIcon*> * param_1)
 */
/* public: class vgui::Dar<class vgui::DesktopIcon *> & __thiscall vgui::Dar<class vgui::DesktopIcon
   *>::operator=(class vgui::Dar<class vgui::DesktopIcon *> const &) */

Dar<class_vgui::DesktopIcon*> * __thiscall
vgui::Dar<vgui::DesktopIcon*>::operator=
          (Dar<vgui::DesktopIcon*> *this,Dar<class_vgui::DesktopIcon*> *param_1)

{
                    /* 0x39cc  96  ??4?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::DesktopIcon*> *)this;
}

/* 10003bf2  vgui::Dar<vgui::DesktopIcon*>::putElement  (5 bytes)
 * void putElement(DesktopIcon * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::DesktopIcon *>::putElement(class vgui::DesktopIcon
   *) */

void __thiscall
vgui::Dar<vgui::DesktopIcon*>::putElement(Dar<vgui::DesktopIcon*> *this,DesktopIcon *param_1)

{
  bool bVar1;
  
                    /* 0x3bf2  345
                       ?putElement@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10003bf7  vgui::Dar<vgui::DesktopIcon*>::removeElement  (5 bytes)
 * void removeElement(DesktopIcon * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::DesktopIcon *>::removeElement(class
   vgui::DesktopIcon *) */

void __thiscall
vgui::Dar<vgui::DesktopIcon*>::removeElement(Dar<vgui::DesktopIcon*> *this,DesktopIcon *param_1)

{
  int iStack_c;
  
                    /* 0x3bf7  383
                       ?removeElement@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(DesktopIcon **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 10003d3c  vgui::Dar<vgui::DesktopIcon*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_10013050
 */
/* public: void __thiscall vgui::Dar<class vgui::DesktopIcon *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::DesktopIcon*>::removeElementAt(Dar<vgui::DesktopIcon*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x3d3c  401  ?removeElementAt@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

