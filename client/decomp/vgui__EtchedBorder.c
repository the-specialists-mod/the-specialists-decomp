/* client.dll - vgui__EtchedBorder (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10059ed0  vgui::EtchedBorder::EtchedBorder  (108 bytes)
 * undefined EtchedBorder(EtchedBorder * param_1)
 */
/* public: __thiscall vgui::EtchedBorder::EtchedBorder(class vgui::EtchedBorder const &) */

void __thiscall vgui::EtchedBorder::EtchedBorder(EtchedBorder *this,EtchedBorder *param_1)

{
                    /* 0x59ed0  50  ??0EtchedBorder@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)(this + 0x18) = &Color::_vftable_;
  *(undefined ***)this = &Image::_vftable_;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined ***)this = &_vftable_;
  return;
}

