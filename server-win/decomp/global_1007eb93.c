/* mp.dll - global_1007eb93 (46 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007eb93  __fassign  (62 bytes)
 * void __fassign(int flag, char * argument, char * number)
 */
/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_10085a19(in_ECX,(uint *)&local_c,(byte_conflict *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_10085a46(in_ECX,(uint *)&number,(byte_conflict *)number);
  *(char **)argument = number;
  return;
}

/* 1007ee83  __cfltcvt  (81 bytes)
 * errno_t __cfltcvt(double * arg, char * buffer, size_t sizeInBytes, int format, int precision, int caps)
 */
/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_1007ebd1(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_1007ecf4(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_1007edf0(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}

/* 1007ef80  _strlen  (123 bytes)
 * size_t _strlen(char * _Str)
 * called by: FUN_1007eed4, FUN_1007fbf7, FUN_10084e23, FUN_10085294, FUN_10085a73, atof, sscanf
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
    if (((uint)puVar2 & 3) == 0) goto LAB_1007efa0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1007efd3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1007efa0:
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
  goto LAB_1007efd3;
}

/* 1007f000  __allmul  (52 bytes)
 * longlong __allmul(uint param_1, int param_2, uint param_3, int param_4)
 * called by: FUN_10080401
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

/* 1007f850  __CallSettingFrame@12  (76 bytes)
 * undefined __CallSettingFrame@12(undefined4 param_1, undefined4 param_2, int param_3)
 * called by: FUN_1007d4eb, FUN_1007f389
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

/* 10080f90  __cintrindisp2  (62 bytes)
 * undefined __cintrindisp2(undefined4 param_1, int param_2)
 * called by: FUN_1007dc8a
 */
/* Library Function - Single Match
    __cintrindisp2
   
   Library: Visual Studio */

void __fastcall __cintrindisp2(undefined4 param_1,int param_2)

{
  __trandisp2(param_1,param_2);
  FUN_1008105a();
  return;
}

/* 10080fce  __cintrindisp1  (61 bytes)
 * undefined __cintrindisp1(undefined4 param_1, int param_2)
 */
/* Library Function - Single Match
    __cintrindisp1
   
   Library: Visual Studio */

void __fastcall __cintrindisp1(undefined4 param_1,int param_2)

{
  __trandisp1(param_1,param_2);
  FUN_1008105a();
  return;
}

/* 1008100b  __ctrandisp2  (72 bytes)
 * undefined __ctrandisp2(uint param_1, int param_2, uint param_3, int param_4)
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
  FUN_10081053();
  return;
}

/* 1008118b  __ctrandisp1  (51 bytes)
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
  FUN_10081053();
  return;
}

/* 100811be  __fload  (60 bytes)
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

/* 10081200  __trandisp1  (103 bytes)
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
                    /* WARNING: Could not recover jumptable at 0x10081265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)(&DAT_100a839c)[(byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0')] + 0x10
              ))();
  return;
}

/* 10081267  __trandisp2  (140 bytes)
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
                    /* WARNING: Could not recover jumptable at 0x100812f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)((&DAT_100a839c)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                               (&DAT_100a839c)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2)
              + 0x10))();
  return;
}

/* 1008215b  _malloc  (18 bytes)
 * void * _malloc(size_t _Size)
 * called by: FUN_1007dd50, FUN_10082305, FUN_10082ab6, FUN_100834b2, FUN_10084c13, FUN_10084e23, FUN_10084edc, FUN_10085129, FUN_1008673b, FUN_10086ecb, FUN_10088b16
 */
/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_102efd04);
  return pvVar1;
}

/* 1008216d  __nh_malloc  (44 bytes)
 * void * __nh_malloc(size_t _Size, int _NhFlag)
 * called by: _malloc, operator_new
 */
/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_10082199((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10084008(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}

/* 10082214  __exit  (17 bytes)
 * void __exit(int _Code)
 * called by: FUN_10086724, FUN_1008798b, __amsg_exit
 */
/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10082234(_Code,1,0);
  return;
}

/* 100826b7  __startOneArgErrorHandling  (60 bytes)
 * float10 __startOneArgErrorHandling(undefined4 param_1, uint param_2, ushort param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * called by: FUN_1007dfdd, FUN_100827e9, __math_exit
 */
/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,uint param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  FUN_10086b0d(param_2,&local_24,&param_3);
  return (float10)local_c;
}

/* 10082745  __fload_withFB  (67 bytes)
 * uint __fload_withFB(undefined4 param_1, int param_2)
 * called by: FUN_1007ddb2
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

/* 100827ab  __math_exit  (42 bytes)
 * undefined __math_exit(undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: FUN_1007dfdd
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

/* 10083104  __freebuf  (43 bytes)
 * void __freebuf(FILE * _File)
 * called by: __fclose_lk
 */
/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_1007e869(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}

/* 10083fb0  _memset  (88 bytes)
 * void * _memset(void * _Dst, int _Val, size_t _Size)
 * called by: FUN_1007e7dc, FUN_1007ed49, FUN_10080401, FUN_10082d7b, FUN_10088981
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

/* 10086025  __fptrap  (9 bytes)
 * void __fptrap(void)
 * called by: FUN_1007fbf7, FUN_10080401
 */
/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}

/* 100865c0  _strcmp  (129 bytes)
 * int _strcmp(char * _Str1, char * _Str2)
 * called by: FUN_1007f32c
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
      if (bVar4 != *_Str2) goto LAB_10086604;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100865d0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10086604;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10086604;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100865d0:
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
LAB_10086604:
  return (uint)bVar5 * -2 + 1;
}

/* 10086870  __aulldiv  (104 bytes)
 * undefined8 __aulldiv(uint param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_1007fbf7
 */
/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

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

/* 100868e0  __aullrem  (117 bytes)
 * undefined8 __aullrem(uint param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_1007fbf7
 */
/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

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

/* 10086a80  __allshl  (31 bytes)
 * longlong __allshl(byte.conflict param_1, int param_2)
 * called by: FUN_10080401
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

/* 10086d21  __frnd  (18 bytes)
 * float10 __frnd(double param_1)
 * called by: FUN_100829bc
 */
/* Library Function - Single Match
    __frnd
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

float10 __cdecl __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}

/* 10087b6b  ___add_12  (94 bytes)
 * undefined ___add_12(uint * param_1, uint * param_2)
 * called by: FUN_10087c24, FUN_10087ceb
 */
/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10087b4a(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_10087b4a(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_10087b4a(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_10087b4a(param_1[2],param_2[2],param_1 + 2);
  return;
}

/* 10088c50  Unwind@10088c50  (8 bytes)
 * undefined Unwind@10088c50(void)
 */
void Unwind_10088c50(void)

{
  int unaff_EBP;
  
  CBaseEntity::SUB_DoNothing((CBaseEntity *)(unaff_EBP + 4));
  return;
}

/* 10088c70  Unwind@10088c70  (11 bytes)
 * undefined Unwind@10088c70(void)
 */
void Unwind_10088c70(void)

{
  int unaff_EBP;
  
  CBaseEntity::SUB_DoNothing((CBaseEntity *)(unaff_EBP + -0x304));
  return;
}

/* 10088c7b  Unwind@10088c7b  (11 bytes)
 * undefined Unwind@10088c7b(void)
 */
void Unwind_10088c7b(void)

{
  int unaff_EBP;
  
  CBaseEntity::SUB_DoNothing((CBaseEntity *)(unaff_EBP + -0x2f8));
  return;
}

/* 10088c90  Unwind@10088c90  (8 bytes)
 * undefined Unwind@10088c90(void)
 */
void Unwind_10088c90(void)

{
  int unaff_EBP;
  
  CBaseEntity::SUB_DoNothing((CBaseEntity *)(unaff_EBP + 4));
  return;
}

/* 10088cb0  Unwind@10088cb0  (8 bytes)
 * undefined Unwind@10088cb0(void)
 */
void Unwind_10088cb0(void)

{
  int unaff_EBP;
  
  CBaseEntity::SUB_DoNothing((CBaseEntity *)(unaff_EBP + -0x18));
  return;
}

/* 10088cd0  Unwind@10088cd0  (17 bytes)
 * undefined Unwind@10088cd0(void)
 */
void Unwind_10088cd0(void)

{
  int unaff_EBP;
  
  FUN_100126d0(*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 4));
  return;
}

/* 10088cf0  Unwind@10088cf0  (17 bytes)
 * undefined Unwind@10088cf0(void)
 */
void Unwind_10088cf0(void)

{
  int unaff_EBP;
  
  FUN_100126d0(*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 4));
  return;
}

/* 10088d10  Unwind@10088d10  (17 bytes)
 * undefined Unwind@10088d10(void)
 */
void Unwind_10088d10(void)

{
  int unaff_EBP;
  
  FUN_100126d0(*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 4));
  return;
}

/* 10088d30  Unwind@10088d30  (17 bytes)
 * undefined Unwind@10088d30(void)
 */
void Unwind_10088d30(void)

{
  int unaff_EBP;
  
  FUN_100126d0(*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 4));
  return;
}

/* 10088d50  Unwind@10088d50  (17 bytes)
 * undefined Unwind@10088d50(void)
 */
void Unwind_10088d50(void)

{
  int unaff_EBP;
  
  FUN_100126d0(*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 4));
  return;
}

/* 10088d70  Unwind@10088d70  (11 bytes)
 * undefined Unwind@10088d70(void)
 */
void Unwind_10088d70(void)

{
  int unaff_EBP;
  
  FUN_1007dd7f(*(LPVOID *)(unaff_EBP + -0x10));
  return;
}

/* 10088d7b  Unwind@10088d7b  (11 bytes)
 * undefined Unwind@10088d7b(void)
 */
void Unwind_10088d7b(void)

{
  int unaff_EBP;
  
  FUN_1007dd7f(*(LPVOID *)(unaff_EBP + -0x10));
  return;
}

/* 10088d86  Unwind@10088d86  (11 bytes)
 * undefined Unwind@10088d86(void)
 */
void Unwind_10088d86(void)

{
  int unaff_EBP;
  
  FUN_1007dd7f(*(LPVOID *)(unaff_EBP + -0x10));
  return;
}

/* 10088d91  Unwind@10088d91  (11 bytes)
 * undefined Unwind@10088d91(void)
 */
void Unwind_10088d91(void)

{
  int unaff_EBP;
  
  FUN_1007dd7f(*(LPVOID *)(unaff_EBP + -0x10));
  return;
}

/* 10088db0  Unwind@10088db0  (17 bytes)
 * undefined Unwind@10088db0(void)
 */
void Unwind_10088db0(void)

{
  int unaff_EBP;
  
  FUN_100126d0(*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 4));
  return;
}

/* 10088dd0  Unwind@10088dd0  (11 bytes)
 * undefined Unwind@10088dd0(void)
 */
void Unwind_10088dd0(void)

{
  int unaff_EBP;
  
  CBaseEntity::SUB_DoNothing((CBaseEntity *)(unaff_EBP + -0x1010));
  return;
}

/* 10088df0  Unwind@10088df0  (17 bytes)
 * undefined Unwind@10088df0(void)
 */
void Unwind_10088df0(void)

{
  int unaff_EBP;
  
  FUN_100126d0(*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 4));
  return;
}

/* 10088e10  Unwind@10088e10  (8 bytes)
 * undefined Unwind@10088e10(void)
 */
void Unwind_10088e10(void)

{
  int unaff_EBP;
  
  CBaseEntity::SUB_DoNothing((CBaseEntity *)(unaff_EBP + 4));
  return;
}

/* 10088e30  Unwind@10088e30  (8 bytes)
 * undefined Unwind@10088e30(void)
 */
void Unwind_10088e30(void)

{
  int unaff_EBP;
  
  CBaseEntity::SUB_DoNothing((CBaseEntity *)(unaff_EBP + -0x18));
  return;
}

