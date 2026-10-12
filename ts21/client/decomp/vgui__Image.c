/* client.dll - vgui__Image (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100017c6  vgui::Image::Image  (5 bytes)
 * undefined Image(Image * param_1)
 * called by: FUN_1000a550, FUN_1000bda0, FUN_10039400
 */
/* public: __thiscall vgui::Image::Image(class vgui::Image const &) */

Image * __thiscall vgui::Image::Image(Image *this,Image *param_1)

{
                    /* 0x17c6  55  ??0Image@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  Color::Color((Color *)(this + 0x18),(Color *)(param_1 + 0x18));
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10001f3c  vgui::Image::operator=  (5 bytes)
 * Image * operator=(Image * param_1)
 * called by: FUN_1000a5d0, FUN_1000be10, FUN_100394b0
 */
/* public: class vgui::Image & __thiscall vgui::Image::operator=(class vgui::Image const &) */

Image * __thiscall vgui::Image::operator=(Image *this,Image *param_1)

{
  uint uStack_10;
  uint uStack_c;
  
                    /* 0x1f3c  124  ??4Image@vgui@@QAEAAV01@ABV01@@Z */
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 4) = *(undefined4 *)(param_1 + uStack_c * 4 + 4);
  }
  for (uStack_10 = 0; uStack_10 < 2; uStack_10 = uStack_10 + 1) {
    *(undefined4 *)(this + uStack_10 * 4 + 0xc) = *(undefined4 *)(param_1 + uStack_10 * 4 + 0xc);
  }
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  Color::operator=((Color *)(this + 0x18),(Color *)(param_1 + 0x18));
  return this;
}

