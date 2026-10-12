/* client.dll - vgui__Label (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001ac8  vgui::Label::Label  (5 bytes)
 * undefined Label(Label * param_1)
 * called by: FUN_1000bf60, FUN_100319f0
 */
/* public: __thiscall vgui::Label::Label(class vgui::Label const &) */

Label * __thiscall vgui::Label::Label(Label *this,Label *param_1)

{
                    /* 0x1ac8  64  ??0Label@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
  this[0xbe] = param_1[0xbe];
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10001d2f  vgui::Label::operator=  (5 bytes)
 * Label * operator=(Label * param_1)
 * called by: FUN_1000c060, FUN_10031a30
 */
/* public: class vgui::Label & __thiscall vgui::Label::operator=(class vgui::Label const &) */

Label * __thiscall vgui::Label::operator=(Label *this,Label *param_1)

{
                    /* 0x1d2f  129  ??4Label@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
  this[0xbe] = param_1[0xbe];
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  return this;
}

/* 10003a12  vgui::Label::Label  (5 bytes)
 * undefined Label(void)
 * called by: FUN_100a2d60
 */
/* public: __thiscall vgui::Label::Label(void) */

Label * __thiscall vgui::Label::Label(Label *this)

{
                    /* 0x3a12  65  ??0Label@vgui@@QAE@XZ */
  vgui::Panel::Panel((Panel *)this,0,0,10,10);
  *(undefined ***)this = &_vftable_;
  vgui::Label::init(this,1,"",true);
  return this;
}

