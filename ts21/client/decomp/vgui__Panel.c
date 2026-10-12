/* client.dll - vgui__Panel (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100022ca  vgui::Panel::operator=  (5 bytes)
 * Panel * operator=(Panel * param_1)
 * called by: FUN_1000a1d0, FUN_1000bd50, FUN_10030d40, FUN_10031ab0, FUN_100327b0, FUN_10032970, FUN_10032b00, FUN_10032d50, FUN_10033f00, FUN_10034390, FUN_100471e0, FUN_10047570, ... (14 total)
 */
/* public: class vgui::Panel & __thiscall vgui::Panel::operator=(class vgui::Panel const &) */

Panel * __thiscall vgui::Panel::operator=(Panel *this,Panel *param_1)

{
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
                    /* 0x22ca  135  ??4Panel@vgui@@QAEAAV01@ABV01@@Z */
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 4) = *(undefined4 *)(param_1 + uStack_c * 4 + 4);
  }
  for (uStack_10 = 0; uStack_10 < 2; uStack_10 = uStack_10 + 1) {
    *(undefined4 *)(this + uStack_10 * 4 + 0xc) = *(undefined4 *)(param_1 + uStack_10 * 4 + 0xc);
  }
  for (uStack_14 = 0; uStack_14 < 2; uStack_14 = uStack_14 + 1) {
    *(undefined4 *)(this + uStack_14 * 4 + 0x14) = *(undefined4 *)(param_1 + uStack_14 * 4 + 0x14);
  }
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    *(undefined4 *)(this + uStack_18 * 4 + 0x1c) = *(undefined4 *)(param_1 + uStack_18 * 4 + 0x1c);
  }
  for (uStack_1c = 0; uStack_1c < 2; uStack_1c = uStack_1c + 1) {
    *(undefined4 *)(this + uStack_1c * 4 + 0x24) = *(undefined4 *)(param_1 + uStack_1c * 4 + 0x24);
  }
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
  for (uStack_20 = 0; uStack_20 < 4; uStack_20 = uStack_20 + 1) {
    *(undefined4 *)(this + uStack_20 * 4 + 0x58) = *(undefined4 *)(param_1 + uStack_20 * 4 + 0x58);
  }
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
  Color::operator=((Color *)(this + 0x9c),(Color *)(param_1 + 0x9c));
  Color::operator=((Color *)(this + 0xa8),(Color *)(param_1 + 0xa8));
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  return this;
}

/* 10003cf1  vgui::Panel::Panel  (5 bytes)
 * undefined Panel(Panel * param_1)
 * called by: FUN_1000a0f0, FUN_1000bd00, FUN_100309a0, FUN_10031a60, FUN_10032730, FUN_100328c0, FUN_10032a40, FUN_10032bd0, FUN_10033d40, FUN_10034040, FUN_10047010, FUN_10047430, ... (14 total)
 */
/* public: __thiscall vgui::Panel::Panel(class vgui::Panel const &) */

Panel * __thiscall vgui::Panel::Panel(Panel *this,Panel *param_1)

{
                    /* 0x3cf1  71  ??0Panel@vgui@@QAE@ABV01@@Z */
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
  Color::Color((Color *)(this + 0x9c),(Color *)(param_1 + 0x9c));
  Color::Color((Color *)(this + 0xa8),(Color *)(param_1 + 0xa8));
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  *(undefined ***)this = &_vftable_;
  return this;
}

