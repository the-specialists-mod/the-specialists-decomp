/* client.dll - vgui__Color (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001280  vgui::Color::Color  (27 bytes)
 * undefined Color(Color * param_1)
 * called by: vgui::ScrollBar2::ScrollBar2
 */
/* public: __thiscall vgui::Color::Color(class vgui::Color const &) */

void __thiscall vgui::Color::Color(Color *this,Color *param_1)

{
                    /* 0x1280  46  ??0Color@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable_;
  return;
}

/* 100012a0  vgui::Color::operator=  (49 bytes)
 * Color * operator=(Color * param_1)
 */
/* public: class vgui::Color & __thiscall vgui::Color::operator=(class vgui::Color const &) */

Color * __thiscall vgui::Color::operator=(Color *this,Color *param_1)

{
  Color *pCVar1;
  
                    /* 0x12a0  115  ??4Color@vgui@@QAEAAV01@ABV01@@Z */
  pCVar1 = this + 4;
  do {
    *pCVar1 = pCVar1[(int)param_1 - (int)this];
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 + (-4 - (int)this) < (Color *)0x4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

