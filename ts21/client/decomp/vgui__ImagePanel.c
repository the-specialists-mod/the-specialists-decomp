/* client.dll - vgui__ImagePanel (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100018bb  vgui::ImagePanel::ImagePanel  (5 bytes)
 * undefined ImagePanel(void)
 */
/* public: __thiscall vgui::ImagePanel::ImagePanel(void) */

ImagePanel * __thiscall vgui::ImagePanel::ImagePanel(ImagePanel *this)

{
                    /* 0x18bb  57  ??0ImagePanel@vgui@@QAE@XZ */
  vgui::Panel::Panel((Panel *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xbc) = 0;
  return this;
}

/* 10003454  vgui::ImagePanel::ImagePanel  (5 bytes)
 * undefined ImagePanel(ImagePanel * param_1)
 */
/* public: __thiscall vgui::ImagePanel::ImagePanel(class vgui::ImagePanel const &) */

ImagePanel * __thiscall vgui::ImagePanel::ImagePanel(ImagePanel *this,ImagePanel *param_1)

{
                    /* 0x3454  56  ??0ImagePanel@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 100037ba  vgui::ImagePanel::operator=  (5 bytes)
 * ImagePanel * operator=(ImagePanel * param_1)
 */
/* public: class vgui::ImagePanel & __thiscall vgui::ImagePanel::operator=(class vgui::ImagePanel
   const &) */

ImagePanel * __thiscall vgui::ImagePanel::operator=(ImagePanel *this,ImagePanel *param_1)

{
                    /* 0x37ba  125  ??4ImagePanel@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return this;
}

