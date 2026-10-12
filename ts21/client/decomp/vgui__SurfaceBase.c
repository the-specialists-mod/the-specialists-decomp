/* client.dll - vgui__SurfaceBase (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000128f  vgui::SurfaceBase::operator=  (5 bytes)
 * SurfaceBase * operator=(SurfaceBase * param_1)
 * called by: FUN_100317e0
 */
/* public: class vgui::SurfaceBase & __thiscall vgui::SurfaceBase::operator=(class vgui::SurfaceBase
   const &) */

SurfaceBase * __thiscall vgui::SurfaceBase::operator=(SurfaceBase *this,SurfaceBase *param_1)

{
                    /* 0x128f  145  ??4SurfaceBase@vgui@@QAEAAV01@ABV01@@Z */
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

/* 10001ad2  vgui::SurfaceBase::SurfaceBase  (5 bytes)
 * undefined SurfaceBase(SurfaceBase * param_1)
 * called by: FUN_10031750
 */
/* public: __thiscall vgui::SurfaceBase::SurfaceBase(class vgui::SurfaceBase const &) */

SurfaceBase * __thiscall vgui::SurfaceBase::SurfaceBase(SurfaceBase *this,SurfaceBase *param_1)

{
                    /* 0x1ad2  82  ??0SurfaceBase@vgui@@QAE@ABV01@@Z */
  this[4] = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)this = &_vftable_;
  return this;
}

