/* client.dll - unnamed_100c5b20 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100c5b20  FUN_100c5b20  (122 bytes)
 * undefined4 FUN_100c5b20(uint param_1)
 * called by: FUN_100bca60, FUN_100d3560
 */
undefined4 __cdecl FUN_100c5b20(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  
  if ((param_1 < DAT_1032243c) &&
     ((*(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100d3380(param_1);
    uVar3 = __close_lk(param_1);
    __unlock_fhandle(param_1);
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

/* 100c5c50  FUN_100c5c50  (146 bytes)
 * undefined FUN_100c5c50(undefined4 * param_1)
 * called by: FUN_100bca60, FUN_100c7dd0
 */
void __cdecl FUN_100c5c50(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10279a00,0x30,0,(byte_conflict *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    __free_dbg((void *)param_1[2],2);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

/* 100c5cf0  FUN_100c5cf0  (68 bytes)
 * int FUN_100c5cf0(undefined * * param_1)
 * called by: FUN_100bd710
 */
int __cdecl FUN_100c5cf0(undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_100c5e60(0);
  }
  else {
    FUN_100c5a40(param_1);
    iVar1 = FUN_100c5d40((int *)param_1);
    FUN_100c5ab0(param_1);
  }
  return iVar1;
}

/* 100c5d40  FUN_100c5d40  (65 bytes)
 * int FUN_100c5d40(int * param_1)
 * called by: FUN_100c5cf0, FUN_100c5e60
 */
int __cdecl FUN_100c5d40(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_100c5d90(param_1);
  if (iVar1 == 0) {
    if ((param_1[3] & 0x4000U) == 0) {
      iVar1 = 0;
    }
    else {
      DVar2 = FUN_100d3440(param_1[4]);
      iVar1 = -(uint)(DVar2 != 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

/* 100c5d90  FUN_100c5d90  (183 bytes)
 * undefined4 FUN_100c5d90(int * param_1)
 * called by: FUN_100bca60, FUN_100bcea0, FUN_100bd440, FUN_100c5d40, FUN_100c7dd0, FUN_100c9160
 */
undefined4 __cdecl FUN_100c5d90(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((param_1[3] & 3U) == 2) && ((param_1[3] & 0x108U) != 0)) &&
     (uVar2 = *param_1 - param_1[2], 0 < (int)uVar2)) {
    uVar1 = FUN_100c7160(param_1[4],(char *)param_1[2],uVar2);
    if (uVar1 == uVar2) {
      if ((param_1[3] & 0x80U) != 0) {
        param_1[3] = param_1[3] & 0xfffffffd;
      }
    }
    else {
      param_1[3] = param_1[3] | 0x20;
      local_8 = 0xffffffff;
    }
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return local_8;
}

/* 100c5e50  FUN_100c5e50  (15 bytes)
 * undefined FUN_100c5e50(void)
 * called by: FUN_100c5a20
 */
void FUN_100c5e50(void)

{
  FUN_100c5e60(1);
  return;
}

/* 100c5e60  FUN_100c5e60  (319 bytes)
 * int FUN_100c5e60(int param_1)
 * called by: FUN_100c5cf0, FUN_100c5e50
 */
int __cdecl FUN_100c5e60(int param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_100c4260(2);
  for (local_10 = 0; local_10 < DAT_10323780; local_10 = local_10 + 1) {
    if ((*(int *)(DAT_10322440 + local_10 * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_10322440 + local_10 * 4) + 0xc) & 0x83) != 0)) {
      FUN_100c5a80(local_10,*(int *)(DAT_10322440 + local_10 * 4));
      if ((*(uint *)(*(int *)(DAT_10322440 + local_10 * 4) + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = FUN_100c5d40(*(int **)(DAT_10322440 + local_10 * 4));
          if (iVar1 != -1) {
            local_8 = local_8 + 1;
          }
        }
        else if (((param_1 == 0) &&
                 ((*(uint *)(*(int *)(DAT_10322440 + local_10 * 4) + 0xc) & 2) != 0)) &&
                (iVar1 = FUN_100c5d40(*(int **)(DAT_10322440 + local_10 * 4)), iVar1 == -1)) {
          local_c = -1;
        }
      }
      FUN_100c5af0(local_10,*(int *)(DAT_10322440 + local_10 * 4));
    }
  }
  FUN_100c4300(2);
  if (param_1 == 1) {
    local_c = local_8;
  }
  return local_c;
}

/* 100c6040  FUN_100c6040  (13 bytes)
 * int FUN_100c6040(void)
 * called by: FID_conflict:__set_errno_from_matherr, FUN_100bcb90, FUN_100bcea0, FUN_100c5b20, FUN_100c6430, FUN_100c64c0, FUN_100c6770, FUN_100c6800, FUN_100c7160, FUN_100c71f0, FUN_100c7490, FUN_100c9d82, ... (28 total)
 */
int FUN_100c6040(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100c55e0();
  return (int)(pDVar1 + 2);
}

/* 100c6050  FUN_100c6050  (13 bytes)
 * DWORD * FUN_100c6050(void)
 * called by: FUN_100c5b20, FUN_100c6430, FUN_100c6770, FUN_100c6800, FUN_100c7160, FUN_100c71f0, FUN_100c7490, FUN_100c9d82, FUN_100d3120, FUN_100d3200, FUN_100d3270, FUN_100d3440, ... (16 total)
 */
DWORD * FUN_100c6050(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100c55e0();
  return pDVar1 + 3;
}

/* 100c6060  FUN_100c6060  (804 bytes)
 * undefined FUN_100c6060(void)
 * called by: FUN_100c1e30
 */
void FUN_100c6060(void)

{
  DWORD DVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  int *piVar3;
  DWORD local_70;
  UINT local_6c;
  UINT local_68;
  byte *local_64;
  int local_60;
  uint local_5c;
  undefined4 *local_54;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  local_54 = (undefined4 *)__malloc_dbg(0x480,2,0x10279a0c,0x81);
  if (local_54 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_1032243c = 0x20;
  DAT_10322300 = local_54;
  for (; local_54 < DAT_10322300 + 0x120; local_54 = local_54 + 9) {
    *(undefined1 *)(local_54 + 1) = 0;
    *local_54 = 0xffffffff;
    *(undefined1 *)((int)local_54 + 5) = 10;
    local_54[2] = 0;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) &&
     (CONCAT22(local_4c.lpReserved2._2_2_,local_4c.lpReserved2._0_2_) != 0)) {
    local_6c = *(UINT *)CONCAT22(local_4c.lpReserved2._2_2_,local_4c.lpReserved2._0_2_);
    local_8 = (byte *)(CONCAT22(local_4c.lpReserved2._2_2_,local_4c.lpReserved2._0_2_) + 4);
    local_64 = local_8 + local_6c;
    if (0x7ff < (int)local_6c) {
      local_6c = 0x800;
    }
    local_68 = local_6c;
    local_60 = 1;
    while ((int)DAT_1032243c < (int)local_6c) {
      local_54 = (undefined4 *)__malloc_dbg(0x480,2,0x10279a0c,0xb6);
      if (local_54 == (undefined4 *)0x0) {
        local_68 = DAT_1032243c;
        break;
      }
      (&DAT_10322300)[local_60] = local_54;
      DAT_1032243c = DAT_1032243c + 0x20;
      for (; local_54 < (undefined4 *)((int)(&DAT_10322300)[local_60] + 0x480);
          local_54 = local_54 + 9) {
        *(undefined1 *)(local_54 + 1) = 0;
        *local_54 = 0xffffffff;
        *(undefined1 *)((int)local_54 + 5) = 10;
        local_54[2] = 0;
      }
      local_60 = local_60 + 1;
    }
    for (local_5c = 0; (int)local_5c < (int)local_68; local_5c = local_5c + 1) {
      if (((*(int *)local_64 != -1) && ((*local_8 & 1) != 0)) &&
         (((*local_8 & 8) != 0 || (DVar1 = GetFileType(*(HANDLE *)local_64), DVar1 != 0)))) {
        puVar2 = (undefined4 *)((int)(&DAT_10322300)[(int)local_5c >> 5] + (local_5c & 0x1f) * 0x24)
        ;
        *puVar2 = *(undefined4 *)local_64;
        *(byte *)(puVar2 + 1) = *local_8;
      }
      local_8 = local_8 + 1;
      local_64 = local_64 + 4;
    }
  }
  for (local_5c = 0; (int)local_5c < 3; local_5c = local_5c + 1) {
    piVar3 = DAT_10322300 + local_5c * 9;
    if (*piVar3 == -1) {
      *(undefined1 *)(piVar3 + 1) = 0x81;
      if (local_5c == 0) {
        local_70 = 0xfffffff6;
      }
      else {
        local_70 = 0xfffffff5 - (local_5c != 1);
      }
      hFile = GetStdHandle(local_70);
      if ((hFile == (HANDLE)0xffffffff) || (DVar1 = GetFileType(hFile), DVar1 == 0)) {
        *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x40;
      }
      else {
        *piVar3 = (int)hFile;
        if ((DVar1 & 0xff) == 2) {
          *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x40;
        }
        else if ((DVar1 & 0xff) == 3) {
          *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 8;
        }
      }
    }
    else {
      *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x80;
    }
  }
  SetHandleCount(DAT_1032243c);
  return;
}

/* 100c6430  FUN_100c6430  (130 bytes)
 * DWORD FUN_100c6430(uint param_1, LONG param_2, DWORD param_3)
 * called by: FUN_100bcb90, FUN_100bcea0, FUN_100c20b0
 */
DWORD __cdecl FUN_100c6430(uint param_1,LONG param_2,DWORD param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  
  if ((param_1 < DAT_1032243c) &&
     ((*(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100d3380(param_1);
    DVar3 = FUN_100c64c0(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 9;
    pDVar2 = FUN_100c6050();
    *pDVar2 = 0;
    DVar3 = 0xffffffff;
  }
  return DVar3;
}

/* 100c64c0  FUN_100c64c0  (178 bytes)
 * DWORD FUN_100c64c0(uint param_1, LONG param_2, DWORD param_3)
 * called by: FUN_100c6430, FUN_100c6800, FUN_100c71f0, FUN_100d3560, FUN_100d90c0
 */
DWORD __cdecl FUN_100c64c0(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  undefined4 *puVar1;
  DWORD DVar2;
  ulong local_8;
  
  hFile = (HANDLE)FUN_100d3200(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 9;
    DVar2 = 0xffffffff;
  }
  else {
    DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar2 == 0xffffffff) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) {
      *(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
           *(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
    }
    else {
      __dosmaperr(local_8);
      DVar2 = 0xffffffff;
    }
  }
  return DVar2;
}

/* 100c6580  FUN_100c6580  (484 bytes)
 * uint FUN_100c6580(int * param_1)
 * called by: FUN_100bd010, __inc
 */
uint __cdecl FUN_100c6580(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *local_c;
  
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10279a18,0x69,0,(byte_conflict *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((param_1[3] & 0x83U) == 0) || ((param_1[3] & 0x40U) != 0)) {
    uVar3 = 0xffffffff;
  }
  else if ((param_1[3] & 2U) == 0) {
    param_1[3] = param_1[3] | 1;
    if ((param_1[3] & 0x10cU) == 0) {
      FUN_100d1440(param_1);
    }
    else {
      *param_1 = param_1[2];
    }
    iVar2 = FUN_100c6770(param_1[4],(char *)param_1[2],param_1[6]);
    param_1[1] = iVar2;
    if ((param_1[1] == 0) || (param_1[1] == -1)) {
      param_1[3] = param_1[3] | (-(uint)(param_1[1] != 0) & 0x10) + 0x10;
      param_1[1] = 0;
      uVar3 = 0xffffffff;
    }
    else {
      if ((param_1[3] & 0x82U) == 0) {
        if (param_1[4] == -1) {
          local_c = &DAT_1028bb90;
        }
        else {
          local_c = (undefined *)((&DAT_10322300)[param_1[4] >> 5] + (param_1[4] & 0x1fU) * 0x24);
        }
        if (((int)(char)local_c[4] & 0x82U) == 0x82) {
          param_1[3] = param_1[3] | 0x2000;
        }
      }
      if (((param_1[6] == 0x200) && ((param_1[3] & 8U) != 0)) && ((param_1[3] & 0x400U) == 0)) {
        param_1[6] = 0x1000;
      }
      param_1[1] = param_1[1] + -1;
      uVar3 = (uint)*(byte *)*param_1;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    param_1[3] = param_1[3] | 0x20;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* 100c6770  FUN_100c6770  (130 bytes)
 * int FUN_100c6770(uint param_1, char * param_2, DWORD param_3)
 * called by: FUN_100bd010, FUN_100c6580
 */
int __cdecl FUN_100c6770(uint param_1,char *param_2,DWORD param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if ((param_1 < DAT_1032243c) &&
     ((*(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100d3380(param_1);
    iVar3 = FUN_100c6800(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 9;
    pDVar2 = FUN_100c6050();
    *pDVar2 = 0;
    iVar3 = -1;
  }
  return iVar3;
}

/* 100c6800  FUN_100c6800  (1093 bytes)
 * int FUN_100c6800(uint param_1, char * param_2, DWORD param_3)
 * called by: FUN_100c6770, FUN_100d3560
 */
int __cdecl FUN_100c6800(uint param_1,char *param_2,DWORD param_3)

{
  BOOL BVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  char local_20 [4];
  int local_1c;
  char *local_18;
  DWORD local_14;
  char *local_10;
  DWORD local_c;
  char *local_8;
  
  local_1c = 0;
  local_18 = param_2;
  if ((param_3 == 0) ||
     (iVar4 = (int)param_1 >> 5,
     (*(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 2) != 0)) {
    local_1c = 0;
  }
  else {
    if (((*(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x48) != 0) &&
       (*(char *)((&DAT_10322300)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) != '\n')) {
      *param_2 = *(char *)((&DAT_10322300)[iVar4] + 5 + (param_1 & 0x1f) * 0x24);
      local_18 = param_2 + 1;
      local_1c = 1;
      param_3 = param_3 - 1;
      *(undefined1 *)((&DAT_10322300)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) = 10;
    }
    BVar1 = ReadFile(*(HANDLE *)((&DAT_10322300)[iVar4] + (param_1 & 0x1f) * 0x24),local_18,param_3,
                     &local_14,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      local_c = GetLastError();
      if (local_c == 5) {
        puVar2 = (undefined4 *)FUN_100c6040();
        *puVar2 = 9;
        pDVar3 = FUN_100c6050();
        *pDVar3 = local_c;
        local_1c = -1;
      }
      else if (local_c == 0x6d) {
        local_1c = 0;
      }
      else {
        __dosmaperr(local_c);
        local_1c = -1;
      }
    }
    else {
      local_1c = local_1c + local_14;
      if (((int)*(char *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) != 0) {
        if ((local_14 == 0) || (*param_2 != '\n')) {
          *(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
               *(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0xfb;
        }
        else {
          *(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
               *(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) | 4;
        }
        local_10 = param_2;
        local_8 = param_2;
        while (local_8 < param_2 + local_1c) {
          if (*local_8 == '\x1a') {
            if ((*(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) {
              *(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
                   *(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) | 2;
            }
            break;
          }
          if (*local_8 == '\r') {
            if (local_8 < param_2 + local_1c + -1) {
              if (local_8[1] == '\n') {
                local_8 = local_8 + 2;
                *local_10 = '\n';
              }
              else {
                *local_10 = *local_8;
                local_8 = local_8 + 1;
              }
              local_10 = local_10 + 1;
            }
            else {
              local_8 = local_8 + 1;
              local_c = 0;
              BVar1 = ReadFile(*(HANDLE *)((&DAT_10322300)[iVar4] + (param_1 & 0x1f) * 0x24),
                               local_20,1,&local_14,(LPOVERLAPPED)0x0);
              if (BVar1 == 0) {
                local_c = GetLastError();
              }
              if ((local_c == 0) && (local_14 != 0)) {
                if ((*(byte *)((&DAT_10322300)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x48) == 0) {
                  if ((local_10 == param_2) && (local_20[0] == '\n')) {
                    *local_10 = '\n';
                    local_10 = local_10 + 1;
                  }
                  else {
                    FUN_100c64c0(param_1,-1,1);
                    if (local_20[0] != '\n') {
                      *local_10 = '\r';
                      local_10 = local_10 + 1;
                    }
                  }
                }
                else {
                  if (local_20[0] == '\n') {
                    *local_10 = '\n';
                  }
                  else {
                    *local_10 = '\r';
                    *(char *)((&DAT_10322300)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) = local_20[0];
                  }
                  local_10 = local_10 + 1;
                }
              }
              else {
                *local_10 = '\r';
                local_10 = local_10 + 1;
              }
            }
          }
          else {
            *local_10 = *local_8;
            local_10 = local_10 + 1;
            local_8 = local_8 + 1;
          }
        }
        local_1c = (int)local_10 - (int)param_2;
      }
    }
  }
  return local_1c;
}

/* 100c6c50  FUN_100c6c50  (797 bytes)
 * undefined4 * FUN_100c6c50(LPCSTR param_1, char * param_2, undefined4 param_3, undefined4 * param_4)
 * called by: FUN_100bd1e0
 */
undefined4 * __cdecl
FUN_100c6c50(LPCSTR param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_20;
  uint local_18;
  
  local_20 = DAT_10321e8c;
  bVar4 = false;
  bVar5 = false;
  if ((param_1 == (LPCSTR)0x0) &&
     (iVar6 = FUN_100c32e0(2,0x10279a24,0x47,0,(byte_conflict *)"filename != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar2)();
    return puVar7;
  }
  if ((param_2 == (char *)0x0) &&
     (iVar6 = FUN_100c32e0(2,0x10279a24,0x48,0,(byte_conflict *)"mode != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar2)();
    return puVar7;
  }
  if ((param_4 == (undefined4 *)0x0) &&
     (iVar6 = FUN_100c32e0(2,0x10279a24,0x49,0,(byte_conflict *)"str != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar2)();
    return puVar7;
  }
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    local_18 = 0x109;
    local_20 = local_20 | 2;
  }
  else if (cVar1 == 'r') {
    local_18 = 0;
    local_20 = local_20 | 1;
  }
  else {
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    local_18 = 0x301;
    local_20 = local_20 | 2;
  }
  bVar3 = true;
  while ((param_2 = param_2 + 1, *param_2 != '\0' && (bVar3))) {
    switch(*param_2) {
    case '+':
      if ((local_18 & 2) == 0) {
        local_18 = local_18 & 0xfffffffe | 2;
        local_20 = local_20 & 0xfffffffc | 0x80;
      }
      else {
        bVar3 = false;
      }
      break;
    default:
      bVar3 = false;
      break;
    case 'D':
      if ((local_18 & 0x40) == 0) {
        local_18 = local_18 | 0x40;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'R':
      if (bVar5) {
        bVar3 = false;
      }
      else {
        bVar5 = true;
        local_18 = local_18 | 0x10;
      }
      break;
    case 'S':
      if (bVar5) {
        bVar3 = false;
      }
      else {
        bVar5 = true;
        local_18 = local_18 | 0x20;
      }
      break;
    case 'T':
      if ((local_18 & 0x1000) == 0) {
        local_18 = local_18 | 0x1000;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'b':
      if ((local_18 & 0xc000) == 0) {
        local_18 = local_18 | 0x8000;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'c':
      if (bVar4) {
        bVar3 = false;
      }
      else {
        bVar4 = true;
        local_20 = local_20 | 0x4000;
      }
      break;
    case 'n':
      if (bVar4) {
        bVar3 = false;
      }
      else {
        bVar4 = true;
        local_20 = local_20 & 0xffffbfff;
      }
      break;
    case 't':
      if ((local_18 & 0xc000) == 0) {
        local_18 = local_18 | 0x4000;
      }
      else {
        bVar3 = false;
      }
    }
  }
  uVar8 = FUN_100d3560(param_1,local_18,param_3,0x1a4);
  if ((int)uVar8 < 0) {
    param_4 = (undefined4 *)0x0;
  }
  else {
    DAT_10321d10 = DAT_10321d10 + 1;
    param_4[3] = local_20;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = uVar8;
  }
  return param_4;
}

/* 100c6fe0  FUN_100c6fe0  (384 bytes)
 * undefined4 * FUN_100c6fe0(void)
 * called by: FUN_100bd1e0
 */
undefined4 * FUN_100c6fe0(void)

{
  undefined4 uVar1;
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_100c4260(2);
  local_8 = 0;
  do {
    if (DAT_10323780 <= local_8) {
LAB_100c710e:
      if (local_c != (undefined4 *)0x0) {
        local_c[1] = 0;
        local_c[3] = 0;
        local_c[2] = 0;
        *local_c = 0;
        local_c[7] = 0;
        local_c[4] = 0xffffffff;
      }
      FUN_100c4300(2);
      return local_c;
    }
    if (*(int *)(DAT_10322440 + local_8 * 4) == 0) {
      uVar1 = __malloc_dbg(0x38,2,0x10279a40,0x55);
      *(undefined4 *)(DAT_10322440 + local_8 * 4) = uVar1;
      if (*(int *)(DAT_10322440 + local_8 * 4) != 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10322440 + local_8 * 4) + 0x20))
        ;
        EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10322440 + local_8 * 4) + 0x20));
        local_c = *(undefined4 **)(DAT_10322440 + local_8 * 4);
      }
      goto LAB_100c710e;
    }
    if ((*(uint *)(*(int *)(DAT_10322440 + local_8 * 4) + 0xc) & 0x83) == 0) {
      FUN_100c5a80(local_8,*(int *)(DAT_10322440 + local_8 * 4));
      if ((*(uint *)(*(int *)(DAT_10322440 + local_8 * 4) + 0xc) & 0x83) == 0) {
        local_c = *(undefined4 **)(DAT_10322440 + local_8 * 4);
        goto LAB_100c710e;
      }
      FUN_100c5af0(local_8,*(int *)(DAT_10322440 + local_8 * 4));
    }
    local_8 = local_8 + 1;
  } while( true );
}

/* 100c7160  FUN_100c7160  (130 bytes)
 * int FUN_100c7160(uint param_1, char * param_2, uint param_3)
 * called by: FUN_100bd440, FUN_100c20b0, FUN_100c5d90
 */
int __cdecl FUN_100c7160(uint param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if ((param_1 < DAT_1032243c) &&
     ((*(byte *)((&DAT_10322300)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100d3380(param_1);
    iVar3 = FUN_100c71f0(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 9;
    pDVar2 = FUN_100c6050();
    *pDVar2 = 0;
    iVar3 = -1;
  }
  return iVar3;
}

/* 100c71f0  FUN_100c71f0  (627 bytes)
 * int FUN_100c71f0(uint param_1, char * param_2, uint param_3)
 * called by: FUN_100c7160, FUN_100d90c0
 */
int __cdecl FUN_100c71f0(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  DWORD *pDVar4;
  int iVar5;
  int local_424;
  DWORD local_41c;
  char local_418 [1028];
  DWORD local_14;
  ulong local_10;
  char *local_c;
  char *local_8;
  
  local_14 = 0;
  local_424 = 0;
  if (param_3 == 0) {
    local_424 = 0;
  }
  else {
    iVar5 = (int)param_1 >> 5;
    if ((*(byte *)((&DAT_10322300)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x20) != 0) {
      FUN_100c64c0(param_1,0,2);
    }
    if (((int)*(char *)((&DAT_10322300)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) == 0) {
      BVar2 = WriteFile(*(HANDLE *)((&DAT_10322300)[iVar5] + (param_1 & 0x1f) * 0x24),param_2,
                        param_3,&local_41c,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        local_10 = GetLastError();
      }
      else {
        local_10 = 0;
        local_14 = local_41c;
      }
    }
    else {
      local_8 = param_2;
      local_10 = 0;
      do {
        if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
        local_c = local_418;
        while (((int)local_c - (int)local_418 < 0x400 &&
               ((uint)((int)local_8 - (int)param_2) < param_3))) {
          cVar1 = *local_8;
          local_8 = local_8 + 1;
          if (cVar1 == '\n') {
            local_424 = local_424 + 1;
            *local_c = '\r';
            local_c = local_c + 1;
          }
          *local_c = cVar1;
          local_c = local_c + 1;
        }
        BVar2 = WriteFile(*(HANDLE *)((&DAT_10322300)[iVar5] + (param_1 & 0x1f) * 0x24),local_418,
                          (int)local_c - (int)local_418,&local_41c,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          local_10 = GetLastError();
          break;
        }
        local_14 = local_14 + local_41c;
      } while ((int)local_c - (int)local_418 <= (int)local_41c);
    }
    if (local_14 == 0) {
      if (local_10 == 0) {
        if (((*(byte *)((&DAT_10322300)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) ||
           (*param_2 != '\x1a')) {
          puVar3 = (undefined4 *)FUN_100c6040();
          *puVar3 = 0x1c;
          pDVar4 = FUN_100c6050();
          *pDVar4 = 0;
          local_424 = -1;
        }
        else {
          local_424 = 0;
        }
      }
      else {
        if (local_10 == 5) {
          puVar3 = (undefined4 *)FUN_100c6040();
          *puVar3 = 9;
          pDVar4 = FUN_100c6050();
          *pDVar4 = local_10;
        }
        else {
          __dosmaperr(local_10);
        }
        local_424 = -1;
      }
    }
    else {
      local_424 = local_14 - local_424;
    }
  }
  return local_424;
}

/* 100c7490  FUN_100c7490  (507 bytes)
 * int FUN_100c7490(int param_1, int param_2)
 */
int __cdecl FUN_100c7490(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  int local_10;
  uint local_c;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_100c4260(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_10321d24 == 0)) {
        BVar2 = SetConsoleCtrlHandler(FUN_100c76c0,1);
        if (BVar2 != 1) {
          DVar3 = GetLastError();
          pDVar4 = FUN_100c6050();
          *pDVar4 = DVar3;
          FUN_100c4300(1);
          goto LAB_100c7678;
        }
        DAT_10321d24 = 1;
      }
      switch(param_1) {
      case 2:
        local_10 = DAT_10321d14;
        DAT_10321d14 = param_2;
        break;
      case 0xf:
        local_10 = DAT_10321d20;
        DAT_10321d20 = param_2;
        break;
      case 0x15:
        local_10 = DAT_10321d18;
        DAT_10321d18 = param_2;
        break;
      case 0x16:
        local_10 = DAT_10321d1c;
        DAT_10321d1c = param_2;
      }
      FUN_100c4300(1);
      return local_10;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar4 = FUN_100c55e0();
      if ((undefined *)pDVar4[0x14] == &DAT_1028e150) {
        DVar3 = __malloc_dbg(DAT_1028e1d0,2,0x10279a4c,0x133);
        pDVar4[0x14] = DVar3;
        if (pDVar4[0x14] == 0) goto LAB_100c7678;
        FUN_100bc090((undefined4 *)pDVar4[0x14],(undefined4 *)&DAT_1028e150,DAT_1028e1d0);
      }
      local_c = FUN_100c79a0(param_1,pDVar4[0x14]);
      if (local_c != 0) {
        iVar1 = *(int *)(local_c + 8);
        do {
          if (*(int *)(local_c + 4) != param_1) {
            return iVar1;
          }
          *(int *)(local_c + 8) = param_2;
          local_c = local_c + 0xc;
        } while (local_c < pDVar4[0x14] + DAT_1028e1d4 * 0xc);
        return iVar1;
      }
    }
  }
LAB_100c7678:
  puVar5 = (undefined4 *)FUN_100c6040();
  *puVar5 = 0x16;
  return -1;
}

/* 100c76c0  FUN_100c76c0  (146 bytes)
 * undefined4 FUN_100c76c0(int param_1)
 */
undefined4 FUN_100c76c0(int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  FUN_100c4260(1);
  if (param_1 == 0) {
    local_c = &DAT_10321d14;
    local_10 = DAT_10321d14;
    local_8 = 2;
  }
  else {
    local_c = &DAT_10321d18;
    local_10 = DAT_10321d18;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    FUN_100c4300(1);
    uVar1 = 0;
  }
  else {
    if (local_10 == (code *)0x1) {
      FUN_100c4300(1);
    }
    else {
      *local_c = 0;
      FUN_100c4300(1);
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* 100c7760  FUN_100c7760  (522 bytes)
 * undefined4 FUN_100c7760(int param_1)
 * called by: FUN_100bd710, FUN_100c3670, _abort
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100c7760(int param_1)

{
  bool bVar1;
  uint uVar2;
  code *local_20;
  undefined4 *local_1c;
  DWORD local_18;
  int local_14;
  DWORD local_c;
  DWORD *local_8;
  
  bVar1 = false;
  switch(param_1) {
  case 2:
    local_1c = &DAT_10321d14;
    local_20 = DAT_10321d14;
    bVar1 = true;
    break;
  default:
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    local_8 = FUN_100c55e0();
    uVar2 = FUN_100c79a0(param_1,local_8[0x14]);
    local_1c = (undefined4 *)(uVar2 + 8);
    local_20 = (code *)*local_1c;
    break;
  case 0xf:
    local_1c = &DAT_10321d20;
    local_20 = DAT_10321d20;
    bVar1 = true;
    break;
  case 0x15:
    local_1c = &DAT_10321d18;
    local_20 = DAT_10321d18;
    bVar1 = true;
    break;
  case 0x16:
    local_1c = &DAT_10321d1c;
    local_20 = DAT_10321d1c;
    bVar1 = true;
  }
  if (bVar1) {
    FUN_100c4260(1);
  }
  if (local_20 != (code *)0x1) {
    if (local_20 == (code *)0x0) {
      if (bVar1) {
        FUN_100c4300(1);
      }
                    /* WARNING: Subroutine does not return */
      __exit(3);
    }
    if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
      local_18 = local_8[0x15];
      local_8[0x15] = 0;
      if (param_1 == 8) {
        local_c = local_8[0x16];
        local_8[0x16] = 0x8c;
      }
    }
    if (param_1 == 8) {
      for (local_14 = DAT_1028e1c8; local_14 < DAT_1028e1c8 + _DAT_1028e1cc; local_14 = local_14 + 1
          ) {
        *(undefined4 *)(local_8[0x14] + 8 + local_14 * 0xc) = 0;
      }
    }
    else {
      *local_1c = 0;
    }
    if (bVar1) {
      FUN_100c4300(1);
    }
    if (param_1 == 8) {
      (*local_20)(8,local_8[0x16]);
    }
    else {
      (*local_20)(param_1);
      if ((param_1 != 0xb) && (param_1 != 4)) {
        return 0;
      }
    }
    local_8[0x15] = local_18;
    if (param_1 == 8) {
      local_8[0x16] = local_c;
    }
    return 0;
  }
  if (bVar1) {
    FUN_100c4300(1);
  }
  return 0;
}

/* 100c79a0  FUN_100c79a0  (91 bytes)
 * uint FUN_100c79a0(int param_1, uint param_2)
 * called by: FUN_100c7490, FUN_100c7760
 */
uint __cdecl FUN_100c79a0(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < param_2 + DAT_1028e1d4 * 0xc);
  if ((param_2 + DAT_1028e1d4 * 0xc <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}

/* 100c7a00  FUN_100c7a00  (13 bytes)
 * DWORD * FUN_100c7a00(void)
 */
DWORD * FUN_100c7a00(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100c55e0();
  return pDVar1 + 0x16;
}

/* 100c7a10  FUN_100c7a10  (13 bytes)
 * DWORD * FUN_100c7a10(void)
 * called by: FUN_100d1810
 */
DWORD * FUN_100c7a10(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100c55e0();
  return pDVar1 + 0x15;
}

/* 100c7a20  FUN_100c7a20  (187 bytes)
 * int FUN_100c7a20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_100bd710, FUN_100c3670, FUN_100d1230
 */
int __cdecl FUN_100c7a20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_10321d28 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10321d28 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10321d28 != (FARPROC)0x0) {
        DAT_10321d2c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10321d30 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100c7a93;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100c7a93:
    if (DAT_10321d2c != (FARPROC)0x0) {
      local_8 = (*DAT_10321d2c)();
    }
    if ((local_8 != 0) && (DAT_10321d30 != (FARPROC)0x0)) {
      local_8 = (*DAT_10321d30)(local_8);
    }
    iVar1 = (*DAT_10321d28)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}

/* 100c7dd0  FUN_100c7dd0  (365 bytes)
 * undefined4 FUN_100c7dd0(undefined * * param_1, undefined * * param_2, uint param_3, undefined * param_4)
 * called by: FUN_100bd710
 */
undefined4 __cdecl
FUN_100c7dd0(undefined **param_1,undefined **param_2,uint param_3,undefined *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  local_c = 0;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10279a88,0x36,0,(byte_conflict *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_3 != 4) &&
     (((param_4 < (undefined *)0x2 || ((undefined *)0x7fffffff < param_4)) ||
      ((param_3 != 0 && (param_3 != 0x40)))))) {
    return 0xffffffff;
  }
  param_4 = (undefined *)((uint)param_4 & 0xfffffffe);
  FUN_100c5a40(param_1);
  FUN_100c5d90((int *)param_1);
  FUN_100c5c50(param_1);
  param_1[3] = (undefined *)((uint)param_1[3] & 0xffffc2f3);
  if ((param_3 & 4) == 0) {
    if (param_2 == (undefined **)0x0) {
      param_2 = (undefined **)__malloc_dbg((uint)param_4,2,0x10279a88,0x85);
      if (param_2 == (undefined **)0x0) {
        DAT_10321d10 = DAT_10321d10 + 1;
        local_c = 0xffffffff;
        goto LAB_100c7f27;
      }
      param_1[3] = (undefined *)((uint)param_1[3] | 0x408);
    }
    else {
      param_1[3] = (undefined *)((uint)param_1[3] | 0x500);
    }
  }
  else {
    param_1[3] = (undefined *)((uint)param_1[3] | 4);
    param_2 = param_1 + 5;
    param_4 = (undefined *)0x2;
  }
  param_1[6] = param_4;
  param_1[2] = (undefined *)param_2;
  *param_1 = (undefined *)param_2;
  param_1[1] = (undefined *)0x0;
LAB_100c7f27:
  FUN_100c5ab0(param_1);
  return local_c;
}

/* 100c7f40  FUN_100c7f40  (190 bytes)
 * uint * FUN_100c7f40(uint * param_1, byte.conflict * param_2)
 * called by: FUN_100bda90
 */
uint * __cdecl FUN_100c7f40(uint *param_1,byte_conflict *param_2)

{
  int iVar1;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  ushort local_14 [6];
  uint local_8;
  
  local_24 = 0;
  local_8 = FUN_100d3ac0(local_14,&local_18,param_2,0,0,0,0);
  if ((local_8 & 4) == 0) {
    iVar1 = FUN_100d2400(local_14,&local_20);
    if (((local_8 & 2) != 0) || (iVar1 == 1)) {
      local_24 = 0x80;
    }
    if (((local_8 & 1) != 0) || (iVar1 == 2)) {
      local_24 = local_24 | 0x100;
    }
  }
  else {
    local_24 = 0x200;
    local_20 = 0;
    local_1c = 0;
  }
  *param_1 = local_24;
  param_1[1] = local_18 - (int)param_2;
  param_1[4] = local_20;
  param_1[5] = local_1c;
  return param_1;
}

/* 100c80c3  FUN_100c80c3  (7 bytes)
 * undefined FUN_100c80c3(void)
 * called by: __ctrandisp1, __ctrandisp2
 */
void FUN_100c80c3(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_10321c14 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_100c8199;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_100c8199;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_100c8199;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_100c8199:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_100d28c0((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(_exception *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}

/* 100c80ca  FUN_100c80ca  (305 bytes)
 * undefined FUN_100c80ca(void)
 * called by: __cintrindisp1, __cintrindisp2
 */
void FUN_100c80ca(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_10321c14 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_100c8199;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_100c8199;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_100c8199;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_100c8199:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_100d28c0((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(_exception *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}

/* 100c8a76  FUN_100c8a76  (518 bytes)
 * undefined4 FUN_100c8a76(undefined4 param_1, uint param_2, ushort param_3)
 * called by: FUN_100c8c7c
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100c8a76(undefined4 param_1,uint param_2,ushort param_3)

{
  undefined4 in_EAX;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  ushort in_stack_00000024;
  
  if ((((((CONCAT22(param_3,param_2._2_2_) ^ 0x700) & 0x700) == 0) &&
       ((&DAT_1028bbdc)[(param_2._2_2_ & 0x7800) >> 0xb] != '\0')) && ((param_3 & 0x7fff) != 0x7fff)
      ) && ((((in_stack_00000024 & 0x7fff) != 0 && ((in_stack_00000024 & 0x7fff) != 0x7fff)) &&
            (((CONCAT22(in_stack_00000022,in_stack_00000020) & 0x7fffffff) == 0 &&
             ((param_2 & 0x7fffffff) == 0)))))) {
    if ((ushort)((param_3 & 0x7fff) + 0x3f) < (in_stack_00000024 & 0x7fff)) {
      iVar1 = ((in_stack_00000024 & 0x7fff) - (param_3 & 0x7fff) & 0x3f | 0x20) + 1;
      fVar3 = ABS((float10)CONCAT28(in_stack_00000024 & 0x7fff | param_3 & 0x8000,
                                    CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))));
      fVar2 = ABS((float10)CONCAT28(in_stack_00000024,
                                    CONCAT26(in_stack_00000022,
                                             CONCAT24(in_stack_00000020,in_stack_0000001c))));
      do {
        if (fVar3 <= fVar2) {
          fVar2 = fVar2 - fVar3;
        }
        fVar3 = fVar3 * (float10)_DAT_1028bc0c;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      while (-1 < (int)((in_stack_00000024 & 0x7fff) - ((param_3 & 0x7fff) + 10))) {
        fVar2 = (float10)CONCAT28(in_stack_00000024,
                                  CONCAT26(in_stack_00000022,
                                           CONCAT24(in_stack_00000020,in_stack_0000001c)));
        fVar3 = (float10)CONCAT28((in_stack_00000024 & 0x7fff) -
                                  ((in_stack_00000024 & 0x7fff) - param_3 & 7 | 4) |
                                  param_3 & 0x8000,
                                  CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)));
        fVar2 = fVar2 - (float10)(unkint10)(fVar2 / fVar3) * fVar3;
        in_stack_0000001c = SUB104(fVar2,0);
        in_stack_00000020 = (undefined2)((unkuint10)fVar2 >> 0x20);
        in_stack_00000022 = (undefined2)((unkuint10)fVar2 >> 0x30);
        in_stack_00000024 = (ushort)((unkuint10)fVar2 >> 0x40);
      }
    }
  }
  return in_EAX;
}

/* 100c8c7c  FUN_100c8c7c  (178 bytes)
 * float10 FUN_100c8c7c(void)
 * called by: FUN_100bdb54
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100c8c7c(void)

{
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 in_ST1;
  uint uVar2;
  float10 fVar1;
  
  uVar2 = (uint)((unkuint10)in_ST1 >> 0x20);
  if (((uint)((unkuint10)in_ST1 >> 0x30) & 0x7fff0000) != 0) {
    FUN_100c8a76(SUB104(in_ST1,0),uVar2,(ushort)((unkuint10)in_ST1 >> 0x40));
    return extraout_ST0;
  }
  if (SUB104(in_ST1,0) != 0 || uVar2 != 0) {
    fVar1 = in_ST1 * (float10)_DAT_1028bbf4;
    FUN_100c8a76(SUB104(fVar1,0),(uint)((unkuint10)fVar1 >> 0x20),(ushort)((unkuint10)fVar1 >> 0x40)
                );
    return extraout_ST0_00;
  }
  return in_ST0 - (float10)(unkint10)(in_ST0 / in_ST1) * in_ST1;
}

/* 100c9000  FUN_100c9000  (343 bytes)
 * undefined4 FUN_100c9000(undefined4 * param_1)
 * called by: FUN_100bdbb0
 */
undefined4 __cdecl FUN_100c9000(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10279ad0,0x41,0,(byte_conflict *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar2 = __isatty(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)&DAT_1028b7c8) {
    local_c = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_1028b7e8) {
      return 0;
    }
    local_c = 1;
  }
  DAT_10321d10 = DAT_10321d10 + 1;
  if ((param_1[3] & 0x10c) != 0) {
    return 0;
  }
  if (*(int *)(&DAT_10321d34 + local_c * 4) == 0) {
    uVar3 = __malloc_dbg(0x1000,2,0x10279ad0,0x5e);
    *(undefined4 *)(&DAT_10321d34 + local_c * 4) = uVar3;
    if (*(int *)(&DAT_10321d34 + local_c * 4) == 0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1[2];
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_100c9139;
    }
  }
  param_1[2] = *(undefined4 *)(&DAT_10321d34 + local_c * 4);
  *param_1 = param_1[2];
  param_1[6] = 0x1000;
  param_1[1] = 0x1000;
LAB_100c9139:
  param_1[3] = param_1[3] | 0x1102;
  return 1;
}

/* 100c9160  FUN_100c9160  (148 bytes)
 * undefined FUN_100c9160(int param_1, int * param_2)
 * called by: FUN_100bdbb0
 */
void __cdecl FUN_100c9160(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (((param_1 != 0) && (param_1 != 1)) &&
     (iVar2 = FUN_100c32e0(2,0x10279ad0,0xa1,0,(byte_conflict *)"flag == 0 || flag == 1"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 != 0) && ((param_2[3] & 0x1000U) != 0)) {
    FUN_100c5d90(param_2);
    param_2[3] = param_2[3] & 0xffffeeff;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}

/* 100c9200  FUN_100c9200  (238 bytes)
 * int FUN_100c9200(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * called by: FUN_100be420
 */
int __cdecl
FUN_100c9200(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int local_30;
  int local_2c [2];
  int local_24;
  int local_1c;
  uint local_18;
  int local_10;
  int local_8;
  
  uVar1 = param_1 - 0x76c;
  if (((int)uVar1 < 0x46) || (0x8a < (int)uVar1)) {
    local_8 = -1;
  }
  else {
    local_30 = param_3 + *(int *)(&DAT_1028e2bc + param_2 * 4);
    if (((uVar1 & 3) == 0) && (2 < param_2)) {
      local_30 = local_30 + 1;
    }
    local_8 = ((((param_1 + -0x76d >> 2) + -0x11 + local_30 + (param_1 + -0x7b2) * 0x16d) * 0x18 +
               param_4) * 0x3c + param_5) * 0x3c + param_6;
    FUN_100d4640();
    local_8 = local_8 + DAT_1028e1d8;
    local_10 = local_30;
    local_1c = param_2 + -1;
    local_24 = param_4;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_1028e1dc != 0)) &&
        (local_18 = uVar1, iVar2 = FUN_100d4a50(local_2c), iVar2 != 0)))) {
      local_8 = local_8 + DAT_1028e1e0;
    }
  }
  return local_8;
}

/* 100c9320  FUN_100c9320  (10 bytes)
 * undefined4 FUN_100c9320(void)
 */
undefined4 FUN_100c9320(void)

{
  return DAT_10321d40;
}

/* 100c9368  FUN_100c9368  (189 bytes)
 * undefined FUN_100c9368()
 */
undefined4 FUN_100c9368(int param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_ECX;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iStack_c;
  undefined4 uStack_8;
  
  puVar4 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  if ((*(uint *)(param_1 + 4) & 6) == 0) {
    iStack_c = param_1;
    uStack_8 = param_3;
    *(int **)((int)param_2 + -4) = &iStack_c;
    iVar1 = *(int *)((int)param_2 + 8);
    for (iVar3 = *(int *)((int)param_2 + 0xc); iVar3 != -1; iVar3 = *(int *)(iVar1 + iVar3 * 0xc)) {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) != 0) {
        iVar1 = (**(code **)(iVar1 + 4 + iVar3 * 0xc))(puVar2,iVar3,puVar4);
        param_2 = *(PVOID *)(puVar2 + 0xc);
        if (iVar1 != 0) {
          if (iVar1 < 0) {
            return 0;
          }
          iVar1 = *(int *)((int)param_2 + 8);
          __global_unwind2(param_2);
          puVar2 = (undefined1 *)((int)param_2 + 0x10);
          __local_unwind2((int)param_2,iVar3);
          FUN_100bc9b6();
          *(undefined4 *)((int)param_2 + 0xc) = *(undefined4 *)(iVar1 + extraout_ECX * 4);
          (**(code **)(iVar1 + 8 + extraout_ECX * 4))();
        }
      }
      iVar1 = *(int *)((int)param_2 + 8);
    }
  }
  else {
    __local_unwind2((int)param_2,-1);
  }
  return 1;
}

/* 100c9425  FUN_100c9425  (27 bytes)
 * undefined FUN_100c9425(int param_1)
 */
void FUN_100c9425(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}

/* 100c9525  FUN_100c9525  (11 bytes)
 * undefined FUN_100c9525(void)
 * called by: __heap_alloc_base
 */
void FUN_100c9525(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c9530  FUN_100c9530  (19 bytes)
 * undefined4 FUN_100c9530(void)
 * called by: __heap_alloc_base
 */
undefined4 FUN_100c9530(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return *(undefined4 *)(unaff_EBP + -0x1c);
  }
  uVar1 = FUN_100c95d1();
  return uVar1;
}

/* 100c95a7  FUN_100c95a7  (11 bytes)
 * undefined FUN_100c95a7(void)
 */
void FUN_100c95a7(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c95b2  FUN_100c95b2  (31 bytes)
 * LPVOID FUN_100c95b2(void)
 */
LPVOID FUN_100c95b2(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    pvVar1 = HeapAlloc(DAT_103222bc,0,*(SIZE_T *)(unaff_EBP + 8));
  }
  else {
    pvVar1 = *(LPVOID *)(unaff_EBP + -0x1c);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return pvVar1;
}

/* 100c95d1  FUN_100c95d1  (60 bytes)
 * undefined FUN_100c95d1(void)
 * called by: FUN_100c9530
 */
void FUN_100c95d1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 1;
  }
  *(uint *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0xfU & 0xfffffff0;
  HeapAlloc(DAT_103222bc,0,*(SIZE_T *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100c9610  FUN_100c9610  (10 bytes)
 * undefined4 FUN_100c9610(void)
 * called by: FUN_100be6f0, FUN_100beb60, FUN_100bf1f0
 */
undefined4 FUN_100c9610(void)

{
  return 1;
}

/* 100c9620  FUN_100c9620  (161 bytes)
 * undefined * FUN_100c9620(undefined * param_1, uint param_2)
 * called by: FUN_100beb60
 */
undefined * FUN_100c9620(undefined *param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  int iStack_30;
  byte_conflict *pbStack_2c;
  uint *puStack_28;
  uint *local_24;
  undefined *local_20;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279b10;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  if (param_2 < 0xffffffe1) {
    if (DAT_103222cc == 3) {
      ExceptionList = &pvStack_14;
      FUN_100c4260(9);
      local_8 = 0;
      local_24 = (uint *)FUN_100c9fa0((int)param_1);
      if ((local_24 != (uint *)0x0) && (local_20 = (undefined *)0x0, param_2 <= DAT_103222fc)) {
        iVar2 = FUN_100cae80(local_24,(int)param_1,param_2);
        if (iVar2 != 0) {
          local_20 = param_1;
        }
      }
      local_8 = 0xffffffff;
      FUN_100c96c1();
      puVar1 = (undefined *)FUN_100c96cc();
      return puVar1;
    }
    if (DAT_103222cc == 2) {
      if (param_2 == 0) {
        param_2 = 1;
      }
      ExceptionList = &pvStack_14;
      FUN_100c4260(9);
      local_8 = 1;
      pbStack_2c = (byte_conflict *)FUN_100cbfc0(param_1,&iStack_30,(uint *)&puStack_28);
      if (pbStack_2c == (byte_conflict *)0x0) {
        local_8 = 0xffffffff;
        FUN_100c97ba();
        puVar1 = (undefined *)FUN_100c97c5();
        return puVar1;
      }
      local_20 = (undefined *)0x0;
      if ((param_2 + 0xf & 0xfffffff0) <= DAT_1028dd4c) {
        iVar2 = FUN_100cc730(iStack_30,puStack_28,pbStack_2c,param_2 + 0xf >> 4);
        if (iVar2 != 0) {
          local_20 = param_1;
        }
      }
      puVar1 = local_20;
      __local_unwind2((int)&pvStack_14,-1);
    }
    else {
      if (param_2 == 0) {
        param_2 = 1;
      }
      ExceptionList = &pvStack_14;
      puVar1 = HeapReAlloc(DAT_103222bc,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  ExceptionList = pvStack_14;
  return puVar1;
}

/* 100c96c1  FUN_100c96c1  (11 bytes)
 * undefined FUN_100c96c1(void)
 * called by: FUN_100c9620
 */
void FUN_100c96c1(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c96cc  FUN_100c96cc  (60 bytes)
 * undefined4 FUN_100c96cc(void)
 * called by: FUN_100c9620
 */
undefined4 FUN_100c96cc(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 1;
    }
    *(uint *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0xfU & 0xfffffff0;
    pvVar1 = HeapReAlloc(DAT_103222bc,0x10,*(LPVOID *)(unaff_EBP + 8),*(SIZE_T *)(unaff_EBP + 0xc));
    *(LPVOID *)(unaff_EBP + -0x1c) = pvVar1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

/* 100c97ba  FUN_100c97ba  (11 bytes)
 * undefined FUN_100c97ba(void)
 */
void FUN_100c97ba(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c97c5  FUN_100c97c5  (53 bytes)
 * undefined4 FUN_100c97c5(void)
 */
undefined4 FUN_100c97c5(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    pvVar1 = HeapReAlloc(DAT_103222bc,0x10,*(LPVOID *)(unaff_EBP + 8),*(SIZE_T *)(unaff_EBP + 0xc));
    *(LPVOID *)(unaff_EBP + -0x1c) = pvVar1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

/* 100c9830  FUN_100c9830  (976 bytes)
 * undefined FUN_100c9830(int * param_1, uint param_2)
 * called by: FUN_100beb60
 */
void FUN_100c9830(int *param_1,uint param_2)

{
  int iVar1;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  byte *local_34;
  uint *local_30;
  uint *local_2c;
  int *local_28;
  uint local_24;
  uint local_20;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279b28;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  local_20 = param_2;
  if (param_1 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __malloc_base(param_2);
    FUN_100c9cb2();
    return;
  }
  if (param_2 == 0) {
    ExceptionList = &pvStack_14;
    FUN_100c4340((undefined *)param_1);
    FUN_100c9cb2();
    return;
  }
  ExceptionList = &pvStack_14;
  if (DAT_103222cc != 3) {
    ExceptionList = &pvStack_14;
    if (DAT_103222cc != 2) {
      while( true ) {
        local_28 = (LPVOID)0x0;
        if (param_2 < 0xffffffe1) {
          if (param_2 == 0) {
            param_2 = 1;
          }
          param_2 = param_2 + 0xf & 0xfffffff0;
          local_28 = HeapReAlloc(DAT_103222bc,0,param_1,param_2);
        }
        if ((local_28 != (LPVOID)0x0) || (DAT_10321d3c == 0)) break;
        iVar1 = __callnewh(param_2);
        if (iVar1 == 0) {
          FUN_100c9cb2();
          return;
        }
      }
      FUN_100c9cb2();
      return;
    }
    ExceptionList = &pvStack_14;
    if (param_2 < 0xffffffe1) {
      if (param_2 == 0) {
        param_2 = 0x10;
        ExceptionList = &pvStack_14;
      }
      else {
        param_2 = param_2 + 0xf & 0xfffffff0;
        ExceptionList = &pvStack_14;
      }
    }
    while( true ) {
      local_28 = (int *)0x0;
      if (param_2 < 0xffffffe1) {
        FUN_100c4260(9);
        local_8 = 1;
        local_34 = (byte *)FUN_100cbfc0((undefined *)param_1,&local_3c,(uint *)&local_30);
        if (local_34 == (byte *)0x0) {
          local_28 = HeapReAlloc(DAT_103222bc,0,param_1,param_2);
        }
        else {
          if (param_2 < DAT_1028dd4c) {
            iVar1 = FUN_100cc730(local_3c,local_30,local_34,param_2 >> 4);
            if (iVar1 == 0) {
              local_28 = FUN_100cc0c0(param_2 >> 4);
              if (local_28 != (int *)0x0) {
                local_38 = (uint)*local_34 << 4;
                local_48 = local_38;
                if (param_2 <= local_38) {
                  local_48 = param_2;
                }
                FUN_100bc090(local_28,param_1,local_48);
                FUN_100cc050(local_3c,(int)local_30,local_34);
              }
            }
            else {
              local_28 = param_1;
            }
          }
          if ((local_28 == (int *)0x0) &&
             (local_28 = HeapAlloc(DAT_103222bc,0,param_2), local_28 != (int *)0x0)) {
            local_38 = (uint)*local_34 << 4;
            local_4c = local_38;
            if (param_2 <= local_38) {
              local_4c = param_2;
            }
            FUN_100bc090(local_28,param_1,local_4c);
            FUN_100cc050(local_3c,(int)local_30,local_34);
          }
        }
        local_8 = 0xffffffff;
        FUN_100c9c0f();
        FUN_100c9c1a();
        return;
      }
      if (DAT_10321d3c == 0) break;
      iVar1 = __callnewh(param_2);
      if (iVar1 == 0) {
        FUN_100c9cb2();
        return;
      }
    }
    FUN_100c9cb2();
    return;
  }
  while( true ) {
    local_28 = (int *)0x0;
    if (param_2 < 0xffffffe1) {
      FUN_100c4260(9);
      local_8 = 0;
      local_2c = (uint *)FUN_100c9fa0((int)param_1);
      if (local_2c != (uint *)0x0) {
        if (param_2 <= DAT_103222fc) {
          iVar1 = FUN_100cae80(local_2c,(int)param_1,param_2);
          if (iVar1 == 0) {
            local_28 = FUN_100ca640(param_2);
            if (local_28 != (int *)0x0) {
              local_24 = param_1[-1] - 1;
              local_40 = local_24;
              if (param_2 <= local_24) {
                local_40 = param_2;
              }
              FUN_100bc090(local_28,param_1,local_40);
              local_2c = (uint *)FUN_100c9fa0((int)param_1);
              FUN_100ca060(local_2c,(int)param_1);
            }
          }
          else {
            local_28 = param_1;
          }
        }
        if (local_28 == (int *)0x0) {
          if (param_2 == 0) {
            param_2 = 1;
          }
          local_44 = param_2 + 0xf & 0xfffffff0;
          local_28 = HeapAlloc(DAT_103222bc,0,local_44);
          if (local_28 != (int *)0x0) {
            local_24 = param_1[-1] - 1;
            if (local_24 < local_44) {
              local_44 = local_24;
            }
            FUN_100bc090(local_28,param_1,local_44);
            FUN_100ca060(local_2c,(int)param_1);
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_100c99f8();
      FUN_100c9a03();
      return;
    }
    if (DAT_10321d3c == 0) break;
    iVar1 = __callnewh(param_2);
    if (iVar1 == 0) {
      FUN_100c9cb2();
      return;
    }
  }
  FUN_100c9cb2();
  return;
}

/* 100c99f8  FUN_100c99f8  (11 bytes)
 * undefined FUN_100c99f8(void)
 * called by: FUN_100c9830
 */
void FUN_100c99f8(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c9a03  FUN_100c9a03  (108 bytes)
 * undefined FUN_100c9a03(void)
 * called by: FUN_100c9830
 */
void FUN_100c9a03(void)

{
  uint uVar1;
  int *piVar2;
  LPVOID pvVar3;
  int iVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 1;
    }
    *(uint *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0xfU & 0xfffffff0;
    pvVar3 = HeapReAlloc(DAT_103222bc,0,*(LPVOID *)(unaff_EBP + 8),*(SIZE_T *)(unaff_EBP + 0xc));
    *(LPVOID *)(unaff_EBP + -0x24) = pvVar3;
  }
  do {
    if ((*(int *)(unaff_EBP + -0x24) != 0) || (DAT_10321d3c == 0)) {
      FUN_100c9cb2();
      return;
    }
    iVar4 = __callnewh(*(size_t *)(unaff_EBP + 0xc));
    if (iVar4 == 0) {
      FUN_100c9cb2();
      return;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  } while (0xffffffe0 < *(uint *)(unaff_EBP + 0xc));
  FUN_100c4260(9);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_100c9fa0(*(int *)(unaff_EBP + 8));
  *(uint *)(unaff_EBP + -0x28) = uVar1;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    if (*(uint *)(unaff_EBP + 0xc) <= DAT_103222fc) {
      iVar4 = FUN_100cae80(*(uint **)(unaff_EBP + -0x28),*(int *)(unaff_EBP + 8),
                           *(int *)(unaff_EBP + 0xc));
      if (iVar4 == 0) {
        piVar2 = FUN_100ca640(*(int *)(unaff_EBP + 0xc));
        *(int **)(unaff_EBP + -0x24) = piVar2;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          *(int *)(unaff_EBP + -0x20) = *(int *)(*(int *)(unaff_EBP + 8) + -4) + -1;
          if (*(uint *)(unaff_EBP + -0x20) < *(uint *)(unaff_EBP + 0xc)) {
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x20);
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + 0xc);
          }
          FUN_100bc090(*(undefined4 **)(unaff_EBP + -0x24),*(undefined4 **)(unaff_EBP + 8),
                       *(uint *)(unaff_EBP + -0x3c));
          uVar1 = FUN_100c9fa0(*(int *)(unaff_EBP + 8));
          *(uint *)(unaff_EBP + -0x28) = uVar1;
          FUN_100ca060(*(uint **)(unaff_EBP + -0x28),*(int *)(unaff_EBP + 8));
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 8);
      }
    }
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 1;
      }
      *(uint *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0xfU & 0xfffffff0;
      pvVar3 = HeapAlloc(DAT_103222bc,0,*(SIZE_T *)(unaff_EBP + 0xc));
      *(LPVOID *)(unaff_EBP + -0x24) = pvVar3;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        *(int *)(unaff_EBP + -0x20) = *(int *)(*(int *)(unaff_EBP + 8) + -4) + -1;
        if (*(uint *)(unaff_EBP + -0x20) < *(uint *)(unaff_EBP + 0xc)) {
          *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x20);
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 0xc);
        }
        FUN_100bc090(*(undefined4 **)(unaff_EBP + -0x24),*(undefined4 **)(unaff_EBP + 8),
                     *(uint *)(unaff_EBP + -0x40));
        FUN_100ca060(*(uint **)(unaff_EBP + -0x28),*(int *)(unaff_EBP + 8));
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_100c99f8();
  FUN_100c9a03();
  return;
}

/* 100c9c0f  FUN_100c9c0f  (11 bytes)
 * undefined FUN_100c9c0f(void)
 * called by: FUN_100c9830
 */
void FUN_100c9c0f(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c9c1a  FUN_100c9c1a  (48 bytes)
 * undefined FUN_100c9c1a(void)
 * called by: FUN_100c9830
 */
void FUN_100c9c1a(void)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  int unaff_EBP;
  
  do {
    if ((*(int *)(unaff_EBP + -0x24) != 0) || (DAT_10321d3c == 0)) {
      FUN_100c9cb2();
      return;
    }
    iVar3 = __callnewh(*(size_t *)(unaff_EBP + 0xc));
    if (iVar3 == 0) {
      FUN_100c9cb2();
      return;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  } while (0xffffffe0 < *(uint *)(unaff_EBP + 0xc));
  FUN_100c4260(9);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_100cbfc0(*(undefined **)(unaff_EBP + 8),(undefined4 *)(unaff_EBP + -0x38),
                       (uint *)(unaff_EBP + -0x2c));
  *(int *)(unaff_EBP + -0x30) = iVar3;
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    pvVar2 = HeapReAlloc(DAT_103222bc,0,*(LPVOID *)(unaff_EBP + 8),*(SIZE_T *)(unaff_EBP + 0xc));
    *(LPVOID *)(unaff_EBP + -0x24) = pvVar2;
  }
  else {
    if (*(uint *)(unaff_EBP + 0xc) < DAT_1028dd4c) {
      iVar3 = FUN_100cc730(*(int *)(unaff_EBP + -0x38),*(uint **)(unaff_EBP + -0x2c),
                           *(byte_conflict **)(unaff_EBP + -0x30),*(uint *)(unaff_EBP + 0xc) >> 4);
      if (iVar3 == 0) {
        piVar1 = FUN_100cc0c0(*(uint *)(unaff_EBP + 0xc) >> 4);
        *(int **)(unaff_EBP + -0x24) = piVar1;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          *(uint *)(unaff_EBP + -0x34) = (uint)**(byte **)(unaff_EBP + -0x30) << 4;
          if (*(uint *)(unaff_EBP + -0x34) < *(uint *)(unaff_EBP + 0xc)) {
            *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x34);
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0xc);
          }
          FUN_100bc090(*(undefined4 **)(unaff_EBP + -0x24),*(undefined4 **)(unaff_EBP + 8),
                       *(uint *)(unaff_EBP + -0x44));
          FUN_100cc050(*(int *)(unaff_EBP + -0x38),*(int *)(unaff_EBP + -0x2c),
                       *(byte_conflict **)(unaff_EBP + -0x30));
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 8);
      }
    }
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      pvVar2 = HeapAlloc(DAT_103222bc,0,*(SIZE_T *)(unaff_EBP + 0xc));
      *(LPVOID *)(unaff_EBP + -0x24) = pvVar2;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        *(uint *)(unaff_EBP + -0x34) = (uint)**(byte **)(unaff_EBP + -0x30) << 4;
        if (*(uint *)(unaff_EBP + -0x34) < *(uint *)(unaff_EBP + 0xc)) {
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x34);
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
        }
        FUN_100bc090(*(undefined4 **)(unaff_EBP + -0x24),*(undefined4 **)(unaff_EBP + 8),
                     *(uint *)(unaff_EBP + -0x48));
        FUN_100cc050(*(int *)(unaff_EBP + -0x38),*(int *)(unaff_EBP + -0x2c),
                     *(byte_conflict **)(unaff_EBP + -0x30));
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_100c9c0f();
  FUN_100c9c1a();
  return;
}

/* 100c9cb2  FUN_100c9cb2  (17 bytes)
 * undefined FUN_100c9cb2(void)
 * called by: FUN_100c9830, FUN_100c9a03, FUN_100c9c1a
 */
void FUN_100c9cb2(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100c9d32  FUN_100c9d32  (11 bytes)
 * undefined FUN_100c9d32(void)
 * called by: __heapchk
 */
void FUN_100c9d32(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c9d77  FUN_100c9d77  (11 bytes)
 * undefined FUN_100c9d77(void)
 */
void FUN_100c9d77(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c9d82  FUN_100c9d82  (82 bytes)
 * undefined4 FUN_100c9d82(void)
 */
undefined4 FUN_100c9d82(void)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  BVar1 = HeapValidate(DAT_103222bc,0,(LPCVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x78) {
      pDVar3 = FUN_100c6050();
      *pDVar3 = 0x78;
      puVar4 = (undefined4 *)FUN_100c6040();
      *puVar4 = 0x28;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0xfffffffc;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

/* 100c9df0  FUN_100c9df0  (39 bytes)
 * undefined4 FUN_100c9df0(void)
 */
undefined4 FUN_100c9df0(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_103222fc;
  if ((DAT_103222cc != 3) && (uVar1 = DAT_1028dd4c, DAT_103222cc != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* 100c9e20  FUN_100c9e20  (266 bytes)
 * undefined4 FUN_100c9e20(uint param_1)
 */
undefined4 __cdecl FUN_100c9e20(uint param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  undefined **ppuVar3;
  uint uVar4;
  uint local_8;
  
  if (DAT_103222cc == 3) {
    if (param_1 < 0x3f9) {
      DAT_103222fc = param_1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else if (DAT_103222cc == 2) {
    uVar4 = param_1 + 0xf & 0xfffffff0;
    if (uVar4 < 0x781) {
      uVar2 = 1;
      DAT_1028dd4c = uVar4;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    if ((DAT_103222cc == 1) && (param_1 != 0)) {
      FUN_100ccae0(&local_8);
      if ((local_8 & 0xff) < 6) {
        uVar4 = param_1 + 0xf & 0xfffffff0;
        if ((uVar4 < 0x781) && (ppuVar3 = FUN_100cbc00(), ppuVar3 != (undefined **)0x0)) {
          DAT_1028dd4c = uVar4;
          DAT_103222cc = 2;
          return 1;
        }
      }
      else if ((param_1 < 0x3f9) &&
              (bVar1 = ___sbh_heap_init(param_1), CONCAT31(extraout_var,bVar1) != 0)) {
        DAT_103222cc = 3;
        DAT_103222fc = param_1;
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* 100c9fa0  FUN_100c9fa0  (85 bytes)
 * uint FUN_100c9fa0(int param_1)
 * called by: FUN_100bfe20, FUN_100c4340, FUN_100c9620, FUN_100c9830
 */
uint __cdecl FUN_100c9fa0(int param_1)

{
  uint local_c;
  
  local_c = DAT_103222f8;
  while( true ) {
    if (DAT_103222f8 + DAT_103222f4 * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}

/* 100ca000  FUN_100ca000  (95 bytes)
 * undefined4 FUN_100ca000(int param_1, int param_2)
 * called by: FUN_100bfe20
 */
undefined4 __cdecl FUN_100ca000(int param_1,int param_2)

{
  uint uVar1;
  undefined4 local_10;
  
  uVar1 = param_2 - *(int *)(param_1 + 0xc);
  if ((((*(uint *)(param_1 + 8) & 0x80000000U >> ((byte)(uVar1 >> 0xf) & 0x1f)) == 0) &&
      ((uVar1 & 0xf) == 0)) && ((uVar1 & 0xfff) != 0)) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

/* 100ca060  FUN_100ca060  (1500 bytes)
 * undefined FUN_100ca060(uint * param_1, int param_2)
 * called by: FUN_100c4340, FUN_100c9830
 */
void __cdecl FUN_100ca060(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint *local_20;
  
  uVar4 = param_1[4];
  uVar9 = param_2 - param_1[3] >> 0xf;
  piVar2 = (int *)(uVar4 + 0x144 + uVar9 * 0x204);
  local_20 = (uint *)(param_2 + -4);
  local_34 = *local_20 - 1;
  if ((local_34 & 1) == 0) {
    puVar7 = (uint *)((int)local_20 + local_34);
    uVar5 = *puVar7;
    uVar6 = *(uint *)(param_2 + -8);
    if ((uVar5 & 1) == 0) {
      local_28 = ((int)uVar5 >> 4) - 1;
      if (0x3f < local_28) {
        local_28 = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar8 = (byte)local_28;
        if (local_28 < 0x20) {
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               *(uint *)(uVar4 + 0x44 + uVar9 * 4) & ~(0x80000000U >> (bVar8 & 0x1f));
          *(char *)(uVar4 + local_28 + 4) = *(char *)(uVar4 + local_28 + 4) + -1;
          if (*(char *)(uVar4 + local_28 + 4) == '\0') {
            *param_1 = *param_1 & ~(0x80000000U >> (bVar8 & 0x1f));
          }
        }
        else {
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               *(uint *)(uVar4 + 0xc4 + uVar9 * 4) & ~(0x80000000U >> (bVar8 - 0x20 & 0x1f));
          *(char *)(uVar4 + local_28 + 4) = *(char *)(uVar4 + local_28 + 4) + -1;
          if (*(char *)(uVar4 + local_28 + 4) == '\0') {
            param_1[1] = param_1[1] & ~(0x80000000U >> (bVar8 - 0x20 & 0x1f));
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      local_34 = local_34 + uVar5;
    }
    local_2c = ((int)local_34 >> 4) - 1;
    if (0x3f < local_2c) {
      local_2c = 0x3f;
    }
    if ((uVar6 & 1) == 0) {
      local_20 = (uint *)((int)local_20 - uVar6);
      local_30 = ((int)uVar6 >> 4) - 1;
      if (0x3f < local_30) {
        local_30 = 0x3f;
      }
      local_34 = local_34 + uVar6;
      local_2c = ((int)local_34 >> 4) - 1;
      if (0x3f < local_2c) {
        local_2c = 0x3f;
      }
      if (local_30 != local_2c) {
        if (local_20[1] == local_20[2]) {
          bVar8 = (byte)local_30;
          if (local_30 < 0x20) {
            *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
                 *(uint *)(uVar4 + 0x44 + uVar9 * 4) & ~(0x80000000U >> (bVar8 & 0x1f));
            *(char *)(uVar4 + local_30 + 4) = *(char *)(uVar4 + local_30 + 4) + -1;
            if (*(char *)(uVar4 + local_30 + 4) == '\0') {
              *param_1 = *param_1 & ~(0x80000000U >> (bVar8 & 0x1f));
            }
          }
          else {
            *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
                 *(uint *)(uVar4 + 0xc4 + uVar9 * 4) & ~(0x80000000U >> (bVar8 - 0x20 & 0x1f));
            *(char *)(uVar4 + local_30 + 4) = *(char *)(uVar4 + local_30 + 4) + -1;
            if (*(char *)(uVar4 + local_30 + 4) == '\0') {
              param_1[1] = param_1[1] & ~(0x80000000U >> (bVar8 - 0x20 & 0x1f));
            }
          }
        }
        *(uint *)(local_20[2] + 4) = local_20[1];
        *(uint *)(local_20[1] + 8) = local_20[2];
      }
    }
    if (((uVar6 & 1) != 0) || (local_30 != local_2c)) {
      piVar1 = piVar2 + local_2c * 2;
      local_20[1] = piVar1[1];
      local_20[2] = (uint)piVar1;
      piVar1[1] = (int)local_20;
      *(uint **)(local_20[1] + 8) = local_20;
      if (local_20[1] == local_20[2]) {
        bVar8 = (byte)local_2c;
        if (local_2c < 0x20) {
          cVar3 = *(char *)(uVar4 + local_2c + 4);
          *(char *)(uVar4 + local_2c + 4) = *(char *)(uVar4 + local_2c + 4) + '\x01';
          if (cVar3 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               *(uint *)(uVar4 + 0x44 + uVar9 * 4) | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          cVar3 = *(char *)(uVar4 + local_2c + 4);
          *(char *)(uVar4 + local_2c + 4) = *(char *)(uVar4 + local_2c + 4) + '\x01';
          if (cVar3 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               *(uint *)(uVar4 + 0xc4 + uVar9 * 4) | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *local_20 = local_34;
    *(uint *)((int)local_20 + (local_34 - 4)) = local_34;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (DAT_103222f0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_103222f0[3] + DAT_103222e4 * 0x8000),0x8000,0x4000);
        DAT_103222f0[2] = DAT_103222f0[2] | 0x80000000U >> ((byte)DAT_103222e4 & 0x1f);
        *(undefined4 *)(DAT_103222f0[4] + 0xc4 + DAT_103222e4 * 4) = 0;
        *(char *)(DAT_103222f0[4] + 0x43) = *(char *)(DAT_103222f0[4] + 0x43) + -1;
        if (*(char *)(DAT_103222f0[4] + 0x43) == '\0') {
          DAT_103222f0[1] = DAT_103222f0[1] & 0xfffffffe;
        }
        if (DAT_103222f0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_103222f0[3],0,0x8000);
          HeapFree(DAT_103222bc,0,(LPVOID)DAT_103222f0[4]);
          FUN_100bdc80(DAT_103222f0,DAT_103222f0 + 5,
                       (DAT_103222f8 + DAT_103222f4 * 0x14) - (int)(DAT_103222f0 + 5));
          DAT_103222f4 = DAT_103222f4 + -1;
          if (DAT_103222f0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_103222e8 = DAT_103222f8;
        }
      }
      DAT_103222f0 = param_1;
      DAT_103222e4 = uVar9;
    }
  }
  return;
}

/* 100ca640  FUN_100ca640  (1334 bytes)
 * int * FUN_100ca640(int param_1)
 * called by: FUN_100c9830, __heap_alloc_base
 */
int * __cdecl FUN_100ca640(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  uint local_38;
  int local_34;
  uint local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  int local_18;
  
  puVar7 = DAT_103222f8 + DAT_103222f4 * 5;
  uVar9 = param_1 + 0x17U & 0xfffffff0;
  iVar5 = ((int)(param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar5;
  if (iVar5 < 0x20) {
    local_28 = 0xffffffff >> (bVar6 & 0x1f);
    local_38 = 0xffffffff;
  }
  else {
    local_28 = 0;
    local_38 = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (local_1c = DAT_103222e8;
      (local_1c < puVar7 && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
      local_1c = local_1c + 5) {
  }
  if (local_1c == puVar7) {
    for (local_1c = DAT_103222f8;
        (local_1c < DAT_103222e8 && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
        local_1c = local_1c + 5) {
    }
    if (local_1c == DAT_103222e8) {
      for (; (local_1c < puVar7 && (local_1c[2] == 0)); local_1c = local_1c + 5) {
      }
      if (local_1c == puVar7) {
        for (local_1c = DAT_103222f8; (local_1c < DAT_103222e8 && (local_1c[2] == 0));
            local_1c = local_1c + 5) {
        }
        if ((local_1c == DAT_103222e8) && (local_1c = FUN_100cab80(), local_1c == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar5 = FUN_100cac90((int)local_1c);
      *(int *)local_1c[4] = iVar5;
      if (*(int *)local_1c[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_103222e8 = local_1c;
  piVar4 = (int *)local_1c[4];
  local_34 = *piVar4;
  if ((local_34 == -1) ||
     ((local_28 & piVar4[local_34 + 0x11]) == 0 && (local_38 & piVar4[local_34 + 0x31]) == 0)) {
    local_34 = 0;
    while ((local_28 & piVar4[local_34 + 0x11]) == 0 && (local_38 & piVar4[local_34 + 0x31]) == 0) {
      local_34 = local_34 + 1;
    }
  }
  piVar2 = piVar4 + local_34 * 0x81 + 0x51;
  local_24 = 0;
  local_20 = local_28 & piVar4[local_34 + 0x11];
  if (local_20 == 0) {
    local_24 = 0x20;
    local_20 = local_38 & piVar4[local_34 + 0x31];
  }
  for (; -1 < (int)local_20; local_20 = local_20 << 1) {
    local_24 = local_24 + 1;
  }
  piVar8 = (int *)piVar2[local_24 * 2 + 1];
  iVar5 = *piVar8 - uVar9;
  local_18 = (iVar5 >> 4) + -1;
  if (0x3f < local_18) {
    local_18 = 0x3f;
  }
  if (local_18 != local_24) {
    if (piVar8[1] == piVar8[2]) {
      bVar6 = (byte)local_24;
      if (local_24 < 0x20) {
        piVar4[local_34 + 0x11] = piVar4[local_34 + 0x11] & ~(0x80000000U >> (bVar6 & 0x1f));
        *(char *)((int)piVar4 + local_24 + 4) = *(char *)((int)piVar4 + local_24 + 4) + -1;
        if (*(char *)((int)piVar4 + local_24 + 4) == '\0') {
          *local_1c = *local_1c & ~(0x80000000U >> (bVar6 & 0x1f));
        }
      }
      else {
        piVar4[local_34 + 0x31] = piVar4[local_34 + 0x31] & ~(0x80000000U >> (bVar6 - 0x20 & 0x1f));
        *(char *)((int)piVar4 + local_24 + 4) = *(char *)((int)piVar4 + local_24 + 4) + -1;
        if (*(char *)((int)piVar4 + local_24 + 4) == '\0') {
          local_1c[1] = local_1c[1] & ~(0x80000000U >> (bVar6 - 0x20 & 0x1f));
        }
      }
    }
    *(int *)(piVar8[2] + 4) = piVar8[1];
    *(int *)(piVar8[1] + 8) = piVar8[2];
    if (iVar5 != 0) {
      piVar1 = piVar2 + local_18 * 2;
      piVar8[1] = piVar1[1];
      piVar8[2] = (int)piVar1;
      piVar1[1] = (int)piVar8;
      *(int **)(piVar8[1] + 8) = piVar8;
      if (piVar8[1] == piVar8[2]) {
        bVar6 = (byte)local_18;
        if (local_18 < 0x20) {
          cVar3 = *(char *)((int)piVar4 + local_18 + 4);
          *(char *)((int)piVar4 + local_18 + 4) = *(char *)((int)piVar4 + local_18 + 4) + '\x01';
          if (cVar3 == '\0') {
            *local_1c = *local_1c | 0x80000000U >> (bVar6 & 0x1f);
          }
          piVar4[local_34 + 0x11] = piVar4[local_34 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
        }
        else {
          cVar3 = *(char *)((int)piVar4 + local_18 + 4);
          *(char *)((int)piVar4 + local_18 + 4) = *(char *)((int)piVar4 + local_18 + 4) + '\x01';
          if (cVar3 == '\0') {
            local_1c[1] = local_1c[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
          }
          piVar4[local_34 + 0x31] = piVar4[local_34 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
      }
    }
  }
  if (iVar5 != 0) {
    *piVar8 = iVar5;
    *(int *)((int)piVar8 + iVar5 + -4) = iVar5;
  }
  piVar8 = (int *)((int)piVar8 + iVar5);
  *piVar8 = uVar9 + 1;
  *(uint *)((int)piVar8 + (uVar9 - 4)) = uVar9 + 1;
  iVar5 = *piVar2;
  *piVar2 = *piVar2 + 1;
  if (((iVar5 == 0) && (local_1c == DAT_103222f0)) && (local_34 == DAT_103222e4)) {
    DAT_103222f0 = (uint *)0x0;
  }
  *piVar4 = local_34;
  return piVar8 + 1;
}

/* 100cab80  FUN_100cab80  (271 bytes)
 * undefined4 * FUN_100cab80(void)
 * called by: FUN_100ca640
 */
undefined4 * FUN_100cab80(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_103222f4 == DAT_103222d0) {
    pvVar1 = HeapReAlloc(DAT_103222bc,0,DAT_103222f8,(DAT_103222d0 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_103222d0 = DAT_103222d0 + 0x10;
    DAT_103222f8 = pvVar1;
  }
  puVar2 = (undefined4 *)((int)DAT_103222f8 + DAT_103222f4 * 0x14);
  pvVar1 = HeapAlloc(DAT_103222bc,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_103222bc,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_103222f4 = DAT_103222f4 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}

/* 100cac90  FUN_100cac90  (494 bytes)
 * int FUN_100cac90(int param_1)
 * called by: FUN_100ca640
 */
int __cdecl FUN_100cac90(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  LPVOID lpAddress;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar4 = *(int *)(param_1 + 0x10);
  local_c = *(int *)(param_1 + 8);
  local_2c = 0;
  for (; -1 < local_c; local_c = local_c << 1) {
    local_2c = local_2c + 1;
  }
  iVar2 = iVar4 + 0x144 + local_2c * 0x204;
  for (local_24 = 0; local_24 < 0x3f; local_24 = local_24 + 1) {
    iVar1 = iVar2 + local_24 * 8;
    *(int *)(iVar1 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  lpAddress = (LPVOID)(*(int *)(param_1 + 0xc) + local_2c * 0x8000);
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    local_2c = -1;
  }
  else {
    for (local_8 = lpAddress; local_8 <= (LPVOID)((int)lpAddress + 0x7000U);
        local_8 = (LPVOID)((int)local_8 + 0x1000)) {
      *(undefined4 *)((int)local_8 + 8) = 0xffffffff;
      *(undefined4 *)((int)local_8 + 0xffc) = 0xffffffff;
      *(undefined4 *)((int)local_8 + 0xc) = 0xff0;
      *(int *)((int)local_8 + 0x10) = (int)local_8 + 0x100c;
      *(int *)((int)local_8 + 0x14) = (int)local_8 + -0xff4;
      *(undefined4 *)((int)local_8 + 0xff8) = 0xff0;
    }
    *(int *)(iVar2 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)(*(int *)(iVar2 + 0x1fc) + 8) = iVar2 + 0x1f8;
    *(int *)(iVar2 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)(*(int *)(iVar2 + 0x200) + 4) = iVar2 + 0x1f8;
    *(undefined4 *)(iVar4 + 0x44 + local_2c * 4) = 0;
    *(undefined4 *)(iVar4 + 0xc4 + local_2c * 4) = 1;
    cVar3 = *(char *)(iVar4 + 0x43);
    *(char *)(iVar4 + 0x43) = *(char *)(iVar4 + 0x43) + '\x01';
    if (cVar3 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)local_2c & 0x1f));
  }
  return local_2c;
}

/* 100cae80  FUN_100cae80  (1515 bytes)
 * undefined4 FUN_100cae80(uint * param_1, int param_2, int param_3)
 * called by: FUN_100c9620, FUN_100c9830
 */
undefined4 __cdecl FUN_100cae80(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  int *piVar10;
  uint uVar11;
  int local_2c;
  uint local_28;
  uint local_24;
  
  uVar5 = param_3 + 0x17U & 0xfffffff0;
  uVar3 = param_1[4];
  uVar11 = param_2 - param_1[3] >> 0xf;
  iVar1 = uVar3 + 0x144 + uVar11 * 0x204;
  piVar6 = (int *)(param_2 + -4);
  local_2c = *piVar6 + -1;
  puVar7 = (uint *)((int)piVar6 + local_2c);
  uVar4 = *puVar7;
  if (local_2c < (int)uVar5) {
    if (((uVar4 & 1) != 0) || ((int)(local_2c + uVar4) < (int)uVar5)) {
      return 0;
    }
    local_24 = ((int)uVar4 >> 4) - 1;
    if (0x3f < local_24) {
      local_24 = 0x3f;
    }
    if (puVar7[1] == puVar7[2]) {
      bVar9 = (byte)local_24;
      if (local_24 < 0x20) {
        *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
             *(uint *)(uVar3 + 0x44 + uVar11 * 4) & ~(0x80000000U >> (bVar9 & 0x1f));
        *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
        if (*(char *)(uVar3 + local_24 + 4) == '\0') {
          *param_1 = *param_1 & ~(0x80000000U >> (bVar9 & 0x1f));
        }
      }
      else {
        *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
             *(uint *)(uVar3 + 0xc4 + uVar11 * 4) & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
        *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
        if (*(char *)(uVar3 + local_24 + 4) == '\0') {
          param_1[1] = param_1[1] & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
        }
      }
    }
    *(uint *)(puVar7[2] + 4) = puVar7[1];
    *(uint *)(puVar7[1] + 8) = puVar7[2];
    iVar8 = (local_2c + uVar4) - uVar5;
    if (0 < iVar8) {
      piVar10 = (int *)((int)piVar6 + uVar5);
      local_24 = (iVar8 >> 4) - 1;
      if (0x3f < local_24) {
        local_24 = 0x3f;
      }
      iVar1 = iVar1 + local_24 * 8;
      piVar10[1] = *(int *)(iVar1 + 4);
      piVar10[2] = iVar1;
      *(int **)(iVar1 + 4) = piVar10;
      *(int **)(piVar10[1] + 8) = piVar10;
      if (piVar10[1] == piVar10[2]) {
        bVar9 = (byte)local_24;
        if (local_24 < 0x20) {
          cVar2 = *(char *)(uVar3 + local_24 + 4);
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + '\x01';
          if (cVar2 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar9 & 0x1f);
          }
          *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
               *(uint *)(uVar3 + 0x44 + uVar11 * 4) | 0x80000000U >> (bVar9 & 0x1f);
        }
        else {
          cVar2 = *(char *)(uVar3 + local_24 + 4);
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + '\x01';
          if (cVar2 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
          }
          *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
               *(uint *)(uVar3 + 0xc4 + uVar11 * 4) | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
        }
      }
      *piVar10 = iVar8;
      *(int *)((int)piVar10 + iVar8 + -4) = iVar8;
    }
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
  }
  else if ((int)uVar5 < local_2c) {
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
    piVar6 = (int *)((int)piVar6 + uVar5);
    local_2c = local_2c - uVar5;
    local_28 = (local_2c >> 4) - 1;
    if (0x3f < local_28) {
      local_28 = 0x3f;
    }
    if ((uVar4 & 1) == 0) {
      local_24 = ((int)uVar4 >> 4) - 1;
      if (0x3f < local_24) {
        local_24 = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar9 = (byte)local_24;
        if (local_24 < 0x20) {
          *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
               *(uint *)(uVar3 + 0x44 + uVar11 * 4) & ~(0x80000000U >> (bVar9 & 0x1f));
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
          if (*(char *)(uVar3 + local_24 + 4) == '\0') {
            *param_1 = *param_1 & ~(0x80000000U >> (bVar9 & 0x1f));
          }
        }
        else {
          *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
               *(uint *)(uVar3 + 0xc4 + uVar11 * 4) & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
          if (*(char *)(uVar3 + local_24 + 4) == '\0') {
            param_1[1] = param_1[1] & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      local_2c = local_2c + uVar4;
      local_28 = (local_2c >> 4) - 1;
      if (0x3f < local_28) {
        local_28 = 0x3f;
      }
    }
    iVar1 = iVar1 + local_28 * 8;
    piVar6[1] = *(int *)(iVar1 + 4);
    piVar6[2] = iVar1;
    *(int **)(iVar1 + 4) = piVar6;
    *(int **)(piVar6[1] + 8) = piVar6;
    if (piVar6[1] == piVar6[2]) {
      bVar9 = (byte)local_28;
      if (local_28 < 0x20) {
        cVar2 = *(char *)(uVar3 + local_28 + 4);
        *(char *)(uVar3 + local_28 + 4) = *(char *)(uVar3 + local_28 + 4) + '\x01';
        if (cVar2 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar9 & 0x1f);
        }
        *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
             *(uint *)(uVar3 + 0x44 + uVar11 * 4) | 0x80000000U >> (bVar9 & 0x1f);
      }
      else {
        cVar2 = *(char *)(uVar3 + local_28 + 4);
        *(char *)(uVar3 + local_28 + 4) = *(char *)(uVar3 + local_28 + 4) + '\x01';
        if (cVar2 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
        }
        *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
             *(uint *)(uVar3 + 0xc4 + uVar11 * 4) | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
      }
    }
    *piVar6 = local_2c;
    *(int *)((int)piVar6 + local_2c + -4) = local_2c;
  }
  return 1;
}

/* 100cb470  FUN_100cb470  (304 bytes)
 * undefined FUN_100cb470(void)
 */
void FUN_100cb470(void)

{
  if (DAT_103222f0 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_103222f0[3] + DAT_103222e4 * 0x8000),0x8000,0x4000);
    DAT_103222f0[2] = DAT_103222f0[2] | 0x80000000U >> ((byte)DAT_103222e4 & 0x1f);
    *(undefined4 *)(DAT_103222f0[4] + 0xc4 + DAT_103222e4 * 4) = 0;
    *(char *)(DAT_103222f0[4] + 0x43) = *(char *)(DAT_103222f0[4] + 0x43) + -1;
    if (*(char *)(DAT_103222f0[4] + 0x43) == '\0') {
      DAT_103222f0[1] = DAT_103222f0[1] & 0xfffffffe;
    }
    if ((DAT_103222f0[2] == -1) && (1 < DAT_103222f4)) {
      HeapFree(DAT_103222bc,0,(LPVOID)DAT_103222f0[4]);
      FUN_100bdc80(DAT_103222f0,DAT_103222f0 + 5,
                   (DAT_103222f8 + DAT_103222f4 * 0x14) - (int)(DAT_103222f0 + 5));
      DAT_103222f4 = DAT_103222f4 + -1;
    }
    DAT_103222f0 = (undefined4 *)0x0;
  }
  return;
}

/* 100cb5a0  FUN_100cb5a0  (1565 bytes)
 * undefined4 FUN_100cb5a0(void)
 * called by: __heapchk
 */
undefined4 FUN_100cb5a0(void)

{
  LPVOID lp;
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  uint *puVar4;
  byte bVar5;
  uint *puVar6;
  int local_16c;
  uint local_15c;
  uint local_154;
  int local_150;
  uint local_14c;
  uint local_148;
  int local_144;
  uint *local_140;
  uint *local_138;
  uint *local_134;
  uint local_130;
  uint *local_12c;
  int local_124;
  uint local_120;
  int aiStack_11c [64];
  uint *local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  BVar2 = IsBadWritePtr(DAT_103222f8,DAT_103222f4 * 0x14);
  if (BVar2 == 0) {
    local_140 = DAT_103222f8;
    for (local_124 = 0; local_124 < DAT_103222f4; local_124 = local_124 + 1) {
      lp = (LPVOID)local_140[4];
      BVar2 = IsBadWritePtr(lp,0x41c4);
      if (BVar2 != 0) {
        return 0xfffffffe;
      }
      local_12c = (uint *)local_140[3];
      local_1c = (uint *)((int)lp + 0x144);
      local_8 = local_140[2];
      local_148 = 0;
      local_15c = 0;
      for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
        local_120 = 0;
        local_154 = 0;
        local_130 = 0;
        for (local_150 = 0; local_150 < 0x40; local_150 = local_150 + 1) {
          aiStack_11c[local_150] = 0;
        }
        if (-1 < (int)local_8) {
          BVar2 = IsBadWritePtr(local_12c,0x8000);
          if (BVar2 != 0) {
            return 0xfffffffc;
          }
          local_c = local_12c;
          for (local_144 = 0; local_144 < 8; local_144 = local_144 + 1) {
            local_134 = local_c + 3;
            puVar6 = local_c + 0x3ff;
            if ((local_c[2] != 0xffffffff) || (*puVar6 != 0xffffffff)) {
              return 0xfffffffb;
            }
            do {
              uVar1 = *local_134;
              if ((uVar1 & 1) == 0) {
                local_150 = ((int)uVar1 >> 4) + -1;
                if (0x3f < local_150) {
                  local_150 = 0x3f;
                }
                aiStack_11c[local_150] = aiStack_11c[local_150] + 1;
                local_14c = uVar1;
              }
              else {
                if (0x400 < (int)(uVar1 - 1)) {
                  return 0xfffffffa;
                }
                local_130 = local_130 + 1;
                local_14c = uVar1 - 1;
              }
              if ((((int)local_14c < 0x10) || ((local_14c & 0xf) != 0)) || (0xff0 < (int)local_14c))
              {
                return 0xfffffff9;
              }
              if (*(uint *)((int)local_134 + (local_14c - 4)) != uVar1) {
                return 0xfffffff8;
              }
              local_134 = (uint *)((int)local_134 + local_14c);
            } while (local_134 < puVar6);
            if (local_134 != puVar6) {
              return 0xfffffff8;
            }
            local_c = local_c + 0x400;
          }
          if (*local_1c != local_130) {
            return 0xfffffff7;
          }
          local_138 = local_1c;
          for (local_18 = 0; local_18 < 0x40; local_18 = local_18 + 1) {
            local_134 = local_138;
            for (local_16c = 0;
                (puVar6 = (uint *)local_134[1], puVar6 != local_138 &&
                (local_16c != aiStack_11c[local_18])); local_16c = local_16c + 1) {
              if ((puVar6 < local_12c) || (local_12c + 0x2000 <= puVar6)) {
                return 0xfffffff6;
              }
              puVar4 = (uint *)(((uint)puVar6 & 0xfffff000) + 0xffc);
              for (local_14 = (uint *)(((uint)puVar6 & 0xfffff000) + 0xc);
                  (local_14 != puVar4 && (local_14 != puVar6));
                  local_14 = (uint *)((int)local_14 + (*local_14 & 0xfffffffe))) {
              }
              if (local_14 == puVar4) {
                return 0xfffffff5;
              }
              local_150 = ((int)*puVar6 >> 4) + -1;
              if (0x3f < local_150) {
                local_150 = 0x3f;
              }
              if (local_150 != local_18) {
                return 0xfffffff4;
              }
              if ((uint *)puVar6[2] != local_134) {
                return 0xfffffff3;
              }
              local_134 = puVar6;
            }
            if (local_16c != 0) {
              bVar5 = (byte)local_18;
              if (local_18 < 0x20) {
                local_120 = local_120 | 0x80000000U >> (bVar5 & 0x1f);
                local_148 = local_148 | 0x80000000U >> (bVar5 & 0x1f);
              }
              else {
                local_154 = local_154 | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
                local_15c = local_15c | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
              }
            }
            if (((uint *)local_134[1] != local_138) || (local_16c != aiStack_11c[local_18])) {
              return 0xfffffff2;
            }
            if ((uint *)local_138[2] != local_134) {
              return 0xfffffff1;
            }
            local_138 = local_138 + 2;
          }
        }
        if ((local_120 != *(uint *)((int)lp + local_10 * 4 + 0x44)) ||
           (local_154 != *(uint *)((int)lp + local_10 * 4 + 0xc4))) {
          return 0xfffffff0;
        }
        local_12c = local_12c + 0x2000;
        local_1c = local_1c + 0x81;
        local_8 = local_8 << 1;
      }
      if ((local_148 != *local_140) || (local_15c != local_140[1])) {
        return 0xffffffef;
      }
      local_140 = local_140 + 5;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* 100cbbc0  FUN_100cbbc0  (10 bytes)
 * undefined4 FUN_100cbbc0(void)
 */
undefined4 FUN_100cbbc0(void)

{
  return DAT_1028dd4c;
}

/* 100cbbd0  FUN_100cbbd0  (43 bytes)
 * bool FUN_100cbbd0(int param_1)
 */
bool __cdecl FUN_100cbbd0(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  if (uVar1 < 0x781) {
    DAT_1028dd4c = uVar1;
  }
  return uVar1 < 0x781;
}

/* 100cbc00  FUN_100cbc00  (478 bytes)
 * undefined * * FUN_100cbc00(void)
 * called by: FUN_100c9e20, FUN_100cc0c0, FUN_100ccd70
 */
undefined ** FUN_100cbc00(void)

{
  LPVOID pvVar1;
  undefined **local_10;
  int local_c;
  undefined4 *local_8;
  
  if (DAT_1028bd38 == -1) {
    local_10 = &PTR_LOOP_1028bd28;
  }
  else {
    local_10 = HeapAlloc(DAT_103222bc,0,0x2020);
    if (local_10 == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  local_8 = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (local_8 != (undefined4 *)0x0) {
    pvVar1 = VirtualAlloc(local_8,0x10000,0x1000,4);
    if (pvVar1 != (LPVOID)0x0) {
      if (local_10 == &PTR_LOOP_1028bd28) {
        if (PTR_LOOP_1028bd28 == (undefined *)0x0) {
          PTR_LOOP_1028bd28 = (undefined *)&PTR_LOOP_1028bd28;
        }
        if (PTR_LOOP_1028bd2c == (undefined *)0x0) {
          PTR_LOOP_1028bd2c = (undefined *)&PTR_LOOP_1028bd28;
        }
      }
      else {
        *local_10 = (undefined *)&PTR_LOOP_1028bd28;
        local_10[1] = PTR_LOOP_1028bd2c;
        PTR_LOOP_1028bd2c = (undefined *)local_10;
        *(undefined ***)local_10[1] = local_10;
      }
      local_10[4] = (undefined *)local_8;
      local_10[5] = (undefined *)(local_8 + 0x100000);
      local_10[2] = (undefined *)(local_10 + 6);
      local_10[3] = (undefined *)(local_10 + 0x26);
      for (local_c = 0; local_c < 0x400; local_c = local_c + 1) {
        if (local_c < 0x10) {
          local_10[local_c * 2 + 6] = (undefined *)0xf0;
        }
        else {
          local_10[local_c * 2 + 6] = (undefined *)0xffffffff;
        }
        local_10[local_c * 2 + 7] = (undefined *)0xf1;
      }
      _memset(local_8,0,0x10000);
      for (; local_8 < local_10[4] + 0x10000; local_8 = local_8 + 0x400) {
        *local_8 = local_8 + 2;
        local_8[1] = 0xf0;
        *(undefined1 *)(local_8 + 0x3e) = 0xff;
      }
      return local_10;
    }
    VirtualFree(local_8,0,0x8000);
  }
  if (local_10 != &PTR_LOOP_1028bd28) {
    HeapFree(DAT_103222bc,0,local_10);
  }
  return (undefined **)0x0;
}

/* 100cbde0  FUN_100cbde0  (115 bytes)
 * undefined FUN_100cbde0(undefined * * param_1)
 * called by: FUN_100cbe60
 */
void __cdecl FUN_100cbde0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1028dd48 == param_1) {
    PTR_LOOP_1028dd48 = param_1[1];
  }
  if (param_1 == &PTR_LOOP_1028bd28) {
    DAT_1028bd38 = 0xffffffff;
  }
  else {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_103222bc,0,param_1);
  }
  return;
}

/* 100cbe60  FUN_100cbe60  (343 bytes)
 * undefined FUN_100cbe60(int param_1)
 * called by: FUN_100cc050
 */
void __cdecl FUN_100cbe60(int param_1)

{
  undefined **ppuVar1;
  BOOL BVar2;
  undefined **local_18;
  int local_14;
  int local_10;
  undefined **local_8;
  
  local_18 = (undefined **)PTR_LOOP_1028bd2c;
  do {
    ppuVar1 = local_18;
    if (local_18[4] != (undefined *)0xffffffff) {
      local_14 = 0;
      local_8 = local_18 + 0x804;
      for (local_10 = 0x3ff; -1 < local_10; local_10 = local_10 + -1) {
        if ((*local_8 == (undefined *)0xf0) &&
           (BVar2 = VirtualFree(local_18[4] + local_10 * 0x1000,0x1000,0x4000), BVar2 != 0)) {
          *local_8 = (undefined *)0xffffffff;
          DAT_10321d44 = DAT_10321d44 + -1;
          if ((local_18[3] == (undefined *)0x0) || (local_8 < local_18[3])) {
            local_18[3] = (undefined *)local_8;
          }
          local_14 = local_14 + 1;
          param_1 = param_1 + -1;
          if (param_1 == 0) break;
        }
        local_8 = local_8 + -2;
      }
      ppuVar1 = (undefined **)local_18[1];
      if ((local_14 != 0) && (local_18[6] == (undefined *)0xffffffff)) {
        local_10 = 1;
        for (local_8 = local_18 + 8; (local_10 < 0x400 && (*local_8 == (undefined *)0xffffffff));
            local_8 = local_8 + 2) {
          local_10 = local_10 + 1;
        }
        if (local_10 == 0x400) {
          FUN_100cbde0(local_18);
        }
      }
    }
    local_18 = ppuVar1;
    if ((local_18 == (undefined **)PTR_LOOP_1028bd2c) || (param_1 < 1)) {
      return;
    }
  } while( true );
}

/* 100cbfc0  FUN_100cbfc0  (144 bytes)
 * int FUN_100cbfc0(undefined * param_1, undefined4 * param_2, uint * param_3)
 * called by: FUN_100bfe20, FUN_100c9830
 */
int __cdecl FUN_100cbfc0(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  undefined **local_c;
  
  local_c = &PTR_LOOP_1028bd28;
  while ((param_1 <= local_c[4] || (local_c[5] <= param_1))) {
    local_c = (undefined **)*local_c;
    if (local_c == &PTR_LOOP_1028bd28) {
      return 0;
    }
  }
  if ((((uint)param_1 & 0xf) == 0) && (0xff < ((uint)param_1 & 0xfff))) {
    *param_2 = local_c;
    uVar1 = (uint)param_1 & 0xfffff000;
    *param_3 = uVar1;
    return uVar1 + 8 + ((int)((int)param_1 - (uVar1 + 0x100)) >> 4);
  }
  return 0;
}

/* 100cc050  FUN_100cc050  (108 bytes)
 * undefined FUN_100cc050(int param_1, int param_2, byte.conflict * param_3)
 * called by: FUN_100c9830
 */
void __cdecl FUN_100cc050(int param_1,int param_2,byte_conflict *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = '\0';
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10321d44 = DAT_10321d44 + 1, DAT_10321d44 == 0x20)) {
    FUN_100cbe60(0x10);
  }
  return;
}

/* 100cc0c0  FUN_100cc0c0  (952 bytes)
 * int * FUN_100cc0c0(uint param_1)
 * called by: FUN_100c9830
 */
int * __cdecl FUN_100cc0c0(uint param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined **local_24;
  int *local_20;
  int local_1c;
  int local_18;
  undefined **local_14;
  int *local_c;
  uint *local_8;
  
  local_24 = (undefined **)PTR_LOOP_1028dd48;
  do {
    if (local_24[4] != (undefined *)0xffffffff) {
      local_8 = (uint *)local_24[2];
      local_c = (int *)((int)local_24[4] + ((int)local_8 - (int)(local_24 + 6) >> 3) * 0x1000);
      for (; local_8 < local_24 + 0x806; local_8 = local_8 + 2) {
        if (((int)param_1 <= (int)*local_8) && (param_1 < local_8[1])) {
          piVar2 = (int *)FUN_100cc480(local_c,*local_8,param_1);
          if (piVar2 != (int *)0x0) {
            PTR_LOOP_1028dd48 = (undefined *)local_24;
            *local_8 = *local_8 - param_1;
            local_24[2] = (undefined *)local_8;
            return piVar2;
          }
          local_8[1] = param_1;
        }
        local_c = local_c + 0x400;
      }
      puVar1 = (uint *)local_24[2];
      local_c = (int *)local_24[4];
      for (local_8 = (uint *)(local_24 + 6); local_8 < puVar1; local_8 = local_8 + 2) {
        if (((int)param_1 <= (int)*local_8) && (param_1 < local_8[1])) {
          piVar2 = (int *)FUN_100cc480(local_c,*local_8,param_1);
          if (piVar2 != (int *)0x0) {
            PTR_LOOP_1028dd48 = (undefined *)local_24;
            *local_8 = *local_8 - param_1;
            local_24[2] = (undefined *)local_8;
            return piVar2;
          }
          local_8[1] = param_1;
        }
        local_c = local_c + 0x400;
      }
    }
    local_24 = (undefined **)*local_24;
  } while (local_24 != (undefined **)PTR_LOOP_1028dd48);
  local_24 = &PTR_LOOP_1028bd28;
  while ((local_24[4] == (undefined *)0xffffffff || (local_24[3] == (undefined *)0x0))) {
    local_24 = (undefined **)*local_24;
    if (local_24 == &PTR_LOOP_1028bd28) {
      ppuVar4 = FUN_100cbc00();
      if (ppuVar4 == (undefined **)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)ppuVar4[4];
        *(undefined1 *)(piVar2 + 2) = (undefined1)param_1;
        PTR_LOOP_1028dd48 = (undefined *)ppuVar4;
        *piVar2 = (int)piVar2 + param_1 + 8;
        piVar2[1] = 0xf0 - param_1;
        ppuVar4[6] = ppuVar4[6] + -(param_1 & 0xff);
        piVar2 = piVar2 + 0x40;
      }
      return piVar2;
    }
  }
  ppuVar4 = (undefined **)local_24[3];
  piVar2 = (int *)(local_24[4] + ((int)ppuVar4 - (int)(local_24 + 6) >> 3) * 0x1000);
  local_14 = ppuVar4;
  for (local_18 = 0; (*local_14 == (undefined *)0xffffffff && (local_18 < 0x10));
      local_18 = local_18 + 1) {
    local_14 = local_14 + 2;
  }
  piVar3 = VirtualAlloc(piVar2,local_18 << 0xc,0x1000,4);
  if (piVar3 == piVar2) {
    _memset(piVar2,local_18 << 0xc,0);
    local_20 = piVar2;
    local_14 = ppuVar4;
    for (local_1c = 0; local_1c < local_18; local_1c = local_1c + 1) {
      *local_20 = (int)(local_20 + 2);
      local_20[1] = 0xf0;
      *(undefined1 *)(local_20 + 0x3e) = 0xff;
      *local_14 = (undefined *)0xf0;
      local_14[1] = (undefined *)0xf1;
      local_20 = local_20 + 0x400;
      local_14 = local_14 + 2;
    }
    PTR_LOOP_1028dd48 = (undefined *)local_24;
    for (; (local_14 < local_24 + 0x806 && (*local_14 != (undefined *)0xffffffff));
        local_14 = local_14 + 2) {
    }
    local_24[3] = (undefined *)(-(uint)(local_14 < local_24 + 0x806) & (uint)local_14);
    *(undefined1 *)(piVar2 + 2) = (undefined1)param_1;
    local_24[2] = (undefined *)ppuVar4;
    *ppuVar4 = *ppuVar4 + -param_1;
    *piVar2 = (int)piVar2 + param_1 + 8;
    piVar2[1] = piVar2[1] - param_1;
    return piVar2 + 0x40;
  }
  return (int *)0x0;
}

/* 100cc480  FUN_100cc480  (681 bytes)
 * int FUN_100cc480(int * param_1, uint param_2, uint param_3)
 * called by: FUN_100cc0c0
 */
int __cdecl FUN_100cc480(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint local_14;
  byte *local_10;
  byte *local_c;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)(param_1 + 0x3e);
  if ((uint)param_1[1] < param_3) {
    local_c = pbVar1;
    if (pbVar1[param_1[1]] != 0) {
      local_c = pbVar1 + param_1[1];
    }
    while (local_c + param_3 < pbVar2) {
      if (*local_c == 0) {
        local_14 = 1;
        local_10 = local_c;
        while (local_10 = local_10 + 1, *local_10 == 0) {
          local_14 = local_14 + 1;
        }
        if (param_3 <= local_14) {
          if (local_c + param_3 < pbVar2) {
            *param_1 = (int)(local_c + param_3);
            param_1[1] = local_14 - param_3;
          }
          else {
            *param_1 = (int)(param_1 + 2);
            param_1[1] = 0;
          }
          *local_c = (byte)param_3;
          return (int)param_1 * -0xf + (int)local_c * 0x10 + 0x80;
        }
        if (local_c == pbVar1) {
          param_1[1] = local_14;
        }
        else {
          param_2 = param_2 - local_14;
          if (param_2 < param_3) {
            return 0;
          }
        }
        local_c = local_10;
      }
      else {
        local_c = local_c + *local_c;
      }
    }
    local_c = (byte *)(param_1 + 2);
    while ((local_c < pbVar1 && (local_c + param_3 < pbVar2))) {
      if (*local_c == 0) {
        local_14 = 1;
        local_10 = local_c;
        while (local_10 = local_10 + 1, *local_10 == 0) {
          local_14 = local_14 + 1;
        }
        if (param_3 <= local_14) {
          if (local_c + param_3 < pbVar2) {
            *param_1 = (int)(local_c + param_3);
            param_1[1] = local_14 - param_3;
          }
          else {
            *param_1 = (int)(param_1 + 2);
            param_1[1] = 0;
          }
          *local_c = (byte)param_3;
          return (int)param_1 * -0xf + (int)local_c * 0x10 + 0x80;
        }
        param_2 = param_2 - local_14;
        if (param_2 < param_3) {
          return 0;
        }
        local_c = local_10;
      }
      else {
        local_c = local_c + *local_c;
      }
    }
    iVar3 = 0;
  }
  else {
    *pbVar1 = (byte)param_3;
    if (pbVar1 + param_3 < pbVar2) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      *param_1 = (int)(param_1 + 2);
      param_1[1] = 0;
    }
    iVar3 = (int)param_1 * -0xf + (int)pbVar1 * 0x10 + 0x80;
  }
  return iVar3;
}

/* 100cc730  FUN_100cc730  (356 bytes)
 * undefined4 FUN_100cc730(int param_1, uint * param_2, byte.conflict * param_3, uint param_4)
 * called by: FUN_100c9830
 */
undefined4 __cdecl FUN_100cc730(int param_1,uint *param_2,byte_conflict *param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint *local_1c;
  undefined4 local_18;
  uint *local_14;
  uint local_c;
  
  local_18 = 0;
  piVar1 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  uVar2 = (uint)*param_3;
  if (param_4 < uVar2) {
    *param_3 = (byte_conflict)param_4;
    *piVar1 = *piVar1 + (uVar2 - param_4);
    piVar1[1] = 0xf1;
    local_18 = 1;
  }
  else if ((uVar2 < param_4) && (param_3 + param_4 <= param_2 + 0x3e)) {
    local_1c = (uint *)(param_3 + param_4);
    for (local_14 = (uint *)(param_3 + uVar2); (local_14 < local_1c && ((char)*local_14 == '\0'));
        local_14 = (uint *)((int)local_14 + 1)) {
    }
    if (local_14 == local_1c) {
      *param_3 = (byte_conflict)param_4;
      if ((param_3 <= (byte_conflict *)*param_2) && ((uint *)*param_2 < local_1c)) {
        if (local_1c < param_2 + 0x3e) {
          *param_2 = (uint)local_1c;
          local_c = 0;
          for (; (char)*local_1c == '\0'; local_1c = (uint *)((int)local_1c + 1)) {
            local_c = local_c + 1;
          }
          param_2[1] = local_c;
        }
        else {
          *param_2 = (uint)(param_2 + 2);
          param_2[1] = 0;
        }
      }
      *piVar1 = *piVar1 + (uVar2 - param_4);
      local_18 = 1;
    }
  }
  return local_18;
}

/* 100cc8a0  FUN_100cc8a0  (567 bytes)
 * undefined4 FUN_100cc8a0(void)
 */
undefined4 FUN_100cc8a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_2c;
  undefined *local_28;
  int local_24;
  undefined **local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_20 = &PTR_LOOP_1028bd28;
  do {
    if ((undefined **)PTR_LOOP_1028dd48 == local_20) {
      local_c = local_c + 1;
    }
    if (local_20[4] != (undefined *)0xffffffff) {
      local_10 = 0;
      local_2c = 0;
      local_8 = (int *)local_20[4];
      for (; local_10 < 0x400; local_10 = local_10 + 1) {
        if (local_20[local_10 * 2 + 6] == (undefined *)0xffffffff) {
          if ((local_2c == 0) && ((undefined **)local_20[3] != local_20 + local_10 * 2 + 6)) {
            return 0xffffffff;
          }
          local_2c = local_2c + 1;
        }
        else {
          if (local_8 + 0x3e <= (int *)*local_8) {
            return 0xfffffffe;
          }
          if ((char)local_8[0x3e] != -1) {
            return 0xfffffffd;
          }
          local_14 = 0;
          local_1c = 0;
          local_28 = (undefined *)0x0;
          local_24 = 0;
          while (local_14 < 0xf0) {
            if ((int)local_8 + local_14 + 8 == *local_8) {
              local_1c = local_1c + 1;
            }
            if (*(char *)((int)local_8 + local_14 + 8) == '\0') {
              local_28 = local_28 + 1;
              local_24 = local_24 + 1;
              local_14 = local_14 + 1;
            }
            else {
              if ((int)local_20[local_10 * 2 + 7] <= local_24) {
                return 0xfffffffc;
              }
              if (local_1c == 1) {
                if (local_24 < local_8[1]) {
                  return 0xfffffffb;
                }
                local_1c = 2;
              }
              local_24 = 0;
              iVar1 = local_14;
              while (local_18 = iVar1 + 1,
                    local_18 < (int)(local_14 + (uint)*(byte *)((int)local_8 + local_14 + 8))) {
                iVar2 = iVar1 + 9;
                iVar1 = local_18;
                if (*(char *)((int)local_8 + iVar2) != '\0') {
                  return 0xfffffffa;
                }
              }
              local_14 = local_18;
            }
          }
          if (local_28 != local_20[local_10 * 2 + 6]) {
            return 0xfffffff9;
          }
          if (local_1c == 0) {
            return 0xfffffff8;
          }
        }
        local_8 = local_8 + 0x400;
      }
    }
    local_20 = (undefined **)*local_20;
    if (local_20 == &PTR_LOOP_1028bd28) {
      if (local_c == 0) {
        uVar3 = 0xfffffff7;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
  } while( true );
}

/* 100ccae0  FUN_100ccae0  (92 bytes)
 * undefined FUN_100ccae0(undefined4 * param_1)
 * called by: FUN_100c9e20, FUN_100ccb40
 */
void __cdecl FUN_100ccae0(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (pHVar2[0xf].unused != 0)) {
    iVar1 = pHVar2[0xf].unused;
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}

/* 100ccb40  FUN_100ccb40  (548 bytes)
 * undefined4 FUN_100ccb40(void)
 * called by: FUN_100ccd70
 */
undefined4 FUN_100ccb40(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  DWORD DVar3;
  uint *puVar4;
  int iVar5;
  byte_conflict *pbVar6;
  char *pcVar7;
  uint *local_123c;
  uint local_1238;
  int local_1234;
  CHAR local_1230 [260];
  uint local_112c [1060];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_14 [4];
  
  FUN_100bdb10();
  local_9c = 0x94;
  BVar1 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar1 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_14[0] = -0x5b;
    aCStackY_14[1] = -0x35;
    aCStackY_14[2] = '\f';
    aCStackY_14[3] = '\x10';
    DVar3 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",(LPSTR)local_112c,0x1090);
    if (DVar3 != 0) {
      for (puVar4 = local_112c; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + 1)) {
        if (('`' < (char)*puVar4) && ((char)*puVar4 < '{')) {
          *(char *)puVar4 = (char)*puVar4 + -0x20;
        }
      }
      aCStackY_14[0] = '\x03';
      aCStackY_14[1] = -0x34;
      aCStackY_14[2] = '\f';
      aCStackY_14[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",(char *)local_112c,0x16);
      if (iVar5 == 0) {
        local_123c = local_112c;
      }
      else {
        aCStackY_14[0] = ',';
        aCStackY_14[1] = -0x34;
        aCStackY_14[2] = '\f';
        aCStackY_14[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1230,0x104);
        for (pcVar7 = local_1230; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
          if (('`' < *pcVar7) && (*pcVar7 < '{')) {
            *pcVar7 = *pcVar7 + -0x20;
          }
        }
        local_123c = FUN_100c1920(local_112c,local_1230);
      }
      if ((local_123c != (uint *)0x0) &&
         (puVar4 = FUN_100c1d70(local_123c,','), puVar4 != (uint *)0x0)) {
        pbVar6 = (byte_conflict *)((int)puVar4 + 1);
        while (*pbVar6 != '\0') {
          if (*pbVar6 == ';') {
            *pbVar6 = '\0';
          }
          else {
            pbVar6 = pbVar6 + 1;
          }
        }
        aCStackY_14[0] = '\b';
        aCStackY_14[1] = -0x33;
        aCStackY_14[2] = '\f';
        aCStackY_14[3] = '\x10';
        local_1234 = FUN_100d4f80((byte_conflict *)((int)puVar4 + 1),(undefined4 *)0x0,10);
        if (local_1234 == 2) {
          return 2;
        }
        if (local_1234 == 3) {
          return 3;
        }
        if (local_1234 == 1) {
          return 1;
        }
      }
    }
    FUN_100ccae0(&local_1238);
    if ((local_1238 & 0xff) < 6) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* 100ccd70  FUN_100ccd70  (141 bytes)
 * undefined4 FUN_100ccd70(int param_1)
 * called by: FUN_100c1e30
 */
undefined4 __cdecl FUN_100ccd70(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  undefined **ppuVar3;
  
  DAT_103222bc = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_103222bc == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    DAT_103222cc = FUN_100ccb40();
    if (DAT_103222cc == 3) {
      bVar1 = ___sbh_heap_init(0x3f8);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        HeapDestroy(DAT_103222bc);
        return 0;
      }
    }
    else if ((DAT_103222cc == 2) && (ppuVar3 = FUN_100cbc00(), ppuVar3 == (undefined **)0x0)) {
      HeapDestroy(DAT_103222bc);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* 100cce00  FUN_100cce00  (232 bytes)
 * undefined FUN_100cce00(void)
 * called by: FUN_100c1e30
 */
void FUN_100cce00(void)

{
  undefined **local_10;
  LPVOID local_c;
  int local_8;
  
  if (DAT_103222cc == 3) {
    local_c = DAT_103222f8;
    for (local_8 = 0; local_8 < DAT_103222f4; local_8 = local_8 + 1) {
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
      HeapFree(DAT_103222bc,0,*(LPVOID *)((int)local_c + 0x10));
      local_c = (LPVOID)((int)local_c + 0x14);
    }
    HeapFree(DAT_103222bc,0,DAT_103222f8);
  }
  else if (DAT_103222cc == 2) {
    local_10 = &PTR_LOOP_1028bd28;
    do {
      if (local_10[4] != (undefined *)0x0) {
        VirtualFree(local_10[4],0,0x8000);
      }
      local_10 = (undefined **)*local_10;
    } while (local_10 != &PTR_LOOP_1028bd28);
  }
  HeapDestroy(DAT_103222bc);
  return;
}

/* 100cd140  FUN_100cd140  (612 bytes)
 * undefined4 FUN_100cd140(int param_1, int param_2, int param_3, uint param_4, undefined4 * param_5)
 * called by: FUN_100c1289
 */
undefined4 __cdecl
FUN_100cd140(int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_10;
  
  local_10 = 0;
  if (0.0 <= (double)CONCAT44(param_2,param_1)) {
    local_1c = (double)CONCAT44(param_2,param_1);
  }
  else {
    local_1c = -(double)CONCAT44(param_2,param_1);
  }
  if ((param_4 == 0x7ff00000) && (param_3 == 0)) {
    if (local_1c <= 1.0) {
      if (1.0 <= local_1c) {
        *param_5 = DAT_1028e048;
        param_5[1] = DAT_1028e04c;
        local_10 = 1;
      }
      else {
        *param_5 = 0;
        param_5[1] = 0;
      }
    }
    else {
      *param_5 = DAT_1028e040;
      param_5[1] = DAT_1028e044;
    }
  }
  else if ((param_4 == 0xfff00000) && (param_3 == 0)) {
    if (local_1c <= 1.0) {
      if (1.0 <= local_1c) {
        *param_5 = DAT_1028e048;
        param_5[1] = DAT_1028e04c;
        local_10 = 1;
      }
      else {
        *param_5 = DAT_1028e040;
        param_5[1] = DAT_1028e044;
      }
    }
    else {
      *param_5 = 0;
      param_5[1] = 0;
    }
  }
  else if ((param_2 == 0x7ff00000) && (param_1 == 0)) {
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        *param_5 = 0;
        param_5[1] = 0x3ff00000;
      }
      else {
        *param_5 = 0;
        param_5[1] = 0;
      }
    }
    else {
      *param_5 = DAT_1028e040;
      param_5[1] = DAT_1028e044;
    }
  }
  else if ((param_2 == -0x100000) && (param_1 == 0)) {
    iVar1 = FUN_100cd3b0(param_3,param_4);
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        *param_5 = 0;
        param_5[1] = 0x3ff00000;
      }
      else {
        if (iVar1 == 1) {
          local_2c = DAT_1028e060;
          local_28 = DAT_1028e064;
        }
        else {
          local_2c = 0;
          local_28 = 0;
        }
        *param_5 = local_2c;
        param_5[1] = local_28;
      }
    }
    else {
      if (iVar1 == 1) {
        local_24 = -(double)CONCAT44(DAT_1028e044,DAT_1028e040);
      }
      else {
        local_24 = (double)CONCAT44(DAT_1028e044,DAT_1028e040);
      }
      *param_5 = (undefined4)local_24;
      param_5[1] = local_24._4_4_;
    }
  }
  return local_10;
}

/* 100cd3b0  FUN_100cd3b0  (128 bytes)
 * undefined4 FUN_100cd3b0(int param_1, uint param_2)
 * called by: FUN_100cd140
 */
undefined4 __cdecl FUN_100cd3b0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  uVar1 = FUN_100d5890(param_1,param_2);
  if ((uVar1 & 0x90) == 0) {
    fVar3 = FUN_100d5300((double)CONCAT44(param_2,param_1));
    if ((double)fVar3 == (double)CONCAT44(param_2,param_1)) {
      fVar3 = FUN_100d5300((double)CONCAT44(param_2,param_1) / 2.0);
      if ((float10)(double)CONCAT44(param_2,param_1) / (float10)2.0 == fVar3) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 100cd44c  FUN_100cd44c  (32 bytes)
 * undefined FUN_100cd44c()
 */
float10 __fastcall FUN_100cd44c(undefined4 param_1)

{
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  float10 fVar1;
  
  *(undefined1 *)(unaff_EBP + -0x90) = 0xfe;
  fVar1 = (float10)fpatan(ABS(in_ST1),ABS(in_ST0));
  if ((char)param_1 != '\0') {
    fVar1 = (float10)3.141592653589793 - fVar1;
  }
  if ((char)((uint)param_1 >> 8) != '\0') {
    fVar1 = -fVar1;
  }
  return fVar1;
}

/* 100cd49c  FUN_100cd49c  (9 bytes)
 * undefined1[10] FUN_100cd49c(void)
 * called by: FUN_100cd4c2
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [10] FUN_100cd49c(void)

{
  return _DAT_1028b76a;
}

/* 100cd4a5  FUN_100cd4a5  (22 bytes)
 * undefined FUN_100cd4a5()
 */
float10 __fastcall FUN_100cd4a5(undefined4 param_1)

{
  float10 fVar1;
  
  if ((char)param_1 != '\0') {
    fVar1 = (float10)3.141592653589793;
    if ((char)((uint)param_1 >> 8) != '\0') {
      fVar1 = -fVar1;
    }
    return fVar1;
  }
  return (float10)0;
}

/* 100cd4c2  FUN_100cd4c2  (16 bytes)
 * undefined FUN_100cd4c2()
 */
void FUN_100cd4c2(void)

{
  FUN_100cd49c();
  FUN_100c4653();
  return;
}

/* 100cd4e0  FUN_100cd4e0  (1007 bytes)
 * uint * FUN_100cd4e0(int param_1, uint * param_2)
 */
uint * __cdecl FUN_100cd4e0(int param_1,uint *param_2)

{
  byte_conflict *pbVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  uint *local_b4;
  uint *local_b0;
  uint *local_ac;
  uint *local_a0;
  uint local_9c [33];
  int local_18;
  int local_14;
  int local_10;
  uint *local_c;
  int local_8;
  
  if ((param_1 < 0) || (5 < param_1)) {
    local_c = (uint *)0x0;
  }
  else {
    FUN_100c4260(0x13);
    local_8 = 1;
    DAT_103222a8 = DAT_103222a8 + 1;
    while (DAT_103222b8 != 0) {
      Sleep(1);
    }
    if (param_1 == 0) {
      local_18 = 1;
      local_10 = 0;
      if (param_2 == (uint *)0x0) {
        local_c = FUN_100cda70();
      }
      else if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
              (*(char *)((int)param_2 + 2) == '_')) {
        local_a0 = param_2;
        do {
          pbVar1 = FUN_100d6e70((byte_conflict *)local_a0,"=;");
          if (((pbVar1 == (byte_conflict *)0x0) || (sVar4 = (int)pbVar1 - (int)local_a0, sVar4 == 0)
              ) || (*pbVar1 == ';')) {
            if (local_8 != 0) {
              FUN_100c4300(0x13);
              DAT_103222a8 = DAT_103222a8 + -1;
            }
            return (uint *)0x0;
          }
          local_14 = 1;
          while ((local_14 < 6 &&
                 ((iVar2 = _strncmp(*(char **)(local_14 * 0xc + 0x1028df20),(char *)local_a0,sVar4),
                  iVar2 != 0 ||
                  (sVar3 = _strlen(*(char **)(local_14 * 0xc + 0x1028df20)), sVar4 != sVar3))))) {
            local_14 = local_14 + 1;
          }
          pbVar1 = pbVar1 + 1;
          sVar4 = FUN_100d6e30(pbVar1,";");
          if ((sVar4 == 0) && (*pbVar1 != ';')) {
            if (local_8 != 0) {
              FUN_100c4300(0x13);
              DAT_103222a8 = DAT_103222a8 + -1;
            }
            return (uint *)0x0;
          }
          if (local_14 < 6) {
            _strncpy((char *)local_9c,(char *)pbVar1,sVar4);
            *(undefined1 *)((int)local_9c + sVar4) = 0;
            iVar2 = FUN_100cd8d0(local_14,local_9c);
            if (iVar2 != 0) {
              local_10 = local_10 + 1;
            }
          }
          local_a0 = (uint *)(pbVar1 + sVar4);
          if ((byte_conflict)*local_a0 != '\0') {
            local_a0 = (uint *)((int)local_a0 + 1);
          }
        } while ((byte_conflict)*local_a0 != '\0');
        if (local_10 == 0) {
          local_b0 = (uint *)0x0;
        }
        else {
          local_b0 = FUN_100cda70();
        }
        local_c = local_b0;
      }
      else {
        local_c = FUN_100cdb70(param_2,local_9c,(undefined4 *)0x0,(undefined4 *)0x0);
        if (local_c != (uint *)0x0) {
          for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
            if (local_14 != 0) {
              iVar2 = _strcmp((char *)local_9c,(&DAT_1028df24)[local_14 * 3]);
              if (iVar2 == 0) {
                local_10 = local_10 + 1;
              }
              else {
                iVar2 = FUN_100cd8d0(local_14,local_9c);
                if (iVar2 == 0) {
                  local_18 = 0;
                }
                else {
                  local_10 = local_10 + 1;
                }
              }
            }
          }
          if (local_18 == 0) {
            if (local_10 == 0) {
              local_b4 = (uint *)0x0;
            }
            else {
              local_b4 = FUN_100cda70();
            }
            local_c = local_b4;
          }
          else {
            local_c = FUN_100cda70();
            __free_dbg(DAT_1028df24,2);
            DAT_1028df24 = (void *)0x0;
          }
        }
      }
    }
    else {
      if (param_2 == (uint *)0x0) {
        local_ac = (&DAT_1028df24)[param_1 * 3];
      }
      else {
        local_ac = (uint *)FUN_100cd8d0(param_1,param_2);
      }
      local_c = local_ac;
    }
    if (local_8 != 0) {
      FUN_100c4300(0x13);
      DAT_103222a8 = DAT_103222a8 + -1;
    }
  }
  return local_c;
}

/* 100cd8d0  FUN_100cd8d0  (403 bytes)
 * undefined4 FUN_100cd8d0(int param_1, uint * param_2)
 * called by: FUN_100cd4e0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100cd8d0(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint local_ac [2];
  undefined4 local_a4;
  uint local_a0 [33];
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined *local_10;
  uint *local_c;
  undefined4 local_8;
  
  puVar1 = FUN_100cdb70(param_2,local_a0,local_ac,&local_a4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x132;
    pcVar6 = "setlocal.c";
    uVar5 = 2;
    sVar3 = _strlen((char *)local_a0);
    local_c = (uint *)__malloc_dbg(sVar3 + 1,uVar5,(int)pcVar6,uVar2);
    if (local_c == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      local_10 = (undefined *)(&DAT_1028df24)[param_1 * 3];
      local_8 = *(undefined4 *)(&DAT_10321d54 + param_1 * 4);
      FUN_100bc090(local_18,(undefined4 *)(&DAT_10321f68 + param_1 * 6),6);
      local_1c = DAT_10321d6c;
      puVar1 = FUN_100bba20(local_c,local_a0);
      (&DAT_1028df24)[param_1 * 3] = puVar1;
      *(uint *)(&DAT_10321d54 + param_1 * 4) = local_ac[0] & 0xffff;
      FUN_100bc090((undefined4 *)(&DAT_10321f68 + param_1 * 6),local_ac,6);
      if (param_1 == 2) {
        DAT_10321d6c = local_a4;
      }
      if (param_1 == 1) {
        _DAT_10321d70 = local_a4;
      }
      iVar4 = (**(code **)(&DAT_1028df28 + param_1 * 0xc))();
      if (iVar4 == 0) {
        if (local_10 != &DAT_1028de10) {
          __free_dbg(local_10,2);
        }
        uVar2 = (&DAT_1028df24)[param_1 * 3];
      }
      else {
        (&DAT_1028df24)[param_1 * 3] = local_10;
        __free_dbg(local_c,2);
        *(undefined4 *)(&DAT_10321d54 + param_1 * 4) = local_8;
        DAT_10321d6c = local_1c;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

/* 100cda70  FUN_100cda70  (256 bytes)
 * uint * FUN_100cda70(void)
 * called by: FUN_100cd4e0
 */
uint * FUN_100cda70(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int local_8;
  
  bVar1 = true;
  if (DAT_1028df24 == (uint *)0x0) {
    DAT_1028df24 = (uint *)__malloc_dbg(0x351,2,0x10279bd8,0x167);
  }
  *(undefined1 *)DAT_1028df24 = 0;
  for (local_8 = 1; __strcats(DAT_1028df24,3), local_8 < 5; local_8 = local_8 + 1) {
    FUN_100bba30(DAT_1028df24,(uint *)&DAT_10279bd0);
    iVar2 = _strcmp((char *)(&DAT_1028df24)[local_8 * 3],(char *)(&DAT_1028df24)[(local_8 + 1) * 3])
    ;
    if (iVar2 != 0) {
      bVar1 = false;
    }
  }
  puVar3 = DAT_1028df24;
  if (bVar1) {
    __free_dbg(DAT_1028df24,2);
    DAT_1028df24 = (uint *)0x0;
    puVar3 = (uint *)PTR_DAT_1028df3c;
  }
  return puVar3;
}

/* 100cdb70  FUN_100cdb70  (388 bytes)
 * uint * FUN_100cdb70(uint * param_1, uint * param_2, undefined4 * param_3, undefined4 * param_4)
 * called by: FUN_100cd4e0, FUN_100cd8d0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_100cdb70(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
    param_2 = (uint *)0x0;
  }
  else if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
    *(undefined1 *)param_2 = 0x43;
    *(undefined1 *)((int)param_2 + 1) = 0;
    if (param_3 != (undefined4 *)0x0) {
      *(undefined2 *)param_3 = 0;
      *(undefined2 *)((int)param_3 + 2) = 0;
      *(undefined2 *)(param_3 + 1) = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    iVar1 = _strcmp(&DAT_1028de98,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_1028de14,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_100cdd60((char *)local_8c,(byte_conflict *)param_1);
      if (iVar1 != 0) {
        return (uint *)0x0;
      }
      iVar1 = FUN_100d6eb0((char *)local_8c,(undefined2 *)&DAT_10321d48,(int)local_8c);
      if (iVar1 == 0) {
        return (uint *)0x0;
      }
      _DAT_10321d50 = (uint)DAT_10321d4c;
      ___lc_lctostr((uint *)&DAT_1028de98,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_100bba20((uint *)&DAT_1028de14,(uint *)&DAT_1028de98);
      }
      else {
        FUN_100bba20((uint *)&DAT_1028de14,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_100bc090(param_3,(undefined4 *)&DAT_10321d48,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_100bc090(param_4,(undefined4 *)&DAT_10321d50,4);
    }
    FUN_100bba20(param_2,(uint *)&DAT_1028de98);
    param_2 = (uint *)&DAT_1028de98;
  }
  return param_2;
}

/* 100cdd00  FUN_100cdd00  (7 bytes)
 * undefined4 FUN_100cdd00(void)
 */
undefined4 FUN_100cdd00(void)

{
  return 0;
}

/* 100cdd60  FUN_100cdd60  (349 bytes)
 * undefined4 FUN_100cdd60(char * param_1, byte.conflict * param_2)
 * called by: FUN_100cdb70
 */
undefined4 __cdecl FUN_100cdd60(char *param_1,byte_conflict *param_2)

{
  byte_conflict bVar1;
  undefined4 uVar2;
  size_t _Count;
  int local_8;
  
  _memset(param_1,0,0x88);
  if (*param_2 == '\0') {
    uVar2 = 0;
  }
  else if ((*param_2 == '.') && (param_2[1] != '\0')) {
    FUN_100bba20((uint *)(param_1 + 0x80),(uint *)(param_2 + 1));
    uVar2 = 0;
  }
  else {
    local_8 = 0;
    while (_Count = FUN_100d6e30(param_2,"_.,"), _Count != 0) {
      bVar1 = param_2[_Count];
      if (((local_8 == 0) && ((int)_Count < 0x40)) && (bVar1 != '.')) {
        _strncpy(param_1,(char *)param_2,_Count);
      }
      else if (((local_8 == 1) && ((int)_Count < 0x40)) && (bVar1 != '_')) {
        _strncpy(param_1 + 0x40,(char *)param_2,_Count);
      }
      else {
        if ((local_8 != 2) || ((bVar1 != '\0' && (bVar1 != ',')))) {
          return 0xffffffff;
        }
        _strncpy(param_1 + 0x80,(char *)param_2,_Count);
      }
      if ((bVar1 == ',') || (bVar1 == '\0')) {
        return 0;
      }
      param_2 = param_2 + _Count + 1;
      local_8 = local_8 + 1;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* 100cdf30  FUN_100cdf30  (727 bytes)
 * int FUN_100cdf30(LCID param_1, uint param_2, char * param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
 * called by: FUN_100c1630, FUN_100d1cb0, FUN_100d84c0, FUN_100dc830
 */
int __cdecl
FUN_100cdf30(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279bf8;
  pcStack_10 = FUN_100c9368;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10321d74 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10321d74 = 2;
    }
    else {
      DAT_10321d74 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100ce240(param_3,param_4);
  }
  if (DAT_10321d74 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
  }
  else if (DAT_10321d74 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10321d6c;
    }
    iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_100bdb10();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x44) {
        iVar1 = 0;
      }
      else {
        iVar1 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffbc,iVar2);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,(LPWSTR)0x0,0);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_100bdb10();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x44) {
              iVar1 = 0;
            }
            else {
              iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,
                                   (LPWSTR)&stack0xffffffbc,iVar1);
              if (iVar2 == 0) {
                iVar1 = 0;
              }
              else if (param_6 == 0) {
                iVar1 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffbc,iVar1,(LPSTR)0x0
                                            ,0,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar1 == 0) {
                  iVar1 = 0;
                }
              }
              else {
                iVar1 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffbc,iVar1,
                                            (LPSTR)param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar1 == 0) {
                  iVar1 = 0;
                }
              }
            }
          }
          else if (param_6 != 0) {
            if (param_6 < iVar1) {
              iVar1 = 0;
            }
            else {
              iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,param_5,param_6);
              if (iVar2 == 0) {
                iVar1 = 0;
              }
            }
          }
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

/* 100ce076  FUN_100ce076  (6 bytes)
 * undefined FUN_100ce076()
 */
undefined4 FUN_100ce076(void)

{
  return 1;
}

/* 100ce16c  FUN_100ce16c  (6 bytes)
 * undefined FUN_100ce16c()
 */
undefined4 FUN_100ce16c(void)

{
  return 1;
}

/* 100ce240  FUN_100ce240  (80 bytes)
 * int FUN_100ce240(char * param_1, int param_2)
 * called by: FUN_100cdf30
 */
int __cdecl FUN_100ce240(char *param_1,int param_2)

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

/* 100ce290  FUN_100ce290  (421 bytes)
 * BOOL FUN_100ce290(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
 * called by: FUN_100c1760, FUN_100d6a80, FUN_100d84c0
 */
BOOL __cdecl
FUN_100ce290(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279c10;
  pcStack_10 = FUN_100c9368;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc4;
  if (DAT_10321d78 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10321d78 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10321d78 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_10321d78 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_10321d5c;
    }
    BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  }
  else if (DAT_10321d78 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_10321d6c;
    }
    iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar3 == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_100bdb10();
      local_1c = &stack0xffffffc4;
      _memset(&stack0xffffffc4,0,iVar3 << 1);
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x3c) {
        BVar2 = 0;
      }
      else {
        iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc4,iVar3);
        if (iVar3 == 0) {
          BVar2 = 0;
        }
        else {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc4,iVar3,param_4);
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

/* 100ce3d4  FUN_100ce3d4  (6 bytes)
 * undefined FUN_100ce3d4()
 */
undefined4 FUN_100ce3d4(void)

{
  return 1;
}

/* 100ce450  FUN_100ce450  (85 bytes)
 * float10 FUN_100ce450(int param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_100c1820, FUN_100d53a0
 */
float10 __cdecl FUN_100ce450(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_1028ea78 == 0) {
    fVar2 = __umatherr(1,param_1,param_2,param_3,0,0,param_2,param_3);
  }
  else {
    puVar1 = (undefined4 *)FUN_100c6040();
    *puVar1 = 0x21;
    FUN_100cf390();
    fVar2 = (float10)(double)CONCAT44(param_3,param_2);
  }
  return fVar2;
}

/* 100ce4b0  FUN_100ce4b0  (103 bytes)
 * float10 FUN_100ce4b0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: FUN_100d54d0, FUN_100d9900
 */
float10 __cdecl
FUN_100ce4b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  double dVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  dVar1 = (double)CONCAT44(param_3,param_2) + (double)CONCAT44(param_5,param_4);
  if (DAT_1028ea78 == 0) {
    uStack_8 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_c = SUB84(dVar1,0);
    fVar3 = __umatherr(1,param_1,param_2,param_3,param_4,param_5,local_c,uStack_8);
  }
  else {
    puVar2 = (undefined4 *)FUN_100c6040();
    *puVar2 = 0x21;
    FUN_100cf390();
    fVar3 = (float10)dVar1;
  }
  return fVar3;
}

/* 100ce520  FUN_100ce520  (178 bytes)
 * float10 FUN_100ce520(uint param_1, uint param_2, uint param_3, undefined4 param_4, uint param_5, undefined4 param_6, uint param_7)
 * called by: FUN_100c1820, FUN_100d53a0
 */
float10 __cdecl
FUN_100ce520(uint param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  float10 fVar2;
  uint local_60 [14];
  uint local_28;
  int local_8;
  
  bVar1 = FUN_100ceb80(param_1,(double *)&param_5,param_7);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_28 = local_28 & 0xfffffffe;
    FUN_100ce6b0(local_60,&param_7,param_1,param_2,&param_3,&param_5);
  }
  local_8 = FUN_100cf020(param_1);
  if ((DAT_1028ea78 == 0) && (local_8 != 0)) {
    fVar2 = __umatherr(local_8,param_2,param_3,param_4,0,0,param_5,param_6);
  }
  else {
    FID_conflict___set_errno_from_matherr(local_8);
    FUN_100cf390();
    fVar2 = (float10)(double)CONCAT44(param_6,param_5);
  }
  return fVar2;
}

/* 100ce5e0  FUN_100ce5e0  (206 bytes)
 * float10 FUN_100ce5e0(uint param_1, uint param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, uint param_7, undefined4 param_8, uint param_9)
 * called by: FUN_100d54d0, FUN_100d9900
 */
float10 __cdecl
FUN_100ce5e0(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,uint param_9)

{
  bool bVar1;
  undefined3 extraout_var;
  float10 fVar2;
  uint local_60 [10];
  undefined4 local_38;
  undefined4 local_34;
  uint local_28;
  int local_8;
  
  bVar1 = FUN_100ceb80(param_1,(double *)&param_7,param_9);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_28 = local_28 & 0xffffffe1 | 3;
    local_38 = param_5;
    local_34 = param_6;
    FUN_100ce6b0(local_60,&param_9,param_1,param_2,&param_3,&param_7);
  }
  local_8 = FUN_100cf020(param_1);
  if ((DAT_1028ea78 == 0) && (local_8 != 0)) {
    fVar2 = __umatherr(local_8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FID_conflict___set_errno_from_matherr(local_8);
    FUN_100cf390();
    fVar2 = (float10)(double)CONCAT44(param_8,param_7);
  }
  return fVar2;
}

/* 100ce6b0  FUN_100ce6b0  (1201 bytes)
 * undefined FUN_100ce6b0(uint * param_1, uint * param_2, uint param_3, uint param_4, uint * param_5, uint * param_6)
 * called by: FUN_100ce520, FUN_100ce5e0, FUN_100d28c0
 */
void __cdecl
FUN_100ce6b0(uint *param_1,uint *param_2,uint param_3,uint param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  DWORD local_8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    local_8 = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    local_8 = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    local_8 = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    local_8 = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    local_8 = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] & 0xffffffef | (uint)((*param_2 & 1) == 0) << 4;
  param_1[2] = param_1[2] & 0xfffffff7 | (uint)((*param_2 & 4) == 0) << 3;
  param_1[2] = param_1[2] & 0xfffffffb | (uint)((*param_2 & 8) == 0) << 2;
  param_1[2] = param_1[2] & 0xfffffffd | (uint)((*param_2 & 0x10) == 0) << 1;
  param_1[2] = param_1[2] & 0xfffffffe | (uint)((*param_2 & 0x20) == 0);
  uVar1 = FUN_100cf350();
  if ((uVar1 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar1 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar1 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar1 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar1 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar1 = *param_2 & 0xc00;
  if (uVar1 < 0x801) {
    if (uVar1 == 0x800) {
      *param_1 = *param_1 & 0xfffffffc | 2;
    }
    else if (uVar1 == 0) {
      *param_1 = *param_1 & 0xfffffffc;
    }
    else if (uVar1 == 0x400) {
      *param_1 = *param_1 & 0xfffffffc | 1;
    }
  }
  else if (uVar1 == 0xc00) {
    *param_1 = *param_1 | 3;
  }
  uVar1 = *param_2 & 0x300;
  if (uVar1 == 0) {
    *param_1 = *param_1 & 0xffffffe3 | 8;
  }
  else if (uVar1 == 0x200) {
    *param_1 = *param_1 & 0xffffffe3 | 4;
  }
  else if (uVar1 == 0x300) {
    *param_1 = *param_1 & 0xffffffe3;
  }
  *param_1 = *param_1 & 0xfffe001f | (param_4 & 0xfff) << 5;
  param_1[8] = param_1[8] | 1;
  param_1[8] = param_1[8] & 0xffffffe1 | 2;
  param_1[4] = *param_5;
  param_1[5] = param_5[1];
  param_1[0x14] = param_1[0x14] | 1;
  param_1[0x14] = param_1[0x14] & 0xffffffe1 | 2;
  param_1[0x10] = *param_6;
  param_1[0x11] = param_6[1];
  FUN_100cf370();
  RaiseException(local_8,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] >> 4 & 1) != 0) {
    *param_2 = *param_2 & 0xfffffffe;
  }
  if ((param_1[2] >> 3 & 1) != 0) {
    *param_2 = *param_2 & 0xfffffffb;
  }
  if ((param_1[2] >> 2 & 1) != 0) {
    *param_2 = *param_2 & 0xfffffff7;
  }
  if ((param_1[2] >> 1 & 1) != 0) {
    *param_2 = *param_2 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  switch(*param_1 & 3) {
  case 0:
    *param_2 = *param_2 & 0xfffff3ff;
    break;
  case 1:
    *param_2 = *param_2 & 0xfffff3ff | 0x400;
    break;
  case 2:
    *param_2 = *param_2 & 0xfffff3ff | 0x800;
    break;
  case 3:
    *param_2 = *param_2 & 0xfffff3ff | 0xc00;
  }
  uVar1 = *param_1 >> 2 & 7;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xfffff3ff | 0x300;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xfffff3ff | 0x200;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xfffff3ff;
  }
  *param_6 = param_1[0x10];
  param_6[1] = param_1[0x11];
  return;
}

/* 100ceb80  FUN_100ceb80  (882 bytes)
 * bool FUN_100ceb80(uint param_1, double * param_2, uint param_3)
 * called by: FUN_100ce520, FUN_100ce5e0, FUN_100d28c0
 */
bool __cdecl FUN_100ceb80(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  ulonglong uVar2;
  uint uVar3;
  float10 fVar4;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  int local_1c;
  int local_18;
  undefined8 local_14;
  uint local_c;
  uint local_8;
  
  local_8 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || ((param_3 & 1) == 0)) {
    if (((param_1 & 4) == 0) || ((param_3 & 4) == 0)) {
      if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
        if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
          local_c = (uint)((param_1 & 0x10) != 0);
          if (*param_2 == 0.0) {
            local_c = 1;
          }
          else {
            fVar4 = FUN_100cf210(*(uint *)param_2,*(uint *)((int)param_2 + 4),&local_1c);
            dVar1 = (double)fVar4;
            local_18 = local_1c + -0x600;
            if (local_18 < -0x432) {
              local_14 = dVar1 * 0.0;
              local_c = 1;
            }
            else {
              local_14 = (double)((ulonglong)dVar1 & 0xfffffffffffff);
              local_14 = (double)((ulonglong)local_14 | 0x10000000000000);
              for (; local_18 < -0x3fd; local_18 = local_18 + 1) {
                if ((((ulonglong)local_14 & 1) != 0) && (local_c == 0)) {
                  local_c = 1;
                }
                uVar3 = (uint)local_14 >> 1;
                uVar2 = (ulonglong)local_14 & 0x100000000;
                local_14._0_4_ = uVar3;
                if (uVar2 != 0) {
                  local_14._0_4_ = uVar3 | 0x80000000;
                }
                local_14 = (double)CONCAT44(local_14._4_4_ >> 1,(uint)local_14);
              }
              if (dVar1 < 0.0) {
                local_14 = -local_14;
              }
            }
            *(uint *)param_2 = (uint)local_14;
            *(uint *)((int)param_2 + 4) = local_14._4_4_;
          }
          if (local_c != 0) {
            FUN_100cf3d0();
          }
          local_8 = local_8 & 0xfffffffd;
        }
      }
      else {
        FUN_100cf3d0();
        uVar3 = param_3 & 0xc00;
        if (uVar3 < 0x801) {
          if (uVar3 == 0x800) {
            if (*param_2 <= 0.0) {
              local_34 = -(double)CONCAT44(DAT_1028e054,DAT_1028e050);
            }
            else {
              local_34 = (double)CONCAT44(DAT_1028e044,DAT_1028e040);
            }
            *(undefined4 *)param_2 = (undefined4)local_34;
            *(undefined4 *)((int)param_2 + 4) = local_34._4_4_;
          }
          else if (uVar3 == 0) {
            if (*param_2 <= 0.0) {
              local_2c = -(double)CONCAT44(DAT_1028e044,DAT_1028e040);
            }
            else {
              local_2c = (double)CONCAT44(DAT_1028e044,DAT_1028e040);
            }
            *(undefined4 *)param_2 = (undefined4)local_2c;
            *(undefined4 *)((int)param_2 + 4) = local_2c._4_4_;
          }
          else if (uVar3 == 0x400) {
            if (*param_2 <= 0.0) {
              local_3c = -(double)CONCAT44(DAT_1028e044,DAT_1028e040);
            }
            else {
              local_3c = (double)CONCAT44(DAT_1028e054,DAT_1028e050);
            }
            *(undefined4 *)param_2 = (undefined4)local_3c;
            *(undefined4 *)((int)param_2 + 4) = local_3c._4_4_;
          }
        }
        else if (uVar3 == 0xc00) {
          if (*param_2 <= 0.0) {
            local_44 = -(double)CONCAT44(DAT_1028e054,DAT_1028e050);
          }
          else {
            local_44 = (double)CONCAT44(DAT_1028e054,DAT_1028e050);
          }
          *(undefined4 *)param_2 = (undefined4)local_44;
          *(undefined4 *)((int)param_2 + 4) = local_44._4_4_;
        }
        local_8 = local_8 & 0xfffffffe;
      }
    }
    else {
      FUN_100cf3d0();
      local_8 = local_8 & 0xfffffffb;
    }
  }
  else {
    FUN_100cf3d0();
    local_8 = local_8 & 0xfffffff7;
  }
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_100cf3d0();
    local_8 = local_8 & 0xffffffef;
  }
  return local_8 == 0;
}

/* 100cf020  FUN_100cf020  (113 bytes)
 * undefined4 FUN_100cf020(uint param_1)
 * called by: FUN_100ce520, FUN_100ce5e0
 */
undefined4 __cdecl FUN_100cf020(uint param_1)

{
  undefined4 local_8;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          if ((param_1 & 2) == 0) {
            local_8 = 0;
          }
          else {
            local_8 = 4;
          }
        }
        else {
          local_8 = 3;
        }
      }
      else {
        local_8 = 2;
      }
    }
    else {
      local_8 = 1;
    }
  }
  else {
    local_8 = 5;
  }
  return local_8;
}

/* 100cf0a0  FUN_100cf0a0  (62 bytes)
 * float10 FUN_100cf0a0(undefined4 param_1, undefined4 param_2, short param_3)
 * called by: FUN_100cf110, FUN_100cf210, FUN_100d54d0, FUN_100d9900
 */
float10 __cdecl FUN_100cf0a0(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_c;
  
  uStack_c = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_2._2_2_ & 0x800f | (param_3 + 0x3fe) * 0x10,
                                   CONCAT24(uStack_c,param_1));
}

/* 100cf0e0  FUN_100cf0e0  (45 bytes)
 * int FUN_100cf0e0(undefined4 param_1, undefined8 param_2)
 */
int __cdecl FUN_100cf0e0(undefined4 param_1,undefined8 param_2)

{
  undefined2 local_8;
  
  local_8 = (short)((int)(param_2._2_4_ & 0x7ff0) >> 4);
  return (int)(short)(local_8 + -0x3fe);
}

/* 100cf110  FUN_100cf110  (51 bytes)
 * undefined FUN_100cf110(undefined4 param_1, uint param_2, short param_3)
 */
void __cdecl FUN_100cf110(undefined4 param_1,uint param_2,short param_3)

{
  FUN_100cf0a0(param_1,param_2,(short)((int)(param_2 >> 0x10 & 0x7ff0) >> 4) + -0x3fe + param_3);
  return;
}

/* 100cf150  FUN_100cf150  (52 bytes)
 * float10 FUN_100cf150(undefined4 param_1, undefined4 param_2, short param_3)
 */
float10 __cdecl FUN_100cf150(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_8;
  
  uStack_8 = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_2._2_2_ & 0x800f | param_3 << 4,CONCAT24(uStack_8,param_1))
  ;
}

/* 100cf190  FUN_100cf190  (124 bytes)
 * undefined4 FUN_100cf190(int param_1, uint param_2)
 * called by: FUN_100c1820, FUN_100d53a0, FUN_100d5890, FUN_100d9900
 */
undefined4 __cdecl FUN_100cf190(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0x7ff00000) && (param_1 == 0)) {
    uVar1 = 1;
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    uVar1 = 2;
  }
  else if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uVar1 = 3;
  }
  else if (((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* 100cf210  FUN_100cf210  (313 bytes)
 * float10 FUN_100cf210(uint param_1, uint param_2, int * param_3)
 * called by: FUN_100ceb80, FUN_100d53a0, FUN_100d54d0, FUN_100d9900
 */
float10 __cdecl FUN_100cf210(uint param_1,uint param_2,int *param_3)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  double local_10;
  int local_8;
  
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((ushort)param_2,param_1)) == 0.0) {
    local_10 = 0.0;
    local_8 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    local_8 = -0x3fd;
    dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((ushort)param_2,param_1));
    uVar2 = param_2;
    while( true ) {
      param_2._2_2_ = (ushort)(uVar2 >> 0x10);
      param_2._0_2_ = (ushort)uVar2;
      if ((uVar2 & 0x100000) != 0) break;
      param_2._0_2_ = (ushort)(uVar2 << 1);
      param_2._2_2_ = (ushort)((uVar2 << 1) >> 0x10);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      uVar2 = CONCAT22(param_2._2_2_,(ushort)param_2);
      param_1 = param_1 << 1;
      local_8 = local_8 + -1;
    }
    param_2._2_2_ = param_2._2_2_ & 0xffef;
    if (dVar1 < 0.0) {
      param_2._2_2_ = param_2._2_2_ | 0x8000;
    }
    fVar3 = FUN_100cf0a0(param_1,CONCAT22(param_2._2_2_,(ushort)param_2),0);
    local_10 = (double)fVar3;
  }
  else {
    fVar3 = FUN_100cf0a0(param_1,param_2,0);
    local_10 = (double)fVar3;
    local_8 = (short)((int)(param_2._2_2_ & 0x7ff0) >> 4) + -0x3fe;
  }
  *param_3 = local_8;
  return (float10)local_10;
}

/* 100cf350  FUN_100cf350  (22 bytes)
 * int FUN_100cf350(void)
 * called by: FUN_100ce6b0
 */
int FUN_100cf350(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

/* 100cf370  FUN_100cf370  (23 bytes)
 * int FUN_100cf370(void)
 * called by: FUN_100ce6b0
 */
int FUN_100cf370(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

/* 100cf390  FUN_100cf390  (50 bytes)
 * int FUN_100cf390(void)
 * called by: FUN_100c1820, FUN_100ce450, FUN_100ce4b0, FUN_100ce520, FUN_100ce5e0, FUN_100d28c0, FUN_100d53a0, FUN_100d54d0, FUN_100d9900, __umatherr
 */
int FUN_100cf390(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}

/* 100cf3d0  FUN_100cf3d0  (117 bytes)
 * undefined FUN_100cf3d0(void)
 * called by: FUN_100ceb80
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cf3d0(void)

{
  return;
}

/* 100cf450  FUN_100cf450  (4904 bytes)
 * int FUN_100cf450(int * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: FUN_100c19a0
 */
int __cdecl FUN_100cf450(int *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  longlong lVar8;
  int *piVar9;
  int local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_200;
  uint local_1fc;
  byte local_1f4;
  undefined1 local_1f3;
  uint local_1f0;
  int local_1ec;
  WCHAR *local_1e8;
  byte *local_1e4;
  int local_1e0;
  uint local_1dc;
  undefined4 *local_1d8;
  byte local_1d4;
  byte local_1d3 [351];
  char local_74;
  int local_70;
  char local_6c;
  char local_68;
  byte local_64 [11];
  undefined1 local_59;
  int local_44;
  WCHAR *local_40;
  char local_3c;
  int local_38;
  undefined8 local_34;
  char local_2c;
  uint local_28;
  int local_24;
  int local_20;
  char local_1c;
  char local_18;
  byte local_14;
  uint local_10;
  uint local_c;
  WCHAR local_8 [2];
  
  if ((param_2 == (byte_conflict *)0x0) &&
     (iVar4 = FUN_100c32e0(2,0x10279cd0,0x109,0,(byte_conflict *)"format != NULL"), iVar4 == 1)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if ((param_1 == (int *)0x0) &&
     (iVar4 = FUN_100c32e0(2,0x10279cd0,0x10c,0,(byte_conflict *)"stream != NULL"), iVar4 == 1)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  local_2c = '\0';
  local_38 = 0;
  local_24 = local_38;
  do {
    if (*param_2 == '\0') {
LAB_100d073a:
      if ((local_1dc == 0xffffffff) && ((local_38 == 0 && (local_2c == '\0')))) {
        local_228 = -1;
        local_38 = local_228;
      }
      return local_38;
    }
    if ((int)DAT_1028b63c < 2) {
      local_1fc = *(ushort *)(PTR_DAT_1028b430 + (uint)*param_2 * 2) & 8;
    }
    else {
      local_1fc = FUN_100c1760((uint)*param_2,8);
    }
    if (local_1fc != 0) {
      local_24 = local_24 + -1;
      piVar9 = param_1;
      uVar5 = __whiteout(&local_24,param_1);
      FUN_100d08f0(uVar5,piVar9);
      do {
        param_2 = param_2 + 1;
        uVar5 = FUN_100c0fe0((uint)*param_2);
      } while (uVar5 != 0);
    }
    if (*param_2 == '%') {
      local_44 = 0;
      local_c = local_c & 0xffffff00;
      local_70 = 0;
      local_1ec = 0;
      local_20 = 0;
      local_14 = 0;
      local_6c = '\0';
      local_74 = '\0';
      local_1c = '\0';
      local_68 = '\0';
      local_18 = '\0';
      local_3c = '\x01';
      local_1e0 = 0;
LAB_100cf5c5:
      if (local_1c == '\0') {
        pbVar6 = param_2 + 1;
        local_10 = (uint)*pbVar6;
        if ((int)DAT_1028b63c < 2) {
          local_200 = *(ushort *)(PTR_DAT_1028b430 + local_10 * 2) & 4;
        }
        else {
          local_200 = FUN_100c1760(local_10,4);
        }
        if (local_200 == 0) {
          switch(local_10) {
          case 0x2a:
            local_74 = local_74 + '\x01';
            param_2 = pbVar6;
            break;
          case 0x46:
          case 0x4e:
            param_2 = pbVar6;
            break;
          case 0x49:
            if ((param_2[2] == '6') && (param_2[3] == '4')) {
              local_1e0 = local_1e0 + 1;
              local_34 = 0;
              param_2 = param_2 + 3;
              break;
            }
          default:
            local_1c = local_1c + '\x01';
            param_2 = pbVar6;
            break;
          case 0x4c:
            local_3c = local_3c + '\x01';
            param_2 = pbVar6;
            break;
          case 0x68:
            local_3c = local_3c + -1;
            local_18 = local_18 + -1;
            param_2 = pbVar6;
            break;
          case 0x6c:
            local_3c = local_3c + '\x01';
          case 0x77:
            local_18 = local_18 + '\x01';
            param_2 = pbVar6;
          }
        }
        else {
          local_1ec = local_1ec + 1;
          local_20 = (local_10 - 0x30) + local_20 * 10;
          param_2 = pbVar6;
        }
        goto LAB_100cf5c5;
      }
      if (local_74 == '\0') {
        local_1d8 = param_3;
        local_40 = (WCHAR *)*param_3;
        param_3 = param_3 + 1;
      }
      local_1c = '\0';
      if (local_18 == '\0') {
        if ((*param_2 == 'S') || (*param_2 == 'C')) {
          local_18 = '\x01';
        }
        else {
          local_18 = -1;
        }
      }
      local_10 = *param_2 | 0x20;
      if (local_10 != 0x6e) {
        if ((local_10 == 99) || (local_10 == 0x7b)) {
          local_24 = local_24 + 1;
          local_1dc = __inc(param_1);
        }
        else {
          local_1dc = __whiteout(&local_24,param_1);
        }
      }
      if ((local_1ec != 0) && (local_20 == 0)) {
        local_24 = local_24 + -1;
        FUN_100d08f0(local_1dc,param_1);
        goto LAB_100d073a;
      }
      pbVar6 = param_2;
      switch(local_10) {
      case 99:
        if (local_1ec == 0) {
          local_1ec = 1;
          local_20 = local_20 + 1;
        }
        if ('\0' < local_18) {
          local_68 = local_68 + '\x01';
        }
        local_1e4 = &DAT_1028e088;
        local_14 = local_14 - 1;
        goto LAB_100cf8d0;
      case 100:
      case 0x6f:
      case 0x75:
        goto switchD_100cf814_caseD_64;
      case 0x65:
      case 0x66:
      case 0x67:
        local_1e4 = &local_1d4;
        if (local_1dc == 0x2d) {
          local_1d4 = 0x2d;
          local_1e4 = local_1d3;
LAB_100d01ff:
          local_20 = local_20 + -1;
          local_24 = local_24 + 1;
          local_1dc = __inc(param_1);
        }
        else if (local_1dc == 0x2b) goto LAB_100d01ff;
        if ((local_1ec == 0) || (0x15d < local_20)) {
          local_20 = 0x15d;
        }
        while( true ) {
          if ((int)DAT_1028b63c < 2) {
            local_21c = *(ushort *)(PTR_DAT_1028b430 + local_1dc * 2) & 4;
          }
          else {
            local_21c = FUN_100c1760(local_1dc,4);
          }
          if ((local_21c == 0) ||
             (iVar4 = local_20 + -1, bVar7 = local_20 == 0, local_20 = iVar4, bVar7)) break;
          local_70 = local_70 + 1;
          *local_1e4 = (byte)local_1dc;
          local_1e4 = local_1e4 + 1;
          local_24 = local_24 + 1;
          local_1dc = __inc(param_1);
        }
        if ((DAT_1028b640 == (byte)local_1dc) &&
           (iVar4 = local_20 + -1, bVar7 = local_20 != 0, local_20 = iVar4, bVar7)) {
          local_24 = local_24 + 1;
          local_1dc = __inc(param_1);
          *local_1e4 = DAT_1028b640;
          local_1e4 = local_1e4 + 1;
          while( true ) {
            if ((int)DAT_1028b63c < 2) {
              local_220 = *(ushort *)(PTR_DAT_1028b430 + local_1dc * 2) & 4;
            }
            else {
              local_220 = FUN_100c1760(local_1dc,4);
            }
            if ((local_220 == 0) ||
               (iVar4 = local_20 + -1, bVar7 = local_20 == 0, local_20 = iVar4, bVar7)) break;
            local_70 = local_70 + 1;
            *local_1e4 = (byte)local_1dc;
            local_1e4 = local_1e4 + 1;
            local_24 = local_24 + 1;
            local_1dc = __inc(param_1);
          }
        }
        if ((local_70 != 0) &&
           (((local_1dc == 0x65 || (local_1dc == 0x45)) &&
            (iVar4 = local_20 + -1, bVar7 = local_20 != 0, local_20 = iVar4, bVar7)))) {
          *local_1e4 = 0x65;
          local_1e4 = local_1e4 + 1;
          local_24 = local_24 + 1;
          local_1dc = __inc(param_1);
          if (local_1dc == 0x2d) {
            *local_1e4 = 0x2d;
            local_1e4 = local_1e4 + 1;
LAB_100d0467:
            if (local_20 != 0) {
              local_24 = local_24 + 1;
              local_20 = local_20 + -1;
              local_1dc = __inc(param_1);
            }
          }
          else if (local_1dc == 0x2b) goto LAB_100d0467;
          while( true ) {
            if ((int)DAT_1028b63c < 2) {
              local_224 = *(ushort *)(PTR_DAT_1028b430 + local_1dc * 2) & 4;
            }
            else {
              local_224 = FUN_100c1760(local_1dc,4);
            }
            if ((local_224 == 0) ||
               (iVar4 = local_20 + -1, bVar7 = local_20 == 0, local_20 = iVar4, bVar7)) break;
            local_70 = local_70 + 1;
            *local_1e4 = (byte)local_1dc;
            local_1e4 = local_1e4 + 1;
            local_24 = local_24 + 1;
            local_1dc = __inc(param_1);
          }
        }
        local_24 = local_24 + -1;
        FUN_100d08f0(local_1dc,param_1);
        if (local_70 == 0) goto LAB_100d073a;
        if (local_74 == '\0') {
          local_38 = local_38 + 1;
          *local_1e4 = 0;
          (*(code *)PTR___fptrap_1028b68c)(local_3c + -1,local_40,&local_1d4);
        }
        break;
      default:
        if (*param_2 != local_1dc) {
          local_24 = local_24 + -1;
          FUN_100d08f0(local_1dc,param_1);
          goto LAB_100d073a;
        }
        local_2c = local_2c + -1;
        if (local_74 == '\0') {
          param_3 = local_1d8;
        }
        break;
      case 0x69:
        local_10 = 100;
      case 0x78:
        if (local_1dc == 0x2d) {
          local_6c = local_6c + '\x01';
LAB_100cfc6f:
          local_20 = local_20 + -1;
          if ((local_20 == 0) && (local_1ec != 0)) {
            local_1c = local_1c + '\x01';
          }
          else {
            local_24 = local_24 + 1;
            local_1dc = __inc(param_1);
          }
        }
        else if (local_1dc == 0x2b) goto LAB_100cfc6f;
        if (local_1dc == 0x30) {
          local_24 = local_24 + 1;
          local_1dc = __inc(param_1);
          if (((byte)local_1dc == 'x') || ((byte)local_1dc == 'X')) {
            local_24 = local_24 + 1;
            local_1dc = __inc(param_1);
            local_10 = 0x78;
          }
          else {
            local_70 = local_70 + 1;
            if (local_10 == 0x78) {
              local_24 = local_24 + -1;
              FUN_100d08f0(local_1dc,param_1);
              local_1dc = 0x30;
            }
            else {
              local_10 = 0x6f;
            }
          }
        }
        goto LAB_100cfdae;
      case 0x6e:
        local_44 = local_24;
        if (local_74 != '\0') break;
        goto LAB_100d0171;
      case 0x70:
        local_3c = '\x01';
switchD_100cf814_caseD_64:
        if (local_1dc == 0x2d) {
          local_6c = local_6c + '\x01';
LAB_100cfd71:
          local_20 = local_20 + -1;
          if ((local_20 == 0) && (local_1ec != 0)) {
            local_1c = local_1c + '\x01';
          }
          else {
            local_24 = local_24 + 1;
            local_1dc = __inc(param_1);
          }
        }
        else if (local_1dc == 0x2b) goto LAB_100cfd71;
LAB_100cfdae:
        if (local_1e0 == 0) {
          while (local_1c == '\0') {
            if ((local_10 == 0x78) || (local_10 == 0x70)) {
              if ((int)DAT_1028b63c < 2) {
                local_214 = *(ushort *)(PTR_DAT_1028b430 + local_1dc * 2) & 0x80;
              }
              else {
                local_214 = FUN_100c1760(local_1dc,0x80);
              }
              if (local_214 == 0) {
                local_1c = local_1c + '\x01';
              }
              else {
                local_44 = local_44 << 4;
                local_1dc = FUN_100d0830(local_1dc);
              }
            }
            else {
              if ((int)DAT_1028b63c < 2) {
                local_218 = *(ushort *)(PTR_DAT_1028b430 + local_1dc * 2) & 4;
              }
              else {
                local_218 = FUN_100c1760(local_1dc,4);
              }
              if (local_218 == 0) {
                local_1c = local_1c + '\x01';
              }
              else if (local_10 == 0x6f) {
                if ((int)local_1dc < 0x38) {
                  local_44 = local_44 << 3;
                }
                else {
                  local_1c = local_1c + '\x01';
                }
              }
              else {
                local_44 = local_44 * 10;
              }
            }
            if (local_1c == '\0') {
              local_70 = local_70 + 1;
              local_44 = local_44 + -0x30 + local_1dc;
              if ((local_1ec == 0) || (local_20 = local_20 + -1, local_20 != 0)) {
                local_24 = local_24 + 1;
                local_1dc = __inc(param_1);
              }
              else {
                local_1c = '\x01';
              }
            }
            else {
              local_24 = local_24 + -1;
              FUN_100d08f0(local_1dc,param_1);
            }
          }
          if (local_6c != '\0') {
            local_44 = -local_44;
          }
        }
        else {
          while (local_1c == '\0') {
            if (local_10 == 0x78) {
              if ((int)DAT_1028b63c < 2) {
                local_20c = *(ushort *)(PTR_DAT_1028b430 + local_1dc * 2) & 0x80;
              }
              else {
                local_20c = FUN_100c1760(local_1dc,0x80);
              }
              if (local_20c == 0) {
                local_1c = local_1c + '\x01';
              }
              else {
                local_34 = __allshl('\x04',local_34._4_4_);
                local_1dc = FUN_100d0830(local_1dc);
              }
            }
            else {
              if ((int)DAT_1028b63c < 2) {
                local_210 = *(ushort *)(PTR_DAT_1028b430 + local_1dc * 2) & 4;
              }
              else {
                local_210 = FUN_100c1760(local_1dc,4);
              }
              if (local_210 == 0) {
                local_1c = local_1c + '\x01';
              }
              else if (local_10 == 0x6f) {
                if ((int)local_1dc < 0x38) {
                  local_34 = __allshl('\x03',local_34._4_4_);
                }
                else {
                  local_1c = local_1c + '\x01';
                }
              }
              else {
                lVar8 = __allshl('\x02',local_34._4_4_);
                local_34 = __allshl('\x01',(int)((ulonglong)lVar8 >> 0x20) + local_34._4_4_ +
                                           (uint)CARRY4((uint)lVar8,(uint)local_34));
              }
            }
            if (local_1c == '\0') {
              local_70 = local_70 + 1;
              uVar5 = local_1dc - 0x30;
              local_34 = CONCAT44(local_34._4_4_ + ((int)uVar5 >> 0x1f) +
                                  (uint)CARRY4((uint)local_34,uVar5),(uint)local_34 + uVar5);
              if ((local_1ec == 0) || (local_20 = local_20 + -1, local_20 != 0)) {
                local_24 = local_24 + 1;
                local_1dc = __inc(param_1);
              }
              else {
                local_1c = '\x01';
              }
            }
            else {
              local_24 = local_24 + -1;
              FUN_100d08f0(local_1dc,param_1);
            }
          }
          if (local_6c != '\0') {
            local_34 = CONCAT44(-(local_34._4_4_ + (uint)((uint)local_34 != 0)),-(uint)local_34);
          }
        }
        if (local_10 == 0x46) {
          local_70 = 0;
        }
        if (local_70 == 0) goto LAB_100d073a;
        if (local_74 == '\0') {
          local_38 = local_38 + 1;
LAB_100d0171:
          if (local_1e0 == 0) {
            if (local_3c == '\0') {
              *local_40 = (WCHAR)local_44;
            }
            else {
              *(int *)local_40 = local_44;
            }
          }
          else {
            *(uint *)local_40 = (uint)local_34;
            *(int *)(local_40 + 2) = local_34._4_4_;
          }
        }
        break;
      case 0x73:
        if ('\0' < local_18) {
          local_68 = local_68 + '\x01';
        }
        local_1e4 = (byte *)s_____1028e080;
        local_14 = local_14 - 1;
        goto LAB_100cf8d0;
      case 0x7b:
        if ('\0' < local_18) {
          local_68 = local_68 + '\x01';
        }
        pbVar6 = param_2 + 1;
        local_1e4 = pbVar6;
        if (*pbVar6 == 0x5e) {
          local_1e4 = param_2 + 2;
          local_14 = local_14 - 1;
        }
LAB_100cf8d0:
        param_2 = pbVar6;
        _memset(local_64,0,0x20);
        if ((local_10 == 0x7b) && (*local_1e4 == 0x5d)) {
          local_c = CONCAT31(local_c._1_3_,0x5d);
          local_59 = 0x20;
          local_1e4 = local_1e4 + 1;
        }
        while (*local_1e4 != 0x5d) {
          bVar1 = *local_1e4;
          local_1f0 = CONCAT31(local_1f0._1_3_,bVar1);
          pbVar6 = local_1e4 + 1;
          if (((bVar1 == 0x2d) && ((local_c & 0xff) != 0)) && (*pbVar6 != 0x5d)) {
            bVar1 = *pbVar6;
            local_1e4 = local_1e4 + 2;
            if ((uint)bVar1 <= (local_c & 0xff)) {
              bVar3 = (byte)local_c;
              local_c = CONCAT31(local_c._1_3_,bVar1);
              bVar1 = bVar3;
            }
            local_28 = CONCAT31(local_28._1_3_,bVar1);
            for (local_1f0 = CONCAT31(local_1f0._1_3_,(byte)local_c);
                (local_1f0 & 0xff) <= (local_28 & 0xff);
                local_1f0 = CONCAT31(local_1f0._1_3_,(byte)local_1f0 + 1)) {
              local_64[(int)(local_1f0 & 0xff) >> 3] =
                   local_64[(int)(local_1f0 & 0xff) >> 3] | (byte)(1 << ((byte)local_1f0 & 7));
            }
            local_c = local_c & 0xffffff00;
          }
          else {
            local_c = CONCAT31(local_c._1_3_,bVar1);
            local_64[(int)(uint)bVar1 >> 3] =
                 local_64[(int)(uint)bVar1 >> 3] | (byte)(1 << (bVar1 & 7));
            local_1e4 = pbVar6;
          }
        }
        if (*local_1e4 == 0) goto LAB_100d073a;
        if (local_10 == 0x7b) {
          param_2 = local_1e4;
        }
        local_1e8 = local_40;
        local_24 = local_24 + -1;
        FUN_100d08f0(local_1dc,param_1);
        while( true ) {
          if ((local_1ec != 0) &&
             (iVar4 = local_20 + -1, bVar7 = local_20 == 0, local_20 = iVar4, bVar7))
          goto LAB_100cfc05;
          local_24 = local_24 + 1;
          local_1dc = __inc(param_1);
          if ((local_1dc == 0xffffffff) ||
             (bVar1 = (byte)local_1dc,
             ((int)(char)(local_64[(int)local_1dc >> 3] ^ local_14) & 1 << (bVar1 & 7)) == 0))
          break;
          if (local_74 == '\0') {
            if (local_68 == '\0') {
              *(byte *)local_40 = bVar1;
              local_40 = (WCHAR *)((int)local_40 + 1);
            }
            else {
              local_1f4 = bVar1;
              if ((*(ushort *)(PTR_DAT_1028b430 + (local_1dc & 0xff) * 2) & 0x8000) != 0) {
                local_24 = local_24 + 1;
                uVar5 = __inc(param_1);
                local_1f3 = (undefined1)uVar5;
              }
              FUN_100d7c60(local_8,&local_1f4,DAT_1028b63c);
              *local_40 = local_8[0];
              local_40 = local_40 + 1;
            }
          }
          else {
            local_1e8 = (WCHAR *)((int)local_1e8 + 1);
          }
        }
        local_24 = local_24 + -1;
        FUN_100d08f0(local_1dc,param_1);
LAB_100cfc05:
        if (local_1e8 == local_40) goto LAB_100d073a;
        if ((local_74 == '\0') && (local_38 = local_38 + 1, local_10 != 99)) {
          if (local_68 == '\0') {
            *(byte *)local_40 = 0;
          }
          else {
            *local_40 = L'\0';
          }
        }
      }
      local_2c = local_2c + '\x01';
      pbVar6 = param_2 + 1;
    }
    else {
      local_24 = local_24 + 1;
      bVar1 = *param_2;
      local_1dc = __inc(param_1);
      if (bVar1 != local_1dc) {
        local_24 = local_24 + -1;
        FUN_100d08f0(local_1dc,param_1);
        goto LAB_100d073a;
      }
      pbVar6 = param_2 + 1;
      if ((*(ushort *)(PTR_DAT_1028b430 + (local_1dc & 0xff) * 2) & 0x8000) != 0) {
        local_24 = local_24 + 1;
        bVar1 = param_2[1];
        uVar5 = __inc(param_1);
        if (bVar1 == uVar5) {
          local_24 = local_24 + -1;
          pbVar6 = param_2 + 2;
          goto LAB_100d0711;
        }
        local_24 = local_24 + -1;
        FUN_100d08f0(uVar5,param_1);
        local_24 = local_24 + -1;
        FUN_100d08f0(local_1dc,param_1);
        goto LAB_100d073a;
      }
    }
LAB_100d0711:
    param_2 = pbVar6;
    if ((local_1dc == 0xffffffff) && ((*param_2 != '%' || (param_2[1] != 'n')))) goto LAB_100d073a;
  } while( true );
}

/* 100d0830  FUN_100d0830  (88 bytes)
 * uint FUN_100d0830(uint param_1)
 * called by: FUN_100cf450
 */
uint __cdecl FUN_100d0830(uint param_1)

{
  uint local_c;
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 4;
  }
  else {
    local_8 = FUN_100c1760(param_1,4);
  }
  if (local_8 == 0) {
    local_c = (param_1 & 0xffffffdf) - 7;
  }
  else {
    local_c = param_1;
  }
  return local_c;
}

/* 100d08f0  FUN_100d08f0  (27 bytes)
 * undefined FUN_100d08f0(uint param_1, int * param_2)
 * called by: FUN_100cf450
 */
void __cdecl FUN_100d08f0(uint param_1,int *param_2)

{
  if (param_1 != 0xffffffff) {
    FUN_100d7ed0(param_1,param_2);
  }
  return;
}

/* 100d0950  FUN_100d0950  (329 bytes)
 * undefined FUN_100d0950(void)
 * called by: FUN_100c1e30
 */
void FUN_100d0950(void)

{
  size_t sVar1;
  int iVar2;
  int *local_10;
  int local_c;
  uint *local_8;
  
  if (DAT_103237c0 == 0) {
    FUN_100d87f0();
  }
  local_c = 0;
  for (local_8 = DAT_10321c98; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    if ((char)*local_8 != '=') {
      local_c = local_c + 1;
    }
    sVar1 = _strlen((char *)local_8);
  }
  local_10 = (int *)__malloc_dbg(local_c * 4 + 4,2,0x10279cd8,0x6d);
  DAT_10321c3c = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (local_8 = DAT_10321c98; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    sVar1 = _strlen((char *)local_8);
    if ((char)*local_8 != '=') {
      iVar2 = __malloc_dbg(sVar1 + 1,2,0x10279cd8,0x79);
      *local_10 = iVar2;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_100bba20((uint *)*local_10,local_8);
      local_10 = local_10 + 1;
    }
  }
  __free_dbg(DAT_10321c98,2);
  DAT_10321c98 = (uint *)0x0;
  *local_10 = 0;
  DAT_103237b0 = 1;
  return;
}

/* 100d0aa0  FUN_100d0aa0  (216 bytes)
 * undefined FUN_100d0aa0(void)
 * called by: FUN_100c1e30
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d0aa0(void)

{
  byte_conflict *local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_103237c0 == 0) {
    FUN_100d87f0();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10321d7c,0x104);
  DAT_10321c4c = &DAT_10321d7c;
  if (*DAT_10323790 == '\0') {
    local_18 = &DAT_10321d7c;
  }
  else {
    local_18 = DAT_10323790;
  }
  FUN_100d0b80(local_18,(undefined4 *)0x0,(byte_conflict *)0x0,&local_10,&local_8);
  local_c = (undefined4 *)__malloc_dbg(local_8 + local_10 * 4,2,0x10279ce4,0x80);
  if (local_c == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100d0b80(local_18,local_c,(byte_conflict *)(local_c + local_10),&local_10,&local_8);
  _DAT_10321c30 = local_10 + -1;
  _DAT_10321c34 = local_c;
  return;
}

/* 100d0b80  FUN_100d0b80  (1060 bytes)
 * undefined FUN_100d0b80(byte.conflict * param_1, undefined4 * param_2, byte.conflict * param_3, int * param_4, int * param_5)
 * called by: FUN_100d0aa0
 */
void __cdecl
FUN_100d0b80(byte_conflict *param_1,undefined4 *param_2,byte_conflict *param_3,int *param_4,
            int *param_5)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  bool bVar4;
  uint local_14;
  byte *local_8;
  
  *param_5 = 0;
  *param_4 = 1;
  local_8 = param_1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == '\"') {
    while ((pbVar3 = local_8 + 1, *pbVar3 != 0x22 && (*pbVar3 != 0))) {
      if ((((&DAT_103221a1)[*pbVar3] & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte_conflict *)0x0)) {
        *param_3 = *pbVar3;
        param_3 = param_3 + 1;
        pbVar3 = local_8 + 2;
      }
      local_8 = pbVar3;
      *param_5 = *param_5 + 1;
      if (param_3 != (byte_conflict *)0x0) {
        *param_3 = *local_8;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte_conflict *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    if (*pbVar3 == 0x22) {
      pbVar3 = local_8 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte_conflict *)0x0) {
        *param_3 = *local_8;
        param_3 = param_3 + 1;
      }
      bVar1 = *local_8;
      pbVar3 = local_8 + 1;
      if (((&DAT_103221a1)[bVar1] & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte_conflict *)0x0) {
          *param_3 = local_8[1];
          param_3 = param_3 + 1;
        }
        pbVar3 = local_8 + 2;
      }
      local_8 = pbVar3;
    } while (((bVar1 != 0x20) && (bVar1 != 0)) && (bVar1 != 9));
    if (bVar1 == 0) {
      pbVar3 = local_8 + -1;
    }
    else {
      pbVar3 = local_8;
      if (param_3 != (byte_conflict *)0x0) {
        param_3[-1] = '\0';
      }
    }
  }
  local_8 = pbVar3;
  bVar2 = false;
  while( true ) {
    if (*local_8 != 0) {
      for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
      }
    }
    if (*local_8 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar4 = true;
      local_14 = 0;
      for (; *local_8 == 0x5c; local_8 = local_8 + 1) {
        local_14 = local_14 + 1;
      }
      if (*local_8 == 0x22) {
        if (local_14 % 2 == 0) {
          if (bVar2) {
            bVar4 = local_8[1] == 0x22;
            if (bVar4) {
              local_8 = local_8 + 1;
            }
          }
          else {
            bVar4 = false;
          }
          bVar2 = !bVar2;
        }
        local_14 = local_14 >> 1;
      }
      while (local_14 != 0) {
        if (param_3 != (byte_conflict *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
        local_14 = local_14 - 1;
      }
      if ((*local_8 == 0) || ((!bVar2 && ((*local_8 == 0x20 || (*local_8 == 9)))))) break;
      if (bVar4) {
        if (param_3 == (byte_conflict *)0x0) {
          if (((&DAT_103221a1)[*local_8] & 4) != 0) {
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if (((&DAT_103221a1)[*local_8] & 4) != 0) {
            *param_3 = *local_8;
            param_3 = param_3 + 1;
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *local_8;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      local_8 = local_8 + 1;
    }
    if (param_3 != (byte_conflict *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}

/* 100d0fb0  FUN_100d0fb0  (537 bytes)
 * LPSTR FUN_100d0fb0(void)
 * called by: FUN_100c1e30
 */
LPSTR FUN_100d0fb0(void)

{
  char *pcVar1;
  LPWCH pWVar2;
  uint cbMultiByte;
  LPSTR pCVar3;
  int iVar4;
  LPCH local_1c;
  LPWCH local_18;
  char *local_10;
  LPWCH local_c;
  
  local_18 = (LPWCH)0x0;
  local_1c = (LPCH)0x0;
  if (DAT_10321e80 == 0) {
    local_18 = GetEnvironmentStringsW();
    if (local_18 == (LPWCH)0x0) {
      local_1c = GetEnvironmentStrings();
      if (local_1c == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_10321e80 = 2;
    }
    else {
      DAT_10321e80 = 1;
    }
  }
  if (DAT_10321e80 == 1) {
    if ((local_18 == (LPWCH)0x0) && (local_18 = GetEnvironmentStringsW(), local_18 == (LPWCH)0x0)) {
      pCVar3 = (LPSTR)0x0;
    }
    else {
      local_c = local_18;
      pWVar2 = local_c;
      while (local_c = pWVar2, *local_c != L'\0') {
        pWVar2 = local_c + 1;
        if (local_c[1] == L'\0') {
          pWVar2 = local_c + 2;
        }
      }
      iVar4 = ((int)local_c - (int)local_18 >> 1) + 1;
      cbMultiByte = WideCharToMultiByte(0,0,local_18,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((cbMultiByte == 0) ||
         (local_1c = (LPCH)__malloc_dbg(cbMultiByte,2,0x10279cf0,100), local_1c == (LPSTR)0x0)) {
        FreeEnvironmentStringsW(local_18);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,local_18,iVar4,local_1c,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0)
        ;
        if (iVar4 == 0) {
          __free_dbg(local_1c,2);
          local_1c = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(local_18);
        pCVar3 = local_1c;
      }
    }
  }
  else if (DAT_10321e80 == 2) {
    if ((local_1c == (LPCH)0x0) && (local_1c = GetEnvironmentStrings(), local_1c == (LPCH)0x0)) {
      pCVar3 = (LPSTR)0x0;
    }
    else {
      local_10 = local_1c;
      pcVar1 = local_10;
      while (local_10 = pcVar1, *local_10 != '\0') {
        pcVar1 = local_10 + 1;
        if (local_10[1] == '\0') {
          pcVar1 = local_10 + 2;
        }
      }
      pCVar3 = (LPSTR)__malloc_dbg((uint)(local_10 + (1 - (int)local_1c)),2,0x10279cf0,0x8f);
      if (pCVar3 == (LPSTR)0x0) {
        FreeEnvironmentStringsA(local_1c);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        FUN_100bc090((undefined4 *)pCVar3,(undefined4 *)local_1c,
                     (uint)(local_10 + (1 - (int)local_1c)));
        FreeEnvironmentStringsA(local_1c);
      }
    }
  }
  else {
    pCVar3 = (LPSTR)0x0;
  }
  return pCVar3;
}

/* 100d11d0  FUN_100d11d0  (12 bytes)
 * undefined4 FUN_100d11d0(void)
 * called by: entry
 */
undefined4 FUN_100d11d0(void)

{
  return 1;
}

/* 100d1230  FUN_100d1230  (447 bytes)
 * undefined FUN_100d1230(int param_1)
 * called by: __FF_MSGBANNER, __amsg_exit, _abort
 */
void __cdecl FUN_100d1230(int param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  HANDLE hFile;
  DWORD DVar4;
  undefined *lpBuffer;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  uint local_1b4 [40];
  uint local_114 [65];
  uint *local_10;
  uint local_c;
  DWORD local_8;
  
  for (local_c = 0; (local_c < 0x12 && (param_1 != *(int *)(&DAT_1028e090 + local_c * 8)));
      local_c = local_c + 1) {
  }
  if (param_1 == *(int *)(&DAT_1028e090 + local_c * 8)) {
    if ((param_1 != 0xfc) &&
       (iVar2 = FUN_100c32e0(1,0,0,0,(&PTR_s_R6002___floating_point_not_loade_1028e094)[local_c * 2]
                            ), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((DAT_10321ca0 == 1) || ((DAT_10321ca0 == 0 && (DAT_10321ca4 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_8;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_1028e094)[local_c * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_1028e094)[local_c * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar4 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_114,0x104);
      if (DVar4 == 0) {
        FUN_100bba20(local_114,(uint *)"<program name unknown>");
      }
      local_10 = local_114;
      sVar3 = _strlen((char *)local_10);
      if (0x3c < sVar3 + 1) {
        sVar3 = _strlen((char *)local_114);
        local_10 = (uint *)((int)local_10 + (sVar3 - 0x3b));
        _strncpy((char *)local_10,"...",3);
      }
      FUN_100bba20(local_1b4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100bba30(local_1b4,local_10);
      FUN_100bba30(local_1b4,(uint *)&DAT_10278cdc);
      FUN_100bba30(local_1b4,(uint *)(&PTR_s_R6002___floating_point_not_loade_1028e094)[local_c * 2]
                  );
      FUN_100c7a20(local_1b4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}

/* 100d1440  FUN_100d1440  (199 bytes)
 * undefined FUN_100d1440(undefined4 * param_1)
 * called by: FUN_100c20b0, FUN_100c6580, FUN_100d7ed0
 */
void __cdecl FUN_100d1440(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10279fa0,0x2e,0,(byte_conflict *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DAT_10321d10 = DAT_10321d10 + 1;
  uVar3 = __malloc_dbg(0x1000,2,0x10279fa0,0x3b);
  param_1[2] = uVar3;
  if (param_1[2] == 0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return;
}

/* 100d1550  FUN_100d1550  (119 bytes)
 * int FUN_100d1550(LPSTR param_1, undefined2 param_2)
 * called by: FUN_100c2330
 */
int __cdecl FUN_100d1550(LPSTR param_1,undefined2 param_2)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar3;
  int iVar2;
  bool bVar4;
  
  LVar1 = InterlockedIncrement(&DAT_103222b8);
  bVar4 = DAT_103222a8 == 0;
  uVar3 = (short)((uint)LVar1 >> 0x10);
  if (!bVar4) {
    InterlockedDecrement(&DAT_103222b8);
    FUN_100c4260(0x13);
    uVar3 = extraout_var;
  }
  iVar2 = FUN_100d15d0(param_1,CONCAT22(uVar3,param_2));
  if (bVar4) {
    InterlockedDecrement(&DAT_103222b8);
  }
  else {
    FUN_100c4300(0x13);
  }
  return iVar2;
}

/* 100d15d0  FUN_100d15d0  (160 bytes)
 * int FUN_100d15d0(LPSTR param_1, uint param_2)
 * called by: FUN_100d1550
 */
int __cdecl FUN_100d15d0(LPSTR param_1,uint param_2)

{
  undefined4 *puVar1;
  BOOL local_c;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else if (DAT_10321d5c == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      local_8 = 1;
    }
    else {
      puVar1 = (undefined4 *)FUN_100c6040();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  else {
    local_c = 0;
    local_8 = WideCharToMultiByte(DAT_10321d6c,0x220,(LPCWSTR)&param_2,1,param_1,DAT_1028b63c,
                                  (LPCSTR)0x0,&local_c);
    if ((local_8 == 0) || (local_c != 0)) {
      puVar1 = (undefined4 *)FUN_100c6040();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  return local_8;
}

/* 100d1760  FUN_100d1760  (31 bytes)
 * undefined FUN_100d1760(void)
 */
void FUN_100d1760(void)

{
  undefined4 in_EAX;
  undefined2 in_FPUStatusWord;
  
  FUN_100d1b50(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUStatusWord));
  return;
}

/* 100d1780  FUN_100d1780  (32 bytes)
 * undefined FUN_100d1780(void)
 */
void FUN_100d1780(void)

{
  undefined4 in_EAX;
  undefined2 in_FPUStatusWord;
  
  FUN_100d1b50(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUStatusWord));
  return;
}

/* 100d17a0  FUN_100d17a0  (79 bytes)
 * uint FUN_100d17a0(uint param_1, uint param_2)
 * called by: __controlfp
 */
uint __cdecl FUN_100d17a0(uint param_1,uint param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined2 in_FPUControlWord;
  
  uVar1 = FUN_100d1870(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUControlWord));
  uVar1 = param_1 & param_2 | uVar1 & ~param_2;
  FUN_100d19f0(uVar1);
  return uVar1;
}

/* 100d1810  FUN_100d1810  (88 bytes)
 * undefined FUN_100d1810(void)
 */
void FUN_100d1810(void)

{
  DWORD DVar1;
  int iVar2;
  DWORD *pDVar3;
  
  pDVar3 = FUN_100c7a10();
  DVar1 = *pDVar3;
  __setdefaultprecision();
  if ((DVar1 != 0) && ((**(uint **)(DVar1 + 4) & 0x10008) != 0)) {
    iVar2 = *(int *)(DVar1 + 4);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0xffff;
  }
  return;
}

/* 100d1870  FUN_100d1870  (377 bytes)
 * uint FUN_100d1870(uint param_1)
 * called by: FUN_100d17a0
 */
uint __cdecl FUN_100d1870(uint param_1)

{
  uint uVar1;
  uint local_8;
  
  local_8 = 0;
  if ((param_1 & 1) != 0) {
    local_8 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    local_8 = local_8 | 8;
  }
  if ((param_1 & 8) != 0) {
    local_8 = local_8 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    local_8 = local_8 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    local_8 = local_8 | 1;
  }
  if ((param_1 & 2) != 0) {
    local_8 = local_8 | 0x80000;
  }
  uVar1 = param_1 & 0xc00;
  if (uVar1 < 0x801) {
    if (uVar1 == 0x800) {
      local_8 = local_8 | 0x200;
    }
    else if ((uVar1 != 0) && (uVar1 == 0x400)) {
      local_8 = local_8 | 0x100;
    }
  }
  else if (uVar1 == 0xc00) {
    local_8 = local_8 | 0x300;
  }
  if ((param_1 & 0x300) == 0) {
    local_8 = local_8 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    local_8 = local_8 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    local_8 = local_8 | 0x40000;
  }
  return local_8;
}

/* 100d19f0  FUN_100d19f0  (346 bytes)
 * undefined4 FUN_100d19f0(uint param_1)
 * called by: FUN_100d17a0
 */
undefined4 __cdecl FUN_100d19f0(uint param_1)

{
  uint uVar1;
  ushort local_8;
  
  local_8 = (ushort)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    local_8 = local_8 | 4;
  }
  if ((param_1 & 4) != 0) {
    local_8 = local_8 | 8;
  }
  if ((param_1 & 2) != 0) {
    local_8 = local_8 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    local_8 = local_8 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    local_8 = local_8 | 2;
  }
  uVar1 = param_1 & 0x300;
  if (uVar1 < 0x201) {
    if (uVar1 == 0x200) {
      local_8 = local_8 | 0x800;
    }
    else if ((uVar1 != 0) && (uVar1 == 0x100)) {
      local_8 = local_8 | 0x400;
    }
  }
  else if (uVar1 == 0x300) {
    local_8 = local_8 | 0xc00;
  }
  if ((param_1 & 0x30000) == 0) {
    local_8 = local_8 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    local_8 = local_8 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    local_8 = local_8 | 0x1000;
  }
  return CONCAT22((short)((param_1 & 0x40000) >> 0x10),local_8);
}

/* 100d1b50  FUN_100d1b50  (167 bytes)
 * uint FUN_100d1b50(uint param_1)
 * called by: FUN_100d1760, FUN_100d1780
 */
uint __cdecl FUN_100d1b50(uint param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_1 & 1) != 0) {
    local_8 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    local_8 = local_8 | 8;
  }
  if ((param_1 & 8) != 0) {
    local_8 = local_8 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    local_8 = local_8 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    local_8 = local_8 | 1;
  }
  if ((param_1 & 2) != 0) {
    local_8 = local_8 | 0x80000;
  }
  return local_8;
}

/* 100d1c00  FUN_100d1c00  (11 bytes)
 * int FUN_100d1c00(int param_1)
 */
int __cdecl FUN_100d1c00(int param_1)

{
  return param_1 + 0x20;
}

/* 100d1c10  FUN_100d1c10  (147 bytes)
 * uint FUN_100d1c10(uint param_1)
 * called by: FUN_100c3a50
 */
uint __cdecl FUN_100d1c10(uint param_1)

{
  bool bVar1;
  
  if (DAT_10321d5c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_103222b8);
    bVar1 = DAT_103222a8 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_103222b8);
      FUN_100c4260(0x13);
    }
    param_1 = FUN_100d1cb0(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_103222b8);
    }
    else {
      FUN_100c4300(0x13);
    }
  }
  return param_1;
}

/* 100d1cb0  FUN_100d1cb0  (299 bytes)
 * uint FUN_100d1cb0(uint param_1)
 * called by: FUN_100d1c10, FUN_100db540, FUN_100db610
 */
uint __cdecl FUN_100d1cb0(uint param_1)

{
  int iVar1;
  uint local_14;
  uint local_10;
  char local_c;
  char local_b;
  undefined1 local_a;
  int local_8;
  
  if (DAT_10321d5c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_1028b63c < 2) {
        local_14 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 1;
      }
      else {
        local_14 = FUN_100c1760(param_1,1);
      }
      if (local_14 == 0) {
        return param_1;
      }
    }
    if ((*(ushort *)(PTR_DAT_1028b430 + ((int)param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_c = (char)param_1;
      local_b = '\0';
      local_8 = 1;
    }
    else {
      local_c = (char)(param_1 >> 8);
      local_b = (char)param_1;
      local_a = 0;
      local_8 = 2;
    }
    iVar1 = FUN_100cdf30(DAT_10321d5c,0x100,&local_c,local_8,(LPWSTR)&local_10,3,0,1);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        param_1 = local_10 & 0xff;
      }
      else {
        param_1 = local_10 & 0xff | (local_10 >> 8 & 0xff) << 8;
      }
    }
  }
  return param_1;
}

/* 100d1de0  FUN_100d1de0  (132 bytes)
 * undefined4 FUN_100d1de0(int param_1, int param_2)
 * called by: FUN_100d1f20
 */
undefined4 __cdecl FUN_100d1de0(int param_1,int param_2)

{
  uint uVar1;
  int local_10;
  
  local_10 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar1 = *(uint *)(param_1 + local_10 * 4) & ~(-1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f));
  while( true ) {
    if (uVar1 != 0) {
      return 0;
    }
    local_10 = local_10 + 1;
    if (2 < local_10) break;
    uVar1 = *(uint *)(param_1 + local_10 * 4);
  }
  return 1;
}

/* 100d1f20  FUN_100d1f20  (219 bytes)
 * int FUN_100d1f20(int param_1, int param_2)
 * called by: FUN_100d21b0, FUN_100d2440
 */
int __cdecl FUN_100d1f20(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int local_1c;
  int local_14;
  
  local_1c = 0;
  local_14 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = 0x1f - ((byte)param_2 & 0x1f);
  if (((*(uint *)(param_1 + local_14 * 4) & 1 << (bVar2 & 0x1f)) != 0) &&
     (iVar1 = FUN_100d1de0(param_1,param_2 + 1), iVar1 == 0)) {
    local_1c = __IncMan(param_1,param_2 + -1);
  }
  *(uint *)(param_1 + local_14 * 4) = *(uint *)(param_1 + local_14 * 4) & -1 << (bVar2 & 0x1f);
  while (local_14 = local_14 + 1, local_14 < 3) {
    *(undefined4 *)(param_1 + local_14 * 4) = 0;
  }
  return local_1c;
}

/* 100d21b0  FUN_100d21b0  (578 bytes)
 * undefined4 FUN_100d21b0(ushort * param_1, uint * param_2, int * param_3)
 * called by: FUN_100d2400, FUN_100d2420
 */
undefined4 __cdecl FUN_100d21b0(ushort *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_34 [4];
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_c;
  int local_8;
  
  local_8 = (param_1[5] & 0x7fff) - 0x3fff;
  local_24 = param_1[5] & 0x8000;
  local_1c = *(uint *)(param_1 + 3);
  local_18 = *(uint *)(param_1 + 1);
  local_14 = (uint)*param_1 << 0x10;
  if (local_8 == -0x3fff) {
    local_c = 0;
    iVar1 = __IsZeroMan((int)&local_1c);
    if (iVar1 == 0) {
      __FillZeroMan((int)&local_1c);
      local_20 = 2;
    }
    else {
      local_20 = 0;
    }
  }
  else {
    __CopyMan(local_34,&local_1c);
    iVar1 = FUN_100d1f20((int)&local_1c,param_3[2]);
    if (iVar1 != 0) {
      local_8 = local_8 + 1;
    }
    if (local_8 < param_3[1] - param_3[2]) {
      __FillZeroMan((int)&local_1c);
      local_c = 0;
      local_20 = 2;
    }
    else if (param_3[1] < local_8) {
      if (local_8 < *param_3) {
        local_c = local_8 + param_3[5];
        local_1c = local_1c & 0x7fffffff;
        __ShrMan((int)&local_1c,param_3[3]);
        local_20 = 0;
      }
      else {
        __FillZeroMan((int)&local_1c);
        local_1c = local_1c | 0x80000000;
        __ShrMan((int)&local_1c,param_3[3]);
        local_c = *param_3 + param_3[5];
        local_20 = 1;
      }
    }
    else {
      iVar1 = param_3[1] - local_8;
      __CopyMan(&local_1c,local_34);
      __ShrMan((int)&local_1c,iVar1);
      FUN_100d1f20((int)&local_1c,param_3[2]);
      __ShrMan((int)&local_1c,param_3[3] + 1);
      local_c = 0;
      local_20 = 2;
    }
  }
  uVar2 = local_1c | local_c << (0x20U - ((char)param_3[3] + '\x01') & 0x1f) |
          -(uint)(local_24 != 0) & 0x80000000;
  if (param_3[4] == 0x40) {
    param_2[1] = uVar2;
    *param_2 = local_18;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = uVar2;
  }
  return local_20;
}

/* 100d2400  FUN_100d2400  (26 bytes)
 * undefined FUN_100d2400(ushort * param_1, uint * param_2)
 * called by: FUN_100c7f40, FUN_100d2500
 */
void __cdecl FUN_100d2400(ushort *param_1,uint *param_2)

{
  FUN_100d21b0(param_1,param_2,(int *)&DAT_1028e120);
  return;
}

/* 100d2420  FUN_100d2420  (26 bytes)
 * undefined FUN_100d2420(ushort * param_1, uint * param_2)
 * called by: FUN_100d2580
 */
void __cdecl FUN_100d2420(ushort *param_1,uint *param_2)

{
  FUN_100d21b0(param_1,param_2,(int *)&DAT_1028e138);
  return;
}

/* 100d2440  FUN_100d2440  (191 bytes)
 * bool FUN_100d2440(ushort * param_1, undefined4 * param_2)
 * called by: FUN_100d2540, FUN_100d45f0
 */
bool __cdecl FUN_100d2440(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = CONCAT22(local_8._2_2_,param_1[5]) & 0xffff7fff;
  uVar1 = param_1[5];
  local_14 = *(undefined4 *)(param_1 + 3);
  local_10 = *(undefined4 *)(param_1 + 1);
  local_c = (uint)*param_1 << 0x10;
  iVar2 = FUN_100d1f20((int)&local_14,0x40);
  if (iVar2 != 0) {
    local_14 = 0x80000000;
    local_8 = (uint)(ushort)((short)local_8 + 1);
  }
  param_2[1] = local_14;
  *param_2 = local_10;
  *(ushort *)(param_2 + 2) = uVar1 & 0x8000 | (ushort)local_8;
  return (local_8 & 0xffff) == 0x7fff;
}

/* 100d2500  FUN_100d2500  (54 bytes)
 * undefined FUN_100d2500(uint * param_1, byte.conflict * param_2)
 * called by: __fassign
 */
void __cdecl FUN_100d2500(uint *param_1,byte_conflict *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_100d3ac0(local_10,&local_14,param_2,0,0,0,0);
  FUN_100d2400(local_10,param_1);
  return;
}

/* 100d2540  FUN_100d2540  (54 bytes)
 * undefined FUN_100d2540(undefined4 * param_1, byte.conflict * param_2)
 */
void __cdecl FUN_100d2540(undefined4 *param_1,byte_conflict *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_100d3ac0(local_10,&local_14,param_2,1,0,0,0);
  FUN_100d2440(local_10,param_1);
  return;
}

/* 100d2580  FUN_100d2580  (54 bytes)
 * undefined FUN_100d2580(uint * param_1, byte.conflict * param_2)
 * called by: __fassign
 */
void __cdecl FUN_100d2580(uint *param_1,byte_conflict *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_100d3ac0(local_10,&local_14,param_2,0,0,0,0);
  FUN_100d2420(local_10,param_1);
  return;
}

