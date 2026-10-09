/* client.dll - vgui__DataInputStream (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10059f40  vgui::DataInputStream::DataInputStream  (70 bytes)
 * undefined DataInputStream(DataInputStream * param_1)
 */
/* public: __thiscall vgui::DataInputStream::DataInputStream(class vgui::DataInputStream const &) */

void __thiscall
vgui::DataInputStream::DataInputStream(DataInputStream *this,DataInputStream *param_1)

{
  int in_stack_00000008;
  
                    /* 0x59f40  48  ??0DataInputStream@vgui@@QAE@ABV01@@Z */
  if (in_stack_00000008 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
    *(undefined ***)(this + 0x10) = &InputStream::_vftable_;
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable__for__vgui__DataInputStream__;
  *(undefined ***)(this + *(int *)(*(int *)(this + 4) + 4) + 4) =
       &_vftable__for__vgui__InputStream__;
  *(undefined4 *)(this + *(int *)(*(int *)(this + 4) + 4)) = 0;
  return;
}

/* 10059f90  vgui::DataInputStream::operator=  (15 bytes)
 * DataInputStream * operator=(DataInputStream * param_1)
 */
/* public: class vgui::DataInputStream & __thiscall vgui::DataInputStream::operator=(class
   vgui::DataInputStream const &) */

DataInputStream * __thiscall
vgui::DataInputStream::operator=(DataInputStream *this,DataInputStream *param_1)

{
                    /* 0x59f90  117  ??4DataInputStream@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

