/* client.dll - vgui__Image (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100018b0  vgui::Image::Image  (64 bytes)
 * undefined Image(Image * param_1)
 */
/* public: __thiscall vgui::Image::Image(class vgui::Image const &) */

void __thiscall vgui::Image::Image(Image *this,Image *param_1)

{
                    /* 0x18b0  55  ??0Image@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)(this + 0x18) = &Color::_vftable_;
  *(undefined ***)this = &_vftable_;
  return;
}

/* 100018f0  vgui::Image::operator=  (105 bytes)
 * Image * operator=(Image * param_1)
 */
/* public: class vgui::Image & __thiscall vgui::Image::operator=(class vgui::Image const &) */

Image * __thiscall vgui::Image::operator=(Image *this,Image *param_1)

{
  Image *pIVar1;
  int iVar2;
  
                    /* 0x18f0  124  ??4Image@vgui@@QAEAAV01@ABV01@@Z */
  iVar2 = 2;
  pIVar1 = this;
  do {
    pIVar1 = pIVar1 + 4;
    *(undefined4 *)pIVar1 = *(undefined4 *)(pIVar1 + ((int)param_1 - (int)this));
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pIVar1 = this + 0xc;
  iVar2 = 2;
  do {
    *(undefined4 *)pIVar1 = *(undefined4 *)(pIVar1 + ((int)param_1 - (int)this));
    pIVar1 = pIVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  pIVar1 = this + 0x1c;
  do {
    *pIVar1 = pIVar1[(int)(param_1 + (0x18 - (int)(this + 0x18)))];
    pIVar1 = pIVar1 + 1;
  } while (pIVar1 + (-4 - (int)(this + 0x18)) < (Image *)0x4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}

