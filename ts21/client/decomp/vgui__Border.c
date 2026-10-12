/* client.dll - vgui__Border (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001b5e  vgui::Border::operator=  (5 bytes)
 * Border * operator=(Border * param_1)
 * called by: FUN_1000bc60, FUN_10031b40, FUN_1009b9b0
 */
/* public: class vgui::Border & __thiscall vgui::Border::operator=(class vgui::Border const &) */

Border * __thiscall vgui::Border::operator=(Border *this,Border *param_1)

{
  uint uStack_c;
  
                    /* 0x1b5e  111  ??4Border@vgui@@QAEAAV01@ABV01@@Z */
  Image::operator=((Image *)this,(Image *)param_1);
  for (uStack_c = 0; uStack_c < 4; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 0x24) = *(undefined4 *)(param_1 + uStack_c * 4 + 0x24);
  }
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return this;
}

/* 100023b0  vgui::Border::Border  (5 bytes)
 * undefined Border(Border * param_1)
 * called by: FUN_1000bc10, FUN_10031b00, FUN_1009b970
 */
/* public: __thiscall vgui::Border::Border(class vgui::Border const &) */

Border * __thiscall vgui::Border::Border(Border *this,Border *param_1)

{
                    /* 0x23b0  42  ??0Border@vgui@@QAE@ABV01@@Z */
  Image::Image((Image *)this,(Image *)param_1);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined ***)this = &_vftable_;
  return this;
}

