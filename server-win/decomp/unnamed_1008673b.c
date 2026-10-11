/* mp.dll - unnamed_1008673b (66 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1008673b  FUN_1008673b  (68 bytes)
 * undefined FUN_1008673b(undefined4 * param_1)
 * called by: FUN_1007fadf, FUN_10083266, FUN_10086a9f
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1008673b(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_102efcfc = _DAT_102efcfc + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}

/* 1008677f  FUN_1008677f  (41 bytes)
 * byte.conflict FUN_1008677f(uint param_1)
 * called by: FUN_1007fadf
 */
byte_conflict __cdecl FUN_1008677f(uint param_1)

{
  if (DAT_102f02c0 <= param_1) {
    return '\0';
  }
  return *(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

/* 100867a8  FUN_100867a8  (89 bytes)
 * int FUN_100867a8(LPSTR param_1, WCHAR param_2)
 * called by: FUN_1007fbf7
 */
int __cdecl FUN_100867a8(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_102f1308);
  bVar2 = DAT_102f1304 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_102f1308);
    FUN_10082ab6(0x13);
  }
  iVar1 = FUN_10086801(param_1,param_2);
  if (bVar2) {
    FUN_10082b17(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_102f1308);
  }
  return iVar1;
}

/* 10086801  FUN_10086801  (105 bytes)
 * int FUN_10086801(LPSTR param_1, WCHAR param_2)
 * called by: FUN_100867a8
 */
int __cdecl FUN_10086801(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_102efcdc == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_102efcec,0x220,&param_2,1,lpMultiByteStr,DAT_100a8324,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_10083d58();
  *pDVar2 = 0x2a;
  return -1;
}

/* 10086955  FUN_10086955  (93 bytes)
 * uint FUN_10086955(LPWSTR param_1, byte.conflict * param_2, uint param_3)
 * called by: FUN_10080401
 */
uint __cdecl FUN_10086955(LPWSTR param_1,byte_conflict *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_102f1308);
  bVar2 = DAT_102f1304 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_102f1308);
    FUN_10082ab6(0x13);
  }
  uVar1 = FUN_100869b2(param_1,param_2,param_3);
  if (bVar2) {
    FUN_10082b17(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_102f1308);
  }
  return uVar1;
}

/* 100869b2  FUN_100869b2  (201 bytes)
 * uint FUN_100869b2(LPWSTR param_1, byte.conflict * param_2, uint param_3)
 * called by: FUN_10086955
 */
uint __cdecl FUN_100869b2(LPWSTR param_1,byte_conflict *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((param_2 != (byte_conflict *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_102efcdc == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_100a8118[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_102efcec,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_100a8324) {
          if ((int)param_3 < (int)DAT_100a8324) goto LAB_10086a44;
          iVar2 = MultiByteToWideChar(DAT_102efcec,9,(LPCSTR)param_2,DAT_100a8324,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_100a8324;
          }
        }
        if ((DAT_100a8324 <= param_3) && (param_2[1] != '\0')) {
          return DAT_100a8324;
        }
      }
LAB_10086a44:
      pDVar3 = FUN_10083d58();
      *pDVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

/* 10086a9f  FUN_10086a9f  (110 bytes)
 * uint FUN_10086a9f(uint param_1, int * param_2)
 * called by: FUN_10080e77
 */
uint __cdecl FUN_10086a9f(uint param_1,int *param_2)

{
  uint uVar1;
  
  if ((param_1 != 0xffffffff) &&
     ((uVar1 = param_2[3], (uVar1 & 1) != 0 || (((uVar1 & 0x80) != 0 && ((uVar1 & 2) == 0)))))) {
    if (param_2[2] == 0) {
      FUN_1008673b(param_2);
    }
    if (*param_2 == param_2[2]) {
      if (param_2[1] != 0) {
        return 0xffffffff;
      }
      *param_2 = *param_2 + 1;
    }
    if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
      *param_2 = *param_2 + -1;
      *(char *)*param_2 = (char)param_1;
    }
    else {
      *param_2 = *param_2 + -1;
      if (*(char *)*param_2 != (char)param_1) {
        *param_2 = (int)((char *)*param_2 + 1);
        return 0xffffffff;
      }
    }
    param_2[1] = param_2[1] + 1;
    param_2[3] = param_2[3] & 0xffffffefU | 1;
    return param_1 & 0xff;
  }
  return 0xffffffff;
}

/* 10086b0d  FUN_10086b0d  (208 bytes)
 * undefined FUN_10086b0d(uint param_1, int * param_2, ushort * param_3)
 * called by: FUN_1008105a, __startOneArgErrorHandling
 */
void __cdecl FUN_10086b0d(uint param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_5c [10];
  undefined8 local_34;
  uint local_24;
  
  param_3 = (ushort *)(uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_10086b52:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_10086b52;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_10086ba8;
    }
    if (iVar2 != 8) goto LAB_10086ba8;
    uVar3 = 0x10;
  }
  bVar1 = FUN_100884cd(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_1008821a(local_5c,(uint *)&param_3,uVar3,param_1,(undefined8 *)(param_2 + 2),
                 (undefined8 *)(param_2 + 6));
  }
LAB_10086ba8:
  FUN_1008872c();
  if (((*param_2 != 8) && (DAT_100a8eb0 == 0)) && (iVar2 = FUN_1008870c(), iVar2 != 0)) {
    return;
  }
  FUN_100886e4(*param_2);
  return;
}

/* 10086bdd  FUN_10086bdd  (41 bytes)
 * float10 FUN_10086bdd(undefined8 param_1, short param_2)
 * called by: FUN_10086c60
 */
float10 __cdecl FUN_10086bdd(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}

/* 10086c06  FUN_10086c06  (90 bytes)
 * undefined4 FUN_10086c06(int param_1, uint param_2)
 * called by: FUN_10086d33
 */
undefined4 __cdecl FUN_10086c06(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}

/* 10086c60  FUN_10086c60  (193 bytes)
 * float10 FUN_10086c60(uint param_1, uint param_2, int * param_3)
 * called by: FUN_100884cd
 */
float10 __cdecl FUN_10086c60(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  undefined8 local_c;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      0.0) {
    iVar4 = 0;
    local_c = 0.0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    iVar4 = -0x3fd;
    if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar2 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar2;
      param_2._2_1_ = (byte)((uint)iVar2 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar2 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
      iVar4 = iVar4 + -1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar3) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    fVar5 = FUN_10086bdd(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
  }
  else {
    fVar5 = FUN_10086bdd(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
    iVar4 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
  }
  *param_3 = iVar4;
  return (float10)local_c;
}

/* 10086d33  FUN_10086d33  (146 bytes)
 * int FUN_10086d33(int param_1, uint param_2)
 * called by: FUN_100829bc
 */
int __cdecl FUN_10086d33(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_10086c06(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
                                                ) >> 0x20));
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar1 = 4;
      }
      else if (iVar1 == 3) {
        iVar1 = 2;
      }
      else {
        iVar1 = 1;
      }
      return iVar1;
    }
    return 0x200;
  }
  if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff90) + 0x80;
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == 0.0) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff08) + 0x100;
}

/* 10086dd0  FUN_10086dd0  (62 bytes)
 * int FUN_10086dd0(byte.conflict * param_1, byte.conflict * param_2)
 */
int __cdecl FUN_10086dd0(byte_conflict *param_1,byte_conflict *param_2)

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

/* 10086e10  FUN_10086e10  (58 bytes)
 * byte.conflict * FUN_10086e10(byte.conflict * param_1, byte.conflict * param_2)
 */
byte_conflict * __cdecl FUN_10086e10(byte_conflict *param_1,byte_conflict *param_2)

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

/* 10086ecb  FUN_10086ecb  (291 bytes)
 * uint FUN_10086ecb(void)
 * called by: FUN_1008723f
 */
uint FUN_10086ecb(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  uVar4 = 0xffffffff;
  FUN_10082ab6(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_102f01c0;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_10082ab6(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_10082b17(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          uVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (uVar4 != 0xffffffff) goto LAB_10086fdd;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x102f02bf < (int)piVar3) goto LAB_10086fdd;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_102f02c0 = DAT_102f02c0 + 0x20;
    (&DAT_102f01c0)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_102f01c0)[local_8];
    }
    uVar4 = local_8 << 5;
    FUN_1008712b(uVar4);
  }
LAB_10086fdd:
  FUN_10082b17(0x12);
  return uVar4;
}

/* 10086fee  FUN_10086fee  (124 bytes)
 * undefined4 FUN_10086fee(uint param_1, HANDLE param_2)
 * called by: FUN_1008723f
 */
undefined4 __cdecl FUN_10086fee(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_102f02c0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_102f01c0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_102efc1c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10087047;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_10087047:
      *(HANDLE *)((&DAT_102f01c0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_10083d58();
  *pDVar1 = 9;
  pDVar1 = FUN_10083d61();
  *pDVar1 = 0;
  return 0xffffffff;
}

/* 1008706a  FUN_1008706a  (127 bytes)
 * undefined4 FUN_1008706a(uint param_1)
 * called by: FUN_10083081
 */
undefined4 __cdecl FUN_1008706a(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_102f02c0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_102f01c0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_102efc1c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100870c6;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100870c6:
      *(undefined4 *)((&DAT_102f01c0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10083d58();
  *pDVar2 = 9;
  pDVar2 = FUN_10083d61();
  *pDVar2 = 0;
  return 0xffffffff;
}

/* 100870e9  FUN_100870e9  (66 bytes)
 * undefined4 FUN_100870e9(uint param_1)
 * called by: FUN_10083081, FUN_10083dcf, FUN_100871ac, FUN_10088981
 */
undefined4 __cdecl FUN_100870e9(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_102f02c0) &&
     ((*(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_102f01c0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10083d58();
  *pDVar1 = 9;
  pDVar1 = FUN_10083d61();
  *pDVar1 = 0;
  return 0xffffffff;
}

/* 1008712b  FUN_1008712b  (95 bytes)
 * undefined FUN_1008712b(uint param_1)
 * called by: FUN_10083024, FUN_1008357a, FUN_10083af5, FUN_10083d6a, FUN_10086ecb, FUN_100871ac
 */
void __cdecl FUN_1008712b(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_102f01c0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10082ab6(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10082b17(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_102f01c0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}

/* 1008718a  FUN_1008718a  (34 bytes)
 * undefined FUN_1008718a(uint param_1)
 * called by: FUN_10083024, FUN_1008357a, FUN_10083af5, FUN_10083d6a, FUN_100871ac, FUN_1008723f
 */
void __cdecl FUN_1008718a(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_102f01c0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

/* 100871ac  FUN_100871ac  (147 bytes)
 * undefined4 FUN_100871ac(uint param_1)
 * called by: FUN_1008312f
 */
undefined4 __cdecl FUN_100871ac(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_102f02c0 <= param_1) {
LAB_1008722d:
    pDVar3 = FUN_10083d58();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1008722d;
  FUN_1008712b(param_1);
  if ((*(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_100870e9(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10087222;
    pDVar3 = FUN_10083d61();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10083d58();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10087222:
  FUN_1008718a(param_1);
  return uVar5;
}

/* 1008723f  FUN_1008723f  (719 bytes)
 * uint FUN_1008723f(LPCSTR param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_10083342
 */
uint __cdecl FUN_1008723f(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD *pDVar4;
  HANDLE hFile;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar8 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar8) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar8;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_102efeb4 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) goto LAB_10087343;
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) goto LAB_10087343;
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_1008735d;
      if (uVar2 != 0x300) goto LAB_10087343;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_1008735d:
        local_c = 5;
        goto LAB_1008736d;
      }
      if (uVar2 != 0x700) {
LAB_10087343:
        pDVar4 = FUN_10083d58();
        *pDVar4 = 0x16;
        pDVar4 = FUN_10083d61();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_1008736d:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_102efc20 & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_10086ecb();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_10083d58();
    *pDVar4 = 0x18;
    pDVar4 = FUN_10083d61();
    *pDVar4 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar5 = GetFileType(hFile);
    if (DVar5 != 0) {
      if (DVar5 == 2) {
        local_5 = local_5 | 0x40;
      }
      else if (DVar5 == 3) {
        local_5 = local_5 | 8;
      }
      FUN_10086fee(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_102f01c0)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_10083dcf(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_10083d61();
          if (*pDVar4 == 0x83) goto LAB_100874e7;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_100835df(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) ||
              (iVar6 = FUN_10088981(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_10083dcf(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_100874e7;
        }
        FUN_10083024(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_100874e7:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_102f01c0)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_10087500;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_10083ce5(DVar5);
  uVar2 = 0xffffffff;
LAB_10087500:
  FUN_1008718a(uVar3);
  return uVar2;
}

/* 1008750e  FUN_1008750e  (429 bytes)
 * undefined4 FUN_1008750e(int param_1)
 * called by: FUN_100878e6
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1008750e(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_10082ab6(0x19);
  CodePage = FUN_100876bb(param_1);
  if (CodePage != DAT_102eff80) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100a8ce8;
LAB_1008754b:
      if (*pUVar5 != CodePage) goto code_r0x1008754f;
      local_8 = 0;
      puVar15 = &DAT_102f00a0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100a8cf8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100a8ce0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_102f00a0 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      _DAT_102eff9c = 1;
      DAT_102eff80 = CodePage;
      DAT_102f01a4 = FUN_10087705(CodePage);
      DAT_102eff90 = *(undefined4 *)(iVar12 + 0x100a8cec);
      DAT_102eff94 = *(undefined4 *)(iVar12 + 0x100a8cf0);
      DAT_102eff98 = *(undefined4 *)(iVar12 + 0x100a8cf4);
      goto LAB_1008769f;
    }
    goto LAB_1008769a;
  }
  goto LAB_10087535;
code_r0x1008754f:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100a8dd7 < (int)pUVar5) goto code_r0x1008755a;
  goto LAB_1008754b;
code_r0x1008755a:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_102f01a4 = 0;
    puVar15 = &DAT_102f00a0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_102eff9c = 0;
      DAT_102eff80 = CodePage;
    }
    else {
      DAT_102eff80 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_102f00a0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_102f00a0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_102f01a4 = FUN_10087705(CodePage);
      _DAT_102eff9c = 1;
    }
    DAT_102eff90 = 0;
    DAT_102eff94 = 0;
    DAT_102eff98 = 0;
  }
  else {
    if (DAT_102efe80 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100876ac;
    }
LAB_1008769a:
    FUN_10087738();
  }
LAB_1008769f:
  FUN_10087761();
LAB_10087535:
  uVar14 = 0;
LAB_100876ac:
  FUN_10082b17(0x19);
  return uVar14;
}

/* 100876bb  FUN_100876bb  (74 bytes)
 * int FUN_100876bb(int param_1)
 * called by: FUN_1008750e
 */
int __cdecl FUN_100876bb(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_102efe80 = 1;
                    /* WARNING: Could not recover jumptable at 0x100876d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_102efe80 = 1;
                    /* WARNING: Could not recover jumptable at 0x100876ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_102efcec;
  }
  DAT_102efe80 = (uint)bVar2;
  return param_1;
}

/* 10087705  FUN_10087705  (51 bytes)
 * undefined4 FUN_10087705(int param_1)
 * called by: FUN_1008750e
 */
undefined4 __cdecl FUN_10087705(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}

/* 10087738  FUN_10087738  (41 bytes)
 * undefined FUN_10087738(void)
 * called by: FUN_1008750e
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087738(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102f00a0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_102eff80 = 0;
  _DAT_102eff9c = 0;
  DAT_102f01a4 = 0;
  DAT_102eff90 = 0;
  DAT_102eff94 = 0;
  DAT_102eff98 = 0;
  return;
}

/* 10087761  FUN_10087761  (389 bytes)
 * undefined FUN_10087761(void)
 * called by: FUN_1008750e
 */
void FUN_10087761(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_102eff80,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_10082d7b(1,local_118,0x100,local_518,DAT_102eff80,DAT_102f01a4,0);
    FUN_10082b2c(DAT_102f01a4,0x100,local_118,0x100,local_218,0x100,DAT_102eff80,0);
    FUN_10082b2c(DAT_102f01a4,0x200,local_118,0x100,local_318,0x100,DAT_102eff80,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_102f00a0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1008786d;
        }
        (&DAT_102effa0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_102f00a0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1008786d:
        (&DAT_102effa0)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_102f00a0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_100878b7;
        }
        (&DAT_102effa0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_102f00a0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_100878b7:
        (&DAT_102effa0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}

/* 100878e6  FUN_100878e6  (28 bytes)
 * undefined FUN_100878e6(void)
 * called by: FUN_10084e23, FUN_10084edc
 */
void FUN_100878e6(void)

{
  if (DAT_102f1310 == 0) {
    FUN_1008750e(-3);
    DAT_102f1310 = 1;
  }
  return;
}

/* 10087902  FUN_10087902  (137 bytes)
 * int FUN_10087902(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10085294
 */
int __cdecl FUN_10087902(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_102efe84 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_102efe84 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_102efe84 != (FARPROC)0x0) {
        DAT_102efe88 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_102efe8c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10087951;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10087951:
    if (DAT_102efe88 != (FARPROC)0x0) {
      iVar1 = (*DAT_102efe88)();
      if ((iVar1 != 0) && (DAT_102efe8c != (FARPROC)0x0)) {
        iVar1 = (*DAT_102efe8c)(iVar1);
      }
    }
    iVar1 = (*DAT_102efe84)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

/* 1008798b  FUN_1008798b  (386 bytes)
 * undefined4 FUN_1008798b(DWORD * param_1)
 * called by: FUN_10086724
 */
undefined4 __cdecl FUN_1008798b(DWORD *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  DWORD local_10;
  DWORD local_c;
  
  bVar1 = false;
  if (param_1 == (DWORD *)0x2) {
    puVar7 = &DAT_102efe90;
    pcVar6 = DAT_102efe90;
LAB_10087a11:
    bVar1 = true;
    FUN_10082ab6(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_102efe9c;
        pcVar6 = DAT_102efe9c;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_102efe94;
        pcVar6 = DAT_102efe94;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_102efe98;
        pcVar6 = DAT_102efe98;
      }
      goto LAB_10087a11;
    }
    pDVar2 = FUN_1007f921();
    uVar3 = FUN_10087b0d((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_10082b17(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_10082b17(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)0x8) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_10087a85;
    }
  }
  else {
LAB_10087a85:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_100a8c98 < DAT_100a8c9c + DAT_100a8c98) {
        iVar4 = DAT_100a8c98 * 0xc;
        iVar5 = DAT_100a8c98;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_100a8c9c + DAT_100a8c98);
      }
      goto LAB_10087ac3;
    }
  }
  *puVar7 = 0;
LAB_10087ac3:
  if (bVar1) {
    FUN_10082b17(1);
  }
  if (param_1 == (DWORD *)0x8) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)0x8) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}

/* 10087b0d  FUN_10087b0d  (61 bytes)
 * uint FUN_10087b0d(int param_1, uint param_2)
 * called by: FUN_1008798b
 */
uint __cdecl FUN_10087b0d(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_100a8ca4 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_100a8ca4 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}

/* 10087b4a  FUN_10087b4a  (33 bytes)
 * undefined4 FUN_10087b4a(uint param_1, uint param_2, uint * param_3)
 * called by: FUN_100856d0, FUN_10087f7e, ___add_12
 */
undefined4 __cdecl FUN_10087b4a(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}

/* 10087bc9  FUN_10087bc9  (46 bytes)
 * undefined FUN_10087bc9(uint * param_1)
 * called by: FUN_10087c24, FUN_10087ceb, FUN_10087f7e
 */
void __cdecl FUN_10087bc9(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}

/* 10087bf7  FUN_10087bf7  (45 bytes)
 * undefined FUN_10087bf7(uint * param_1)
 * called by: FUN_10087ceb, FUN_10087f7e
 */
void __cdecl FUN_10087bf7(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}

/* 10087c24  FUN_10087c24  (199 bytes)
 * undefined FUN_10087c24(char * param_1, int param_2, uint * param_3)
 * called by: FUN_1008602e
 */
void __cdecl FUN_10087c24(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_10087bc9(puVar1);
      FUN_10087bc9(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_10087bc9(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_10087bc9(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}

/* 10087ceb  FUN_10087ceb  (659 bytes)
 * undefined4 FUN_10087ceb(uint param_1, uint param_2, uint param_3, int param_4, byte.conflict param_5, short * param_6)
 * called by: FUN_10085aea
 */
undefined4 __cdecl
FUN_10087ceb(uint param_1,uint param_2,uint param_3,int param_4,byte_conflict param_5,short *param_6
            )

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar3 = param_6;
  uVar5 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar5 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_10087de0;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_10087de0:
            pcVar11 = "1#QNAN";
            goto LAB_10087de5;
          }
          pcVar11 = "1#IND";
        }
        FUN_10085c00((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_10087de5:
        FUN_10085c00((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar5;
    cStack_9 = (char)(uVar5 >> 8);
    sVar8 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                   0x10);
    local_e = param_2;
    local_12 = param_1;
    FUN_1008819e((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_10087f7e((int *)&local_14,(int *)&local_20);
    }
    *psVar3 = sVar8;
    iVar10 = param_4;
    if (((param_5 & 1) == 0) || (iVar10 = param_4 + sVar8, 0 < param_4 + sVar8)) {
      if (0x15 < iVar10) {
        iVar10 = 0x15;
      }
      iVar9 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_10087bc9((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10087bf7((uint *)&local_14);
        }
      }
      param_4 = iVar10 + 1;
      psVar6 = psVar3 + 2;
      param_6 = psVar6;
      uVar5 = local_12;
      uVar2 = local_e;
      if (0 < param_4) {
        do {
          local_e._2_2_ = (undefined2)(uVar2 >> 0x10);
          local_e._0_2_ = (undefined2)uVar2;
          local_12._2_2_ = (undefined2)(uVar5 >> 0x10);
          local_12._0_2_ = (undefined2)uVar5;
          param_1 = CONCAT22((undefined2)local_12,local_14);
          param_2 = CONCAT22((undefined2)local_e,local_12._2_2_);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
          local_12 = uVar5;
          local_e = uVar2;
          FUN_10087bc9((uint *)&local_14);
          FUN_10087bc9((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_10087bc9((uint *)&local_14);
          cVar4 = cStack_9;
          cStack_9 = '\0';
          psVar6 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar4 + '0';
          param_6 = psVar6;
          uVar5 = local_12;
          uVar2 = local_e;
        } while (param_4 != 0);
      }
      psVar7 = psVar6 + -1;
      psVar1 = psVar3 + 2;
      if ('4' < *(char *)((int)psVar6 + -1)) {
        for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
          if ((char)*psVar7 != '9') {
            if (psVar1 <= psVar7) goto LAB_10087f3d;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_10087f3d:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_10087f3f:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_10087f3f;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_10087f75;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_10087f75:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}

/* 10087f7e  FUN_10087f7e  (544 bytes)
 * undefined FUN_10087f7e(int * param_1, int * param_2)
 * called by: FUN_10087ceb, FUN_1008819e
 */
void __cdecl FUN_10087f7e(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int *local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_10088021:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_10088021;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_10087b4a(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                                 (uint *)(local_8 + -2));
            if (iVar8 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_100880d5:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_10087bf7((uint *)&local_28);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_10087bc9((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_100880d5;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar2 = CONCAT11(bStack_1d,uStack_1e), iVar3 = CONCAT22(local_20,uStack_22),
         iVar8 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_1d,uStack_1e);
            iVar3 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_24,uStack_26) + 1;
          sVar2 = CONCAT11(bStack_1d,uStack_1e);
          iVar3 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar8 >> 0x10);
      uStack_26 = (undefined2)iVar8;
      local_20 = (undefined2)((uint)iVar3 >> 0x10);
      uStack_22 = (undefined2)iVar3;
      bStack_1d = (byte)((ushort)sVar2 >> 8);
      uStack_1e = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_1008817e;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1008817e:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}

/* 1008819e  FUN_1008819e  (124 bytes)
 * undefined FUN_1008819e(int * param_1, uint param_2, int param_3)
 * called by: FUN_1008602e, FUN_10087ceb
 */
void __cdecl FUN_1008819e(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_s_November_100a8f60;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x100a90c0;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        ppuVar4 = ppuVar3 + uVar2 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar2 * 3)) {
          local_10 = SUB42(*ppuVar4,0);
          local_e._0_2_ = (undefined2)((uint)*ppuVar4 >> 0x10);
          local_e._2_2_ = SUB42(ppuVar4[1],0);
          uStack_a = (undefined2)((uint)ppuVar4[1] >> 0x10);
          puStack_8 = ppuVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          ppuVar4 = (undefined **)&local_10;
        }
        FUN_10087f7e(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}

/* 1008821a  FUN_1008821a  (691 bytes)
 * undefined FUN_1008821a(uint * param_1, uint * param_2, uint param_3, uint param_4, undefined8 * param_5, undefined8 * param_6)
 * called by: FUN_10086b0d
 */
void __cdecl
FUN_1008821a(uint *param_1,uint *param_2,uint param_3,uint param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_3 = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((uVar3 & 2) != 0) {
    param_3 = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((uVar3 & 1) != 0) {
    param_3 = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((uVar3 & 4) != 0) {
    param_3 = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_3 = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = (~*param_2 & 1) << 4 | param_1[2] & 0xffffffef;
  param_1[2] = (~*param_2 & 4) << 1 | param_1[2] & 0xfffffff7;
  param_1[2] = ~*param_2 >> 1 & 4 | param_1[2] & 0xfffffffb;
  param_1[2] = ~*param_2 >> 3 & 2 | param_1[2] & 0xfffffffd;
  param_1[2] = ~*param_2 >> 5 & 1 | param_1[2] & 0xfffffffe;
  uVar3 = FUN_1008870f();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_1008838f;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_1008838f:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_100883c5:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_100883c5;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = (param_4 & 0xfff) << 5 | *param_1 & 0xfffe001f;
  param_1[8] = param_1[8] | 1;
  param_1[8] = param_1[8] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 4) = *param_5;
  param_1[0x14] = param_1[0x14] | 1;
  param_1[0x14] = param_1[0x14] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 0x10) = *param_6;
  FUN_1008871d();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) | 0xc;
        }
        goto LAB_1008849a;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_1008849a:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_100884c3;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_100884c3:
  *puVar2 = *(undefined8 *)(param_1 + 0x10);
  return;
}

/* 100884cd  FUN_100884cd  (535 bytes)
 * bool FUN_100884cd(uint param_1, double * param_2, uint param_3)
 * called by: FUN_10086b0d
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_100884cd(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  undefined8 local_10;
  int local_8;
  
  uVar3 = param_1 & 0x1f;
  bVar2 = true;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_1008874f();
    uVar3 = param_1 & 0x17;
    goto LAB_100886c2;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_1008874f();
    uVar3 = param_1 & 0x1b;
    goto LAB_100886c2;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      dVar1 = *param_2;
      if (dVar1 != 0.0) {
        fVar5 = FUN_10086c60(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20),&local_8);
        local_8 = local_8 + -0x600;
        if (local_8 < -0x432) {
          local_10 = 0.0;
          bVar4 = bVar2;
        }
        else {
          local_10 = (double)(ulonglong)
                             (SUB87((double)fVar5,0) & 0xfffffffffffff | 0x10000000000000);
          if (local_8 < -0x3fd) {
            local_8 = -0x3fd - local_8;
            do {
              if ((((ulonglong)local_10 & 1) != 0) && (!bVar4)) {
                bVar4 = bVar2;
              }
              uVar3 = (uint)local_10 >> 1;
              if (((ulonglong)local_10 & 0x100000000) != 0) {
                local_10._3_1_ = (byte)((ulonglong)local_10 >> 0x18) >> 1;
                local_10._0_3_ = (undefined3)uVar3;
                local_10._0_4_ = CONCAT13(local_10._3_1_,(undefined3)local_10) | 0x80000000;
                uVar3 = (uint)local_10;
              }
              local_10._0_4_ = uVar3;
              local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
          }
          if ((double)fVar5 < 0.0) {
            local_10 = -local_10;
          }
        }
        *param_2 = local_10;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_1008874f();
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_100886c2;
  }
  FUN_1008874f();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_100a8cb0;
  if (uVar3 == 0) {
    if (*param_2 <= 0.0) {
      dVar1 = -_DAT_100a8cb0;
    }
LAB_100885e2:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_100a8cc0;
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_100a8cb0;
      }
      goto LAB_100885e2;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_100a8cc0;
      }
      goto LAB_100885e2;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_100a8cc0;
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_100a8cc0;
      }
      goto LAB_100885e2;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_100886c2:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_1008874f();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}

/* 100886e4  FUN_100886e4  (40 bytes)
 * undefined FUN_100886e4(int param_1)
 * called by: FUN_10086b0d
 */
void __cdecl FUN_100886e4(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_10083d58();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_10083d58();
    *pDVar1 = 0x22;
    return;
  }
  return;
}

/* 1008870c  FUN_1008870c  (3 bytes)
 * undefined4 FUN_1008870c(void)
 * called by: FUN_10086b0d
 */
undefined4 FUN_1008870c(void)

{
  return 0;
}

/* 1008870f  FUN_1008870f  (14 bytes)
 * int FUN_1008870f(void)
 * called by: FUN_1008821a
 */
int FUN_1008870f(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

/* 1008871d  FUN_1008871d  (15 bytes)
 * int FUN_1008871d(void)
 * called by: FUN_1008821a
 */
int FUN_1008871d(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

/* 1008872c  FUN_1008872c  (35 bytes)
 * int FUN_1008872c(void)
 * called by: FUN_10086b0d
 */
int FUN_1008872c(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}

/* 1008874f  FUN_1008874f  (86 bytes)
 * undefined FUN_1008874f(void)
 * called by: FUN_100884cd
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008874f(void)

{
  return;
}

/* 100887b0  FUN_100887b0  (208 bytes)
 * uint FUN_100887b0(byte.conflict * param_1, byte.conflict * param_2)
 * called by: CBreakable::KeyValue, CHalfLifeMultiplay::ChangeLevel, CHalfLifeMultiplay::ClientUserInfoChanged, CHalfLifeMultiplay::IsValidTeam, CHalfLifeTeamplay::ClientUserInfoChanged, CHalfLifeTeamplay::PlayerRelationship, CTSGameRules::GetTeamIndex, CTSSharedEmitter::EmitterKeyValue, CTSSharedEmitter::ParticleKeyValue, CTSWind::KeyValue, CVoiceGameMgr::ClientCommand, CWeaponBox::GiveAmmo, ... (23 total)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_100887b0(void *this,byte_conflict *param_1,byte_conflict *param_2)

{
  byte_conflict bVar1;
  byte_conflict bVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  uint uVar10;
  uint uVar11;
  uint uVar9;
  
  iVar4 = _DAT_102f1308;
  if (DAT_102efcdc == 0) {
    bVar7 = 0xff;
    do {
      do {
        cVar8 = '\0';
        if (bVar7 == 0) goto LAB_100887fe;
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
LAB_100887fe:
    uVar9 = (uint)cVar8;
  }
  else {
    LOCK();
    _DAT_102f1308 = _DAT_102f1308 + 1;
    UNLOCK();
    bVar3 = 0 < DAT_102f1304;
    if (bVar3) {
      LOCK();
      UNLOCK();
      _DAT_102f1308 = iVar4;
      FUN_10082ab6(0x13);
      this = extraout_ECX;
    }
    uVar11 = (uint)bVar3;
    uVar9 = 0xff;
    uVar10 = 0;
    do {
      do {
        if ((char)uVar9 == '\0') goto LAB_1008885f;
        bVar1 = *param_2;
        uVar9 = CONCAT31((int3)(uVar9 >> 8),bVar1);
        param_2 = param_2 + 1;
        bVar2 = *param_1;
        uVar10 = CONCAT31((int3)(uVar10 >> 8),bVar2);
        param_1 = param_1 + 1;
      } while (bVar1 == bVar2);
      uVar10 = FUN_100855bc(this,uVar10);
      uVar9 = FUN_100855bc(this_00,uVar9);
      this = extraout_ECX_00;
    } while ((byte)uVar10 == (byte)uVar9);
    uVar10 = (uint)((byte)uVar10 < (byte)uVar9);
    uVar9 = (1 - uVar10) - (uint)(uVar10 != 0);
LAB_1008885f:
    if (uVar11 == 0) {
      LOCK();
      _DAT_102f1308 = _DAT_102f1308 + -1;
      UNLOCK();
    }
    else {
      FUN_10082b17(0x13);
    }
  }
  return uVar9;
}

/* 10088880  FUN_10088880  (257 bytes)
 * undefined4 FUN_10088880(byte.conflict * param_1, char * param_2, void * param_3)
 * called by: TEXTURETYPE_Find, pfnPM_FindTextureType
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10088880(byte_conflict *param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_102f1308;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_102efcdc == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_100888df;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_100888df:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_102f1308 = _DAT_102f1308 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_102f1304;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_102f1308 = iVar2;
        FUN_10082ab6(0x13);
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
        uVar7 = FUN_100855bc(param_3,uVar7);
        uVar5 = FUN_100855bc(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10088955;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10088955:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_102f1308 = _DAT_102f1308 + -1;
        UNLOCK();
      }
      else {
        FUN_10082b17(0x13);
      }
    }
  }
  return uVar6;
}

/* 10088981  FUN_10088981  (293 bytes)
 * int FUN_10088981(uint param_1, int param_2)
 * called by: FUN_1008723f
 */
int __cdecl FUN_10088981(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  DWORD *pDVar6;
  HANDLE hFile;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_1007e2e0();
  iVar8 = 0;
  DVar1 = FUN_10083dcf(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_10083dcf(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_10083dcf(param_1,param_2,0);
        hFile = (HANDLE)FUN_100870e9(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_10083d58();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_10083d61();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x100889ee;
      iVar3 = FUN_10088aa6(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_10083b5a(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_10083d61();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_10083d58();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_10088aa6(param_1,iVar3);
    }
    FUN_10083dcf(param_1,DVar1,0);
  }
  return iVar8;
}

/* 10088aa6  FUN_10088aa6  (97 bytes)
 * int FUN_10088aa6(uint param_1, int param_2)
 * called by: FUN_10088981
 */
int __cdecl FUN_10088aa6(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_10083d58();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}

/* 10088b16  FUN_10088b16  (308 bytes)
 * uint * FUN_10088b16(uint * param_1)
 * called by: Host_Say
 */
uint * __cdecl FUN_10088b16(uint *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  LPWSTR local_c;
  
  local_c = (LPWSTR)0x0;
  if (DAT_102efcdc == 0) {
    cVar1 = (char)*param_1;
    puVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = (char)*puVar3;
      if (('@' < cVar1) && (cVar1 < '[')) {
        *(char *)puVar3 = cVar1 + ' ';
      }
      puVar3 = (uint *)((int)puVar3 + 1);
      cVar1 = *(char *)puVar3;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_102f1308);
    bVar4 = DAT_102f1304 == 0;
    if (!bVar4) {
      InterlockedDecrement((LONG *)&DAT_102f1308);
      FUN_10082ab6(0x13);
    }
    if (DAT_102efcdc == 0) {
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_102f1308);
      }
      else {
        FUN_10082b17(0x13);
      }
      cVar1 = (char)*param_1;
      puVar3 = param_1;
      while (cVar1 != '\0') {
        cVar1 = (char)*puVar3;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *(char *)puVar3 = cVar1 + ' ';
        }
        puVar3 = (uint *)((int)puVar3 + 1);
        cVar1 = *(char *)puVar3;
      }
    }
    else {
      _Size = FUN_10082b2c(DAT_102efcdc,0x100,(char *)param_1,-1,(LPWSTR)0x0,0,0,1);
      if (((_Size != 0) && (local_c = _malloc(_Size), local_c != (LPWSTR)0x0)) &&
         (iVar2 = FUN_10082b2c(DAT_102efcdc,0x100,(char *)param_1,-1,local_c,_Size,0,1), iVar2 != 0)
         ) {
        FUN_10085c00(param_1,(uint *)local_c);
      }
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_102f1308);
      }
      else {
        FUN_10082b17(0x13);
      }
      FUN_1007e869(local_c);
    }
  }
  return param_1;
}

/* 10088c58  FUN_10088c58  (10 bytes)
 * undefined FUN_10088c58()
 */
void FUN_10088c58(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088c86  FUN_10088c86  (10 bytes)
 * undefined FUN_10088c86()
 */
void FUN_10088c86(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088c98  FUN_10088c98  (10 bytes)
 * undefined FUN_10088c98()
 */
void FUN_10088c98(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088cb8  FUN_10088cb8  (10 bytes)
 * undefined FUN_10088cb8()
 */
void FUN_10088cb8(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088ce1  FUN_10088ce1  (10 bytes)
 * undefined FUN_10088ce1()
 */
void FUN_10088ce1(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088d01  FUN_10088d01  (10 bytes)
 * undefined FUN_10088d01()
 */
void FUN_10088d01(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088d21  FUN_10088d21  (10 bytes)
 * undefined FUN_10088d21()
 */
void FUN_10088d21(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088d41  FUN_10088d41  (10 bytes)
 * undefined FUN_10088d41()
 */
void FUN_10088d41(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088d61  FUN_10088d61  (10 bytes)
 * undefined FUN_10088d61()
 */
void FUN_10088d61(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088d9c  FUN_10088d9c  (10 bytes)
 * undefined FUN_10088d9c()
 */
void FUN_10088d9c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088dc1  FUN_10088dc1  (10 bytes)
 * undefined FUN_10088dc1()
 */
void FUN_10088dc1(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088ddb  FUN_10088ddb  (10 bytes)
 * undefined FUN_10088ddb()
 */
void FUN_10088ddb(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088e01  FUN_10088e01  (10 bytes)
 * undefined FUN_10088e01()
 */
void FUN_10088e01(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088e18  FUN_10088e18  (10 bytes)
 * undefined FUN_10088e18()
 */
void FUN_10088e18(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

/* 10088e38  FUN_10088e38  (10 bytes)
 * undefined FUN_10088e38()
 */
void FUN_10088e38(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1007d4b5(param_1,param_2,param_3,param_4);
  return;
}

