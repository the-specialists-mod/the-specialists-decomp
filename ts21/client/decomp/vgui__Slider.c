/* client.dll - vgui__Slider (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10003490  vgui::Slider::operator=  (5 bytes)
 * Slider * operator=(Slider * param_1)
 */
/* public: class vgui::Slider & __thiscall vgui::Slider::operator=(class vgui::Slider const &) */

Slider * __thiscall vgui::Slider::operator=(Slider *this,Slider *param_1)

{
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
                    /* 0x3490  141  ??4Slider@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 0xc0) = *(undefined4 *)(param_1 + uStack_c * 4 + 0xc0);
  }
  for (uStack_10 = 0; uStack_10 < 2; uStack_10 = uStack_10 + 1) {
    *(undefined4 *)(this + uStack_10 * 4 + 200) = *(undefined4 *)(param_1 + uStack_10 * 4 + 200);
  }
  for (uStack_14 = 0; uStack_14 < 2; uStack_14 = uStack_14 + 1) {
    *(undefined4 *)(this + uStack_14 * 4 + 0xd0) = *(undefined4 *)(param_1 + uStack_14 * 4 + 0xd0);
  }
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    *(undefined4 *)(this + uStack_18 * 4 + 0xe4) = *(undefined4 *)(param_1 + uStack_18 * 4 + 0xe4);
  }
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  this[0xf4] = param_1[0xf4];
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  return this;
}

/* 10003846  vgui::Slider::Slider  (5 bytes)
 * undefined Slider(Slider * param_1)
 */
/* public: __thiscall vgui::Slider::Slider(class vgui::Slider const &) */

Slider * __thiscall vgui::Slider::Slider(Slider *this,Slider *param_1)

{
                    /* 0x3846  79  ??0Slider@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
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
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  this[0xf4] = param_1[0xf4];
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined ***)this = &_vftable_;
  return this;
}

