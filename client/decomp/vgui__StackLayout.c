/* client.dll - vgui__StackLayout (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005c250  vgui::StackLayout::StackLayout  (33 bytes)
 * undefined StackLayout(StackLayout * param_1)
 */
/* public: __thiscall vgui::StackLayout::StackLayout(class vgui::StackLayout const &) */

void __thiscall vgui::StackLayout::StackLayout(StackLayout *this,StackLayout *param_1)

{
                    /* 0x5c250  80  ??0StackLayout@vgui@@QAE@ABV01@@Z */
  *(undefined ***)this = &Layout::_vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  *(undefined ***)this = &_vftable_;
  return;
}

/* 1005c280  vgui::StackLayout::operator=  (21 bytes)
 * StackLayout * operator=(StackLayout * param_1)
 */
/* public: class vgui::StackLayout & __thiscall vgui::StackLayout::operator=(class vgui::StackLayout
   const &) */

StackLayout * __thiscall vgui::StackLayout::operator=(StackLayout *this,StackLayout *param_1)

{
                    /* 0x5c280  142  ??4StackLayout@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  return this;
}

