/* ts_i386.so - type_info (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 001038d4  type_info::~type_info  (57 bytes)
 * undefined ~type_info(uint param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* type_info::~type_info(void) */

void __thiscall type_info::~type_info(type_info *this,uint param_1)

{
  *(undefined1 **)(this + 4) = type_info_virtual_table;
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

/* 00103910  type_info::operator==  (68 bytes)
 * undefined1 operator==(type_info * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* type_info::TEMPNAMEPLACEHOLDERVALUE(type_info const &) const */

undefined1 __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  if ((param_1 != this) && (iVar1 = strcmp(*(char **)this,*(char **)param_1), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

/* 001044b0  type_info::type_info  (35 bytes)
 * undefined type_info(undefined4 param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* type_info::type_info(char const *) */

void __thiscall type_info::type_info(type_info *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  *(undefined1 **)(this + 4) = type_info_virtual_table;
  return;
}

/* 001044e0  type_info::name  (10 bytes)
 * undefined4 name(void)
 */
/* type_info::name(void) const */

undefined4 __thiscall type_info::name(type_info *this)

{
  return *(undefined4 *)this;
}

/* 001044f0  type_info::operator!=  (43 bytes)
 * uint operator!=(type_info * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* type_info::TEMPNAMEPLACEHOLDERVALUE(type_info const &) const */

uint __thiscall type_info::operator!=(type_info *this,type_info *param_1)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  
  uVar1 = operator==(this,param_1);
  return CONCAT31(extraout_var,uVar1) ^ 1;
}

/* 001053b4  type_info::before  (45 bytes)
 * uint before(undefined4 * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* type_info::before(type_info const &) const */

uint __thiscall type_info::before(type_info *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = strcmp(*(char **)this,(char *)*param_1);
  return uVar1 >> 0x1f;
}

