/* ts_i386.so - __attr_type_info (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 001060a0  __attr_type_info::~__attr_type_info  (71 bytes)
 * undefined ~__attr_type_info(uint param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __attr_type_info::~__attr_type_info(void) */

void __thiscall __attr_type_info::~__attr_type_info(__attr_type_info *this,uint param_1)

{
  *(undefined1 **)(this + 4) = __attr_type_info_virtual_table;
  type_info::~type_info((type_info *)this,0);
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

