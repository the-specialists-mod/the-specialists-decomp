/* client.dll - vgui__DesktopIcon (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001726  vgui::DesktopIcon::DesktopIcon  (5 bytes)
 * undefined DesktopIcon(DesktopIcon * param_1)
 */
/* public: __thiscall vgui::DesktopIcon::DesktopIcon(class vgui::DesktopIcon const &) */

DesktopIcon * __thiscall vgui::DesktopIcon::DesktopIcon(DesktopIcon *this,DesktopIcon *param_1)

{
                    /* 0x1726  49  ??0DesktopIcon@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10003f5d  vgui::DesktopIcon::operator=  (5 bytes)
 * DesktopIcon * operator=(DesktopIcon * param_1)
 */
/* public: class vgui::DesktopIcon & __thiscall vgui::DesktopIcon::operator=(class vgui::DesktopIcon
   const &) */

DesktopIcon * __thiscall vgui::DesktopIcon::operator=(DesktopIcon *this,DesktopIcon *param_1)

{
                    /* 0x3f5d  118  ??4DesktopIcon@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  return this;
}

