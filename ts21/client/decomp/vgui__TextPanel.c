/* client.dll - vgui__TextPanel (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001af5  vgui::TextPanel::TextPanel  (5 bytes)
 * undefined TextPanel(TextPanel * param_1)
 */
/* public: __thiscall vgui::TextPanel::TextPanel(class vgui::TextPanel const &) */

TextPanel * __thiscall vgui::TextPanel::TextPanel(TextPanel *this,TextPanel *param_1)

{
                    /* 0x1af5  87  ??0TextPanel@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10002022  vgui::TextPanel::operator=  (5 bytes)
 * TextPanel * operator=(TextPanel * param_1)
 */
/* public: class vgui::TextPanel & __thiscall vgui::TextPanel::operator=(class vgui::TextPanel const
   &) */

TextPanel * __thiscall vgui::TextPanel::operator=(TextPanel *this,TextPanel *param_1)

{
                    /* 0x2022  150  ??4TextPanel@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return this;
}

