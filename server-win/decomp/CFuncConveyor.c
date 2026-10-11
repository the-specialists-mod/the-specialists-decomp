/* mp.dll - CFuncConveyor (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10009000  CFuncConveyor::Spawn  (121 bytes)
 * undefined Spawn(void * param_1)
 */
void __fastcall CFuncConveyor::Spawn(void *param_1)

{
  uint *puVar1;
  
  SetMovedir(*(int *)((int)param_1 + 4));
  CFuncWall::Spawn((int)param_1);
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) == 0) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 4) + 0x1a4);
    *puVar1 = *puVar1 | 4;
  }
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 2) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x10c) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x110) = 0;
  }
  if (*(float *)(*(int *)((int)param_1 + 4) + 0x1f8) == 0.0) {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x1f8) = 0x42c80000;
  }
  UpdateSpeed(param_1,*(float *)(*(int *)((int)param_1 + 4) + 0x1f8));
  return;
}

/* 10009080  CFuncConveyor::UpdateSpeed  (116 bytes)
 * undefined UpdateSpeed(float param_1)
 * called by: CFuncConveyor::Spawn, CFuncConveyor::Use
 */
void __thiscall CFuncConveyor::UpdateSpeed(CFuncConveyor *this,float param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  if (0.0 <= param_1) {
    this->pev->rendercolor[0] = 0.0;
  }
  else {
    this->pev->rendercolor[0] = 1.0;
  }
  this->pev->rendercolor[1] = (float)((int)(uint)lVar1 >> 8);
  this->pev->rendercolor[2] = (float)((uint)lVar1 & 0xff);
  return;
}

/* 10009100  CFuncConveyor::Use  (35 bytes)
 * undefined Use()
 */
void __fastcall CFuncConveyor::Use(CFuncConveyor *param_1)

{
  param_1->pev->speed = -param_1->pev->speed;
  UpdateSpeed(param_1,param_1->pev->speed);
  return;
}

