/* ts_i386.so - bad_exception (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00105340  bad_exception::bad_exception  (41 bytes)
 * undefined bad_exception(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_exception::bad_exception(void) */

void __thiscall bad_exception::bad_exception(bad_exception *this)

{
  *(undefined1 **)this = exception_virtual_table;
  *(undefined1 **)this = bad_exception_virtual_table;
  return;
}

/* 00105370  bad_exception::~bad_exception  (64 bytes)
 * undefined ~bad_exception(uint param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_exception::~bad_exception(void) */

void __thiscall bad_exception::~bad_exception(bad_exception *this,uint param_1)

{
  *(undefined1 **)this = bad_exception_virtual_table;
  *(undefined1 **)this = exception_virtual_table;
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

