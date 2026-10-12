/* client.dll - vgui__BitmapTGA (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10002509  vgui::BitmapTGA::BitmapTGA  (5 bytes)
 * undefined BitmapTGA(BitmapTGA * param_1)
 */
/* public: __thiscall vgui::BitmapTGA::BitmapTGA(class vgui::BitmapTGA const &) */

BitmapTGA * __thiscall vgui::BitmapTGA::BitmapTGA(BitmapTGA *this,BitmapTGA *param_1)

{
                    /* 0x2509  41  ??0BitmapTGA@vgui@@QAE@ABV01@@Z */
  Bitmap::Bitmap((Bitmap *)this,(Bitmap *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10003e31  vgui::BitmapTGA::operator=  (5 bytes)
 * BitmapTGA * operator=(BitmapTGA * param_1)
 */
/* public: class vgui::BitmapTGA & __thiscall vgui::BitmapTGA::operator=(class vgui::BitmapTGA const
   &) */

BitmapTGA * __thiscall vgui::BitmapTGA::operator=(BitmapTGA *this,BitmapTGA *param_1)

{
                    /* 0x3e31  110  ??4BitmapTGA@vgui@@QAEAAV01@ABV01@@Z */
  Bitmap::operator=((Bitmap *)this,(Bitmap *)param_1);
  return this;
}

