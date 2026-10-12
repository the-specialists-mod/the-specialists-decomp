/* client.dll - vgui__ActionSignal (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000176c  vgui::ActionSignal::ActionSignal  (5 bytes)
 * undefined ActionSignal(void)
 * called by: FUN_10033b60, FUN_10039860, FUN_1009ad50, FUN_1009ae20, FUN_1009b3c0, FUN_100a8140, FUN_100a8280, FUN_100a8320, FUN_100a83b0, FUN_100b0aa0
 */
/* public: __thiscall vgui::ActionSignal::ActionSignal(void) */

ActionSignal * __thiscall vgui::ActionSignal::ActionSignal(ActionSignal *this)

{
                    /* 0x176c  38  ??0ActionSignal@vgui@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10003058  vgui::ActionSignal::operator=  (5 bytes)
 * ActionSignal * operator=(ActionSignal * param_1)
 */
/* public: class vgui::ActionSignal & __thiscall vgui::ActionSignal::operator=(class
   vgui::ActionSignal const &) */

ActionSignal * __thiscall vgui::ActionSignal::operator=(ActionSignal *this,ActionSignal *param_1)

{
                    /* 0x3058  107  ??4ActionSignal@vgui@@QAEAAV01@ABV01@@Z */
  return this;
}

/* 100033b4  vgui::ActionSignal::ActionSignal  (5 bytes)
 * undefined ActionSignal(ActionSignal * param_1)
 */
/* public: __thiscall vgui::ActionSignal::ActionSignal(class vgui::ActionSignal const &) */

ActionSignal * __thiscall vgui::ActionSignal::ActionSignal(ActionSignal *this,ActionSignal *param_1)

{
                    /* 0x33b4  37  ??0ActionSignal@vgui@@QAE@ABV01@@Z */
  *(undefined ***)this = &_vftable_;
  return this;
}

