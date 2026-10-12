/* client.dll - vgui__MiniApp (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10002464  vgui::MiniApp::operator=  (5 bytes)
 * MiniApp * operator=(MiniApp * param_1)
 */
/* public: class vgui::MiniApp & __thiscall vgui::MiniApp::operator=(class vgui::MiniApp const &) */

MiniApp * __thiscall vgui::MiniApp::operator=(MiniApp *this,MiniApp *param_1)

{
                    /* 0x2464  134  ??4MiniApp@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}

/* 10002f81  vgui::MiniApp::MiniApp  (5 bytes)
 * undefined MiniApp(MiniApp * param_1)
 */
/* public: __thiscall vgui::MiniApp::MiniApp(class vgui::MiniApp const &) */

MiniApp * __thiscall vgui::MiniApp::MiniApp(MiniApp *this,MiniApp *param_1)

{
                    /* 0x2f81  70  ??0MiniApp@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  return this;
}

