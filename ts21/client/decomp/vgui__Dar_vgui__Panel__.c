/* client.dll - vgui__Dar_vgui__Panel__ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001a32  vgui::Dar<vgui::Panel*>::removeAll  (5 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<class vgui::Panel *>::removeAll(void) */

void __thiscall vgui::Dar<vgui::Panel*>::removeAll(Dar<vgui::Panel*> *this)

{
                    /* 0x1a32  372  ?removeAll@?$Dar@PAVPanel@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 10001c5d  vgui::Dar<vgui::Panel*>::removeElement  (5 bytes)
 * void removeElement(Panel * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Panel *>::removeElement(class vgui::Panel *) */

void __thiscall vgui::Dar<vgui::Panel*>::removeElement(Dar<vgui::Panel*> *this,Panel *param_1)

{
  int iStack_c;
  
                    /* 0x1c5d  390  ?removeElement@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return;
    }
    if (*(Panel **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  removeElementAt(this,iStack_c);
  return;
}

/* 10001dbb  vgui::Dar<vgui::Panel*>::addElement  (5 bytes)
 * void addElement(Panel * param_1)
 * called by: FUN_10013a10, FUN_10013a60
 */
/* public: void __thiscall vgui::Dar<class vgui::Panel *>::addElement(class vgui::Panel *) */

void __thiscall vgui::Dar<vgui::Panel*>::addElement(Dar<vgui::Panel*> *this,Panel *param_1)

{
                    /* 0x1dbb  242  ?addElement@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@@Z */
  ensureCapacity(this,*(int *)this + 1);
  *(Panel **)(*(int *)(this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 1000269e  vgui::Dar<vgui::Panel*>::ensureCapacity  (5 bytes)
 * void ensureCapacity(int param_1)
 * called by: FUN_10013720, FUN_10013770, FUN_10013950
 */
/* public: void __thiscall vgui::Dar<class vgui::Panel *>::ensureCapacity(int) */

void __thiscall vgui::Dar<vgui::Panel*>::ensureCapacity(Dar<vgui::Panel*> *this,int param_1)

{
  void *_Dst;
  int iStack_14;
  int iStack_c;
  
                    /* 0x269e  263  ?ensureCapacity@?$Dar@PAVPanel@vgui@@@vgui@@QAEXH@Z */
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

/* 100026df  vgui::Dar<vgui::Panel*>::Dar<vgui::Panel*>  (5 bytes)
 * undefined Dar<vgui::Panel*>(int param_1)
 */
/* public: __thiscall vgui::Dar<class vgui::Panel *>::Dar<class vgui::Panel *>(int) */

Dar<vgui::Panel*> * __thiscall
vgui::Dar<vgui::Panel*>::Dar<vgui::Panel*>(Dar<vgui::Panel*> *this,int param_1)

{
                    /* 0x26df  29  ??0?$Dar@PAVPanel@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,param_1);
  return this;
}

/* 100026e9  vgui::Dar<vgui::Panel*>::getCount  (5 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<class vgui::Panel *>::getCount(void) */

int __thiscall vgui::Dar<vgui::Panel*>::getCount(Dar<vgui::Panel*> *this)

{
                    /* 0x26e9  284  ?getCount@?$Dar@PAVPanel@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 100029a0  vgui::Dar<vgui::Panel*>::Dar<vgui::Panel*>  (5 bytes)
 * undefined Dar<vgui::Panel*>(void)
 */
/* public: __thiscall vgui::Dar<class vgui::Panel *>::Dar<class vgui::Panel *>(void) */

Dar<vgui::Panel*> * __thiscall vgui::Dar<vgui::Panel*>::Dar<vgui::Panel*>(Dar<vgui::Panel*> *this)

{
                    /* 0x29a0  30  ??0?$Dar@PAVPanel@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ensureCapacity(this,4);
  return this;
}

/* 100029e6  vgui::Dar<vgui::Panel*>::hasElement  (5 bytes)
 * bool hasElement(Panel * param_1)
 * called by: FUN_10013a10
 */
/* public: bool __thiscall vgui::Dar<class vgui::Panel *>::hasElement(class vgui::Panel *) */

bool __thiscall vgui::Dar<vgui::Panel*>::hasElement(Dar<vgui::Panel*> *this,Panel *param_1)

{
  int iStack_c;
  
                    /* 0x29e6  307  ?hasElement@?$Dar@PAVPanel@vgui@@@vgui@@QAE_NPAVPanel@2@@Z */
  iStack_c = 0;
  while( true ) {
    if (*(int *)this <= iStack_c) {
      return false;
    }
    if (*(Panel **)(*(int *)(this + 8) + iStack_c * 4) == param_1) break;
    iStack_c = iStack_c + 1;
  }
  return true;
}

/* 100033a0  vgui::Dar<vgui::Panel*>::insertElementAt  (5 bytes)
 * void insertElementAt(Panel * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::Panel *>::insertElementAt(class vgui::Panel *,int)
    */

void __thiscall
vgui::Dar<vgui::Panel*>::insertElementAt(Dar<vgui::Panel*> *this,Panel *param_1,int param_2)

{
  int iStack_c;
  
                    /* 0x33a0  327  ?insertElementAt@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@H@Z
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
      *(Panel **)(*(int *)(this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 100033cd  vgui::Dar<vgui::Panel*>::putElement  (5 bytes)
 * void putElement(Panel * param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Panel *>::putElement(class vgui::Panel *) */

void __thiscall vgui::Dar<vgui::Panel*>::putElement(Dar<vgui::Panel*> *this,Panel *param_1)

{
  bool bVar1;
  
                    /* 0x33cd  352  ?putElement@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@@Z */
  bVar1 = hasElement(this,param_1);
  if (!bVar1) {
    addElement(this,param_1);
  }
  return;
}

/* 100034ae  vgui::Dar<vgui::Panel*>::operator[]  (5 bytes)
 * Panel * operator[](int param_1)
 */
/* public: class vgui::Panel * __thiscall vgui::Dar<class vgui::Panel *>::operator[](int) */

Panel * __thiscall vgui::Dar<vgui::Panel*>::operator[](Dar<vgui::Panel*> *this,int param_1)

{
  Panel *pPVar1;
  
                    /* 0x34ae  165  ??A?$Dar@PAVPanel@vgui@@@vgui@@QAEPAVPanel@1@H@Z */
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    pPVar1 = (Panel *)0x0;
  }
  else {
    pPVar1 = *(Panel **)(*(int *)(this + 8) + param_1 * 4);
  }
  return pPVar1;
}

/* 10003607  vgui::Dar<vgui::Panel*>::setCount  (5 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<class vgui::Panel *>::setCount(int) */

void __thiscall vgui::Dar<vgui::Panel*>::setCount(Dar<vgui::Panel*> *this,int param_1)

{
                    /* 0x3607  429  ?setCount@?$Dar@PAVPanel@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10003855  vgui::Dar<vgui::Panel*>::removeElementAt  (5 bytes)
 * void removeElementAt(int param_1)
 * called by: FUN_10013c10
 */
/* public: void __thiscall vgui::Dar<class vgui::Panel *>::removeElementAt(int) */

void __thiscall vgui::Dar<vgui::Panel*>::removeElementAt(Dar<vgui::Panel*> *this,int param_1)

{
  int iStack_c;
  
                    /* 0x3855  408  ?removeElementAt@?$Dar@PAVPanel@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (iStack_c = param_1; iStack_c < *(int *)this + -1; iStack_c = iStack_c + 1) {
      *(undefined4 *)(*(int *)(this + 8) + iStack_c * 4) =
           *(undefined4 *)(*(int *)(this + 8) + 4 + iStack_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 10003b75  vgui::Dar<vgui::Panel*>::operator=  (5 bytes)
 * Dar<class_vgui::Panel*> * operator=(Dar<class_vgui::Panel*> * param_1)
 */
/* public: class vgui::Dar<class vgui::Panel *> & __thiscall vgui::Dar<class vgui::Panel
   *>::operator=(class vgui::Dar<class vgui::Panel *> const &) */

Dar<class_vgui::Panel*> * __thiscall
vgui::Dar<vgui::Panel*>::operator=(Dar<vgui::Panel*> *this,Dar<class_vgui::Panel*> *param_1)

{
                    /* 0x3b75  103  ??4?$Dar@PAVPanel@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return (Dar<class_vgui::Panel*> *)this;
}

/* 10004106  vgui::Dar<vgui::Panel*>::setElementAt  (5 bytes)
 * void setElementAt(Panel * param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<class vgui::Panel *>::setElementAt(class vgui::Panel *,int) */

void __thiscall
vgui::Dar<vgui::Panel*>::setElementAt(Dar<vgui::Panel*> *this,Panel *param_1,int param_2)

{
                    /* 0x4106  447  ?setElementAt@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(Panel **)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

