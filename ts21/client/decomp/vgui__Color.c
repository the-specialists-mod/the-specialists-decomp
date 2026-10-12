/* client.dll - vgui__Color (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001776  vgui::Color::Color  (5 bytes)
 * undefined Color(Color * param_1)
 * called by: FUN_10009530, FUN_1000a2a0, FUN_1000bc10, FUN_100a5c60, FUN_100a6560, FUN_100a65b0, FUN_100a6910
 */
/* public: __thiscall vgui::Color::Color(class vgui::Color const &) */

Color * __thiscall vgui::Color::Color(Color *this,Color *param_1)

{
                    /* 0x1776  46  ??0Color@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10002e41  vgui::Color::operator=  (5 bytes)
 * Color * operator=(Color * param_1)
 * called by: FUN_10009980, FUN_1000a490, FUN_1000a6a0, FUN_1000bc60
 */
/* public: class vgui::Color & __thiscall vgui::Color::operator=(class vgui::Color const &) */

Color * __thiscall vgui::Color::operator=(Color *this,Color *param_1)

{
  uint uStack_c;
  
                    /* 0x2e41  115  ??4Color@vgui@@QAEAAV01@ABV01@@Z */
  for (uStack_c = 0; uStack_c < 4; uStack_c = uStack_c + 1) {
    this[uStack_c + 4] = param_1[uStack_c + 4];
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

