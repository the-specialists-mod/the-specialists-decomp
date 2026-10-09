/* ts_i386.so - __class_type_info (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00103e10  __class_type_info::do_upcast  (455 bytes)
 * bool do_upcast(uint param_1, type_info * param_2, int param_3, int * param_4)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __class_type_info::do_upcast(__user_type_info::sub_kind, type_info const &, void *,
   __user_type_info::upcast_result &) const */

bool __thiscall
__class_type_info::do_upcast
          (__class_type_info *this,uint param_1,type_info *param_2,int param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  type_info *ptVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int local_34;
  int local_2c;
  uint local_28;
  type_info *local_24;
  
  cVar5 = type_info::operator==((type_info *)this,param_2);
  if (cVar5 != '\0') {
    param_4[2] = 8;
    param_4[1] = param_1;
    *param_4 = param_3;
    return (param_1 & 6) == 4;
  }
  iVar2 = *(int *)(this + 0xc);
  while( true ) {
    while( true ) {
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 == -1) {
          return false;
        }
        local_2c = 0;
        local_28 = 0;
        iVar3 = *(int *)(this + 8);
        local_24 = (type_info *)0x0;
        local_34 = 0;
        iVar6 = (*(int *)(iVar3 + 4 + iVar2 * 8) << 3) >> 3;
        if (param_3 != 0) {
          if ((*(byte *)(iVar3 + 7 + iVar2 * 8) >> 5 & 1) == 0) {
            local_34 = param_3 + iVar6;
          }
          else {
            local_34 = *(int *)(iVar6 + param_3);
          }
        }
        bVar1 = *(byte *)(iVar3 + 7 + iVar2 * 8);
        uVar7 = param_1;
        if ((bVar1 & 0x20) != 0) {
          uVar7 = param_1 | 1;
        }
        if (bVar1 >> 6 != 1) {
          uVar7 = uVar7 & 0xfffffffd;
        }
        cVar5 = (**(code **)(*(int *)(*(int *)(iVar3 + iVar2 * 8) + 4) + 0xc))
                          (*(undefined4 *)(iVar3 + iVar2 * 8),uVar7,param_2,local_34,&local_2c);
        if ((cVar5 != '\0') && ((local_28 & 5) != 5)) {
          return true;
        }
      } while (local_24 == (type_info *)0x0);
      if ((local_24 == (type_info *)0x8) &&
         ((*(byte *)(*(int *)(this + 8) + 7 + iVar2 * 8) & 0x20) != 0)) {
        local_24 = *(type_info **)(*(int *)(this + 8) + iVar2 * 8);
      }
      ptVar4 = (type_info *)param_4[2];
      if (ptVar4 != (type_info *)0x0) break;
      *param_4 = local_2c;
      param_4[1] = local_28;
      param_4[2] = (int)local_24;
    }
    if (*param_4 != local_2c) break;
    if (*param_4 == 0) {
      if (((local_24 == (type_info *)0x8) || (ptVar4 == (type_info *)0x8)) ||
         (cVar5 = type_info::operator==(local_24,ptVar4), cVar5 == '\0')) goto LAB_00103fc1;
      param_4[1] = param_4[1] | local_28;
    }
    else {
      param_4[1] = param_4[1] | local_28;
    }
  }
  *param_4 = 0;
LAB_00103fc1:
  param_4[1] = 2;
  return true;
}

/* 00103ff0  __class_type_info::do_dyncast  (876 bytes)
 * char do_dyncast(int param_1, uint param_2, type_info * param_3, int param_4, type_info * param_5, int param_6, int * param_7)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __class_type_info::do_dyncast(int, __user_type_info::sub_kind, type_info const &, void *,
   type_info const &, void *, __user_type_info::dyncast_result &) const */

char __thiscall
__class_type_info::do_dyncast
          (__class_type_info *this,int param_1,uint param_2,type_info *param_3,int param_4,
          type_info *param_5,int param_6,int *param_7)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_34;
  char local_2d;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if ((param_4 == param_6) &&
     (cVar2 = type_info::operator==((type_info *)this,param_5), cVar2 != '\0')) {
    param_7[2] = param_2;
    local_2d = '\0';
  }
  else {
    cVar2 = type_info::operator==((type_info *)this,param_3);
    if (cVar2 == '\0') {
      local_2d = '\0';
      local_34 = *(int *)(this + 0xc) + -1;
      if (local_34 != -1) {
        while( true ) {
          local_2c = 0;
          local_28 = 0;
          iVar4 = *(int *)(this + 8);
          local_24 = 0;
          local_20 = 0;
          iVar7 = 0;
          iVar3 = (*(int *)(iVar4 + 4 + local_34 * 8) << 3) >> 3;
          if (param_4 != 0) {
            if ((*(byte *)(iVar4 + 7 + local_34 * 8) >> 5 & 1) == 0) {
              iVar7 = param_4 + iVar3;
            }
            else {
              iVar7 = *(int *)(iVar3 + param_4);
            }
          }
          bVar1 = *(byte *)(iVar4 + 7 + local_34 * 8);
          uVar5 = param_2;
          if ((bVar1 & 0x20) != 0) {
            uVar5 = param_2 | 1;
          }
          if (bVar1 >> 6 != 1) {
            uVar5 = uVar5 & 0xfffffffd;
          }
          cVar2 = (**(code **)(*(int *)(*(int *)(iVar4 + local_34 * 8) + 4) + 0x10))
                            (*(undefined4 *)(iVar4 + local_34 * 8),param_1,uVar5,param_3,iVar7,
                             param_5,param_6,&local_2c);
          uVar5 = local_20;
          param_7[2] = param_7[2] | local_24;
          if ((local_20 == 6) || (local_20 == 2)) break;
          if (local_2d == '\0') {
            iVar4 = *param_7;
            if (iVar4 != 0) goto LAB_001041db;
            *param_7 = local_2c;
            param_7[1] = local_28;
            local_2d = cVar2;
          }
          else {
            iVar4 = *param_7;
LAB_001041db:
            if ((iVar4 == 0) || (iVar4 != local_2c)) {
              if ((((iVar4 != 0) || (local_2d != '\0')) && (local_2c != 0)) ||
                 ((cVar2 != '\0' && (iVar4 != 0)))) {
                uVar6 = param_7[3];
                if ((param_7[2] & 5U) == 4) {
                  if (uVar6 == 0) {
                    uVar6 = 1;
                  }
                  if (local_20 == 0) {
                    uVar5 = 1;
                  }
                }
                else {
                  if (((int)uVar6 < 1) && (uVar6 = 1, (local_20 & 5) != 4)) {
                    if (param_1 < 0) {
                      uVar6 = 1;
                      if (param_1 != -2) {
                        uVar6 = (**(code **)(*(int *)(param_3 + 4) + 0x14))
                                          (param_3,param_1,param_5,iVar4,param_6);
                      }
                    }
                    else {
                      uVar6 = (uint)(param_6 - iVar4 == param_1) * 5 + 1;
                    }
                  }
                  if (((int)uVar5 < 1) && (uVar5 = 1, (uVar6 & 5) != 4)) {
                    if (param_1 < 0) {
                      uVar5 = 1;
                      if (param_1 != -2) {
                        uVar5 = (**(code **)(*(int *)(param_3 + 4) + 0x14))
                                          (param_3,param_1,param_5,local_2c,param_6);
                      }
                    }
                    else {
                      uVar5 = (uint)(param_6 - local_2c == param_1) * 5 + 1;
                    }
                  }
                }
                if ((int)(uVar5 ^ uVar6) < 4) {
                  if (3 < (int)(uVar5 & uVar6)) {
                    *param_7 = 0;
                    param_7[3] = 2;
                    return '\x01';
                  }
                  *param_7 = 0;
                  param_7[3] = 1;
                  local_2d = '\x01';
                }
                else {
                  if (3 < (int)uVar5) {
                    *param_7 = local_2c;
                    param_7[1] = local_28;
                    local_2d = '\0';
                    uVar6 = uVar5;
                  }
                  param_7[3] = uVar6;
                  if (uVar6 == 6) goto LAB_00104327;
                }
              }
            }
            else {
              param_7[1] = param_7[1] | local_28;
            }
          }
          if (param_7[2] == 4) {
            return local_2d;
          }
          local_34 = local_34 + -1;
          if (local_34 == -1) {
            return local_2d;
          }
        }
        *param_7 = local_2c;
        param_7[1] = local_28;
        param_7[3] = local_20;
        local_2d = cVar2;
      }
    }
    else {
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
LAB_00104327:
      local_2d = '\0';
    }
  }
  return local_2d;
}

/* 00104380  __class_type_info::do_find_public_subobj  (229 bytes)
 * uint do_find_public_subobj(int param_1, type_info * param_2, int param_3, int param_4)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __class_type_info::do_find_public_subobj(int, type_info const &, void *, void *) const */

uint __thiscall
__class_type_info::do_find_public_subobj
          (__class_type_info *this,int param_1,type_info *param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  
  if ((param_3 == param_4) &&
     (cVar2 = type_info::operator==(param_2,(type_info *)this), cVar2 != '\0')) {
    uVar3 = 6;
  }
  else {
    iVar7 = *(int *)(this + 0xc);
    do {
      do {
        iVar7 = iVar7 + -1;
        if (iVar7 == -1) {
          return 1;
        }
        iVar1 = *(int *)(this + 8);
        bVar6 = *(byte *)(iVar1 + 7 + iVar7 * 8);
      } while ((bVar6 >> 6 != 1) || ((bVar6 = bVar6 >> 5 & 1, bVar6 != 0 && (param_1 == -3))));
      iVar5 = 0;
      iVar4 = (*(int *)(iVar1 + 4 + iVar7 * 8) << 3) >> 3;
      if (param_3 != 0) {
        if (bVar6 == 0) {
          iVar5 = param_3 + iVar4;
        }
        else {
          iVar5 = *(int *)(iVar4 + param_3);
        }
      }
      uVar3 = (**(code **)(*(int *)(*(int *)(iVar1 + iVar7 * 8) + 4) + 0x14))
                        (*(undefined4 *)(*(int *)(this + 8) + iVar7 * 8),param_1,param_2,iVar5,
                         param_4);
    } while ((int)uVar3 < 4);
    if ((*(byte *)(*(int *)(this + 8) + 7 + iVar7 * 8) & 0x20) != 0) {
      uVar3 = uVar3 | 1;
    }
  }
  return uVar3;
}

/* 00104920  __class_type_info::~__class_type_info  (80 bytes)
 * undefined ~__class_type_info(uint param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __class_type_info::~__class_type_info(void) */

void __thiscall __class_type_info::~__class_type_info(__class_type_info *this,uint param_1)

{
  *(undefined1 **)(this + 4) = __class_type_info_virtual_table;
  *(undefined1 **)(this + 4) = __user_type_info_virtual_table;
  type_info::~type_info((type_info *)this,0);
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

/* 001049c0  __class_type_info::__class_type_info  (75 bytes)
 * undefined __class_type_info(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __class_type_info::__class_type_info(char const *, __class_type_info::base_info const *, unsigned
   int) */

void __thiscall
__class_type_info::__class_type_info
          (__class_type_info *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 **)(this + 4) = type_info_virtual_table;
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 8) = param_2;
  *(undefined1 **)(this + 4) = __user_type_info_virtual_table;
  *(undefined4 *)(this + 0xc) = param_3;
  *(undefined1 **)(this + 4) = __class_type_info_virtual_table;
  return;
}

