/* client.dll - vgui__ScrollBar (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001627  vgui::ScrollBar::operator=  (5 bytes)
 * ScrollBar * operator=(ScrollBar * param_1)
 */
/* public: class vgui::ScrollBar & __thiscall vgui::ScrollBar::operator=(class vgui::ScrollBar const
   &) */

ScrollBar * __thiscall vgui::ScrollBar::operator=(ScrollBar *this,ScrollBar *param_1)

{
  uint uStack_c;
  
                    /* 0x1627  138  ??4ScrollBar@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 0xbc) = *(undefined4 *)(param_1 + uStack_c * 4 + 0xbc);
  }
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  return this;
}

/* 100023e2  vgui::ScrollBar::ScrollBar  (5 bytes)
 * undefined ScrollBar(ScrollBar * param_1)
 */
/* public: __thiscall vgui::ScrollBar::ScrollBar(class vgui::ScrollBar const &) */

ScrollBar * __thiscall vgui::ScrollBar::ScrollBar(ScrollBar *this,ScrollBar *param_1)

{
                    /* 0x23e2  75  ??0ScrollBar@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined ***)this = &_vftable_;
  return this;
}

