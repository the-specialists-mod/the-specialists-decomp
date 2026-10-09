/* client.dll - vgui__Dar_char_ (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100011c0  vgui::Dar<char>::operator=  (29 bytes)
 * Dar<char> * operator=(Dar<char> * param_1)
 */
/* public: class vgui::Dar<char> & __thiscall vgui::Dar<char>::operator=(class vgui::Dar<char> const
   &) */

Dar<char> * __thiscall vgui::Dar<char>::operator=(Dar<char> *this,Dar<char> *param_1)

{
                    /* 0x11c0  89  ??4?$Dar@D@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  90  ??4?$Dar@H@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  91  ??4?$Dar@PAD@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  92  ??4?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  93  ??4?$Dar@PAVActionSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  94  ??4?$Dar@PAVButton@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  95  ??4?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  96  ??4?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  97  ??4?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  98  ??4?$Dar@PAVFrame@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  99  ??4?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  100  ??4?$Dar@PAVInputSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  101  ??4?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  102  ??4?$Dar@PAVLabel@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  103  ??4?$Dar@PAVPanel@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  104  ??4?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  105  ??4?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEAAV01@ABV01@@Z
                       0x11c0  106  ??4?$Dar@PAVTickSignal@vgui@@@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

/* 10002630  vgui::Dar<char>::Dar<char>  (120 bytes)
 * undefined Dar<char>(void)
 */
/* public: __thiscall vgui::Dar<char>::Dar<char>(void) */

Dar<char> * __thiscall vgui::Dar<char>::Dar<char>(Dar<char> *this)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x2630  2  ??0?$Dar@D@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar1 = 1;
  do {
    uVar5 = uVar1;
    uVar1 = uVar5 * 2;
  } while ((int)uVar1 < 4);
  puVar2 = operator_new(uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_1006ad84(0);
  }
  puVar6 = puVar2;
  for (uVar5 = (uVar5 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)(this + 4) = uVar1;
  iVar3 = 0;
  if (0 < *(int *)this) {
    do {
      iVar4 = iVar3 + 1;
      *(undefined1 *)(iVar3 + (int)puVar2) = *(undefined1 *)(*(int *)(this + 8) + -1 + iVar4);
      iVar3 = iVar4;
    } while (iVar4 < *(int *)this);
  }
  FUN_1006ad4c(*(LPVOID *)(this + 8));
  *(undefined4 **)(this + 8) = puVar2;
  return this;
}

/* 100026b0  vgui::Dar<char>::Dar<char>  (133 bytes)
 * undefined Dar<char>(int param_1)
 */
/* public: __thiscall vgui::Dar<char>::Dar<char>(int) */

Dar<char> * __thiscall vgui::Dar<char>::Dar<char>(Dar<char> *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x26b0  1  ??0?$Dar@D@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  if (0 < param_1) {
    uVar5 = 1;
    if (1 < param_1) {
      do {
        uVar5 = uVar5 * 2;
      } while ((int)uVar5 < param_1);
    }
    puVar1 = operator_new(uVar5);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_1006ad84(0);
    }
    puVar6 = puVar1;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(this + 4) = uVar5;
    iVar2 = 0;
    if (0 < *(int *)this) {
      do {
        iVar3 = iVar2 + 1;
        *(undefined1 *)(iVar2 + (int)puVar1) = *(undefined1 *)(*(int *)(this + 8) + -1 + iVar3);
        iVar2 = iVar3;
      } while (iVar3 < *(int *)this);
    }
    FUN_1006ad4c(*(LPVOID *)(this + 8));
    *(undefined4 **)(this + 8) = puVar1;
  }
  return this;
}

/* 10002740  vgui::Dar<char>::ensureCapacity  (128 bytes)
 * void ensureCapacity(int param_1)
 */
/* public: void __thiscall vgui::Dar<char>::ensureCapacity(int) */

void __thiscall vgui::Dar<char>::ensureCapacity(Dar<char> *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x2740  249  ?ensureCapacity@?$Dar@D@vgui@@QAEXH@Z */
  uVar5 = *(uint *)(this + 4);
  if ((int)uVar5 < param_1) {
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    for (; (int)uVar5 < param_1; uVar5 = uVar5 * 2) {
    }
    puVar1 = operator_new(uVar5);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_1006ad84(0);
    }
    puVar6 = puVar1;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(this + 4) = uVar5;
    iVar2 = 0;
    if (0 < *(int *)this) {
      do {
        iVar3 = iVar2 + 1;
        *(undefined1 *)(iVar2 + (int)puVar1) = *(undefined1 *)(iVar2 + *(int *)(this + 8));
        iVar2 = iVar3;
      } while (iVar3 < *(int *)this);
    }
    FUN_1006ad4c(*(LPVOID *)(this + 8));
    *(undefined4 **)(this + 8) = puVar1;
  }
  return;
}

/* 100027c0  vgui::Dar<char>::getCount  (3 bytes)
 * int getCount(void)
 */
/* public: int __thiscall vgui::Dar<char>::getCount(void) */

int __thiscall vgui::Dar<char>::getCount(Dar<char> *this)

{
                    /* 0x27c0  270  ?getCount@?$Dar@D@vgui@@QAEHXZ
                       0x27c0  271  ?getCount@?$Dar@H@vgui@@QAEHXZ
                       0x27c0  272  ?getCount@?$Dar@PAD@vgui@@QAEHXZ
                       0x27c0  273  ?getCount@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEHXZ
                       0x27c0  274  ?getCount@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEHXZ
                       0x27c0  275  ?getCount@?$Dar@PAVButton@vgui@@@vgui@@QAEHXZ
                       0x27c0  276  ?getCount@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEHXZ
                       0x27c0  277  ?getCount@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEHXZ
                       0x27c0  278  ?getCount@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEHXZ
                       0x27c0  279  ?getCount@?$Dar@PAVFrame@vgui@@@vgui@@QAEHXZ
                       0x27c0  280  ?getCount@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEHXZ
                       0x27c0  281  ?getCount@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEHXZ
                       0x27c0  282  ?getCount@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEHXZ
                       0x27c0  283  ?getCount@?$Dar@PAVLabel@vgui@@@vgui@@QAEHXZ
                       0x27c0  284  ?getCount@?$Dar@PAVPanel@vgui@@@vgui@@QAEHXZ
                       0x27c0  285  ?getCount@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEHXZ
                       0x27c0  286  ?getCount@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEHXZ
                       0x27c0  287  ?getCount@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEHXZ */
  return *(int *)this;
}

/* 100027d0  vgui::Dar<char>::addElement  (144 bytes)
 * void addElement(char param_1)
 */
/* public: void __thiscall vgui::Dar<char>::addElement(char) */

void __thiscall vgui::Dar<char>::addElement(Dar<char> *this,char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 unaff_retaddr;
  
                    /* 0x27d0  228  ?addElement@?$Dar@D@vgui@@QAEXD@Z */
  uVar5 = *(uint *)(this + 4);
  if ((int)uVar5 < *(int *)this + 1) {
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    for (; (int)uVar5 < *(int *)this + 1; uVar5 = uVar5 * 2) {
    }
    puVar1 = operator_new(uVar5);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_1006ad84(0);
    }
    puVar6 = puVar1;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(this + 4) = uVar5;
    iVar2 = 0;
    if (0 < *(int *)this) {
      do {
        iVar3 = iVar2 + 1;
        *(undefined1 *)(iVar2 + (int)puVar1) = *(undefined1 *)(*(int *)(this + 8) + -1 + iVar3);
        iVar2 = iVar3;
      } while (iVar3 < *(int *)this);
    }
    FUN_1006ad4c(*(LPVOID *)(this + 8));
    *(undefined4 **)(this + 8) = puVar1;
  }
  *(undefined1 *)(*(int *)(this + 8) + *(int *)this) = unaff_retaddr;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10002860  vgui::Dar<char>::hasElement  (38 bytes)
 * bool hasElement(char param_1)
 */
/* public: bool __thiscall vgui::Dar<char>::hasElement(char) */

bool __thiscall vgui::Dar<char>::hasElement(Dar<char> *this,char param_1)

{
  int iVar1;
  
                    /* 0x2860  293  ?hasElement@?$Dar@D@vgui@@QAE_ND@Z */
  iVar1 = 0;
  if (0 < *(int *)this) {
    do {
      if (*(char *)(*(int *)(this + 8) + iVar1) == param_1) {
        return true;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)this);
  }
  return false;
}

/* 10002890  vgui::Dar<char>::putElement  (175 bytes)
 * void putElement(char param_1)
 */
/* public: void __thiscall vgui::Dar<char>::putElement(char) */

void __thiscall vgui::Dar<char>::putElement(Dar<char> *this,char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 unaff_retaddr;
  
                    /* 0x2890  338  ?putElement@?$Dar@D@vgui@@QAEXD@Z */
  iVar1 = 0;
  iVar3 = *(int *)this;
  if (0 < iVar3) {
    do {
      if (*(char *)(*(int *)(this + 8) + iVar1) == param_1) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  uVar5 = *(uint *)(this + 4);
  if ((int)uVar5 < iVar3 + 1) {
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    for (; (int)uVar5 < iVar3 + 1; uVar5 = uVar5 * 2) {
    }
    puVar2 = operator_new(uVar5);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_1006ad84(0);
    }
    puVar6 = puVar2;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(this + 4) = uVar5;
    iVar3 = 0;
    if (0 < *(int *)this) {
      do {
        iVar1 = iVar3 + 1;
        *(undefined1 *)(iVar3 + (int)puVar2) = *(undefined1 *)(*(int *)(this + 8) + -1 + iVar1);
        iVar3 = iVar1;
      } while (iVar1 < *(int *)this);
    }
    FUN_1006ad4c(*(LPVOID *)(this + 8));
    *(undefined4 **)(this + 8) = puVar2;
  }
  *(undefined1 *)(*(int *)(this + 8) + *(int *)this) = unaff_retaddr;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10002940  vgui::Dar<char>::insertElementAt  (346 bytes)
 * void insertElementAt(char param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<char>::insertElementAt(char,int) */

void __thiscall vgui::Dar<char>::insertElementAt(Dar<char> *this,char param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 unaff_retaddr;
  undefined3 in_stack_00000005;
  
                    /* 0x2940  313  ?insertElementAt@?$Dar@D@vgui@@QAEXDH@Z */
  if (-1 < param_2) {
    iVar3 = *(int *)this;
    if (param_2 == iVar3 || param_2 < iVar3) {
      if ((param_2 != iVar3) && (iVar3 != 0)) {
        uVar5 = *(uint *)(this + 4);
        if ((int)uVar5 < iVar3 + 1) {
          if (uVar5 == 0) {
            uVar5 = 1;
          }
          for (; (int)uVar5 < iVar3 + 1; uVar5 = uVar5 * 2) {
          }
          puVar1 = operator_new(uVar5);
          if (puVar1 == (undefined4 *)0x0) {
            FUN_1006ad84(0);
          }
          puVar6 = puVar1;
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          *(uint *)(this + 4) = uVar5;
          iVar3 = 0;
          if (0 < *(int *)this) {
            do {
              iVar2 = iVar3 + 1;
              *(undefined1 *)(iVar3 + (int)puVar1) =
                   *(undefined1 *)(*(int *)(this + 8) + -1 + iVar2);
              iVar3 = iVar2;
            } while (iVar2 < *(int *)this);
          }
          FUN_1006ad4c(*(LPVOID *)(this + 8));
          *(undefined4 **)(this + 8) = puVar1;
          param_2 = _param_1;
        }
        *(undefined1 *)(*(int *)(this + 8) + *(int *)this) = unaff_retaddr;
        iVar3 = *(int *)this;
        *(int *)this = iVar3 + 1;
        for (; param_2 < iVar3; iVar3 = iVar3 + -1) {
          *(undefined1 *)(*(int *)(this + 8) + iVar3) =
               ((undefined1 *)(*(int *)(this + 8) + iVar3))[-1];
        }
        *(undefined1 *)(*(int *)(this + 8) + param_2) = unaff_retaddr;
        return;
      }
      uVar5 = *(uint *)(this + 4);
      if ((int)uVar5 < iVar3 + 1) {
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        for (; (int)uVar5 < iVar3 + 1; uVar5 = uVar5 * 2) {
        }
        puVar1 = operator_new(uVar5);
        if (puVar1 == (undefined4 *)0x0) {
          FUN_1006ad84(0);
        }
        puVar6 = puVar1;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(uint *)(this + 4) = uVar5;
        iVar3 = 0;
        if (0 < *(int *)this) {
          do {
            iVar2 = iVar3 + 1;
            *(undefined1 *)(iVar3 + (int)puVar1) = *(undefined1 *)(*(int *)(this + 8) + -1 + iVar2);
            iVar3 = iVar2;
          } while (iVar2 < *(int *)this);
        }
        FUN_1006ad4c(*(LPVOID *)(this + 8));
        *(undefined4 **)(this + 8) = puVar1;
      }
      *(undefined1 *)(*(int *)(this + 8) + *(int *)this) = unaff_retaddr;
      *(int *)this = *(int *)this + 1;
    }
  }
  return;
}

/* 10002aa0  vgui::Dar<char>::setElementAt  (25 bytes)
 * void setElementAt(char param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<char>::setElementAt(char,int) */

void __thiscall vgui::Dar<char>::setElementAt(Dar<char> *this,char param_1,int param_2)

{
                    /* 0x2aa0  433  ?setElementAt@?$Dar@D@vgui@@QAEXDH@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(char *)(*(int *)(this + 8) + param_2) = param_1;
  }
  return;
}

/* 10002ac0  vgui::Dar<char>::removeElementAt  (47 bytes)
 * void removeElementAt(int param_1)
 */
/* public: void __thiscall vgui::Dar<char>::removeElementAt(int) */

void __thiscall vgui::Dar<char>::removeElementAt(Dar<char> *this,int param_1)

{
  undefined1 *puVar1;
  
                    /* 0x2ac0  394  ?removeElementAt@?$Dar@D@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    if (param_1 < *(int *)this + -1) {
      do {
        puVar1 = (undefined1 *)(*(int *)(this + 8) + param_1);
        param_1 = param_1 + 1;
        *puVar1 = puVar1[1];
      } while (param_1 < *(int *)this + -1);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 10002af0  vgui::Dar<char>::removeElement  (73 bytes)
 * void removeElement(char param_1)
 */
/* public: void __thiscall vgui::Dar<char>::removeElement(char) */

void __thiscall vgui::Dar<char>::removeElement(Dar<char> *this,char param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x2af0  376  ?removeElement@?$Dar@D@vgui@@QAEXD@Z */
  iVar3 = 0;
  iVar2 = *(int *)this;
  if (0 < iVar2) {
    while (*(char *)(*(int *)(this + 8) + iVar3) != param_1) {
      iVar3 = iVar3 + 1;
      if (iVar2 <= iVar3) {
        return;
      }
    }
    if ((-1 < iVar3) && (iVar3 < iVar2)) {
      if (iVar3 < iVar2 + -1) {
        do {
          puVar1 = (undefined1 *)(*(int *)(this + 8) + iVar3);
          iVar3 = iVar3 + 1;
          *puVar1 = puVar1[1];
        } while (iVar3 < *(int *)this + -1);
      }
      *(int *)this = *(int *)this + -1;
    }
  }
  return;
}

/* 10002b40  vgui::Dar<char>::removeAll  (7 bytes)
 * void removeAll(void)
 */
/* public: void __thiscall vgui::Dar<char>::removeAll(void) */

void __thiscall vgui::Dar<char>::removeAll(Dar<char> *this)

{
                    /* 0x2b40  358  ?removeAll@?$Dar@D@vgui@@QAEXXZ
                       0x2b40  359  ?removeAll@?$Dar@H@vgui@@QAEXXZ
                       0x2b40  360  ?removeAll@?$Dar@PAD@vgui@@QAEXXZ
                       0x2b40  361  ?removeAll@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXXZ
                       0x2b40  362  ?removeAll@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXXZ
                       0x2b40  363  ?removeAll@?$Dar@PAVButton@vgui@@@vgui@@QAEXXZ
                       0x2b40  364  ?removeAll@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXXZ
                       0x2b40  365  ?removeAll@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXXZ
                       0x2b40  366  ?removeAll@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXXZ
                       0x2b40  367  ?removeAll@?$Dar@PAVFrame@vgui@@@vgui@@QAEXXZ
                       0x2b40  368  ?removeAll@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXXZ
                       0x2b40  369  ?removeAll@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXXZ
                       0x2b40  370  ?removeAll@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXXZ
                       0x2b40  371  ?removeAll@?$Dar@PAVLabel@vgui@@@vgui@@QAEXXZ
                       0x2b40  372  ?removeAll@?$Dar@PAVPanel@vgui@@@vgui@@QAEXXZ
                       0x2b40  373  ?removeAll@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXXZ
                       0x2b40  374  ?removeAll@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXXZ
                       0x2b40  375  ?removeAll@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXXZ */
  *(undefined4 *)this = 0;
  return;
}

/* 10002b50  vgui::Dar<char>::operator[]  (26 bytes)
 * char operator[](int param_1)
 */
/* public: char __thiscall vgui::Dar<char>::operator[](int) */

char __thiscall vgui::Dar<char>::operator[](Dar<char> *this,int param_1)

{
                    /* 0x2b50  151  ??A?$Dar@D@vgui@@QAEDH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    return *(char *)(*(int *)(this + 8) + param_1);
  }
  return '\0';
}

/* 10002c90  vgui::Dar<char>::setCount  (18 bytes)
 * void setCount(int param_1)
 */
/* public: void __thiscall vgui::Dar<char>::setCount(int) */

void __thiscall vgui::Dar<char>::setCount(Dar<char> *this,int param_1)

{
                    /* 0x2c90  415  ?setCount@?$Dar@D@vgui@@QAEXH@Z
                       0x2c90  416  ?setCount@?$Dar@H@vgui@@QAEXH@Z
                       0x2c90  417  ?setCount@?$Dar@PAD@vgui@@QAEXH@Z
                       0x2c90  418  ?setCount@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXH@Z
                       0x2c90  419  ?setCount@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c90  420  ?setCount@?$Dar@PAVButton@vgui@@@vgui@@QAEXH@Z
                       0x2c90  421  ?setCount@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c90  422  ?setCount@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXH@Z
                       0x2c90  423  ?setCount@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c90  424  ?setCount@?$Dar@PAVFrame@vgui@@@vgui@@QAEXH@Z
                       0x2c90  425  ?setCount@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c90  426  ?setCount@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c90  427  ?setCount@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c90  428  ?setCount@?$Dar@PAVLabel@vgui@@@vgui@@QAEXH@Z
                       0x2c90  429  ?setCount@?$Dar@PAVPanel@vgui@@@vgui@@QAEXH@Z
                       0x2c90  430  ?setCount@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c90  431  ?setCount@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXH@Z
                       0x2c90  432  ?setCount@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

