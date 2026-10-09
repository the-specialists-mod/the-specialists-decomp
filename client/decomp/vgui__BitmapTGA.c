/* client.dll - vgui__BitmapTGA (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001fa0  vgui::BitmapTGA::BitmapTGA  (88 bytes)
 * undefined BitmapTGA(BitmapTGA * param_1)
 */
/* public: __thiscall vgui::BitmapTGA::BitmapTGA(class vgui::BitmapTGA const &) */

void __thiscall vgui::BitmapTGA::BitmapTGA(BitmapTGA *this,BitmapTGA *param_1)

{
                    /* 0x1fa0  41  ??0BitmapTGA@vgui@@QAE@ABV01@@Z */
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
  this[0x28] = param_1[0x28];
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined ***)this = &_vftable_;
  return;
}

