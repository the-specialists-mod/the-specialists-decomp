/* client.dll - vgui__ActionSignal (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100020a0  vgui::ActionSignal::operator=  (5 bytes)
 * ActionSignal * operator=(ActionSignal * param_1)
 */
/* public: class vgui::ActionSignal & __thiscall vgui::ActionSignal::operator=(class
   vgui::ActionSignal const &) */

ActionSignal * __thiscall vgui::ActionSignal::operator=(ActionSignal *this,ActionSignal *param_1)

{
                    /* 0x20a0  107  ??4ActionSignal@vgui@@QAEAAV01@ABV01@@Z
                       0x20a0  126  ??4InputSignal@vgui@@QAEAAV01@ABV01@@Z
                       0x20a0  127  ??4InputStream@vgui@@QAEAAV01@ABV01@@Z
                       0x20a0  128  ??4IntChangeSignal@vgui@@QAEAAV01@ABV01@@Z
                       0x20a0  130  ??4Layout@vgui@@QAEAAV01@ABV01@@Z */
  return this;
}

/* 10013850  vgui::ActionSignal::ActionSignal  (9 bytes)
 * undefined ActionSignal(void)
 */
/* public: __thiscall vgui::ActionSignal::ActionSignal(void) */

void __thiscall vgui::ActionSignal::ActionSignal(ActionSignal *this)

{
                    /* 0x13850  38  ??0ActionSignal@vgui@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  return;
}

/* 10013860  vgui::ActionSignal::ActionSignal  (11 bytes)
 * undefined ActionSignal(ActionSignal * param_1)
 */
/* public: __thiscall vgui::ActionSignal::ActionSignal(class vgui::ActionSignal const &) */

void __thiscall vgui::ActionSignal::ActionSignal(ActionSignal *this,ActionSignal *param_1)

{
                    /* 0x13860  37  ??0ActionSignal@vgui@@QAE@ABV01@@Z */
  *(undefined ***)this = &_vftable_;
  return;
}

