/* client.dll - vgui__Scheme (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100011e0  vgui::Scheme::Scheme  (70 bytes)
 * undefined Scheme(Scheme * param_1)
 */
/* public: __thiscall vgui::Scheme::Scheme(class vgui::Scheme const &) */

void __thiscall vgui::Scheme::Scheme(Scheme *this,Scheme *param_1)

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
  return;
}

/* 10001230  vgui::Scheme::operator=  (78 bytes)
 * Scheme * operator=(Scheme * param_1)
 */
/* public: class vgui::Scheme & __thiscall vgui::Scheme::operator=(class vgui::Scheme const &) */

Scheme * __thiscall vgui::Scheme::operator=(Scheme *this,Scheme *param_1)

{
  int iVar1;
  Scheme *pSVar2;
  int iVar3;
  
                    /* 0x1230  136  ??4Scheme@vgui@@QAEAAV01@ABV01@@Z */
  iVar1 = (int)param_1 - (int)this;
  iVar3 = 0x24;
  pSVar2 = this;
  do {
    pSVar2 = pSVar2 + 4;
    *(undefined4 *)pSVar2 = *(undefined4 *)(pSVar2 + iVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar2 = this + 0x94;
  iVar3 = 5;
  do {
    *(undefined4 *)pSVar2 = *(undefined4 *)(pSVar2 + iVar1);
    pSVar2 = pSVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar2 = this + 0xa8;
  iVar3 = 0xe;
  do {
    *(undefined4 *)pSVar2 = *(undefined4 *)(pSVar2 + iVar1);
    pSVar2 = pSVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return this;
}

