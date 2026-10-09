/* ts_i386.so - CFuncWallToggle (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a51c4  CFuncWallToggle::Spawn  (62 bytes)
 * undefined Spawn(void)
 */
/* CFuncWallToggle::Spawn(void) */

void __thiscall CFuncWallToggle::Spawn(CFuncWallToggle *this)

{
  CFuncWall::Spawn((CFuncWall *)this);
  if ((this->pev->spawnflags & 1) != 0) {
    TurnOff(this);
  }
  return;
}

/* 000a5204  CFuncWallToggle::TurnOff  (65 bytes)
 * undefined TurnOff(void)
 */
/* CFuncWallToggle::TurnOff(void) */

void __thiscall CFuncWallToggle::TurnOff(CFuncWallToggle *this)

{
  int *piVar1;
  
  this->pev->solid = 0;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  return;
}

/* 000a5248  CFuncWallToggle::TurnOn  (65 bytes)
 * undefined TurnOn(void)
 */
/* CFuncWallToggle::TurnOn(void) */

void __thiscall CFuncWallToggle::TurnOn(CFuncWallToggle *this)

{
  int *piVar1;
  
  this->pev->solid = 4;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 & 0xffffff7f;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  return;
}

/* 000a528c  CFuncWallToggle::IsOn  (22 bytes)
 * bool IsOn(void)
 */
/* CFuncWallToggle::IsOn(void) */

bool __thiscall CFuncWallToggle::IsOn(CFuncWallToggle *this)

{
  return this->pev->solid != 0;
}

/* 000a52a4  CFuncWallToggle::Use  (91 bytes)
 * undefined Use(CFuncWallToggle * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CFuncWallToggle::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CFuncWallToggle::Use
               (CFuncWallToggle *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = IsOn(param_1);
  iVar2 = CBaseEntity::ShouldToggle(param_1,param_4,CONCAT31(extraout_var,bVar1));
  if (iVar2 != 0) {
    if (CONCAT31(extraout_var,bVar1) == 0) {
      TurnOn(param_1);
    }
    else {
      TurnOff(param_1);
    }
  }
  return;
}

