/* ts_i386.so - __user_type_info (13 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00103a40  __user_type_info::upcast  (89 bytes)
 * bool upcast(undefined4 param_1, undefined4 param_2, undefined4 * param_3)
 */
/* __user_type_info::upcast(type_info const &, void *, void **) const */

bool __thiscall
__user_type_info::upcast
          (__user_type_info *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  cVar1 = (**(code **)(*(int *)(this + 4) + 0xc))(this,6,param_1,param_2,&local_1c);
  if (cVar1 == '\0') {
    *param_3 = local_1c;
  }
  return cVar1 == '\0' && 5 < local_18;
}

/* 00103aa0  __user_type_info::dyncast  (205 bytes)
 * int dyncast(int param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5)
 */
/* __user_type_info::dyncast(int, type_info const &, void *, type_info const &, void *) const */

int __thiscall
__user_type_info::dyncast
          (__user_type_info *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
          int param_5)

{
  int iVar1;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  (**(code **)(*(int *)(this + 4) + 0x10))(this,param_1,6,param_2,param_3,param_4,param_5,&local_1c)
  ;
  if (local_1c != 0) {
    if (5 < local_10) {
      return local_1c;
    }
    if (5 < (int)(local_14 & local_18)) {
      return local_1c;
    }
    if ((local_14 & 5) != 4) {
      iVar1 = local_10;
      if (local_10 == 0) {
        if (param_1 < 0) {
          iVar1 = 1;
          if (param_1 != -2) {
            iVar1 = (**(code **)(*(int *)(param_2 + 4) + 0x14))
                              (param_2,param_1,param_4,local_1c,param_5);
          }
        }
        else {
          iVar1 = (uint)(param_5 - local_1c == param_1) * 5 + 1;
        }
      }
      if (5 < iVar1) {
        return local_1c;
      }
    }
  }
  return 0;
}

/* 00103b70  __user_type_info::do_upcast  (84 bytes)
 * bool do_upcast(uint param_1, type_info * param_2, undefined4 param_3, undefined4 * param_4)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __user_type_info::do_upcast(__user_type_info::sub_kind, type_info const &, void *,
   __user_type_info::upcast_result &) const */

bool __thiscall
__user_type_info::do_upcast
          (__user_type_info *this,uint param_1,type_info *param_2,undefined4 param_3,
          undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = type_info::operator==((type_info *)this,param_2);
  if (cVar1 != '\0') {
    param_4[1] = param_1;
    param_4[2] = 8;
    *param_4 = param_3;
  }
  return cVar1 != '\0' && (param_1 & 6) == 4;
}

/* 00103bd0  __user_type_info::do_dyncast  (110 bytes)
 * undefined4 do_dyncast(undefined4 param_1, int param_2, type_info * param_3, int param_4, type_info * param_5, int param_6, int * param_7)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __user_type_info::do_dyncast(int, __user_type_info::sub_kind, type_info const &, void *,
   type_info const &, void *, __user_type_info::dyncast_result &) const */

undefined4 __thiscall
__user_type_info::do_dyncast
          (__user_type_info *this,undefined4 param_1,int param_2,type_info *param_3,int param_4,
          type_info *param_5,int param_6,int *param_7)

{
  char cVar1;
  
  if ((param_4 == param_6) &&
     (cVar1 = type_info::operator==((type_info *)this,param_5), cVar1 != '\0')) {
    param_7[2] = param_2;
    return 0;
  }
  cVar1 = type_info::operator==((type_info *)this,param_3);
  if (cVar1 != '\0') {
    *param_7 = param_4;
    param_7[3] = 1;
    param_7[1] = param_2;
  }
  return 0;
}

/* 00103c40  __user_type_info::do_find_public_subobj  (20 bytes)
 * char do_find_public_subobj(void)
 */
/* __user_type_info::do_find_public_subobj(int, type_info const &, void *, void *) const */

char __user_type_info::do_find_public_subobj(void)

{
  int in_stack_00000010;
  int in_stack_00000014;
  
  return (in_stack_00000014 == in_stack_00000010) * '\x05' + '\x01';
}

/* 001046a0  __user_type_info::~__user_type_info  (71 bytes)
 * undefined ~__user_type_info(uint param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __user_type_info::~__user_type_info(void) */

void __thiscall __user_type_info::~__user_type_info(__user_type_info *this,uint param_1)

{
  *(undefined1 **)(this + 4) = __user_type_info_virtual_table;
  type_info::~type_info((type_info *)this,0);
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

/* 00104740  __user_type_info::__user_type_info  (48 bytes)
 * undefined __user_type_info(undefined4 param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __user_type_info::__user_type_info(char const *) */

void __thiscall __user_type_info::__user_type_info(__user_type_info *this,undefined4 param_1)

{
  *(undefined1 **)(this + 4) = type_info_virtual_table;
  *(undefined4 *)this = param_1;
  *(undefined1 **)(this + 4) = __user_type_info_virtual_table;
  return;
}

/* 00104770  __user_type_info::contained_p  (14 bytes)
 * bool contained_p(int param_1)
 */
/* __user_type_info::contained_p(__user_type_info::sub_kind) */

bool __user_type_info::contained_p(int param_1)

{
  return 3 < param_1;
}

/* 00104780  __user_type_info::contained_public_p  (14 bytes)
 * bool contained_public_p(int param_1)
 */
/* __user_type_info::contained_public_p(__user_type_info::sub_kind) */

bool __user_type_info::contained_public_p(int param_1)

{
  return 5 < param_1;
}

/* 00104790  __user_type_info::contained_nonpublic_p  (19 bytes)
 * bool contained_nonpublic_p(uint param_1)
 */
/* __user_type_info::contained_nonpublic_p(__user_type_info::sub_kind) */

bool __user_type_info::contained_nonpublic_p(uint param_1)

{
  return (param_1 & 6) == 4;
}

/* 001047b0  __user_type_info::contained_nonvirtual_p  (19 bytes)
 * bool contained_nonvirtual_p(uint param_1)
 */
/* __user_type_info::contained_nonvirtual_p(__user_type_info::sub_kind) */

bool __user_type_info::contained_nonvirtual_p(uint param_1)

{
  return (param_1 & 5) == 4;
}

/* 001047d0  __user_type_info::contained_virtual_p  (19 bytes)
 * bool contained_virtual_p(uint param_1)
 */
/* __user_type_info::contained_virtual_p(__user_type_info::sub_kind) */

bool __user_type_info::contained_virtual_p(uint param_1)

{
  return (param_1 & 5) == 5;
}

/* 001047f0  __user_type_info::find_public_subobj  (73 bytes)
 * int find_public_subobj(int param_1, undefined4 param_2, int param_3, int param_4)
 */
/* __user_type_info::find_public_subobj(int, type_info const &, void *, void *) const */

int __thiscall
__user_type_info::find_public_subobj
          (__user_type_info *this,int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 < 0) {
    iVar1 = 1;
    if (param_1 != -2) {
      iVar1 = (**(code **)(*(int *)(this + 4) + 0x14))(this,param_1,param_2,param_3,param_4);
    }
  }
  else {
    iVar1 = (uint)(param_4 - param_3 == param_1) * 5 + 1;
  }
  return iVar1;
}

