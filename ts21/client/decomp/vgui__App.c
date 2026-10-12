/* client.dll - vgui__App (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000195b  vgui::App::App  (5 bytes)
 * undefined App(App * param_1)
 */
/* public: __thiscall vgui::App::App(class vgui::App const &) */

App * __thiscall vgui::App::App(App *this,App *param_1)

{
  int iVar1;
  App *pAVar2;
  App *pAVar3;
  
                    /* 0x195b  39  ??0App@vgui@@QAE@ABV01@@Z */
  this[4] = param_1[4];
  this[5] = param_1[5];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)(this + 0x28) = *(undefined2 *)(param_1 + 0x28);
  this[0x2a] = param_1[0x2a];
  *(undefined2 *)(this + 0x2b) = *(undefined2 *)(param_1 + 0x2b);
  this[0x2d] = param_1[0x2d];
  *(undefined2 *)(this + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
  this[0x30] = param_1[0x30];
  *(undefined2 *)(this + 0x31) = *(undefined2 *)(param_1 + 0x31);
  this[0x33] = param_1[0x33];
  pAVar2 = param_1 + 0x34;
  pAVar3 = this + 0x34;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined2 *)pAVar3 = *(undefined2 *)pAVar2;
  pAVar3[2] = pAVar2[2];
  pAVar2 = param_1 + 0x9b;
  pAVar3 = this + 0x9b;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined2 *)pAVar3 = *(undefined2 *)pAVar2;
  pAVar3[2] = pAVar2[2];
  pAVar2 = param_1 + 0x102;
  pAVar3 = this + 0x102;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined2 *)pAVar3 = *(undefined2 *)pAVar2;
  pAVar3[2] = pAVar2[2];
  pAVar2 = param_1 + 0x169;
  pAVar3 = this + 0x169;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined2 *)pAVar3 = *(undefined2 *)pAVar2;
  pAVar3[2] = pAVar2[2];
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(this + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  this[0x1e0] = param_1[0x1e0];
  this[0x1e1] = param_1[0x1e1];
  *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  pAVar2 = param_1 + 0x1e8;
  pAVar3 = this + 0x1e8;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined4 *)(this + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(this + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10003f2b  vgui::App::operator=  (5 bytes)
 * App * operator=(App * param_1)
 */
/* public: class vgui::App & __thiscall vgui::App::operator=(class vgui::App const &) */

App * __thiscall vgui::App::operator=(App *this,App *param_1)

{
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
                    /* 0x3f2b  108  ??4App@vgui@@QAEAAV01@ABV01@@Z */
  this[4] = param_1[4];
  this[5] = param_1[5];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  for (uStack_c = 0; uStack_c < 3; uStack_c = uStack_c + 1) {
    this[uStack_c + 0x28] = param_1[uStack_c + 0x28];
  }
  for (uStack_10 = 0; uStack_10 < 3; uStack_10 = uStack_10 + 1) {
    this[uStack_10 + 0x2b] = param_1[uStack_10 + 0x2b];
  }
  for (uStack_14 = 0; uStack_14 < 3; uStack_14 = uStack_14 + 1) {
    this[uStack_14 + 0x2e] = param_1[uStack_14 + 0x2e];
  }
  for (uStack_18 = 0; uStack_18 < 3; uStack_18 = uStack_18 + 1) {
    this[uStack_18 + 0x31] = param_1[uStack_18 + 0x31];
  }
  for (uStack_1c = 0; uStack_1c < 0x67; uStack_1c = uStack_1c + 1) {
    this[uStack_1c + 0x34] = param_1[uStack_1c + 0x34];
  }
  for (uStack_20 = 0; uStack_20 < 0x67; uStack_20 = uStack_20 + 1) {
    this[uStack_20 + 0x9b] = param_1[uStack_20 + 0x9b];
  }
  for (uStack_24 = 0; uStack_24 < 0x67; uStack_24 = uStack_24 + 1) {
    this[uStack_24 + 0x102] = param_1[uStack_24 + 0x102];
  }
  for (uStack_28 = 0; uStack_28 < 0x67; uStack_28 = uStack_28 + 1) {
    this[uStack_28 + 0x169] = param_1[uStack_28 + 0x169];
  }
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(this + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  this[0x1e0] = param_1[0x1e0];
  this[0x1e1] = param_1[0x1e1];
  *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  for (uStack_2c = 0; uStack_2c < 0xe; uStack_2c = uStack_2c + 1) {
    *(undefined4 *)(this + uStack_2c * 4 + 0x1e8) = *(undefined4 *)(param_1 + uStack_2c * 4 + 0x1e8)
    ;
  }
  *(undefined4 *)(this + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(this + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(param_1 + 0x228);
  return this;
}

