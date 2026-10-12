/* client.dll - vgui__Surface (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001474  vgui::Surface::~Surface  (5 bytes)
 * void ~Surface(void)
 */
/* public: __thiscall vgui::Surface::~Surface(void) */

void __thiscall vgui::Surface::~Surface(Surface *this)

{
                    /* 0x1474  88  ??1Surface@vgui@@QAE@XZ */
  vgui::SurfaceBase::~SurfaceBase((SurfaceBase *)this);
  return;
}

/* 10002743  vgui::Surface::operator=  (5 bytes)
 * Surface * operator=(Surface * param_1)
 */
/* public: class vgui::Surface & __thiscall vgui::Surface::operator=(class vgui::Surface const &) */

Surface * __thiscall vgui::Surface::operator=(Surface *this,Surface *param_1)

{
                    /* 0x2743  144  ??4Surface@vgui@@QAEAAV01@ABV01@@Z */
  SurfaceBase::operator=((SurfaceBase *)this,(SurfaceBase *)param_1);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  this[0x28] = param_1[0x28];
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}

/* 10002e1e  vgui::Surface::Surface  (5 bytes)
 * undefined Surface(Surface * param_1)
 */
/* public: __thiscall vgui::Surface::Surface(class vgui::Surface const &) */

Surface * __thiscall vgui::Surface::Surface(Surface *this,Surface *param_1)

{
                    /* 0x2e1e  81  ??0Surface@vgui@@QAE@ABV01@@Z */
  SurfaceBase::SurfaceBase((SurfaceBase *)this,(SurfaceBase *)param_1);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  this[0x28] = param_1[0x28];
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined ***)this = &_vftable_;
  return this;
}

