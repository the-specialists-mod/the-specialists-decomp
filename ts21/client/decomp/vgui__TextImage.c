/* client.dll - vgui__TextImage (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100016c2  vgui::TextImage::TextImage  (5 bytes)
 * undefined TextImage(TextImage * param_1)
 */
/* public: __thiscall vgui::TextImage::TextImage(class vgui::TextImage const &) */

TextImage * __thiscall vgui::TextImage::TextImage(TextImage *this,TextImage *param_1)

{
                    /* 0x16c2  86  ??0TextImage@vgui@@QAE@ABV01@@Z */
  Image::Image((Image *)this,(Image *)param_1);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10003747  vgui::TextImage::operator=  (5 bytes)
 * TextImage * operator=(TextImage * param_1)
 */
/* public: class vgui::TextImage & __thiscall vgui::TextImage::operator=(class vgui::TextImage const
   &) */

TextImage * __thiscall vgui::TextImage::operator=(TextImage *this,TextImage *param_1)

{
  uint uStack_c;
  
                    /* 0x3747  149  ??4TextImage@vgui@@QAEAAV01@ABV01@@Z */
  Image::operator=((Image *)this,(Image *)param_1);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  for (uStack_c = 0; uStack_c < 4; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 0x34) = *(undefined4 *)(param_1 + uStack_c * 4 + 0x34);
  }
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  return this;
}

