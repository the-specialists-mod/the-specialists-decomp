/* client.dll - vgui__Bitmap (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001f40  vgui::Bitmap::Bitmap  (88 bytes)
 * undefined Bitmap(Bitmap * param_1)
 */
/* public: __thiscall vgui::Bitmap::Bitmap(class vgui::Bitmap const &) */

void __thiscall vgui::Bitmap::Bitmap(Bitmap *this,Bitmap *param_1)

{
                    /* 0x1f40  40  ??0Bitmap@vgui@@QAE@ABV01@@Z */
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

/* 10002000  vgui::Bitmap::operator=  (121 bytes)
 * Bitmap * operator=(Bitmap * param_1)
 */
/* public: class vgui::Bitmap & __thiscall vgui::Bitmap::operator=(class vgui::Bitmap const &) */

Bitmap * __thiscall vgui::Bitmap::operator=(Bitmap *this,Bitmap *param_1)

{
  Bitmap *pBVar1;
  int iVar2;
  
                    /* 0x2000  109  ??4Bitmap@vgui@@QAEAAV01@ABV01@@Z
                       0x2000  110  ??4BitmapTGA@vgui@@QAEAAV01@ABV01@@Z */
  iVar2 = 2;
  pBVar1 = this;
  do {
    pBVar1 = pBVar1 + 4;
    *(undefined4 *)pBVar1 = *(undefined4 *)(pBVar1 + ((int)param_1 - (int)this));
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pBVar1 = this + 0xc;
  iVar2 = 2;
  do {
    *(undefined4 *)pBVar1 = *(undefined4 *)(pBVar1 + ((int)param_1 - (int)this));
    pBVar1 = pBVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  pBVar1 = this + 0x1c;
  do {
    *pBVar1 = pBVar1[(int)(param_1 + (0x18 - (int)(this + 0x18)))];
    pBVar1 = pBVar1 + 1;
  } while (pBVar1 + (-4 - (int)(this + 0x18)) < (Bitmap *)0x4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  this[0x28] = param_1[0x28];
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return this;
}

