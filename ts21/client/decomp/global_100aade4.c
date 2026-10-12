/* client.dll - global_100aade4 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100aade4  Catch@100aade4  (29 bytes)
 * undefined * Catch@100aade4(void)
 */
undefined * Catch_100aade4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x634) = 0;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc4) = 0;
  return FUN_100aae01;
}

/* 100bb930  type_info::operator!=  (41 bytes)
 * bool type_info::operator!=(int param_1)
 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall type_info::operator!=(class type_info const &)const 
    public: bool __thiscall type_info::operator!=(class type_info const &)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

bool __thiscall type_info__operator__(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)((int)this + 9));
  return iVar1 != 0;
}

/* 100bb9e0  __ftol  (39 bytes)
 * longlong __ftol(void)
 * called by: FUN_1000a6f0, FUN_1000dc60, FUN_10017f70, FUN_1002be70, FUN_1002c340, FUN_1002c670, FUN_1002cb30, FUN_1002d160, FUN_1002e960, FUN_10034ac0, FUN_10034cf0, FUN_10039c00, ... (122 total)
 */
/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}

/* 100bbbc0  _memset  (88 bytes)
 * void * _memset(void * _Dst, int _Val, size_t _Size)
 * called by: FUN_1000dfb0, FUN_1000e590, FUN_1000eb70, FUN_1000f150, FUN_1000f730, FUN_1000fd10, FUN_100102f0, FUN_100108d0, FUN_10010eb0, FUN_10011490, FUN_10011a70, FUN_10012050, ... (100 total)
 */
/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}

/* 100bbc80  __exit  (21 bytes)
 * void __exit(int _Code)
 * called by: FUN_100bd710, FUN_100c3670, FUN_100c7760, __amsg_exit, _abort
 */
/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __exit(int _Code)

{
  FUN_100bbce0(_Code,1,0);
  return;
}

/* 100bbdf0  __initterm  (37 bytes)
 * undefined __initterm(int * param_1, int * param_2)
 * called by: FUN_100bbc20, FUN_100bbce0
 */
/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2003 Debug */

void __cdecl __initterm(int *param_1,int *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if (*param_1 != 0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

/* 100bbe20  operator_new  (28 bytes)
 * void * operator_new(uint param_1)
 * called by: FUN_1000dfb0, FUN_1000e590, FUN_1000eb70, FUN_1000f150, FUN_1000f730, FUN_1000fd10, FUN_100102f0, FUN_100108d0, FUN_10010eb0, FUN_10011490, FUN_10011a70, FUN_10012050, ... (68 total)
 */
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Debug */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}

/* 100bbf40  _strcmp  (129 bytes)
 * int _strcmp(char * _Str1, char * _Str2)
 * called by: FUN_100198c0, FUN_1001a370, FUN_1003d250, FUN_10040540, FUN_1004a500, FUN_10053350, FUN_10055dd0, FUN_10064ce0, FUN_1008e1c0, FUN_100aa190, FUN_100ab3f0, FUN_100b0bf0, ... (23 total)
 */
/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_100bbf84;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100bbf50;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_100bbf84;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_100bbf84;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100bbf50:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_100bbf84:
  return (uint)bVar5 * -2 + 1;
}

/* 100bc540  _CallMemberFunction0  (7 bytes)
 * void _CallMemberFunction0(void * param_1, void * param_2)
 * called by: ___DestructExceptionObject
 */
/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100bc545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}

/* 100bc5d0  FID_conflict:___CxxFrameHandler3  (60 bytes)
 * undefined4 FID_conflict:___CxxFrameHandler3(EHExceptionRecord * param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, void * param_4)
 * called by: FUN_100e5501, FUN_100e552b, FUN_100e554b, FUN_100e556b, FUN_100e558b, FUN_100e55ae, FUN_100e5602, FUN_100e562b, FUN_100e564b, FUN_100e566b, FUN_100e568b, FUN_100e56a9, ... (54 total)
 */
/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_100c4850(param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}

/* 100bc610  ___CxxLongjmpUnwind@4  (38 bytes)
 * undefined ___CxxLongjmpUnwind@4(int param_1)
 */
/* Library Function - Single Match
    ___CxxLongjmpUnwind@4
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

void ___CxxLongjmpUnwind_4(int param_1)

{
  FUN_100c4dc0(*(int *)(param_1 + 0x18),0,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x1c));
  return;
}

/* 100bc8e0  __global_unwind2  (32 bytes)
 * undefined __global_unwind2(PVOID param_1)
 * called by: FUN_100c9368
 */
/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100bc8f8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

/* 100bc922  __local_unwind2  (104 bytes)
 * undefined __local_unwind2(int param_1, int param_2)
 * called by: FUN_100c505b, FUN_100c9368, FUN_100c9425
 */
/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  code *pcStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  pcStack_18 = FUN_100bc900;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100bc9b6();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

/* 100bc98a  __abnormal_termination  (35 bytes)
 * int __abnormal_termination(void)
 * called by: FUN_100c508d
 */
/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(code **)((int)ExceptionList + 4) == FUN_100bc900) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}

/* 100bc9ad  __NLG_Notify1  (9 bytes)
 * undefined __NLG_Notify1(undefined4 param_1)
 * called by: __CallSettingFrame@12
 */
/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1028b338 = param_1;
  DAT_1028b334 = in_EAX;
  DAT_1028b33c = unaff_EBP;
  return;
}

/* 100bd660  _memcmp  (172 bytes)
 * int _memcmp(void * _Buf1, void * _Buf2, size_t _Size)
 * called by: FUN_10035fc0
 */
/* Library Function - Single Match
    _memcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  if (_Size != 0) {
    if ((((uint)_Buf1 | (uint)_Buf2) & 3) == 0) {
      uVar2 = _Size & 3;
      uVar5 = _Size >> 2;
      bVar9 = false;
      puVar7 = _Buf1;
      puVar8 = _Buf2;
      if (uVar5 != 0) {
        do {
          _Buf1 = puVar7;
          _Buf2 = puVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          _Buf2 = puVar8 + 1;
          _Buf1 = puVar7 + 1;
          bVar9 = *puVar7 == *puVar8;
          puVar7 = _Buf1;
          puVar8 = _Buf2;
        } while (bVar9);
        if (!bVar9) {
          uVar2 = *(uint *)((int)_Buf1 + -4);
          uVar5 = *(uint *)((int)_Buf2 + -4);
          bVar9 = (byte)uVar2 < (byte)uVar5;
          if ((((byte)uVar2 == (byte)uVar5) &&
              (bVar4 = (byte)(uVar2 >> 8), bVar6 = (byte)(uVar5 >> 8), bVar9 = bVar4 < bVar6,
              bVar4 == bVar6)) &&
             (bVar4 = (byte)(uVar2 >> 0x10), bVar6 = (byte)(uVar5 >> 0x10), bVar9 = bVar4 < bVar6,
             bVar4 == bVar6)) {
            bVar9 = (byte)(uVar2 >> 0x18) < (byte)(uVar5 >> 0x18);
          }
          goto LAB_100bd6da;
        }
      }
      if (uVar2 != 0) {
        uVar5 = *(uint *)_Buf1;
        uVar1 = *(uint *)_Buf2;
        bVar9 = (byte)uVar5 < (byte)uVar1;
        if ((byte)uVar5 != (byte)uVar1) {
LAB_100bd6da:
          return (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        iVar3 = 0;
        if (uVar2 != 1) {
          bVar6 = (byte)(uVar5 >> 8);
          bVar4 = (byte)(uVar1 >> 8);
          bVar9 = bVar6 < bVar4;
          if (bVar6 != bVar4) goto LAB_100bd6da;
          iVar3 = 0;
          if (uVar2 != 2) {
            bVar9 = (uVar5 & 0xff0000) < (uVar1 & 0xff0000);
            if ((uVar5 & 0xff0000) != (uVar1 & 0xff0000)) goto LAB_100bd6da;
            iVar3 = uVar2 - 3;
          }
        }
        return iVar3;
      }
    }
    else {
      if ((_Size & 1) == 0) goto LAB_100bd68d;
      bVar9 = *(byte *)_Buf1 < *(byte *)_Buf2;
      if (*(byte *)_Buf1 != *(byte *)_Buf2) goto LAB_100bd6da;
      _Buf1 = (void *)((int)_Buf1 + 1);
      _Buf2 = (void *)((int)_Buf2 + 1);
      for (_Size = _Size - 1; _Size != 0; _Size = _Size - 2) {
LAB_100bd68d:
        bVar9 = *(byte *)_Buf1 < *(byte *)_Buf2;
        if ((*(byte *)_Buf1 != *(byte *)_Buf2) ||
           (bVar9 = *(byte *)((int)_Buf1 + 1) < *(byte *)((int)_Buf2 + 1),
           *(byte *)((int)_Buf1 + 1) != *(byte *)((int)_Buf2 + 1))) goto LAB_100bd6da;
        _Buf2 = (void *)((int)_Buf2 + 2);
        _Buf1 = (void *)((int)_Buf1 + 2);
      }
    }
  }
  return 0;
}

/* 100bdfc0  _strlen  (123 bytes)
 * size_t _strlen(char * _Str)
 * called by: FID_conflict:__getenv_lk, FUN_10040540, FUN_10046c50, FUN_10048410, FUN_10049270, FUN_1004a500, FUN_1004a8d0, FUN_1004b530, FUN_1004ba60, FUN_1004fae0, FUN_100547d0, FUN_10055800, ... (47 total)
 */
/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_100bdfe0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100be013:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100bdfe0:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_100be013;
}

/* 100be040  _strncpy  (254 bytes)
 * char * _strncpy(char * _Dest, char * _Source, size_t _Count)
 * called by: FUN_10040540, FUN_10046610, FUN_10046c50, FUN_100547d0, FUN_10060540, FUN_10060890, FUN_10061590, FUN_10061d80, FUN_1009ad50, FUN_1009d040, FUN_100a16e0, FUN_100a43d0, ... (27 total)
 */
/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x100be07e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100be0bb;
        goto LAB_100be129;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x100be125:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_100be129:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100be0bb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x100be125;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x100be125;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x100be125;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x100be07e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_100be0bb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}

/* 100be140  _strncat  (291 bytes)
 * char * _strncat(char * _Dest, char * _Source, size_t _Count)
 * called by: FUN_10040540, FUN_100547d0, FUN_100b1f40, FUN_100b3eb0, FUN_100bd710
 */
/* Library Function - Single Match
    _strncat
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)_Dest;
  if (_Count == 0) {
    return _Dest;
  }
  do {
    if (((uint)puVar5 & 3) == 0) goto LAB_100be16a;
    uVar4 = *puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100be19b;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar6 = (uint *)((int)puVar6 + 2);
      goto LAB_100be1ab;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100be16a:
    do {
      puVar6 = puVar5;
      puVar5 = puVar6 + 1;
    } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar6;
    if ((char)uVar4 == '\0') goto LAB_100be1ab;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar6 = (uint *)((int)puVar6 + 1);
      goto LAB_100be1ab;
    }
  }
LAB_100be19b:
  puVar6 = (uint *)((int)puVar5 + -1);
LAB_100be1ab:
  if (((uint)_Source & 3) == 0) {
    uVar3 = _Count >> 2;
  }
  else {
    do {
      bVar1 = (byte)*(uint *)_Source;
      uVar4 = (uint)bVar1;
      _Source = (char *)((int)_Source + 1);
      if (bVar1 == 0) goto LAB_100be1fa;
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      _Count = _Count - 1;
      if (_Count == 0) goto LAB_100be1f0;
    } while (((uint)_Source & 3) != 0);
    uVar3 = _Count >> 2;
  }
  do {
    if (uVar3 == 0) {
      for (uVar4 = _Count & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar3 = *(uint *)_Source;
        _Source = (char *)((int)_Source + 1);
        *(byte *)puVar6 = (byte)uVar3;
        puVar6 = (uint *)((int)puVar6 + 1);
        if ((byte)uVar3 == 0) {
          return _Dest;
        }
      }
LAB_100be1f0:
      *(byte *)puVar6 = 0;
      return _Dest;
    }
    uVar2 = *(uint *)_Source;
    uVar4 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_100be1fa:
        *(byte *)puVar6 = (byte)uVar4;
        return _Dest;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar6 = (short)uVar4;
        return _Dest;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar6 = (short)uVar4;
        *(byte *)((int)puVar6 + 2) = 0;
        return _Dest;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar6 = uVar4;
        return _Dest;
      }
    }
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
    uVar3 = uVar3 - 1;
  } while( true );
}

/* 100be3e0  _rand  (54 bytes)
 * int _rand(void)
 * called by: FUN_100438e0, FUN_10055170
 */
/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100c55e0();
  pDVar1[5] = pDVar1[5] * 0x343fd + 0x269ec3;
  return pDVar1[5] >> 0x10 & 0x7fff;
}

/* 100be5b0  _malloc  (38 bytes)
 * void * _malloc(size_t _Size)
 * called by: FUN_10046ec0, FUN_1004fae0, FUN_1004fe20, FUN_100b4e30, FUN_100d9bc0, FUN_100d9cf0, FUN_100d9e20
 */
/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100be630(_Size,DAT_10321d3c,1,0,0);
  return pvVar1;
}

/* 100be5e0  __malloc_dbg  (44 bytes)
 * undefined4 __malloc_dbg(uint param_1, uint param_2, int param_3, undefined4 param_4)
 * called by: FUN_100bc4b0, FUN_100beb60, FUN_100c4260, FUN_100c6060, FUN_100c6fe0, FUN_100c7490, FUN_100c7dd0, FUN_100c9000, FUN_100cd8d0, FUN_100cda70, FUN_100d0950, FUN_100d0aa0, ... (24 total)
 */
/* Library Function - Single Match
    __malloc_dbg
   
   Library: Visual Studio */

undefined4 __cdecl __malloc_dbg(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100be630(param_1,DAT_10321d3c,param_2,param_3,param_4);
  return uVar1;
}

/* 100be610  __nh_malloc  (27 bytes)
 * void * __nh_malloc(size_t _Size, int _NhFlag)
 * called by: operator_new
 */
/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100be630(_Size,_NhFlag,1,0,0);
  return pvVar1;
}

/* 100bea10  _calloc  (36 bytes)
 * void * _calloc(size_t _Count, size_t _Size)
 */
/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  undefined1 *puVar1;
  
  puVar1 = __calloc_dbg(_Count,_Size,1,0,0);
  return puVar1;
}

/* 100bea40  __calloc_dbg  (96 bytes)
 * undefined1 * __calloc_dbg(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: FUN_100c5500, FUN_100c55e0, FUN_100c58f0, FUN_100d6620, ___init_time, _calloc
 */
/* Library Function - Single Match
    __calloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined1 * __cdecl
__calloc_dbg(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined1 *local_10;
  
  puVar1 = (undefined1 *)__malloc_dbg(param_2 * param_1,param_3,param_4,param_5);
  if (puVar1 != (undefined1 *)0x0) {
    for (local_10 = puVar1; local_10 < puVar1 + param_2 * param_1; local_10 = local_10 + 1) {
      *local_10 = 0;
    }
  }
  return puVar1;
}

/* 100beaa0  FID_conflict:__expand  (36 bytes)
 * void * FID_conflict:__expand(void * _Memory, size_t _NewSize)
 */
/* Library Function - Multiple Matches With Different Base Names
    __expand
    _realloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl FID_conflict___expand(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
  pvVar1 = (void *)FID_conflict___realloc_dbg(_Memory,_NewSize,1,0,0);
  return pvVar1;
}

/* 100bead0  FID_conflict:__realloc_dbg  (99 bytes)
 * undefined FID_conflict:__realloc_dbg(void * param_1, uint param_2, uint param_3, int param_4, int param_5)
 * called by: FID_conflict:__expand, FUN_100bc3d0, FUN_100dc110
 */
/* Library Function - Multiple Matches With Different Base Names
    __expand_dbg
    __realloc_dbg
   
   Library: Visual Studio 2003 Debug */

void FID_conflict___realloc_dbg(void *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10278f28;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_100c4260(9);
  local_8 = 0;
  FUN_100beb60(param_1,param_2,param_3,param_4,param_5,1);
  local_8 = 0xffffffff;
  FUN_100beb33();
  FUN_100beb3e();
  return;
}

/* 100bf080  FID_conflict:__expand  (36 bytes)
 * void * FID_conflict:__expand(void * _Memory, size_t _NewSize)
 */
/* Library Function - Multiple Matches With Different Base Names
    __expand
    _realloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl FID_conflict___expand(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
  pvVar1 = (void *)FID_conflict___realloc_dbg(_Memory,_NewSize,1,0,0);
  return pvVar1;
}

/* 100bf0b0  FID_conflict:__realloc_dbg  (99 bytes)
 * undefined FID_conflict:__realloc_dbg(void * param_1, uint param_2, uint param_3, int param_4, int param_5)
 * called by: FID_conflict:__expand
 */
/* Library Function - Multiple Matches With Different Base Names
    __expand_dbg
    __realloc_dbg
   
   Library: Visual Studio 2003 Debug */

void FID_conflict___realloc_dbg(void *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102790d8;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_100c4260(9);
  local_8 = 0;
  FUN_100beb60(param_1,param_2,param_3,param_4,param_5,0);
  local_8 = 0xffffffff;
  FUN_100bf113();
  FUN_100bf11e();
  return;
}

/* 100bf180  __free_dbg  (82 bytes)
 * undefined __free_dbg(void * param_1, int param_2)
 * called by: FUN_100bbb10, FUN_100bca60, FUN_100beb60, FUN_100bf140, FUN_100c41c0, FUN_100c4260, FUN_100c5680, FUN_100c5c50, FUN_100cd4e0, FUN_100cd8d0, FUN_100cda70, FUN_100d0950, ... (25 total)
 */
/* Library Function - Single Match
    __free_dbg
   
   Library: Visual Studio 2003 Debug */

void __free_dbg(void *param_1,int param_2)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102790e8;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_100c4260(9);
  local_8 = 0;
  FUN_100bf1f0(param_1,param_2);
  local_8 = 0xffffffff;
  FUN_100bf1d2();
  FUN_100bf1dd();
  return;
}

/* 100bfdd0  __CrtIsValidPointer  (75 bytes)
 * undefined4 __CrtIsValidPointer(void * param_1, UINT_PTR param_2, int param_3)
 * called by: FUN_100bfe20, FUN_100c0380, __CrtIsMemoryBlock
 */
/* Library Function - Single Match
    __CrtIsValidPointer
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __CrtIsValidPointer(void *param_1,UINT_PTR param_2,int param_3)

{
  BOOL BVar1;
  
  if (((param_1 != (void *)0x0) && (BVar1 = IsBadReadPtr(param_1,param_2), BVar1 == 0)) &&
     ((param_3 == 0 || (BVar1 = IsBadWritePtr(param_1,param_2), BVar1 == 0)))) {
    return 1;
  }
  return 0;
}

/* 100bff50  __CrtIsMemoryBlock  (262 bytes)
 * undefined4 __CrtIsMemoryBlock(void * param_1, UINT_PTR param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
 */
/* Library Function - Single Match
    __CrtIsMemoryBlock
   
   Library: Visual Studio 2003 Debug */

undefined4
__CrtIsMemoryBlock(void *param_1,UINT_PTR param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102793b0;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  BVar1 = FUN_100bfe20((int)param_1);
  if (BVar1 != 0) {
    FUN_100c4260(9);
    local_8 = 0;
    if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) || (*(int *)((int)param_1 + -0xc) == 1))
         || ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
        (*(int *)((int)param_1 + -0xc) == 3)) &&
       (((iVar2 = __CrtIsValidPointer(param_1,param_2,1), iVar2 != 0 &&
         (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
        (*(int *)((int)param_1 + -8) <= DAT_1028b3e8)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)((int)param_1 + -0x14);
      }
    }
    local_8 = 0xffffffff;
    FUN_100c0056();
    uVar3 = FUN_100c0061();
    return uVar3;
  }
  ExceptionList = pvStack_14;
  return 0;
}

/* 100c08f0  _strncmp  (56 bytes)
 * int _strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * called by: FUN_10046590, FUN_100aa190, FUN_100ccb40, FUN_100cd4e0
 */
/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}

/* 100c0b70  shortsort  (109 bytes)
 * undefined shortsort(undefined1 * param_1, undefined1 * param_2, int param_3, undefined * param_4)
 * called by: FUN_100c0930
 */
/* Library Function - Single Match
    _shortsort
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl shortsort(undefined1 *param_1,undefined1 *param_2,int param_3,undefined *param_4)

{
  int iVar1;
  undefined1 *local_c;
  undefined1 *local_8;
  
  for (; param_1 < param_2; param_2 = param_2 + -param_3) {
    local_c = param_1;
    local_8 = param_1;
    while (local_8 = local_8 + param_3, local_8 <= param_2) {
      iVar1 = (*(code *)param_4)(local_8,local_c);
      if (0 < iVar1) {
        local_c = local_8;
      }
    }
    swap(local_c,param_2,param_3);
  }
  return;
}

/* 100c0be0  swap  (78 bytes)
 * undefined swap(undefined1 * param_1, undefined1 * param_2, int param_3)
 * called by: FUN_100c0930, shortsort
 */
/* Library Function - Single Match
    _swap
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl swap(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    while (param_3 != 0) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
  }
  return;
}

/* 100c1b60  `eh_vector_constructor_iterator'  (113 bytes)
 * void `eh_vector_constructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4, _func_void_void_ptr * param_5)
 * called by: FUN_1009e5c0, FUN_100a16e0, FUN_100a2d60
 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *unaff_EDI;
  int local_20;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_102795d8;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(unaff_EDI);
  }
  local_8 = 0xffffffff;
  FUN_100c1bd1();
  FUN_100c1bed();
  return;
}

/* 100c1d30  ArrayUnwindFilter  (44 bytes)
 * int ArrayUnwindFilter(_EXCEPTION_POINTERS * param_1)
 * called by: FUN_100c1d06
 */
/* Library Function - Single Match
    int __cdecl ArrayUnwindFilter(struct _EXCEPTION_POINTERS *)
   
   Library: Visual Studio */

int __cdecl ArrayUnwindFilter(_EXCEPTION_POINTERS *param_1)

{
  if (param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) {
    FUN_100c57b0();
  }
  return 0;
}

/* 100c1f70  entry  (243 bytes)
 * int entry(undefined4 param_1, int param_2, undefined4 param_3)
 */
int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  if ((param_2 == 0) && (DAT_10321c94 == 0)) {
    local_8 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_103237a0 != (code *)0x0) {
        local_8 = (*DAT_103237a0)(param_1,param_2,param_3);
      }
      if (local_8 != 0) {
        local_8 = FUN_100c1e30(param_1,param_2);
      }
      if (local_8 == 0) {
        return 0;
      }
    }
    local_8 = FUN_100d11d0();
    if ((param_2 == 1) && (local_8 == 0)) {
      FUN_100c1e30(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = FUN_100c1e30(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 0;
      }
      if ((local_8 != 0) && (DAT_103237a0 != (code *)0x0)) {
        local_8 = (*DAT_103237a0)(param_1,param_2,param_3);
      }
    }
  }
  return local_8;
}

/* 100c2070  __amsg_exit  (58 bytes)
 * void __amsg_exit(int param_1)
 * called by: FUN_100bba10, FUN_100bc4b0, FUN_100c4260, FUN_100c55e0, FUN_100c58f0, FUN_100c6060, FUN_100d0950, FUN_100d0aa0, __fptrap, copy_environ
 */
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10321ca0 == 1) || ((DAT_10321ca0 == 0 && (DAT_10321ca4 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_100d1230(param_1);
  (*(code *)PTR___exit_1028b650)(0xff);
  return;
}

/* 100c3240  __CrtSetReportFile  (126 bytes)
 * undefined4 __CrtSetReportFile(int param_1, int param_2)
 */
/* Library Function - Single Match
    __CrtSetReportFile
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __CrtSetReportFile(int param_1,int param_2)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xfffffffe;
  }
  else if (param_2 == -6) {
    uVar1 = *(undefined4 *)(&DAT_1028b66c + param_1 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_1028b66c + param_1 * 4);
    if (param_2 == -4) {
      pvVar2 = GetStdHandle(0xfffffff5);
      *(HANDLE *)(&DAT_1028b66c + param_1 * 4) = pvVar2;
    }
    else if (param_2 == -5) {
      pvVar2 = GetStdHandle(0xfffffff4);
      *(HANDLE *)(&DAT_1028b66c + param_1 * 4) = pvVar2;
    }
    else {
      *(int *)(&DAT_1028b66c + param_1 * 4) = param_2;
    }
  }
  return uVar1;
}

/* 100c3980  __setdefaultprecision  (23 bytes)
 * undefined __setdefaultprecision(void)
 * called by: FUN_100bb7e0, FUN_100d1810
 */
/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2003 Debug */

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}

/* 100c3a00  __ms_p5_mp_test_fdiv  (66 bytes)
 * undefined __ms_p5_mp_test_fdiv(void)
 * called by: FUN_100bb7e0
 */
/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if ((hModule != (HMODULE)0x0) &&
     (pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent"), pFVar1 != (FARPROC)0x0)) {
    (*pFVar1)(0);
    return;
  }
  FUN_100c39a0();
  return;
}

/* 100c3b00  __cropzeros  (215 bytes)
 * void __cropzeros(char * _Buf)
 */
/* Library Function - Single Match
    __cropzeros
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __cropzeros(char *_Buf)

{
  char *pcVar1;
  char *local_8;
  
  for (; (*_Buf != '\0' && (*_Buf != DAT_1028b640)); _Buf = _Buf + 1) {
  }
  if (*_Buf != '\0') {
    do {
      pcVar1 = _Buf;
      _Buf = pcVar1 + 1;
      if ((*_Buf == '\0') || (*_Buf == 'e')) break;
    } while (*_Buf != 'E');
    local_8 = _Buf;
    for (_Buf = pcVar1; *_Buf == '0'; _Buf = _Buf + -1) {
    }
    if (*_Buf == DAT_1028b640) {
      _Buf = _Buf + -1;
    }
    do {
      _Buf = _Buf + 1;
      *_Buf = *local_8;
      local_8 = local_8 + 1;
    } while (*_Buf != '\0');
  }
  return;
}

/* 100c3be0  __positive  (45 bytes)
 * int __positive(double * arg)
 */
/* Library Function - Single Match
    __positive
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl __positive(double *arg)

{
  uint local_8;
  
  local_8 = (uint)(0.0 <= *arg);
  return local_8;
}

/* 100c3c10  __fassign  (72 bytes)
 * void __fassign(int flag, char * argument, char * number)
 */
/* Library Function - Single Match
    __fassign
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FUN_100d2580(&local_10,(byte_conflict *)number);
    *(uint *)argument = local_10;
  }
  else {
    FUN_100d2500(&local_c,(byte_conflict *)number);
    *(uint *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}

/* 100c40f0  __cfltcvt  (95 bytes)
 * errno_t __cfltcvt(double * arg, char * buffer, size_t sizeInBytes, int format, int precision, int caps)
 */
/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    pcVar1 = FUN_100c3c60((undefined4 *)arg,buffer,format,precision);
  }
  else if (sizeInBytes == 0x66) {
    pcVar1 = FUN_100c3e50((undefined4 *)arg,buffer,format);
  }
  else {
    pcVar1 = (char *)FUN_100c4000((undefined4 *)arg,buffer,format,precision);
  }
  return (errno_t)pcVar1;
}

/* 100c4150  __shift  (46 bytes)
 * undefined __shift(char * param_1, int param_2)
 * called by: FUN_100c3ce0, FUN_100c3ec0
 */
/* Library Function - Single Match
    __shift
   
   Library: Visual Studio */

void __cdecl __shift(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_100bdc80((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}

/* 100c4490  __trandisp1  (103 bytes)
 * undefined __trandisp1(undefined4 param_1, int param_2)
 * called by: __cintrindisp1, __ctrandisp1
 */
/* Library Function - Single Match
    __trandisp1
   
   Library: Visual Studio */

void __fastcall __trandisp1(undefined4 param_1,int param_2)

{
  float10 fVar1;
  byte bVar2;
  undefined2 uVar3;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar3 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar3 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar3;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  bVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x100c44f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)(&DAT_1028b77c)[(byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0')] + 0x10
              ))();
  return;
}

/* 100c44f7  __trandisp2  (140 bytes)
 * undefined __trandisp2(undefined4 param_1, int param_2)
 * called by: __cintrindisp2, __ctrandisp2
 */
/* Library Function - Single Match
    __trandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __fastcall __trandisp2(undefined4 param_1,int param_2)

{
  float10 fVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar1) << 9 | (ushort)(in_ST1 != fVar1) << 10 |
       (ushort)(in_ST1 == fVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  cVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x100c4581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)((&DAT_1028b77c)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                               (&DAT_1028b77c)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2)
              + 0x10))();
  return;
}

/* 100c4677  __startOneArgErrorHandling  (60 bytes)
 * float10 __startOneArgErrorHandling(undefined4 param_1, uint param_2, ushort param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * called by: FUN_100bbfed, FUN_100be28d, FUN_100be33d, FUN_100c14ad, FUN_100c47a9, __math_exit
 */
/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __fastcall
__startOneArgErrorHandling
          (char *param_1,uint param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  _exception local_24;
  
  local_24.retval = (double)in_ST0;
  local_24.arg1._0_4_ = param_5;
  local_24.arg1._4_4_ = param_6;
  local_24.name = param_1;
  FUN_100d28c0(param_2,&local_24,&param_3);
  return (float10)local_24.retval;
}

/* 100c4705  __fload_withFB  (67 bytes)
 * uint __fload_withFB(undefined4 param_1, int param_2)
 * called by: FUN_100bbfe4, FUN_100be284, FUN_100be334, FUN_100c1289, FUN_100c14a4
 */
/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}

/* 100c476b  __math_exit  (42 bytes)
 * undefined __math_exit(undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: FUN_100bbfed, FUN_100be28d, FUN_100be33d, FUN_100c14ad
 */
/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __fastcall
__math_exit(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
           )

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
    return;
  }
  return;
}

/* 100c4ec0  ArrayUnwindFilter  (44 bytes)
 * int ArrayUnwindFilter(_EXCEPTION_POINTERS * param_1)
 * called by: FUN_100c4e59
 */
/* Library Function - Single Match
    int __cdecl ArrayUnwindFilter(struct _EXCEPTION_POINTERS *)
   
   Library: Visual Studio */

int __cdecl ArrayUnwindFilter(_EXCEPTION_POINTERS *param_1)

{
  if (param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) {
    FUN_100c57b0();
  }
  return 0;
}

/* 100c4ef0  CatchIt  (183 bytes)
 * void CatchIt(EHExceptionRecord * param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, void * param_4, _s_FuncInfo * param_5, _s_HandlerType * param_6, _s_CatchableType * param_7, _s_TryBlockMapEntry * param_8, int param_9, EHRegistrationNode * param_10, uchar param_11)
 * called by: FUN_100c4940, FUN_100c4be0
 */
/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (_s_CatchableType *)0x0) {
    FUN_100c5150((int)param_1,(int)param_2,&param_6->adjectives,(uint *)param_7);
  }
  if (param_10 == (EHRegistrationNode *)0x0) {
    FUN_100bc570(param_2,(PEXCEPTION_RECORD)param_1);
  }
  else {
    FUN_100bc570(param_10,(PEXCEPTION_RECORD)param_1);
  }
  FUN_100c4dc0((int)param_2,param_4,(int)param_5,param_8->tryLow);
  *(__ehstate_t *)(param_2 + 8) = param_8->tryHigh + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_100c4fb0((DWORD)param_1,param_2,(DWORD)param_3,param_5,param_6->addressOfHandler,param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_100bc500(UNRECOVERED_JUMPTABLE);
  }
  return;
}

/* 100c53d0  ___DestructExceptionObject  (111 bytes)
 * undefined ___DestructExceptionObject(int param_1)
 * called by: FUN_100c4940, FUN_100c508d
 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl ___DestructExceptionObject(int param_1)

{
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_102799b0;
  pcStack_10 = FUN_100c9368;
  local_14 = ExceptionList;
  if ((param_1 != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 4) != 0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    _CallMemberFunction0(*(void **)(param_1 + 0x18),*(void **)(*(int *)(param_1 + 0x1c) + 4));
  }
  ExceptionList = local_14;
  return;
}

/* 100c5460  FID_conflict:___AdjustPointer  (70 bytes)
 * int FID_conflict:___AdjustPointer(int param_1, int * param_2)
 * called by: FUN_100c5150
 */
/* Library Function - Multiple Matches With Different Base Names
    void * __cdecl AdjustPointer(void *,struct PMD const &)
    ___AdjustPointer
   
   Library: Visual Studio */

int __cdecl FID_conflict____AdjustPointer(int param_1,int *param_2)

{
  int local_8;
  
  local_8 = param_1 + *param_2;
  if (-1 < param_2[1]) {
    local_8 = local_8 + *(int *)(*(int *)(param_1 + param_2[1]) + param_2[2]) + param_2[1];
  }
  return local_8;
}

/* 100c54b0  __CallSettingFrame@12  (76 bytes)
 * undefined __CallSettingFrame@12(undefined4 param_1, undefined4 param_2, int param_3)
 * called by: FUN_100bc640, FUN_100c4dc0
 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}

/* 100c5ba0  __close_lk  (170 bytes)
 * undefined4 __close_lk(uint param_1)
 * called by: FUN_100c5b20
 */
/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  ulong local_8;
  
  iVar1 = FUN_100d3200(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100d3200(1);
      iVar2 = FUN_100d3200(2);
      if (iVar1 == iVar2) goto LAB_100c5bf3;
    }
    hObject = (HANDLE)FUN_100d3200(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_100c5c05;
    }
  }
LAB_100c5bf3:
  local_8 = 0;
LAB_100c5c05:
  FUN_100d3120(param_1);
  *(undefined1 *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

/* 100c5fa0  __dosmaperr  (145 bytes)
 * void __dosmaperr(ulong param_1)
 * called by: FUN_100c64c0, FUN_100c6800, FUN_100c71f0, FUN_100d3270, FUN_100d3560, __close_lk
 */
/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  uint local_8;
  
  pDVar1 = FUN_100c6050();
  *pDVar1 = param_1;
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          puVar2 = (undefined4 *)FUN_100c6040();
          *puVar2 = 0x16;
        }
        else {
          puVar2 = (undefined4 *)FUN_100c6040();
          *puVar2 = 8;
        }
      }
      else {
        puVar2 = (undefined4 *)FUN_100c6040();
        *puVar2 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_1028ba28 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  puVar2 = (undefined4 *)FUN_100c6040();
  *puVar2 = *(undefined4 *)(&DAT_1028ba2c + local_8 * 8);
  return;
}

/* 100c6390  __ioterm  (155 bytes)
 * void __ioterm(void)
 * called by: FUN_100c1e30
 */
/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio */

void __cdecl __ioterm(void)

{
  int local_c;
  uint local_8;
  
  for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
    if ((&DAT_10322300)[local_c] != 0) {
      for (local_8 = (&DAT_10322300)[local_c]; local_8 < (&DAT_10322300)[local_c] + 0x480;
          local_8 = local_8 + 0x24) {
        if (*(int *)(local_8 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(local_8 + 0xc));
        }
      }
      __free_dbg((void *)(&DAT_10322300)[local_c],2);
      (&DAT_10322300)[local_c] = 0;
    }
  }
  return;
}

/* 100c7470  _abort  (30 bytes)
 * void _abort(void)
 * called by: FUN_100bd710, _abort
 */
/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2003 Debug */

void __cdecl _abort(void)

{
  FUN_100d1230(10);
  FUN_100c7760(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}

/* 100c7ae0  __itoa  (66 bytes)
 * char * __itoa(int _Value, char * _Dest, int _Radix)
 * called by: FUN_100bd710, FUN_100c32e0, FUN_100d6eb0
 */
/* Library Function - Single Match
    __itoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  if ((_Radix == 10) && (_Value < 0)) {
    xtoa(_Value,_Dest,10,1);
  }
  else {
    xtoa(_Value,_Dest,_Radix,0);
  }
  return _Dest;
}

/* 100c7b30  xtoa  (194 bytes)
 * undefined xtoa(uint param_1, char * param_2, uint param_3, int param_4)
 * called by: __itoa, __ltoa, __ultoa
 */
/* Library Function - Single Match
    _xtoa
   
   Library: Visual Studio 2003 Debug */

void __cdecl xtoa(uint param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *local_c;
  char *local_8;
  
  local_8 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    local_8 = param_2 + 1;
    param_1 = -param_1;
  }
  local_c = local_8;
  do {
    pcVar2 = local_8;
    uVar3 = param_1 % param_3;
    param_1 = param_1 / param_3;
    cVar1 = (char)uVar3;
    if (uVar3 < 10) {
      *local_8 = cVar1 + '0';
    }
    else {
      *local_8 = cVar1 + 'W';
    }
    local_8 = local_8 + 1;
  } while (param_1 != 0);
  *local_8 = '\0';
  local_8 = pcVar2;
  do {
    cVar1 = *local_8;
    *local_8 = *local_c;
    *local_c = cVar1;
    local_8 = local_8 + -1;
    local_c = local_c + 1;
  } while (local_c < local_8);
  return;
}

/* 100c7c00  __ltoa  (63 bytes)
 * char * __ltoa(long _Value, char * _Dest, int _Radix)
 */
/* Library Function - Single Match
    __ltoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ltoa(long _Value,char *_Dest,int _Radix)

{
  undefined4 local_8;
  
  if ((_Radix == 10) && (_Value < 0)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  xtoa(_Value,_Dest,_Radix,local_8);
  return _Dest;
}

/* 100c7c40  __ultoa  (30 bytes)
 * char * __ultoa(ulong _Value, char * _Dest, int _Radix)
 */
/* Library Function - Single Match
    __ultoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Value,_Dest,_Radix,0);
  return _Dest;
}

/* 100c7c60  __i64toa  (72 bytes)
 * char * __i64toa(longlong _Val, char * _DstBuf, int _Radix)
 */
/* Library Function - Single Match
    __i64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __i64toa(longlong _Val,char *_DstBuf,int _Radix)

{
  int local_8;
  
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  x64toa(_Val,_DstBuf,_Radix,local_8);
  return _DstBuf;
}

/* 100c7cb0  x64toa  (242 bytes)
 * undefined x64toa(undefined8 param_1, char * param_2, uint param_3, int param_4)
 * called by: __i64toa, __ui64toa
 */
/* Library Function - Single Match
    _x64toa@20
   
   Library: Visual Studio 2003 Debug
   __stdcall x64toa,20 */

void x64toa(undefined8 param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_c;
  char *local_8;
  
  local_8 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    local_8 = param_2 + 1;
    param_1 = CONCAT44(-(param_1._4_4_ + ((uint)param_1 != 0)),-(uint)param_1);
  }
  local_c = local_8;
  do {
    pcVar2 = local_8;
    uVar4 = __aullrem((uint)param_1,param_1._4_4_,param_3,0);
    uVar5 = __aulldiv((uint)param_1,param_1._4_4_,param_3,0);
    if ((uint)uVar4 < 10) {
      *local_8 = (char)uVar4 + '0';
    }
    else {
      *local_8 = (char)uVar4 + 'W';
    }
    local_8 = local_8 + 1;
    param_1._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
    bVar3 = param_1._4_4_ != 0;
    param_1 = uVar5;
  } while ((bVar3) || (param_1._0_4_ = (uint)uVar5, bVar3 = (uint)param_1 != 0, bVar3));
  *local_8 = '\0';
  local_8 = pcVar2;
  do {
    cVar1 = *local_8;
    *local_8 = *local_c;
    *local_c = cVar1;
    local_8 = local_8 + -1;
    local_c = local_c + 1;
  } while (local_c < local_8);
  return;
}

/* 100c7db0  __ui64toa  (31 bytes)
 * char * __ui64toa(ulonglong _Val, char * _DstBuf, int _Radix)
 */
/* Library Function - Single Match
    __ui64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  x64toa(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}

/* 100c8000  __cintrindisp2  (62 bytes)
 * undefined __cintrindisp2(undefined4 param_1, int param_2)
 */
/* Library Function - Single Match
    __cintrindisp2
   
   Library: Visual Studio */

void __fastcall __cintrindisp2(undefined4 param_1,int param_2)

{
  __trandisp2(param_1,param_2);
  FUN_100c80ca();
  return;
}

/* 100c803e  __cintrindisp1  (61 bytes)
 * undefined __cintrindisp1(undefined4 param_1, int param_2)
 */
/* Library Function - Single Match
    __cintrindisp1
   
   Library: Visual Studio */

void __fastcall __cintrindisp1(undefined4 param_1,int param_2)

{
  __trandisp1(param_1,param_2);
  FUN_100c80ca();
  return;
}

/* 100c807b  __ctrandisp2  (72 bytes)
 * undefined __ctrandisp2(uint param_1, int param_2, uint param_3, int param_4)
 * called by: FUN_100bdb40, FUN_100c1560
 */
/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2(extraout_ECX,extraout_EDX);
  FUN_100c80c3();
  return;
}

/* 100c81fb  __ctrandisp1  (51 bytes)
 * undefined __ctrandisp1(uint param_1, int param_2)
 */
/* Library Function - Single Match
    __ctrandisp1
   
   Library: Visual Studio */

void __cdecl __ctrandisp1(uint param_1,int param_2)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __trandisp1(extraout_ECX,extraout_EDX);
  FUN_100c80c3();
  return;
}

/* 100c822e  __fload  (60 bytes)
 * float10 __fload(uint param_1, int param_2)
 * called by: __ctrandisp1, __ctrandisp2
 */
/* Library Function - Single Match
    __fload
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

float10 __cdecl __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}

/* 100c92f0  _set_new_handler  (48 bytes)
 * _func_int_uint * _set_new_handler(_func_int_uint * param_1)
 */
/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  FUN_100c4260(9);
  p_Var1 = DAT_10321d40;
  DAT_10321d40 = param_1;
  FUN_100c4300(9);
  return p_Var1;
}

/* 100c9330  __callnewh  (45 bytes)
 * int __callnewh(size_t _Size)
 * called by: FUN_100be698, FUN_100c9830, FUN_100c9a03, FUN_100c9c1a, __nh_malloc_base
 */
/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Debug */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_10321d40 != (code *)0x0) && (iVar1 = (*DAT_10321d40)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

/* 100c9440  __malloc_base  (32 bytes)
 * int __malloc_base(uint param_1)
 * called by: FUN_100c9830
 */
/* Library Function - Single Match
    __malloc_base
   
   Library: Visual Studio 2003 Debug */

int __cdecl __malloc_base(uint param_1)

{
  int iVar1;
  
  iVar1 = __nh_malloc_base(param_1,DAT_10321d3c);
  return iVar1;
}

/* 100c9460  __nh_malloc_base  (87 bytes)
 * int __nh_malloc_base(uint param_1, int param_2)
 * called by: __malloc_base
 */
/* Library Function - Single Match
    __nh_malloc_base
   
   Library: Visual Studio 2003 Debug */

int __cdecl __nh_malloc_base(uint param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  if (param_1 < 0xffffffe1) {
    do {
      if (param_1 < 0xffffffe1) {
        local_8 = __heap_alloc_base(param_1);
      }
      else {
        local_8 = 0;
      }
      if (local_8 != 0) {
        return local_8;
      }
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = __callnewh(param_1);
    } while (iVar1 != 0);
  }
  return 0;
}

/* 100c94c0  __heap_alloc_base  (101 bytes)
 * undefined __heap_alloc_base(uint param_1)
 * called by: FUN_100be6f0, __nh_malloc_base
 */
/* Library Function - Single Match
    __heap_alloc_base
   
   Library: Visual Studio 2003 Debug */

void __heap_alloc_base(uint param_1)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279af8;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  if (DAT_103222cc == 3) {
    if (param_1 <= DAT_103222fc) {
      ExceptionList = &pvStack_14;
      FUN_100c4260(9);
      local_8 = 0;
      FUN_100ca640(param_1);
      local_8 = 0xffffffff;
      FUN_100c9525();
      FUN_100c9530();
      return;
    }
    ExceptionList = &pvStack_14;
    FUN_100c95d1();
    return;
  }
  if (DAT_103222cc == 2) {
    if (param_1 == 0) {
      param_1 = 0x10;
    }
    else {
      param_1 = param_1 + 0xf & 0xfffffff0;
    }
    if (param_1 <= DAT_1028dd4c) {
      ExceptionList = &pvStack_14;
      FUN_100c4260(9);
      local_8 = 1;
      FUN_100cc0c0(param_1 >> 4);
      local_8 = 0xffffffff;
      FUN_100c95a7();
      FUN_100c95b2();
      return;
    }
    ExceptionList = &pvStack_14;
    HeapAlloc(DAT_103222bc,0,param_1);
  }
  else {
    if (param_1 == 0) {
      param_1 = 1;
    }
    ExceptionList = &pvStack_14;
    HeapAlloc(DAT_103222bc,0,param_1 + 0xf & 0xfffffff0);
  }
  ExceptionList = pvStack_14;
  return;
}

/* 100c9cd0  __heapchk  (98 bytes)
 * int __heapchk(void)
 * called by: FUN_100bf940, __heapset
 */
/* Library Function - Single Match
    __heapchk
   
   Library: Visual Studio 2003 Debug */

int __cdecl __heapchk(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  int local_20;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279b40;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  local_20 = -2;
  if (DAT_103222cc == 3) {
    ExceptionList = &pvStack_14;
    FUN_100c4260(9);
    local_8 = 0;
    FUN_100cb5a0();
    local_8 = 0xffffffff;
    FUN_100c9d32();
    iVar1 = thunk_FUN_100c9d82();
    return iVar1;
  }
  if (DAT_103222cc == 2) {
    ExceptionList = &pvStack_14;
    FUN_100c4260(9);
    local_8 = 1;
    FUN_100cc8a0();
    local_8 = 0xffffffff;
    FUN_100c9d77();
    iVar1 = FUN_100c9d82();
    return iVar1;
  }
  ExceptionList = &pvStack_14;
  BVar2 = HeapValidate(DAT_103222bc,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      pDVar4 = FUN_100c6050();
      *pDVar4 = 0x78;
      puVar5 = (undefined4 *)FUN_100c6040();
      *puVar5 = 0x28;
    }
    else {
      local_20 = -4;
    }
  }
  ExceptionList = pvStack_14;
  return local_20;
}

/* 100c9de0  __heapset  (10 bytes)
 * int __heapset(uint _Fill)
 */
/* Library Function - Single Match
    __heapset
   
   Library: Visual Studio 2003 Debug */

int __cdecl __heapset(uint _Fill)

{
  int iVar1;
  
  iVar1 = __heapchk();
  return iVar1;
}

/* 100c9f30  ___sbh_heap_init  (98 bytes)
 * bool ___sbh_heap_init(undefined4 param_1)
 * called by: FUN_100c9e20, FUN_100ccd70
 */
/* Library Function - Single Match
    ___sbh_heap_init
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

bool __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_103222f8 = HeapAlloc(DAT_103222bc,0,0x140);
  if (DAT_103222f8 != (LPVOID)0x0) {
    DAT_103222fc = param_1;
    DAT_103222f0 = 0;
    DAT_103222f4 = 0;
    DAT_103222d0 = 0x10;
    DAT_103222e8 = DAT_103222f8;
  }
  return DAT_103222f8 != (LPVOID)0x0;
}

/* 100ccef0  __allmul  (52 bytes)
 * longlong __allmul(uint param_1, int param_2, uint param_3, int param_4)
 * called by: FUN_100c0d50
 */
/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}

/* 100cdd10  __strcats  (79 bytes)
 * undefined __strcats(uint * param_1, int param_2)
 * called by: FUN_100cda70, ___lc_lctostr
 */
/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Debug */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    FUN_100bba30(param_1,(uint *)*local_8);
    local_8 = local_8 + 1;
  }
  return;
}

/* 100cdec0  ___lc_lctostr  (101 bytes)
 * undefined ___lc_lctostr(uint * param_1, uint * param_2)
 * called by: FUN_100cdb70
 */
/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___lc_lctostr(uint *param_1,uint *param_2)

{
  FUN_100bba20(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    __strcats(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    __strcats(param_1,2);
  }
  return;
}

/* 100cef00  __umatherr  (155 bytes)
 * float10 __umatherr(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * called by: FUN_100ce450, FUN_100ce4b0, FUN_100ce520, FUN_100ce5e0
 */
/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio */

float10 __cdecl
__umatherr(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  double dVar1;
  int iVar2;
  _exception local_24;
  
  local_24.name = __get_fname(param_2);
  if (local_24.name == (char *)0x0) {
    FUN_100cf390();
    FID_conflict___set_errno_from_matherr(param_1);
    dVar1 = (double)CONCAT44(param_8,param_7);
  }
  else {
    local_24.type = param_1;
    local_24.arg1._0_4_ = param_3;
    local_24.arg1._4_4_ = param_4;
    local_24.arg2._0_4_ = param_5;
    local_24.arg2._4_4_ = param_6;
    local_24.retval._0_4_ = param_7;
    local_24.retval._4_4_ = param_8;
    FUN_100cf390();
    iVar2 = __matherr(&local_24);
    if (iVar2 == 0) {
      FID_conflict___set_errno_from_matherr(param_1);
    }
    dVar1 = (double)CONCAT44(local_24.retval._4_4_,local_24.retval._0_4_);
  }
  return (float10)dVar1;
}

/* 100cefa0  FID_conflict:__set_errno_from_matherr  (58 bytes)
 * errno_t FID_conflict:__set_errno_from_matherr(int _Value)
 * called by: FUN_100ce520, FUN_100ce5e0, FUN_100d28c0, __umatherr
 */
/* Library Function - Multiple Matches With Different Base Names
    __set_errno
    __set_errno_from_matherr
   
   Library: Visual Studio */

errno_t __cdecl FID_conflict___set_errno_from_matherr(int _Value)

{
  if (_Value == 1) {
    _Value = FUN_100c6040();
    *(undefined4 *)_Value = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    _Value = FUN_100c6040();
    *(undefined4 *)_Value = 0x22;
  }
  return _Value;
}

/* 100cefe0  __get_fname  (63 bytes)
 * undefined * __get_fname(int param_1)
 * called by: __umatherr
 */
/* Library Function - Single Match
    __get_fname
   
   Library: Visual Studio */

undefined * __cdecl __get_fname(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x1a < local_8) {
      return (undefined *)0x0;
    }
    if (*(int *)(&DAT_1028df68 + local_8 * 8) == param_1) break;
    local_8 = local_8 + 1;
  }
  return (&PTR_DAT_1028df6c)[local_8 * 2];
}

/* 100d0890  __inc  (81 bytes)
 * uint __inc(int * param_1)
 * called by: FUN_100cf450, __whiteout
 */
/* Library Function - Single Match
    __inc
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __inc(int *param_1)

{
  uint local_8;
  
  param_1[1] = param_1[1] + -1;
  if (param_1[1] < 0) {
    local_8 = FUN_100c6580(param_1);
  }
  else {
    local_8 = (uint)*(byte *)*param_1;
    *param_1 = *param_1 + 1;
  }
  return local_8;
}

/* 100d0910  __whiteout  (57 bytes)
 * uint __whiteout(int * param_1, int * param_2)
 * called by: FUN_100cf450
 */
/* Library Function - Single Match
    __whiteout
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __whiteout(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = __inc(param_2);
    uVar2 = FUN_100c0fe0(uVar1);
  } while (uVar2 != 0);
  return uVar1;
}

/* 100d11e0  __FF_MSGBANNER  (73 bytes)
 * void __FF_MSGBANNER(void)
 * called by: __amsg_exit
 */
/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_10321ca0 == 1) || ((DAT_10321ca0 == 0 && (DAT_10321ca4 == 1)))) {
    FUN_100d1230(0xfc);
    if (DAT_10321e84 != (code *)0x0) {
      (*DAT_10321e84)();
    }
    FUN_100d1230(0xff);
  }
  return;
}

/* 100d13f0  __GET_RTERRMSG  (80 bytes)
 * wchar_t * __GET_RTERRMSG(int param_1)
 */
/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2003 Debug */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  wchar_t *pwVar1;
  uint local_8;
  
  for (local_8 = 0; (local_8 < 0x12 && (param_1 != *(int *)(&DAT_1028e090 + local_8 * 8)));
      local_8 = local_8 + 1) {
  }
  if (param_1 == *(int *)(&DAT_1028e090 + local_8 * 8)) {
    pwVar1 = (wchar_t *)(&PTR_s_R6002___floating_point_not_loade_1028e094)[local_8 * 2];
  }
  else {
    pwVar1 = (wchar_t *)0x0;
  }
  return pwVar1;
}

/* 100d1510  __isatty  (50 bytes)
 * int __isatty(int _FileHandle)
 * called by: FUN_100c20b0, FUN_100c9000
 */
/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_1032243c) {
    uVar1 = (int)*(char *)((&DAT_10322300)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) &
            0x40;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* 100d1670  __aulldiv  (104 bytes)
 * undefined8 __aulldiv(uint param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_100c2330, x64toa
 */
/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio 2003 Debug */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}

/* 100d16e0  __aullrem  (117 bytes)
 * undefined8 __aullrem(uint param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_100c2330, x64toa
 */
/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio 2003 Debug */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}

/* 100d17f0  __controlfp  (26 bytes)
 * uint __controlfp(uint _NewValue, uint _Mask)
 * called by: __setdefaultprecision
 */
/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = FUN_100d17a0(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}

/* 100d1e70  __IncMan  (168 bytes)
 * int __IncMan(int param_1, int param_2)
 * called by: FUN_100d1f20
 */
/* Library Function - Single Match
    __IncMan
   
   Library: Visual Studio */

int __cdecl __IncMan(int param_1,int param_2)

{
  int local_14;
  int local_10;
  
  local_10 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  local_14 = ___addl(*(uint *)(param_1 + local_10 * 4),1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f),
                     (uint *)(param_1 + local_10 * 4));
  while ((local_10 = local_10 + -1, -1 < local_10 && (local_14 != 0))) {
    local_14 = ___addl(*(uint *)(param_1 + local_10 * 4),1,(uint *)(param_1 + local_10 * 4));
  }
  return local_14;
}

/* 100d2000  __CopyMan  (76 bytes)
 * undefined __CopyMan(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_100d21b0
 */
/* Library Function - Single Match
    __CopyMan
   
   Library: Visual Studio */

void __cdecl __CopyMan(undefined4 *param_1,undefined4 *param_2)

{
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = param_2;
  local_c = param_1;
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *local_c = *local_8;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
  }
  return;
}

/* 100d2050  __FillZeroMan  (47 bytes)
 * undefined __FillZeroMan(int param_1)
 * called by: FUN_100d21b0
 */
/* Library Function - Single Match
    __FillZeroMan
   
   Library: Visual Studio */

void __cdecl __FillZeroMan(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + local_8 * 4) = 0;
  }
  return;
}

/* 100d2080  __IsZeroMan  (55 bytes)
 * undefined4 __IsZeroMan(int param_1)
 * called by: FUN_100d21b0
 */
/* Library Function - Single Match
    __IsZeroMan
   
   Library: Visual Studio */

undefined4 __cdecl __IsZeroMan(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 1;
    }
    if (*(int *)(param_1 + local_8 * 4) != 0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

/* 100d20c0  __ShrMan  (236 bytes)
 * undefined __ShrMan(int param_1, int param_2)
 * called by: FUN_100d21b0
 */
/* Library Function - Single Match
    __ShrMan
   
   Library: Visual Studio */

void __cdecl __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int local_10;
  uint local_c;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar3 = (byte)param_2 & 0x1f;
  local_c = 0;
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    uVar1 = *(uint *)(param_1 + local_10 * 4);
    *(uint *)(param_1 + local_10 * 4) = *(uint *)(param_1 + local_10 * 4) >> bVar3;
    *(uint *)(param_1 + local_10 * 4) = *(uint *)(param_1 + local_10 * 4) | local_c;
    local_c = (uVar1 & ~(-1 << bVar3)) << (0x20 - bVar3 & 0x1f);
  }
  for (local_10 = 2; -1 < local_10; local_10 = local_10 + -1) {
    if (local_10 < iVar2) {
      *(undefined4 *)(param_1 + local_10 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + local_10 * 4) = *(undefined4 *)(param_1 + (local_10 - iVar2) * 4);
    }
  }
  return;
}

/* 100d28b0  __fptrap  (15 bytes)
 * void __fptrap(void)
 * called by: FUN_100c2330, FUN_100cf450
 */
/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Debug */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}

/* 100d2b40  _ValidateExecute  (39 bytes)
 * int _ValidateExecute(_func_int * param_1)
 * called by: FUN_100c5150, FUN_100d2a40
 */
/* Library Function - Single Match
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl _ValidateExecute(_func_int *param_1)

{
  BOOL BVar1;
  uint local_8;
  
  BVar1 = IsBadCodePtr((FARPROC)param_1);
  local_8 = (uint)(BVar1 == 0);
  return local_8;
}

/* 100d2b70  __XcptFilter  (446 bytes)
 * int __XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2003 Debug */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int *piVar5;
  int iVar6;
  int local_18;
  
  pDVar4 = FUN_100c55e0();
  piVar5 = FUN_100d2d30(_ExceptionNum,(int *)pDVar4[0x14]);
  if ((piVar5 == (int *)0x0) || (piVar5[2] == 0)) {
    iVar6 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (piVar5[2] == 5) {
    piVar5[2] = 0;
    iVar6 = 1;
  }
  else if (piVar5[2] == 1) {
    iVar6 = -1;
  }
  else {
    pcVar1 = (code *)piVar5[2];
    DVar2 = pDVar4[0x15];
    pDVar4[0x15] = (DWORD)_ExceptionPtr;
    if (piVar5[1] == 8) {
      for (local_18 = DAT_1028e1c8; local_18 < DAT_1028e1c8 + _DAT_1028e1cc; local_18 = local_18 + 1
          ) {
        *(undefined4 *)(pDVar4[0x14] + 8 + local_18 * 0xc) = 0;
      }
      DVar3 = pDVar4[0x16];
      if (*piVar5 == -0x3fffff72) {
        pDVar4[0x16] = 0x83;
      }
      else if (*piVar5 == -0x3fffff70) {
        pDVar4[0x16] = 0x81;
      }
      else if (*piVar5 == -0x3fffff6f) {
        pDVar4[0x16] = 0x84;
      }
      else if (*piVar5 == -0x3fffff6d) {
        pDVar4[0x16] = 0x85;
      }
      else if (*piVar5 == -0x3fffff73) {
        pDVar4[0x16] = 0x82;
      }
      else if (*piVar5 == -0x3fffff71) {
        pDVar4[0x16] = 0x86;
      }
      else if (*piVar5 == -0x3fffff6e) {
        pDVar4[0x16] = 0x8a;
      }
      (*pcVar1)(8,pDVar4[0x16]);
      pDVar4[0x16] = DVar3;
    }
    else {
      piVar5[2] = 0;
      (*pcVar1)(piVar5[1]);
    }
    pDVar4[0x15] = DVar2;
    iVar6 = -1;
  }
  return iVar6;
}

/* 100d3060  __set_osfhnd  (183 bytes)
 * int __set_osfhnd(int param_1, intptr_t param_2)
 * called by: FUN_100d3270, FUN_100d3560
 */
/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  
  if (((uint)param_1 < DAT_1032243c) &&
     (*(int *)((&DAT_10322300)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) == -1)) {
    if (DAT_10321ca4 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)param_2);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)param_2);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)param_2);
      }
    }
    *(intptr_t *)((&DAT_10322300)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) = param_2;
    iVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_100c6040();
    *puVar2 = 9;
    pDVar3 = FUN_100c6050();
    *pDVar3 = 0;
    iVar1 = -1;
  }
  return iVar1;
}

/* 100d3410  __unlock_fhandle  (38 bytes)
 * void __unlock_fhandle(int _Filehandle)
 * called by: FUN_100c5b20, FUN_100c6430, FUN_100c6770, FUN_100c7160, FUN_100d3270, FUN_100d3440, FUN_100d3560, FUN_100d9040, FUN_100db720
 */
/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10322300)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}

/* 100d3520  FID_conflict:__open  (63 bytes)
 * int FID_conflict:__open(char * _Filename, int _OpenFlag, ...)
 */
/* Library Function - Multiple Matches With Different Base Names
    __open
    __wopen
   
   Library: Visual Studio 2003 Debug */

int __cdecl FID_conflict___open(char *_Filename,int _OpenFlag,...)

{
  uint uVar1;
  uint in_stack_0000000c;
  
  uVar1 = FUN_100d3560(_Filename,_OpenFlag,0x40,in_stack_0000000c);
  return uVar1;
}

/* 100d5320  __copysign  (42 bytes)
 * double __copysign(double _Number, double _Sign)
 * called by: FUN_100d9900
 */
/* Library Function - Single Match
    __copysign
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44(_Number._4_4_ & 0x7fffffff | _Sign._4_4_ & 0x80000000,_Number._0_4_);
}

/* 100d5350  __chgsign  (44 bytes)
 * double __chgsign(double _X)
 */
/* Library Function - Single Match
    __chgsign
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

double __cdecl __chgsign(double _X)

{
  return (double)CONCAT44(_X._4_4_ & 0x7fffffff | ~_X._4_4_ & 0x80000000,_X._0_4_);
}

/* 100d5970  ___init_time  (219 bytes)
 * int ___init_time(threadlocinfo * _LocInfo)
 */
/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_10321d68 == 0) {
    PTR_PTR_1028eb78 = (undefined *)&PTR_DAT_1028eb80;
    ___free_lc_time((int)DAT_10321f4c);
    __free_dbg(DAT_10321f4c,2);
    DAT_10321f4c = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = (int *)__calloc_dbg(1,0xac,2,"inittime.c",0x48);
    if (piVar1 == (int *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = FUN_100d5a50(piVar1);
      if (uVar3 == 0) {
        PTR_PTR_1028eb78 = (undefined *)piVar1;
        ___free_lc_time((int)DAT_10321f4c);
        __free_dbg(DAT_10321f4c,2);
        iVar2 = 0;
        DAT_10321f4c = piVar1;
      }
      else {
        ___free_lc_time((int)piVar1);
        __free_dbg(piVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}

/* 100d5fe0  ___free_lc_time  (779 bytes)
 * undefined ___free_lc_time(int param_1)
 * called by: ___init_time
 */
/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___free_lc_time(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    __free_dbg(*(void **)(param_1 + 4),2);
    __free_dbg(*(void **)(param_1 + 8),2);
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    __free_dbg(puVar1,2);
    __free_dbg((void *)puVar1[4],2);
    __free_dbg((void *)puVar1[5],2);
    __free_dbg((void *)puVar1[6],2);
    __free_dbg((void *)*puVar1,2);
    __free_dbg((void *)puVar1[8],2);
    __free_dbg((void *)puVar1[9],2);
    __free_dbg((void *)puVar1[10],2);
    __free_dbg((void *)puVar1[0xb],2);
    __free_dbg((void *)puVar1[0xc],2);
    __free_dbg((void *)puVar1[0xd],2);
    __free_dbg((void *)puVar1[7],2);
    __free_dbg((void *)puVar1[0xe],2);
    __free_dbg((void *)puVar1[0xf],2);
    __free_dbg((void *)puVar1[0x10],2);
    __free_dbg((void *)puVar1[0x11],2);
    __free_dbg((void *)puVar1[0x12],2);
    __free_dbg((void *)puVar1[0x13],2);
    __free_dbg((void *)puVar1[0x14],2);
    __free_dbg((void *)puVar1[0x15],2);
    __free_dbg((void *)puVar1[0x16],2);
    __free_dbg((void *)puVar1[0x17],2);
    __free_dbg((void *)puVar1[0x18],2);
    __free_dbg((void *)puVar1[0x19],2);
    __free_dbg((void *)puVar1[0x1a],2);
    __free_dbg((void *)puVar1[0x1b],2);
    __free_dbg((void *)puVar1[0x1c],2);
    __free_dbg((void *)puVar1[0x1d],2);
    __free_dbg((void *)puVar1[0x1e],2);
    __free_dbg((void *)puVar1[0x1f],2);
    __free_dbg((void *)puVar1[0x20],2);
    __free_dbg((void *)puVar1[0x21],2);
    __free_dbg((void *)puVar1[0x22],2);
    __free_dbg((void *)puVar1[0x23],2);
    __free_dbg((void *)puVar1[0x24],2);
    __free_dbg((void *)puVar1[0x25],2);
    __free_dbg((void *)puVar1[0x26],2);
    __free_dbg((void *)puVar1[0x27],2);
    __free_dbg((void *)puVar1[0x28],2);
    __free_dbg((void *)puVar1[0x29],2);
    __free_dbg((void *)puVar1[0x2a],2);
  }
  return;
}

/* 100d65a0  fix_grouping  (125 bytes)
 * undefined fix_grouping(char * param_1)
 * called by: FUN_100d62f0
 */
/* Library Function - Single Match
    _fix_grouping
   
   Library: Visual Studio */

void __cdecl fix_grouping(char *param_1)

{
  char *local_8;
  
  while (*param_1 != '\0') {
    if ((*param_1 < '0') || ('9' < *param_1)) {
      if (*param_1 == ';') {
        local_8 = param_1;
        do {
          *local_8 = local_8[1];
          local_8 = local_8 + 1;
        } while (*local_8 != '\0');
      }
      else {
        param_1 = param_1 + 1;
      }
    }
    else {
      *param_1 = *param_1 + -0x30;
      param_1 = param_1 + 1;
    }
  }
  return;
}

/* 100d6960  fix_grouping  (125 bytes)
 * undefined fix_grouping(char * param_1)
 * called by: FUN_100d6750
 */
/* Library Function - Single Match
    _fix_grouping
   
   Library: Visual Studio */

void __cdecl fix_grouping(char *param_1)

{
  char *local_8;
  
  while (*param_1 != '\0') {
    if ((*param_1 < '0') || ('9' < *param_1)) {
      if (*param_1 == ';') {
        local_8 = param_1;
        do {
          *local_8 = local_8[1];
          local_8 = local_8 + 1;
        } while (*local_8 != '\0');
      }
      else {
        param_1 = param_1 + 1;
      }
    }
    else {
      *param_1 = *param_1 + -0x30;
      param_1 = param_1 + 1;
    }
  }
  return;
}

/* 100d79d0  crtGetLocaleInfoA  (388 bytes)
 * int crtGetLocaleInfoA(uint param_1, uint param_2, char * param_3, int param_4)
 */
/* Library Function - Single Match
    _crtGetLocaleInfoA@16
   
   Library: Visual Studio 2003 Debug
   __stdcall crtGetLocaleInfoA,16 */

int crtGetLocaleInfoA(uint param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  int local_14;
  char *local_c;
  int local_8;
  
  local_14 = 0;
  local_8 = 0x1a;
  local_c = (char *)0x0;
  do {
    if (local_8 < local_14) {
LAB_100d7b38:
      iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = (local_14 + local_8) / 2;
    if (param_1 == *(uint *)(&DAT_1028e300 + iVar1 * 0x2c)) {
      if (param_2 < 0xc) {
        if (param_2 == 0xb) {
          local_c = &DAT_1028e31c + iVar1 * 0x2c;
        }
        else if (param_2 == 1) {
          local_c = &DAT_1028e304 + iVar1 * 0x2c;
        }
        else if (param_2 == 3) {
          local_c = &DAT_1028e310 + iVar1 * 0x2c;
        }
        else if (param_2 == 7) {
          local_c = &DAT_1028e318 + iVar1 * 0x2c;
        }
      }
      else if (param_2 == 0x1001) {
        local_c = (&PTR_s_Spanish___Traditional_Sort_1028e30c)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1002) {
        local_c = (&PTR_s_Spain_1028e314)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1004) {
        local_c = &DAT_1028e324 + iVar1 * 0x2c;
      }
      if ((local_c != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,local_c,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      goto LAB_100d7b38;
    }
    if (param_1 < *(uint *)(&DAT_1028e300 + iVar1 * 0x2c)) {
      local_8 = iVar1 + -1;
    }
    else {
      local_14 = iVar1 + 1;
    }
  } while( true );
}

/* 100d7be0  _GetPrimaryLen  (101 bytes)
 * int _GetPrimaryLen(char * param_1)
 * called by: FUN_100d7140, FUN_100d7530, FUN_100d78f0
 */
/* Library Function - Single Match
    _GetPrimaryLen
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

int __cdecl _GetPrimaryLen(char *param_1)

{
  int local_c;
  char local_8;
  
  local_c = 0;
  local_8 = *param_1;
  while (((param_1 = param_1 + 1, '@' < local_8 && (local_8 < '[')) ||
         (('`' < local_8 && (local_8 < '{'))))) {
    local_c = local_c + 1;
    local_8 = *param_1;
  }
  return local_c;
}

/* 100d7c50  __matherr  (7 bytes)
 * int __matherr(_exception * _Except)
 * called by: FUN_100d28c0, __umatherr
 */
/* Library Function - Single Match
    __matherr
   
   Library: Visual Studio */

int __cdecl __matherr(_exception *_Except)

{
  return 0;
}

/* 100d7e40  __allshl  (31 bytes)
 * longlong __allshl(byte.conflict param_1, int param_2)
 * called by: FUN_100cf450
 */
/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall __allshl(byte_conflict param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}

/* 100d8360  getSystemCP  (89 bytes)
 * UINT getSystemCP(UINT param_1)
 * called by: FUN_100d8010
 */
/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_10321fb0 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_10321fb0 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_10321fb0 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_10321fb0 = 1;
    param_1 = DAT_10321d6c;
  }
  return param_1;
}

/* 100d8440  setSBCS  (116 bytes)
 * undefined setSBCS(void)
 * called by: FUN_100d8010
 */
/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_103221a0)[local_8] = 0;
  }
  DAT_10322010 = 0;
  DAT_1032209c = 0;
  DAT_103222a4 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_10322090 + local_8 * 2) = 0;
  }
  return;
}

/* 100d8820  ___addl  (62 bytes)
 * undefined4 ___addl(uint param_1, uint param_2, uint * param_3)
 * called by: FUN_100d92f0, __IncMan, ___add_12
 */
/* Library Function - Single Match
    ___addl
   
   Library: Visual Studio 2012 Debug */

undefined4 __cdecl ___addl(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 local_c;
  
  local_c = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    local_c = 1;
  }
  *param_3 = uVar1;
  return local_c;
}

/* 100d8860  ___add_12  (173 bytes)
 * undefined ___add_12(uint * param_1, uint * param_2)
 * called by: FUN_100d89e0, FUN_100d8b20
 */
/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = ___addl(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = ___addl(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = ___addl(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  ___addl(param_1[2],param_2[2],param_1 + 2);
  return;
}

/* 100d8910  ___shl_12  (96 bytes)
 * undefined ___shl_12(uint * param_1)
 * called by: FUN_100d89e0, FUN_100d8b20, FUN_100d92f0
 */
/* Library Function - Single Match
    ___shl_12
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

void __cdecl ___shl_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_1 << 1;
  param_1[1] = param_1[1] << 1 | (uint)((uVar1 & 0x80000000) != 0);
  param_1[2] = param_1[2] << 1 | (uint)((uVar2 & 0x80000000) != 0);
  return;
}

/* 100d8970  ___shr_12  (99 bytes)
 * undefined ___shr_12(uint * param_1)
 * called by: FUN_100d8b20, FUN_100d92f0
 */
/* Library Function - Single Match
    ___shr_12
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

void __cdecl ___shr_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  param_1[2] = param_1[2] >> 1;
  param_1[1] = param_1[1] >> 1 | -(uint)((uVar1 & 1) != 0) & 0x80000000;
  *param_1 = *param_1 >> 1 | -(uint)((uVar2 & 1) != 0) & 0x80000000;
  return;
}

/* 100d9830  FID_conflict:__getenv_lk  (198 bytes)
 * char * FID_conflict:__getenv_lk(char * _VarName)
 * called by: FUN_100d46a0, FUN_100d9800
 */
/* Library Function - Multiple Matches With Different Base Names
    __getenv_lk
    _getenv
   
   Library: Visual Studio 2003 Debug */

char * __cdecl FID_conflict___getenv_lk(char *_VarName)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *local_c;
  
  local_c = DAT_10321c3c;
  if (DAT_103237b0 != 0) {
    if ((DAT_10321c3c == (int *)0x0) && (DAT_10321c44 != 0)) {
      iVar1 = FUN_100db8c0();
      if (iVar1 != 0) {
        return (char *)0x0;
      }
      local_c = DAT_10321c3c;
    }
    DAT_10321c3c = local_c;
    if ((local_c != (int *)0x0) && (_VarName != (char *)0x0)) {
      _MaxCount = _strlen(_VarName);
      for (; *local_c != 0; local_c = local_c + 1) {
        sVar2 = _strlen((char *)*local_c);
        if (((_MaxCount < sVar2) && (*(char *)(*local_c + _MaxCount) == '=')) &&
           (iVar1 = __mbsnbicoll((uchar *)*local_c,(uchar *)_VarName,_MaxCount), iVar1 == 0)) {
          return (char *)(*local_c + 1 + _MaxCount);
        }
      }
    }
  }
  return (char *)0x0;
}

/* 100da960  FID_conflict:_store_str  (72 bytes)
 * undefined FID_conflict:_store_str(char * param_1, int * param_2, int * param_3)
 * called by: FUN_100da340
 */
/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_str(char *,char * *,unsigned int *)
    __store_str
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl FID_conflict__store_str(char *param_1,int *param_2,int *param_3)

{
  while ((*param_3 != 0 && (*param_1 != '\0'))) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    param_1 = param_1 + 1;
    *param_3 = *param_3 + -1;
  }
  return;
}

/* 100daa60  FID_conflict:_store_number  (172 bytes)
 * undefined FID_conflict:_store_number(int param_1, int * param_2, uint * param_3)
 * called by: FUN_100da9b0
 */
/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_number(int,char * *,unsigned int *)
    __store_number
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl FID_conflict__store_number(int param_1,int *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  char *local_c;
  char *local_8;
  
  local_8 = (char *)*param_2;
  uVar2 = *param_3;
  while (1 < uVar2) {
    *local_8 = (char)(param_1 % 10) + '0';
    local_8 = local_8 + 1;
    *param_3 = *param_3 - 1;
    param_1 = param_1 / 10;
    if (param_1 < 1) break;
    uVar2 = *param_3;
  }
  local_c = (char *)*param_2;
  *param_2 = (int)local_8;
  local_8 = local_8 + -1;
  do {
    cVar1 = *local_8;
    *local_8 = *local_c;
    local_8 = local_8 + -1;
    *local_c = cVar1;
    local_c = local_c + 1;
  } while (local_c < local_8);
  return;
}

/* 100db870  __mbsnbicoll  (79 bytes)
 * int __mbsnbicoll(uchar * _Str1, uchar * _Str2, size_t _MaxCount)
 * called by: FID_conflict:__getenv_lk, findenv
 */
/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Debug */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_100dbcc0(DAT_103222a4,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_10322010);
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}

/* 100dc3f0  findenv  (124 bytes)
 * int findenv(uchar * param_1, size_t param_2)
 * called by: FUN_100dc110
 */
/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2003 Debug */

int __cdecl findenv(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = DAT_10321c3c;
  while( true ) {
    if (*local_8 == 0) {
      return -((int)local_8 - (int)DAT_10321c3c >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*local_8,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*local_8 + param_2) == '=' || (*(char *)(*local_8 + param_2) == '\0')))) break;
    local_8 = local_8 + 1;
  }
  return (int)local_8 - (int)DAT_10321c3c >> 2;
}

/* 100dc470  copy_environ  (238 bytes)
 * int * copy_environ(int * param_1)
 * called by: FUN_100dc110
 */
/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2003 Debug */

int * __cdecl copy_environ(int *param_1)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int local_14;
  int *local_10;
  int *local_c;
  
  local_14 = 0;
  local_10 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    while (iVar3 = *local_10, local_10 = local_10 + 1, iVar3 != 0) {
      local_14 = local_14 + 1;
    }
    piVar1 = (int *)__malloc_dbg(local_14 * 4 + 4,2,0x1027a918,0x146);
    if (piVar1 == (int *)0x0) {
      __amsg_exit(9);
    }
    local_c = piVar1;
    for (local_10 = param_1; *local_10 != 0; local_10 = local_10 + 1) {
      uVar6 = 0x14f;
      pcVar5 = "setenv.c";
      uVar4 = 2;
      sVar2 = _strlen((char *)*local_10);
      iVar3 = __malloc_dbg(sVar2 + 1,uVar4,(int)pcVar5,uVar6);
      *local_c = iVar3;
      if (*local_c != 0) {
        FUN_100bba20((uint *)*local_c,(uint *)*local_10);
      }
      local_c = local_c + 1;
    }
    *local_c = 0;
  }
  return piVar1;
}

/* 100e54f0  Unwind@100e54f0  (17 bytes)
 * undefined Unwind@100e54f0(void)
 */
void Unwind_100e54f0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10025ee0(*(undefined4 *)(unaff_EBP + -0x18),*(int *)(unaff_EBP + -0x10));
  return;
}

/* 100e5520  Unwind@100e5520  (11 bytes)
 * undefined Unwind@100e5520(void)
 */
void Unwind_100e5520(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x30));
  return;
}

/* 100e5540  Unwind@100e5540  (11 bytes)
 * undefined Unwind@100e5540(void)
 */
void Unwind_100e5540(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x34));
  return;
}

/* 100e5560  Unwind@100e5560  (11 bytes)
 * undefined Unwind@100e5560(void)
 */
void Unwind_100e5560(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x58));
  return;
}

/* 100e5580  Unwind@100e5580  (11 bytes)
 * undefined Unwind@100e5580(void)
 */
void Unwind_100e5580(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x7c));
  return;
}

/* 100e55a0  Unwind@100e55a0  (14 bytes)
 * undefined Unwind@100e55a0(void)
 */
void Unwind_100e55a0(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x84));
  return;
}

/* 100e55c0  Unwind@100e55c0  (11 bytes)
 * undefined Unwind@100e55c0(void)
 */
void Unwind_100e55c0(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x18));
  return;
}

/* 100e55cb  Unwind@100e55cb  (11 bytes)
 * undefined Unwind@100e55cb(void)
 */
void Unwind_100e55cb(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x20));
  return;
}

/* 100e55d6  Unwind@100e55d6  (11 bytes)
 * undefined Unwind@100e55d6(void)
 */
void Unwind_100e55d6(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x28));
  return;
}

/* 100e55e1  Unwind@100e55e1  (11 bytes)
 * undefined Unwind@100e55e1(void)
 */
void Unwind_100e55e1(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x30));
  return;
}

/* 100e55ec  Unwind@100e55ec  (11 bytes)
 * undefined Unwind@100e55ec(void)
 */
void Unwind_100e55ec(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x38));
  return;
}

/* 100e55f7  Unwind@100e55f7  (11 bytes)
 * undefined Unwind@100e55f7(void)
 */
void Unwind_100e55f7(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x40));
  return;
}

/* 100e5620  Unwind@100e5620  (11 bytes)
 * undefined Unwind@100e5620(void)
 */
void Unwind_100e5620(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x18));
  return;
}

/* 100e5640  Unwind@100e5640  (11 bytes)
 * undefined Unwind@100e5640(void)
 */
void Unwind_100e5640(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x18));
  return;
}

/* 100e5660  Unwind@100e5660  (11 bytes)
 * undefined Unwind@100e5660(void)
 */
void Unwind_100e5660(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x18));
  return;
}

/* 100e5680  Unwind@100e5680  (11 bytes)
 * undefined Unwind@100e5680(void)
 */
void Unwind_100e5680(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x18));
  return;
}

/* 100e56a0  Unwind@100e56a0  (9 bytes)
 * undefined Unwind@100e56a0(void)
 */
void Unwind_100e56a0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10037840(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}

/* 100e56c0  Unwind@100e56c0  (9 bytes)
 * undefined Unwind@100e56c0(void)
 */
void Unwind_100e56c0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10037840(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}

/* 100e56c9  Unwind@100e56c9  (15 bytes)
 * undefined Unwind@100e56c9(void)
 */
void Unwind_100e56c9(void)

{
  int unaff_EBP;
  
  thunk_FUN_10035a00(*(int *)(unaff_EBP + -0x10) + 0x177f8);
  return;
}

/* 100e56f0  Unwind@100e56f0  (11 bytes)
 * undefined Unwind@100e56f0(void)
 */
void Unwind_100e56f0(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x20));
  return;
}

/* 100e56fb  Unwind@100e56fb  (11 bytes)
 * undefined Unwind@100e56fb(void)
 */
void Unwind_100e56fb(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x28));
  return;
}

/* 100e5706  Unwind@100e5706  (11 bytes)
 * undefined Unwind@100e5706(void)
 */
void Unwind_100e5706(void)

{
  int unaff_EBP;
  
  FUN_100bbb10(*(void **)(unaff_EBP + -0x30));
  return;
}

