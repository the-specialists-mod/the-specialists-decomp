/* client.dll - vgui__Dar_vgui__SurfaceBase__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001906  vgui::Dar<vgui::SurfaceBase*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::SurfaceBase *>::setCount(int) */

void __thiscall vgui::Dar<vgui::SurfaceBase*>::setCount(Dar<vgui::SurfaceBase*> *this,int param_1)

{
                    /* 0x1906  431  ?setCount@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10001b3b  vgui::Dar<vgui::SurfaceBase*>::insertElementAt  (5 bytes)
 * void insertElementAt(SurfaceBase * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::SurfaceBase *>::insertElementAt(class
   vgui::SurfaceBase *,int) */

void __thiscall
vgui::Dar<vgui::SurfaceBase*>::insertElementAt
          (Dar<vgui::SurfaceBase*> *this,SurfaceBase *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x1b3b  329
                       ?insertElementAt@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@H@Z
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
      *(SurfaceBase **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10001b4f  vgui::Dar<vgui::SurfaceBase*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::SurfaceBase *>::getCount(void) */

int __thiscall vgui::Dar<vgui::SurfaceBase*>::getCount(Dar<vgui::SurfaceBase*> *this)

{
                    /* 0x1b4f  286  ?getCount@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 10001b59  vgui::Dar<vgui::SurfaceBase*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::SurfaceBase *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::SurfaceBase*>::removeAll(Dar<vgui::SurfaceBase*> *this)

{
                    /* 0x1b59  374  ?removeAll@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 10001f9b  vgui::Dar<vgui::SurfaceBase*>::addElement  (5 bytes)
 * void addElement(SurfaceBase * param_1)
 * called by: FUN_1000f970, FUN_1000f9c0
 */
/* public: void __thiscall vgui::Dar<class vgui::SurfaceBase *>::addElement(class vgui::SurfaceBase
   *) */

void __thiscall
vgui::Dar<vgui::SurfaceBase*>::addElement(Dar<vgui::SurfaceBase*> *this,SurfaceBase *param_1)

{
                    /* 0x1f9b  244
                       ?addElement@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(SurfaceBase **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10002185  vgui::Dar<vgui::SurfaceBase*>::Dar<vgui::SurfaceBase*>  (5 bytes)
 * undefined Dar<vgui::SurfaceBase*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::SurfaceBase *>::Dar<class vgui::SurfaceBase *>(int) */

Dar<vgui::SurfaceBase*> * __thiscall
vgui::Dar<vgui::SurfaceBase*>::Dar<vgui::SurfaceBase*>(Dar<vgui::SurfaceBase*> *this,int param_1)

{
                    /* 0x2185  33  ??0?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 100022de  vgui::Dar<vgui::SurfaceBase*>::hasElement  (5 bytes)
 * bool hasElement(SurfaceBase * param_1)
 * called by: FUN_1000f970
 */
/* public: bool __thiscall vgui::Dar<class vgui::SurfaceBase *>::hasElement(class vgui::SurfaceBase
   *) */

bool __thiscall
vgui::Dar<vgui::SurfaceBase*>::hasElement(Dar<vgui::SurfaceBase*> *this,SurfaceBase *param_1)

{
  int iStack_c;
  
                    /* 0x22de  309
                       ?hasElement@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAE_NPAVSurfaceBase@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(SurfaceBase **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 1000244b  vgui::Dar<vgui::SurfaceBase*>::setElementAt  (5 bytes)
 * void setElementAt(SurfaceBase * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::SurfaceBase *>::setElementAt(class
   vgui::SurfaceBase *,int) */

void __thiscall
vgui::Dar<vgui::SurfaceBase*>::setElementAt
          (Dar<vgui::SurfaceBase*> *this,SurfaceBase *param_1,int param_2)

{
                    /* 0x244b  449
                       ?setElementAt@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(SurfaceBase **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10002789  vgui::Dar<vgui::SurfaceBase*>::Dar<vgui::SurfaceBase*>  (5 bytes)
 * undefined Dar<vgui::SurfaceBase*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::SurfaceBase *>::Dar<class vgui::SurfaceBase *>(void) */

Dar<vgui::SurfaceBase*> * __thiscall
vgui::Dar<vgui::SurfaceBase*>::Dar<vgui::SurfaceBase*>(Dar<vgui::SurfaceBase*> *this)

{
                    /* 0x2789  34  ??0?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 10002e19  vgui::Dar<vgui::SurfaceBase*>::putElement  (5 bytes)
 * void putElement(SurfaceBase * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::SurfaceBase *>::putElement(class vgui::SurfaceBase
   *) */

void __thiscall
vgui::Dar<vgui::SurfaceBase*>::putElement(Dar<vgui::SurfaceBase*> *this,SurfaceBase *param_1)

{
  bool bVar1;
  
                    /* 0x2e19  354
                       ?putElement@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 10003576  vgui::Dar<vgui::SurfaceBase*>::removeElement  (5 bytes)
 * void removeElement(SurfaceBase * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::SurfaceBase *>::removeElement(class
   vgui::SurfaceBase *) */

void __thiscall
vgui::Dar<vgui::SurfaceBase*>::removeElement(Dar<vgui::SurfaceBase*> *this,SurfaceBase *param_1)

{
  int iStack_c;
  
                    /* 0x3576  392
                       ?removeElement@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(SurfaceBase **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 10003701  vgui::Dar<vgui::SurfaceBase*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_1000f680, FUN_1000f6d0, FUN_1000f8b0
 */
/* public: void __thiscall vgui::Dar<class vgui::SurfaceBase *>::ensureCapacity(int) */

void __thiscall
vgui::Dar<vgui::SurfaceBase*>::ensureCapacity(Dar<vgui::SurfaceBase*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x3701  265  ?ensureCapacity@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXH@Z */
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

/* 100038aa  vgui::Dar<vgui::SurfaceBase*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_1000fb70
 */
/* public: void __thiscall vgui::Dar<class vgui::SurfaceBase *>::removeElementAt(int) */

void __thiscall
vgui::Dar<vgui::SurfaceBase*>::removeElementAt(Dar<vgui::SurfaceBase*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x38aa  410  ?removeElementAt@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 10003d46  vgui::Dar<vgui::SurfaceBase*>::operator=  (5 bytes)
 * Dar<class_vgui::SurfaceBase*> * operator=(Dar<class_vgui::SurfaceBase*> * param_1)
 */
/* public: class vgui::Dar<class vgui::SurfaceBase *> & __thiscall vgui::Dar<class vgui::SurfaceBase
   *>::operator=(class vgui::Dar<class vgui::SurfaceBase *> const &) */

Dar<class_vgui::SurfaceBase*> * __thiscall
vgui::Dar<vgui::SurfaceBase*>::operator=
          (Dar<vgui::SurfaceBase*> *this,Dar<class_vgui::SurfaceBase*> *param_1)

{
                    /* 0x3d46  105  ??4?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::SurfaceBase*> *)this;
}

/* 10003d50  vgui::Dar<vgui::SurfaceBase*>::operator[]  (5 bytes)
 * SurfaceBase * operator[](int param_1)
 */
/* public: class vgui::SurfaceBase * __thiscall vgui::Dar<class vgui::SurfaceBase
   *>::operator[](int) */

SurfaceBase * __thiscall
vgui::Dar<vgui::SurfaceBase*>::operator[](Dar<vgui::SurfaceBase*> *this,int param_1)

{
  SurfaceBase *pSVar1;
  
                    /* 0x3d50  167  ??A?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEPAVSurfaceBase@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pSVar1 = (SurfaceBase *)0x0;
  }
  else {
    pSVar1 = *(SurfaceBase **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pSVar1;
}

