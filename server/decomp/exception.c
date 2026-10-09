/* ts_i386.so - exception (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00105220  exception::what  (43 bytes)
 * undefined4 what(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* exception::what(void) const */

undefined4 __thiscall exception::what(exception *this)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (this == (exception *)0x0) {
    uVar2 = __throw_bad_typeid();
    puVar1 = (undefined4 *)uVar2;
  }
  else {
    puVar1 = (undefined4 *)(**(code **)(*(int *)this + 4))();
  }
  return *puVar1;
}

/* 00105290  exception::exception  (29 bytes)
 * undefined exception(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* exception::exception(void) */

void __thiscall exception::exception(exception *this)

{
  *(undefined1 **)this = exception_virtual_table;
  return;
}

/* 001052b0  exception::~exception  (56 bytes)
 * undefined ~exception(uint param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* exception::~exception(void) */

void __thiscall exception::~exception(exception *this,uint param_1)

{
  *(undefined1 **)this = exception_virtual_table;
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

