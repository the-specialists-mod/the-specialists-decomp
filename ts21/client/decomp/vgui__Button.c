/* client.dll - vgui__Button (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001497  vgui::Button::Button  (5 bytes)
 * undefined Button(Button * param_1)
 */
/* public: __thiscall vgui::Button::Button(class vgui::Button const &) */

Button * __thiscall vgui::Button::Button(Button *this,Button *param_1)

{
                    /* 0x1497  45  ??0Button@vgui@@QAE@ABV01@@Z */
  Label::Label((Label *)this,(Label *)param_1);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  this[0xd4] = param_1[0xd4];
  this[0xd5] = param_1[0xd5];
  this[0xd6] = param_1[0xd6];
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10001d48  vgui::Button::operator=  (5 bytes)
 * Button * operator=(Button * param_1)
 */
/* public: class vgui::Button & __thiscall vgui::Button::operator=(class vgui::Button const &) */

Button * __thiscall vgui::Button::operator=(Button *this,Button *param_1)

{
                    /* 0x1d48  114  ??4Button@vgui@@QAEAAV01@ABV01@@Z */
  Label::operator=((Label *)this,(Label *)param_1);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  this[0xd4] = param_1[0xd4];
  this[0xd5] = param_1[0xd5];
  this[0xd6] = param_1[0xd6];
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  return this;
}

