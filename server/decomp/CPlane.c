/* ts_i386.so - CPlane (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d1e48  CPlane::CPlane  (12 bytes)
 * undefined CPlane(void)
 */
/* CPlane::CPlane(void) */

void __thiscall CPlane::CPlane(CPlane *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

/* 000d1e54  CPlane::InitializePlane  (59 bytes)
 * undefined InitializePlane(undefined4 * param_1, float * param_2)
 */
/* CPlane::InitializePlane(Vector const &, Vector const &) */

void __thiscall CPlane::InitializePlane(CPlane *this,undefined4 *param_1,float *param_2)

{
  int iVar1;
  CPlane *pCVar2;
  
  pCVar2 = this;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *param_1;
    param_1 = param_1 + 1;
    pCVar2 = pCVar2 + 4;
  }
  *(float *)(this + 0xc) =
       *(float *)(this + 8) * param_2[2] +
       *(float *)(this + 4) * param_2[1] + *(float *)this * *param_2;
  *(undefined4 *)(this + 0x10) = 1;
  return;
}

/* 000d1e90  CPlane::PointInFront  (78 bytes)
 * bool PointInFront(float * param_1)
 */
/* CPlane::PointInFront(Vector const &) */

bool __thiscall CPlane::PointInFront(CPlane *this,float *param_1)

{
  bool bVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 0.0 <= (*(float *)(this + 8) * param_1[2] +
                   *(float *)(this + 4) * param_1[1] + *(float *)this * *param_1) -
                   *(float *)(this + 0xc);
  }
  return bVar1;
}

