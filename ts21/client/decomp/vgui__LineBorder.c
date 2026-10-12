/* client.dll - vgui__LineBorder (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10002e8c  vgui::LineBorder::operator=  (5 bytes)
 * LineBorder * operator=(LineBorder * param_1)
 */
/* public: class vgui::LineBorder & __thiscall vgui::LineBorder::operator=(class vgui::LineBorder
   const &) */

LineBorder * __thiscall vgui::LineBorder::operator=(LineBorder *this,LineBorder *param_1)

{
                    /* 0x2e8c  131  ??4LineBorder@vgui@@QAEAAV01@ABV01@@Z */
  Border::operator=((Border *)this,(Border *)param_1);
  Color::operator=((Color *)(this + 0x38),(Color *)(param_1 + 0x38));
  return this;
}

/* 10002fd6  vgui::LineBorder::setLineColor  (5 bytes)
 * void setLineColor(int param_1, int param_2, int param_3, int param_4)
 */
/* public: void __thiscall vgui::LineBorder::setLineColor(int,int,int,int) */

void __thiscall
vgui::LineBorder::setLineColor(LineBorder *this,int param_1,int param_2,int param_3,int param_4)

{
  Color *pCVar1;
  Color aCStack_14 [12];
  LineBorder *pLStack_8;
  
                    /* 0x2fd6  451  ?setLineColor@LineBorder@vgui@@QAEXHHHH@Z */
  pLStack_8 = this;
  pCVar1 = (Color *)vgui::Color::Color(aCStack_14,param_1,param_2,param_3,param_4);
  Color::operator=((Color *)(pLStack_8 + 0x38),pCVar1);
  return;
}

/* 100034d6  vgui::LineBorder::LineBorder  (5 bytes)
 * undefined LineBorder(LineBorder * param_1)
 */
/* public: __thiscall vgui::LineBorder::LineBorder(class vgui::LineBorder const &) */

LineBorder * __thiscall vgui::LineBorder::LineBorder(LineBorder *this,LineBorder *param_1)

{
                    /* 0x34d6  67  ??0LineBorder@vgui@@QAE@ABV01@@Z */
  Border::Border((Border *)this,(Border *)param_1);
  Color::Color((Color *)(this + 0x38),(Color *)(param_1 + 0x38));
  *(undefined ***)this = &_vftable_;
  return this;
}

