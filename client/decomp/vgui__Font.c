/* client.dll - vgui__Font (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10013f80  vgui::Font::Font  (33 bytes)
 * undefined Font(Font * param_1)
 */
/* public: __thiscall vgui::Font::Font(class vgui::Font const &) */

void __thiscall vgui::Font::Font(Font *this,Font *param_1)

{
                    /* 0x13f80  52  ??0Font@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined ***)this = &_vftable_;
  return;
}

/* 10013fb0  vgui::Font::operator=  (27 bytes)
 * Font * operator=(Font * param_1)
 */
/* public: class vgui::Font & __thiscall vgui::Font::operator=(class vgui::Font const &) */

Font * __thiscall vgui::Font::operator=(Font *this,Font *param_1)

{
                    /* 0x13fb0  121  ??4Font@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}

