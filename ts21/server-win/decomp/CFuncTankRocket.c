/* mp.dll - CFuncTankRocket (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001e0c0  CFuncTankRocket::Precache  (24 bytes)
 * undefined Precache()
 */
void __fastcall CFuncTankRocket::Precache(int param_1)

{
  UTIL_PrecacheOther(0x100939d4);
  CFuncTank::Precache(param_1);
  return;
}

/* 1001e0e0  CFuncTankRocket::Fire  (137 bytes)
 * undefined Fire(undefined4 * param_1)
 */
void __thiscall CFuncTankRocket::Fire(CFuncTankRocket *this,undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(float *)&this->field_0x88 == 0.0) {
    CFuncTank::Fire((CFuncTank *)this,param_1);
  }
  else {
    lVar2 = __ftol();
    iVar1 = (int)lVar2;
    if (0 < iVar1) {
      do {
        CBaseEntity::Create(0x100939d4,param_1,this->pev->angles,this->pev->pContainingEntity);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      CFuncTank::Fire((CFuncTank *)this,param_1);
      return;
    }
  }
  return;
}

