/* ts_i386.so - bad_cast (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00104570  bad_cast::bad_cast  (41 bytes)
 * undefined bad_cast(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_cast::bad_cast(void) */

void __thiscall bad_cast::bad_cast(bad_cast *this)

{
  *(undefined1 **)this = exception_virtual_table;
  *(undefined1 **)this = bad_cast_virtual_table;
  return;
}

/* 001045a0  bad_cast::~bad_cast  (64 bytes)
 * undefined ~bad_cast(uint param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_cast::~bad_cast(void) */

void __thiscall bad_cast::~bad_cast(bad_cast *this,uint param_1)

{
  *(undefined1 **)this = bad_cast_virtual_table;
  *(undefined1 **)this = exception_virtual_table;
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

