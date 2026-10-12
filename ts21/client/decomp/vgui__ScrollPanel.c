/* client.dll - vgui__ScrollPanel (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000187a  vgui::ScrollPanel::ScrollPanel  (5 bytes)
 * undefined ScrollPanel(ScrollPanel * param_1)
 */
/* public: __thiscall vgui::ScrollPanel::ScrollPanel(class vgui::ScrollPanel const &) */

ScrollPanel * __thiscall vgui::ScrollPanel::ScrollPanel(ScrollPanel *this,ScrollPanel *param_1)

{
                    /* 0x187a  76  ??0ScrollPanel@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined2 *)(this + 0xcc) = *(undefined2 *)(param_1 + 0xcc);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10003e86  vgui::ScrollPanel::operator=  (5 bytes)
 * ScrollPanel * operator=(ScrollPanel * param_1)
 */
/* public: class vgui::ScrollPanel & __thiscall vgui::ScrollPanel::operator=(class vgui::ScrollPanel
   const &) */

ScrollPanel * __thiscall vgui::ScrollPanel::operator=(ScrollPanel *this,ScrollPanel *param_1)

{
  uint uStack_c;
  
                    /* 0x3e86  139  ??4ScrollPanel@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    this[uStack_c + 0xcc] = param_1[uStack_c + 0xcc];
  }
  return this;
}

