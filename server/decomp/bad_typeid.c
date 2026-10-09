/* ts_i386.so - bad_typeid (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00104630  bad_typeid::bad_typeid  (41 bytes)
 * undefined bad_typeid(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_typeid::bad_typeid(void) */

void __thiscall bad_typeid::bad_typeid(bad_typeid *this)

{
  *(undefined1 **)this = exception_virtual_table;
  *(undefined1 **)this = bad_typeid_virtual_table;
  return;
}

/* 00104660  bad_typeid::~bad_typeid  (64 bytes)
 * undefined ~bad_typeid(uint param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_typeid::~bad_typeid(void) */

void __thiscall bad_typeid::~bad_typeid(bad_typeid *this,uint param_1)

{
  *(undefined1 **)this = bad_typeid_virtual_table;
  *(undefined1 **)this = exception_virtual_table;
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

