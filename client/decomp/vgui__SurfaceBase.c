/* client.dll - vgui__SurfaceBase (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10013680  vgui::SurfaceBase::SurfaceBase  (72 bytes)
 * undefined SurfaceBase(SurfaceBase * param_1)
 */
/* public: __thiscall vgui::SurfaceBase::SurfaceBase(class vgui::SurfaceBase const &) */

void __thiscall vgui::SurfaceBase::SurfaceBase(SurfaceBase *this,SurfaceBase *param_1)

{
                    /* 0x13680  82  ??0SurfaceBase@vgui@@QAE@ABV01@@Z */
  this[4] = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)this = &_vftable_;
  return;
}

/* 100136d0  vgui::SurfaceBase::operator=  (66 bytes)
 * SurfaceBase * operator=(SurfaceBase * param_1)
 */
/* public: class vgui::SurfaceBase & __thiscall vgui::SurfaceBase::operator=(class vgui::SurfaceBase
   const &) */

SurfaceBase * __thiscall vgui::SurfaceBase::operator=(SurfaceBase *this,SurfaceBase *param_1)

{
                    /* 0x136d0  145  ??4SurfaceBase@vgui@@QAEAAV01@ABV01@@Z */
  this[4] = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}

