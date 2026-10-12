/* client.dll - vgui__LoweredBorder (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100026ad  vgui::LoweredBorder::operator=  (5 bytes)
 * LoweredBorder * operator=(LoweredBorder * param_1)
 */
/* public: class vgui::LoweredBorder & __thiscall vgui::LoweredBorder::operator=(class
   vgui::LoweredBorder const &) */

LoweredBorder * __thiscall
vgui::LoweredBorder::operator=(LoweredBorder *this,LoweredBorder *param_1)

{
                    /* 0x26ad  132  ??4LoweredBorder@vgui@@QAEAAV01@ABV01@@Z */
  Border::operator=((Border *)this,(Border *)param_1);
  return this;
}

/* 1000412e  vgui::LoweredBorder::LoweredBorder  (5 bytes)
 * undefined LoweredBorder(LoweredBorder * param_1)
 */
/* public: __thiscall vgui::LoweredBorder::LoweredBorder(class vgui::LoweredBorder const &) */

LoweredBorder * __thiscall
vgui::LoweredBorder::LoweredBorder(LoweredBorder *this,LoweredBorder *param_1)

{
                    /* 0x412e  68  ??0LoweredBorder@vgui@@QAE@ABV01@@Z */
  Border::Border((Border *)this,(Border *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}

