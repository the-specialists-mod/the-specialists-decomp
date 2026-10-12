/* client.dll - vgui__Bitmap (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000347c  vgui::Bitmap::Bitmap  (5 bytes)
 * undefined Bitmap(Bitmap * param_1)
 * called by: FUN_1000be70
 */
/* public: __thiscall vgui::Bitmap::Bitmap(class vgui::Bitmap const &) */

Bitmap * __thiscall vgui::Bitmap::Bitmap(Bitmap *this,Bitmap *param_1)

{
                    /* 0x347c  40  ??0Bitmap@vgui@@QAE@ABV01@@Z */
  Image::Image((Image *)this,(Image *)param_1);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  this[0x28] = param_1[0x28];
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10003df5  vgui::Bitmap::operator=  (5 bytes)
 * Bitmap * operator=(Bitmap * param_1)
 * called by: FUN_1000beb0
 */
/* public: class vgui::Bitmap & __thiscall vgui::Bitmap::operator=(class vgui::Bitmap const &) */

Bitmap * __thiscall vgui::Bitmap::operator=(Bitmap *this,Bitmap *param_1)

{
                    /* 0x3df5  109  ??4Bitmap@vgui@@QAEAAV01@ABV01@@Z */
  Image::operator=((Image *)this,(Image *)param_1);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  this[0x28] = param_1[0x28];
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return this;
}

