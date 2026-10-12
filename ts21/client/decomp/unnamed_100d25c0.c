/* client.dll - unnamed_100d25c0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100d25c0  FUN_100d25c0  (250 bytes)
 * undefined FUN_100d25c0(char * param_1, int param_2, int param_3)
 * called by: FUN_100c3c60, FUN_100c3e50, FUN_100c4000
 */
void __cdecl FUN_100d25c0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *local_c;
  char *local_8;
  
  local_c = *(char **)(param_3 + 0xc);
  *param_1 = '0';
  pcVar2 = param_1;
  for (; local_8 = pcVar2 + 1, 0 < param_2; param_2 = param_2 + -1) {
    if (*local_c == '\0') {
      cVar1 = '0';
    }
    else {
      cVar1 = *local_c;
      local_c = local_c + 1;
    }
    *local_8 = cVar1;
    pcVar2 = local_8;
  }
  *local_8 = '\0';
  if ((-1 < param_2) && (local_8 = pcVar2, '4' < *local_c)) {
    for (; *local_8 == '9'; local_8 = local_8 + -1) {
      *local_8 = '0';
    }
    *local_8 = *local_8 + '\x01';
  }
  if (*param_1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(param_1 + 1);
    FUN_100bdc80((undefined4 *)param_1,(undefined4 *)(param_1 + 1),sVar3 + 1);
  }
  return;
}

/* 100d26c0  FUN_100d26c0  (119 bytes)
 * int * FUN_100d26c0(undefined4 param_1, undefined4 param_2, int * param_3, uint * param_4)
 * called by: FUN_100c3c60, FUN_100c3e50, FUN_100c4000
 */
int * __cdecl FUN_100d26c0(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int iVar1;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint local_c;
  ushort local_8;
  
  FUN_100d2740(&local_10,&param_1);
  iVar1 = FUN_100d8b20(local_10,local_c,local_8,0x11,0,&local_2c);
  param_3[2] = iVar1;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_100bba20(param_4,local_28);
  param_3[3] = (int)param_4;
  return param_3;
}

/* 100d2740  FUN_100d2740  (354 bytes)
 * undefined FUN_100d2740(uint * param_1, uint * param_2)
 * called by: FUN_100d26c0
 */
void __cdecl FUN_100d2740(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  short local_18;
  uint local_10;
  
  local_10 = 0x80000000;
  iVar3 = (int)(*(ushort *)((int)param_2 + 6) & 0x7ff0) >> 4;
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar2 = *param_2;
  local_18 = (short)iVar3;
  if (iVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    uVar4 = 0x3c01;
    local_10 = 0;
  }
  else if (iVar3 == 0x7ff) {
    uVar4 = 0x7fff;
  }
  else {
    uVar4 = local_18 + 0x3c00;
  }
  param_1[1] = local_10 | (param_2[1] & 0xfffff) << 0xb | uVar2 >> 0x15;
  *param_1 = uVar2 << 0xb;
  while ((param_1[1] & 0x80000000) == 0) {
    param_1[1] = param_1[1] << 1 | (uint)((*param_1 & 0x80000000) != 0);
    *param_1 = *param_1 << 1;
    uVar4 = uVar4 - 1;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | uVar4;
  return;
}

/* 100d28c0  FUN_100d28c0  (348 bytes)
 * undefined FUN_100d28c0(uint param_1, _exception * param_2, ushort * param_3)
 * called by: FUN_100c80ca, __startOneArgErrorHandling
 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_100d28c0(uint param_1,_exception *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_6c [10];
  undefined4 local_44;
  undefined4 local_40;
  uint local_34;
  uint local_14;
  uint *local_10;
  int local_c;
  uint local_8;
  
  local_14 = (uint)*param_3;
  local_10 = &local_14;
  switch(param_2->type) {
  case 1:
  case 5:
    local_8 = 8;
    break;
  case 2:
    local_8 = 4;
    break;
  case 3:
    local_8 = 0x11;
    break;
  case 4:
    local_8 = 0x12;
    break;
  case 7:
    param_2->type = 1;
  default:
    local_8 = 0;
    break;
  case 8:
    local_8 = 0x10;
  }
  if ((local_8 != 0) &&
     (bVar1 = FUN_100ceb80(local_8,&param_2->retval,local_14), CONCAT31(extraout_var,bVar1) == 0)) {
    if ((param_1 == 0x10) || ((param_1 == 0x16 || (param_1 == 0x1d)))) {
      local_34 = local_34 & 0xffffffe1 | 3;
      local_44 = *(undefined4 *)&param_2->arg2;
      local_40 = *(undefined4 *)((int)&param_2->arg2 + 4);
    }
    else {
      local_34 = local_34 & 0xfffffffe;
    }
    FUN_100ce6b0(local_6c,local_10,local_8,param_1,(uint *)&param_2->arg1,(uint *)&param_2->retval);
  }
  FUN_100cf390();
  local_c = 0;
  if ((param_2->type != 8) && (DAT_1028ea78 == 0)) {
    local_c = __matherr(param_2);
  }
  if (local_c == 0) {
    FID_conflict___set_errno_from_matherr(param_2->type);
  }
  return;
}

/* 100d2a40  FUN_100d2a40  (91 bytes)
 * int FUN_100d2a40(int * param_1)
 */
int FUN_100d2a40(int *param_1)

{
  int iVar1;
  
  if (((*(int *)*param_1 == -0x1f928c9d) && (*(int *)(*param_1 + 0x10) == 3)) &&
     (*(int *)(*param_1 + 0x14) == 0x19930520)) {
    FUN_100c57b0();
  }
  if ((DAT_10321e88 != (_func_int *)0x0) && (iVar1 = _ValidateExecute(DAT_10321e88), iVar1 != 0)) {
    iVar1 = (*DAT_10321e88)(param_1);
    return iVar1;
  }
  return 0;
}

/* 100d2aa0  FUN_100d2aa0  (21 bytes)
 * undefined FUN_100d2aa0(void)
 */
void FUN_100d2aa0(void)

{
  DAT_10321e88 = SetUnhandledExceptionFilter(FUN_100d2a40);
  return;
}

/* 100d2ac0  FUN_100d2ac0  (17 bytes)
 * undefined FUN_100d2ac0(void)
 */
void FUN_100d2ac0(void)

{
  SetUnhandledExceptionFilter(DAT_10321e88);
  return;
}

/* 100d2ae0  FUN_100d2ae0  (43 bytes)
 * bool FUN_100d2ae0(void * param_1, UINT_PTR param_2)
 * called by: FUN_100c4940, FUN_100c5150
 */
bool __cdecl FUN_100d2ae0(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}

/* 100d2b10  FUN_100d2b10  (43 bytes)
 * bool FUN_100d2b10(LPVOID param_1, UINT_PTR param_2)
 * called by: FUN_100c5150
 */
bool __cdecl FUN_100d2b10(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}

/* 100d2d30  FUN_100d2d30  (89 bytes)
 * int * FUN_100d2d30(int param_1, int * param_2)
 * called by: __XcptFilter
 */
int * __cdecl FUN_100d2d30(int param_1,int *param_2)

{
  int *local_8;
  
  local_8 = param_2;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < param_2 + DAT_1028e1d4 * 3);
  if ((param_2 + DAT_1028e1d4 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}

/* 100d2d90  FUN_100d2d90  (218 bytes)
 * int FUN_100d2d90(void)
 * called by: FUN_100c5a20
 */
int FUN_100d2d90(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_100c4260(2);
  for (local_c = 3; local_c < DAT_10323780; local_c = local_c + 1) {
    if (*(int *)(DAT_10322440 + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_10322440 + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = FUN_100bc9d0(*(undefined ***)(DAT_10322440 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10322440 + local_c * 4) + 0x20));
        __free_dbg(*(void **)(DAT_10322440 + local_c * 4),2);
        *(undefined4 *)(DAT_10322440 + local_c * 4) = 0;
      }
    }
  }
  FUN_100c4300(2);
  return local_8;
}

/* 100d2e70  FUN_100d2e70  (482 bytes)
 * uint FUN_100d2e70(void)
 * called by: FUN_100d3270, FUN_100d3560
 */
uint FUN_100d2e70(void)

{
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0xffffffff;
  FUN_100c4260(0x12);
  local_10 = 0;
  do {
    if (0x3f < local_10) {
LAB_100d3040:
      FUN_100c4300(0x12);
      return local_c;
    }
    if ((&DAT_10322300)[local_10] == 0) {
      local_8 = (undefined4 *)__malloc_dbg(0x480,2,0x10279fac,0x79);
      if (local_8 != (undefined4 *)0x0) {
        (&DAT_10322300)[local_10] = local_8;
        DAT_1032243c = DAT_1032243c + 0x20;
        for (; local_8 < (undefined4 *)((&DAT_10322300)[local_10] + 0x480); local_8 = local_8 + 9) {
          *(undefined1 *)(local_8 + 1) = 0;
          *local_8 = 0xffffffff;
          *(undefined1 *)((int)local_8 + 5) = 10;
          local_8[2] = 0;
        }
        local_c = local_10 << 5;
        FUN_100d3380(local_c);
      }
      goto LAB_100d3040;
    }
    for (local_8 = (undefined4 *)(&DAT_10322300)[local_10];
        local_8 < (undefined4 *)((&DAT_10322300)[local_10] + 0x480); local_8 = local_8 + 9) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        if (local_8[2] == 0) {
          FUN_100c4260(0x11);
          if (local_8[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
            local_8[2] = local_8[2] + 1;
          }
          FUN_100c4300(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
        if ((*(byte *)(local_8 + 1) & 1) == 0) {
          *local_8 = 0xffffffff;
          local_c = local_10 * 0x20 + ((int)local_8 - (&DAT_10322300)[local_10]) / 0x24;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
      }
    }
    if (local_c != 0xffffffff) goto LAB_100d3040;
    local_10 = local_10 + 1;
  } while( true );
}

/* 100d3120  FUN_100d3120  (216 bytes)
 * undefined4 FUN_100d3120(uint param_1)
 * called by: __close_lk
 */
undefined4 __cdecl FUN_100d3120(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  
  if (((param_1 < DAT_1032243c) &&
      (iVar4 = (int)param_1 >> 5,
      (*(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) &&
     (*(int *)((&DAT_10322300)[iVar4] + (param_1 & 0x1f) * 0x24) != -1)) {
    if (DAT_10321ca4 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)0x0);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)0x0);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)0x0);
      }
    }
    *(undefined4 *)((&DAT_10322300)[iVar4] + (param_1 & 0x1f) * 0x24) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_100c6040();
    *puVar2 = 9;
    pDVar3 = FUN_100c6050();
    *pDVar3 = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* 100d3200  FUN_100d3200  (102 bytes)
 * undefined4 FUN_100d3200(uint param_1)
 * called by: FUN_100c64c0, FUN_100d3440, FUN_100d90c0, __close_lk
 */
undefined4 __cdecl FUN_100d3200(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  
  if ((param_1 < DAT_1032243c) &&
     ((*(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    uVar3 = *(undefined4 *)((&DAT_10322300)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  else {
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 9;
    pDVar2 = FUN_100c6050();
    *pDVar2 = 0;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* 100d3270  FUN_100d3270  (260 bytes)
 * uint FUN_100d3270(HANDLE param_1, uint param_2)
 */
uint __cdecl FUN_100d3270(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint _Filehandle;
  undefined4 *puVar2;
  DWORD *pDVar3;
  byte local_10;
  
  local_10 = 0;
  if ((param_2 & 8) != 0) {
    local_10 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    local_10 = local_10 | 0x80;
  }
  if ((param_2 & 0x80) != 0) {
    local_10 = local_10 | 0x10;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
    _Filehandle = 0xffffffff;
  }
  else {
    if (DVar1 == 2) {
      local_10 = local_10 | 0x40;
    }
    else if (DVar1 == 3) {
      local_10 = local_10 | 8;
    }
    _Filehandle = FUN_100d2e70();
    if (_Filehandle == 0xffffffff) {
      puVar2 = (undefined4 *)FUN_100c6040();
      *puVar2 = 0x18;
      pDVar3 = FUN_100c6050();
      *pDVar3 = 0;
      _Filehandle = 0xffffffff;
    }
    else {
      __set_osfhnd(_Filehandle,(intptr_t)param_1);
      *(byte *)((&DAT_10322300)[(int)_Filehandle >> 5] + 4 + (_Filehandle & 0x1f) * 0x24) =
           local_10 | 1;
      __unlock_fhandle(_Filehandle);
    }
  }
  return _Filehandle;
}

/* 100d3380  FUN_100d3380  (134 bytes)
 * undefined FUN_100d3380(uint param_1)
 * called by: FUN_100c5b20, FUN_100c6430, FUN_100c6770, FUN_100c7160, FUN_100d2e70, FUN_100d3440, FUN_100d9040, FUN_100db720
 */
void __cdecl FUN_100d3380(uint param_1)

{
  int iVar1;
  
  iVar1 = (&DAT_10322300)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_100c4260(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_100c4300(0x11);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10322300)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

/* 100d3440  FUN_100d3440  (210 bytes)
 * DWORD FUN_100d3440(uint param_1)
 * called by: FUN_100c5d40
 */
DWORD __cdecl FUN_100d3440(uint param_1)

{
  undefined4 *puVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD local_8;
  
  if ((DAT_1032243c <= param_1) ||
     ((*(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 9;
    return 0xffffffff;
  }
  FUN_100d3380(param_1);
  if ((*(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0) {
    hFile = (HANDLE)FUN_100d3200(param_1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) goto LAB_100d34ff;
    pDVar3 = FUN_100c6050();
    *pDVar3 = local_8;
  }
  puVar1 = (undefined4 *)FUN_100c6040();
  *puVar1 = 9;
  local_8 = 0xffffffff;
LAB_100d34ff:
  __unlock_fhandle(param_1);
  return local_8;
}

/* 100d3560  FUN_100d3560  (1294 bytes)
 * uint FUN_100d3560(LPCSTR param_1, uint param_2, undefined4 param_3, uint param_4)
 * called by: FID_conflict:__open, FUN_100c6c50
 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_100d3560(LPCSTR param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte local_3c;
  uint local_38;
  char local_34 [4];
  undefined4 local_30;
  uint local_2c;
  _SECURITY_ATTRIBUTES local_28;
  DWORD local_1c;
  uint local_18;
  uint local_14;
  DWORD local_10;
  DWORD local_c;
  HANDLE local_8;
  
  local_28.nLength = 0xc;
  local_28.lpSecurityDescriptor = (LPVOID)0x0;
  bVar6 = (param_2 & 0x80) == 0;
  if (bVar6) {
    local_3c = 0;
  }
  else {
    local_3c = 0x10;
  }
  local_28.bInheritHandle = (BOOL)bVar6;
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x4000) == 0) {
      if (DAT_10321fb4 != 0x8000) {
        local_3c = local_3c | 0x80;
      }
    }
    else {
      local_3c = local_3c | 0x80;
    }
  }
  uVar5 = param_2 & 3;
  if (uVar5 == 0) {
    local_38 = 0x80000000;
  }
  else if (uVar5 == 1) {
    local_38 = 0x40000000;
  }
  else {
    if (uVar5 != 2) {
      puVar1 = (undefined4 *)FUN_100c6040();
      *puVar1 = 0x16;
      pDVar2 = FUN_100c6050();
      *pDVar2 = 0;
      return 0xffffffff;
    }
    local_38 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    local_c = 0;
    break;
  default:
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 0x16;
    pDVar2 = FUN_100c6050();
    *pDVar2 = 0;
    return 0xffffffff;
  case 0x20:
    local_c = 1;
    break;
  case 0x30:
    local_c = 2;
    break;
  case 0x40:
    local_c = 3;
  }
  uVar5 = param_2 & 0x700;
  if (uVar5 < 0x401) {
    if (uVar5 != 0x400) {
      if (0x200 < uVar5) {
        if (uVar5 != 0x300) {
LAB_100d3726:
          puVar1 = (undefined4 *)FUN_100c6040();
          *puVar1 = 0x16;
          pDVar2 = FUN_100c6050();
          *pDVar2 = 0;
          return 0xffffffff;
        }
        local_1c = 2;
        goto LAB_100d3744;
      }
      if (uVar5 == 0x200) goto LAB_100d3714;
      if (uVar5 != 0) {
        if (uVar5 != 0x100) goto LAB_100d3726;
        local_1c = 4;
        goto LAB_100d3744;
      }
    }
    local_1c = 3;
  }
  else {
    if (uVar5 != 0x500) {
      if (uVar5 == 0x600) {
LAB_100d3714:
        local_1c = 5;
        goto LAB_100d3744;
      }
      if (uVar5 != 0x700) goto LAB_100d3726;
    }
    local_1c = 1;
  }
LAB_100d3744:
  local_2c = 0x80;
  if ((param_2 & 0x100) != 0) {
    local_14 = param_4;
    local_30 = 0;
    if ((param_4 & ~DAT_10321c1c & 0x80) == 0) {
      local_2c = 1;
    }
  }
  if ((param_2 & 0x40) != 0) {
    local_2c = local_2c | 0x4000000;
    local_38 = local_38 | 0x10000;
  }
  if ((param_2 & 0x1000) != 0) {
    local_2c = local_2c | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      local_2c = local_2c | 0x10000000;
    }
  }
  else {
    local_2c = local_2c | 0x8000000;
  }
  local_18 = FUN_100d2e70();
  if (local_18 == 0xffffffff) {
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 0x18;
    pDVar2 = FUN_100c6050();
    *pDVar2 = 0;
    local_18 = 0xffffffff;
  }
  else {
    local_8 = CreateFileA(param_1,local_38,local_c,&local_28,local_1c,local_2c,(HANDLE)0x0);
    if (local_8 == (HANDLE)0xffffffff) {
      DVar3 = GetLastError();
      __dosmaperr(DVar3);
      __unlock_fhandle(local_18);
      local_18 = 0xffffffff;
    }
    else {
      local_10 = GetFileType(local_8);
      if (local_10 == 0) {
        CloseHandle(local_8);
        DVar3 = GetLastError();
        __dosmaperr(DVar3);
        __unlock_fhandle(local_18);
        local_18 = 0xffffffff;
      }
      else {
        if (local_10 == 2) {
          local_3c = local_3c | 0x40;
        }
        else if (local_10 == 3) {
          local_3c = local_3c | 8;
        }
        __set_osfhnd(local_18,(intptr_t)local_8);
        *(byte *)((&DAT_10322300)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) = local_3c | 1
        ;
        if ((((local_3c & 0x48) == 0) && (((int)(char)(local_3c | 1) & 0x80U) != 0)) &&
           ((param_2 & 2) != 0)) {
          DVar3 = FUN_100c64c0(local_18,-1,2);
          if (DVar3 == 0xffffffff) {
            pDVar2 = FUN_100c6050();
            if (*pDVar2 != 0x83) {
              FUN_100c5b20(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
          }
          else {
            local_34[0] = '\0';
            iVar4 = FUN_100c6800(local_18,local_34,1);
            if (((iVar4 == 0) && (local_34[0] == '\x1a')) &&
               (iVar4 = FUN_100d90c0(local_18,DVar3), iVar4 == -1)) {
              FUN_100c5b20(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
            DVar3 = FUN_100c64c0(local_18,0,0);
            if (DVar3 == 0xffffffff) {
              FUN_100c5b20(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
          }
        }
        if (((local_3c & 0x48) == 0) && ((param_2 & 8) != 0)) {
          *(byte *)((&DAT_10322300)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) =
               *(byte *)((&DAT_10322300)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) | 0x20;
        }
        __unlock_fhandle(local_18);
      }
    }
  }
  return local_18;
}

/* 100d3ac0  FUN_100d3ac0  (2586 bytes)
 * uint FUN_100d3ac0(undefined2 * param_1, undefined4 * param_2, byte.conflict * param_3, int param_4, int param_5, int param_6, int param_7)
 * called by: FUN_100c7f40, FUN_100d2500, FUN_100d2540, FUN_100d2580, FUN_100d45f0
 */
uint __cdecl
FUN_100d3ac0(undefined2 *param_1,undefined4 *param_2,byte_conflict *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint local_b4;
  uint local_b0;
  uint local_a4;
  uint local_9c;
  uint local_94;
  int local_80;
  int local_78;
  uint local_74;
  int local_70;
  char *local_6c;
  byte *local_68;
  undefined2 local_64;
  undefined4 local_62;
  undefined4 local_5e;
  ushort local_5a;
  int local_58;
  ushort local_54;
  int local_50;
  undefined2 local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  char local_3c [23];
  char local_25;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  byte *local_8;
  
  local_6c = local_3c;
  local_20 = local_20 & 0xffff0000;
  local_78 = 1;
  local_74 = 0;
  local_58 = 0;
  local_10 = 0;
  local_1c = 0;
  local_44 = 0;
  bVar2 = false;
  local_18 = 0;
  local_70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_68 = param_3;
  for (local_8 = param_3;
      (((*local_8 == 0x20 || (*local_8 == 9)) || (*local_8 == 10)) || (*local_8 == 0xd));
      local_8 = local_8 + 1) {
  }
  do {
    if (local_50 == 10) {
      *param_2 = local_8;
      if ((local_58 != 0) && (local_44 == 0)) {
        if (0x18 < local_74) {
          if ('\x04' < local_25) {
            local_25 = local_25 + '\x01';
          }
          local_74 = 0x18;
          local_6c = local_6c + -1;
          local_70 = local_70 + 1;
        }
        if (local_74 == 0) {
          local_4c = 0;
          local_54 = 0;
          local_14 = 0;
          local_c = 0;
        }
        else {
          while (local_6c = local_6c + -1, *local_6c == '\0') {
            local_74 = local_74 - 1;
            local_70 = local_70 + 1;
          }
          FUN_100d89e0(local_3c,local_74,(uint *)&local_64);
          if (local_78 < 0) {
            local_18 = -local_18;
          }
          local_18 = local_18 + local_70;
          if (local_1c == 0) {
            local_18 = local_18 + param_5;
          }
          if (local_10 == 0) {
            local_18 = local_18 - param_6;
          }
          if ((int)local_18 < 0x1451) {
            if ((int)local_18 < -0x1450) {
              bVar2 = true;
            }
            else {
              FUN_100d9730((int *)&local_64,local_18,param_4);
              local_4c = local_64;
              local_c = local_62;
              local_14 = local_5e;
              local_54 = local_5a;
            }
          }
          else {
            local_44 = 1;
          }
        }
      }
      if (local_58 == 0) {
        local_4c = 0;
        local_54 = 0;
        local_14 = 0;
        local_c = 0;
        local_48 = local_48 | 4;
      }
      else if (local_44 == 0) {
        if (bVar2) {
          local_4c = 0;
          local_54 = 0;
          local_14 = 0;
          local_c = 0;
          local_48 = local_48 | 1;
        }
      }
      else {
        local_54 = 0x7fff;
        local_14 = 0x80000000;
        local_c = 0;
        local_4c = 0;
        local_48 = local_48 | 2;
      }
      *param_1 = local_4c;
      *(undefined4 *)(param_1 + 1) = local_c;
      *(undefined4 *)(param_1 + 3) = local_14;
      param_1[5] = local_54 | (ushort)local_20;
      return local_48;
    }
    bVar1 = *local_8;
    local_40 = CONCAT31(local_40._1_3_,bVar1);
    pbVar3 = local_8 + 1;
    switch(local_50) {
    case 0:
      if (((char)bVar1 < '1') || ('9' < (char)bVar1)) {
        if (bVar1 == DAT_1028b640) {
          local_50 = 5;
        }
        else if (bVar1 == 0x2b) {
          local_50 = 2;
          local_20 = (uint)local_20._2_2_ << 0x10;
        }
        else if (bVar1 == 0x2d) {
          local_50 = 2;
          local_20 = CONCAT22(local_20._2_2_,0x8000);
        }
        else if (bVar1 == 0x30) {
          local_50 = 1;
        }
        else {
          local_50 = 10;
          pbVar3 = local_8;
        }
      }
      else {
        local_50 = 3;
        pbVar3 = local_8;
      }
      break;
    case 1:
      local_58 = 1;
      if (((char)bVar1 < '1') || ('9' < (char)bVar1)) {
        if (bVar1 == DAT_1028b640) {
          local_50 = 4;
        }
        else {
          switch(bVar1) {
          case 0x2b:
          case 0x2d:
            local_50 = 0xb;
            pbVar3 = local_8;
            break;
          default:
            local_50 = 10;
            pbVar3 = local_8;
            break;
          case 0x30:
            local_50 = 1;
            break;
          case 0x44:
          case 0x45:
          case 100:
          case 0x65:
            local_50 = 6;
          }
        }
      }
      else {
        local_50 = 3;
        pbVar3 = local_8;
      }
      break;
    case 2:
      if (((char)bVar1 < '1') || ('9' < (char)bVar1)) {
        if (bVar1 == DAT_1028b640) {
          local_50 = 5;
        }
        else if (bVar1 == 0x30) {
          local_50 = 1;
        }
        else {
          local_50 = 10;
          local_8 = local_68;
          pbVar3 = local_8;
        }
      }
      else {
        local_50 = 3;
        pbVar3 = local_8;
      }
      break;
    case 3:
      local_58 = 1;
      local_8 = pbVar3;
      while( true ) {
        if (DAT_1028b63c < 2) {
          local_94 = *(ushort *)(PTR_DAT_1028b430 + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_94 = FUN_100c1760(local_40 & 0xff,4);
        }
        if (local_94 == 0) break;
        if (local_74 < 0x19) {
          local_74 = local_74 + 1;
          *local_6c = (byte_conflict)local_40 + 0xd0;
          local_6c = local_6c + 1;
        }
        else {
          local_70 = local_70 + 1;
        }
        local_40 = CONCAT31(local_40._1_3_,*local_8);
        local_8 = local_8 + 1;
      }
      pbVar3 = local_8;
      if ((byte_conflict)local_40 == DAT_1028b640) {
        local_50 = 4;
      }
      else {
        switch((byte_conflict)local_40) {
        case '+':
        case '-':
          local_50 = 0xb;
          pbVar3 = local_8 + -1;
          break;
        default:
          local_50 = 10;
          pbVar3 = local_8 + -1;
          break;
        case 'D':
        case 'E':
        case 'd':
        case 'e':
          local_50 = 6;
        }
      }
      break;
    case 4:
      local_58 = 1;
      local_10 = 1;
      local_8 = pbVar3;
      if (local_74 == 0) {
        while ((byte_conflict)local_40 == '0') {
          local_70 = local_70 + -1;
          local_40 = CONCAT31(local_40._1_3_,*local_8);
          local_8 = local_8 + 1;
        }
      }
      while( true ) {
        if (DAT_1028b63c < 2) {
          local_9c = *(ushort *)(PTR_DAT_1028b430 + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_9c = FUN_100c1760(local_40 & 0xff,4);
        }
        if (local_9c == 0) break;
        if (local_74 < 0x19) {
          local_74 = local_74 + 1;
          *local_6c = (byte_conflict)local_40 + -0x30;
          local_6c = local_6c + 1;
          local_70 = local_70 + -1;
        }
        local_40 = CONCAT31(local_40._1_3_,*local_8);
        local_8 = local_8 + 1;
      }
      switch((byte_conflict)local_40) {
      case '+':
      case '-':
        local_50 = 0xb;
        pbVar3 = local_8 + -1;
        break;
      default:
        local_50 = 10;
        pbVar3 = local_8 + -1;
        break;
      case 'D':
      case 'E':
      case 'd':
      case 'e':
        local_50 = 6;
        pbVar3 = local_8;
      }
      break;
    case 5:
      local_10 = 1;
      if (DAT_1028b63c < 2) {
        local_a4 = *(ushort *)(PTR_DAT_1028b430 + (uint)bVar1 * 2) & 4;
        local_8 = pbVar3;
      }
      else {
        local_8 = pbVar3;
        local_a4 = FUN_100c1760((uint)bVar1,4);
      }
      if (local_a4 == 0) {
        local_50 = 10;
        local_8 = local_68;
        pbVar3 = local_8;
      }
      else {
        local_50 = 4;
        pbVar3 = local_8 + -1;
      }
      break;
    case 6:
      local_68 = local_8 + -1;
      if (((char)bVar1 < '1') || ('9' < (char)bVar1)) {
        if (bVar1 == 0x2b) {
          local_50 = 7;
        }
        else if (bVar1 == 0x2d) {
          local_50 = 7;
          local_78 = -1;
        }
        else if (bVar1 == 0x30) {
          local_50 = 8;
        }
        else {
          local_50 = 10;
          pbVar3 = local_68;
        }
      }
      else {
        local_50 = 9;
        pbVar3 = local_8;
      }
      break;
    case 7:
      if (((char)bVar1 < '1') || ('9' < (char)bVar1)) {
        if (bVar1 == 0x30) {
          local_50 = 8;
        }
        else {
          local_50 = 10;
          local_8 = local_68;
          pbVar3 = local_8;
        }
      }
      else {
        local_50 = 9;
        pbVar3 = local_8;
      }
      break;
    case 8:
      local_1c = 1;
      local_8 = pbVar3;
      while ((byte_conflict)local_40 == '0') {
        bVar1 = *local_8;
        local_8 = local_8 + 1;
        local_40 = CONCAT31(local_40._1_3_,bVar1);
      }
      if (((char)(byte_conflict)local_40 < '1') || ('9' < (char)(byte_conflict)local_40)) {
        local_50 = 10;
      }
      else {
        local_50 = 9;
      }
      local_8 = local_8 + -1;
      pbVar3 = local_8;
      break;
    case 9:
      local_1c = 1;
      local_80 = 0;
      local_8 = pbVar3;
      while( true ) {
        if (DAT_1028b63c < 2) {
          local_b0 = *(ushort *)(PTR_DAT_1028b430 + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_b0 = FUN_100c1760(local_40 & 0xff,4);
        }
        if (local_b0 == 0) goto LAB_100d41e7;
        local_80 = local_80 * 10 + -0x30 + (int)(char)(byte_conflict)local_40;
        if (0x1450 < local_80) break;
        local_40 = CONCAT31(local_40._1_3_,*local_8);
        local_8 = local_8 + 1;
      }
      local_80 = 0x1451;
LAB_100d41e7:
      local_18 = local_80;
      while( true ) {
        if (DAT_1028b63c < 2) {
          local_b4 = *(ushort *)(PTR_DAT_1028b430 + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_b4 = FUN_100c1760(local_40 & 0xff,4);
        }
        if (local_b4 == 0) break;
        local_40 = CONCAT31(local_40._1_3_,*local_8);
        local_8 = local_8 + 1;
      }
      local_50 = 10;
      pbVar3 = local_8 + -1;
      break;
    case 0xb:
      if (param_7 == 0) {
        local_50 = 10;
        pbVar3 = local_8;
      }
      else {
        local_68 = local_8;
        if (bVar1 == 0x2b) {
          local_50 = 7;
        }
        else if (bVar1 == 0x2d) {
          local_50 = 7;
          local_78 = -1;
        }
        else {
          local_50 = 10;
          pbVar3 = local_8;
        }
      }
    }
    local_8 = pbVar3;
  } while( true );
}

/* 100d45f0  FUN_100d45f0  (79 bytes)
 * uint FUN_100d45f0(undefined4 * param_1, undefined4 * param_2, byte.conflict * param_3, int param_4)
 */
uint __cdecl
FUN_100d45f0(undefined4 *param_1,undefined4 *param_2,byte_conflict *param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_18;
  ushort local_10 [6];
  
  local_18 = FUN_100d3ac0(local_10,param_2,param_3,param_4,0,0,0);
  bVar1 = FUN_100d2440(local_10,param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    local_18 = local_18 | 2;
  }
  return local_18;
}

/* 100d4640  FUN_100d4640  (61 bytes)
 * undefined FUN_100d4640(void)
 * called by: FUN_100c9200, FUN_100da340
 */
void FUN_100d4640(void)

{
  if (DAT_10321f48 == 0) {
    FUN_100c4260(0xb);
    if (DAT_10321f48 == 0) {
      FUN_100d46a0();
      DAT_10321f48 = DAT_10321f48 + 1;
    }
    FUN_100c4300(0xb);
  }
  return;
}

/* 100d4680  FUN_100d4680  (30 bytes)
 * undefined FUN_100d4680(void)
 */
void FUN_100d4680(void)

{
  FUN_100c4260(0xb);
  FUN_100d46a0();
  FUN_100c4300(0xb);
  return;
}

/* 100d46a0  FUN_100d46a0  (939 bytes)
 * undefined FUN_100d46a0(void)
 * called by: FUN_100d4640, FUN_100d4680
 */
void FUN_100d46a0(void)

{
  byte_conflict bVar1;
  char *pcVar2;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  byte_conflict *pbVar6;
  uint uVar7;
  int in_stack_fffffff4;
  BOOL BVar8;
  
  FUN_100c4260(0xc);
  DAT_10321e90 = 0;
  DAT_1028e280 = 0xffffffff;
  DAT_1028e270 = 0xffffffff;
  pcVar2 = FID_conflict___getenv_lk("TZ");
  if (pcVar2 == (char *)0x0) {
    FUN_100c4300(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10321e98);
    if (DVar3 != 0xffffffff) {
      DAT_10321e90 = 1;
      DAT_1028e1d8 = DAT_10321e98 * 0x3c;
      if (DAT_10321ede != 0) {
        DAT_1028e1d8 = DAT_1028e1d8 + DAT_10321eec * 0x3c;
      }
      if ((DAT_10321f32 == 0) || (DAT_10321f40 == 0)) {
        DAT_1028e1dc = 0;
        DAT_1028e1e0 = 0;
      }
      else {
        DAT_1028e1dc = 1;
        DAT_1028e1e0 = (DAT_10321f40 - DAT_10321eec) * 0x3c;
      }
      iVar4 = WideCharToMultiByte(DAT_10321d6c,0x220,(LPCWSTR)&DAT_10321e9c,-1,PTR_DAT_1028e264,0x3f
                                  ,(LPCSTR)0x0,(LPBOOL)&stack0xfffffff4);
      if ((iVar4 == 0) || (in_stack_fffffff4 != 0)) {
        *PTR_DAT_1028e264 = 0;
      }
      else {
        PTR_DAT_1028e264[0x3f] = 0;
      }
      iVar4 = WideCharToMultiByte(DAT_10321d6c,0x220,(LPCWSTR)&DAT_10321ef0,-1,PTR_DAT_1028e268,0x3f
                                  ,(LPCSTR)0x0,(LPBOOL)&stack0xfffffff4);
      if ((iVar4 == 0) || (in_stack_fffffff4 != 0)) {
        *PTR_DAT_1028e268 = 0;
      }
      else {
        PTR_DAT_1028e268[0x3f] = 0;
      }
    }
  }
  else if ((*pcVar2 == '\0') ||
          ((DAT_10321f44 != (uint *)0x0 &&
           (iVar4 = _strcmp(pcVar2,(char *)DAT_10321f44), iVar4 == 0)))) {
    FUN_100c4300(0xc);
  }
  else {
    __free_dbg(DAT_10321f44,2);
    BVar8 = 0x10c;
    pcVar2 = "tzset.c";
    uVar7 = 2;
    sVar5 = _strlen("tzset.c");
    DAT_10321f44 = (uint *)__malloc_dbg(sVar5 + 1,uVar7,(int)pcVar2,BVar8);
    if (DAT_10321f44 == (uint *)0x0) {
      FUN_100c4300(0xc);
    }
    else {
      FUN_100bba20(DAT_10321f44,(uint *)pcVar2);
      pcVar2 = (char *)0x100d48c6;
      FUN_100c4300(0xc);
      _strncpy(PTR_DAT_1028e264,pcVar2,3);
      PTR_DAT_1028e264[3] = 0;
      pbVar6 = (byte_conflict *)(pcVar2 + 3);
      bVar1 = *pbVar6;
      if (bVar1 == '-') {
        pbVar6 = (byte_conflict *)(pcVar2 + 4);
      }
      pcVar2 = (char *)0x100d4916;
      iVar4 = FUN_100c0c30(pbVar6);
      DAT_1028e1d8 = iVar4 * 0xe10;
      for (; (*pcVar2 == '+' || (('/' < *pcVar2 && (*pcVar2 < ':')))); pcVar2 = pcVar2 + 1) {
      }
      if (*pcVar2 == ':') {
        pbVar6 = (byte_conflict *)(pcVar2 + 1);
        pcVar2 = (char *)0x100d4971;
        iVar4 = FUN_100c0c30(pbVar6);
        DAT_1028e1d8 = DAT_1028e1d8 + iVar4 * 0x3c;
        for (; ('/' < *pcVar2 && (*pcVar2 < ':')); pcVar2 = pcVar2 + 1) {
        }
        if (*pcVar2 == ':') {
          pbVar6 = (byte_conflict *)(pcVar2 + 1);
          pcVar2 = (char *)0x100d49c3;
          iVar4 = FUN_100c0c30(pbVar6);
          DAT_1028e1d8 = DAT_1028e1d8 + iVar4;
          for (; ('/' < *pcVar2 && (*pcVar2 < ':')); pcVar2 = pcVar2 + 1) {
          }
        }
      }
      if (bVar1 == '-') {
        DAT_1028e1d8 = -DAT_1028e1d8;
      }
      DAT_1028e1dc = (int)*pcVar2;
      if (DAT_1028e1dc == 0) {
        *PTR_DAT_1028e268 = 0;
      }
      else {
        _strncpy(PTR_DAT_1028e268,pcVar2,3);
        PTR_DAT_1028e268[3] = 0;
      }
    }
  }
  return;
}

/* 100d4a50  FUN_100d4a50  (46 bytes)
 * undefined4 FUN_100d4a50(int * param_1)
 * called by: FUN_100c9200
 */
undefined4 __cdecl FUN_100d4a50(int *param_1)

{
  undefined4 uVar1;
  
  FUN_100c4260(0xb);
  uVar1 = FUN_100d4a80(param_1);
  FUN_100c4300(0xb);
  return uVar1;
}

/* 100d4a80  FUN_100d4a80  (762 bytes)
 * undefined4 FUN_100d4a80(int * param_1)
 * called by: FUN_100d4a50
 */
undefined4 __cdecl FUN_100d4a80(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_1028e1dc == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_1028e270) || (param_1[5] != DAT_1028e280)) {
    if (DAT_10321e90 == 0) {
      FUN_100d4d80(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_100d4d80(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_10321f30 == 0) {
        FUN_100d4d80(1,1,param_1[5],(uint)DAT_10321f32,(uint)DAT_10321f36,(uint)DAT_10321f34,0,
                     (uint)DAT_10321f38,(uint)DAT_10321f3a,(uint)DAT_10321f3c,(uint)DAT_10321f3e);
      }
      else {
        FUN_100d4d80(1,0,param_1[5],(uint)DAT_10321f32,0,0,(uint)DAT_10321f36,(uint)DAT_10321f38,
                     (uint)DAT_10321f3a,(uint)DAT_10321f3c,(uint)DAT_10321f3e);
      }
      if (DAT_10321edc == 0) {
        FUN_100d4d80(0,1,param_1[5],(uint)DAT_10321ede,(uint)DAT_10321ee2,(uint)DAT_10321ee0,0,
                     (uint)DAT_10321ee4,(uint)DAT_10321ee6,(uint)DAT_10321ee8,(uint)DAT_10321eea);
      }
      else {
        FUN_100d4d80(0,0,param_1[5],(uint)DAT_10321ede,0,0,(uint)DAT_10321ee2,(uint)DAT_10321ee4,
                     (uint)DAT_10321ee6,(uint)DAT_10321ee8,(uint)DAT_10321eea);
      }
    }
  }
  if (DAT_1028e274 < DAT_1028e284) {
    if ((param_1[7] < DAT_1028e274) || (DAT_1028e284 < param_1[7])) {
      return 0;
    }
    if ((DAT_1028e274 < param_1[7]) && (param_1[7] < DAT_1028e284)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_1028e284) || (DAT_1028e274 < param_1[7])) {
      return 1;
    }
    if ((DAT_1028e284 < param_1[7]) && (param_1[7] < DAT_1028e274)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_1028e274) {
    if (iVar2 < DAT_1028e278) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_1028e288) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* 100d4d80  FUN_100d4d80  (504 bytes)
 * undefined FUN_100d4d80(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11)
 * called by: FUN_100d4a80
 */
void __cdecl
FUN_100d4d80(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      local_10 = (&DAT_1028e288)[param_4];
    }
    else {
      local_10 = *(int *)(&DAT_1028e2bc + param_4 * 4);
    }
    local_10 = local_10 + 1;
    iVar1 = (int)(local_10 + (param_3 - 0x46) * 0x16d + -0xd + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar1) {
      local_c = param_5 * 7 + local_10 + (param_6 - iVar1);
    }
    else {
      local_c = (param_5 + -1) * 7 + local_10 + (param_6 - iVar1);
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        local_14 = *(int *)(&DAT_1028e28c + param_4 * 4);
      }
      else {
        local_14 = *(int *)(&DAT_1028e2c0 + param_4 * 4);
      }
      if (local_14 < local_c) {
        local_c = local_c + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      local_18 = (&DAT_1028e288)[param_4];
    }
    else {
      local_18 = *(int *)(&DAT_1028e2bc + param_4 * 4);
    }
    local_c = local_18 + param_7;
  }
  if (param_1 == 1) {
    DAT_1028e274 = local_c;
    DAT_1028e278 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    DAT_1028e270 = param_3;
  }
  else {
    DAT_1028e284 = local_c;
    DAT_1028e288 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000 +
                   DAT_1028e1e0 * 1000;
    if (DAT_1028e288 < 0) {
      DAT_1028e288 = DAT_1028e288 + 86400000;
      DAT_1028e284 = local_c + -1;
    }
    else if (86399999 < DAT_1028e288) {
      DAT_1028e288 = DAT_1028e288 + -86400000;
      DAT_1028e284 = local_c + 1;
    }
    DAT_1028e280 = param_3;
  }
  return;
}

/* 100d4f80  FUN_100d4f80  (27 bytes)
 * undefined FUN_100d4f80(byte.conflict * param_1, undefined4 * param_2, uint param_3)
 * called by: FUN_100ccb40
 */
void __cdecl FUN_100d4f80(byte_conflict *param_1,undefined4 *param_2,uint param_3)

{
  FUN_100d4fa0(param_1,param_2,param_3,0);
  return;
}

/* 100d4fa0  FUN_100d4fa0  (817 bytes)
 * uint FUN_100d4fa0(byte.conflict * param_1, undefined4 * param_2, uint param_3, uint param_4)
 * called by: FUN_100d4f80, FUN_100d52e0
 */
uint __cdecl FUN_100d4fa0(byte_conflict *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  byte *local_8;
  
  local_10 = 0;
  bVar1 = *param_1;
  pbVar2 = param_1;
  while( true ) {
    local_8 = pbVar2 + 1;
    if (DAT_1028b63c < 2) {
      local_1c = *(ushort *)(PTR_DAT_1028b430 + (uint)bVar1 * 2) & 8;
    }
    else {
      local_1c = FUN_100c1760((uint)bVar1,8);
    }
    if (local_1c == 0) break;
    bVar1 = *local_8;
    pbVar2 = local_8;
  }
  if (bVar1 == 0x2d) {
    param_4 = param_4 | 2;
    bVar1 = *local_8;
    local_8 = pbVar2 + 2;
  }
  else if (bVar1 == 0x2b) {
    bVar1 = *local_8;
    local_8 = pbVar2 + 2;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar1 == 0x30) {
      if ((*local_8 == 0x78) || (*local_8 == 0x58)) {
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
    else {
      param_3 = 10;
    }
  }
  if (((param_3 == 0x10) && (bVar1 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar1 = local_8[1];
    local_8 = local_8 + 2;
  }
  uVar3 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    if (DAT_1028b63c < 2) {
      local_20 = *(ushort *)(PTR_DAT_1028b430 + (uint)bVar1 * 2) & 4;
    }
    else {
      local_20 = FUN_100c1760((uint)bVar1,4);
    }
    if (local_20 == 0) {
      if (DAT_1028b63c < 2) {
        local_24 = *(ushort *)(PTR_DAT_1028b430 + (uint)bVar1 * 2) & 0x103;
      }
      else {
        local_24 = FUN_100c1760((uint)bVar1,0x103);
      }
      if (local_24 == 0) {
LAB_100d5210:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            local_8 = param_1;
          }
          local_10 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_10)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_10)))))))) {
          puVar4 = (undefined4 *)FUN_100c6040();
          *puVar4 = 0x22;
          if ((param_4 & 1) == 0) {
            if ((param_4 & 2) == 0) {
              local_10 = 0x7fffffff;
            }
            else {
              local_10 = 0x80000000;
            }
          }
          else {
            local_10 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_10;
        }
        return -local_10;
      }
      local_18 = FUN_100c1590((int)(char)bVar1);
      local_18 = local_18 - 0x37;
    }
    else {
      local_18 = (int)(char)bVar1 - 0x30;
    }
    if (param_3 <= local_18) goto LAB_100d5210;
    if ((local_10 < uVar3) ||
       ((local_10 == uVar3 && (local_18 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_10 = local_10 * param_3 + local_18;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar1 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}

/* 100d52e0  FUN_100d52e0  (27 bytes)
 * undefined FUN_100d52e0(byte.conflict * param_1, undefined4 * param_2, uint param_3)
 */
void __cdecl FUN_100d52e0(byte_conflict *param_1,undefined4 *param_2,uint param_3)

{
  FUN_100d4fa0(param_1,param_2,param_3,1);
  return;
}

/* 100d5300  FUN_100d5300  (27 bytes)
 * float10 FUN_100d5300(double param_1)
 * called by: FUN_100cd3b0
 */
float10 __cdecl FUN_100d5300(double param_1)

{
  return (float10)ROUND(param_1);
}

/* 100d5380  FUN_100d5380  (25 bytes)
 * undefined FUN_100d5380(uint param_1, uint param_2, int param_3)
 */
void __cdecl FUN_100d5380(uint param_1,uint param_2,int param_3)

{
  FUN_100d9900(param_1,param_2,param_3);
  return;
}

/* 100d53a0  FUN_100d53a0  (300 bytes)
 * float10 FUN_100d53a0(uint param_1, uint param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100d53a0(uint param_1,uint param_2)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  int local_c;
  uint local_8;
  
  local_8 = FUN_100cf390();
  if ((param_2._2_2_ & 0x7ff0) != 0x7ff0) {
    if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == 0.0) {
      fVar3 = FUN_100ce520(4,0x25,param_1,param_2,SUB84(-_DAT_1028e040,0),
                           (int)((ulonglong)-_DAT_1028e040 >> 0x20),local_8);
      return fVar3;
    }
    FUN_100cf210(param_1,param_2,&local_c);
    FUN_100cf390();
    return (float10)(local_c + -1);
  }
  iVar2 = FUN_100cf190(param_1,param_2);
  if (0 < iVar2) {
    if (iVar2 < 3) {
      FUN_100cf390();
      return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    if (iVar2 == 3) {
      fVar3 = FUN_100ce450(0x25,param_1,param_2);
      return fVar3;
    }
  }
  dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + 1.0;
  fVar3 = FUN_100ce520(8,0x25,param_1,param_2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),local_8
                      );
  return fVar3;
}

/* 100d54d0  FUN_100d54d0  (826 bytes)
 * float10 FUN_100d54d0(uint param_1, uint param_2, int param_3, uint param_4)
 */
float10 __cdecl FUN_100d54d0(uint param_1,uint param_2,int param_3,uint param_4)

{
  double dVar1;
  undefined4 unaff_EBP;
  float10 fVar2;
  undefined4 local_28;
  short local_20 [2];
  double local_1c;
  short local_14 [2];
  uint local_10;
  uint local_c;
  undefined4 uStack_8;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = (undefined2)unaff_EBP;
  uStack_2 = (undefined2)((uint)unaff_EBP >> 0x10);
  local_10 = FUN_100cf390();
  if (((param_2._2_2_ & 0x7ff0) == 0x7ff0) || ((param_4._2_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) ||
       (((param_4._2_2_ & 0x7ff8) == 0x7ff0 && (((param_4 & 0x7ffff) != 0 || (param_3 != 0)))))) {
      dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) +
              (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      fVar2 = FUN_100ce5e0(8,0x26,param_1,param_2,param_3,param_4,SUB84(dVar1,0),
                           (int)((ulonglong)dVar1 >> 0x20),local_10);
      return fVar2;
    }
    if (((param_2._2_2_ & 0x7ff8) == 0x7ff8) || ((param_4._2_2_ & 0x7ff8) == 0x7ff8)) {
      fVar2 = FUN_100ce4b0(0x26,param_1,param_2,param_3,param_4);
      return fVar2;
    }
  }
  if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) ==
      (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
    FUN_100cf390();
    fVar2 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  else {
    if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == 0.0) {
      local_c = 1;
      if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <=
          (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
        uStack_8._0_2_ = 0;
        uStack_8._2_2_ = 0x8000;
      }
      else {
        uStack_8._0_2_ = 0;
        uStack_8._2_2_ = 0;
      }
    }
    if (((0.0 < (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) &&
        ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <
         (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))) ||
       (((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < 0.0 &&
        ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) <
         (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))))) {
      local_c = param_1 - 1;
      uStack_8 = param_2;
      if (param_1 == 0) {
        uStack_8 = param_2 - 1;
      }
    }
    else if ((((0.0 < (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) &&
              ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) <
               (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))) ||
             ((uStack_8 = CONCAT22(uStack_8._2_2_,(undefined2)uStack_8),
              (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < 0.0 &&
              (uStack_8 = CONCAT22(uStack_8._2_2_,(undefined2)uStack_8),
              (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <
              (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))))) &&
            (local_c = param_1 + 1, uStack_8 = param_2, local_c == 0)) {
      uStack_8 = param_2 + 1;
    }
    if (((uStack_8 & 0x7ff00000) == 0) && (((uStack_8 & 0xfffff) != 0 || (local_c != 0)))) {
      fVar2 = FUN_100cf210(local_c,uStack_8,(int *)local_14);
      local_1c = (double)fVar2;
      fVar2 = FUN_100cf0a0(local_1c._0_4_,(int)((ulonglong)local_1c >> 0x20),local_14[0] + 0x600);
      dVar1 = (double)fVar2;
      local_c = SUB84(dVar1,0);
      uStack_8._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_8._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
      fVar2 = FUN_100ce5e0(0x12,0x26,param_1,param_2,param_3,param_4,local_c,
                           (int)((ulonglong)dVar1 >> 0x20),local_10);
    }
    else if (((uStack_8 == 0x7ff00000) && (local_c == 0)) ||
            ((uStack_8 == 0xfff00000 && (local_c == 0)))) {
      fVar2 = FUN_100cf210(local_c,uStack_8,(int *)local_20);
      local_28 = SUB84((double)fVar2,0);
      fVar2 = FUN_100cf0a0(local_28,(int)((ulonglong)(double)fVar2 >> 0x20),local_20[0] + -0x600);
      dVar1 = (double)fVar2;
      local_c = SUB84(dVar1,0);
      uStack_8._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_8._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
      fVar2 = FUN_100ce5e0(0x11,0x26,param_1,param_2,param_3,param_4,local_c,
                           (int)((ulonglong)dVar1 >> 0x20),local_10);
    }
    else {
      FUN_100cf390();
      fVar2 = (float10)(double)CONCAT26(uStack_8._2_2_,CONCAT24((undefined2)uStack_8,local_c));
    }
  }
  return fVar2;
}

/* 100d5810  FUN_100d5810  (34 bytes)
 * bool FUN_100d5810(undefined4 param_1, undefined8 param_2)
 */
bool __cdecl FUN_100d5810(undefined4 param_1,undefined8 param_2)

{
  return (param_2._2_4_ & 0x7ff0) != 0x7ff0;
}

/* 100d5840  FUN_100d5840  (73 bytes)
 * undefined4 FUN_100d5840(int param_1, uint param_2)
 */
undefined4 __cdecl FUN_100d5840(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) ||
     ((param_2._2_2_ & 0x7ff8) == 0x7ff8)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* 100d5890  FUN_100d5890  (211 bytes)
 * int FUN_100d5890(int param_1, uint param_2)
 * called by: FUN_100cd3b0
 */
int __cdecl FUN_100d5890(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_100cf190(param_1,param_2);
    if (iVar1 == 1) {
      iVar1 = 0x200;
    }
    else if (iVar1 == 2) {
      iVar1 = 4;
    }
    else if (iVar1 == 3) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    iVar1 = (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff90) + 0x80;
  }
  else if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == 0.0) {
    iVar1 = (-(uint)((param_2 & 0x80000000) != 0) & 0xffffffe0) + 0x40;
  }
  else {
    iVar1 = (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff08) + 0x100;
  }
  return iVar1;
}

/* 100d5a50  FUN_100d5a50  (1423 bytes)
 * uint FUN_100d5a50(int * param_1)
 * called by: ___init_time
 */
uint __cdecl FUN_100d5a50(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  uVar41 = (uint)DAT_10321f86;
  uVar1 = (uint)DAT_10321f88;
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_100db030(1,uVar41,0x31,param_1 + 1);
    uVar3 = FUN_100db030(1,uVar41,0x32,param_1 + 2);
    uVar4 = FUN_100db030(1,uVar41,0x33,param_1 + 3);
    uVar5 = FUN_100db030(1,uVar41,0x34,param_1 + 4);
    uVar6 = FUN_100db030(1,uVar41,0x35,param_1 + 5);
    uVar7 = FUN_100db030(1,uVar41,0x36,param_1 + 6);
    uVar8 = FUN_100db030(1,uVar41,0x37,param_1);
    uVar9 = FUN_100db030(1,uVar41,0x2a,param_1 + 8);
    uVar10 = FUN_100db030(1,uVar41,0x2b,param_1 + 9);
    uVar11 = FUN_100db030(1,uVar41,0x2c,param_1 + 10);
    uVar12 = FUN_100db030(1,uVar41,0x2d,param_1 + 0xb);
    uVar13 = FUN_100db030(1,uVar41,0x2e,param_1 + 0xc);
    uVar14 = FUN_100db030(1,uVar41,0x2f,param_1 + 0xd);
    uVar15 = FUN_100db030(1,uVar41,0x30,param_1 + 7);
    uVar16 = FUN_100db030(1,uVar41,0x44,param_1 + 0xe);
    uVar17 = FUN_100db030(1,uVar41,0x45,param_1 + 0xf);
    uVar18 = FUN_100db030(1,uVar41,0x46,param_1 + 0x10);
    uVar19 = FUN_100db030(1,uVar41,0x47,param_1 + 0x11);
    uVar20 = FUN_100db030(1,uVar41,0x48,param_1 + 0x12);
    uVar21 = FUN_100db030(1,uVar41,0x49,param_1 + 0x13);
    uVar22 = FUN_100db030(1,uVar41,0x4a,param_1 + 0x14);
    uVar23 = FUN_100db030(1,uVar41,0x4b,param_1 + 0x15);
    uVar24 = FUN_100db030(1,uVar41,0x4c,param_1 + 0x16);
    uVar25 = FUN_100db030(1,uVar41,0x4d,param_1 + 0x17);
    uVar26 = FUN_100db030(1,uVar41,0x4e,param_1 + 0x18);
    uVar27 = FUN_100db030(1,uVar41,0x4f,param_1 + 0x19);
    uVar28 = FUN_100db030(1,uVar41,0x38,param_1 + 0x1a);
    uVar29 = FUN_100db030(1,uVar41,0x39,param_1 + 0x1b);
    uVar30 = FUN_100db030(1,uVar41,0x3a,param_1 + 0x1c);
    uVar31 = FUN_100db030(1,uVar41,0x3b,param_1 + 0x1d);
    uVar32 = FUN_100db030(1,uVar41,0x3c,param_1 + 0x1e);
    uVar33 = FUN_100db030(1,uVar41,0x3d,param_1 + 0x1f);
    uVar34 = FUN_100db030(1,uVar41,0x3e,param_1 + 0x20);
    uVar35 = FUN_100db030(1,uVar41,0x3f,param_1 + 0x21);
    uVar36 = FUN_100db030(1,uVar41,0x40,param_1 + 0x22);
    uVar37 = FUN_100db030(1,uVar41,0x41,param_1 + 0x23);
    uVar38 = FUN_100db030(1,uVar41,0x42,param_1 + 0x24);
    uVar39 = FUN_100db030(1,uVar41,0x43,param_1 + 0x25);
    uVar40 = FUN_100db030(1,uVar41,0x28,param_1 + 0x26);
    uVar41 = FUN_100db030(1,uVar41,0x29,param_1 + 0x27);
    uVar42 = FUN_100db030(1,uVar1,0x1f,param_1 + 0x28);
    uVar43 = FUN_100db030(1,uVar1,0x20,param_1 + 0x29);
    uVar1 = FUN_100db030(1,uVar1,0x1003,param_1 + 0x2a);
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
            uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31
            | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 |
            uVar41 | uVar42 | uVar43 | uVar1;
  }
  return uVar1;
}

/* 100d62f0  FUN_100d62f0  (678 bytes)
 * undefined4 FUN_100d62f0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100d62f0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = (uint)DAT_10321f82;
  if (DAT_10321d64 == 0) {
    __free_dbg(DAT_10321f50,2);
    __free_dbg(DAT_10321f54,2);
    __free_dbg(DAT_10321f58,2);
    DAT_10321f50 = (void *)0x0;
    DAT_10321f54 = (void *)0x0;
    DAT_10321f58 = (char *)0x0;
    uVar3 = __malloc_dbg(2,2,0x1027a010,0x88);
    *(undefined4 *)PTR_PTR_1028ec68 = uVar3;
    if (*(int *)PTR_PTR_1028ec68 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      FUN_100bba20(*(uint **)PTR_PTR_1028ec68,(uint *)&DAT_10279be8);
      uVar3 = __malloc_dbg(2,2,0x1027a010,0x8d);
      *(undefined4 *)(PTR_PTR_1028ec68 + 4) = uVar3;
      if (*(int *)(PTR_PTR_1028ec68 + 4) == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_1028ec68 + 4) = 0;
        uVar3 = __malloc_dbg(2,2,0x1027a010,0x92);
        *(undefined4 *)(PTR_PTR_1028ec68 + 8) = uVar3;
        if (*(int *)(PTR_PTR_1028ec68 + 8) == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_1028ec68 + 8) = 0;
          DAT_1028b640 = **(undefined1 **)PTR_PTR_1028ec68;
          _DAT_1028b644 = 1;
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar1 = FUN_100db030(1,uVar2,0xe,(int *)&DAT_10321f50);
    uVar4 = uVar4 | uVar1;
    uVar1 = FUN_100db030(1,uVar2,0xf,(int *)&DAT_10321f54);
    uVar4 = uVar4 | uVar1;
    uVar2 = FUN_100db030(1,uVar2,0x10,(int *)&DAT_10321f58);
    uVar4 = uVar4 | uVar2;
    fix_grouping(DAT_10321f58);
    if (uVar4 == 0) {
      if (*(undefined **)PTR_PTR_1028ec68 != &DAT_1028ec30) {
        __free_dbg(*(void **)PTR_PTR_1028ec68,2);
        __free_dbg(*(void **)(PTR_PTR_1028ec68 + 4),2);
        __free_dbg(*(void **)(PTR_PTR_1028ec68 + 8),2);
      }
      *(void **)PTR_PTR_1028ec68 = DAT_10321f50;
      *(void **)(PTR_PTR_1028ec68 + 4) = DAT_10321f54;
      *(char **)(PTR_PTR_1028ec68 + 8) = DAT_10321f58;
      DAT_1028b640 = **(undefined1 **)PTR_PTR_1028ec68;
      _DAT_1028b644 = 1;
      uVar3 = 0;
    }
    else {
      __free_dbg(DAT_10321f50,2);
      __free_dbg(DAT_10321f54,2);
      __free_dbg(DAT_10321f58,2);
      DAT_10321f50 = (void *)0x0;
      DAT_10321f54 = (void *)0x0;
      DAT_10321f58 = (char *)0x0;
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

/* 100d6620  FUN_100d6620  (304 bytes)
 * undefined4 FUN_100d6620(void)
 */
undefined4 FUN_100d6620(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_10321d60 == 0) {
    PTR_DAT_1028ec38 = *(undefined **)PTR_PTR_1028ec68;
    PTR_DAT_1028ec3c = *(undefined **)(PTR_PTR_1028ec68 + 4);
    PTR_DAT_1028ec40 = *(undefined **)(PTR_PTR_1028ec68 + 8);
    PTR_PTR_1028ec68 = (undefined *)&PTR_DAT_1028ec38;
    FUN_100d69e0((int)DAT_10321f5c);
    __free_dbg(DAT_10321f5c,2);
    DAT_10321f5c = (undefined4 *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)__calloc_dbg(1,0x30,2,"initmon.c",0x4a);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_100d6750((int)puVar1);
      if (uVar3 == 0) {
        *puVar1 = *(undefined4 *)PTR_PTR_1028ec68;
        puVar1[1] = *(undefined4 *)(PTR_PTR_1028ec68 + 4);
        puVar1[2] = *(undefined4 *)(PTR_PTR_1028ec68 + 8);
        PTR_PTR_1028ec68 = (undefined *)puVar1;
        FUN_100d69e0((int)DAT_10321f5c);
        __free_dbg(DAT_10321f5c,2);
        uVar2 = 0;
        DAT_10321f5c = puVar1;
      }
      else {
        FUN_100d69e0((int)puVar1);
        __free_dbg(puVar1,2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

/* 100d6750  FUN_100d6750  (525 bytes)
 * uint FUN_100d6750(int param_1)
 * called by: FUN_100d6620
 */
uint __cdecl FUN_100d6750(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar1 = (uint)DAT_10321f7c;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_100db030(1,uVar1,0x15,(int *)(param_1 + 0xc));
    uVar3 = FUN_100db030(1,uVar1,0x14,(int *)(param_1 + 0x10));
    uVar4 = FUN_100db030(1,uVar1,0x16,(int *)(param_1 + 0x14));
    uVar5 = FUN_100db030(1,uVar1,0x17,(int *)(param_1 + 0x18));
    uVar6 = FUN_100db030(1,uVar1,0x18,(int *)(param_1 + 0x1c));
    fix_grouping(*(char **)(param_1 + 0x1c));
    uVar7 = FUN_100db030(1,uVar1,0x50,(int *)(param_1 + 0x20));
    uVar8 = FUN_100db030(1,uVar1,0x51,(int *)(param_1 + 0x24));
    uVar9 = FUN_100db030(0,uVar1,0x1a,(int *)(param_1 + 0x28));
    uVar10 = FUN_100db030(0,uVar1,0x19,(int *)(param_1 + 0x29));
    uVar11 = FUN_100db030(0,uVar1,0x54,(int *)(param_1 + 0x2a));
    uVar12 = FUN_100db030(0,uVar1,0x55,(int *)(param_1 + 0x2b));
    uVar13 = FUN_100db030(0,uVar1,0x56,(int *)(param_1 + 0x2c));
    uVar14 = FUN_100db030(0,uVar1,0x57,(int *)(param_1 + 0x2d));
    uVar15 = FUN_100db030(0,uVar1,0x52,(int *)(param_1 + 0x2e));
    uVar1 = FUN_100db030(0,uVar1,0x53,(int *)(param_1 + 0x2f));
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar1;
  }
  return uVar1;
}

/* 100d69e0  FUN_100d69e0  (147 bytes)
 * undefined FUN_100d69e0(int param_1)
 * called by: FUN_100d6620
 */
void __cdecl FUN_100d69e0(int param_1)

{
  void *pvVar1;
  
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_10321fc0)) {
    __free_dbg(*(void **)(param_1 + 0xc),2);
    __free_dbg(*(void **)(param_1 + 0x10),2);
    pvVar1 = *(void **)(param_1 + 0x14);
    __free_dbg(pvVar1,2);
    __free_dbg(*(void **)((int)pvVar1 + 0x18),2);
    __free_dbg(*(void **)((int)pvVar1 + 0x1c),2);
    __free_dbg(*(void **)((int)pvVar1 + 0x20),2);
    __free_dbg(*(void **)((int)pvVar1 + 0x24),2);
  }
  return;
}

/* 100d6a80  FUN_100d6a80  (928 bytes)
 * undefined4 FUN_100d6a80(void)
 */
undefined4 FUN_100d6a80(void)

{
  int iVar1;
  LPCSTR pCVar2;
  LPCWSTR pWVar3;
  BOOL BVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 *in_stack_ffffffcc;
  void *pvVar7;
  LPCWSTR pWVar8;
  undefined2 *in_stack_ffffffe0;
  BYTE *local_1c;
  _cpinfo local_18;
  
  if (DAT_10321d5c == 0) {
    PTR_DAT_1028b430 = &DAT_1028b43a;
    PTR_DAT_1028b434 = &DAT_1028b43a;
    __free_dbg(DAT_10321f60,2);
    __free_dbg(DAT_10321f64,2);
    DAT_10321f60 = (void *)0x0;
    DAT_10321f64 = (void *)0x0;
    uVar5 = 0;
  }
  else {
    if ((DAT_10321d6c != 0) ||
       (iVar1 = FUN_100db030(0,(uint)DAT_10321f74,0x1004,(int *)&DAT_10321d6c), iVar1 == 0)) {
      in_stack_ffffffcc = (undefined2 *)__malloc_dbg(0x202,2,0x1027a028,0x5c);
      in_stack_ffffffe0 = (undefined2 *)__malloc_dbg(0x202,2,0x1027a028,0x5e);
      pCVar2 = (LPCSTR)__malloc_dbg(0x101,2,0x1027a028,0x60);
      pWVar3 = (LPCWSTR)__malloc_dbg(0x202,2,0x1027a028,0x62);
      if ((in_stack_ffffffcc != (undefined2 *)0x0) &&
         (((in_stack_ffffffe0 != (undefined2 *)0x0 && (pCVar2 != (LPCSTR)0x0)) &&
          (pWVar3 != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)pCVar2;
        for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
          *local_1c = (CHAR)iVar1;
          local_1c = local_1c + 1;
        }
        BVar4 = GetCPInfo(DAT_10321d6c,&local_18);
        if ((BVar4 != 0) && (local_18.MaxCharSize < 3)) {
          DAT_1028b63c = local_18.MaxCharSize & 0xffff;
          if (1 < DAT_1028b63c) {
            for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (uVar6 = (uint)*local_1c; (int)uVar6 <= (int)(uint)local_1c[1]; uVar6 = uVar6 + 1)
              {
                pCVar2[uVar6] = '\0';
              }
            }
          }
          BVar4 = FUN_100ce290(1,pCVar2,0x100,in_stack_ffffffcc + 1,0,0,0);
          if (BVar4 != 0) {
            *in_stack_ffffffcc = 0;
            pWVar8 = pWVar3;
            for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
              *pWVar8 = (WCHAR)iVar1;
              pWVar8 = pWVar8 + 1;
            }
            BVar4 = FUN_100db2d0(1,pWVar3,0x100,in_stack_ffffffe0 + 1,0,0);
            if (BVar4 != 0) {
              *in_stack_ffffffe0 = 0;
              if (1 < (int)DAT_1028b63c) {
                for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (uVar6 = (uint)*local_1c; (int)uVar6 <= (int)(uint)local_1c[1];
                      uVar6 = uVar6 + 1) {
                    in_stack_ffffffcc[uVar6 + 1] = 0x8000;
                  }
                }
              }
              PTR_DAT_1028b430 = (undefined *)(in_stack_ffffffcc + 1);
              PTR_DAT_1028b434 = (undefined *)(in_stack_ffffffe0 + 1);
              if (DAT_10321f60 != (void *)0x0) {
                __free_dbg(DAT_10321f60,2);
              }
              DAT_10321f60 = in_stack_ffffffcc;
              if (DAT_10321f64 != (void *)0x0) {
                __free_dbg(DAT_10321f64,2);
              }
              DAT_10321f64 = in_stack_ffffffe0;
              __free_dbg(pCVar2,2);
              __free_dbg(pWVar3,2);
              return 0;
            }
          }
        }
      }
    }
    __free_dbg(in_stack_ffffffcc,2);
    pvVar7 = (void *)0x2;
    __free_dbg(in_stack_ffffffe0,2);
    __free_dbg(pvVar7,2);
    __free_dbg(pvVar7,2);
    uVar5 = 1;
  }
  return uVar5;
}

/* 100d6e20  FUN_100d6e20  (7 bytes)
 * undefined4 FUN_100d6e20(void)
 */
undefined4 FUN_100d6e20(void)

{
  return 0;
}

/* 100d6e30  FUN_100d6e30  (62 bytes)
 * int FUN_100d6e30(byte.conflict * param_1, byte.conflict * param_2)
 * called by: FUN_100cd4e0, FUN_100cdd60
 */
int __cdecl FUN_100d6e30(byte_conflict *param_1,byte_conflict *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}

/* 100d6e70  FUN_100d6e70  (58 bytes)
 * byte.conflict * FUN_100d6e70(byte.conflict * param_1, byte.conflict * param_2)
 * called by: FUN_100cd4e0
 */
byte_conflict * __cdecl FUN_100d6e70(byte_conflict *param_1,byte_conflict *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte_conflict *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}

/* 100d6eb0  FUN_100d6eb0  (512 bytes)
 * undefined4 FUN_100d6eb0(char * param_1, undefined2 * param_2, int param_3)
 * called by: FUN_100cdb70
 */
undefined4 __cdecl FUN_100d6eb0(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_10321fac == (code *)0x0) {
    iVar1 = FUN_100d7980();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_10321fac = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_100d77d0();
  }
  else {
    DAT_10321f9c = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_100d70b0(0x1028e870,0x40,(int *)&DAT_10321f9c);
    }
    DAT_10321fa0 = param_1 + 0x40;
    if ((DAT_10321fa0 != (char *)0x0) && (*DAT_10321fa0 != '\0')) {
      FUN_100d70b0(0x1028e7b8,0x16,(int *)&DAT_10321fa0);
    }
    DAT_10321fa4 = 0;
    if ((DAT_10321f9c == (char *)0x0) || (*DAT_10321f9c == '\0')) {
      if ((DAT_10321fa0 == (char *)0x0) || (*DAT_10321fa0 == '\0')) {
        FUN_100d77d0();
      }
      else {
        FUN_100d76d0();
      }
    }
    else if ((DAT_10321fa0 == (char *)0x0) || (*DAT_10321fa0 == '\0')) {
      FUN_100d7530();
    }
    else {
      FUN_100d7140();
    }
  }
  if (DAT_10321fa4 == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_100d7800((byte_conflict *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_10321f8c,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_10321f8c;
          param_2[1] = (undefined2)DAT_10321fa8;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_10321fac)(DAT_10321f8c,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_10321fac)(DAT_10321fa8,0x1002,param_3 + 0x40,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          __itoa(_Value,(char *)(param_3 + 0x80),10);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

/* 100d70b0  FUN_100d70b0  (130 bytes)
 * undefined FUN_100d70b0(int param_1, int param_2, int * param_3)
 * called by: FUN_100d6eb0
 */
void __cdecl FUN_100d70b0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_c = 1;
  local_10 = 0;
  while ((local_10 <= param_2 && (local_c != 0))) {
    iVar1 = (local_10 + param_2) / 2;
    local_c = FUN_100db540((byte_conflict *)*param_3,*(byte_conflict **)(param_1 + iVar1 * 8));
    if (local_c == 0) {
      *param_3 = param_1 + 4 + iVar1 * 8;
    }
    else if ((int)local_c < 0) {
      param_2 = iVar1 + -1;
    }
    else {
      local_10 = iVar1 + 1;
    }
  }
  return;
}

/* 100d7140  FUN_100d7140  (186 bytes)
 * undefined FUN_100d7140(void)
 * called by: FUN_100d6eb0
 */
void FUN_100d7140(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_10321f9c);
  DAT_10321f98 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_10321fa0);
  DAT_10321f90 = (uint)(sVar1 == 3);
  DAT_10321f8c = 0;
  if (DAT_10321f98 == 0) {
    local_8 = _GetPrimaryLen(DAT_10321f9c);
  }
  else {
    local_8 = 2;
  }
  DAT_10321f94 = local_8;
  EnumSystemLocalesA(FUN_100d7200,1);
  if ((((DAT_10321fa4 & 0x100) == 0) || ((DAT_10321fa4 & 0x200) == 0)) || ((DAT_10321fa4 & 7) == 0))
  {
    DAT_10321fa4 = 0;
  }
  return;
}

/* 100d7200  FUN_100d7200  (804 bytes)
 * bool FUN_100d7200(char * param_1)
 */
bool FUN_100d7200(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  byte_conflict local_7c [120];
  
  iVar2 = FUN_100d7b60(param_1);
  iVar3 = (*DAT_10321fac)(iVar2,(-(uint)(DAT_10321f90 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10321fa4 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_100db540(DAT_10321fa0,local_7c);
    if (uVar4 == 0) {
      iVar3 = (*DAT_10321fac)(iVar2,(-(uint)(DAT_10321f98 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10321fa4 = 0;
        return true;
      }
      uVar4 = FUN_100db540(DAT_10321f9c,local_7c);
      if (uVar4 == 0) {
        DAT_10321fa4 = DAT_10321fa4 | 0x304;
        DAT_10321f8c = iVar2;
        DAT_10321fa8 = iVar2;
      }
      else if ((DAT_10321fa4 & 2) == 0) {
        if ((DAT_10321f94 == 0) ||
           (iVar3 = FUN_100db610(DAT_10321f9c,(char *)local_7c,DAT_10321f94), iVar3 != 0)) {
          if (((DAT_10321fa4 & 1) == 0) && (iVar3 = FUN_100d78a0((short)iVar2), iVar3 != 0)) {
            DAT_10321fa4 = DAT_10321fa4 | 1;
            DAT_10321fa8 = iVar2;
          }
        }
        else {
          DAT_10321fa4 = DAT_10321fa4 | 2;
          DAT_10321fa8 = iVar2;
          sVar5 = _strlen((char *)DAT_10321f9c);
          if (sVar5 == DAT_10321f94) {
            DAT_10321f8c = iVar2;
          }
        }
      }
    }
    if ((DAT_10321fa4 & 0x300) != 0x300) {
      iVar3 = (*DAT_10321fac)(iVar2,(-(uint)(DAT_10321f98 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10321fa4 = 0;
        return true;
      }
      uVar4 = FUN_100db540(DAT_10321f9c,local_7c);
      if (uVar4 == 0) {
        uVar4 = DAT_10321fa4 | 0x200;
        if (DAT_10321f98 == 0) {
          DAT_10321fa4 = uVar4;
          if ((DAT_10321f94 == 0) || (sVar5 = _strlen((char *)DAT_10321f9c), sVar5 != DAT_10321f94))
          {
            DAT_10321fa4 = DAT_10321fa4 | 0x100;
            if (DAT_10321f8c == 0) {
              DAT_10321f8c = iVar2;
            }
          }
          else {
            iVar3 = FUN_100d78f0(iVar2,1);
            if ((iVar3 != 0) && (DAT_10321fa4 = DAT_10321fa4 | 0x100, DAT_10321f8c == 0)) {
              DAT_10321f8c = iVar2;
            }
          }
        }
        else {
          DAT_10321fa4 = DAT_10321fa4 | 0x300;
          if (DAT_10321f8c == 0) {
            DAT_10321f8c = iVar2;
          }
        }
      }
      else if ((((DAT_10321f98 == 0) && (DAT_10321f94 != 0)) &&
               (iVar3 = FUN_100db610(DAT_10321f9c,(char *)local_7c,DAT_10321f94), iVar3 == 0)) &&
              ((iVar3 = FUN_100d78f0(iVar2,0), iVar3 != 0 &&
               (DAT_10321fa4 = DAT_10321fa4 | 0x100, DAT_10321f8c == 0)))) {
        DAT_10321f8c = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10321fa4 & 4) != 0);
  }
  return (bool)cVar1;
}

/* 100d7530  FUN_100d7530  (116 bytes)
 * undefined FUN_100d7530(void)
 * called by: FUN_100d6eb0
 */
void FUN_100d7530(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_10321f9c);
  DAT_10321f98 = (uint)(sVar1 == 3);
  if (DAT_10321f98 == 0) {
    local_8 = _GetPrimaryLen(DAT_10321f9c);
  }
  else {
    local_8 = 2;
  }
  DAT_10321f94 = local_8;
  EnumSystemLocalesA(FUN_100d75b0,1);
  if ((DAT_10321fa4 & 4) == 0) {
    DAT_10321fa4 = 0;
  }
  return;
}

/* 100d75b0  FUN_100d75b0  (287 bytes)
 * bool FUN_100d75b0(char * param_1)
 */
bool FUN_100d75b0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte_conflict local_7c [120];
  
  iVar2 = FUN_100d7b60(param_1);
  iVar3 = (*DAT_10321fac)(iVar2,(-(uint)(DAT_10321f98 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10321fa4 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_100db540(DAT_10321f9c,local_7c);
    if (uVar4 == 0) {
      if ((DAT_10321f98 != 0) || (iVar3 = FUN_100d78f0(iVar2,1), iVar3 != 0)) {
        DAT_10321fa4 = DAT_10321fa4 | 4;
        DAT_10321f8c = iVar2;
        DAT_10321fa8 = iVar2;
      }
    }
    else if ((((DAT_10321f98 == 0) && (DAT_10321f94 != 0)) &&
             (iVar3 = FUN_100db610(DAT_10321f9c,(char *)local_7c,DAT_10321f94), iVar3 == 0)) &&
            (iVar3 = FUN_100d78f0(iVar2,0), iVar3 != 0)) {
      DAT_10321fa4 = DAT_10321fa4 | 4;
      DAT_10321f8c = iVar2;
      DAT_10321fa8 = iVar2;
    }
    cVar1 = '\x01' - ((DAT_10321fa4 & 4) != 0);
  }
  return (bool)cVar1;
}

/* 100d76d0  FUN_100d76d0  (69 bytes)
 * undefined FUN_100d76d0(void)
 * called by: FUN_100d6eb0
 */
void FUN_100d76d0(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_10321fa0);
  DAT_10321f90 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_100d7720,1);
  if ((DAT_10321fa4 & 4) == 0) {
    DAT_10321fa4 = 0;
  }
  return;
}

/* 100d7720  FUN_100d7720  (172 bytes)
 * bool FUN_100d7720(char * param_1)
 */
bool FUN_100d7720(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte_conflict local_7c [120];
  
  iVar2 = FUN_100d7b60(param_1);
  iVar3 = (*DAT_10321fac)(iVar2,(-(uint)(DAT_10321f90 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10321fa4 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_100db540(DAT_10321fa0,local_7c);
    if (uVar4 == 0) {
      iVar3 = FUN_100d78a0((short)iVar2);
      if (iVar3 != 0) {
        DAT_10321fa4 = DAT_10321fa4 | 4;
        DAT_10321f8c = iVar2;
        DAT_10321fa8 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10321fa4 & 4) != 0);
  }
  return (bool)cVar1;
}

/* 100d77d0  FUN_100d77d0  (43 bytes)
 * undefined FUN_100d77d0(void)
 * called by: FUN_100d6eb0
 */
void FUN_100d77d0(void)

{
  DAT_10321fa4 = DAT_10321fa4 | 0x104;
  DAT_10321fa8 = GetUserDefaultLCID();
  DAT_10321f8c = DAT_10321fa8;
  return;
}

/* 100d7800  FUN_100d7800  (155 bytes)
 * int FUN_100d7800(byte.conflict * param_1)
 * called by: FUN_100d6eb0
 */
int __cdecl FUN_100d7800(byte_conflict *param_1)

{
  int iVar1;
  byte_conflict local_c [8];
  
  if (((param_1 == (byte_conflict *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    iVar1 = (*DAT_10321fac)(DAT_10321fa8,0x1004,local_c,8);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = local_c;
  }
  else {
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 == 0) {
      iVar1 = (*DAT_10321fac)(DAT_10321fa8,0xb,local_c,8);
      if (iVar1 == 0) {
        return 0;
      }
      param_1 = local_c;
    }
  }
  iVar1 = FUN_100c0c30(param_1);
  return iVar1;
}

/* 100d78a0  FUN_100d78a0  (79 bytes)
 * undefined4 FUN_100d78a0(short param_1)
 * called by: FUN_100d7200, FUN_100d7720
 */
undefined4 __cdecl FUN_100d78a0(short param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_1028e7a4 + local_c * 2)) break;
    local_c = local_c + 1;
  }
  return 0;
}

/* 100d78f0  FUN_100d78f0  (135 bytes)
 * undefined4 FUN_100d78f0(int param_1, int param_2)
 * called by: FUN_100d7200, FUN_100d75b0
 */
undefined4 __cdecl FUN_100d78f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  char local_80 [120];
  uint local_8;
  
  local_8 = (uint)((ushort)param_1 & 0x3ff | 0x400);
  iVar1 = (*DAT_10321fac)(local_8,1,local_80,0x78);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_100d7b60(local_80);
    if ((param_1 != iVar1) && (param_2 != 0)) {
      sVar3 = _GetPrimaryLen(DAT_10321f9c);
      sVar4 = _strlen(DAT_10321f9c);
      if (sVar3 == sVar4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* 100d7980  FUN_100d7980  (77 bytes)
 * undefined4 FUN_100d7980(void)
 * called by: FUN_100d6eb0
 */
undefined4 FUN_100d7980(void)

{
  BOOL BVar1;
  undefined4 local_9c;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if ((BVar1 == 0) || (local_98.dwPlatformId != 2)) {
    local_9c = 0;
  }
  else {
    local_9c = 1;
  }
  return local_9c;
}

/* 100d7b60  FUN_100d7b60  (118 bytes)
 * int FUN_100d7b60(char * param_1)
 * called by: FUN_100d7200, FUN_100d75b0, FUN_100d7720, FUN_100d78f0
 */
int __cdecl FUN_100d7b60(char *param_1)

{
  char local_c;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    local_c = *param_1;
    param_1 = param_1 + 1;
    if (local_c == '\0') break;
    if ((local_c < 'a') || ('f' < local_c)) {
      if (('@' < local_c) && (local_c < 'G')) {
        local_c = local_c + -7;
      }
    }
    else {
      local_c = local_c + -0x27;
    }
    local_8 = local_8 * 0x10 + -0x30 + (int)local_c;
  }
  return local_8;
}

/* 100d7c60  FUN_100d7c60  (122 bytes)
 * uint FUN_100d7c60(LPWSTR param_1, byte.conflict * param_2, uint param_3)
 * called by: FUN_100cf450
 */
uint __cdecl FUN_100d7c60(LPWSTR param_1,byte_conflict *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_103222b8);
  bVar2 = DAT_103222a8 == 0;
  if (!bVar2) {
    InterlockedDecrement(&DAT_103222b8);
    FUN_100c4260(0x13);
  }
  uVar1 = FUN_100d7ce0(param_1,param_2,param_3);
  if (bVar2) {
    InterlockedDecrement(&DAT_103222b8);
  }
  else {
    FUN_100c4300(0x13);
  }
  return uVar1;
}

/* 100d7ce0  FUN_100d7ce0  (350 bytes)
 * uint FUN_100d7ce0(LPWSTR param_1, byte.conflict * param_2, uint param_3)
 * called by: FUN_100d7c60
 */
uint __cdecl FUN_100d7ce0(LPWSTR param_1,byte_conflict *param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (((DAT_1028b63c != 1) && (DAT_1028b63c != 2)) &&
     (iVar2 = FUN_100c32e0(2,0x1027a6bc,0x4f,0,(byte_conflict *)"MB_CUR_MAX == 1 || MB_CUR_MAX == 2"
                          ), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_2 == (byte_conflict *)0x0) || (param_3 == 0)) {
    uVar3 = 0;
  }
  else if (*param_2 == '\0') {
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
    uVar3 = 0;
  }
  else if (DAT_10321d5c == 0) {
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = (ushort)*param_2;
    }
    uVar3 = 1;
  }
  else if ((*(ushort *)(PTR_DAT_1028b430 + (uint)*param_2 * 2) & 0x8000) == 0) {
    iVar2 = MultiByteToWideChar(DAT_10321d6c,9,(LPCSTR)param_2,1,param_1,
                                (uint)(param_1 != (LPWSTR)0x0));
    if (iVar2 == 0) {
      puVar4 = (undefined4 *)FUN_100c6040();
      *puVar4 = 0x2a;
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 1;
    }
  }
  else if (((((int)DAT_1028b63c < 2) || ((int)param_3 < (int)DAT_1028b63c)) ||
           (iVar2 = MultiByteToWideChar(DAT_10321d6c,9,(LPCSTR)param_2,DAT_1028b63c,param_1,
                                        (uint)(param_1 != (LPWSTR)0x0)), uVar3 = DAT_1028b63c,
           iVar2 == 0)) && ((param_3 < DAT_1028b63c || (uVar3 = DAT_1028b63c, param_2[1] == '\0'))))
  {
    puVar4 = (undefined4 *)FUN_100c6040();
    *puVar4 = 0x2a;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* 100d7e60  FUN_100d7e60  (102 bytes)
 * uint FUN_100d7e60(uint param_1, undefined * * param_2)
 */
uint __cdecl FUN_100d7e60(uint param_1,undefined **param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 == (undefined **)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x1027a6ec,0x31,0,(byte_conflict *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_100c5a40(param_2);
  uVar3 = FUN_100d7ed0(param_1,(int *)param_2);
  FUN_100c5ab0(param_2);
  return uVar3;
}

/* 100d7ed0  FUN_100d7ed0  (318 bytes)
 * uint FUN_100d7ed0(uint param_1, int * param_2)
 * called by: FUN_100d08f0, FUN_100d7e60
 */
uint __cdecl FUN_100d7ed0(uint param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 == (int *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x1027a6ec,0x60,0,(byte_conflict *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_1 == 0xffffffff) ||
     (((param_2[3] & 1U) == 0 && (((param_2[3] & 0x80U) == 0 || ((param_2[3] & 2U) != 0)))))) {
    uVar3 = 0xffffffff;
  }
  else {
    if (param_2[2] == 0) {
      FUN_100d1440(param_2);
    }
    if (*param_2 == param_2[2]) {
      if (param_2[1] != 0) {
        return 0xffffffff;
      }
      *param_2 = *param_2 + 1;
    }
    if ((param_2[3] & 0x40U) == 0) {
      *param_2 = *param_2 + -1;
      *(char *)*param_2 = (char)param_1;
    }
    else {
      *param_2 = *param_2 + -1;
      if (*(char *)*param_2 != (char)param_1) {
        *param_2 = *param_2 + 1;
        return 0xffffffff;
      }
    }
    param_2[1] = param_2[1] + 1;
    param_2[3] = param_2[3] & 0xffffffef;
    param_2[3] = param_2[3] | 1;
    uVar3 = param_1 & 0xff;
  }
  return uVar3;
}

/* 100d8010  FUN_100d8010  (836 bytes)
 * undefined4 FUN_100d8010(UINT param_1)
 * called by: FUN_100d87f0
 */
undefined4 __cdecl FUN_100d8010(UINT param_1)

{
  UINT CodePage;
  undefined4 uVar1;
  BOOL BVar2;
  BYTE *local_2c;
  uint local_28;
  _cpinfo local_24;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  FUN_100c4260(0x19);
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_10322010) {
    FUN_100c4300(0x19);
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_100d84c0();
    FUN_100c4300(0x19);
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(UINT *)(&DAT_1028ea88 + local_8 * 0x30) == CodePage) {
        for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
          (&DAT_103221a0)[local_28] = 0;
        }
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          for (local_c = &DAT_1028ea98 + local_10 * 8 + local_8 * 0x30;
              (*local_c != 0 && (local_c[1] != 0)); local_c = local_c + 2) {
            for (local_28 = (uint)*local_c; local_28 <= local_c[1]; local_28 = local_28 + 1) {
              (&DAT_103221a1)[local_28] = (&DAT_103221a1)[local_28] | (&DAT_1028ea80)[local_10];
            }
          }
        }
        DAT_1032209c = 1;
        DAT_10322010 = CodePage;
        DAT_103222a4 = FUN_100d83c0(CodePage);
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          *(undefined2 *)(&DAT_10322090 + local_10 * 2) =
               *(undefined2 *)(&DAT_1028ea8c + local_10 * 2 + local_8 * 0x30);
        }
        FUN_100d84c0();
        FUN_100c4300(0x19);
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&local_24);
    if (BVar2 == 1) {
      for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
        (&DAT_103221a0)[local_28] = 0;
      }
      DAT_103222a4 = 0;
      if (local_24.MaxCharSize < 2) {
        DAT_1032209c = 0;
        DAT_10322010 = CodePage;
      }
      else {
        DAT_10322010 = CodePage;
        for (local_2c = local_24.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (local_28 = (uint)*local_2c; local_28 <= local_2c[1]; local_28 = local_28 + 1) {
            (&DAT_103221a1)[local_28] = (&DAT_103221a1)[local_28] | 4;
          }
        }
        for (local_28 = 1; local_28 < 0xff; local_28 = local_28 + 1) {
          (&DAT_103221a1)[local_28] = (&DAT_103221a1)[local_28] | 8;
        }
        DAT_103222a4 = FUN_100d83c0(DAT_10322010);
        DAT_1032209c = 1;
      }
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(undefined2 *)(&DAT_10322090 + local_10 * 2) = 0;
      }
      FUN_100d84c0();
      FUN_100c4300(0x19);
      uVar1 = 0;
    }
    else if (DAT_10321fb0 == 0) {
      FUN_100c4300(0x19);
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_100d84c0();
      FUN_100c4300(0x19);
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* 100d83c0  FUN_100d83c0  (80 bytes)
 * undefined4 FUN_100d83c0(undefined4 param_1)
 * called by: FUN_100d8010
 */
undefined4 __cdecl FUN_100d83c0(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x3a4:
    uVar1 = 0x411;
    break;
  default:
    uVar1 = 0;
    break;
  case 0x3a8:
    uVar1 = 0x804;
    break;
  case 0x3b5:
    uVar1 = 0x412;
    break;
  case 0x3b6:
    uVar1 = 0x404;
  }
  return uVar1;
}

/* 100d84c0  FUN_100d84c0  (770 bytes)
 * undefined FUN_100d84c0(void)
 * called by: FUN_100d8010
 */
void FUN_100d84c0(void)

{
  BOOL BVar1;
  uint local_520;
  WCHAR local_51c [128];
  WCHAR local_41c [128];
  _cpinfo local_31c;
  CHAR local_308 [256];
  WORD local_208 [256];
  BYTE *local_8;
  
  BVar1 = GetCPInfo(DAT_10322010,&local_31c);
  if (BVar1 == 1) {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      local_308[local_520] = (CHAR)local_520;
    }
    local_308[0] = ' ';
    for (local_8 = local_31c.LeadByte; *local_8 != 0; local_8 = local_8 + 2) {
      for (local_520 = (uint)*local_8; local_520 <= local_8[1]; local_520 = local_520 + 1) {
        local_308[local_520] = ' ';
      }
    }
    FUN_100ce290(1,local_308,0x100,local_208,DAT_10322010,DAT_103222a4,0);
    FUN_100cdf30(DAT_103222a4,0x100,local_308,0x100,local_41c,0x100,DAT_10322010,0);
    FUN_100cdf30(DAT_103222a4,0x200,local_308,0x100,local_51c,0x100,DAT_10322010,0);
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_208[local_520] & 1) == 0) {
        if ((local_208[local_520] & 2) == 0) {
          (&DAT_103220a0)[local_520] = 0;
        }
        else {
          (&DAT_103221a1)[local_520] = (&DAT_103221a1)[local_520] | 0x20;
          (&DAT_103220a0)[local_520] = *(undefined1 *)((int)local_51c + local_520);
        }
      }
      else {
        (&DAT_103221a1)[local_520] = (&DAT_103221a1)[local_520] | 0x10;
        (&DAT_103220a0)[local_520] = *(undefined1 *)((int)local_41c + local_520);
      }
    }
  }
  else {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_520 < 0x41) || (0x5a < local_520)) {
        if ((local_520 < 0x61) || (0x7a < local_520)) {
          (&DAT_103220a0)[local_520] = 0;
        }
        else {
          (&DAT_103221a1)[local_520] = (&DAT_103221a1)[local_520] | 0x20;
          (&DAT_103220a0)[local_520] = (char)local_520 + -0x20;
        }
      }
      else {
        (&DAT_103221a1)[local_520] = (&DAT_103221a1)[local_520] | 0x10;
        (&DAT_103220a0)[local_520] = (char)local_520 + ' ';
      }
    }
  }
  return;
}

/* 100d87d0  FUN_100d87d0  (23 bytes)
 * undefined4 FUN_100d87d0(void)
 */
undefined4 FUN_100d87d0(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10322010;
  if (DAT_1032209c == 0) {
    uVar1 = 0;
  }
  return uVar1;
}

/* 100d87f0  FUN_100d87f0  (34 bytes)
 * undefined FUN_100d87f0(void)
 * called by: FUN_100d0950, FUN_100d0aa0
 */
void FUN_100d87f0(void)

{
  if (DAT_103237c0 == 0) {
    FUN_100d8010(0xfffffffd);
    DAT_103237c0 = 1;
  }
  return;
}

/* 100d89e0  FUN_100d89e0  (315 bytes)
 * undefined FUN_100d89e0(char * param_1, int param_2, uint * param_3)
 * called by: FUN_100d3ac0
 */
void __cdecl FUN_100d89e0(char *param_1,int param_2,uint *param_3)

{
  short local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_10 = *param_3;
    local_c = param_3[1];
    local_8 = param_3[2];
    ___shl_12(param_3);
    ___shl_12(param_3);
    ___add_12(param_3,&local_10);
    ___shl_12(param_3);
    local_10 = (uint)*param_1;
    local_c = 0;
    local_8 = 0;
    ___add_12(param_3,&local_10);
    param_1 = param_1 + 1;
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
    local_14 = local_14 + -0x10;
  }
  while ((param_3[2] & 0x8000) == 0) {
    ___shl_12(param_3);
    local_14 = local_14 + -1;
  }
  *(short *)((int)param_3 + 10) = local_14;
  return;
}

/* 100d8b20  FUN_100d8b20  (1302 bytes)
 * undefined4 FUN_100d8b20(int param_1, uint param_2, ushort param_3, int param_4, uint param_5, short * param_6)
 * called by: FUN_100d26c0
 */
undefined4 __cdecl
FUN_100d8b20(int param_1,uint param_2,ushort param_3,int param_4,uint param_5,short *param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  char *pcVar4;
  uint local_78;
  short local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  int local_4c;
  int local_48;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 local_3c;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  undefined1 local_32;
  char cStack_31;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  char cStack_2d;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  ushort local_10;
  int local_c;
  short *local_8;
  
  _local_40 = CONCAT22(uStack_3e,0x4d);
  local_24 = 0x134312f4;
  local_58 = 0xcc;
  local_57 = 0xcc;
  local_56 = 0xcc;
  local_55 = 0xcc;
  local_54 = 0xcc;
  local_53 = 0xcc;
  local_52 = 0xcc;
  local_51 = 0xcc;
  local_50 = 0xcc;
  local_4f = 0xcc;
  local_4e = 0xfb;
  local_4d = 0x3f;
  local_5c = 1;
  local_28 = param_2;
  local_4c = param_1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((param_3 & 0x7fff) == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(undefined1 *)(param_6 + 1) = 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    local_5c = 1;
  }
  else if ((param_3 & 0x7fff) == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) || (param_1 != 0)) {
        if ((param_2 == 0x80000000) && (param_1 == 0)) {
          FUN_100bba20((uint *)(param_6 + 2),(uint *)"1#INF");
          *(undefined1 *)((int)param_6 + 3) = 5;
        }
        else {
          FUN_100bba20((uint *)(param_6 + 2),(uint *)"1#QNAN");
          *(undefined1 *)((int)param_6 + 3) = 6;
        }
      }
      else {
        FUN_100bba20((uint *)(param_6 + 2),(uint *)"1#IND");
        *(undefined1 *)((int)param_6 + 3) = 5;
      }
    }
    else {
      FUN_100bba20((uint *)(param_6 + 2),(uint *)"1#SNAN");
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    local_5c = 0;
  }
  else {
    local_10 = param_3 & 0xff;
    uVar3 = (ushort)(byte)(param_2 >> 0x18);
    _local_44 = CONCAT22(uStack_42,uVar3);
    local_c = (param_3 & 0x7fff) * 0x4d10 + (uint)(param_3 >> 8 & 0x7f) * 0x4d + (uint)uVar3 * 0x9a
              + -0x134312f4;
    local_60 = (short)((uint)local_c >> 0x10);
    local_32 = (undefined1)(param_3 & 0x7fff);
    cStack_31 = (char)((param_3 & 0x7fff) >> 8);
    local_3c = 0;
    uStack_36 = param_2;
    uStack_3a = param_1;
    FUN_100d9730((int *)&local_3c,-(int)local_60,1);
    if (0x3ffe < CONCAT11(cStack_31,local_32)) {
      local_60 = local_60 + 1;
      FUN_100d92f0((int *)&local_3c,(int *)&local_58);
    }
    *param_6 = local_60;
    if (((param_5 & 1) == 0) || (param_4 = param_4 + local_60, 0 < param_4)) {
      if (0x15 < param_4) {
        param_4 = 0x15;
      }
      iVar2 = CONCAT11(cStack_31,local_32) - 0x3ffe;
      uStack_30 = (undefined2)iVar2;
      uStack_2e = (undefined1)((uint)iVar2 >> 0x10);
      cStack_2d = (char)((uint)iVar2 >> 0x18);
      local_32 = 0;
      cStack_31 = '\0';
      for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
        ___shl_12((uint *)&local_3c);
      }
      if (cStack_2d < '\0') {
        for (local_78 = -CONCAT13(cStack_2d,CONCAT12(uStack_2e,uStack_30)) & 0xff; 0 < (int)local_78
            ; local_78 = local_78 - 1) {
          ___shr_12((uint *)&local_3c);
        }
      }
      local_8 = param_6 + 2;
      local_14 = param_4 + 1;
      iVar2 = uStack_3a;
      uVar1 = uStack_36;
      while( true ) {
        uStack_36._2_2_ = (undefined2)(uVar1 >> 0x10);
        uStack_36._0_2_ = (undefined2)uVar1;
        uStack_3a._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
        uStack_3a._0_2_ = (undefined2)iVar2;
        if (local_14 < 1) break;
        local_20 = CONCAT22((undefined2)uStack_3a,local_3c);
        local_1c = CONCAT22((undefined2)uStack_36,uStack_3a._2_2_);
        local_18 = CONCAT13(cStack_31,CONCAT12(local_32,uStack_36._2_2_));
        uStack_3a = iVar2;
        uStack_36 = uVar1;
        ___shl_12((uint *)&local_3c);
        ___shl_12((uint *)&local_3c);
        ___add_12((uint *)&local_3c,&local_20);
        ___shl_12((uint *)&local_3c);
        *(char *)local_8 = cStack_31 + '0';
        local_8 = (short *)((int)local_8 + 1);
        cStack_31 = '\0';
        local_14 = local_14 + -1;
        iVar2 = uStack_3a;
        uVar1 = uStack_36;
      }
      pcVar4 = (char *)((int)local_8 + -1);
      local_8 = local_8 + -1;
      if (*pcVar4 < '5') {
        for (; (param_6 + 2 <= local_8 && ((char)*local_8 == '0'));
            local_8 = (short *)((int)local_8 + -1)) {
        }
        if (local_8 < param_6 + 2) {
          *param_6 = 0;
          *(undefined1 *)(param_6 + 1) = 0x20;
          *(undefined1 *)((int)param_6 + 3) = 1;
          *(undefined1 *)(param_6 + 2) = 0x30;
          *(undefined1 *)((int)param_6 + 5) = 0;
          return 1;
        }
      }
      else {
        for (; (param_6 + 2 <= local_8 && ((char)*local_8 == '9'));
            local_8 = (short *)((int)local_8 + -1)) {
          *(char *)local_8 = '0';
        }
        if (local_8 < param_6 + 2) {
          local_8 = (short *)((int)local_8 + 1);
          *param_6 = *param_6 + 1;
        }
        *(char *)local_8 = (char)*local_8 + '\x01';
      }
      *(char *)((int)param_6 + 3) = ((char)local_8 - ((char)param_6 + '\x04')) + '\x01';
      *(undefined1 *)((int)param_6 + *(char *)((int)param_6 + 3) + 4) = 0;
    }
    else {
      *param_6 = 0;
      *(undefined1 *)(param_6 + 1) = 0x20;
      *(undefined1 *)((int)param_6 + 3) = 1;
      *(undefined1 *)(param_6 + 2) = 0x30;
      *(undefined1 *)((int)param_6 + 5) = 0;
      local_5c = 1;
    }
  }
  return local_5c;
}

/* 100d9040  FUN_100d9040  (115 bytes)
 * int FUN_100d9040(uint param_1, int param_2)
 */
int __cdecl FUN_100d9040(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 < DAT_1032243c) &&
     ((*(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100d3380(param_1);
    iVar2 = FUN_100d90c0(param_1,param_2);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 9;
    iVar2 = -1;
  }
  return iVar2;
}

/* 100d90c0  FUN_100d90c0  (560 bytes)
 * int FUN_100d90c0(uint param_1, int param_2)
 * called by: FUN_100d3560, FUN_100d9040
 */
int __cdecl FUN_100d90c0(uint param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  DWORD *pDVar6;
  undefined4 *puVar7;
  HANDLE hFile;
  BOOL BVar8;
  uint local_1028;
  int local_1020;
  uint local_101c;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_100bdb10();
  local_1020 = 0;
  if (param_2 < 0) {
    uStackY_28 = 0x100d9104;
    iVar2 = FUN_100c32e0(2,0x1027a718,0x81,0,(byte_conflict *)"size >= 0");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  DVar3 = FUN_100c64c0(param_1,0,1);
  if ((DVar3 == 0xffffffff) || (DVar4 = FUN_100c64c0(param_1,0,2), DVar4 == 0xffffffff)) {
    local_1020 = -1;
  }
  else {
    local_101c = param_2 - DVar4;
    if ((int)local_101c < 1) {
      if ((int)local_101c < 0) {
        FUN_100c64c0(param_1,param_2,0);
        hFile = (HANDLE)FUN_100d3200(param_1);
        BVar8 = SetEndOfFile(hFile);
        local_1020 = (BVar8 != 0) - 1;
        if (local_1020 == -1) {
          puVar7 = (undefined4 *)FUN_100c6040();
          *puVar7 = 0xd;
          DVar4 = GetLastError();
          pDVar6 = FUN_100c6050();
          *pDVar6 = DVar4;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      iVar2 = FUN_100db7a0(param_1,0x8000);
      do {
        if ((int)local_101c < 0x1000) {
          local_1028 = local_101c;
        }
        else {
          local_1028 = 0x1000;
        }
        iVar5 = FUN_100c71f0(param_1,local_1008,local_1028);
        if (iVar5 == -1) {
          pDVar6 = FUN_100c6050();
          if (*pDVar6 == 5) {
            puVar7 = (undefined4 *)FUN_100c6040();
            *puVar7 = 0xd;
          }
          local_1020 = -1;
          break;
        }
        local_101c = local_101c - iVar5;
      } while (0 < (int)local_101c);
      FUN_100db7a0(param_1,iVar2);
    }
    FUN_100c64c0(param_1,DVar3,0);
  }
  return local_1020;
}

/* 100d92f0  FUN_100d92f0  (1085 bytes)
 * undefined FUN_100d92f0(int * param_1, int * param_2)
 * called by: FUN_100d8b20, FUN_100d9730
 */
void __cdecl FUN_100d92f0(int *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int local_38;
  ushort local_34;
  int local_2c;
  int local_28;
  int local_20;
  undefined4 local_18;
  short local_14 [4];
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  local_18._0_2_ = 0;
  local_18._2_2_ = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  uVar1 = *(ushort *)((int)param_1 + 10);
  uVar2 = *(ushort *)((int)param_2 + 10);
  uVar3 = uVar1 ^ uVar2;
  local_34 = (uVar1 & 0x7fff) + (uVar2 & 0x7fff);
  if ((((uVar1 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) && (local_34 < 0xbffe)) {
    if (local_34 < 0x3fc0) {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    else if ((((uVar1 & 0x7fff) == 0) && (local_34 = local_34 + 1, (param_1[2] & 0x7fffffffU) == 0))
            && ((param_1[1] == 0 && (*param_1 == 0)))) {
      *(undefined2 *)((int)param_1 + 10) = 0;
    }
    else if ((((uVar2 & 0x7fff) == 0) && (local_34 = local_34 + 1, (param_2[2] & 0x7fffffffU) == 0))
            && ((param_2[1] == 0 && (*param_2 == 0)))) {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    else {
      local_2c = 0;
      for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
        local_28 = local_20 << 1;
        local_c = 8;
        for (local_38 = 5 - local_20; 0 < local_38; local_38 = local_38 + -1) {
          iVar4 = ___addl(*(uint *)((int)&local_18 + local_2c),
                          (uint)*(ushort *)((int)param_1 + local_28) *
                          (uint)*(ushort *)((int)param_2 + local_c),
                          (uint *)((int)&local_18 + local_2c));
          if (iVar4 != 0) {
            *(short *)((int)local_14 + local_2c) = *(short *)((int)local_14 + local_2c) + 1;
          }
          local_28 = local_28 + 2;
          local_c = local_c + -2;
        }
        local_2c = local_2c + 2;
      }
      local_34 = local_34 + 0xc002;
      while ((0 < (short)local_34 && ((local_14[3] & 0x8000U) == 0))) {
        ___shl_12(&local_18);
        local_34 = local_34 - 1;
      }
      if ((short)local_34 < 1) {
        for (local_34 = local_34 - 1; (short)local_34 < 0; local_34 = local_34 + 1) {
          if (((ushort)local_18 & 1) != 0) {
            local_8 = local_8 + 1;
          }
          ___shr_12(&local_18);
        }
        if (local_8 != 0) {
          local_18._0_2_ = (ushort)local_18 | 1;
        }
      }
      iVar4 = CONCAT22(local_14[0],local_18._2_2_);
      if ((0x8000 < (ushort)local_18) ||
         (iVar5 = CONCAT22(local_14[2],local_14[1]),
         (CONCAT22(local_18._2_2_,(ushort)local_18) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_14[0],local_18._2_2_) == -1) {
          iVar4 = 0;
          if (CONCAT22(local_14[2],local_14[1]) == -1) {
            iVar5 = 0;
            if (local_14[3] == 0xffff) {
              local_14[3] = 0x8000;
              local_34 = local_34 + 1;
            }
            else {
              local_14[3] = local_14[3] + 1;
            }
          }
          else {
            iVar5 = CONCAT22(local_14[2],local_14[1]) + 1;
          }
        }
        else {
          iVar4 = CONCAT22(local_14[0],local_18._2_2_) + 1;
          iVar5 = CONCAT22(local_14[2],local_14[1]);
        }
      }
      local_14[0] = (short)((uint)iVar4 >> 0x10);
      local_18._2_2_ = (undefined2)iVar4;
      local_14[2] = (short)((uint)iVar5 >> 0x10);
      local_14[1] = (short)iVar5;
      if (local_34 < 0x7fff) {
        *(undefined2 *)param_1 = local_18._2_2_;
        *(uint *)((int)param_1 + 2) = CONCAT22(local_14[1],local_14[0]);
        *(uint *)((int)param_1 + 6) = CONCAT22(local_14[3],local_14[2]);
        *(ushort *)((int)param_1 + 10) = local_34 | uVar3 & 0x8000;
      }
      else {
        param_1[2] = (-(uint)((uVar3 & 0x8000) != 0) & 0x80000000) + 0x7fff8000;
        param_1[1] = 0;
        *param_1 = 0;
      }
    }
  }
  else {
    param_1[2] = (-(uint)((uVar3 & 0x8000) != 0) & 0x80000000) + 0x7fff8000;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}

/* 100d9730  FUN_100d9730  (195 bytes)
 * undefined FUN_100d9730(int * param_1, uint param_2, int param_3)
 * called by: FUN_100d3ac0, FUN_100d8b20
 */
void __cdecl FUN_100d9730(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined2 local_18;
  undefined4 uStack_16;
  undefined2 uStack_12;
  undefined *local_10;
  undefined **local_c;
  undefined **local_8;
  
  local_8 = &PTR_s_November_1028ec10;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      local_8 = (undefined **)&DAT_1028ed70;
    }
    uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16);
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
      uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16);
    }
    while (param_2 != 0) {
      local_8 = local_8 + 0x15;
      uVar1 = param_2 & 7;
      param_2 = (int)param_2 >> 3;
      if (uVar1 != 0) {
        local_c = local_8 + uVar1 * 3;
        if (0x7fff < *(ushort *)local_c) {
          local_18 = SUB42(*local_c,0);
          uStack_16._0_2_ = (undefined2)((uint)*local_c >> 0x10);
          uStack_16._2_2_ = SUB42(local_c[1],0);
          uStack_12 = (undefined2)((uint)local_c[1] >> 0x10);
          local_10 = local_c[2];
          uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16) + -1;
          local_c = (undefined **)&local_18;
        }
        FUN_100d92f0(param_1,(int *)local_c);
      }
    }
  }
  return;
}

/* 100d9800  FUN_100d9800  (46 bytes)
 * char * FUN_100d9800(char * param_1)
 */
char * __cdecl FUN_100d9800(char *param_1)

{
  char *pcVar1;
  
  FUN_100c4260(0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_100c4300(0xc);
  return pcVar1;
}

/* 100d9900  FUN_100d9900  (700 bytes)
 * float10 FUN_100d9900(uint param_1, uint param_2, int param_3)
 * called by: FUN_100d5380
 */
float10 __cdecl FUN_100d9900(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  short sVar4;
  uint uVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  int local_14;
  uint local_10;
  double local_c;
  
  local_10 = FUN_100cf390();
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_100cf190(param_1,param_2);
    if (0 < iVar1) {
      if (iVar1 < 3) {
        FUN_100cf390();
        return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      }
      if (iVar1 == 3) {
        local_2c = SUB84((double)param_3,0);
        fVar2 = FUN_100ce4b0(0x19,param_1,param_2,local_2c,(int)((ulonglong)(double)param_3 >> 0x20)
                            );
        return fVar2;
      }
    }
    dVar3 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + 1.0;
    uStack_30 = (undefined4)((ulonglong)(double)param_3 >> 0x20);
    local_34 = SUB84((double)param_3,0);
    fVar2 = FUN_100ce5e0(8,0x19,param_1,param_2,local_34,uStack_30,SUB84(dVar3,0),
                         (int)((ulonglong)dVar3 >> 0x20),local_10);
    return fVar2;
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == 0.0) {
    FUN_100cf390();
    return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  fVar2 = FUN_100cf210(param_1,param_2,&local_14);
  dVar3 = (double)fVar2;
  if (param_3 < 0) {
    local_38 = -param_3;
  }
  else {
    local_38 = param_3;
  }
  if (local_38 <= 0x7fffffff) {
    local_18 = local_14 + param_3;
  }
  else {
    local_18 = param_3;
  }
  local_20 = SUB84(dVar3,0);
  uStack_1c = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (0xa00 < local_18) {
    uVar5 = local_10;
    dVar3 = __copysign((double)CONCAT44(DAT_1028e044,DAT_1028e040),dVar3);
    uStack_3c = (undefined4)((ulonglong)(double)param_3 >> 0x20);
    local_40 = SUB84((double)param_3,0);
    fVar2 = FUN_100ce5e0(0x11,0x19,param_1,param_2,local_40,uStack_3c,SUB84(dVar3,0),
                         (int)((ulonglong)dVar3 >> 0x20),uVar5);
    return fVar2;
  }
  sVar4 = (short)local_18;
  if (0x400 < local_18) {
    fVar2 = FUN_100cf0a0(local_20,uStack_1c,sVar4 + -0x600);
    local_c = (double)fVar2;
    uStack_44 = (undefined4)((ulonglong)(double)param_3 >> 0x20);
    local_48 = SUB84((double)param_3,0);
    fVar2 = FUN_100ce5e0(0x11,0x19,param_1,param_2,local_48,uStack_44,local_c._0_4_,
                         (int)((ulonglong)local_c >> 0x20),local_10);
    return fVar2;
  }
  if (local_18 < -0x9fd) {
    uStack_4c = (undefined4)((ulonglong)(double)param_3 >> 0x20);
    local_50 = SUB84((double)param_3,0);
    fVar2 = FUN_100ce5e0(0x12,0x19,param_1,param_2,local_50,uStack_4c,SUB84(dVar3 * 0.0,0),
                         (int)((ulonglong)(dVar3 * 0.0) >> 0x20),local_10);
    return fVar2;
  }
  if (local_18 < -0x3fd) {
    fVar2 = FUN_100cf0a0(local_20,uStack_1c,sVar4 + 0x600);
    local_c = (double)fVar2;
    uStack_54 = (undefined4)((ulonglong)(double)param_3 >> 0x20);
    local_58 = SUB84((double)param_3,0);
    fVar2 = FUN_100ce5e0(0x12,0x19,param_1,param_2,local_58,uStack_54,local_c._0_4_,
                         (int)((ulonglong)local_c >> 0x20),local_10);
    return fVar2;
  }
  fVar2 = FUN_100cf0a0(local_20,uStack_1c,sVar4);
  local_c = (double)fVar2;
  FUN_100cf390();
  return (float10)local_c;
}

/* 100d9bc0  FUN_100d9bc0  (289 bytes)
 * undefined1 * FUN_100d9bc0(void)
 */
undefined1 * FUN_100d9bc0(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *_Str;
  undefined1 *puVar6;
  undefined1 *local_18;
  uint local_14;
  int local_c;
  
  puVar1 = PTR_PTR_1028eb78;
  local_c = 0;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x1c));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = _malloc(local_c + 1);
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_100bba20((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_100bba20(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}

/* 100d9cf0  FUN_100d9cf0  (291 bytes)
 * undefined1 * FUN_100d9cf0(void)
 */
undefined1 * FUN_100d9cf0(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *_Str;
  undefined1 *puVar6;
  undefined1 *local_18;
  uint local_14;
  int local_c;
  
  puVar1 = PTR_PTR_1028eb78;
  local_c = 0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x38));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x68));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = _malloc(local_c + 1);
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_100bba20((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_100bba20(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}

/* 100d9e20  FUN_100d9e20  (878 bytes)
 * undefined4 * FUN_100d9e20(void)
 */
undefined4 * FUN_100d9e20(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *local_18;
  uint local_14;
  int local_c;
  
  puVar1 = PTR_PTR_1028eb78;
  local_c = 0;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x1c));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x38));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x68));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  sVar2 = _strlen(*(char **)(puVar1 + 0x98));
  sVar3 = _strlen(*(char **)(puVar1 + 0x9c));
  sVar4 = _strlen(*(char **)(puVar1 + 0xa0));
  sVar5 = _strlen(*(char **)(puVar1 + 0xa4));
  sVar6 = _strlen(*(char **)(puVar1 + 0xa8));
  puVar7 = _malloc(sVar3 + local_c + sVar2 + sVar4 + sVar5 + sVar6 + 0xb1);
  if (puVar7 != (undefined4 *)0x0) {
    local_18 = puVar7 + 0x2b;
    FUN_100bc090(puVar7,(undefined4 *)PTR_PTR_1028eb78,0xac);
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      puVar7[local_14] = local_18;
      puVar8 = FUN_100bba20(local_18,*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 7] = local_18;
      puVar8 = FUN_100bba20(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      puVar7[local_14 + 0xe] = local_18;
      puVar8 = FUN_100bba20(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 0x1a] = local_18;
      puVar8 = FUN_100bba20(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    puVar7[0x26] = local_18;
    puVar8 = FUN_100bba20(local_18,*(uint **)(puVar1 + 0x98));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x27] = local_18;
    puVar8 = FUN_100bba20(local_18,*(uint **)(puVar1 + 0x9c));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x28] = local_18;
    puVar8 = FUN_100bba20(local_18,*(uint **)(puVar1 + 0xa0));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x29] = local_18;
    puVar8 = FUN_100bba20(local_18,*(uint **)(puVar1 + 0xa4));
    sVar2 = _strlen((char *)puVar8);
    puVar7[0x2a] = (int)local_18 + sVar2 + 1;
  }
  return puVar7;
}

/* 100da190  FUN_100da190  (31 bytes)
 * undefined FUN_100da190(byte.conflict * param_1, uint param_2, byte.conflict * param_3, int * param_4)
 */
void __cdecl FUN_100da190(byte_conflict *param_1,uint param_2,byte_conflict *param_3,int *param_4)

{
  FUN_100da1b0(param_1,param_2,param_3,param_4,(undefined *)0x0);
  return;
}

/* 100da1b0  FUN_100da1b0  (394 bytes)
 * int FUN_100da1b0(byte.conflict * param_1, uint param_2, byte.conflict * param_3, int * param_4, undefined * param_5)
 * called by: FUN_100da190
 */
int __cdecl
FUN_100da1b0(byte_conflict *param_1,uint param_2,byte_conflict *param_3,int *param_4,
            undefined *param_5)

{
  byte_conflict *pbVar1;
  int iVar2;
  bool bVar3;
  undefined *local_14;
  uint local_10;
  uint local_c;
  undefined *local_8;
  
  local_10 = param_2;
  InterlockedIncrement(&DAT_103222b8);
  bVar3 = DAT_103222a8 != 0;
  if (bVar3) {
    InterlockedDecrement(&DAT_103222b8);
    FUN_100c4260(0x13);
  }
  local_c = (uint)bVar3;
  if (param_5 == (undefined *)0x0) {
    local_14 = PTR_PTR_1028eb78;
  }
  else {
    local_14 = param_5;
  }
  local_8 = local_14;
  for (; (local_10 != 0 && (*param_3 != '\0')); param_3 = param_3 + 1) {
    if (*param_3 == '%') {
      bVar3 = param_3[1] == '#';
      pbVar1 = param_3 + 1;
      if (bVar3) {
        pbVar1 = param_3 + 2;
      }
      param_3 = pbVar1;
      DAT_10321ffc = (uint)bVar3;
      FUN_100da340(*param_3,param_4,(int *)&param_1,&local_10,(int)local_8);
    }
    else {
      if (((*(ushort *)(PTR_DAT_1028b430 + (uint)*param_3 * 2) & 0x8000) != 0) && (1 < local_10)) {
        *param_1 = *param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        local_10 = local_10 - 1;
      }
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      local_10 = local_10 - 1;
    }
  }
  if (local_c == 0) {
    InterlockedDecrement(&DAT_103222b8);
  }
  else {
    FUN_100c4300(0x13);
  }
  if (local_10 == 0) {
    iVar2 = 0;
  }
  else {
    *param_1 = '\0';
    iVar2 = param_2 - local_10;
  }
  return iVar2;
}

/* 100da340  FUN_100da340  (1389 bytes)
 * undefined FUN_100da340(undefined1 param_1, int * param_2, int * param_3, uint * param_4, int param_5)
 * called by: FUN_100da1b0, FUN_100dab10
 */
void __cdecl FUN_100da340(undefined1 param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  int local_c;
  int local_8;
  
  switch(param_1) {
  case 0x25:
    *(undefined1 *)*param_3 = 0x25;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 - 1;
    break;
  case 0x41:
    FID_conflict__store_str(*(char **)(param_5 + 0x1c + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x42:
    FID_conflict__store_str(*(char **)(param_5 + 0x68 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 0x48:
    DAT_1032200c = DAT_10321ffc;
    FUN_100da9b0(param_2[2],2,param_3,param_4);
    break;
  case 0x49:
    DAT_1032200c = DAT_10321ffc;
    local_8 = param_2[2] % 0xc;
    if (local_8 == 0) {
      local_8 = 0xc;
    }
    FUN_100da9b0(local_8,2,param_3,param_4);
    break;
  case 0x4d:
    DAT_1032200c = DAT_10321ffc;
    FUN_100da9b0(param_2[1],2,param_3,param_4);
    break;
  case 0x53:
    DAT_1032200c = DAT_10321ffc;
    FUN_100da9b0(*param_2,2,param_3,param_4);
    break;
  case 0x55:
    local_c = param_2[6];
    goto LAB_100da6ed;
  case 0x57:
    if (param_2[6] == 0) {
      local_c = 6;
    }
    else {
      local_c = param_2[6] + -1;
    }
LAB_100da6ed:
    DAT_1032200c = DAT_10321ffc;
    if (param_2[7] < local_c) {
      local_8 = 0;
    }
    else {
      local_8 = param_2[7] / 7;
      if (local_c <= param_2[7] % 7) {
        local_8 = local_8 + 1;
      }
    }
    FUN_100da9b0(local_8,2,param_3,param_4);
    break;
  case 0x58:
    DAT_10321ffc = 0;
    FUN_100dab10(*(byte_conflict **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
    break;
  case 0x59:
    DAT_1032200c = DAT_10321ffc;
    FUN_100da9b0((param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100,4,param_3,param_4);
    break;
  case 0x5a:
  case 0x7a:
    FUN_100d4640();
    FID_conflict__store_str((&PTR_DAT_1028e264)[param_2[8] != 0],param_3,(int *)param_4);
    break;
  case 0x61:
    FID_conflict__store_str(*(char **)(param_5 + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x62:
    FID_conflict__store_str(*(char **)(param_5 + 0x38 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 99:
    if (DAT_10321ffc == 0) {
      FUN_100dab10(*(byte_conflict **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_100dab10(*(byte_conflict **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    else {
      DAT_10321ffc = 0;
      FUN_100dab10(*(byte_conflict **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_100dab10(*(byte_conflict **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    break;
  case 100:
    DAT_1032200c = DAT_10321ffc;
    FUN_100da9b0(param_2[3],2,param_3,param_4);
    break;
  case 0x6a:
    DAT_1032200c = DAT_10321ffc;
    FUN_100da9b0(param_2[7] + 1,3,param_3,param_4);
    break;
  case 0x6d:
    DAT_1032200c = DAT_10321ffc;
    FUN_100da9b0(param_2[4] + 1,2,param_3,param_4);
    break;
  case 0x70:
    if (param_2[2] < 0xc) {
      FID_conflict__store_str(*(char **)(param_5 + 0x98),param_3,(int *)param_4);
    }
    else {
      FID_conflict__store_str(*(char **)(param_5 + 0x9c),param_3,(int *)param_4);
    }
    break;
  case 0x77:
    DAT_1032200c = DAT_10321ffc;
    FUN_100da9b0(param_2[6],1,param_3,param_4);
    break;
  case 0x78:
    if (DAT_10321ffc == 0) {
      FUN_100dab10(*(byte_conflict **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
    }
    else {
      DAT_10321ffc = 0;
      FUN_100dab10(*(byte_conflict **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
    }
    break;
  case 0x79:
    DAT_1032200c = DAT_10321ffc;
    FUN_100da9b0(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}

/* 100da9b0  FUN_100da9b0  (173 bytes)
 * undefined FUN_100da9b0(int param_1, uint param_2, int * param_3, uint * param_4)
 * called by: FUN_100da340
 */
void __cdecl FUN_100da9b0(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_1032200c == 0) {
    if (param_2 < *param_4) {
      while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
        *(char *)(*param_3 + param_2) = (char)(param_1 % 10) + '0';
        param_1 = param_1 / 10;
        local_8 = local_8 + 1;
      }
      *param_3 = *param_3 + local_8;
      *param_4 = *param_4 - local_8;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    FID_conflict__store_number(param_1,param_3,param_4);
  }
  return;
}

/* 100dab10  FUN_100dab10  (1152 bytes)
 * undefined FUN_100dab10(byte.conflict * param_1, int param_2, int * param_3, uint * param_4, int param_5)
 * called by: FUN_100da340
 */
void __cdecl FUN_100dab10(byte_conflict *param_1,int param_2,int *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  byte *local_14;
  uint local_10;
  char local_c;
  byte_conflict *local_8;
  
LAB_100dab16:
  do {
    if ((*param_1 == '\0') || (*param_4 == 0)) {
      return;
    }
    local_c = '\0';
    DAT_1032200c = 0;
    local_10 = 0;
    local_8 = param_1;
    while (*local_8 == *param_1) {
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
    }
    switch(*param_1) {
    case '\'':
      if ((local_10 & 1) == 0) {
        param_1 = param_1 + local_10;
      }
      else {
        param_1 = param_1 + local_10;
        while( true ) {
          if ((*param_1 == '\0') || (*param_4 == 0)) goto LAB_100dab16;
          if (*param_1 == '\'') break;
          if (((*(ushort *)(PTR_DAT_1028b430 + (uint)*param_1 * 2) & 0x8000) != 0) && (1 < *param_4)
             ) {
            *(byte_conflict *)*param_3 = *param_1;
            *param_3 = *param_3 + 1;
            param_1 = param_1 + 1;
            *param_4 = *param_4 - 1;
          }
          *(byte_conflict *)*param_3 = *param_1;
          *param_3 = *param_3 + 1;
          param_1 = param_1 + 1;
          *param_4 = *param_4 - 1;
        }
        param_1 = param_1 + 1;
      }
      goto LAB_100dab16;
    case 'A':
    case 'a':
      uVar1 = FUN_100db540(param_1,(byte_conflict *)"am/pm");
      if (uVar1 == 0) {
        local_8 = param_1 + 5;
      }
      else {
        uVar1 = FUN_100db540(param_1,"a/p");
        if (uVar1 == 0) {
          local_8 = param_1 + 3;
        }
      }
      local_c = 'p';
      break;
    case 'H':
      if (local_10 == 1) {
        DAT_1032200c = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'H';
      break;
    case 'M':
      switch(local_10) {
      case 1:
        DAT_1032200c = 1;
      case 2:
        local_c = 'm';
        break;
      case 3:
        local_c = 'b';
        break;
      case 4:
        local_c = 'B';
      }
      break;
    case 'd':
      switch(local_10) {
      case 1:
        DAT_1032200c = 1;
      case 2:
        local_c = 'd';
        break;
      case 3:
        local_c = 'a';
        break;
      case 4:
        local_c = 'A';
      }
      break;
    case 'h':
      if (local_10 == 1) {
        DAT_1032200c = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'I';
      break;
    case 'm':
      if (local_10 == 1) {
        DAT_1032200c = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'M';
      break;
    case 's':
      if (local_10 == 1) {
        DAT_1032200c = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'S';
      break;
    case 't':
      goto switchD_100daba1_caseD_74;
    case 'y':
      if (local_10 == 2) {
        local_c = 'y';
      }
      else if (local_10 == 4) {
        local_c = 'Y';
      }
    }
    if (local_c == '\0') {
      if ((*(ushort *)(PTR_DAT_1028b430 + (uint)*param_1 * 2) & 0x8000) != 0) {
        *(byte_conflict *)*param_3 = *param_1;
        *param_3 = *param_3 + 1;
        param_1 = param_1 + 1;
        *param_4 = *param_4 - 1;
      }
      *(byte_conflict *)*param_3 = *param_1;
      *param_3 = *param_3 + 1;
      param_1 = param_1 + 1;
      *param_4 = *param_4 - 1;
    }
    else {
      FUN_100da340(local_c,(int *)param_2,param_3,param_4,param_5);
      param_1 = local_8;
    }
  } while( true );
switchD_100daba1_caseD_74:
  if (*(int *)(param_2 + 8) < 0xc) {
    local_14 = *(byte **)(param_5 + 0x98);
  }
  else {
    local_14 = *(byte **)(param_5 + 0x9c);
  }
  while ((param_1 = local_8, 0 < (int)local_10 && (*param_4 != 0))) {
    if (((*(ushort *)(PTR_DAT_1028b430 + (uint)*local_14 * 2) & 0x8000) != 0) && (1 < *param_4)) {
      *(byte *)*param_3 = *local_14;
      *param_3 = *param_3 + 1;
      local_14 = local_14 + 1;
      *param_4 = *param_4 - 1;
    }
    *(byte *)*param_3 = *local_14;
    *param_3 = *param_3 + 1;
    local_14 = local_14 + 1;
    *param_4 = *param_4 - 1;
    local_10 = local_10 - 1;
  }
  goto LAB_100dab16;
}

/* 100db030  FUN_100db030  (650 bytes)
 * undefined4 FUN_100db030(int param_1, LCID param_2, LCTYPE param_3, int * param_4)
 * called by: FUN_100d5a50, FUN_100d62f0, FUN_100d6750, FUN_100d6a80
 */
undefined4 __cdecl FUN_100db030(int param_1,LCID param_2,LCTYPE param_3,int *param_4)

{
  byte bVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  uint local_ac;
  int local_a4;
  CHAR local_90 [128];
  LPSTR local_10;
  uint local_c;
  int local_8;
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_100db970(param_2,param_3,(LPWSTR)&DAT_10321fb8,4,0);
    if (iVar4 != 0) {
      *(undefined1 *)param_4 = 0;
      local_a4 = 0;
      while( true ) {
        if (3 < local_a4) {
          return 0;
        }
        if (DAT_1028b63c < 2) {
          bVar1 = (&DAT_10321fb8)[local_a4 * 2];
          local_ac = *(ushort *)(PTR_DAT_1028b430 + (uint)bVar1 * 2) & 4;
        }
        else {
          bVar1 = (&DAT_10321fb8)[local_a4 * 2];
          local_ac = FUN_100c1760((uint)bVar1,4);
        }
        if (local_ac == 0) break;
        *(byte *)param_4 = (char)*param_4 * '\n' + -0x30 + bVar1;
        local_a4 = local_a4 + 1;
      }
      return 0;
    }
    return 0xffffffff;
  }
  local_10 = local_90;
  local_8 = 0;
  local_c = FUN_100dbb10(param_2,param_3,local_10,0x80,0);
  if (local_c == 0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) || (uVar3 = FUN_100dbb10(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (local_10 = (LPSTR)__malloc_dbg(uVar3,2,0x1027a860,0x58), local_10 == (LPSTR)0x0))
    goto LAB_100db17d;
    local_8 = 1;
    local_c = FUN_100dbb10(param_2,param_3,local_10,uVar3,0);
    if (local_c == 0) goto LAB_100db17d;
  }
  iVar4 = __malloc_dbg(local_c,2,0x1027a860,99);
  *param_4 = iVar4;
  if (*param_4 != 0) {
    _strncpy((char *)*param_4,local_10,local_c);
    if (local_8 != 0) {
      __free_dbg(local_10,2);
    }
    return 0;
  }
LAB_100db17d:
  if (local_8 != 0) {
    __free_dbg(local_10,2);
  }
  return 0xffffffff;
}

/* 100db2c0  FUN_100db2c0  (10 bytes)
 * undefined * FUN_100db2c0(void)
 */
undefined * FUN_100db2c0(void)

{
  return PTR_PTR_1028ec68;
}

/* 100db2d0  FUN_100db2d0  (575 bytes)
 * BOOL FUN_100db2d0(DWORD param_1, LPCWSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6)
 * called by: FUN_100d6a80
 */
BOOL __cdecl
FUN_100db2d0(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  undefined1 *puVar1;
  BOOL BVar2;
  size_t _Size;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1027a870;
  pcStack_10 = FUN_100c9368;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffbc;
  if (DAT_10321fc4 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10321fc4 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10321fc4 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_10321fc4 == 1) {
    BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10321fc4 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_10321d6c;
    }
    _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (_Size == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_100bdb10();
      local_1c = &stack0xffffffbc;
      _memset(&stack0xffffffbc,0,_Size);
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x44) {
        BVar2 = 0;
      }
      else {
        iVar3 = WideCharToMultiByte(param_5,0x220,param_2,param_3,&stack0xffffffbc,_Size,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
        if (iVar3 == 0) {
          BVar2 = 0;
        }
        else {
          local_8 = 1;
          FUN_100bdb10();
          local_8 = 0xffffffff;
          if (&stack0x00000000 == (undefined1 *)0x44) {
            BVar2 = 0;
          }
          else {
            if (param_6 == 0) {
              param_6 = DAT_10321d5c;
            }
            *(undefined2 *)(&stack0xffffffbc + param_3 * 2) = 0xffff;
            *(undefined2 *)(&stack0xffffffba + param_3 * 2) = 0xffff;
            local_1c = &stack0xffffffbc;
            BVar2 = GetStringTypeA(param_6,param_1,&stack0xffffffbc,_Size,(LPWORD)&stack0xffffffbc);
            if ((*(short *)(&stack0xffffffba + param_3 * 2) == -1) ||
               (*(short *)(&stack0xffffffbc + param_3 * 2) != -1)) {
              BVar2 = 0;
            }
            else {
              FUN_100bdc80((undefined4 *)param_4,(undefined4 *)&stack0xffffffbc,param_3 << 1);
            }
          }
        }
      }
    }
  }
  else {
    BVar2 = 0;
  }
  ExceptionList = local_14;
  return BVar2;
}

/* 100db3f7  FUN_100db3f7  (6 bytes)
 * undefined FUN_100db3f7()
 */
undefined4 FUN_100db3f7(void)

{
  return 1;
}

/* 100db476  FUN_100db476  (6 bytes)
 * undefined FUN_100db476()
 */
undefined4 FUN_100db476(void)

{
  return 1;
}

/* 100db540  FUN_100db540  (208 bytes)
 * uint FUN_100db540(byte.conflict * param_1, byte.conflict * param_2)
 * called by: FUN_10046db0, FUN_10048780, FUN_10048e00, FUN_10049270, FUN_1004ba60, FUN_1004fdc0, FUN_10058560, FUN_10061120, FUN_10061320, FUN_10065930, FUN_10086950, FUN_10086b00, ... (24 total)
 */
uint __cdecl FUN_100db540(byte_conflict *param_1,byte_conflict *param_2)

{
  byte_conflict bVar1;
  byte_conflict bVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar10;
  uint uVar11;
  uint uVar9;
  
  iVar4 = DAT_103222b8;
  if (DAT_10321d5c == 0) {
    bVar7 = 0xff;
    do {
      do {
        cVar8 = '\0';
        if (bVar7 == 0) goto LAB_100db58e;
        bVar7 = *param_2;
        param_2 = param_2 + 1;
        bVar6 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar6 == bVar7);
      bVar5 = bVar7 + 0xbf + (-((byte)(bVar7 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar6 = bVar6 + 0xbf;
      bVar7 = bVar6 + (-(bVar6 < 0x1a) & 0x20U) + 0x41;
    } while (bVar7 == bVar5);
    cVar8 = (bVar7 < bVar5) * -2 + '\x01';
LAB_100db58e:
    uVar9 = (uint)cVar8;
  }
  else {
    LOCK();
    DAT_103222b8 = DAT_103222b8 + 1;
    UNLOCK();
    bVar3 = 0 < DAT_103222a8;
    if (bVar3) {
      LOCK();
      UNLOCK();
      DAT_103222b8 = iVar4;
      FUN_100c4260(0x13);
    }
    uVar11 = (uint)bVar3;
    uVar9 = 0xff;
    uVar10 = 0;
    do {
      do {
        if ((char)uVar9 == '\0') goto LAB_100db5ef;
        bVar1 = *param_2;
        uVar9 = CONCAT31((int3)(uVar9 >> 8),bVar1);
        param_2 = param_2 + 1;
        bVar2 = *param_1;
        uVar10 = CONCAT31((int3)(uVar10 >> 8),bVar2);
        param_1 = param_1 + 1;
      } while (bVar1 == bVar2);
      uVar10 = FUN_100d1cb0(uVar10);
      uVar9 = FUN_100d1cb0(uVar9);
    } while ((byte)uVar10 == (byte)uVar9);
    uVar10 = (uint)((byte)uVar10 < (byte)uVar9);
    uVar9 = (1 - uVar10) - (uint)(uVar10 != 0);
LAB_100db5ef:
    if (uVar11 == 0) {
      LOCK();
      DAT_103222b8 = DAT_103222b8 + -1;
      UNLOCK();
    }
    else {
      FUN_100c4300(0x13);
    }
  }
  return uVar9;
}

/* 100db610  FUN_100db610  (257 bytes)
 * undefined4 FUN_100db610(byte.conflict * param_1, char * param_2, int param_3)
 * called by: FUN_10058b50, FUN_100d7200, FUN_100d75b0
 */
undefined4 __cdecl FUN_100db610(byte_conflict *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = DAT_103222b8;
  uVar6 = 0;
  if (param_3 != 0) {
    if (DAT_10321d5c == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_100db66f;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_100db66f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      DAT_103222b8 = DAT_103222b8 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_103222a8;
      if (bVar8) {
        LOCK();
        UNLOCK();
        DAT_103222b8 = iVar2;
        FUN_100c4260(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_100d1cb0(uVar7);
        uVar5 = FUN_100d1cb0(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_100db6e5;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_100db6e5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        DAT_103222b8 = DAT_103222b8 + -1;
        UNLOCK();
      }
      else {
        FUN_100c4300(0x13);
      }
    }
  }
  return uVar6;
}

/* 100db720  FUN_100db720  (115 bytes)
 * int FUN_100db720(uint param_1, int param_2)
 */
int __cdecl FUN_100db720(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 < DAT_1032243c) &&
     ((*(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100d3380(param_1);
    iVar2 = FUN_100db7a0(param_1,param_2);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 9;
    iVar2 = -1;
  }
  return iVar2;
}

/* 100db7a0  FUN_100db7a0  (207 bytes)
 * int FUN_100db7a0(uint param_1, int param_2)
 * called by: FUN_100d90c0, FUN_100db720
 */
int __cdecl FUN_100db7a0(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = (int)param_1 >> 5;
  cVar1 = *(char *)((&DAT_10322300)[iVar2] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    *(byte *)((&DAT_10322300)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_10322300)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      puVar3 = (undefined4 *)FUN_100c6040();
      *puVar3 = 0x16;
      return -1;
    }
    *(byte *)((&DAT_10322300)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_10322300)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) | 0x80;
  }
  return (-(uint)(((int)cVar1 & 0x80U) != 0) & 0xffffc000) + 0x8000;
}

/* 100db8c0  FUN_100db8c0  (174 bytes)
 * undefined4 FUN_100db8c0(void)
 * called by: FID_conflict:__getenv_lk, FUN_100dc110
 */
undefined4 FUN_100db8c0(void)

{
  uint cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  int *local_8;
  
  local_8 = DAT_10321c44;
  while( true ) {
    if (*local_8 == 0) {
      return 0;
    }
    cbMultiByte = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
    ;
    if (cbMultiByte == 0) {
      return 0xffffffff;
    }
    lpMultiByteStr = (uint *)__malloc_dbg(cbMultiByte,2,0x1027a888,0x3d);
    if (lpMultiByteStr == (uint *)0x0) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    FUN_100dc110(lpMultiByteStr,0);
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}

/* 100db970  FUN_100db970  (382 bytes)
 * int FUN_100db970(LCID param_1, LCTYPE param_2, LPWSTR param_3, int param_4, UINT param_5)
 * called by: FUN_100db030
 */
int __cdecl FUN_100db970(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1027a898;
  pcStack_10 = FUN_100c9368;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10321fc8 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10321fc8 = 2;
    }
    else {
      DAT_10321fc8 = 1;
    }
  }
  if (DAT_10321fc8 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10321fc8 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_10321d6c;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_100bdb10();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x38) {
        iVar1 = 0;
      }
      else {
        iVar1 = GetLocaleInfoA(param_1,param_2,&stack0xffffffc8,iVar1);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else if (param_4 == 0) {
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffc8,-1,(LPWSTR)0x0,0);
        }
        else {
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffc8,-1,param_3,param_4);
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}

/* 100dba6d  FUN_100dba6d  (6 bytes)
 * undefined FUN_100dba6d()
 */
undefined4 FUN_100dba6d(void)

{
  return 1;
}

/* 100dbb10  FUN_100dbb10  (398 bytes)
 * int FUN_100dbb10(LCID param_1, LCTYPE param_2, LPSTR param_3, int param_4, UINT param_5)
 * called by: FUN_100db030
 */
int __cdecl FUN_100dbb10(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1027a8a8;
  pcStack_10 = FUN_100c9368;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10321fcc == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10321fcc = 2;
    }
    else {
      DAT_10321fcc = 1;
    }
  }
  if (DAT_10321fcc == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10321fcc == 1) {
    if (param_5 == 0) {
      param_5 = DAT_10321d6c;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_100bdb10();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x38) {
        iVar1 = 0;
      }
      else {
        iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)&stack0xffffffc8,iVar1);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else if (param_4 == 0) {
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffc8,-1,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        }
        else {
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffc8,-1,param_3,param_4,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}

/* 100dbc0f  FUN_100dbc0f  (6 bytes)
 * undefined FUN_100dbc0f()
 */
undefined4 FUN_100dbc0f(void)

{
  return 1;
}

/* 100dbcc0  FUN_100dbcc0  (970 bytes)
 * int FUN_100dbcc0(LCID param_1, DWORD param_2, byte.conflict * param_3, int param_4, byte.conflict * param_5, int param_6, UINT param_7)
 * called by: __mbsnbicoll
 */
int __cdecl
FUN_100dbcc0(LCID param_1,DWORD param_2,byte_conflict *param_3,int param_4,byte_conflict *param_5,
            int param_6,UINT param_7)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  BOOL BVar4;
  BYTE *local_44;
  _cpinfo local_40;
  PCNZWCH local_2c;
  PCNZWCH local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1027a900;
  pcStack_10 = FUN_100c9368;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  ExceptionList = &local_14;
  puVar2 = &stack0xffffffa8;
  if (DAT_10321fd0 == 0) {
    ExceptionList = &local_14;
    iVar3 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar3 == 0) {
      iVar3 = CompareStringA(0,0,"",1,"",1);
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10321fd0 = 2;
      puVar2 = local_1c;
    }
    else {
      DAT_10321fd0 = 1;
      puVar2 = local_1c;
    }
  }
  local_1c = puVar2;
  if (0 < param_4) {
    param_4 = FUN_100dc0c0((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_100dc0c0((char *)param_5,param_6);
  }
  if (DAT_10321fd0 == 2) {
    iVar3 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
  }
  else if (DAT_10321fd0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10321d6c;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_4 == param_6) {
        ExceptionList = local_14;
        return 2;
      }
      if (1 < param_6) {
        ExceptionList = local_14;
        return 1;
      }
      if (1 < param_4) {
        ExceptionList = local_14;
        return 3;
      }
      BVar4 = GetCPInfo(param_7,&local_40);
      if (BVar4 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      if ((((param_4 != 0) || (param_6 != 1)) && ((param_4 != 1 || (param_6 != 0)))) &&
         (iVar3 = FUN_100c32e0(2,0x1027a8b4,0xb6,0,
                               (byte_conflict *)
                               "cchCount1==0 && cchCount2==1 || cchCount1==1 && cchCount2==0"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if (0 < param_4) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 3;
        }
        local_44 = local_40.LeadByte;
        while( true ) {
          if ((*local_44 == 0) || (local_44[1] == 0)) {
            ExceptionList = local_14;
            return 3;
          }
          if ((*local_44 <= *param_3) && (*param_3 <= local_44[1])) break;
          local_44 = local_44 + 2;
        }
        ExceptionList = local_14;
        return 2;
      }
      if (0 < param_6) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 1;
        }
        local_44 = local_40.LeadByte;
        while( true ) {
          if ((*local_44 == 0) || (local_44[1] == 0)) {
            ExceptionList = local_14;
            return 1;
          }
          if ((*local_44 <= *param_5) && (*param_5 <= local_44[1])) break;
          local_44 = local_44 + 2;
        }
        ExceptionList = local_14;
        return 2;
      }
    }
    local_20 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      local_8 = 0;
      FUN_100bdb10();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x58) {
        iVar3 = 0;
      }
      else {
        local_28 = (PCNZWCH)&stack0xffffffa8;
        local_1c = &stack0xffffffa8;
        iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffa8,
                                    local_20);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          local_24 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
          if (local_24 == 0) {
            iVar3 = 0;
          }
          else {
            local_8 = 1;
            FUN_100bdb10();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x58) {
              iVar3 = 0;
            }
            else {
              local_2c = (PCNZWCH)&stack0xffffffa8;
              local_1c = &stack0xffffffa8;
              iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,(LPWSTR)&stack0xffffffa8
                                          ,local_24);
              if (iVar3 == 0) {
                iVar3 = 0;
              }
              else {
                iVar3 = CompareStringW(param_1,param_2,local_28,local_20,local_2c,local_24);
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = 0;
  }
  ExceptionList = local_14;
  return iVar3;
}

/* 100dbf9f  FUN_100dbf9f  (6 bytes)
 * undefined FUN_100dbf9f()
 */
undefined4 FUN_100dbf9f(void)

{
  return 1;
}

/* 100dc03d  FUN_100dc03d  (6 bytes)
 * undefined FUN_100dc03d()
 */
undefined4 FUN_100dc03d(void)

{
  return 1;
}

/* 100dc0c0  FUN_100dc0c0  (80 bytes)
 * int FUN_100dc0c0(char * param_1, int param_2)
 * called by: FUN_100dbcc0
 */
int __cdecl FUN_100dc0c0(char *param_1,int param_2)

{
  int local_c;
  char *local_8;
  
  local_c = param_2;
  for (local_8 = param_1; (local_c != 0 && (*local_8 != '\0')); local_8 = local_8 + 1) {
    local_c = local_c + -1;
  }
  if (*local_8 == '\0') {
    param_2 = (int)local_8 - (int)param_1;
  }
  return param_2;
}

/* 100dc110  FUN_100dc110  (736 bytes)
 * undefined4 FUN_100dc110(uint * param_1, int param_2)
 * called by: FUN_100db8c0
 */
undefined4 __cdecl FUN_100dc110(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_c;
  
  if (((param_1 == (uint *)0x0) || (puVar1 = FUN_100dc560(param_1,0x3d), puVar1 == (uint *)0x0)) ||
     (param_1 == puVar1)) {
    return 0xffffffff;
  }
  uVar5 = (uint)(*(char *)((int)puVar1 + 1) == '\0');
  if (DAT_10321c3c == DAT_10321c40) {
    DAT_10321c3c = copy_environ(DAT_10321c3c);
  }
  if (DAT_10321c3c == (int *)0x0) {
    if ((param_2 == 0) || (DAT_10321c44 == (undefined4 *)0x0)) {
      if (uVar5 != 0) {
        return 0;
      }
      DAT_10321c3c = (int *)__malloc_dbg(4,2,0x1027a918,0x87);
      if (DAT_10321c3c == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_10321c3c = 0;
      if (DAT_10321c44 == (undefined4 *)0x0) {
        DAT_10321c44 = (undefined4 *)__malloc_dbg(4,2,0x1027a918,0x8e);
        if (DAT_10321c44 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_10321c44 = 0;
      }
    }
    else {
      iVar2 = FUN_100db8c0();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_10321c3c;
  local_c = findenv((uchar *)param_1,(int)puVar1 - (int)param_1);
  if ((local_c < 0) || (*piVar3 == 0)) {
    if (uVar5 != 0) {
      return 0;
    }
    if (local_c < 0) {
      local_c = -local_c;
    }
    piVar3 = (int *)FID_conflict___realloc_dbg(piVar3,local_c * 4 + 8,2,0x1027a918,0xce);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[local_c] = (int)param_1;
    piVar3[local_c + 1] = 0;
    DAT_10321c3c = piVar3;
  }
  else if (uVar5 == 0) {
    piVar3[local_c] = (int)param_1;
  }
  else {
    __free_dbg((void *)piVar3[local_c],2);
    for (; piVar3[local_c] != 0; local_c = local_c + 1) {
      piVar3[local_c] = piVar3[local_c + 1];
    }
    piVar3 = (int *)FID_conflict___realloc_dbg(piVar3,local_c << 2,2,0x1027a918,0xb9);
    if (piVar3 != (int *)0x0) {
      DAT_10321c3c = piVar3;
    }
  }
  if (param_2 != 0) {
    uVar9 = 0xe5;
    pcVar8 = "setenv.c";
    uVar7 = 2;
    sVar4 = _strlen((char *)param_1);
    uVar5 = sVar4 + 2;
    puVar1 = (uint *)__malloc_dbg(uVar5,uVar7,(int)pcVar8,uVar9);
    if (puVar1 != (uint *)0x0) {
      iVar2 = 0x100dc3a4;
      FUN_100bba20(puVar1,param_1);
      puVar6 = (undefined1 *)((int)puVar1 + (uVar5 - (int)param_1));
      *puVar6 = 0;
      SetEnvironmentVariableA((LPCSTR)puVar1,(LPCSTR)(~-(uint)(iVar2 != 0) & (uint)(puVar6 + 1)));
      __free_dbg(puVar1,2);
    }
  }
  return 0;
}

/* 100dc560  FUN_100dc560  (237 bytes)
 * uint * FUN_100dc560(uint * param_1, uint param_2)
 * called by: FUN_100dc110
 */
uint * __cdecl FUN_100dc560(uint *param_1,uint param_2)

{
  ushort uVar1;
  uint *puVar2;
  
  if (DAT_1032209c == 0) {
    param_1 = FUN_100c1d70(param_1,(char)param_2);
  }
  else {
    FUN_100c4260(0x19);
    while( true ) {
      uVar1 = (ushort)(byte)*param_1;
      if (uVar1 == 0) break;
      if (((&DAT_103221a1)[uVar1] & 4) == 0) {
        puVar2 = param_1;
        if (param_2 == uVar1) break;
      }
      else {
        puVar2 = (uint *)((int)param_1 + 1);
        if (*(char *)puVar2 == '\0') {
          FUN_100c4300(0x19);
          return (uint *)0x0;
        }
        if (param_2 == CONCAT11((byte)*param_1,*(char *)puVar2)) {
          FUN_100c4300(0x19);
          return param_1;
        }
      }
      param_1 = puVar2;
      param_1 = (uint *)((int)param_1 + 1);
    }
    FUN_100c4300(0x19);
    if (param_2 != uVar1) {
      param_1 = (uint *)0x0;
    }
  }
  return param_1;
}

/* 100dc830  FUN_100dc830  (447 bytes)
 * uint * FUN_100dc830(uint * param_1)
 * called by: FUN_10036240
 */
uint * __cdecl FUN_100dc830(uint *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint *local_18;
  uint *local_14;
  LPWSTR local_c;
  
  local_c = (LPWSTR)0x0;
  if (DAT_10321d5c == 0) {
    for (local_14 = param_1; (char)*local_14 != '\0'; local_14 = (uint *)((int)local_14 + 1)) {
      if (('`' < (char)*local_14) && ((char)*local_14 < '{')) {
        *(char *)local_14 = (char)*local_14 + -0x20;
      }
    }
  }
  else {
    InterlockedIncrement(&DAT_103222b8);
    bVar3 = DAT_103222a8 == 0;
    if (!bVar3) {
      InterlockedDecrement(&DAT_103222b8);
      FUN_100c4260(0x13);
    }
    if (DAT_10321d5c == 0) {
      if (bVar3) {
        InterlockedDecrement(&DAT_103222b8);
      }
      else {
        FUN_100c4300(0x13);
      }
      for (local_18 = param_1; (char)*local_18 != '\0'; local_18 = (uint *)((int)local_18 + 1)) {
        if (('`' < (char)*local_18) && ((char)*local_18 < '{')) {
          *(char *)local_18 = (char)*local_18 + -0x20;
        }
      }
    }
    else {
      uVar1 = FUN_100cdf30(DAT_10321d5c,0x200,(char *)param_1,-1,(LPWSTR)0x0,0,0,1);
      if (((uVar1 != 0) &&
          (local_c = (LPWSTR)__malloc_dbg(uVar1,2,0x1027a924,0x62), local_c != (LPWSTR)0x0)) &&
         (iVar2 = FUN_100cdf30(DAT_10321d5c,0x200,(char *)param_1,-1,local_c,uVar1,0,1), iVar2 != 0)
         ) {
        FUN_100bba20(param_1,(uint *)local_c);
      }
      if (bVar3) {
        InterlockedDecrement(&DAT_103222b8);
      }
      else {
        FUN_100c4300(0x13);
      }
      __free_dbg(local_c,2);
    }
  }
  return param_1;
}

/* 100e5501  FUN_100e5501  (10 bytes)
 * undefined FUN_100e5501()
 */
void FUN_100e5501(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e552b  FUN_100e552b  (10 bytes)
 * undefined FUN_100e552b()
 */
void FUN_100e552b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e554b  FUN_100e554b  (10 bytes)
 * undefined FUN_100e554b()
 */
void FUN_100e554b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e556b  FUN_100e556b  (10 bytes)
 * undefined FUN_100e556b()
 */
void FUN_100e556b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e558b  FUN_100e558b  (10 bytes)
 * undefined FUN_100e558b()
 */
void FUN_100e558b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e55ae  FUN_100e55ae  (10 bytes)
 * undefined FUN_100e55ae()
 */
void FUN_100e55ae(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5602  FUN_100e5602  (10 bytes)
 * undefined FUN_100e5602()
 */
void FUN_100e5602(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e562b  FUN_100e562b  (10 bytes)
 * undefined FUN_100e562b()
 */
void FUN_100e562b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e564b  FUN_100e564b  (10 bytes)
 * undefined FUN_100e564b()
 */
void FUN_100e564b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e566b  FUN_100e566b  (10 bytes)
 * undefined FUN_100e566b()
 */
void FUN_100e566b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e568b  FUN_100e568b  (10 bytes)
 * undefined FUN_100e568b()
 */
void FUN_100e568b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e56a9  FUN_100e56a9  (10 bytes)
 * undefined FUN_100e56a9()
 */
void FUN_100e56a9(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e56d8  FUN_100e56d8  (10 bytes)
 * undefined FUN_100e56d8()
 */
void FUN_100e56d8(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e571c  FUN_100e571c  (10 bytes)
 * undefined FUN_100e571c()
 */
void FUN_100e571c(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e574f  FUN_100e574f  (10 bytes)
 * undefined FUN_100e574f()
 */
void FUN_100e574f(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e584d  FUN_100e584d  (10 bytes)
 * undefined FUN_100e584d()
 */
void FUN_100e584d(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e58a9  FUN_100e58a9  (10 bytes)
 * undefined FUN_100e58a9()
 */
void FUN_100e58a9(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e58c9  FUN_100e58c9  (10 bytes)
 * undefined FUN_100e58c9()
 */
void FUN_100e58c9(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e58e9  FUN_100e58e9  (10 bytes)
 * undefined FUN_100e58e9()
 */
void FUN_100e58e9(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e59fc  FUN_100e59fc  (10 bytes)
 * undefined FUN_100e59fc()
 */
void FUN_100e59fc(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5a5b  FUN_100e5a5b  (10 bytes)
 * undefined FUN_100e5a5b()
 */
void FUN_100e5a5b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5a7b  FUN_100e5a7b  (10 bytes)
 * undefined FUN_100e5a7b()
 */
void FUN_100e5a7b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5b46  FUN_100e5b46  (10 bytes)
 * undefined FUN_100e5b46()
 */
void FUN_100e5b46(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5bb7  FUN_100e5bb7  (10 bytes)
 * undefined FUN_100e5bb7()
 */
void FUN_100e5bb7(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5c22  FUN_100e5c22  (10 bytes)
 * undefined FUN_100e5c22()
 */
void FUN_100e5c22(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5c56  FUN_100e5c56  (10 bytes)
 * undefined FUN_100e5c56()
 */
void FUN_100e5c56(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5c7b  FUN_100e5c7b  (10 bytes)
 * undefined FUN_100e5c7b()
 */
void FUN_100e5c7b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5c9b  FUN_100e5c9b  (10 bytes)
 * undefined FUN_100e5c9b()
 */
void FUN_100e5c9b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5cf2  FUN_100e5cf2  (10 bytes)
 * undefined FUN_100e5cf2()
 */
void FUN_100e5cf2(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5d1b  FUN_100e5d1b  (10 bytes)
 * undefined FUN_100e5d1b()
 */
void FUN_100e5d1b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5d3b  FUN_100e5d3b  (10 bytes)
 * undefined FUN_100e5d3b()
 */
void FUN_100e5d3b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5d5b  FUN_100e5d5b  (10 bytes)
 * undefined FUN_100e5d5b()
 */
void FUN_100e5d5b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5d7b  FUN_100e5d7b  (10 bytes)
 * undefined FUN_100e5d7b()
 */
void FUN_100e5d7b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5de3  FUN_100e5de3  (10 bytes)
 * undefined FUN_100e5de3()
 */
void FUN_100e5de3(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5e2c  FUN_100e5e2c  (10 bytes)
 * undefined FUN_100e5e2c()
 */
void FUN_100e5e2c(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5ebd  FUN_100e5ebd  (10 bytes)
 * undefined FUN_100e5ebd()
 */
void FUN_100e5ebd(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5efb  FUN_100e5efb  (10 bytes)
 * undefined FUN_100e5efb()
 */
void FUN_100e5efb(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e5f26  FUN_100e5f26  (10 bytes)
 * undefined FUN_100e5f26()
 */
void FUN_100e5f26(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e6005  FUN_100e6005  (10 bytes)
 * undefined FUN_100e6005()
 */
void FUN_100e6005(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e605b  FUN_100e605b  (10 bytes)
 * undefined FUN_100e605b()
 */
void FUN_100e605b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e607b  FUN_100e607b  (10 bytes)
 * undefined FUN_100e607b()
 */
void FUN_100e607b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e60bc  FUN_100e60bc  (10 bytes)
 * undefined FUN_100e60bc()
 */
void FUN_100e60bc(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e60fa  FUN_100e60fa  (10 bytes)
 * undefined FUN_100e60fa()
 */
void FUN_100e60fa(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e611b  FUN_100e611b  (10 bytes)
 * undefined FUN_100e611b()
 */
void FUN_100e611b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

/* 100e6184  FUN_100e6184  (10 bytes)
 * undefined FUN_100e6184()
 */
void FUN_100e6184(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4)

{
  FID_conflict____CxxFrameHandler3(param_1,param_2,param_3,param_4);
  return;
}

