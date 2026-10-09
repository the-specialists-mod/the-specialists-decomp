/* ts_i386.so - CSound (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e208c  CSound::Clear  (76 bytes)
 * undefined Clear(void)
 */
/* CSound::Clear(void) */

void __thiscall CSound::Clear(CSound *this)

{
  int iVar1;
  undefined4 *puVar2;
  CSound *pCVar3;
  
  puVar2 = &g_vecZero;
  pCVar3 = this;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}

/* 000e20d8  CSound::Reset  (62 bytes)
 * undefined Reset(void)
 */
/* CSound::Reset(void) */

void __thiscall CSound::Reset(CSound *this)

{
  int iVar1;
  undefined4 *puVar2;
  CSound *pCVar3;
  
  puVar2 = &g_vecZero;
  pCVar3 = this;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  return;
}

/* 000e2118  CSound::FIsSound  (20 bytes)
 * bool FIsSound(void)
 */
/* CSound::FIsSound(void) */

bool __thiscall CSound::FIsSound(CSound *this)

{
  return (*(uint *)(this + 0xc) & 0x27) != 0;
}

/* 000e212c  CSound::FIsScent  (20 bytes)
 * bool FIsScent(void)
 */
/* CSound::FIsScent(void) */

bool __thiscall CSound::FIsScent(CSound *this)

{
  return (*(uint *)(this + 0xc) & 0x58) != 0;
}

