/* client.dll - vgui__Cursor (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001c8f  vgui::Cursor::Cursor  (5 bytes)
 * undefined Cursor(Cursor * param_1)
 */
/* public: __thiscall vgui::Cursor::Cursor(class vgui::Cursor const &) */

Cursor * __thiscall vgui::Cursor::Cursor(Cursor *this,Cursor *param_1)

{
                    /* 0x1c8f  47  ??0Cursor@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 1000209a  vgui::Cursor::operator=  (5 bytes)
 * Cursor * operator=(Cursor * param_1)
 */
/* public: class vgui::Cursor & __thiscall vgui::Cursor::operator=(class vgui::Cursor const &) */

Cursor * __thiscall vgui::Cursor::operator=(Cursor *this,Cursor *param_1)

{
  uint uStack_c;
  
                    /* 0x209a  116  ??4Cursor@vgui@@QAEAAV01@ABV01@@Z */
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 4) = *(undefined4 *)(param_1 + uStack_c * 4 + 4);
  }
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}

