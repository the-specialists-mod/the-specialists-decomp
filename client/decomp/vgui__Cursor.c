/* client.dll - vgui__Cursor (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10013060  vgui::Cursor::Cursor  (39 bytes)
 * undefined Cursor(Cursor * param_1)
 */
/* public: __thiscall vgui::Cursor::Cursor(class vgui::Cursor const &) */

void __thiscall vgui::Cursor::Cursor(Cursor *this,Cursor *param_1)

{
                    /* 0x13060  47  ??0Cursor@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &_vftable_;
  return;
}

/* 10013090  vgui::Cursor::operator=  (50 bytes)
 * Cursor * operator=(Cursor * param_1)
 */
/* public: class vgui::Cursor & __thiscall vgui::Cursor::operator=(class vgui::Cursor const &) */

Cursor * __thiscall vgui::Cursor::operator=(Cursor *this,Cursor *param_1)

{
  int iVar1;
  Cursor *pCVar2;
  
                    /* 0x13090  116  ??4Cursor@vgui@@QAEAAV01@ABV01@@Z */
  iVar1 = 2;
  pCVar2 = this;
  do {
    pCVar2 = pCVar2 + 4;
    *(undefined4 *)pCVar2 = *(undefined4 *)(pCVar2 + ((int)param_1 - (int)this));
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}

