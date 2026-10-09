/* client.dll - vgui__Label (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001670  vgui::Label::Label  (42 bytes)
 * undefined Label(void)
 */
/* public: __thiscall vgui::Label::Label(void) */

Label * __thiscall vgui::Label::Label(Label *this)

{
                    /* 0x1670  65  ??0Label@vgui@@QAE@XZ */
  vgui::Panel::Panel((Panel *)this,0,0,10,10);
  *(undefined ***)this = &_vftable_;
  vgui::Label::init(this,1,s_,true);
  return this;
}

/* 100016a0  vgui::Label::Label  (513 bytes)
 * undefined Label(Label * param_1)
 */
/* public: __thiscall vgui::Label::Label(class vgui::Label const &) */

void __thiscall vgui::Label::Label(Label *this,Label *param_1)

{
                    /* 0x16a0  64  ??0Label@vgui@@QAE@ABV01@@Z */
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
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
  this[0xbe] = param_1[0xbe];
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined ***)this = &_vftable_;
  return;
}

/* 10013a80  vgui::Label::operator=  (563 bytes)
 * Label * operator=(Label * param_1)
 */
/* public: class vgui::Label & __thiscall vgui::Label::operator=(class vgui::Label const &) */

Label * __thiscall vgui::Label::operator=(Label *this,Label *param_1)

{
  int iVar1;
  Label *pLVar2;
  int iVar3;
  
                    /* 0x13a80  129  ??4Label@vgui@@QAEAAV01@ABV01@@Z
                       0x13a80  133  ??4MenuSeparator@vgui@@QAEAAV01@ABV01@@Z */
  iVar1 = (int)param_1 - (int)this;
  iVar3 = 2;
  pLVar2 = this;
  do {
    pLVar2 = pLVar2 + 4;
    *(undefined4 *)pLVar2 = *(undefined4 *)(pLVar2 + iVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pLVar2 = this + 0xc;
  iVar3 = 2;
  do {
    *(undefined4 *)pLVar2 = *(undefined4 *)(pLVar2 + iVar1);
    pLVar2 = pLVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pLVar2 = this + 0x14;
  iVar3 = 2;
  do {
    *(undefined4 *)pLVar2 = *(undefined4 *)(pLVar2 + iVar1);
    pLVar2 = pLVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pLVar2 = this + 0x1c;
  iVar3 = 2;
  do {
    *(undefined4 *)pLVar2 = *(undefined4 *)(pLVar2 + iVar1);
    pLVar2 = pLVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pLVar2 = this + 0x24;
  iVar3 = 2;
  do {
    *(undefined4 *)pLVar2 = *(undefined4 *)(pLVar2 + iVar1);
    pLVar2 = pLVar2 + 4;
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
  pLVar2 = this + 0x58;
  iVar3 = 4;
  do {
    *(undefined4 *)pLVar2 = *(undefined4 *)(pLVar2 + iVar1);
    pLVar2 = pLVar2 + 4;
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
  pLVar2 = this + 0xa0;
  do {
    *pLVar2 = pLVar2[(int)(param_1 + (0x9c - (int)(this + 0x9c)))];
    pLVar2 = pLVar2 + 1;
  } while (pLVar2 + (-4 - (int)(this + 0x9c)) < (Label *)0x4);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pLVar2 = this + 0xac;
  do {
    *pLVar2 = pLVar2[(int)(param_1 + (0xa8 - (int)(this + 0xa8)))];
    pLVar2 = pLVar2 + 1;
  } while (pLVar2 + (-4 - (int)(this + 0xa8)) < (Label *)0x4);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
  this[0xbe] = param_1[0xbe];
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  return this;
}

