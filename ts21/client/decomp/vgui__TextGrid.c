/* client.dll - vgui__TextGrid (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100023dd  vgui::TextGrid::TextGrid  (5 bytes)
 * undefined TextGrid(TextGrid * param_1)
 */
/* public: __thiscall vgui::TextGrid::TextGrid(class vgui::TextGrid const &) */

TextGrid * __thiscall vgui::TextGrid::TextGrid(TextGrid *this,TextGrid *param_1)

{
                    /* 0x23dd  85  ??0TextGrid@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 100032f6  vgui::TextGrid::operator=  (5 bytes)
 * TextGrid * operator=(TextGrid * param_1)
 */
/* public: class vgui::TextGrid & __thiscall vgui::TextGrid::operator=(class vgui::TextGrid const &)
    */

TextGrid * __thiscall vgui::TextGrid::operator=(TextGrid *this,TextGrid *param_1)

{
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
                    /* 0x32f6  148  ??4TextGrid@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 0xbc) = *(undefined4 *)(param_1 + uStack_c * 4 + 0xbc);
  }
  for (uStack_10 = 0; uStack_10 < 3; uStack_10 = uStack_10 + 1) {
    *(undefined4 *)(this + uStack_10 * 4 + 0xc4) = *(undefined4 *)(param_1 + uStack_10 * 4 + 0xc4);
  }
  for (uStack_14 = 0; uStack_14 < 3; uStack_14 = uStack_14 + 1) {
    *(undefined4 *)(this + uStack_14 * 4 + 0xd0) = *(undefined4 *)(param_1 + uStack_14 * 4 + 0xd0);
  }
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    *(undefined4 *)(this + uStack_18 * 4 + 0xe0) = *(undefined4 *)(param_1 + uStack_18 * 4 + 0xe0);
  }
  return this;
}

