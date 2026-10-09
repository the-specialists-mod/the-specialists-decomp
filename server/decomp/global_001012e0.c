/* ts_i386.so - global_001012e0 (131 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 001012e0  __i686.get_pc_thunk.bx  (4 bytes)
 * undefined __i686.get_pc_thunk.bx(void)
 * called by: __pure_virtual
 */
/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}

/* 001012e4  __pure_virtual  (44 bytes)
 * undefined __pure_virtual(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __pure_virtual(void)

{
  __write(2,"pure virtual method called\n",0x1b);
  __terminate();
  return;
}

/* 00101310  __i686.get_pc_thunk.bx  (4 bytes)
 * undefined __i686.get_pc_thunk.bx(void)
 * called by: __default_terminate, __eh_alloc, __eh_free, __eh_rtime_match, __get_dynamic_handler_chain, __get_eh_context, __get_eh_info, __rethrow, __sjpopnthrow, __sjthrow, __terminate, __throw, ... (23 total)
 */
/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}

/* 00101314  __default_terminate  (23 bytes)
 * undefined __default_terminate(void)
 * called by: __terminate, terminate
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __default_terminate(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}

/* 00101330  __terminate  (32 bytes)
 * uint __terminate(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint __terminate(void)

{
  int iVar1;
  char *unaff_EBX;
  char *unaff_EBP;
  uint unaff_retaddr;
  
  (*(code *)__terminate_func)();
  iVar1 = strcmp(unaff_EBX,unaff_EBP);
  return unaff_retaddr & (iVar1 != 0) - 1;
}

/* 00101350  __throw_type_match  (57 bytes)
 * uint __throw_type_match(char * param_1, char * param_2, uint param_3)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint __throw_type_match(char *param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,param_2);
  return param_3 & (iVar1 != 0) - 1;
}

/* 00101390  __empty  (5 bytes)
 * undefined __empty(void)
 */
void __empty(void)

{
  return;
}

/* 001013a0  new_eh_context  (85 bytes)
 * void * new_eh_context(void)
 * called by: eh_context_specific
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void * new_eh_context(void)

{
  void *__s;
  
  __s = malloc(0xf0);
  if (__s == (void *)0x0) {
    __terminate();
  }
  memset(__s,0,0xf0);
  *(int *)((int)__s + 4) = (int)__s + 0xe0;
  return __s;
}

/* 00101400  eh_context_free  (66 bytes)
 * undefined eh_context_free(void * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void eh_context_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    pthread_setspecific(eh_context_key,(void *)0x0);
    free(param_1);
  }
  return;
}

/* 00101450  __get_eh_context  (28 bytes)
 * undefined __get_eh_context(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __get_eh_context(void)

{
  (*(code *)get_eh_context)();
  return;
}

/* 00101470  __get_eh_info  (31 bytes)
 * undefined8 __get_eh_info(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined8 __get_eh_info(void)

{
  int iVar1;
  undefined4 uStack_c;
  
  iVar1 = (*(code *)get_eh_context)();
  return CONCAT44(uStack_c,iVar1 + 8);
}

/* 00101490  init_reg_size_table  (141 bytes)
 * undefined init_reg_size_table(void)
 * called by: eh_context_initialize
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void init_reg_size_table(void)

{
  dwarf_reg_size_table = 4;
  DAT_001a5032 = 4;
  DAT_001a5031 = 4;
  DAT_001a5033 = 4;
  DAT_001a5036 = 4;
  DAT_001a5037 = 4;
  DAT_001a5035 = 4;
  DAT_001a5034 = 4;
  DAT_001a503b = 0xc;
  DAT_001a503c = 0xc;
  DAT_001a503d = 0xc;
  DAT_001a503e = 0xc;
  DAT_001a503f = 0xc;
  DAT_001a5040 = 0xc;
  DAT_001a5041 = 0xc;
  DAT_001a5042 = 0xc;
  dwarf_reg_size_table_initialized = 1;
  return;
}

/* 00101520  eh_threads_initialize  (71 bytes)
 * undefined eh_threads_initialize(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void eh_threads_initialize(void)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = pthread_key_create(&eh_context_key,eh_context_free);
  if (iVar1 == 0) {
    pcVar2 = eh_context_specific;
  }
  else {
    pcVar2 = eh_context_static;
  }
  get_eh_context = pcVar2;
  return;
}

/* 00101570  eh_context_initialize  (164 bytes)
 * undefined eh_context_initialize(void)
 * called by: __get_dynamic_handler_chain, __get_eh_context, __get_eh_info, __rethrow, __sjpopnthrow, __sjthrow, __throw
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void eh_context_initialize(void)

{
  int iVar1;
  
  if (__gthread_active_ptr == (undefined *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = pthread_once(&once_0,eh_threads_initialize);
  }
  if ((iVar1 != 0) || ((code *)get_eh_context == eh_context_initialize)) {
    get_eh_context = eh_context_static;
  }
  if (__gthread_active_ptr == (undefined *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = pthread_once(&once_regsizes_1,init_reg_size_table);
  }
  if ((iVar1 != 0) || (dwarf_reg_size_table_initialized == 0)) {
    init_reg_size_table();
  }
  (*(code *)get_eh_context)();
  return;
}

/* 00101620  eh_context_static  (89 bytes)
 * undefined1 * eh_context_static(void)
 * called by: eh_context_initialize
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined1 * eh_context_static(void)

{
  if (initialized_3 == 0) {
    initialized_3 = 1;
    memset(eh_2,0,0xe0);
    eh_2._4_4_ = &top_elt_4;
  }
  return eh_2;
}

/* 00101680  eh_context_specific  (89 bytes)
 * void * eh_context_specific(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void * eh_context_specific(void)

{
  void *__pointer;
  int iVar1;
  
  __pointer = pthread_getspecific(eh_context_key);
  if (__pointer == (void *)0x0) {
    __pointer = new_eh_context();
    iVar1 = pthread_setspecific(eh_context_key,__pointer);
    if (iVar1 != 0) {
      __terminate();
    }
  }
  return __pointer;
}

/* 001016e0  __eh_alloc  (176 bytes)
 * void * __eh_alloc(size_t param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void * __eh_alloc(size_t param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint extraout_ECX;
  int iVar5;
  int extraout_ECX_00;
  uint extraout_EDX;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar2 = malloc(param_1);
  if (pvVar2 == (void *)0x0) {
    iVar3 = __get_eh_context();
    uVar4 = param_1 + 0xf >> 4;
    uVar1 = *(uint *)(iVar3 + 0xd0);
    if (0xc < uVar4) {
      __terminate();
      uVar4 = extraout_ECX;
    }
    iVar5 = uVar4 + (uVar4 == 1);
    uVar4 = (1 << ((byte)iVar5 & 0x1f)) - 1;
    for (iVar5 = 0xc - iVar5; iVar5 != 0; iVar5 = iVar5 + -1) {
      if ((uVar4 & (uVar1 * 2 | uVar1) >> ((byte)iVar5 & 0x1f)) == 0) goto LAB_00101770;
    }
    __terminate();
    iVar5 = extraout_ECX_00;
    uVar4 = extraout_EDX;
LAB_00101770:
    *(uint *)(iVar3 + 0xd0) = uVar1 | (uVar4 >> 1) << ((byte)iVar5 & 0x1f);
    pvVar2 = (void *)(iVar5 * 0x10 + 0x10 + iVar3);
  }
  return pvVar2;
}

/* 00101790  __eh_free  (116 bytes)
 * undefined __eh_free(void * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __eh_free(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = __get_eh_context();
  uVar2 = (int)param_1 + (-0x10 - iVar1);
  if (uVar2 < 0xc0) {
    uVar3 = *(uint *)(iVar1 + 0xd0);
    if ((int)uVar2 < 0) {
      uVar2 = (int)param_1 + (-1 - iVar1);
    }
    uVar2 = 1 << ((byte)((int)uVar2 >> 4) & 0x1f);
    do {
      uVar3 = uVar3 ^ uVar2;
      uVar2 = uVar2 * 2;
    } while ((uVar2 & uVar3) != 0);
    *(uint *)(iVar1 + 0xd0) = uVar3;
  }
  else {
    free(param_1);
  }
  return;
}

/* 00101810  __get_dynamic_handler_chain  (31 bytes)
 * undefined8 __get_dynamic_handler_chain(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined8 __get_dynamic_handler_chain(void)

{
  int iVar1;
  undefined4 uStack_c;
  
  iVar1 = (*(code *)get_eh_context)();
  return CONCAT44(uStack_c,iVar1 + 4);
}

/* 00101830  __sjthrow  (289 bytes)
 * undefined __sjthrow(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x00101930) */

void __sjthrow(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int extraout_ECX;
  int iVar4;
  int *extraout_EDX;
  int *piVar5;
  int *local_66c;
  int *local_668;
  int *local_664;
  int local_660;
  int local_65c;
  undefined4 local_658;
  undefined1 *local_654;
  undefined *local_650;
  undefined1 *local_64c;
  undefined1 local_1c [12];
  
  local_660 = (*(code *)get_eh_context)();
  local_664 = (int *)(local_660 + 4);
  iVar4 = *(int *)(local_660 + 4);
  local_668 = (int *)(iVar4 + 4);
  if (*(int *)(iVar4 + 4) != 0) {
    local_650 = &DAT_001018b2;
    local_66c = &local_65c;
    local_654 = local_1c;
    local_658 = 0;
    *local_664 = (int)local_66c;
    iVar1 = *local_668;
    local_65c = iVar4;
    piVar5 = local_668;
    local_64c = (undefined1 *)&local_66c;
    while (local_668 = piVar5, iVar1 != 0) {
      piVar2 = (int *)*piVar5;
      pcVar3 = (code *)piVar2[1];
      iVar4 = piVar2[2];
      *piVar5 = *piVar2;
      (*pcVar3)(iVar4,2);
      iVar1 = *piVar5;
      piVar5 = local_668;
    }
    *local_664 = *local_66c;
  }
  if (*(int *)(local_660 + 8) != 0) {
    piVar5 = (int *)*local_664;
    iVar4 = *piVar5;
    if (iVar4 != 0) goto LAB_00101955;
  }
  __terminate();
  iVar4 = extraout_ECX;
  piVar5 = extraout_EDX;
LAB_00101955:
  *local_664 = iVar4;
                    /* WARNING: Could not recover jumptable at 0x00101966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)piVar5[3])();
  return;
}

/* 00101970  __sjpopnthrow  (248 bytes)
 * bool __sjpopnthrow(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x00101a60) */

bool __sjpopnthrow(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 auStack_66c [4];
  int *local_668;
  int *local_664;
  int *local_660;
  int local_65c;
  undefined4 local_658;
  undefined1 *local_654;
  undefined *local_650;
  undefined1 *local_64c;
  undefined1 local_1c [12];
  
  iVar5 = (*(code *)get_eh_context)();
  local_660 = (int *)(iVar5 + 4);
  iVar5 = *(int *)(iVar5 + 4);
  local_664 = (int *)(iVar5 + 4);
  if (*(int *)(iVar5 + 4) != 0) {
    local_650 = &DAT_001019e6;
    local_668 = &local_65c;
    local_654 = local_1c;
    local_658 = 0;
    *local_660 = (int)local_668;
    iVar1 = *local_664;
    local_65c = iVar5;
    piVar4 = local_664;
    local_64c = auStack_66c;
    while (local_664 = piVar4, iVar1 != 0) {
      piVar2 = (int *)*piVar4;
      pcVar3 = (code *)piVar2[1];
      iVar5 = piVar2[2];
      *piVar4 = *piVar2;
      (*pcVar3)(iVar5,2);
      iVar1 = *piVar4;
      piVar4 = local_664;
    }
    *local_660 = *local_668;
  }
  *local_660 = *(int *)*local_660;
  __sjthrow();
  uVar7 = __get_eh_info();
  pcVar3 = *(code **)*(undefined4 *)uVar7;
  if (pcVar3 == (code *)0x0) {
    fprintf(stderr,"Internal Compiler Bug: No runtime type matcher.");
    bVar6 = false;
  }
  else {
    iVar5 = (*pcVar3)((undefined4 *)*(undefined4 *)uVar7,local_668,0);
    bVar6 = iVar5 != 0;
  }
  return bVar6;
}

/* 00101a80  __eh_rtime_match  (90 bytes)
 * bool __eh_rtime_match(undefined4 param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

bool __eh_rtime_match(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = __get_eh_info();
  pcVar1 = *(code **)*(undefined4 *)uVar4;
  if (pcVar1 == (code *)0x0) {
    fprintf(stderr,"Internal Compiler Bug: No runtime type matcher.");
    bVar3 = false;
  }
  else {
    iVar2 = (*pcVar1)((undefined4 *)*(undefined4 *)uVar4,param_1,0);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}

/* 00101ae0  __get_eh_table_version  (12 bytes)
 * int __get_eh_table_version(int param_1)
 */
int __get_eh_table_version(int param_1)

{
  return (int)*(short *)(param_1 + 6);
}

/* 00101af0  __get_eh_table_language  (12 bytes)
 * int __get_eh_table_language(int param_1)
 */
int __get_eh_table_language(int param_1)

{
  return (int)*(short *)(param_1 + 4);
}

/* 00101b00  old_find_exception_handler  (156 bytes)
 * int old_find_exception_handler(uint param_1, int * param_2)
 * called by: throw_helper
 */
int old_find_exception_handler(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  if (param_2 != (int *)0x0) {
    local_14 = -1;
    local_10 = 0;
    if (*param_2 != -1) {
      iVar2 = 0;
      do {
        if ((param_1 < *(uint *)((int)param_2 + iVar2)) ||
           (uVar1 = *(uint *)((int)param_2 + iVar2 + 4), uVar1 <= param_1)) {
          if ((-1 < local_14) && (param_1 < *(uint *)((int)param_2 + iVar2))) break;
        }
        else if ((local_14 == -1) ||
                ((uVar1 <= (uint)param_2[local_14 * 3 + 1] &&
                 ((uint)param_2[local_14 * 3] <= *(uint *)((int)param_2 + iVar2))))) {
          local_14 = local_10;
        }
        local_10 = local_10 + 1;
        iVar2 = iVar2 + 0xc;
      } while (*(int *)((int)param_2 + iVar2) != -1);
    }
    if (local_14 != -1) {
      return param_2[local_14 * 3 + 2];
    }
  }
  return 0;
}

/* 00101ba0  find_exception_handler  (230 bytes)
 * int find_exception_handler(uint param_1, int param_2, undefined4 * param_3, int param_4, undefined4 * param_5)
 * called by: throw_helper
 */
int find_exception_handler
              (uint param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  
  local_10 = 0;
  *param_5 = 1;
  if (param_2 != 0) {
    iVar2 = 0;
    iVar3 = param_2 + 8;
    if (param_4 == 0) {
      param_1 = param_1 - 1;
    }
    else {
      iVar2 = (int)(param_1 - iVar3) >> 4;
      param_1 = *(int *)(param_1 + 4) - 1;
      if (*(int *)(iVar3 + iVar2 * 0x10) != -1) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar2 = iVar2 * 0x10;
    iVar1 = *(int *)(iVar3 + iVar2);
    while (iVar1 != -1) {
      if ((*(uint *)(iVar3 + iVar2) <= param_1) && (param_1 < *(uint *)(param_2 + 0xc + iVar2))) {
        if (*(int *)(param_2 + 0x14 + iVar2) == 0) {
          if (local_10 == 0) {
            local_10 = *(int *)(param_2 + 0x10 + iVar2);
          }
        }
        else if (((code *)*param_3 != (code *)0x0) &&
                (iVar1 = (*(code *)*param_3)(param_3,*(undefined4 *)(param_2 + 0x14 + iVar2),param_2
                                            ), iVar1 != 0)) {
          if (local_10 == 0) {
            local_10 = *(int *)(param_2 + 0x10 + iVar2);
          }
          *param_5 = 0;
          return local_10;
        }
      }
      iVar2 = iVar2 + 0x10;
      iVar1 = *(int *)(iVar3 + iVar2);
    }
  }
  return local_10;
}

/* 00101c90  get_reg_addr  (83 bytes)
 * undefined8 get_reg_addr(int param_1, int * param_2)
 * called by: copy_reg, throw_helper
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined8 get_reg_addr(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uStack_c;
  
  cVar1 = *(char *)((int)param_2 + param_1 + 0x5c);
  while (cVar1 == '\x02') {
    param_1 = param_2[param_1 + 4];
    cVar1 = *(char *)((int)param_2 + param_1 + 0x5c);
  }
  if (*(char *)(param_1 + 0x5c + (int)param_2) == '\x01') {
    return CONCAT44(uStack_c,param_2[param_1 + 4] + *param_2);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

/* 00101cf0  copy_reg  (144 bytes)
 * undefined copy_reg(int param_1, int * param_2, int * param_3)
 * called by: throw_helper
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void copy_reg(int param_1,int *param_2,int *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar7 = get_reg_addr(param_1,param_2);
  puVar5 = (undefined4 *)uVar7;
  uVar8 = get_reg_addr(param_1,param_3);
  puVar6 = (undefined4 *)uVar8;
  uVar4 = (uint)(char)(&dwarf_reg_size_table)[param_1];
  if (3 < uVar4) {
    if ((uVar8 & 4) != 0) {
      uVar2 = *puVar5;
      uVar4 = uVar4 - 4;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  if ((uVar4 & 2) != 0) {
    uVar1 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 2);
    *(undefined2 *)puVar6 = uVar1;
    puVar6 = (undefined4 *)((int)puVar6 + 2);
  }
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
  }
  return;
}

/* 00101d80  __unwinding_cleanup  (5 bytes)
 * undefined __unwinding_cleanup(void)
 */
void __unwinding_cleanup(void)

{
  return;
}

/* 00101d90  throw_helper  (1114 bytes)
 * int throw_helper(int * param_1, uint param_2, int * param_3, int * param_4)
 * called by: __rethrow, __throw
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int throw_helper(int *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  uint local_1f8;
  int local_1f4;
  int local_1f0;
  int *local_1e8;
  int *local_1e4;
  int local_1e0 [17];
  int local_19c [32];
  int local_11c [32];
  int local_9c [35];
  
  uVar5 = param_2;
  local_1e8 = local_11c;
  local_1f4 = 0;
  local_1e0[0] = 0;
  local_1f8 = 0;
  bVar3 = false;
  bVar2 = false;
  puVar1 = (undefined4 *)param_1[2];
  bVar11 = param_1[3] != 0;
  piVar8 = param_3;
  piVar4 = local_9c;
  for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar4 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar4 = piVar4 + 1;
  }
  local_1f0 = 0;
  local_1e4 = local_9c;
  do {
    piVar8 = local_1e4;
    *(undefined1 *)(local_1e8 + 0x1d) = 0;
    piVar4 = __frame_state_for(param_2,local_1e8);
    if (piVar4 != (int *)0x0) {
      if (*(char *)(*(ushort *)(piVar4 + 0x16) + 0x5c + (int)local_1e4) == '\0') {
        iVar6 = *local_1e4;
      }
      else {
        uVar13 = get_reg_addr((uint)*(ushort *)(piVar4 + 0x16),local_1e4);
        iVar6 = *(int *)uVar13;
      }
      *piVar4 = iVar6;
      if ((char)piVar4[0x1d] != '\0') {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *piVar4 = *piVar4 + piVar4[2];
    }
    local_1e8 = local_1e4;
    local_1e4 = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_0010203c;
    bVar12 = false;
    if ((int *)piVar4[1] != (int *)0x0) {
      bVar12 = *(int *)piVar4[1] == -2;
    }
    if (bVar11) {
      bVar11 = false;
      local_1f0 = find_exception_handler(param_1[3],piVar4[1],puVar1,1,local_1e0);
      param_1[3] = 0;
    }
    else if (bVar12) {
      local_1f0 = find_exception_handler(param_2,piVar4[1],puVar1,0,local_1e0);
    }
    else {
      local_1f0 = old_find_exception_handler(param_2,(int *)piVar4[1]);
    }
    if (local_1f0 != 0) {
      if (local_1e0[0] == 0) {
        bVar3 = false;
LAB_0010203c:
        if (bVar2) {
          local_1e4 = local_19c;
          local_1f0 = local_1f4;
          param_2 = local_1f8;
          if (bVar3) {
            __unwinding_cleanup();
          }
        }
        if (local_1f0 == 0) {
          __terminate();
        }
        *param_1 = local_1f0;
        iVar6 = local_1e4[3];
        if (param_2 == uVar5) {
          local_1e4 = param_3;
        }
        else {
          piVar4 = param_3;
          piVar9 = local_1e4;
          for (iVar7 = 0x1e; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar9 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar9 = piVar9 + 1;
          }
          while (uVar5 != param_2) {
            *(undefined1 *)(piVar8 + 0x1d) = 0;
            piVar4 = __frame_state_for(uVar5,piVar8);
            if (piVar4 != (int *)0x0) {
              if (*(char *)(*(ushort *)(piVar4 + 0x16) + 0x5c + (int)local_1e4) == '\0') {
                iVar7 = *local_1e4;
              }
              else {
                uVar13 = get_reg_addr((uint)*(ushort *)(piVar4 + 0x16),local_1e4);
                iVar7 = *(int *)uVar13;
              }
              *piVar4 = iVar7;
              if ((char)piVar4[0x1d] != '\0') {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *piVar4 = *piVar4 + piVar4[2];
            }
            uVar5 = (uint)*(ushort *)((int)piVar4 + 0x5a);
            uVar10 = 0;
            do {
              if ((uVar10 != uVar5) && (*(char *)(uVar10 + 0x5c + (int)piVar4) != '\0')) {
                copy_reg(uVar10,piVar4,param_3);
                uVar5 = (uint)*(ushort *)((int)piVar4 + 0x5a);
              }
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < 0x11);
            uVar13 = get_reg_addr(uVar5,piVar4);
            piVar8 = local_1e4;
            local_1e4 = piVar4;
            uVar5 = *(int *)uVar13 - 1;
          }
        }
        *param_4 = (*local_1e4 - *param_3) + iVar6;
        return local_1f0;
      }
      if (!bVar2) {
        piVar8 = piVar4;
        piVar9 = local_19c;
        for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        bVar3 = true;
        local_1f4 = local_1f0;
        local_1f8 = param_2;
        bVar2 = true;
      }
    }
    uVar13 = get_reg_addr((uint)*(ushort *)((int)piVar4 + 0x5a),piVar4);
    param_2 = *(int *)uVar13 - 1;
  } while( true );
}

/* 00102200  __throw  (194 bytes)
 * undefined8 __throw(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined8 __throw(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  int unaff_retaddr;
  int local_a0;
  undefined4 local_9c [35];
  
  piVar1 = (int *)(*(code *)get_eh_context)();
  if (piVar1[2] == 0) {
    __terminate();
  }
  piVar2 = __frame_state_for(0x10224d,local_9c);
  if (piVar2 == (int *)0x0) {
    __terminate();
                    /* WARNING: Could not recover jumptable at 0x00102277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
  }
  *piVar2 = (int)&stack0x00000004;
  iVar3 = throw_helper(piVar1,unaff_retaddr - 1,piVar2,&local_a0);
  return CONCAT44(iVar3,piVar1);
}

/* 001022d0  __rethrow  (206 bytes)
 * undefined8 __rethrow(int param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined8 __rethrow(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  int unaff_retaddr;
  int local_a0;
  undefined4 local_9c [35];
  
  piVar1 = (int *)(*(code *)get_eh_context)();
  if (piVar1[2] == 0) {
    __terminate();
  }
  piVar1[3] = param_1;
  piVar2 = __frame_state_for(0x102329,local_9c);
  if (piVar2 == (int *)0x0) {
    __terminate();
                    /* WARNING: Could not recover jumptable at 0x00102353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
  }
  *piVar2 = (int)&param_1;
  iVar3 = throw_helper(piVar1,unaff_retaddr - 1,piVar2,&local_a0);
  return CONCAT44(iVar3,piVar1);
}

/* 001023a0  decode_uleb128  (72 bytes)
 * byte.conflict * decode_uleb128(byte.conflict * param_1, uint * param_2)
 * called by: FUN_001033dc, FUN_00103414, FUN_00103440, FUN_00103480, FUN_001034c0, FUN_00103514, FUN_00103604, FUN_00103624, __frame_state_for, decode_stack_op, extract_cie_info
 */
byte_conflict * decode_uleb128(byte_conflict *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 0;
  bVar1 = *param_1;
  uVar2 = bVar1 & 0x7f;
  while (param_1 = param_1 + 1, (char)bVar1 < '\0') {
    bVar3 = bVar3 + 7;
    bVar1 = *param_1;
    uVar2 = uVar2 | (bVar1 & 0x7f) << (bVar3 & 0x1f);
  }
  *param_2 = uVar2;
  return param_1;
}

/* 001023f0  decode_sleb128  (77 bytes)
 * byte.conflict * decode_sleb128(byte.conflict * param_1, uint * param_2)
 * called by: decode_stack_op, extract_cie_info
 */
byte_conflict * decode_sleb128(byte_conflict *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = 0;
  do {
    uVar3 = uVar2 + 7;
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar4 = uVar4 | (bVar1 & 0x7f) << ((byte)uVar2 & 0x1f);
    uVar2 = uVar3;
  } while ((char)bVar1 < '\0');
  if ((uVar3 < 0x20) && ((bVar1 & 0x40) != 0)) {
    uVar4 = uVar4 | -1 << ((byte)uVar3 & 0x1f);
  }
  *param_2 = uVar4;
  return param_1;
}

/* 00102440  fde_merge  (285 bytes)
 * undefined fde_merge(int * param_1, int * param_2)
 * called by: end_fde_sort
 */
void fde_merge(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = param_2[1];
  if (local_10 != 0) {
    iVar5 = param_1[1];
    do {
      local_10 = local_10 + -1;
      if (local_14 == 0) {
        iVar4 = *param_2;
LAB_001024b5:
        local_14 = *(int *)(iVar4 + local_10 * 4);
        if (iVar5 == 0) {
          iVar4 = *param_1;
        }
        else {
          iVar4 = *param_1;
          iVar1 = *(int *)(*(int *)(iVar5 * 4 + -4 + iVar4) + 8);
          iVar2 = *(int *)(local_14 + 8);
          if (iVar1 != iVar2 && -1 < iVar1 - iVar2) {
            puVar3 = (undefined4 *)(iVar4 + (local_10 + iVar5) * 4);
            local_18 = iVar5 * 4;
            do {
              *puVar3 = *(undefined4 *)(local_18 + -4 + iVar4);
              puVar3 = puVar3 + -1;
              iVar5 = iVar5 + -1;
              if (iVar5 == 0) {
                iVar4 = *param_1;
                goto LAB_0010253c;
              }
              iVar1 = *(int *)(*(int *)(iVar4 + -4 + local_18 + -4) + 8);
              local_18 = local_18 + -4;
            } while (iVar1 != iVar2 && -1 < iVar1 - iVar2);
            iVar4 = *param_1;
          }
        }
LAB_0010253c:
        *(int *)(iVar4 + (local_10 + iVar5) * 4) = local_14;
      }
      else {
        iVar4 = *param_2;
        iVar1 = *(int *)(iVar4 + local_10 * 4);
        if (*(int *)(iVar1 + 8) != *(int *)(local_14 + 8)) goto LAB_001024b5;
        iVar4 = *param_1;
        *(int *)(iVar4 + 4 + (local_10 + iVar5) * 4) = iVar1;
        *(int *)(iVar4 + (local_10 + iVar5) * 4) = iVar1;
        local_14 = iVar1;
      }
    } while (local_10 != 0);
    param_1[1] = param_1[1] + param_2[1];
  }
  return;
}

/* 00102570  __i686.get_pc_thunk.bx  (4 bytes)
 * undefined __i686.get_pc_thunk.bx(void)
 * called by: __deregister_frame, __deregister_frame_info, __frame_state_for, __register_frame, __register_frame_info, __register_frame_info_table, __register_frame_table, decode_stack_op, end_fde_sort, execute_cfa_insn, extract_cie_info, find_fde, ... (13 total)
 */
/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}

/* 00102574  end_fde_sort  (1033 bytes)
 * int end_fde_sort(int * param_1, uint param_2)
 * called by: frame_init
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Type propagation algorithm not settling */

int end_fde_sort(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_58;
  int local_54;
  uint local_4c;
  uint local_20;
  int *local_1c;
  uint local_18;
  
  puVar7 = (undefined4 *)*param_1;
  if (puVar7 == (undefined4 *)0x0) {
    local_4c = param_1[1];
  }
  else {
    local_4c = param_1[1];
    if (local_4c != param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  uVar5 = local_4c;
  if (param_1[2] == 0) {
joined_r0x0010284b:
    if (uVar5 != 0) {
      uVar5 = uVar5 - 1;
      uVar6 = uVar5;
      while (uVar6 * 2 + 1 < local_4c) {
        if (uVar6 * 2 + 2 < local_4c) {
          local_54 = puVar7[uVar6 * 2 + 1];
          iVar3 = *(int *)(puVar7[uVar6 * 2 + 2] + 8);
          if (iVar3 == *(int *)(local_54 + 8) || iVar3 - *(int *)(local_54 + 8) < 0)
          goto LAB_001028b7;
          iVar8 = puVar7[uVar6];
          if (iVar3 == *(int *)(iVar8 + 8) || iVar3 - *(int *)(iVar8 + 8) < 0) goto LAB_001028ba;
          puVar7[uVar6] = puVar7[uVar6 * 2 + 2];
          puVar7[uVar6 * 2 + 2] = iVar8;
          uVar6 = uVar6 * 2 + 2;
        }
        else {
          local_54 = puVar7[uVar6 * 2 + 1];
LAB_001028b7:
          iVar8 = puVar7[uVar6];
LAB_001028ba:
          if (*(int *)(local_54 + 8) == *(int *)(iVar8 + 8) ||
              *(int *)(local_54 + 8) - *(int *)(iVar8 + 8) < 0) break;
          puVar7[uVar6] = local_54;
          puVar7[uVar6 * 2 + 1] = iVar8;
          uVar6 = uVar6 * 2 + 1;
        }
      }
      goto joined_r0x0010284b;
    }
joined_r0x001028ec:
    if (1 < local_4c) {
      local_4c = local_4c - 1;
      uVar1 = *puVar7;
      *puVar7 = puVar7[local_4c];
      puVar7[local_4c] = uVar1;
      uVar5 = 0;
      if (1 < local_4c) {
        do {
          uVar6 = uVar5 * 2 + 2;
          if (uVar6 < local_4c) {
            local_54 = puVar7[uVar5 * 2 + 1];
            iVar3 = *(int *)(puVar7[uVar5 * 2 + 2] + 8);
            if (iVar3 == *(int *)(local_54 + 8) || iVar3 - *(int *)(local_54 + 8) < 0)
            goto LAB_00102977;
            iVar8 = puVar7[uVar5];
            if (iVar3 == *(int *)(iVar8 + 8) || iVar3 - *(int *)(iVar8 + 8) < 0) goto LAB_0010297a;
            puVar7[uVar5] = puVar7[uVar5 * 2 + 2];
            puVar7[uVar5 * 2 + 2] = iVar8;
          }
          else {
            local_54 = puVar7[uVar5 * 2 + 1];
LAB_00102977:
            iVar8 = puVar7[uVar5];
LAB_0010297a:
            if (*(int *)(local_54 + 8) == *(int *)(iVar8 + 8) ||
                *(int *)(local_54 + 8) - *(int *)(iVar8 + 8) < 0) break;
            puVar7[uVar5] = local_54;
            puVar7[uVar5 * 2 + 1] = iVar8;
            uVar6 = uVar5 * 2 + 1;
          }
          uVar5 = uVar6;
        } while (uVar6 * 2 + 1 < local_4c);
      }
      goto joined_r0x001028ec;
    }
  }
  else {
    local_18 = 0;
    piVar4 = param_1 + 2;
    piVar2 = &marker_0;
    if (local_4c != 0) {
      do {
        if ((piVar2 != &marker_0) && (*(int *)(puVar7[local_18] + 8) - *(int *)(*piVar2 + 8) < 0)) {
          iVar3 = *piVar4;
          local_1c = piVar2;
          do {
            piVar2 = *(int **)((int)local_1c + (iVar3 - (int)puVar7));
            *(undefined4 *)((int)local_1c + (iVar3 - (int)puVar7)) = 0;
            if (piVar2 == &marker_0) break;
            local_1c = piVar2;
          } while (*(int *)(puVar7[local_18] + 8) - *(int *)(*piVar2 + 8) < 0);
        }
        *(int **)(*piVar4 + local_18 * 4) = piVar2;
        puVar7 = (undefined4 *)*param_1;
        piVar2 = puVar7 + local_18;
        local_18 = local_18 + 1;
      } while (local_18 < local_4c);
    }
    local_18 = 0;
    iVar3 = 0;
    iVar8 = 0;
    if (local_4c != 0) {
      while( true ) {
        if (*(int *)(*piVar4 + local_18 * 4) == 0) {
          *(undefined4 *)(*piVar4 + iVar3 * 4) = puVar7[local_18];
          iVar3 = iVar3 + 1;
        }
        else {
          puVar7[iVar8] = puVar7[local_18];
          iVar8 = iVar8 + 1;
        }
        local_18 = local_18 + 1;
        if (local_4c <= local_18) break;
        puVar7 = (undefined4 *)*param_1;
      }
    }
    param_1[1] = iVar8;
    param_1[3] = iVar3;
    if (param_1[3] + param_1[1] != param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_20 = param_1[3];
    puVar7 = (undefined4 *)param_1[2];
    uVar5 = local_20;
joined_r0x001026d1:
    if (uVar5 != 0) {
      uVar5 = uVar5 - 1;
      uVar6 = uVar5;
      while (uVar6 * 2 + 1 < local_20) {
        if (uVar6 * 2 + 2 < local_20) {
          local_58 = puVar7[uVar6 * 2 + 1];
          iVar3 = *(int *)(puVar7[uVar6 * 2 + 2] + 8);
          if (iVar3 == *(int *)(local_58 + 8) || iVar3 - *(int *)(local_58 + 8) < 0)
          goto LAB_00102737;
          iVar8 = puVar7[uVar6];
          if (iVar3 == *(int *)(iVar8 + 8) || iVar3 - *(int *)(iVar8 + 8) < 0) goto LAB_0010273a;
          puVar7[uVar6] = puVar7[uVar6 * 2 + 2];
          puVar7[uVar6 * 2 + 2] = iVar8;
          uVar6 = uVar6 * 2 + 2;
        }
        else {
          local_58 = puVar7[uVar6 * 2 + 1];
LAB_00102737:
          iVar8 = puVar7[uVar6];
LAB_0010273a:
          if (*(int *)(local_58 + 8) == *(int *)(iVar8 + 8) ||
              *(int *)(local_58 + 8) - *(int *)(iVar8 + 8) < 0) break;
          puVar7[uVar6] = local_58;
          puVar7[uVar6 * 2 + 1] = iVar8;
          uVar6 = uVar6 * 2 + 1;
        }
      }
      goto joined_r0x001026d1;
    }
LAB_0010280b:
    if (1 < local_20) {
      local_20 = local_20 - 1;
      uVar1 = *puVar7;
      *puVar7 = puVar7[local_20];
      puVar7[local_20] = uVar1;
      uVar5 = 0;
      if (1 < local_20) {
        do {
          uVar6 = uVar5 * 2 + 2;
          if (uVar6 < local_20) {
            local_58 = puVar7[uVar5 * 2 + 1];
            iVar3 = *(int *)(puVar7[uVar5 * 2 + 2] + 8);
            if (iVar3 == *(int *)(local_58 + 8) || iVar3 - *(int *)(local_58 + 8) < 0)
            goto LAB_001027e7;
            iVar8 = puVar7[uVar5];
            if (iVar3 == *(int *)(iVar8 + 8) || iVar3 - *(int *)(iVar8 + 8) < 0) goto LAB_001027ea;
            puVar7[uVar5] = puVar7[uVar5 * 2 + 2];
            puVar7[uVar5 * 2 + 2] = iVar8;
          }
          else {
            local_58 = puVar7[uVar5 * 2 + 1];
LAB_001027e7:
            iVar8 = puVar7[uVar5];
LAB_001027ea:
            if (*(int *)(local_58 + 8) == *(int *)(iVar8 + 8) ||
                *(int *)(local_58 + 8) - *(int *)(iVar8 + 8) < 0) break;
            puVar7[uVar5] = local_58;
            puVar7[uVar5 * 2 + 1] = iVar8;
            uVar6 = uVar5 * 2 + 1;
          }
          uVar5 = uVar6;
        } while (uVar6 * 2 + 1 < local_20);
      }
      goto LAB_0010280b;
    }
    fde_merge(param_1,param_1 + 2);
    free((void *)param_1[2]);
  }
  return *param_1;
}

/* 001029c0  __register_frame_info  (129 bytes)
 * undefined __register_frame_info(undefined4 param_1, undefined4 * param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __register_frame_info(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  
  bVar1 = __gthread_active_ptr != (undefined *)0x0;
  param_2[1] = 0;
  param_2[2] = param_1;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  if (bVar1) {
    pthread_mutex_lock((pthread_mutex_t *)object_mutex);
  }
  bVar1 = __gthread_active_ptr != (undefined *)0x0;
  param_2[5] = objects;
  objects = param_2;
  if (bVar1) {
    pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
  }
  return;
}

/* 00102a50  __register_frame  (45 bytes)
 * undefined __register_frame(undefined4 param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __register_frame(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x18);
  __register_frame_info(param_1,puVar1);
  return;
}

/* 00102a80  __register_frame_info_table  (125 bytes)
 * undefined __register_frame_info_table(undefined4 param_1, undefined4 * param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __register_frame_info_table(undefined4 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  param_2[2] = param_1;
  param_2[3] = param_1;
  puVar1 = __gthread_active_ptr;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  if (puVar1 != (undefined *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)object_mutex);
  }
  param_2[5] = objects;
  objects = param_2;
  if (__gthread_active_ptr != (undefined *)0x0) {
    pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
  }
  return;
}

/* 00102b00  __register_frame_table  (45 bytes)
 * undefined __register_frame_table(undefined4 param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __register_frame_table(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x18);
  __register_frame_info_table(param_1,puVar1);
  return;
}

/* 00102b30  __deregister_frame_info  (172 bytes)
 * int __deregister_frame_info(void * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int __deregister_frame_info(void *param_1)

{
  int *piVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  
  if (__gthread_active_ptr != (undefined *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)object_mutex);
  }
  piVar1 = &objects;
  iVar3 = objects;
  while( true ) {
    if (iVar3 == 0) {
      if (__gthread_active_ptr != (undefined *)0x0) {
        pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar2 = *piVar1;
    if (*(void **)(iVar2 + 8) == param_1) break;
    iVar3 = *(int *)(iVar2 + 0x14);
    piVar1 = (int *)(iVar2 + 0x14);
  }
  *piVar1 = *(int *)(iVar2 + 0x14);
  __ptr = *(void **)(iVar2 + 0xc);
  if ((__ptr != (void *)0x0) && (__ptr != param_1)) {
    free(__ptr);
  }
  if (__gthread_active_ptr != (undefined *)0x0) {
    pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
  }
  return iVar2;
}

/* 00102be0  __deregister_frame  (42 bytes)
 * undefined __deregister_frame(void * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __deregister_frame(void *param_1)

{
  void *__ptr;
  
  __ptr = (void *)__deregister_frame_info(param_1);
  free(__ptr);
  return;
}

/* 00102c10  count_fdes  (49 bytes)
 * int count_fdes(int * param_1)
 * called by: frame_init
 */
int count_fdes(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *param_1;
  while (iVar1 != 0) {
    if ((param_1[1] != 0) && (param_1[2] != 0)) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar1 + 4;
    iVar1 = *(int *)((int)param_1 + iVar1 + 4);
    param_1 = (int *)((int)param_1 + iVar2);
  }
  return iVar3;
}

/* 00102c50  add_fdes  (128 bytes)
 * uint add_fdes(int * param_1, int * param_2, uint * param_3, uint * param_4)
 * called by: frame_init
 */
uint add_fdes(int *param_1,int *param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_10;
  
  uVar4 = *param_3;
  local_10 = *param_4;
  iVar2 = *param_1;
  while (iVar2 != 0) {
    if ((param_1[1] != 0) && (uVar3 = param_1[2], uVar3 != 0)) {
      if (*param_2 != 0) {
        iVar2 = param_2[1];
        *(int **)(*param_2 + iVar2 * 4) = param_1;
        param_2[1] = iVar2 + 1;
        uVar3 = param_1[2];
      }
      if (uVar3 < uVar4) {
        uVar4 = uVar3;
      }
      if (local_10 < uVar3 + param_1[3]) {
        local_10 = uVar3 + param_1[3];
      }
    }
    piVar1 = (int *)((int)param_1 + *param_1 + 4);
    param_1 = (int *)((int)param_1 + *param_1 + 4);
    iVar2 = *piVar1;
  }
  *param_3 = uVar4;
  *param_4 = local_10;
  return local_10;
}

/* 00102cd0  search_fdes  (64 bytes)
 * int * search_fdes(int * param_1, int param_2)
 * called by: find_fde
 */
int * search_fdes(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    if (((param_1[1] != 0) && (param_1[2] != 0)) &&
       ((uint)(param_2 - param_1[2]) < (uint)param_1[3])) break;
    iVar1 = *(int *)((int)param_1 + *param_1 + 4);
    param_1 = (int *)((int)param_1 + *param_1 + 4);
  }
  return param_1;
}

/* 00102d20  frame_init  (376 bytes)
 * undefined frame_init(uint * param_1)
 * called by: find_fde
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void frame_init(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint local_34;
  uint local_30;
  void *local_2c;
  undefined4 local_28;
  void *local_24;
  undefined4 local_20;
  
  if (*param_1 == 0) {
    piVar4 = (int *)param_1[3];
    if (piVar4 == (int *)0x0) {
      uVar3 = count_fdes((int *)param_1[2]);
    }
    else {
      uVar3 = 0;
      if (*piVar4 != 0) {
        uVar3 = 0;
        do {
          piVar1 = (int *)*piVar4;
          piVar4 = piVar4 + 1;
          iVar2 = count_fdes(piVar1);
          uVar3 = uVar3 + iVar2;
        } while (*piVar4 != 0);
      }
    }
  }
  else {
    uVar3 = param_1[4];
  }
  param_1[4] = uVar3;
  if (uVar3 == 0) {
    local_2c = (void *)0x0;
  }
  else {
    local_2c = malloc(uVar3 * 4);
  }
  if (local_2c == (void *)0x0) {
    local_24 = (void *)0x0;
  }
  else {
    local_24 = malloc(uVar3 * 4);
  }
  local_28 = 0;
  local_20 = 0;
  if ((local_2c != (void *)0x0) || (*param_1 == 0)) {
    local_34 = 0xffffffff;
    local_30 = 0;
    piVar4 = (int *)param_1[3];
    if (piVar4 == (int *)0x0) {
      add_fdes((int *)param_1[2],(int *)&local_2c,&local_34,&local_30);
    }
    else if (*piVar4 != 0) {
      do {
        piVar1 = (int *)*piVar4;
        piVar4 = piVar4 + 1;
        add_fdes(piVar1,(int *)&local_2c,&local_34,&local_30);
      } while (*piVar4 != 0);
    }
    uVar3 = end_fde_sort((int *)&local_2c,uVar3);
    if (uVar3 != 0) {
      param_1[3] = uVar3;
    }
    *param_1 = local_34;
    param_1[1] = local_30;
  }
  return;
}

/* 00102ea0  find_fde  (385 bytes)
 * int * find_fde(uint param_1)
 * called by: __frame_state_for
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int * find_fde(uint param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint local_14;
  
  puVar5 = objects;
  if (__gthread_active_ptr != (undefined *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)object_mutex);
    puVar5 = objects;
  }
  for (; puVar5 != (uint *)0x0; puVar5 = (uint *)puVar5[5]) {
    uVar1 = *puVar5;
    if (uVar1 == 0) {
      frame_init(puVar5);
      uVar1 = *puVar5;
    }
    if ((uVar1 <= param_1) && (param_1 < puVar5[1])) break;
  }
  if (puVar5 == (uint *)0x0) {
    if (__gthread_active_ptr != (undefined *)0x0) {
      pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
    }
  }
  else {
    piVar2 = (int *)puVar5[3];
    if ((piVar2 == (int *)0x0) || (piVar2 == (int *)puVar5[2])) {
      frame_init(puVar5);
      piVar2 = (int *)puVar5[3];
    }
    if ((piVar2 == (int *)0x0) || (piVar2 == (int *)puVar5[2])) {
      if (piVar2 == (int *)0x0) {
        piVar3 = search_fdes((int *)puVar5[2],param_1);
      }
      else {
        do {
          piVar3 = search_fdes((int *)*piVar2,param_1);
          if (piVar3 != (int *)0x0) break;
          piVar2 = piVar2 + 1;
        } while (*piVar2 != 0);
      }
      if (__gthread_active_ptr == (undefined *)0x0) {
        return piVar3;
      }
      pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
      return piVar3;
    }
    if (__gthread_active_ptr != (undefined *)0x0) {
      pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
    }
    local_14 = 0;
    if (puVar5[4] != 0) {
      uVar1 = puVar5[4];
      do {
        uVar4 = local_14 + uVar1 >> 1;
        piVar2 = *(int **)(puVar5[3] + uVar4 * 4);
        if ((uint)piVar2[2] <= param_1) {
          if (param_1 < (uint)(piVar2[2] + piVar2[3])) {
            return piVar2;
          }
          local_14 = uVar4 + 1;
          uVar4 = uVar1;
        }
        uVar1 = uVar4;
      } while (local_14 < uVar4);
    }
  }
  return (int *)0x0;
}

/* 00103030  extract_cie_info  (221 bytes)
 * byte.conflict * extract_cie_info(int param_1, int * param_2)
 * called by: __frame_state_for
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

byte_conflict * extract_cie_info(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  byte_conflict *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint local_14;
  
  iVar1 = param_1 - *(int *)(param_1 + 4);
  pbVar5 = (byte *)(iVar1 + 0xd);
  *param_2 = (int)pbVar5;
  if (*(byte *)(iVar1 + 0xd) != 0) {
    uVar2 = *(byte *)(iVar1 + 0xd) - 0x65;
    if ((uVar2 == 0) && (uVar2 = *(byte *)(iVar1 + 0xe) - 0x68, uVar2 == 0)) {
      uVar2 = (uint)*(byte *)(iVar1 + 0xf);
    }
    if ((uVar2 != 0) && (*pbVar5 != 0x7a)) {
      return (byte_conflict *)0x0;
    }
  }
  sVar3 = strlen((char *)*param_2);
  pbVar6 = pbVar5 + sVar3 + 1;
  uVar2 = *pbVar5 - 0x65;
  if ((uVar2 == 0) && (uVar2 = *(byte *)(iVar1 + 0xe) - 0x68, uVar2 == 0)) {
    uVar2 = (uint)*(byte *)(iVar1 + 0xf);
  }
  if (uVar2 == 0) {
    iVar1 = *(int *)pbVar6;
    pbVar6 = pbVar6 + 4;
    param_2[1] = iVar1;
  }
  else {
    param_2[1] = 0;
  }
  pbVar4 = decode_uleb128(pbVar6,(uint *)(param_2 + 2));
  pbVar5 = decode_sleb128(pbVar4,(uint *)(param_2 + 3));
  pbVar6 = pbVar5 + 1;
  param_2[4] = (uint)*pbVar5;
  if (*(char *)*param_2 == 'z') {
    pbVar4 = decode_uleb128(pbVar6,&local_14);
    pbVar6 = pbVar4 + local_14;
  }
  return pbVar6;
}

/* 00103110  decode_stack_op  (260 bytes)
 * byte.conflict * decode_stack_op(byte.conflict * param_1, int param_2)
 * called by: FUN_00103514
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

byte_conflict * decode_stack_op(byte_conflict *param_1,int param_2)

{
  byte bVar1;
  byte_conflict *pbVar2;
  uint local_14;
  
  bVar1 = *param_1;
  pbVar2 = param_1 + 1;
  if (bVar1 < 0x70) {
    if (0x4f < bVar1) {
      *(ushort *)(param_2 + 0x58) = bVar1 - 0x50;
      return pbVar2;
    }
    if (bVar1 == 6) {
      *(undefined1 *)(param_2 + 0x74) = 1;
      return pbVar2;
    }
    if (bVar1 == 0x23) {
      pbVar2 = decode_uleb128(pbVar2,&local_14);
      *(uint *)(param_2 + 8) = local_14;
      return pbVar2;
    }
LAB_00103210:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (bVar1 == 0x90) {
    pbVar2 = decode_sleb128(pbVar2,&local_14);
    *(short *)(param_2 + 0x58) = (short)local_14;
  }
  else if (0x8f < bVar1) {
    if (bVar1 != 0x92) goto LAB_00103210;
    pbVar2 = decode_sleb128(pbVar2,&local_14);
    *(short *)(param_2 + 0x58) = (short)local_14;
    goto LAB_001031cd;
  }
  *(ushort *)(param_2 + 0x58) = bVar1 - 0x70;
LAB_001031cd:
  pbVar2 = decode_sleb128(pbVar2,&local_14);
  *(uint *)(param_2 + 0x70) = local_14;
  return pbVar2;
}

/* 00103220  execute_cfa_insn  (133 bytes)
 * ushort * execute_cfa_insn(ushort * param_1, undefined4 * param_2, int param_3, int * param_4)
 * called by: __frame_state_for
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

ushort * execute_cfa_insn(ushort *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte_conflict *pbVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uStack_1c;
  uint local_18;
  uint local_14;
  
  bVar1 = (byte)*param_1;
  uVar2 = (uint)bVar1;
  puVar5 = (ushort *)((int)param_1 + 1);
  if ((bVar1 & 0x40) != 0) {
    *param_4 = *param_4 + (uVar2 & 0x3f) * *(int *)(param_3 + 8);
    return puVar5;
  }
  if ((char)bVar1 < '\0') {
    local_18 = uVar2 & 0x3f;
LAB_001033db:
    puVar5 = (ushort *)decode_uleb128((byte_conflict *)puVar5,&local_14);
    if (local_18 == *(ushort *)(param_2 + 0x16)) {
      return puVar5;
    }
    iVar6 = *(int *)(param_3 + 0xc);
    *(undefined1 *)(local_18 + 0x5c + (int)param_2) = 1;
    param_2[local_18 + 4] = iVar6 * local_14;
    return puVar5;
  }
  if ((bVar1 & 0xc0) != 0) {
    *(undefined1 *)((uVar2 & 0x3f) + 0x5c + (int)param_2) = 0;
    return puVar5;
  }
  switch(uVar2) {
  case 0:
  case 7:
  case 8:
    break;
  case 1:
    iVar6 = *(int *)puVar5;
    goto FUN_001033b0;
  case 2:
    *param_4 = *param_4 + (uint)*(byte *)puVar5;
    puVar5 = param_1 + 1;
    break;
  case 3:
    *param_4 = *param_4 + (uint)*puVar5;
    puVar5 = (ushort *)((int)param_1 + 3);
    break;
  case 4:
    iVar6 = *param_4 + *(int *)puVar5;
FUN_001033b0:
    *param_4 = iVar6;
    puVar5 = (ushort *)((int)param_1 + 5);
    break;
  case 5:
    puVar5 = (ushort *)decode_uleb128((byte_conflict *)puVar5,&local_18);
    goto LAB_001033db;
  case 6:
    puVar5 = (ushort *)decode_uleb128((byte_conflict *)puVar5,&local_18);
    *(undefined1 *)(local_18 + 0x5c + (int)param_2) = 0;
    break;
  case 9:
    pbVar4 = decode_uleb128((byte_conflict *)puVar5,&local_18);
    puVar5 = (ushort *)decode_uleb128(pbVar4,&uStack_1c);
    *(undefined1 *)(local_18 + 0x5c + (int)param_2) = 2;
    param_2[local_18 + 4] = uStack_1c;
    break;
  case 10:
    puVar3 = malloc(0x7c);
    puVar8 = param_2;
    puVar9 = puVar3;
    for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    param_2[0x1e] = puVar3;
    break;
  case 0xb:
    puVar8 = (undefined4 *)param_2[0x1e];
    puVar9 = puVar8;
    for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
      *param_2 = *puVar9;
      puVar9 = puVar9 + 1;
      param_2 = param_2 + 1;
    }
    free(puVar8);
    break;
  case 0xc:
    pbVar4 = decode_uleb128((byte_conflict *)puVar5,&local_18);
    puVar5 = (ushort *)decode_uleb128(pbVar4,&local_14);
    *(undefined2 *)(param_2 + 0x16) = (undefined2)local_18;
    param_2[2] = local_14;
    break;
  case 0xd:
    puVar5 = (ushort *)decode_uleb128((byte_conflict *)puVar5,&local_18);
    *(short *)(param_2 + 0x16) = (short)local_18;
    break;
  case 0xe:
    puVar5 = (ushort *)decode_uleb128((byte_conflict *)puVar5,&local_14);
    param_2[2] = local_14;
    break;
  case 0xf:
    *(undefined1 *)(param_2 + 0x1d) = 0;
    *(undefined2 *)(param_2 + 0x16) = 0;
    param_2[2] = 0;
    param_2[0x1c] = 0;
    puVar5 = (ushort *)decode_uleb128((byte_conflict *)puVar5,&local_14);
    puVar7 = (ushort *)((int)puVar5 + local_14);
    for (; puVar5 < puVar7; puVar5 = (ushort *)decode_stack_op((byte_conflict *)puVar5,(int)param_2)
        ) {
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  case 0x2d:
    local_18 = 0x10;
    do {
      *(undefined1 *)((int)param_2 + local_18 + 0x5c) = 1;
      param_2[local_18 + 4] = local_18 * 4 + -0x40;
      local_18 = local_18 + 1;
    } while (local_18 < 0x20);
    break;
  case 0x2e:
    puVar5 = (ushort *)decode_uleb128((byte_conflict *)puVar5,&local_14);
    param_2[3] = local_14;
    break;
  case 0x2f:
    pbVar4 = decode_uleb128((byte_conflict *)puVar5,&local_18);
    puVar5 = (ushort *)decode_uleb128(pbVar4,&local_14);
    iVar6 = *(int *)(param_3 + 0xc);
    *(undefined1 *)(local_18 + 0x5c + (int)param_2) = 1;
    param_2[local_18 + 4] = -(iVar6 * local_14);
  }
  param_1 = puVar5;
  return param_1;
}

/* 00103680  __frame_state_for  (587 bytes)
 * undefined4 * __frame_state_for(uint param_1, undefined4 * param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x001038aa) */
/* WARNING: Removing unreachable block (ram,0x001038bb) */

undefined4 * __frame_state_for(uint param_1,undefined4 *param_2)

{
  ushort *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  byte_conflict *pbVar6;
  char cVar7;
  undefined4 *unaff_EBP;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *unaff_retaddr;
  uint local_cc;
  uint local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8 [21];
  undefined2 local_62;
  char local_48;
  char *local_3c;
  undefined4 local_38;
  undefined2 local_2c;
  
  piVar4 = find_fde(param_1);
  if ((piVar4 == (int *)0x0) ||
     (puVar5 = (ushort *)extract_cie_info((int)piVar4,(int *)&local_3c), puVar5 == (ushort *)0x0)) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    memset(&local_bc,0,0x7c);
    local_62 = local_2c;
    local_b8[0] = local_38;
    iVar8 = piVar4[1];
    iVar3 = *(int *)((int)piVar4 + (4 - iVar8));
    for (; puVar5 < (ushort *)((int)piVar4 + ((iVar3 + 8) - iVar8));
        puVar5 = execute_cfa_insn(puVar5,&local_bc,(int)&local_3c,(int *)0x0)) {
    }
    puVar5 = (ushort *)(piVar4 + 4);
    if (*local_3c == 'z') {
      pbVar6 = decode_uleb128((byte_conflict *)puVar5,&local_c0);
      puVar5 = (ushort *)(pbVar6 + local_c0);
    }
    puVar1 = (ushort *)((int)piVar4 + *piVar4 + 4);
    local_c4 = piVar4[2];
    if ((puVar5 < puVar1) && (local_c4 <= param_1)) {
      do {
        puVar5 = execute_cfa_insn(puVar5,&local_bc,(int)&local_3c,(int *)&local_c4);
        if (puVar1 <= puVar5) break;
      } while (local_c4 <= param_1);
    }
    local_cc = 0x70;
    if ((unaff_EBP < param_2) && ((int)unaff_EBP - (int)&stack0xfffffffc == 0x40)) {
      pcVar2 = unaff_retaddr + 0x200;
      iVar8 = 0;
      if ((unaff_retaddr < pcVar2) && (cVar7 = *unaff_retaddr, cVar7 != -0x3d)) {
        iVar8 = 0;
        do {
          if (((cVar7 == 't') && (unaff_retaddr[1] == '\0')) || (cVar7 == 'p')) {
            iVar8 = iVar8 + 1;
          }
          unaff_retaddr = unaff_retaddr + 1;
        } while (((unaff_retaddr < pcVar2) && (cVar7 = *unaff_retaddr, cVar7 != -0x3d)) &&
                (iVar8 < 2));
      }
      if (iVar8 == 2) {
        local_cc = 0x78;
      }
    }
    if ((local_48 != '\0') && (local_cc < 0x78)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar9 = &local_bc;
    if (3 < local_cc) {
      puVar10 = param_2;
      if (((uint)param_2 & 4) != 0) {
        puVar9 = local_b8;
        local_cc = local_cc - 4;
        *param_2 = local_bc;
        puVar10 = param_2 + 1;
      }
      for (local_cc = local_cc >> 2; local_cc != 0; local_cc = local_cc - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
    }
  }
  return param_2;
}

/* 001038d0  __i686.get_pc_thunk.bx  (4 bytes)
 * undefined __i686.get_pc_thunk.bx(void)
 * called by: __class_type_info::__class_type_info, __class_type_info::do_dyncast, __class_type_info::do_find_public_subobj, __class_type_info::do_upcast, __class_type_info::~__class_type_info, __class_type_info_type_info_function, __rtti_class, __rtti_si, __rtti_user, __si_type_info::__si_type_info, __si_type_info::do_dyncast, __si_type_info::do_find_public_subobj, ... (31 total)
 */
/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}

/* 00103960  __rtti_class  (73 bytes)
 * undefined4 __rtti_class(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4
__rtti_class(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = type_info_virtual_table;
    *param_1 = param_2;
    param_1[1] = __user_type_info_virtual_table;
    param_1[1] = __class_type_info_virtual_table;
    param_1[2] = param_3;
    param_1[3] = param_4;
  }
  return uStack_c;
}

/* 001039b0  __rtti_si  (67 bytes)
 * undefined __rtti_si(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __rtti_si(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = type_info_virtual_table;
    *param_1 = param_2;
    param_1[1] = __user_type_info_virtual_table;
    param_1[1] = __si_type_info_virtual_table;
    param_1[2] = param_3;
  }
  return;
}

/* 00103a00  __rtti_user  (52 bytes)
 * undefined __rtti_user(undefined4 * param_1, undefined4 param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __rtti_user(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = type_info_virtual_table;
    *param_1 = param_2;
    param_1[1] = __user_type_info_virtual_table;
  }
  return;
}

/* 00104470  type_info_type_info_function  (56 bytes)
 * undefined4 * type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* type_info type_info function */

undefined4 * type_info_type_info_function(void)

{
  if (type_info_type_info_node == 0) {
    __rtti_user(&type_info_type_info_node,"9type_info");
  }
  return &type_info_type_info_node;
}

/* 00104520  bad_cast_type_info_function  (68 bytes)
 * undefined4 * bad_cast_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_cast type_info function */

undefined4 * bad_cast_type_info_function(void)

{
  if (bad_cast_type_info_node == 0) {
    exception_type_info_function();
    __rtti_si(&bad_cast_type_info_node,"8bad_cast",&exception_type_info_node);
  }
  return &bad_cast_type_info_node;
}

/* 001045e0  bad_typeid_type_info_function  (68 bytes)
 * undefined4 * bad_typeid_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_typeid type_info function */

undefined4 * bad_typeid_type_info_function(void)

{
  if (bad_typeid_type_info_node == 0) {
    exception_type_info_function();
    __rtti_si(&bad_typeid_type_info_node,"10bad_typeid",&exception_type_info_node);
  }
  return &bad_typeid_type_info_node;
}

/* 001046f0  __user_type_info_type_info_function  (68 bytes)
 * undefined4 * __user_type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __user_type_info type_info function */

undefined4 * __user_type_info_type_info_function(void)

{
  if (__user_type_info_type_info_node == 0) {
    type_info_type_info_function();
    __rtti_si(&__user_type_info_type_info_node,"16__user_type_info",&type_info_type_info_node);
  }
  return &__user_type_info_type_info_node;
}

/* 00104890  __si_type_info_type_info_function  (68 bytes)
 * undefined4 * __si_type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __si_type_info type_info function */

undefined4 * __si_type_info_type_info_function(void)

{
  if (__si_type_info_type_info_node == 0) {
    __user_type_info_type_info_function();
    __rtti_si(&__si_type_info_type_info_node,"14__si_type_info",&__user_type_info_type_info_node);
  }
  return &__si_type_info_type_info_node;
}

/* 00104970  __class_type_info_type_info_function  (68 bytes)
 * undefined4 * __class_type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __class_type_info type_info function */

undefined4 * __class_type_info_type_info_function(void)

{
  if (__class_type_info_type_info_node == 0) {
    __user_type_info_type_info_function();
    __rtti_si(&__class_type_info_type_info_node,"17__class_type_info",
              &__user_type_info_type_info_node);
  }
  return &__class_type_info_type_info_node;
}

/* 00104a10  __i686.get_pc_thunk.bx  (4 bytes)
 * undefined __i686.get_pc_thunk.bx(void)
 * called by: FUN_00104b32, __builtin_new
 */
/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}

/* 00104a14  __builtin_new  (163 bytes)
 * undefined __builtin_new(size_t param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __builtin_new(size_t param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = malloc(param_1);
  pcVar4 = __new_handler;
  while (pvVar1 == (void *)0x0) {
    __new_handler = pcVar4;
    if (pcVar4 == (code *)0x0) {
      param_1 = 4;
      puVar2 = __eh_alloc(4);
      pcVar4 = bad_alloc::~bad_alloc;
      *puVar2 = bad_alloc_virtual_table;
      puVar3 = bad_alloc_type_info_function();
      __cp_push_exception(puVar2,puVar3,pcVar4);
      uVar5 = __throw();
      pcVar4 = (code *)uVar5;
    }
    (*pcVar4)();
    pvVar1 = malloc(param_1);
    pcVar4 = __new_handler;
  }
  __new_handler = pcVar4;
  return;
}

/* 00104b60  __i686.get_pc_thunk.bx  (4 bytes)
 * undefined __i686.get_pc_thunk.bx(void)
 * called by: __builtin_delete
 */
/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}

/* 00104b64  __builtin_delete  (44 bytes)
 * undefined __builtin_delete(void * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __builtin_delete(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}

/* 00104b90  __i686.get_pc_thunk.bx  (4 bytes)
 * undefined __i686.get_pc_thunk.bx(void)
 * called by: __check_eh_spec, __check_null_eh_spec, __cp_eh_info, __cp_exception_info, __cp_pop_exception, __cp_push_exception, __cplus_type_matcher, __default_unexpected, __start_cp_handler, __throw_bad_cast, __throw_bad_typeid, __uncatch_exception, ... (24 total)
 */
/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}

/* 00104b94  terminate  (28 bytes)
 * undefined * terminate(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* terminate(void) */

undefined * terminate(void)

{
  undefined *puVar1;
  
  (*(code *)__terminate_func)();
  terminate();
  puVar1 = __terminate_func;
  __terminate_func = (undefined *)&__DT_PLTGOT;
  return puVar1;
}

/* 00104bb0  __default_unexpected  (32 bytes)
 * undefined * __default_unexpected(void)
 * called by: unexpected
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __default_unexpected(void) */

undefined * __default_unexpected(void)

{
  undefined *puVar1;
  undefined *unaff_EBX;
  
  terminate();
  puVar1 = __terminate_func;
  __terminate_func = unaff_EBX;
  return puVar1;
}

/* 00104bd0  set_terminate  (31 bytes)
 * undefined * set_terminate(undefined * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* set_terminate(void (*)(void)) */

undefined * set_terminate(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = __terminate_func;
  __terminate_func = param_1;
  return puVar1;
}

/* 00104bf0  set_unexpected  (33 bytes)
 * undefined * set_unexpected(undefined * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* set_unexpected(void (*)(void)) */

undefined * set_unexpected(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = __unexpected_func;
  __unexpected_func = param_1;
  return puVar1;
}

/* 00104c20  unexpected  (32 bytes)
 * undefined8 unexpected(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* unexpected(void) */

undefined8 unexpected(void)

{
  undefined8 uVar1;
  undefined4 uStack_18;
  
  (*(code *)__unexpected_func)();
  uVar1 = __get_eh_info();
  return CONCAT44(uStack_18,*(int *)uVar1 + 8);
}

/* 00104c40  __cp_exception_info  (32 bytes)
 * undefined8 __cp_exception_info(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined8 __cp_exception_info(void)

{
  undefined8 uVar1;
  undefined4 uStack_c;
  
  uVar1 = __get_eh_info();
  return CONCAT44(uStack_c,*(int *)uVar1 + 8);
}

/* 00104c60  __cp_eh_info  (29 bytes)
 * undefined4 __cp_eh_info(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 __cp_eh_info(void)

{
  undefined8 uVar1;
  
  uVar1 = __get_eh_info();
  return *(undefined4 *)uVar1;
}

/* 00104c80  __start_cp_handler  (36 bytes)
 * undefined __start_cp_handler(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __start_cp_handler(void)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = __get_eh_info();
  iVar2 = *(int *)uVar3;
  piVar1 = (int *)(iVar2 + 0x1c);
  *piVar1 = *piVar1 + 1;
  *(undefined1 *)(iVar2 + 0x14) = 1;
  return;
}

/* 00104cb0  __cplus_type_matcher  (96 bytes)
 * bool __cplus_type_matcher(int param_1, undefined * param_2, int param_3)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

bool __cplus_type_matcher(int param_1,undefined *param_2,int param_3)

{
  bool bVar1;
  type_info *ptVar2;
  undefined3 extraout_var;
  
  if ((param_3 == 0) || (*(short *)(param_3 + 4) == 4)) {
    bVar1 = true;
    if (param_2 != (undefined *)0xffffffff) {
      ptVar2 = (type_info *)(*(code *)param_2)();
      bVar1 = __throw_type_match_rtti_2
                        (ptVar2,*(type_info **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x20),
                         (undefined4 *)(param_1 + 8));
      bVar1 = CONCAT31(extraout_var,bVar1) != 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

/* 00104d20  __cp_push_exception  (107 bytes)
 * undefined __cp_push_exception(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __cp_push_exception(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = __eh_alloc(0x24);
  puVar1[3] = param_2;
  puVar1[2] = param_1;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[7] = 0;
  puVar1[4] = param_3;
  *(undefined2 *)(puVar1 + 1) = 4;
  *(undefined2 *)((int)puVar1 + 6) = 1;
  puVar1[8] = param_1;
  *puVar1 = __cplus_type_matcher;
  uVar2 = __get_eh_info();
  puVar1[6] = *(undefined4 *)uVar2;
  *(undefined4 *)uVar2 = puVar1;
  return;
}

/* 00104d90  __cp_pop_exception  (252 bytes)
 * undefined __cp_pop_exception(void * param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __cp_pop_exception(void *param_1)

{
  bool bVar1;
  int *piVar2;
  void *pvVar3;
  int *extraout_ECX;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = __get_eh_info();
  piVar2 = (int *)uVar5;
  pvVar3 = (void *)*piVar2;
  iVar4 = *(int *)((int)param_1 + 0x1c) + -1;
  *(int *)((int)param_1 + 0x1c) = iVar4;
  if ((param_1 != pvVar3) || (*(char *)((int)param_1 + 0x14) != '\0')) {
    if (iVar4 == 0) {
      if ((pvVar3 != (void *)0x0) && (pvVar3 != param_1)) {
        while( true ) {
          piVar2 = (int *)((int)pvVar3 + 0x18);
          if ((*(void **)((int)pvVar3 + 0x18) == (void *)0x0) ||
             (*(void **)((int)pvVar3 + 0x18) == param_1)) break;
          pvVar3 = (void *)*piVar2;
        }
        pvVar3 = (void *)*piVar2;
      }
      if (pvVar3 == (void *)0x0) {
        terminate();
        piVar2 = extraout_ECX;
      }
      *piVar2 = *(int *)((int)param_1 + 0x18);
      if (*(code **)((int)param_1 + 0x10) != (code *)0x0) {
        (**(code **)((int)param_1 + 0x10))(*(undefined4 *)((int)param_1 + 0x20),2);
      }
      bVar1 = __is_pointer(*(int *)((int)param_1 + 0xc));
      if (!bVar1) {
        __eh_free(*(void **)((int)param_1 + 0x20));
      }
      __eh_free(param_1);
    }
    else if (((param_1 == pvVar3) && (iVar4 = *(int *)((int)param_1 + 0x18), iVar4 != 0)) &&
            (pvVar3 = param_1, *(char *)(iVar4 + 0x14) == '\0')) {
      do {
        pvVar3 = *(void **)((int)pvVar3 + 0x18);
        if (*(int *)((int)pvVar3 + 0x18) == 0) break;
      } while (*(char *)(*(int *)((int)pvVar3 + 0x18) + 0x14) == '\0');
      *piVar2 = iVar4;
      *(undefined4 *)((int)param_1 + 0x18) = *(undefined4 *)((int)pvVar3 + 0x18);
      *(void **)((int)pvVar3 + 0x18) = param_1;
    }
  }
  return;
}

/* 00104e90  __uncatch_exception  (73 bytes)
 * undefined __uncatch_exception(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __uncatch_exception(void)

{
  int *piVar1;
  int *piVar2;
  int *extraout_ECX;
  int extraout_EDX;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = __get_eh_info();
  piVar1 = (int *)uVar4;
  piVar2 = piVar1;
  while( true ) {
    iVar3 = *piVar2;
    if (iVar3 == 0) {
      terminate();
      piVar2 = extraout_ECX;
      iVar3 = extraout_EDX;
    }
    if (*(char *)(iVar3 + 0x14) != '\0') break;
    piVar2 = (int *)(iVar3 + 0x18);
  }
  if (piVar2 != piVar1) {
    *piVar2 = *(int *)(iVar3 + 0x18);
    *(int *)(iVar3 + 0x18) = *piVar1;
    *piVar1 = iVar3;
  }
  *(undefined1 *)(iVar3 + 0x14) = 0;
  return;
}

/* 00104ee0  __check_eh_spec  (480 bytes)
 * undefined __check_eh_spec(int param_1, int param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __check_eh_spec(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  type_info *ptVar2;
  undefined3 extraout_var_01;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  code *pcVar9;
  void *local_38;
  int local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  
  uVar7 = __get_eh_info();
  local_34 = *(int *)uVar7;
  if (0 < param_1) {
    iVar4 = 0;
    do {
      bVar1 = __throw_type_match_rtti_2
                        (*(type_info **)(param_2 + iVar4 * 4),*(type_info **)(local_34 + 0xc),
                         *(undefined4 *)(local_34 + 8),&local_30);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        __uncatch_exception();
        __throw();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1);
  }
  unexpected();
  local_2c = exception_virtual_table;
  __rethrow((int)&LRTH91);
  __cp_pop_exception(local_38);
  __rethrow((int)&LRTH69);
  __rethrow((int)&LRTH66);
  iVar4 = __start_cp_handler();
  if ((local_34 != iVar4) && (local_34 = iVar4, 0 < param_1)) {
    iVar5 = 0;
    do {
      bVar1 = __throw_type_match_rtti_2
                        (*(type_info **)(param_2 + iVar5 * 4),*(type_info **)(iVar4 + 0xc),
                         *(undefined4 *)(iVar4 + 8),&local_30);
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        __uncatch_exception();
        __throw();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  ptVar2 = (type_info *)bad_exception_type_info_function();
  if (0 < param_1) {
    puVar8 = &local_30;
    puVar6 = (undefined4 *)0x0;
    do {
      bVar1 = __throw_type_match_rtti_2
                        (*(type_info **)(param_2 + (int)puVar6 * 4),ptVar2,
                         *(undefined4 *)(local_34 + 8),puVar8);
      if (CONCAT31(extraout_var_01,bVar1) != 0) {
        local_2c = bad_exception_virtual_table;
        puVar8 = (undefined4 *)0x4;
        puVar6 = __eh_alloc(4);
        pcVar9 = bad_exception::~bad_exception;
        *puVar6 = bad_exception_virtual_table;
        puVar3 = bad_exception_type_info_function();
        __cp_push_exception(puVar6,puVar3,pcVar9);
        __throw();
      }
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while ((int)puVar6 < param_1);
  }
  terminate();
  terminate();
  __check_eh_spec(0,0);
  return;
}

/* 001050c0  __check_null_eh_spec  (37 bytes)
 * undefined __check_null_eh_spec(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __check_null_eh_spec(void)

{
  __check_eh_spec(0,0);
  return;
}

/* 001050f0  __throw_bad_cast  (128 bytes)
 * undefined8 __throw_bad_cast(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined8 __throw_bad_cast(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined4 uStackY_84;
  code *pcVar6;
  
  puVar2 = __eh_alloc(4);
  pcVar6 = bad_cast::~bad_cast;
  *puVar2 = bad_cast_virtual_table;
  puVar3 = bad_cast_type_info_function();
  __cp_push_exception(puVar2,puVar3,pcVar6);
  __throw();
  __rethrow((int)&LRTH128);
  puVar2 = __eh_alloc(4);
  pcVar6 = bad_typeid::~bad_typeid;
  *puVar2 = bad_typeid_virtual_table;
  puVar3 = bad_typeid_type_info_function();
  __cp_push_exception(puVar2,puVar3,pcVar6);
  __throw();
  __rethrow((int)&LRTH160);
  uVar5 = __get_eh_info();
  iVar1 = *(int *)uVar5;
  uVar4 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x14) == '\0')) {
    uVar4 = 1;
  }
  return CONCAT44(uStackY_84,CONCAT31((int3)((uint)iVar1 >> 8),uVar4));
}

/* 00105170  __throw_bad_typeid  (128 bytes)
 * undefined8 __throw_bad_typeid(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined8 __throw_bad_typeid(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined4 uStackY_48;
  code *pcVar6;
  
  puVar2 = __eh_alloc(4);
  pcVar6 = bad_typeid::~bad_typeid;
  *puVar2 = bad_typeid_virtual_table;
  puVar3 = bad_typeid_type_info_function();
  __cp_push_exception(puVar2,puVar3,pcVar6);
  __throw();
  __rethrow((int)&LRTH160);
  uVar5 = __get_eh_info();
  iVar1 = *(int *)uVar5;
  uVar4 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x14) == '\0')) {
    uVar4 = 1;
  }
  return CONCAT44(uStackY_48,CONCAT31((int3)((uint)iVar1 >> 8),uVar4));
}

/* 001051f0  uncaught_exception  (45 bytes)
 * undefined8 uncaught_exception(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* uncaught_exception(void) */

undefined8 uncaught_exception(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 uStack_c;
  
  uVar3 = __get_eh_info();
  iVar1 = *(int *)uVar3;
  uVar2 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x14) == '\0')) {
    uVar2 = 1;
  }
  return CONCAT44(uStack_c,CONCAT31((int3)((uint)iVar1 >> 8),uVar2));
}

/* 00105250  exception_type_info_function  (56 bytes)
 * undefined4 * exception_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* exception type_info function */

undefined4 * exception_type_info_function(void)

{
  if (exception_type_info_node == 0) {
    __rtti_user(&exception_type_info_node,"9exception");
  }
  return &exception_type_info_node;
}

/* 001052f0  bad_exception_type_info_function  (68 bytes)
 * undefined4 * bad_exception_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_exception type_info function */

undefined4 * bad_exception_type_info_function(void)

{
  if (bad_exception_type_info_node == 0) {
    exception_type_info_function();
    __rtti_si(&bad_exception_type_info_node,"13bad_exception",&exception_type_info_node);
  }
  return &bad_exception_type_info_node;
}

/* 001053b0  __i686.get_pc_thunk.bx  (4 bytes)
 * undefined __i686.get_pc_thunk.bx(void)
 * called by: __array_type_info::~__array_type_info, __array_type_info_type_info_function, __attr_type_info::~__attr_type_info, __attr_type_info_type_info_function, __builtin_type_info::~__builtin_type_info, __builtin_type_info_type_info_function, __dynamic_cast, __dynamic_cast_2, __func_type_info::~__func_type_info, __func_type_info_type_info_function, __is_pointer, __pointer_type_info::~__pointer_type_info, ... (43 total)
 */
/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}

/* 001053f0  __throw_type_match_rtti_2  (1246 bytes)
 * bool __throw_type_match_rtti_2(type_info * param_1, type_info * param_2, undefined4 param_3, undefined4 * param_4)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

bool __throw_type_match_rtti_2
               (type_info *param_1,type_info *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  __user_type_info *this;
  int iVar3;
  uint uVar4;
  type_info *ptVar5;
  undefined8 uVar6;
  byte local_25;
  int local_24;
  uint local_20;
  type_info *local_1c;
  int local_18;
  
  *param_4 = param_3;
  cVar1 = type_info::operator==(param_1,param_2);
  if (cVar1 != '\0') {
    return true;
  }
  this = (__user_type_info *)0x0;
  if (param_2 != (type_info *)0x0) {
    this = (__user_type_info *)
           __dynamic_cast_2(*(undefined **)(*(int *)(param_2 + 4) + 4),
                            __user_type_info_type_info_function,0,param_2 + **(int **)(param_2 + 4),
                            type_info_type_info_function,(int)param_2);
  }
  if (this == (__user_type_info *)0x0) {
    local_18 = 0;
    if (param_2 != (type_info *)0x0) {
      local_18 = __dynamic_cast_2(*(undefined **)(*(int *)(param_2 + 4) + 4),
                                  __pointer_type_info_type_info_function,0,
                                  param_2 + **(int **)(param_2 + 4),type_info_type_info_function,
                                  (int)param_2);
    }
    if (local_18 != 0) {
      iVar3 = 0;
      if (param_1 != (type_info *)0x0) {
        iVar3 = __dynamic_cast_2(*(undefined **)(*(int *)(param_1 + 4) + 4),
                                 __pointer_type_info_type_info_function,0,
                                 param_1 + **(int **)(param_1 + 4),type_info_type_info_function,
                                 (int)param_1);
      }
      if (iVar3 != 0) {
        local_1c = *(type_info **)(iVar3 + 8);
        ptVar5 = *(type_info **)(local_18 + 8);
        iVar3 = 0;
        if (ptVar5 != (type_info *)0x0) {
          iVar3 = __dynamic_cast_2(*(undefined **)(*(int *)(ptVar5 + 4) + 4),
                                   __attr_type_info_type_info_function,0,
                                   ptVar5 + **(int **)(ptVar5 + 4),type_info_type_info_function,
                                   (int)ptVar5);
        }
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(iVar3 + 0xc);
          ptVar5 = *(type_info **)(iVar3 + 8);
        }
        iVar3 = 0;
        if (local_1c != (type_info *)0x0) {
          iVar3 = __dynamic_cast_2(*(undefined **)(*(int *)(local_1c + 4) + 4),
                                   __attr_type_info_type_info_function,0,
                                   local_1c + **(int **)(local_1c + 4),type_info_type_info_function,
                                   (int)local_1c);
        }
        if (iVar3 == 0) {
          local_20 = 0;
        }
        else {
          local_20 = *(uint *)(iVar3 + 0xc);
          local_1c = *(type_info **)(iVar3 + 8);
        }
        if (((uVar4 & 1) <= (local_20 & 1)) && ((uVar4 & 2) <= (local_20 & 2))) {
          cVar1 = type_info::operator==(local_1c,ptVar5);
          if (cVar1 == '\0') {
            uVar6 = void_type_info_function();
            cVar1 = type_info::operator==(local_1c,(type_info *)uVar6);
            if ((cVar1 == '\0') ||
               ((ptVar5 != (type_info *)0x0 &&
                (iVar3 = __dynamic_cast_2(*(undefined **)(*(int *)(ptVar5 + 4) + 4),
                                          __func_type_info_type_info_function,0,
                                          ptVar5 + **(int **)(ptVar5 + 4),
                                          type_info_type_info_function,(int)ptVar5), iVar3 != 0))))
            {
              this = (__user_type_info *)0x0;
              if (ptVar5 != (type_info *)0x0) {
                this = (__user_type_info *)
                       __dynamic_cast_2(*(undefined **)(*(int *)(ptVar5 + 4) + 4),
                                        __user_type_info_type_info_function,0,
                                        ptVar5 + **(int **)(ptVar5 + 4),type_info_type_info_function
                                        ,(int)ptVar5);
              }
              param_1 = local_1c;
              if (this == (__user_type_info *)0x0) {
                local_24 = 0;
                if (ptVar5 != (type_info *)0x0) {
                  local_24 = __dynamic_cast_2(*(undefined **)(*(int *)(ptVar5 + 4) + 4),
                                              __pointer_type_info_type_info_function,0,
                                              ptVar5 + **(int **)(ptVar5 + 4),
                                              type_info_type_info_function,(int)ptVar5);
                }
                if (local_24 == 0) {
                  return false;
                }
                iVar3 = 0;
                if (local_1c != (type_info *)0x0) {
                  iVar3 = __dynamic_cast_2(*(undefined **)(*(int *)(local_1c + 4) + 4),
                                           __pointer_type_info_type_info_function,0,
                                           local_1c + **(int **)(local_1c + 4),
                                           type_info_type_info_function,(int)local_1c);
                }
                if (iVar3 == 0) {
                  return false;
                }
                local_25 = (byte)local_20 & 1;
                local_1c = *(type_info **)(iVar3 + 8);
                while( true ) {
                  ptVar5 = *(type_info **)(local_24 + 8);
                  iVar3 = 0;
                  if (ptVar5 != (type_info *)0x0) {
                    iVar3 = __dynamic_cast_2(*(undefined **)(*(int *)(ptVar5 + 4) + 4),
                                             __attr_type_info_type_info_function,0,
                                             ptVar5 + **(int **)(ptVar5 + 4),
                                             type_info_type_info_function,(int)ptVar5);
                  }
                  if (iVar3 == 0) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = *(uint *)(iVar3 + 0xc);
                    ptVar5 = *(type_info **)(iVar3 + 8);
                  }
                  iVar3 = 0;
                  if (local_1c != (type_info *)0x0) {
                    iVar3 = __dynamic_cast_2(*(undefined **)(*(int *)(local_1c + 4) + 4),
                                             __attr_type_info_type_info_function,0,
                                             local_1c + **(int **)(local_1c + 4),
                                             type_info_type_info_function,(int)local_1c);
                  }
                  if (iVar3 == 0) {
                    local_20 = 0;
                  }
                  else {
                    local_20 = *(uint *)(iVar3 + 0xc);
                    local_1c = *(type_info **)(iVar3 + 8);
                  }
                  if ((local_20 & 1) < (uVar4 & 1)) {
                    return false;
                  }
                  if ((local_20 & 2) < (uVar4 & 2)) {
                    return false;
                  }
                  if (local_25 == 0) {
                    if ((uVar4 & 1) < (local_20 & 1)) {
                      return false;
                    }
                    if ((uVar4 & 2) < (local_20 & 2)) {
                      return false;
                    }
                  }
                  cVar1 = type_info::operator==(local_1c,ptVar5);
                  if (cVar1 != '\0') {
                    return true;
                  }
                  iVar3 = 0;
                  if (local_1c != (type_info *)0x0) {
                    iVar3 = __dynamic_cast_2(*(undefined **)(*(int *)(local_1c + 4) + 4),
                                             __pointer_type_info_type_info_function,0,
                                             local_1c + **(int **)(local_1c + 4),
                                             type_info_type_info_function,(int)local_1c);
                  }
                  local_24 = 0;
                  if (ptVar5 != (type_info *)0x0) {
                    local_24 = __dynamic_cast_2(*(undefined **)(*(int *)(ptVar5 + 4) + 4),
                                                __pointer_type_info_type_info_function,0,
                                                ptVar5 + **(int **)(ptVar5 + 4),
                                                type_info_type_info_function,(int)ptVar5);
                  }
                  if (iVar3 == 0) break;
                  if (local_24 == 0) {
                    return false;
                  }
                  if ((((byte)local_20 ^ 1) & 1) != 0) {
                    local_25 = 0;
                  }
                  local_1c = *(type_info **)(iVar3 + 8);
                }
                return false;
              }
              goto LAB_00105681;
            }
          }
          return true;
        }
      }
    }
    return false;
  }
LAB_00105681:
  bVar2 = __user_type_info::upcast(this,param_1,param_3,param_4);
  return bVar2;
}

/* 001058f0  __throw_type_match_rtti  (60 bytes)
 * undefined4 __throw_type_match_rtti(type_info * param_1, type_info * param_2, undefined4 param_3)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 __throw_type_match_rtti(type_info *param_1,type_info *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 local_c;
  
  bVar1 = __throw_type_match_rtti_2(param_1,param_2,param_3,&local_c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_c = 0;
  }
  return local_c;
}

/* 00105930  __is_pointer  (86 bytes)
 * bool __is_pointer(int param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __is_pointer(void *) */

bool __is_pointer(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = __dynamic_cast_2(*(undefined **)(*(int *)(param_1 + 4) + 4),
                             __pointer_type_info_type_info_function,0,
                             param_1 + **(int **)(param_1 + 4),type_info_type_info_function,param_1)
    ;
  }
  return iVar1 != 0;
}

/* 00105990  __rtti_ptr  (58 bytes)
 * undefined __rtti_ptr(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __rtti_ptr(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = type_info_virtual_table;
    *param_1 = param_2;
    param_1[1] = __pointer_type_info_virtual_table;
    param_1[2] = param_3;
  }
  return;
}

/* 001059d0  __rtti_attr  (64 bytes)
 * undefined __rtti_attr(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __rtti_attr(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = type_info_virtual_table;
    *param_1 = param_2;
    param_1[1] = __attr_type_info_virtual_table;
    param_1[2] = param_4;
    param_1[3] = param_3;
  }
  return;
}

/* 00105a10  __rtti_func  (52 bytes)
 * undefined4 __rtti_func(undefined4 * param_1, undefined4 param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 __rtti_func(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uStack_c;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = type_info_virtual_table;
    *param_1 = param_2;
    param_1[1] = __func_type_info_virtual_table;
  }
  return uStack_c;
}

/* 00105a50  __rtti_ptmf  (52 bytes)
 * undefined __rtti_ptmf(undefined4 * param_1, undefined4 param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __rtti_ptmf(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = type_info_virtual_table;
    *param_1 = param_2;
    param_1[1] = __ptmf_type_info_virtual_table;
  }
  return;
}

/* 00105a90  __rtti_ptmd  (52 bytes)
 * undefined __rtti_ptmd(undefined4 * param_1, undefined4 param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __rtti_ptmd(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = type_info_virtual_table;
    *param_1 = param_2;
    param_1[1] = __ptmd_type_info_virtual_table;
  }
  return;
}

/* 00105ad0  __rtti_array  (52 bytes)
 * undefined4 __rtti_array(undefined4 * param_1, undefined4 param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 __rtti_array(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uStack_c;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = type_info_virtual_table;
    *param_1 = param_2;
    param_1[1] = __array_type_info_virtual_table;
  }
  return uStack_c;
}

/* 00105b10  __dynamic_cast  (83 bytes)
 * undefined __dynamic_cast(undefined * param_1, undefined * param_2, int param_3, undefined4 param_4, undefined * param_5, int param_6)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __dynamic_cast(undefined *param_1,undefined *param_2,int param_3,undefined4 param_4,
                   undefined *param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  __user_type_info *this;
  int iVar3;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = (*(code *)param_5)();
  iVar2 = (*(code *)param_2)();
  iVar3 = -1;
  this = (__user_type_info *)(*(code *)param_1)();
  __user_type_info::dyncast(this,iVar3,iVar2,param_4,uVar1,param_6);
  return;
}

/* 00105b70  __dynamic_cast_2  (75 bytes)
 * undefined __dynamic_cast_2(undefined * param_1, undefined * param_2, int param_3, undefined4 param_4, undefined * param_5, int param_6)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __dynamic_cast_2(undefined *param_1,undefined *param_2,int param_3,undefined4 param_4,
                     undefined *param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  __user_type_info *this;
  
  uVar1 = (*(code *)param_5)();
  iVar2 = (*(code *)param_2)();
  this = (__user_type_info *)(*(code *)param_1)();
  __user_type_info::dyncast(this,param_3,iVar2,param_4,uVar1,param_6);
  return;
}

/* 00105bc0  void_type_info_function  (62 bytes)
 * undefined8 void_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* void type_info function */

undefined8 void_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (void_type_info_node == (char *)0x0) {
    void_type_info_node = "v";
    DAT_001a506c = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&void_type_info_node);
}

/* 00105c00  long_long_type_info_function  (62 bytes)
 * undefined8 long_long_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* long long type_info function */

undefined8 long_long_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (long_long_type_info_node == (char *)0x0) {
    long_long_type_info_node = "x";
    DAT_001a5074 = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&long_long_type_info_node);
}

/* 00105c40  long_type_info_function  (62 bytes)
 * undefined8 long_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* long type_info function */

undefined8 long_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (long_type_info_node == (char *)0x0) {
    long_type_info_node = "l";
    DAT_001a507c = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&long_type_info_node);
}

/* 00105c80  int_type_info_function  (62 bytes)
 * undefined8 int_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* int type_info function */

undefined8 int_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (int_type_info_node == (char *)0x0) {
    int_type_info_node = "i";
    DAT_001a5084 = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&int_type_info_node);
}

/* 00105cc0  short_type_info_function  (62 bytes)
 * undefined8 short_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* short type_info function */

undefined8 short_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (short_type_info_node == (char *)0x0) {
    short_type_info_node = "s";
    DAT_001a508c = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&short_type_info_node);
}

/* 00105d00  bool_type_info_function  (62 bytes)
 * undefined8 bool_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bool type_info function */

undefined8 bool_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (bool_type_info_node == (char *)0x0) {
    bool_type_info_node = "b";
    DAT_001a5094 = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&bool_type_info_node);
}

/* 00105d40  char_type_info_function  (62 bytes)
 * undefined8 char_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* char type_info function */

undefined8 char_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (char_type_info_node == (char *)0x0) {
    char_type_info_node = "c";
    DAT_001a509c = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&char_type_info_node);
}

/* 00105d80  wchar_t_type_info_function  (62 bytes)
 * undefined8 wchar_t_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* wchar_t type_info function */

undefined8 wchar_t_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (wchar_t_type_info_node == (char *)0x0) {
    wchar_t_type_info_node = "w";
    DAT_001a50a4 = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&wchar_t_type_info_node);
}

/* 00105dc0  long_double_type_info_function  (62 bytes)
 * undefined8 long_double_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* long double type_info function */

undefined8 long_double_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (long_double_type_info_node == (char *)0x0) {
    long_double_type_info_node = "r";
    DAT_001a50ac = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&long_double_type_info_node);
}

/* 00105e00  double_type_info_function  (62 bytes)
 * undefined8 double_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* double type_info function */

undefined8 double_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (double_type_info_node == (char *)0x0) {
    double_type_info_node = "d";
    DAT_001a50b4 = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&double_type_info_node);
}

/* 00105e40  float_type_info_function  (62 bytes)
 * undefined8 float_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* float type_info function */

undefined8 float_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (float_type_info_node == (char *)0x0) {
    float_type_info_node = "f";
    DAT_001a50bc = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&float_type_info_node);
}

/* 00105e80  unsigned_int_type_info_function  (62 bytes)
 * undefined8 unsigned_int_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* unsigned int type_info function */

undefined8 unsigned_int_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (unsigned_int_type_info_node == (undefined *)0x0) {
    unsigned_int_type_info_node = &DAT_00110ea8;
    DAT_001a50c4 = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&unsigned_int_type_info_node);
}

/* 00105ec0  unsigned_long_type_info_function  (62 bytes)
 * undefined8 unsigned_long_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* unsigned long type_info function */

undefined8 unsigned_long_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (unsigned_long_type_info_node == (undefined *)0x0) {
    unsigned_long_type_info_node = &DAT_00110eab;
    DAT_001a50cc = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&unsigned_long_type_info_node);
}

/* 00105f00  unsigned_long_long_type_info_function  (62 bytes)
 * undefined8 unsigned_long_long_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* unsigned long long type_info function */

undefined8 unsigned_long_long_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (unsigned_long_long_type_info_node == (undefined *)0x0) {
    unsigned_long_long_type_info_node = &DAT_00110eae;
    DAT_001a50d4 = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&unsigned_long_long_type_info_node);
}

/* 00105f40  unsigned_short_type_info_function  (62 bytes)
 * undefined8 unsigned_short_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* unsigned short type_info function */

undefined8 unsigned_short_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (unsigned_short_type_info_node == (undefined *)0x0) {
    unsigned_short_type_info_node = &DAT_00110eb1;
    DAT_001a50dc = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&unsigned_short_type_info_node);
}

/* 00105f80  unsigned_char_type_info_function  (62 bytes)
 * undefined8 unsigned_char_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* unsigned char type_info function */

undefined8 unsigned_char_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (unsigned_char_type_info_node == (undefined *)0x0) {
    unsigned_char_type_info_node = &DAT_00110eb4;
    DAT_001a50e4 = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&unsigned_char_type_info_node);
}

/* 00105fc0  signed_char_type_info_function  (62 bytes)
 * undefined8 signed_char_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* signed char type_info function */

undefined8 signed_char_type_info_function(void)

{
  undefined4 uStack_c;
  
  if (signed_char_type_info_node == (undefined *)0x0) {
    signed_char_type_info_node = &DAT_00110eb7;
    DAT_001a50ec = __builtin_type_info_virtual_table;
  }
  return CONCAT44(uStack_c,&signed_char_type_info_node);
}

/* 00106050  __pointer_type_info_type_info_function  (68 bytes)
 * undefined4 * __pointer_type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __pointer_type_info type_info function */

undefined4 * __pointer_type_info_type_info_function(void)

{
  if (__pointer_type_info_type_info_node == 0) {
    type_info_type_info_function();
    __rtti_si(&__pointer_type_info_type_info_node,"19__pointer_type_info",&type_info_type_info_node)
    ;
  }
  return &__pointer_type_info_type_info_node;
}

/* 001060f0  __attr_type_info_type_info_function  (68 bytes)
 * undefined4 * __attr_type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __attr_type_info type_info function */

undefined4 * __attr_type_info_type_info_function(void)

{
  if (__attr_type_info_type_info_node == 0) {
    type_info_type_info_function();
    __rtti_si(&__attr_type_info_type_info_node,"16__attr_type_info",&type_info_type_info_node);
  }
  return &__attr_type_info_type_info_node;
}

/* 00106190  __builtin_type_info_type_info_function  (68 bytes)
 * undefined4 * __builtin_type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __builtin_type_info type_info function */

undefined4 * __builtin_type_info_type_info_function(void)

{
  if (__builtin_type_info_type_info_node == 0) {
    type_info_type_info_function();
    __rtti_si(&__builtin_type_info_type_info_node,"19__builtin_type_info",&type_info_type_info_node)
    ;
  }
  return &__builtin_type_info_type_info_node;
}

/* 00106230  __func_type_info_type_info_function  (68 bytes)
 * undefined4 * __func_type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __func_type_info type_info function */

undefined4 * __func_type_info_type_info_function(void)

{
  if (__func_type_info_type_info_node == 0) {
    type_info_type_info_function();
    __rtti_si(&__func_type_info_type_info_node,"16__func_type_info",&type_info_type_info_node);
  }
  return &__func_type_info_type_info_node;
}

/* 001062d0  __ptmf_type_info_type_info_function  (68 bytes)
 * undefined4 * __ptmf_type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __ptmf_type_info type_info function */

undefined4 * __ptmf_type_info_type_info_function(void)

{
  if (__ptmf_type_info_type_info_node == 0) {
    type_info_type_info_function();
    __rtti_si(&__ptmf_type_info_type_info_node,"16__ptmf_type_info",&type_info_type_info_node);
  }
  return &__ptmf_type_info_type_info_node;
}

/* 00106370  __ptmd_type_info_type_info_function  (68 bytes)
 * undefined4 * __ptmd_type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __ptmd_type_info type_info function */

undefined4 * __ptmd_type_info_type_info_function(void)

{
  if (__ptmd_type_info_type_info_node == 0) {
    type_info_type_info_function();
    __rtti_si(&__ptmd_type_info_type_info_node,"16__ptmd_type_info",&type_info_type_info_node);
  }
  return &__ptmd_type_info_type_info_node;
}

/* 00106410  __array_type_info_type_info_function  (68 bytes)
 * undefined4 * __array_type_info_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __array_type_info type_info function */

undefined4 * __array_type_info_type_info_function(void)

{
  if (__array_type_info_type_info_node == 0) {
    type_info_type_info_function();
    __rtti_si(&__array_type_info_type_info_node,"17__array_type_info",&type_info_type_info_node);
  }
  return &__array_type_info_type_info_node;
}

/* 00106460  __i686.get_pc_thunk.bx  (4 bytes)
 * undefined __i686.get_pc_thunk.bx(void)
 * called by: [], bad_alloc::what, bad_alloc::~bad_alloc, bad_alloc_type_info_function, operator.new, set_new_handler
 */
/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}

/* 00106464  set_new_handler  (31 bytes)
 * undefined4 set_new_handler(undefined4 param_1)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* set_new_handler(void (*)(void)) */

undefined4 set_new_handler(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __new_handler;
  __new_handler = param_1;
  return uVar1;
}

/* 001064d0  bad_alloc_type_info_function  (68 bytes)
 * undefined4 * bad_alloc_type_info_function(void)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* bad_alloc type_info function */

undefined4 * bad_alloc_type_info_function(void)

{
  if (bad_alloc_type_info_node == 0) {
    exception_type_info_function();
    __rtti_si(&bad_alloc_type_info_node,"9bad_alloc",&exception_type_info_node);
  }
  return &bad_alloc_type_info_node;
}

/* 00106540  operator.new  (25 bytes)
 * undefined8 operator.new(undefined4 param_1, undefined4 param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* operator new(unsigned int, void *) */

undefined8 operator_new(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_c;
  
  return CONCAT44(uStack_c,param_2);
}

/* 00106560  []  (25 bytes)
 * undefined4 [](undefined4 param_1, undefined4 param_2)
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* operator new [](unsigned int, void *) */

undefined4 __(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

/* 00106580  gcc2_compiled.  (4 bytes)
 * undefined gcc2_compiled.(void)
 * called by: __do_global_ctors_aux
 */
void gcc2_compiled_(void)

{
  return;
}

/* 00106584  __do_global_ctors_aux  (60 bytes)
 * undefined __do_global_ctors_aux(void)
 * called by: _init
 */
void __do_global_ctors_aux(void)

{
  code *pcVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  gcc2_compiled_();
  puVar2 = (undefined4 *)(unaff_EBX + 0x6f86a);
  pcVar1 = *(code **)(unaff_EBX + 0x6f86a);
  while (pcVar1 != (code *)0xffffffff) {
    puVar2 = puVar2 + -1;
    (*pcVar1)();
    pcVar1 = (code *)*puVar2;
  }
  return;
}

/* 001065c0  init_dummy  (10 bytes)
 * undefined init_dummy(void)
 */
void init_dummy(void)

{
  return;
}

/* 001065d0  _fini  (30 bytes)
 * undefined _fini(void)
 */
void _fini(void)

{
  __do_global_dtors_aux();
  return;
}

