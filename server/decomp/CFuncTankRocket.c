/* ts_i386.so - CFuncTankRocket (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c47f0  CFuncTankRocket::Precache  (50 bytes)
 * undefined Precache(void)
 */
/* CFuncTankRocket::Precache(void) */

void __thiscall CFuncTankRocket::Precache(CFuncTankRocket *this)

{
  UTIL_PrecacheOther(0x10cba2);
  CFuncTank::Precache((CFuncTank *)this);
  return;
}

/* 000c4824  CFuncTankRocket::Fire  (368 bytes)
 * undefined Fire(CBaseEntity * param_1, undefined4 * param_2)
 */
/* CFuncTankRocket::Fire(Vector const &, Vector const &, entvars_s *) */

void CFuncTankRocket::Fire(CBaseEntity *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(float *)&param_1[1].field_0x34 != 0.0) {
    iVar2 = (int)ROUND((gpGlobals->time - *(float *)&param_1[1].field_0x34) *
                       *(float *)&param_1[1].field_0x38);
    if (iVar2 < 1) {
      return;
    }
    if (0 < iVar2) {
      uVar1 = -iVar2 & 3;
      if (uVar1 != 0) {
        if (uVar1 < 3) {
          if (uVar1 < 2) {
            CBaseEntity::Create(0x10cba2,param_2,param_1->pev->angles,
                                param_1->pev->pContainingEntity);
            iVar2 = iVar2 + -1;
          }
          CBaseEntity::Create(0x10cba2,param_2,param_1->pev->angles,param_1->pev->pContainingEntity)
          ;
          iVar2 = iVar2 + -1;
        }
        CBaseEntity::Create(0x10cba2,param_2,param_1->pev->angles,param_1->pev->pContainingEntity);
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) goto LAB_000c4979;
      }
      do {
        CBaseEntity::Create(0x10cba2,param_2,param_1->pev->angles,param_1->pev->pContainingEntity);
        CBaseEntity::Create(0x10cba2,param_2,param_1->pev->angles,param_1->pev->pContainingEntity);
        CBaseEntity::Create(0x10cba2,param_2,param_1->pev->angles,param_1->pev->pContainingEntity);
        CBaseEntity::Create(0x10cba2,param_2,param_1->pev->angles,param_1->pev->pContainingEntity);
        iVar2 = iVar2 + -4;
      } while (iVar2 != 0);
    }
  }
LAB_000c4979:
  CFuncTank::Fire(param_1,param_2);
  return;
}

