/* client.dll - vgui__LineBorder (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100019d0  vgui::LineBorder::setLineColor  (85 bytes)
 * void setLineColor(int param_1, int param_2, int param_3, int param_4)
 */
/* public: void __thiscall vgui::LineBorder::setLineColor(int,int,int,int) */

void __thiscall
vgui::LineBorder::setLineColor(LineBorder *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  LineBorder *pLVar2;
  Color local_c [12];
  
                    /* 0x19d0  451  ?setLineColor@LineBorder@vgui@@QAEXHHHH@Z */
  iVar1 = vgui::Color::Color(local_c,param_1,param_2,param_3,param_4);
  pLVar2 = this + 0x3c;
  do {
    *pLVar2 = pLVar2[iVar1 - (int)(this + 0x38)];
    pLVar2 = pLVar2 + 1;
  } while (pLVar2 + (-4 - (int)(this + 0x38)) < (LineBorder *)0x4);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(iVar1 + 8);
  return;
}

/* 10001a30  vgui::LineBorder::LineBorder  (132 bytes)
 * undefined LineBorder(LineBorder * param_1)
 */
/* public: __thiscall vgui::LineBorder::LineBorder(class vgui::LineBorder const &) */

void __thiscall vgui::LineBorder::LineBorder(LineBorder *this,LineBorder *param_1)

{
                    /* 0x1a30  67  ??0LineBorder@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)(this + 0x18) = &Color::_vftable_;
  *(undefined ***)this = &Image::_vftable_;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined ***)this = &Border::_vftable_;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined ***)(this + 0x38) = &Color::_vftable_;
  *(undefined ***)this = &_vftable_;
  return;
}

/* 10001ac0  vgui::LineBorder::operator=  (172 bytes)
 * LineBorder * operator=(LineBorder * param_1)
 */
/* public: class vgui::LineBorder & __thiscall vgui::LineBorder::operator=(class vgui::LineBorder
   const &) */

LineBorder * __thiscall vgui::LineBorder::operator=(LineBorder *this,LineBorder *param_1)

{
  LineBorder *pLVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x1ac0  131  ??4LineBorder@vgui@@QAEAAV01@ABV01@@Z */
  iVar3 = 2;
  iVar2 = (int)param_1 - (int)this;
  pLVar1 = this;
  do {
    pLVar1 = pLVar1 + 4;
    *(undefined4 *)pLVar1 = *(undefined4 *)(pLVar1 + iVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pLVar1 = this + 0xc;
  iVar3 = 2;
  do {
    *(undefined4 *)pLVar1 = *(undefined4 *)(pLVar1 + iVar2);
    pLVar1 = pLVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  pLVar1 = this + 0x1c;
  do {
    *pLVar1 = pLVar1[(int)(param_1 + (0x18 - (int)(this + 0x18)))];
    pLVar1 = pLVar1 + 1;
  } while (pLVar1 + (-4 - (int)(this + 0x18)) < (LineBorder *)0x4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  pLVar1 = this + 0x24;
  iVar3 = 4;
  do {
    *(undefined4 *)pLVar1 = *(undefined4 *)(pLVar1 + iVar2);
    pLVar1 = pLVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  pLVar1 = this + 0x3c;
  do {
    *pLVar1 = pLVar1[(int)(param_1 + (0x38 - (int)(this + 0x38)))];
    pLVar1 = pLVar1 + 1;
  } while (pLVar1 + (-4 - (int)(this + 0x38)) < (LineBorder *)0x4);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return this;
}

