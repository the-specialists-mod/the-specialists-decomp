/* client.dll - vgui__Scheme (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001d57  vgui::Scheme::Scheme  (5 bytes)
 * undefined Scheme(Scheme * param_1)
 */
/* public: __thiscall vgui::Scheme::Scheme(class vgui::Scheme const &) */

Scheme * __thiscall vgui::Scheme::Scheme(Scheme *this,Scheme *param_1)

{
  int iVar1;
  Scheme *pSVar2;
  Scheme *pSVar3;
  
  iVar1 = 0x24;
  pSVar2 = param_1;
  pSVar3 = this;
  while( true ) {
    pSVar3 = pSVar3 + 4;
    pSVar2 = pSVar2 + 4;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *(undefined4 *)pSVar3 = *(undefined4 *)pSVar2;
  }
  pSVar2 = param_1 + 0x94;
  pSVar3 = this + 0x94;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar3 = *(undefined4 *)pSVar2;
    pSVar2 = pSVar2 + 4;
    pSVar3 = pSVar3 + 4;
  }
  pSVar2 = param_1 + 0xa8;
  pSVar3 = this + 0xa8;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar3 = *(undefined4 *)pSVar2;
    pSVar2 = pSVar2 + 4;
    pSVar3 = pSVar3 + 4;
  }
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10002af4  vgui::Scheme::operator=  (5 bytes)
 * Scheme * operator=(Scheme * param_1)
 */
/* public: class vgui::Scheme & __thiscall vgui::Scheme::operator=(class vgui::Scheme const &) */

Scheme * __thiscall vgui::Scheme::operator=(Scheme *this,Scheme *param_1)

{
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
                    /* 0x2af4  136  ??4Scheme@vgui@@QAEAAV01@ABV01@@Z */
  for (uStack_c = 0; uStack_c < 0x24; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 4) = *(undefined4 *)(param_1 + uStack_c * 4 + 4);
  }
  for (uStack_10 = 0; uStack_10 < 5; uStack_10 = uStack_10 + 1) {
    *(undefined4 *)(this + uStack_10 * 4 + 0x94) = *(undefined4 *)(param_1 + uStack_10 * 4 + 0x94);
  }
  for (uStack_14 = 0; uStack_14 < 0xe; uStack_14 = uStack_14 + 1) {
    *(undefined4 *)(this + uStack_14 * 4 + 0xa8) = *(undefined4 *)(param_1 + uStack_14 * 4 + 0xa8);
  }
  return this;
}

