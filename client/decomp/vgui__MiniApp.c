/* client.dll - vgui__MiniApp (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100148c0  vgui::MiniApp::MiniApp  (21 bytes)
 * undefined MiniApp(MiniApp * param_1)
 */
/* public: __thiscall vgui::MiniApp::MiniApp(class vgui::MiniApp const &) */

void __thiscall vgui::MiniApp::MiniApp(MiniApp *this,MiniApp *param_1)

{
  undefined4 uVar1;
  
                    /* 0x148c0  70  ??0MiniApp@vgui@@QAE@ABV01@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

