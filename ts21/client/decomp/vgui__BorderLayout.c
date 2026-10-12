/* client.dll - vgui__BorderLayout (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000213a  vgui::BorderLayout::operator=  (5 bytes)
 * BorderLayout * operator=(BorderLayout * param_1)
 */
/* public: class vgui::BorderLayout & __thiscall vgui::BorderLayout::operator=(class
   vgui::BorderLayout const &) */

BorderLayout * __thiscall vgui::BorderLayout::operator=(BorderLayout *this,BorderLayout *param_1)

{
                    /* 0x213a  112  ??4BorderLayout@vgui@@QAEAAV01@ABV01@@Z */
  Layout::operator=((Layout *)this,(Layout *)param_1);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}

/* 10002cfc  vgui::BorderLayout::BorderLayout  (5 bytes)
 * undefined BorderLayout(BorderLayout * param_1)
 */
/* public: __thiscall vgui::BorderLayout::BorderLayout(class vgui::BorderLayout const &) */

BorderLayout * __thiscall vgui::BorderLayout::BorderLayout(BorderLayout *this,BorderLayout *param_1)

{
                    /* 0x2cfc  43  ??0BorderLayout@vgui@@QAE@ABV01@@Z */
  Layout::Layout((Layout *)this,(Layout *)param_1);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  return this;
}

