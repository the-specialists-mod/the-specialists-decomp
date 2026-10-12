/* client.dll - vgui__DataInputStream (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001235  vgui::DataInputStream::operator=  (5 bytes)
 * DataInputStream * operator=(DataInputStream * param_1)
 */
/* public: class vgui::DataInputStream & __thiscall vgui::DataInputStream::operator=(class
   vgui::DataInputStream const &) */

DataInputStream * __thiscall
vgui::DataInputStream::operator=(DataInputStream *this,DataInputStream *param_1)

{
  InputStream *pIStack_4c;
  
                    /* 0x1235  117  ??4DataInputStream@vgui@@QAEAAV01@ABV01@@Z */
  if (*(undefined1 **)(this + 4) == &_vbtable_) {
    if (param_1 == (DataInputStream *)0x0) {
      pIStack_4c = (InputStream *)0x0;
    }
    else {
      pIStack_4c = (InputStream *)(param_1 + *(int *)(*(int *)(param_1 + 4) + 4) + 4);
    }
    InputStream::operator=((InputStream *)(this + *(int *)(*(int *)(this + 4) + 4) + 4),pIStack_4c);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

/* 10001b9a  vgui::DataInputStream::DataInputStream  (5 bytes)
 * undefined DataInputStream(DataInputStream * param_1)
 */
/* public: __thiscall vgui::DataInputStream::DataInputStream(class vgui::DataInputStream const &) */

DataInputStream * __thiscall
vgui::DataInputStream::DataInputStream(DataInputStream *this,DataInputStream *param_1)

{
  int in_stack_00000008;
  InputStream *pIStack_4c;
  
                    /* 0x1b9a  48  ??0DataInputStream@vgui@@QAE@ABV01@@Z */
  if (in_stack_00000008 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
    if (param_1 == (DataInputStream *)0x0) {
      pIStack_4c = (InputStream *)0x0;
    }
    else {
      pIStack_4c = (InputStream *)(param_1 + *(int *)(*(int *)(param_1 + 4) + 4) + 4);
    }
    InputStream::InputStream((InputStream *)(this + 0x10),pIStack_4c);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable__for__vgui__DataInputStream__;
  *(undefined ***)(this + *(int *)(*(int *)(this + 4) + 4) + 4) =
       &_vftable__for__vgui__InputStream__;
  *(undefined4 *)(this + *(int *)(*(int *)(this + 4) + 4)) = 0;
  return this;
}

