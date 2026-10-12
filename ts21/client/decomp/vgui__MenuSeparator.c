/* client.dll - vgui__MenuSeparator (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001fcd  vgui::MenuSeparator::MenuSeparator  (5 bytes)
 * undefined MenuSeparator(MenuSeparator * param_1)
 */
/* public: __thiscall vgui::MenuSeparator::MenuSeparator(class vgui::MenuSeparator const &) */

MenuSeparator * __thiscall
vgui::MenuSeparator::MenuSeparator(MenuSeparator *this,MenuSeparator *param_1)

{
                    /* 0x1fcd  69  ??0MenuSeparator@vgui@@QAE@ABV01@@Z */
  Label::Label((Label *)this,(Label *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 100023ab  vgui::MenuSeparator::operator=  (5 bytes)
 * MenuSeparator * operator=(MenuSeparator * param_1)
 */
/* public: class vgui::MenuSeparator & __thiscall vgui::MenuSeparator::operator=(class
   vgui::MenuSeparator const &) */

MenuSeparator * __thiscall
vgui::MenuSeparator::operator=(MenuSeparator *this,MenuSeparator *param_1)

{
                    /* 0x23ab  133  ??4MenuSeparator@vgui@@QAEAAV01@ABV01@@Z */
  Label::operator=((Label *)this,(Label *)param_1);
  return this;
}

