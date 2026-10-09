/* ts_i386.so - EHANDLE (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000ab808  EHANDLE::Get  (38 bytes)
 * uint Get(void)
 */
/* EHANDLE::Get(void) */

uint __thiscall EHANDLE::Get(EHANDLE *this)

{
  uint uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)this & (*(int *)(*(uint *)this + 4) != *(int *)(this + 4)) - 1;
  }
  return uVar1;
}

/* 000ab830  EHANDLE::Set  (23 bytes)
 * int Set(int param_1)
 */
/* EHANDLE::Set(edict_s *) */

int __thiscall EHANDLE::Set(EHANDLE *this,int param_1)

{
  *(int *)this = param_1;
  if (param_1 != 0) {
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  }
  return param_1;
}

/* 000ab87c  EHANDLE::operator=  (50 bytes)
 * int * operator=(int * param_1)
 */
/* EHANDLE::TEMPNAMEPLACEHOLDERVALUE(CBaseEntity *) */

int * __thiscall EHANDLE::operator=(EHANDLE *this,int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0x208);
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(this + 4) = *(undefined4 *)(iVar1 + 4);
    }
  }
  return param_1;
}

/* 000ab8e0  EHANDLE::operator->  (50 bytes)
 * undefined4 operator->(void)
 */
/* EHANDLE::TEMPNAMEPLACEHOLDERVALUE(void) */

undefined4 __thiscall EHANDLE::operator->(EHANDLE *this)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = Get(this);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(undefined4 *)(uVar1 + 0x7c);
  }
  return uVar2;
}

