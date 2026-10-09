/* ts_i386.so - __si_type_info (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00103c60  __si_type_info::do_upcast  (111 bytes)
 * uint do_upcast(uint param_1, type_info * param_2, undefined4 param_3, undefined4 * param_4)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __si_type_info::do_upcast(__user_type_info::sub_kind, type_info const &, void *,
   __user_type_info::upcast_result &) const */

uint __thiscall
__si_type_info::do_upcast
          (__si_type_info *this,uint param_1,type_info *param_2,undefined4 param_3,
          undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = type_info::operator==((type_info *)this,param_2);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*(int *)(*(int *)(this + 8) + 4) + 0xc))
                      (*(undefined4 *)(this + 8),param_1,param_2,param_3,param_4);
  }
  else {
    param_4[2] = 8;
    param_4[1] = param_1;
    *param_4 = param_3;
    uVar2 = (uint)((param_1 & 6) == 4);
  }
  return uVar2;
}

/* 00103ce0  __si_type_info::do_dyncast  (185 bytes)
 * undefined4 do_dyncast(int param_1, int param_2, type_info * param_3, int param_4, type_info * param_5, int param_6, int * param_7)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __si_type_info::do_dyncast(int, __user_type_info::sub_kind, type_info const &, void *, type_info
   const &, void *, __user_type_info::dyncast_result &) const */

undefined4 __thiscall
__si_type_info::do_dyncast
          (__si_type_info *this,int param_1,int param_2,type_info *param_3,int param_4,
          type_info *param_5,int param_6,int *param_7)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_4 == param_6) &&
     (cVar1 = type_info::operator==((type_info *)this,param_5), cVar1 != '\0')) {
    param_7[2] = param_2;
  }
  else {
    cVar1 = type_info::operator==((type_info *)this,param_3);
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*(int *)(*(int *)(this + 8) + 4) + 0x10))
                        (*(undefined4 *)(this + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                         param_7);
      return uVar2;
    }
    param_7[1] = param_2;
    *param_7 = param_4;
    if (param_1 < 0) {
      if (param_1 == -2) {
        param_7[3] = 1;
      }
    }
    else {
      param_7[3] = (uint)(param_6 - param_4 == param_1) * 5 + 1;
    }
  }
  return 0;
}

/* 00103da0  __si_type_info::do_find_public_subobj  (95 bytes)
 * undefined4 do_find_public_subobj(undefined4 param_1, type_info * param_2, int param_3, int param_4)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __si_type_info::do_find_public_subobj(int, type_info const &, void *, void *) const */

undefined4 __thiscall
__si_type_info::do_find_public_subobj
          (__si_type_info *this,undefined4 param_1,type_info *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_4 == param_3) &&
     (cVar1 = type_info::operator==(param_2,(type_info *)this), cVar1 != '\0')) {
    return 6;
  }
  uVar2 = (**(code **)(*(int *)(*(int *)(this + 8) + 4) + 0x14))
                    (*(undefined4 *)(this + 8),param_1,param_2,param_3,param_4);
  return uVar2;
}

/* 00104840  __si_type_info::~__si_type_info  (80 bytes)
 * undefined ~__si_type_info(uint param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __si_type_info::~__si_type_info(void) */

void __thiscall __si_type_info::~__si_type_info(__si_type_info *this,uint param_1)

{
  *(undefined1 **)(this + 4) = __si_type_info_virtual_table;
  *(undefined1 **)(this + 4) = __user_type_info_virtual_table;
  type_info::~type_info((type_info *)this,0);
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

/* 001048e0  __si_type_info::__si_type_info  (61 bytes)
 * undefined __si_type_info(undefined4 param_1, undefined4 param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __si_type_info::__si_type_info(char const *, __user_type_info const &) */

void __thiscall
__si_type_info::__si_type_info(__si_type_info *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined1 **)(this + 4) = type_info_virtual_table;
  *(undefined4 *)(this + 8) = param_2;
  *(undefined4 *)this = param_1;
  *(undefined1 **)(this + 4) = __user_type_info_virtual_table;
  *(undefined1 **)(this + 4) = __si_type_info_virtual_table;
  return;
}

