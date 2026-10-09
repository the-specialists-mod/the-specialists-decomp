/* ts_i386.so - bad_alloc (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00106490  bad_alloc::~bad_alloc  (64 bytes)
 * undefined ~bad_alloc(uint param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_alloc::~bad_alloc(void) */

void __thiscall bad_alloc::~bad_alloc(bad_alloc *this,uint param_1)

{
  *(undefined1 **)this = bad_alloc_virtual_table;
  *(undefined1 **)this = exception_virtual_table;
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

/* 00106520  bad_alloc::what  (28 bytes)
 * char * what(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_alloc::what(void) const */

char * bad_alloc::what(void)

{
  return "bad_alloc";
}

