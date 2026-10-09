/* client.dll - vgui__ScrollPanel (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10014900  vgui::ScrollPanel::ScrollPanel  (491 bytes)
 * undefined ScrollPanel(ScrollPanel * param_1)
 */
/* public: __thiscall vgui::ScrollPanel::ScrollPanel(class vgui::ScrollPanel const &) */

void __thiscall vgui::ScrollPanel::ScrollPanel(ScrollPanel *this,ScrollPanel *param_1)

{
                    /* 0x14900  76  ??0ScrollPanel@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  this[0x70] = param_1[0x70];
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  this[0x78] = param_1[0x78];
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  this[0x8c] = param_1[0x8c];
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  this[0x94] = param_1[0x94];
  this[0x95] = param_1[0x95];
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined ***)(this + 0x9c) = &Color::_vftable_;
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined ***)(this + 0xa8) = &Color::_vftable_;
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  *(undefined ***)this = &Panel::_vftable_;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined2 *)(this + 0xcc) = *(undefined2 *)(param_1 + 0xcc);
  *(undefined ***)this = &_vftable_;
  return;
}

/* 10014af0  vgui::ScrollPanel::operator=  (568 bytes)
 * ScrollPanel * operator=(ScrollPanel * param_1)
 */
/* public: class vgui::ScrollPanel & __thiscall vgui::ScrollPanel::operator=(class vgui::ScrollPanel
   const &) */

ScrollPanel * __thiscall vgui::ScrollPanel::operator=(ScrollPanel *this,ScrollPanel *param_1)

{
  ScrollPanel *pSVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x14af0  139  ??4ScrollPanel@vgui@@QAEAAV01@ABV01@@Z */
  iVar2 = (int)param_1 - (int)this;
  iVar3 = 2;
  pSVar1 = this;
  do {
    pSVar1 = pSVar1 + 4;
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0xc;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0x14;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0x1c;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0x24;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  pSVar1 = this + 0x58;
  iVar3 = 4;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  this[0x70] = param_1[0x70];
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  this[0x78] = param_1[0x78];
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  this[0x8c] = param_1[0x8c];
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  this[0x94] = param_1[0x94];
  this[0x95] = param_1[0x95];
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  pSVar1 = this + 0xa0;
  do {
    *pSVar1 = pSVar1[(int)(param_1 + (0x9c - (int)(this + 0x9c)))];
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 + (-4 - (int)(this + 0x9c)) < (ScrollPanel *)0x4);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pSVar1 = this + 0xac;
  do {
    *pSVar1 = pSVar1[(int)(param_1 + (0xa8 - (int)(this + 0xa8)))];
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 + (-4 - (int)(this + 0xa8)) < (ScrollPanel *)0x4);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  pSVar1 = this + 0xcc;
  do {
    *pSVar1 = pSVar1[iVar2];
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 + (-0xcc - (int)this) < (ScrollPanel *)0x2);
  return this;
}

