/* client.dll - vgui__StackLayout (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10002504  vgui::StackLayout::operator=  (5 bytes)
 * StackLayout * operator=(StackLayout * param_1)
 */
/* public: class vgui::StackLayout & __thiscall vgui::StackLayout::operator=(class vgui::StackLayout
   const &) */

StackLayout * __thiscall vgui::StackLayout::operator=(StackLayout *this,StackLayout *param_1)

{
                    /* 0x2504  142  ??4StackLayout@vgui@@QAEAAV01@ABV01@@Z */
  Layout::operator=((Layout *)this,(Layout *)param_1);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  return this;
}

/* 100036ed  vgui::StackLayout::StackLayout  (5 bytes)
 * undefined StackLayout(StackLayout * param_1)
 */
/* public: __thiscall vgui::StackLayout::StackLayout(class vgui::StackLayout const &) */

StackLayout * __thiscall vgui::StackLayout::StackLayout(StackLayout *this,StackLayout *param_1)

{
                    /* 0x36ed  80  ??0StackLayout@vgui@@QAE@ABV01@@Z */
  Layout::Layout((Layout *)this,(Layout *)param_1);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  *(undefined ***)this = &_vftable_;
  return this;
}

