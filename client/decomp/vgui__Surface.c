/* client.dll - vgui__Surface (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10013720  vgui::Surface::Surface  (118 bytes)
 * undefined Surface(Surface * param_1)
 */
/* public: __thiscall vgui::Surface::Surface(class vgui::Surface const &) */

void __thiscall vgui::Surface::Surface(Surface *this,Surface *param_1)

{
  undefined4 uVar1;
  
                    /* 0x13720  81  ??0Surface@vgui@@QAE@ABV01@@Z */
  this[4] = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)this = &SurfaceBase::_vftable_;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  this[0x28] = param_1[0x28];
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}

/* 100137a0  vgui::Surface::operator=  (106 bytes)
 * Surface * operator=(Surface * param_1)
 */
/* public: class vgui::Surface & __thiscall vgui::Surface::operator=(class vgui::Surface const &) */

Surface * __thiscall vgui::Surface::operator=(Surface *this,Surface *param_1)

{
                    /* 0x137a0  144  ??4Surface@vgui@@QAEAAV01@ABV01@@Z */
  this[4] = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  this[0x28] = param_1[0x28];
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}

/* 10013810  vgui::Surface::~Surface  (5 bytes)
 * void ~Surface(void)
 */
/* public: __thiscall vgui::Surface::~Surface(void) */

void __thiscall vgui::Surface::~Surface(Surface *this)

{
                    /* 0x13810  88  ??1Surface@vgui@@QAE@XZ */
                    /* WARNING: Could not recover jumptable at 0x1006a5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::SurfaceBase::~SurfaceBase((SurfaceBase *)this);
  return;
}

