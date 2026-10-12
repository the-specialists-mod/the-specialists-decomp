/* client.dll - vgui__EtchedBorder (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001c7b  vgui::EtchedBorder::EtchedBorder  (5 bytes)
 * undefined EtchedBorder(EtchedBorder * param_1)
 */
/* public: __thiscall vgui::EtchedBorder::EtchedBorder(class vgui::EtchedBorder const &) */

EtchedBorder * __thiscall vgui::EtchedBorder::EtchedBorder(EtchedBorder *this,EtchedBorder *param_1)

{
                    /* 0x1c7b  50  ??0EtchedBorder@vgui@@QAE@ABV01@@Z */
  Border::Border((Border *)this,(Border *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 1000388c  vgui::EtchedBorder::operator=  (5 bytes)
 * EtchedBorder * operator=(EtchedBorder * param_1)
 */
/* public: class vgui::EtchedBorder & __thiscall vgui::EtchedBorder::operator=(class
   vgui::EtchedBorder const &) */

EtchedBorder * __thiscall vgui::EtchedBorder::operator=(EtchedBorder *this,EtchedBorder *param_1)

{
                    /* 0x388c  119  ??4EtchedBorder@vgui@@QAEAAV01@ABV01@@Z */
  Border::operator=((Border *)this,(Border *)param_1);
  return this;
}

