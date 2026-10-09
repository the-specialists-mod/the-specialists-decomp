/* client.dll - vgui__Dar_int_ (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10002b70  vgui::Dar<int>::Dar<int>  (140 bytes)
 * undefined Dar<int>(int param_1)
 */
/* public: __thiscall vgui::Dar<int>::Dar<int>(int) */

Dar<int> * __thiscall vgui::Dar<int>::Dar<int>(Dar<int> *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x2b70  3  ??0?$Dar@H@vgui@@QAE@H@Z
                       0x2b70  5  ??0?$Dar@PAD@vgui@@QAE@H@Z
                       0x2b70  7  ??0?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAE@H@Z
                       0x2b70  9  ??0?$Dar@PAVActionSignal@vgui@@@vgui@@QAE@H@Z
                       0x2b70  11  ??0?$Dar@PAVButton@vgui@@@vgui@@QAE@H@Z
                       0x2b70  13  ??0?$Dar@PAVChangeSignal@vgui@@@vgui@@QAE@H@Z
                       0x2b70  15  ??0?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAE@H@Z
                       0x2b70  17  ??0?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAE@H@Z
                       0x2b70  19  ??0?$Dar@PAVFrame@vgui@@@vgui@@QAE@H@Z
                       0x2b70  21  ??0?$Dar@PAVFrameSignal@vgui@@@vgui@@QAE@H@Z
                       0x2b70  23  ??0?$Dar@PAVInputSignal@vgui@@@vgui@@QAE@H@Z
                       0x2b70  25  ??0?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAE@H@Z
                       0x2b70  27  ??0?$Dar@PAVLabel@vgui@@@vgui@@QAE@H@Z
                       0x2b70  29  ??0?$Dar@PAVPanel@vgui@@@vgui@@QAE@H@Z
                       0x2b70  31  ??0?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAE@H@Z
                       0x2b70  33  ??0?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAE@H@Z
                       0x2b70  35  ??0?$Dar@PAVTickSignal@vgui@@@vgui@@QAE@H@Z */
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
    puVar1 = operator_new(uVar5 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_1006ad84(0);
    }
    puVar6 = puVar1;
    for (uVar3 = uVar5 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(this + 4) = uVar5;
    iVar4 = 0;
    if (0 < *(int *)this) {
      do {
        iVar2 = iVar4 + 1;
        puVar1[iVar4] = *(undefined4 *)(*(int *)(this + 8) + -4 + iVar2 * 4);
        iVar4 = iVar2;
      } while (iVar2 < *(int *)this);
    }
    FUN_1006ad4c(*(LPVOID *)(this + 8));
    *(undefined4 **)(this + 8) = puVar1;
  }
  return this;
}

/* 10002c00  vgui::Dar<int>::ensureCapacity  (135 bytes)
 * void ensureCapacity(int param_1)
 */
/* public: void __thiscall vgui::Dar<int>::ensureCapacity(int) */

void __thiscall vgui::Dar<int>::ensureCapacity(Dar<int> *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x2c00  250  ?ensureCapacity@?$Dar@H@vgui@@QAEXH@Z
                       0x2c00  251  ?ensureCapacity@?$Dar@PAD@vgui@@QAEXH@Z
                       0x2c00  252  ?ensureCapacity@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXH@Z
                       0x2c00  253  ?ensureCapacity@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c00  254  ?ensureCapacity@?$Dar@PAVButton@vgui@@@vgui@@QAEXH@Z
                       0x2c00  255  ?ensureCapacity@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c00  256  ?ensureCapacity@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXH@Z
                       0x2c00  257  ?ensureCapacity@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c00  258  ?ensureCapacity@?$Dar@PAVFrame@vgui@@@vgui@@QAEXH@Z
                       0x2c00  259  ?ensureCapacity@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c00  260  ?ensureCapacity@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c00  261  ?ensureCapacity@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c00  262  ?ensureCapacity@?$Dar@PAVLabel@vgui@@@vgui@@QAEXH@Z
                       0x2c00  263  ?ensureCapacity@?$Dar@PAVPanel@vgui@@@vgui@@QAEXH@Z
                       0x2c00  264  ?ensureCapacity@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXH@Z
                       0x2c00  265  ?ensureCapacity@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXH@Z
                       0x2c00  266  ?ensureCapacity@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXH@Z */
  uVar5 = *(uint *)(this + 4);
  if ((int)uVar5 < param_1) {
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    for (; (int)uVar5 < param_1; uVar5 = uVar5 * 2) {
    }
    puVar1 = operator_new(uVar5 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_1006ad84(0);
    }
    puVar6 = puVar1;
    for (uVar3 = uVar5 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(this + 4) = uVar5;
    iVar4 = 0;
    if (0 < *(int *)this) {
      do {
        iVar2 = iVar4 + 1;
        puVar1[iVar4] = *(undefined4 *)(*(int *)(this + 8) + -4 + iVar2 * 4);
        iVar4 = iVar2;
      } while (iVar2 < *(int *)this);
    }
    FUN_1006ad4c(*(LPVOID *)(this + 8));
    *(undefined4 **)(this + 8) = puVar1;
  }
  return;
}

/* 10002cb0  vgui::Dar<int>::hasElement  (40 bytes)
 * bool hasElement(int param_1)
 */
/* public: bool __thiscall vgui::Dar<int>::hasElement(int) */

bool __thiscall vgui::Dar<int>::hasElement(Dar<int> *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x2cb0  294  ?hasElement@?$Dar@H@vgui@@QAE_NH@Z
                       0x2cb0  295  ?hasElement@?$Dar@PAD@vgui@@QAE_NPAD@Z
                       0x2cb0  296  ?hasElement@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAE_NPAV?$Dar@D@2@@Z
                       0x2cb0  297
                       ?hasElement@?$Dar@PAVActionSignal@vgui@@@vgui@@QAE_NPAVActionSignal@2@@Z
                       0x2cb0  298  ?hasElement@?$Dar@PAVButton@vgui@@@vgui@@QAE_NPAVButton@2@@Z
                       0x2cb0  299
                       ?hasElement@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAE_NPAVChangeSignal@2@@Z
                       0x2cb0  300
                       ?hasElement@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAE_NPAVDesktopIcon@2@@Z
                       0x2cb0  301
                       ?hasElement@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAE_NPAVFocusChangeSignal@2@@Z
                       0x2cb0  302  ?hasElement@?$Dar@PAVFrame@vgui@@@vgui@@QAE_NPAVFrame@2@@Z
                       0x2cb0  303
                       ?hasElement@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAE_NPAVFrameSignal@2@@Z
                       0x2cb0  304
                       ?hasElement@?$Dar@PAVInputSignal@vgui@@@vgui@@QAE_NPAVInputSignal@2@@Z
                       0x2cb0  305
                       ?hasElement@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAE_NPAVIntChangeSignal@2@@Z
                       0x2cb0  306  ?hasElement@?$Dar@PAVLabel@vgui@@@vgui@@QAE_NPAVLabel@2@@Z
                       0x2cb0  307  ?hasElement@?$Dar@PAVPanel@vgui@@@vgui@@QAE_NPAVPanel@2@@Z
                       0x2cb0  308
                       ?hasElement@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAE_NPAVRepaintSignal@2@@Z
                       0x2cb0  309
                       ?hasElement@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAE_NPAVSurfaceBase@2@@Z
                       0x2cb0  310
                       ?hasElement@?$Dar@PAVTickSignal@vgui@@@vgui@@QAE_NPAVTickSignal@2@@Z */
  iVar1 = 0;
  if (0 < *(int *)this) {
    piVar2 = *(int **)(this + 8);
    do {
      if (*piVar2 == param_1) {
        return true;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)this);
  }
  return false;
}

/* 10002ce0  vgui::Dar<int>::insertElementAt  (362 bytes)
 * void insertElementAt(int param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<int>::insertElementAt(int,int) */

void __thiscall vgui::Dar<int>::insertElementAt(Dar<int> *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 unaff_retaddr;
  
                    /* 0x2ce0  314  ?insertElementAt@?$Dar@H@vgui@@QAEXHH@Z
                       0x2ce0  315  ?insertElementAt@?$Dar@PAD@vgui@@QAEXPADH@Z
                       0x2ce0  316
                       ?insertElementAt@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@H@Z
                       0x2ce0  317
                       ?insertElementAt@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@H@Z
                       0x2ce0  318
                       ?insertElementAt@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@H@Z
                       0x2ce0  319
                       ?insertElementAt@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@H@Z
                       0x2ce0  320
                       ?insertElementAt@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@H@Z
                       0x2ce0  321
                       ?insertElementAt@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@H@Z
                       0x2ce0  322  ?insertElementAt@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@H@Z
                       0x2ce0  323
                       ?insertElementAt@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@H@Z
                       0x2ce0  324
                       ?insertElementAt@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@H@Z
                       0x2ce0  325
                       ?insertElementAt@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@H@Z
                       0x2ce0  326  ?insertElementAt@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@H@Z
                       0x2ce0  327  ?insertElementAt@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@H@Z
                       0x2ce0  328
                       ?insertElementAt@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@H@Z
                       0x2ce0  329
                       ?insertElementAt@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@H@Z
                       0x2ce0  330
                       ?insertElementAt@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@H@Z */
  if (-1 < param_2) {
    iVar4 = *(int *)this;
    if (param_2 == iVar4 || param_2 < iVar4) {
      if ((param_2 != iVar4) && (iVar4 != 0)) {
        uVar5 = *(uint *)(this + 4);
        if ((int)uVar5 < iVar4 + 1) {
          if (uVar5 == 0) {
            uVar5 = 1;
          }
          for (; (int)uVar5 < iVar4 + 1; uVar5 = uVar5 * 2) {
          }
          puVar1 = operator_new(uVar5 * 4);
          if (puVar1 == (undefined4 *)0x0) {
            FUN_1006ad84(0);
          }
          puVar6 = puVar1;
          for (uVar3 = uVar5 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined1 *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          *(uint *)(this + 4) = uVar5;
          iVar4 = 0;
          if (0 < *(int *)this) {
            do {
              iVar2 = iVar4 + 1;
              puVar1[iVar4] = *(undefined4 *)(*(int *)(this + 8) + -4 + iVar2 * 4);
              iVar4 = iVar2;
            } while (iVar2 < *(int *)this);
          }
          FUN_1006ad4c(*(LPVOID *)(this + 8));
          *(undefined4 **)(this + 8) = puVar1;
          param_2 = param_1;
        }
        *(undefined4 *)(*(int *)(this + 8) + *(int *)this * 4) = unaff_retaddr;
        iVar4 = *(int *)this;
        *(int *)this = iVar4 + 1;
        for (; param_2 < iVar4; iVar4 = iVar4 + -1) {
          *(undefined4 *)(*(int *)(this + 8) + iVar4 * 4) =
               *(undefined4 *)(*(int *)(this + 8) + -4 + iVar4 * 4);
        }
        *(undefined4 *)(*(int *)(this + 8) + param_2 * 4) = unaff_retaddr;
        return;
      }
      uVar5 = *(uint *)(this + 4);
      if ((int)uVar5 < iVar4 + 1) {
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        for (; (int)uVar5 < iVar4 + 1; uVar5 = uVar5 * 2) {
        }
        puVar1 = operator_new(uVar5 * 4);
        if (puVar1 == (undefined4 *)0x0) {
          FUN_1006ad84(0);
        }
        puVar6 = puVar1;
        for (uVar3 = uVar5 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(uint *)(this + 4) = uVar5;
        iVar4 = 0;
        if (0 < *(int *)this) {
          do {
            iVar2 = iVar4 + 1;
            puVar1[iVar4] = *(undefined4 *)(*(int *)(this + 8) + -4 + iVar2 * 4);
            iVar4 = iVar2;
          } while (iVar2 < *(int *)this);
        }
        FUN_1006ad4c(*(LPVOID *)(this + 8));
        *(undefined4 **)(this + 8) = puVar1;
      }
      *(undefined4 *)(*(int *)(this + 8) + *(int *)this * 4) = unaff_retaddr;
      *(int *)this = *(int *)this + 1;
    }
  }
  return;
}

/* 10002e50  vgui::Dar<int>::removeElement  (72 bytes)
 * void removeElement(int param_1)
 */
/* public: void __thiscall vgui::Dar<int>::removeElement(int) */

void __thiscall vgui::Dar<int>::removeElement(Dar<int> *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x2e50  377  ?removeElement@?$Dar@H@vgui@@QAEXH@Z
                       0x2e50  378  ?removeElement@?$Dar@PAD@vgui@@QAEXPAD@Z
                       0x2e50  379  ?removeElement@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@@Z
                       0x2e50  380
                       ?removeElement@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@@Z
                       0x2e50  381  ?removeElement@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@@Z
                       0x2e50  382
                       ?removeElement@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@@Z
                       0x2e50  383
                       ?removeElement@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@@Z
                       0x2e50  384
                       ?removeElement@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@@Z
                       0x2e50  385  ?removeElement@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@@Z
                       0x2e50  386
                       ?removeElement@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@@Z
                       0x2e50  387
                       ?removeElement@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@@Z
                       0x2e50  388
                       ?removeElement@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@@Z
                       0x2e50  389  ?removeElement@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@@Z
                       0x2e50  390  ?removeElement@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@@Z
                       0x2e50  391
                       ?removeElement@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@@Z
                       0x2e50  392
                       ?removeElement@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@@Z
                       0x2e50  393
                       ?removeElement@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@@Z */
  iVar1 = *(int *)this;
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)(this + 8);
    while (*piVar3 != param_1) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (iVar1 <= iVar2) {
        return;
      }
    }
    if ((-1 < iVar2) && (iVar2 < iVar1)) {
      if (iVar2 < iVar1 + -1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined4 *)(*(int *)(this + 8) + -4 + iVar2 * 4) =
               *(undefined4 *)(*(int *)(this + 8) + iVar2 * 4);
        } while (iVar2 < *(int *)this + -1);
      }
      *(int *)this = *(int *)this + -1;
    }
  }
  return;
}

/* 10002ea0  vgui::Dar<int>::Dar<int>  (127 bytes)
 * undefined Dar<int>(void)
 */
/* public: __thiscall vgui::Dar<int>::Dar<int>(void) */

Dar<int> * __thiscall vgui::Dar<int>::Dar<int>(Dar<int> *this)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x2ea0  4  ??0?$Dar@H@vgui@@QAE@XZ
                       0x2ea0  6  ??0?$Dar@PAD@vgui@@QAE@XZ
                       0x2ea0  8  ??0?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAE@XZ
                       0x2ea0  10  ??0?$Dar@PAVActionSignal@vgui@@@vgui@@QAE@XZ
                       0x2ea0  12  ??0?$Dar@PAVButton@vgui@@@vgui@@QAE@XZ
                       0x2ea0  14  ??0?$Dar@PAVChangeSignal@vgui@@@vgui@@QAE@XZ
                       0x2ea0  16  ??0?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAE@XZ
                       0x2ea0  18  ??0?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAE@XZ
                       0x2ea0  20  ??0?$Dar@PAVFrame@vgui@@@vgui@@QAE@XZ
                       0x2ea0  22  ??0?$Dar@PAVFrameSignal@vgui@@@vgui@@QAE@XZ
                       0x2ea0  24  ??0?$Dar@PAVInputSignal@vgui@@@vgui@@QAE@XZ
                       0x2ea0  26  ??0?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAE@XZ
                       0x2ea0  28  ??0?$Dar@PAVLabel@vgui@@@vgui@@QAE@XZ
                       0x2ea0  30  ??0?$Dar@PAVPanel@vgui@@@vgui@@QAE@XZ
                       0x2ea0  32  ??0?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAE@XZ
                       0x2ea0  34  ??0?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAE@XZ
                       0x2ea0  36  ??0?$Dar@PAVTickSignal@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar1 = 1;
  do {
    uVar5 = uVar1;
    uVar1 = uVar5 * 2;
  } while ((int)uVar1 < 4);
  puVar2 = operator_new(uVar5 * 8);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_1006ad84(0);
  }
  puVar6 = puVar2;
  for (iVar4 = (uVar5 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)(this + 4) = uVar1;
  iVar4 = 0;
  if (0 < *(int *)this) {
    do {
      iVar3 = iVar4 + 1;
      puVar2[iVar4] = *(undefined4 *)(*(int *)(this + 8) + -4 + iVar3 * 4);
      iVar4 = iVar3;
    } while (iVar3 < *(int *)this);
  }
  FUN_1006ad4c(*(LPVOID *)(this + 8));
  *(undefined4 **)(this + 8) = puVar2;
  return this;
}

/* 10002f20  vgui::Dar<int>::addElement  (151 bytes)
 * void addElement(int param_1)
 */
/* public: void __thiscall vgui::Dar<int>::addElement(int) */

void __thiscall vgui::Dar<int>::addElement(Dar<int> *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 unaff_retaddr;
  
                    /* 0x2f20  229  ?addElement@?$Dar@H@vgui@@QAEXH@Z
                       0x2f20  230  ?addElement@?$Dar@PAD@vgui@@QAEXPAD@Z
                       0x2f20  231  ?addElement@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@@Z
                       0x2f20  232
                       ?addElement@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@@Z
                       0x2f20  233  ?addElement@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@@Z
                       0x2f20  234
                       ?addElement@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@@Z
                       0x2f20  235
                       ?addElement@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@@Z
                       0x2f20  236
                       ?addElement@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@@Z
                       0x2f20  237  ?addElement@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@@Z
                       0x2f20  238
                       ?addElement@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@@Z
                       0x2f20  239
                       ?addElement@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@@Z
                       0x2f20  240
                       ?addElement@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@@Z
                       0x2f20  241  ?addElement@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@@Z
                       0x2f20  242  ?addElement@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@@Z
                       0x2f20  243
                       ?addElement@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@@Z
                       0x2f20  244
                       ?addElement@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@@Z
                       0x2f20  245
                       ?addElement@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@@Z */
  uVar5 = *(uint *)(this + 4);
  if ((int)uVar5 < *(int *)this + 1) {
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    for (; (int)uVar5 < *(int *)this + 1; uVar5 = uVar5 * 2) {
    }
    puVar1 = operator_new(uVar5 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_1006ad84(0);
    }
    puVar6 = puVar1;
    for (uVar3 = uVar5 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(this + 4) = uVar5;
    iVar4 = 0;
    if (0 < *(int *)this) {
      do {
        iVar2 = iVar4 + 1;
        puVar1[iVar4] = *(undefined4 *)(*(int *)(this + 8) + -4 + iVar2 * 4);
        iVar4 = iVar2;
      } while (iVar2 < *(int *)this);
    }
    FUN_1006ad4c(*(LPVOID *)(this + 8));
    *(undefined4 **)(this + 8) = puVar1;
  }
  *(undefined4 *)(*(int *)(this + 8) + *(int *)this * 4) = unaff_retaddr;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10002fc0  vgui::Dar<int>::setElementAt  (25 bytes)
 * void setElementAt(int param_1, int param_2)
 */
/* public: void __thiscall vgui::Dar<int>::setElementAt(int,int) */

void __thiscall vgui::Dar<int>::setElementAt(Dar<int> *this,int param_1,int param_2)

{
                    /* 0x2fc0  434  ?setElementAt@?$Dar@H@vgui@@QAEXHH@Z
                       0x2fc0  435  ?setElementAt@?$Dar@PAD@vgui@@QAEXPADH@Z
                       0x2fc0  436  ?setElementAt@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@H@Z
                       0x2fc0  437
                       ?setElementAt@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@H@Z
                       0x2fc0  438  ?setElementAt@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@H@Z
                       0x2fc0  439
                       ?setElementAt@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@H@Z
                       0x2fc0  440
                       ?setElementAt@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@H@Z
                       0x2fc0  441
                       ?setElementAt@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@H@Z
                       0x2fc0  442  ?setElementAt@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@H@Z
                       0x2fc0  443
                       ?setElementAt@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@H@Z
                       0x2fc0  444
                       ?setElementAt@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@H@Z
                       0x2fc0  445
                       ?setElementAt@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@H@Z
                       0x2fc0  446  ?setElementAt@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@H@Z
                       0x2fc0  447  ?setElementAt@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@H@Z
                       0x2fc0  448
                       ?setElementAt@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@H@Z
                       0x2fc0  449
                       ?setElementAt@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@H@Z
                       0x2fc0  450
                       ?setElementAt@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(int *)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10002fe0  vgui::Dar<int>::operator[]  (26 bytes)
 * int operator[](int param_1)
 */
/* public: int __thiscall vgui::Dar<int>::operator[](int) */

int __thiscall vgui::Dar<int>::operator[](Dar<int> *this,int param_1)

{
                    /* 0x2fe0  152  ??A?$Dar@H@vgui@@QAEHH@Z
                       0x2fe0  153  ??A?$Dar@PAD@vgui@@QAEPADH@Z
                       0x2fe0  154  ??A?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEPAV?$Dar@D@1@H@Z
                       0x2fe0  155  ??A?$Dar@PAVActionSignal@vgui@@@vgui@@QAEPAVActionSignal@1@H@Z
                       0x2fe0  156  ??A?$Dar@PAVButton@vgui@@@vgui@@QAEPAVButton@1@H@Z
                       0x2fe0  157  ??A?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEPAVChangeSignal@1@H@Z
                       0x2fe0  158  ??A?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEPAVDesktopIcon@1@H@Z
                       0x2fe0  159
                       ??A?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEPAVFocusChangeSignal@1@H@Z
                       0x2fe0  160  ??A?$Dar@PAVFrame@vgui@@@vgui@@QAEPAVFrame@1@H@Z
                       0x2fe0  161  ??A?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEPAVFrameSignal@1@H@Z
                       0x2fe0  162  ??A?$Dar@PAVInputSignal@vgui@@@vgui@@QAEPAVInputSignal@1@H@Z
                       0x2fe0  163
                       ??A?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEPAVIntChangeSignal@1@H@Z
                       0x2fe0  164  ??A?$Dar@PAVLabel@vgui@@@vgui@@QAEPAVLabel@1@H@Z
                       0x2fe0  165  ??A?$Dar@PAVPanel@vgui@@@vgui@@QAEPAVPanel@1@H@Z
                       0x2fe0  166  ??A?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEPAVRepaintSignal@1@H@Z
                       0x2fe0  167  ??A?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEPAVSurfaceBase@1@H@Z
                       0x2fe0  168  ??A?$Dar@PAVTickSignal@vgui@@@vgui@@QAEPAVTickSignal@1@H@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    return *(int *)(*(int *)(this + 8) + param_1 * 4);
  }
  return 0;
}

/* 10003000  vgui::Dar<int>::putElement  (182 bytes)
 * void putElement(int param_1)
 */
/* public: void __thiscall vgui::Dar<int>::putElement(int) */

void __thiscall vgui::Dar<int>::putElement(Dar<int> *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 unaff_retaddr;
  
                    /* 0x3000  339  ?putElement@?$Dar@H@vgui@@QAEXH@Z
                       0x3000  340  ?putElement@?$Dar@PAD@vgui@@QAEXPAD@Z
                       0x3000  341  ?putElement@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@@Z
                       0x3000  342
                       ?putElement@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@@Z
                       0x3000  343  ?putElement@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@@Z
                       0x3000  344
                       ?putElement@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@@Z
                       0x3000  345
                       ?putElement@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@@Z
                       0x3000  346
                       ?putElement@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@@Z
                       0x3000  347  ?putElement@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@@Z
                       0x3000  348
                       ?putElement@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@@Z
                       0x3000  349
                       ?putElement@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@@Z
                       0x3000  350
                       ?putElement@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@@Z
                       0x3000  351  ?putElement@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@@Z
                       0x3000  352  ?putElement@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@@Z
                       0x3000  353
                       ?putElement@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@@Z
                       0x3000  354
                       ?putElement@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@@Z
                       0x3000  355
                       ?putElement@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@@Z */
  iVar2 = 0;
  iVar4 = *(int *)this;
  if (0 < iVar4) {
    piVar5 = *(int **)(this + 8);
    do {
      if (*piVar5 == param_1) {
        return;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < iVar4);
  }
  uVar6 = *(uint *)(this + 4);
  if ((int)uVar6 < iVar4 + 1) {
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    for (; (int)uVar6 < iVar4 + 1; uVar6 = uVar6 * 2) {
    }
    puVar1 = operator_new(uVar6 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_1006ad84(0);
    }
    puVar7 = puVar1;
    for (uVar3 = uVar6 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(uint *)(this + 4) = uVar6;
    iVar4 = 0;
    if (0 < *(int *)this) {
      do {
        iVar2 = iVar4 + 1;
        puVar1[iVar4] = *(undefined4 *)(*(int *)(this + 8) + -4 + iVar2 * 4);
        iVar4 = iVar2;
      } while (iVar2 < *(int *)this);
    }
    FUN_1006ad4c(*(LPVOID *)(this + 8));
    *(undefined4 **)(this + 8) = puVar1;
  }
  *(undefined4 *)(*(int *)(this + 8) + *(int *)this * 4) = unaff_retaddr;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 100030c0  vgui::Dar<int>::removeElementAt  (44 bytes)
 * void removeElementAt(int param_1)
 */
/* public: void __thiscall vgui::Dar<int>::removeElementAt(int) */

void __thiscall vgui::Dar<int>::removeElementAt(Dar<int> *this,int param_1)

{
                    /* 0x30c0  395  ?removeElementAt@?$Dar@H@vgui@@QAEXH@Z
                       0x30c0  396  ?removeElementAt@?$Dar@PAD@vgui@@QAEXH@Z
                       0x30c0  397  ?removeElementAt@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXH@Z
                       0x30c0  398  ?removeElementAt@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXH@Z
                       0x30c0  399  ?removeElementAt@?$Dar@PAVButton@vgui@@@vgui@@QAEXH@Z
                       0x30c0  400  ?removeElementAt@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x30c0  401  ?removeElementAt@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXH@Z
                       0x30c0  402  ?removeElementAt@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x30c0  403  ?removeElementAt@?$Dar@PAVFrame@vgui@@@vgui@@QAEXH@Z
                       0x30c0  404  ?removeElementAt@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXH@Z
                       0x30c0  405  ?removeElementAt@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXH@Z
                       0x30c0  406  ?removeElementAt@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x30c0  407  ?removeElementAt@?$Dar@PAVLabel@vgui@@@vgui@@QAEXH@Z
                       0x30c0  408  ?removeElementAt@?$Dar@PAVPanel@vgui@@@vgui@@QAEXH@Z
                       0x30c0  409  ?removeElementAt@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXH@Z
                       0x30c0  410  ?removeElementAt@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXH@Z
                       0x30c0  411  ?removeElementAt@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    if (param_1 < *(int *)this + -1) {
      do {
        param_1 = param_1 + 1;
        *(undefined4 *)(*(int *)(this + 8) + -4 + param_1 * 4) =
             *(undefined4 *)(*(int *)(this + 8) + param_1 * 4);
      } while (param_1 < *(int *)this + -1);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

