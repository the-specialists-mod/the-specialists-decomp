/* ts_i386.so - CFuncConveyor (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a5324  CFuncConveyor::Spawn  (154 bytes)
 * undefined Spawn(void)
 */
/* CFuncConveyor::Spawn(void) */

void __thiscall CFuncConveyor::Spawn(CFuncConveyor *this)

{
  int *piVar1;
  
  SetMovedir((int)this->pev);
  CFuncWall::Spawn((CFuncWall *)this);
  if ((((byte)this->pev->spawnflags ^ 1) & 1) != 0) {
    piVar1 = &this->pev->flags;
    *piVar1 = *piVar1 | 4;
  }
  if ((this->pev->spawnflags & 2) != 0) {
    this->pev->solid = 0;
    this->pev->skin = 0;
  }
  if (this->pev->speed == 0.0) {
    this->pev->speed = 100.0;
  }
  UpdateSpeed(this,this->pev->speed);
  return;
}

/* 000a53c0  CFuncConveyor::UpdateSpeed  (149 bytes)
 * undefined UpdateSpeed(float param_1)
 */
/* CFuncConveyor::UpdateSpeed(float) */

void __thiscall CFuncConveyor::UpdateSpeed(CFuncConveyor *this,float param_1)

{
  if (0.0 <= param_1) {
    this->pev->rendercolor[0] = 0.0;
  }
  else {
    this->pev->rendercolor[0] = 1.0;
  }
  this->pev->rendercolor[1] = (float)((int)ROUND(ABS(param_1) * 16.0) >> 8);
  this->pev->rendercolor[2] = (float)((int)ROUND(ABS(param_1) * 16.0) & 0xff);
  return;
}

/* 000a5458  CFuncConveyor::Use  (51 bytes)
 * undefined Use(CFuncConveyor * param_1)
 */
/* CFuncConveyor::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CFuncConveyor::Use(CFuncConveyor *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((int)&param_1->pev->speed + 3);
  *pbVar1 = *pbVar1 ^ 0x80;
  UpdateSpeed(param_1,param_1->pev->speed);
  return;
}

