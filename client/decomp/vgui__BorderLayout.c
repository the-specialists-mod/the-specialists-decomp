/* client.dll - vgui__BorderLayout (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10013830  vgui::BorderLayout::BorderLayout  (27 bytes)
 * undefined BorderLayout(BorderLayout * param_1)
 */
/* public: __thiscall vgui::BorderLayout::BorderLayout(class vgui::BorderLayout const &) */

void __thiscall vgui::BorderLayout::BorderLayout(BorderLayout *this,BorderLayout *param_1)

{
  undefined4 uVar1;
  
                    /* 0x13830  43  ??0BorderLayout@vgui@@QAE@ABV01@@Z */
  *(undefined ***)this = &Layout::_vftable_;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

/* 100148e0  vgui::BorderLayout::operator=  (15 bytes)
 * BorderLayout * operator=(BorderLayout * param_1)
 */
/* public: class vgui::BorderLayout & __thiscall vgui::BorderLayout::operator=(class
   vgui::BorderLayout const &) */

BorderLayout * __thiscall vgui::BorderLayout::operator=(BorderLayout *this,BorderLayout *param_1)

{
                    /* 0x148e0  112  ??4BorderLayout@vgui@@QAEAAV01@ABV01@@Z
                       0x148e0  120  ??4FileInputStream@vgui@@QAEAAV01@ABV01@@Z
                       0x148e0  134  ??4MiniApp@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}

