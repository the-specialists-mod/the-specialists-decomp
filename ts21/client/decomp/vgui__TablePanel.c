/* client.dll - vgui__TablePanel (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000300d  vgui::TablePanel::TablePanel  (5 bytes)
 * undefined TablePanel(TablePanel * param_1)
 */
/* public: __thiscall vgui::TablePanel::TablePanel(class vgui::TablePanel const &) */

TablePanel * __thiscall vgui::TablePanel::TablePanel(TablePanel *this,TablePanel *param_1)

{
                    /* 0x300d  83  ??0TablePanel@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined2 *)(this + 200) = *(undefined2 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  this[0xf0] = param_1[0xf0];
  this[0xf1] = param_1[0xf1];
  this[0xf2] = param_1[0xf2];
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  this[0x100] = param_1[0x100];
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10003841  vgui::TablePanel::operator=  (5 bytes)
 * TablePanel * operator=(TablePanel * param_1)
 */
/* public: class vgui::TablePanel & __thiscall vgui::TablePanel::operator=(class vgui::TablePanel
   const &) */

TablePanel * __thiscall vgui::TablePanel::operator=(TablePanel *this,TablePanel *param_1)

{
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
                    /* 0x3841  146  ??4TablePanel@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    this[uStack_c + 200] = param_1[uStack_c + 200];
  }
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  for (uStack_10 = 0; uStack_10 < 2; uStack_10 = uStack_10 + 1) {
    *(undefined4 *)(this + uStack_10 * 4 + 0xd4) = *(undefined4 *)(param_1 + uStack_10 * 4 + 0xd4);
  }
  for (uStack_14 = 0; uStack_14 < 2; uStack_14 = uStack_14 + 1) {
    *(undefined4 *)(this + uStack_14 * 4 + 0xdc) = *(undefined4 *)(param_1 + uStack_14 * 4 + 0xdc);
  }
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    *(undefined4 *)(this + uStack_18 * 4 + 0xe4) = *(undefined4 *)(param_1 + uStack_18 * 4 + 0xe4);
  }
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  this[0xf0] = param_1[0xf0];
  this[0xf1] = param_1[0xf1];
  this[0xf2] = param_1[0xf2];
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  for (uStack_1c = 0; uStack_1c < 2; uStack_1c = uStack_1c + 1) {
    *(undefined4 *)(this + uStack_1c * 4 + 0xf8) = *(undefined4 *)(param_1 + uStack_1c * 4 + 0xf8);
  }
  this[0x100] = param_1[0x100];
  return this;
}

