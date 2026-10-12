/* client.dll - unnamed_10020ca0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10020ca0  FUN_10020ca0  (16 bytes)
 * undefined FUN_10020ca0(void)
 */
void FUN_10020ca0(void)

{
  return;
}

/* 10020cc0  FUN_10020cc0  (1326 bytes)
 * undefined FUN_10020cc0(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10020cc0(void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uStack_c4;
  undefined4 uStack_b0;
  float fStack_80;
  undefined1 local_2c [36];
  void *local_8;
  
  local_8 = param_1;
  if ((DAT_10299301 & 1) == 0) {
    DAT_10299301 = DAT_10299301 | 1;
    thunk_FUN_10007fe0(&DAT_10299240);
    FUN_100bc490(0x10021380);
  }
  if ((DAT_10299301 & 2) == 0) {
    DAT_10299301 = DAT_10299301 | 2;
    thunk_FUN_10007fe0(&DAT_10299270);
    FUN_100bc490(0x10021360);
  }
  if ((DAT_10299301 & 4) == 0) {
    DAT_10299301 = DAT_10299301 | 4;
    thunk_FUN_10007fe0(&DAT_102992f0);
    FUN_100bc490(0x10021340);
  }
  if (*(int *)(*(int *)((int)local_8 + 0xbc) + 8) == 0) {
    if ((*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x03') &&
       (*(char *)(*(int *)((int)local_8 + 0xbc) + 0x24) != '\0')) {
      fStack_80._0_1_ = '\x01';
    }
    else {
      fStack_80._0_1_ = '\0';
    }
    DAT_1029924c = fStack_80._0_1_;
    if (*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x01') {
      _DAT_102996ac = 0.1;
    }
    else {
      uVar1 = thunk_FUN_1001d5f0(*(int *)((int)local_8 + 0x70));
      if (uVar1 == 0) {
        fStack_80 = 1.875;
      }
      else {
        fStack_80 = 1.75;
      }
      _DAT_102996ac =
           *(float *)(*(int *)((int)local_8 + 0xc0) + 0x18) *
           (float)(double)((ulonglong)(uint)fStack_80 << 0x20);
    }
    uVar1 = thunk_FUN_1001d590(*(int *)((int)local_8 + 0x70));
    if (uVar1 == 0) {
      fVar4 = thunk_FUN_100261b0(*(int *)((int)local_8 + 0x70));
      _DAT_102996ac = (float)(fVar4 * (float10)_DAT_102996ac);
    }
    else {
      _DAT_102996ac = _DAT_102996ac / 0.15;
    }
    fVar4 = thunk_FUN_1003fb80();
    *(float *)((int)local_8 + 0x8c) = (float)(fVar4 + (float10)_DAT_102996ac);
    fVar4 = thunk_FUN_1003fb80();
    *(float *)((int)local_8 + 0x98) = (float)(fVar4 + (float10)2.0);
    if ((0 < *(int *)(*(int *)((int)local_8 + 0xbc) + 4)) || (DAT_1029924c != '\0')) {
      if ((DAT_1029924c == '\0') &&
         (uVar1 = thunk_FUN_1001d5c0(*(int *)((int)local_8 + 0x70)), uVar1 == 0)) {
        *(int *)(*(int *)((int)local_8 + 0xbc) + 4) =
             *(int *)(*(int *)((int)local_8 + 0xbc) + 4) + -1;
      }
      puVar2 = (undefined4 *)(**(code **)(**(int **)((int)local_8 + 0x70) + 0x144))();
      _DAT_10299240 = *puVar2;
      _DAT_10299244 = puVar2[1];
      _DAT_10299248 = puVar2[2];
      _DAT_10299270 = *(undefined4 *)(DAT_102906d4 + 0x28);
      _DAT_10299274 = *(undefined4 *)(DAT_102906d4 + 0x2c);
      _DAT_10299278 = *(undefined4 *)(DAT_102906d4 + 0x30);
      if (DAT_1029924c == '\0') {
        thunk_FUN_1000cae0(&uStack_b0,*(undefined4 *)(*(int *)((int)local_8 + 0xc0) + 0x28),
                           *(undefined4 *)(*(int *)((int)local_8 + 0xc0) + 0x28),
                           *(undefined4 *)(*(int *)((int)local_8 + 0xc0) + 0x28));
        uStack_c4 = 0x10020fc5;
        thunk_FUN_10015ce0(&stack0xffffff44,(undefined4 *)&DAT_10299270);
        thunk_FUN_10015ce0(&stack0xffffff38,(undefined4 *)&DAT_10299240);
        puVar2 = thunk_FUN_100262c0(local_2c,*(byte_conflict *)
                                              (*(int *)((int)local_8 + 0xc0) + 0x24));
        DAT_102992f0 = *puVar2;
        DAT_102992f4 = puVar2[1];
        _DAT_102992f8 = puVar2[2];
        if (*(char *)(*(int *)((int)local_8 + 0xc0) + 0x38) != '\0') {
          if (*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x01') {
            fStack_80 = 1.3;
          }
          else {
            fStack_80 = 1.0;
          }
          uStack_b0 = 0x1002107c;
          thunk_FUN_1001e8e0(local_8,fStack_80 * *(float *)(*(int *)((int)local_8 + 0xc0) + 0x30),
                             (uint)*(byte *)(*(int *)((int)local_8 + 0xc0) + 0x360),'\0');
        }
      }
      if (DAT_1029924c == '\0') {
        thunk_FUN_10015740(&stack0xffffff48,&DAT_1028ffec);
        thunk_FUN_10015740(&uStack_c4,&DAT_1028ffec);
        uVar6 = 0;
        uVar5 = *(undefined2 *)((int)local_8 + 0xd04);
        uVar3 = thunk_FUN_10020720();
        thunk_FUN_1001d620(*(undefined4 *)((int)local_8 + 0x70),1,uVar3,uVar5,uVar6);
      }
      else {
        thunk_FUN_10015740(&stack0xffffff48,&DAT_1028ffec);
        thunk_FUN_10015740(&uStack_c4,&DAT_1028ffec);
        uVar6 = 0;
        uVar5 = *(undefined2 *)((int)local_8 + 0xd0a);
        uVar3 = thunk_FUN_10020720();
        thunk_FUN_1001d620(*(undefined4 *)((int)local_8 + 0x70),1,uVar3,uVar5,uVar6);
      }
      if (*(char *)(*(int *)((int)local_8 + 0xbc) + 0x24) == '\0') {
        *(undefined1 *)(*(int *)((int)local_8 + 0xbc) + 0x24) = 1;
      }
      else {
        *(undefined1 *)(*(int *)((int)local_8 + 0xbc) + 0x24) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(*(int *)((int)local_8 + 0xbc) + 8) = 2;
  }
  return;
}

/* 10021340  FUN_10021340  (16 bytes)
 * undefined FUN_10021340(void)
 */
void FUN_10021340(void)

{
  return;
}

/* 10021360  FUN_10021360  (16 bytes)
 * undefined FUN_10021360(void)
 */
void FUN_10021360(void)

{
  return;
}

/* 10021380  FUN_10021380  (16 bytes)
 * undefined FUN_10021380(void)
 */
void FUN_10021380(void)

{
  return;
}

/* 100213a0  FUN_100213a0  (1685 bytes)
 * undefined FUN_100213a0(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100213a0(void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uStack_c0;
  undefined4 uStack_ac;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined1 local_2c [36];
  void *local_8;
  
  local_8 = param_1;
  if ((DAT_10299300 & 1) == 0) {
    DAT_10299300 = DAT_10299300 | 1;
    thunk_FUN_10007fe0(&DAT_10299250);
    FUN_100bc490(0x10021c20);
  }
  if ((DAT_10299300 & 2) == 0) {
    DAT_10299300 = DAT_10299300 | 2;
    thunk_FUN_10007fe0(&DAT_1029927c);
    FUN_100bc490(0x10021c00);
  }
  if ((DAT_10299300 & 4) == 0) {
    DAT_10299300 = DAT_10299300 | 4;
    thunk_FUN_10015ce0(&DAT_10299224,&DAT_1028ffec);
    FUN_100bc490(0x10021be0);
  }
  uVar1 = thunk_FUN_1001d5c0(*(int *)((int)local_8 + 0x70));
  if ((uVar1 == 0) &&
     (*(int *)(*(int *)((int)local_8 + 0xbc) + 4) = *(int *)(*(int *)((int)local_8 + 0xbc) + 4) + -1
     , *(short *)(*(int *)((int)local_8 + 0xc0) + 0xc6) != -1)) {
    *(int *)((int)local_8 + *(short *)(*(int *)((int)local_8 + 0xc0) + 0xc6) * 0x30 + 0x108) =
         *(int *)((int)local_8 + *(short *)(*(int *)((int)local_8 + 0xc0) + 0xc6) * 0x30 + 0x108) +
         -1;
    *(undefined4 *)((int)local_8 + *(short *)(*(int *)((int)local_8 + 0xc0) + 0xc6) * 0x30 + 0x120)
         = *(undefined4 *)(*(int *)((int)local_8 + 0xbc) + 4);
    if (*(int *)((int)local_8 + *(short *)(*(int *)((int)local_8 + 0xc0) + 0xc6) * 0x30 + 0x108) < 0
       ) {
      *(undefined4 *)
       ((int)local_8 + *(short *)(*(int *)((int)local_8 + 0xc0) + 0xc6) * 0x30 + 0x108) = 0;
    }
  }
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)local_8 + 0x70) + 0x144))();
  _DAT_10299250 = *puVar2;
  _DAT_10299254 = puVar2[1];
  _DAT_10299258 = puVar2[2];
  _DAT_1029927c = *(undefined4 *)(DAT_102906d4 + 0x28);
  _DAT_10299280 = *(undefined4 *)(DAT_102906d4 + 0x2c);
  _DAT_10299284 = *(undefined4 *)(DAT_102906d4 + 0x30);
  DAT_10299234 = *(float *)(*(int *)((int)local_8 + 0xc0) + 0x28);
  if (((*(uint *)(*(int *)((int)local_8 + 0xbc) + 0x10) & 1) != 0) &&
     ((*(uint *)(*(int *)((int)local_8 + 0xc0) + 0xdc) & 1) == 0)) {
    DAT_10299234 = DAT_10299234 * 1.2;
  }
  if (((*(char *)((int)local_8 + 0xb8) == ' ') || (*(char *)((int)local_8 + 0xb8) == '\x12')) &&
     (fVar4 = (float10)thunk_FUN_1001e850((float *)(*(int *)(*(int *)((int)local_8 + 0x70) + 4) +
                                                   0x20)), (float10)80.0 < fVar4)) {
    *(undefined4 *)(*(int *)((int)local_8 + 0x70) + 0x6f4) = 0x3dcccccd;
  }
  if (*(char *)(*(int *)((int)local_8 + 0xc0) + 0x2c) != '\0') {
    thunk_FUN_1001e660(local_8,&DAT_10299234,*(float *)(*(int *)((int)local_8 + 0xc0) + 0x34));
  }
  thunk_FUN_1000cae0(&uStack_ac,DAT_10299234,DAT_10299234,DAT_10299234);
  uStack_c0 = 0x1002170c;
  thunk_FUN_10015ce0(&stack0xffffff48,(undefined4 *)&DAT_1029927c);
  thunk_FUN_10015ce0(&stack0xffffff3c,(undefined4 *)&DAT_10299250);
  puVar2 = thunk_FUN_100262c0(local_2c,*(byte_conflict *)(*(int *)((int)local_8 + 0xc0) + 0x24));
  DAT_10299224 = *puVar2;
  DAT_10299228 = puVar2[1];
  _DAT_1029922c = puVar2[2];
  if (((*(char *)(*(int *)((int)local_8 + 0xc0) + 0x360) == '\a') ||
      (*(char *)((int)local_8 + 0xb8) == '\x1f')) || (*(char *)((int)local_8 + 0xb8) == '!')) {
    if (((*(uint *)(*(int *)((int)local_8 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(uint *)(*(int *)((int)local_8 + 0xc0) + 0xdc) & 1) != 0)) {
      uStack_78._3_1_ = '\0';
    }
    else {
      uStack_78._3_1_ = '\x01';
    }
    uStack_ac = 0x100217f4;
    thunk_FUN_1001e8e0(local_8,*(float *)(*(int *)((int)local_8 + 0xc0) + 0x30),
                       (uint)*(byte *)(*(int *)((int)local_8 + 0xc0) + 0x360),uStack_78._3_1_);
  }
  else if (*(char *)(*(int *)((int)local_8 + 0xc0) + 0x38) != '\0') {
    if (((*(uint *)(*(int *)((int)local_8 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(uint *)(*(int *)((int)local_8 + 0xc0) + 0xdc) & 1) != 0)) {
      uStack_78._3_1_ = '\0';
    }
    else {
      uStack_78._3_1_ = '\x01';
    }
    uStack_ac = 0x10021875;
    thunk_FUN_1001e8e0(local_8,*(float *)(*(int *)((int)local_8 + 0xc0) + 0x30),
                       (uint)*(byte *)(*(int *)((int)local_8 + 0xc0) + 0x360),uStack_78._3_1_);
  }
  DAT_10299220 = *(int *)(*(int *)((int)local_8 + 0xbc) + 4) == 0;
  thunk_FUN_10015740(&stack0xffffff4c,&DAT_1028ffec);
  thunk_FUN_10015740(&uStack_c0,&DAT_1028ffec);
  uVar6 = 0;
  uVar5 = *(undefined2 *)((int)local_8 + 0xd04);
  uVar3 = thunk_FUN_10020720();
  thunk_FUN_1001d620(*(undefined4 *)((int)local_8 + 0x70),1,uVar3,uVar5,uVar6);
  if (*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x02') {
    if (*(int *)(*(int *)((int)local_8 + 0xbc) + 8) == 1) {
      local_7c = 0x9999999a;
      uStack_78 = 0x3fc99999;
    }
    else {
      local_7c = 0xeb851eb8;
      uStack_78 = 0x3f9eb851;
    }
    _DAT_10299210 = (float)(double)CONCAT44(uStack_78,local_7c);
  }
  else if (*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x01') {
    _DAT_10299210 = *(float *)(*(int *)((int)local_8 + 0xc0) + 0x18);
  }
  else {
    uVar1 = thunk_FUN_1001d5f0(*(int *)((int)local_8 + 0x70));
    if (uVar1 == 0) {
      uStack_78 = 0x3ff00000;
    }
    else {
      uStack_78 = 0x3fe00000;
    }
    _DAT_10299210 =
         *(float *)(*(int *)((int)local_8 + 0xc0) + 0x18) *
         (float)(double)((ulonglong)uStack_78 << 0x20);
  }
  uVar1 = thunk_FUN_1001d590(*(int *)((int)local_8 + 0x70));
  if (uVar1 == 0) {
    fVar4 = thunk_FUN_100261b0(*(int *)((int)local_8 + 0x70));
    _DAT_10299210 = (float)(fVar4 * (float10)_DAT_10299210);
  }
  else {
    _DAT_10299210 = _DAT_10299210 / 0.15;
  }
  fVar4 = thunk_FUN_1003fb80();
  *(float *)((int)local_8 + 0x8c) = (float)(fVar4 + (float10)_DAT_10299210);
  fVar4 = thunk_FUN_1003fb80();
  *(float *)((int)local_8 + 0x98) = (float)(fVar4 + (float10)2.0);
  return;
}

/* 10021be0  FUN_10021be0  (16 bytes)
 * undefined FUN_10021be0(void)
 */
void FUN_10021be0(void)

{
  return;
}

/* 10021c00  FUN_10021c00  (16 bytes)
 * undefined FUN_10021c00(void)
 */
void FUN_10021c00(void)

{
  return;
}

/* 10021c20  FUN_10021c20  (16 bytes)
 * undefined FUN_10021c20(void)
 */
void FUN_10021c20(void)

{
  return;
}

/* 10021c40  FUN_10021c40  (3158 bytes)
 * undefined4 FUN_10021c40(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10021c40(void *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 uStack_15c;
  undefined1 *puVar10;
  void *pvVar11;
  float *pfVar12;
  uint uStack_110;
  char cStack_10c;
  undefined1 uStack_10b;
  byte bStack_10a;
  char cStack_109;
  undefined1 local_c0 [36];
  undefined1 local_9c [12];
  float local_90 [3];
  undefined1 local_84 [24];
  float local_6c [3];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [24];
  float local_30 [3];
  undefined1 local_24 [12];
  undefined1 local_18 [14];
  char local_a;
  char local_9;
  void *local_8;
  
  local_8 = param_1;
  if ((DAT_102a3308 & 1) == 0) {
    DAT_102a3308 = DAT_102a3308 | 1;
    thunk_FUN_10007fe0(&DAT_102992e4);
    FUN_100bc490(0x10022bf0);
  }
  if ((DAT_102a3308 & 2) == 0) {
    DAT_102a3308 = DAT_102a3308 | 2;
    thunk_FUN_10007fe0(&DAT_10299688);
    FUN_100bc490(0x10022bd0);
  }
  if ((DAT_102a3308 & 4) == 0) {
    DAT_102a3308 = DAT_102a3308 | 4;
    thunk_FUN_10007fe0(&DAT_1029969c);
    FUN_100bc490(0x10022bb0);
  }
  if ((*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x05') ||
     (*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x04')) {
    cStack_10c = '\x01';
  }
  else {
    cStack_10c = '\0';
  }
  cVar2 = cStack_10c;
  local_9 = cStack_10c;
  bVar1 = false;
  if (cStack_10c != '\0') {
    if (*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x05') {
      if (((*(uint *)(*(int *)(*(int *)((int)local_8 + 0x70) + 4) + 0x180) & 1) == 0) ||
         ((*(uint *)(*(int *)(*(int *)((int)local_8 + 0x70) + 4) + 0x180) & 0x800) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else if (((*(uint *)(*(int *)((int)local_8 + 0x70) + 0x770) & 1) == 0) ||
            ((*(uint *)(*(int *)((int)local_8 + 0x70) + 0x770) & 0x800) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  if ((bVar1) || (*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\0')) {
    cStack_10c = '\x01';
  }
  else {
    cStack_10c = '\0';
  }
  local_a = cStack_10c;
  if ((cVar2 == '\0') || (cStack_10c != '\0')) {
    if (*(char *)(*(int *)((int)local_8 + 0xbc) + 0x24) == '\0') {
      *(undefined1 *)(*(int *)((int)local_8 + 0xbc) + 0x24) = 1;
    }
    else {
      *(undefined1 *)(*(int *)((int)local_8 + 0xbc) + 0x24) = 0;
    }
    if (*(int *)(*(int *)((int)local_8 + 0xbc) + 0x20) < 1) {
      local_a = '\0';
      *(undefined1 *)(*(int *)((int)local_8 + 0xbc) + 0x24) = 1;
    }
    if (*(int *)(*(int *)((int)local_8 + 0xbc) + 0x1c) < 1) {
      local_a = '\0';
      *(undefined1 *)(*(int *)((int)local_8 + 0xbc) + 0x24) = 0;
    }
  }
  else {
    if ((*(uint *)(*(int *)(*(int *)((int)local_8 + 0x70) + 4) + 0x180) & 1) != 0) {
      if (*(int *)(*(int *)((int)local_8 + 0xbc) + 0x20) < 1) {
        uVar3 = thunk_FUN_10020640((int)local_8);
        return uVar3 & 0xffffff00;
      }
      *(undefined1 *)(*(int *)((int)local_8 + 0xbc) + 0x24) = 0;
    }
    if ((*(uint *)(*(int *)(*(int *)((int)local_8 + 0x70) + 4) + 0x180) & 0x800) != 0) {
      if (*(int *)(*(int *)((int)local_8 + 0xbc) + 0x1c) < 1) {
        uVar3 = thunk_FUN_10020640((int)local_8);
        return uVar3 & 0xffffff00;
      }
      *(undefined1 *)(*(int *)((int)local_8 + 0xbc) + 0x24) = 1;
    }
  }
  uVar3 = thunk_FUN_1001d5c0(*(int *)((int)local_8 + 0x70));
  if (uVar3 == 0) {
    if (local_a == '\0') {
      *(int *)(*(int *)((int)local_8 + 0xbc) + 4) = *(int *)(*(int *)((int)local_8 + 0xbc) + 4) + -1
      ;
      if (*(char *)(*(int *)((int)local_8 + 0xbc) + 0x24) == '\0') {
        *(int *)(*(int *)((int)local_8 + 0xbc) + 0x20) =
             *(int *)(*(int *)((int)local_8 + 0xbc) + 0x20) + -1;
      }
      else {
        *(int *)(*(int *)((int)local_8 + 0xbc) + 0x1c) =
             *(int *)(*(int *)((int)local_8 + 0xbc) + 0x1c) + -1;
      }
    }
    else {
      *(int *)(*(int *)((int)local_8 + 0xbc) + 4) = *(int *)(*(int *)((int)local_8 + 0xbc) + 4) + -2
      ;
      *(int *)(*(int *)((int)local_8 + 0xbc) + 0x1c) =
           *(int *)(*(int *)((int)local_8 + 0xbc) + 0x1c) + -1;
      *(int *)(*(int *)((int)local_8 + 0xbc) + 0x20) =
           *(int *)(*(int *)((int)local_8 + 0xbc) + 0x20) + -1;
    }
    if (*(int *)(*(int *)((int)local_8 + 0xbc) + 4) < 0) {
      *(undefined4 *)(*(int *)((int)local_8 + 0xbc) + 4) = 0;
    }
    if (*(int *)(*(int *)((int)local_8 + 0xbc) + 0x1c) < 0) {
      *(undefined4 *)(*(int *)((int)local_8 + 0xbc) + 0x1c) = 0;
    }
    if (*(int *)(*(int *)((int)local_8 + 0xbc) + 0x20) < 0) {
      *(undefined4 *)(*(int *)((int)local_8 + 0xbc) + 0x20) = 0;
    }
    if (*(char *)(*(int *)((int)local_8 + 0xc0) + 0x360) == '\x04') {
      *(undefined4 *)((int)local_8 + *(short *)(*(int *)((int)local_8 + 0xc0) + 200) * 0x30 + 0x108)
           = *(undefined4 *)(*(int *)((int)local_8 + 0xbc) + 0x1c);
    }
  }
  DAT_102992c8 = *(float *)(*(int *)((int)local_8 + 0xc0) + 0x28);
  if (((*(uint *)(*(int *)((int)local_8 + 0xbc) + 0x10) & 1) != 0) &&
     ((*(uint *)(*(int *)((int)local_8 + 0xc0) + 0xdc) & 1) == 0)) {
    DAT_102992c8 = DAT_102992c8 * 1.2;
  }
  if (*(char *)(*(int *)((int)local_8 + 0xc0) + 0x2c) != '\0') {
    if (local_a == '\0') {
      bStack_10a = 0xf0;
      cStack_109 = 0x3f;
    }
    else {
      bStack_10a = 0;
      cStack_109 = 0x40;
    }
    thunk_FUN_1001e660(local_8,&DAT_102992c8,
                       *(float *)(*(int *)((int)local_8 + 0xc0) + 0x34) *
                       (float)(double)((ulonglong)CONCAT11(cStack_109,bStack_10a) << 0x30));
  }
  if (((*(uint *)(*(int *)((int)local_8 + 0xbc) + 0x10) & 1) == 0) ||
     ((*(uint *)(*(int *)((int)local_8 + 0xc0) + 0xdc) & 1) != 0)) {
    uStack_110 = 0;
    cStack_10c = 0;
    uStack_10b = 0;
    bStack_10a = 0xf0;
  }
  else {
    uStack_110 = 0x9999999a;
    cStack_10c = 0x99;
    uStack_10b = 0x99;
    bStack_10a = 0xe9;
  }
  DAT_10299238 = *(float *)(*(int *)((int)local_8 + 0xc0) + 0x1c) *
                 (float)(double)CONCAT17(0x3f,CONCAT16(bStack_10a,
                                                       CONCAT15(uStack_10b,
                                                                CONCAT14(cStack_10c,uStack_110))));
  if (local_a == '\0') {
    _DAT_10299688 = *(undefined4 *)(DAT_102906d4 + 0x28);
    _DAT_1029968c = *(undefined4 *)(DAT_102906d4 + 0x2c);
    _DAT_10299690 = *(undefined4 *)(DAT_102906d4 + 0x30);
    thunk_FUN_1000cb20((void *)(DAT_102906d4 + 0x40),local_9c,
                       (float)(int)((-(uint)(*(char *)(*(int *)((int)local_8 + 0xbc) + 0x24) != '\0'
                                            ) & 8) - 4));
    pfVar12 = local_90;
    pvVar11 = (void *)0x100224cf;
    pvVar4 = (void *)(**(code **)(**(int **)((int)local_8 + 0x70) + 0x144))();
    puVar5 = thunk_FUN_1000d970(pvVar4,pvVar11,pfVar12);
    _DAT_102992e4 = *puVar5;
    _DAT_102992e8 = puVar5[1];
    _DAT_102992ec = puVar5[2];
    thunk_FUN_1000cae0(&stack0xfffffeb8,DAT_102992c8,DAT_102992c8,DAT_102992c8);
    uStack_15c = 0x1002254b;
    thunk_FUN_10015ce0(&stack0xfffffeac,(undefined4 *)&DAT_10299688);
    thunk_FUN_10015ce0(&stack0xfffffea0,(undefined4 *)&DAT_102992e4);
    puVar5 = thunk_FUN_100262c0(local_c0,*(byte_conflict *)(*(int *)((int)local_8 + 0xc0) + 0x24));
    DAT_1029969c = *puVar5;
    DAT_102996a0 = puVar5[1];
    _DAT_102996a4 = puVar5[2];
  }
  else {
    _DAT_10299688 = *(undefined4 *)(DAT_102906d4 + 0x28);
    _DAT_1029968c = *(undefined4 *)(DAT_102906d4 + 0x2c);
    _DAT_10299690 = *(undefined4 *)(DAT_102906d4 + 0x30);
    thunk_FUN_1000cb20((void *)(DAT_102906d4 + 0x40),local_24,
                       (float)(int)((-(uint)(*(char *)(*(int *)((int)local_8 + 0xbc) + 0x24) != '\0'
                                            ) & 0xfffffff8) + 4));
    pfVar12 = local_30;
    puVar10 = local_18;
    pvVar4 = (void *)(**(code **)(**(int **)((int)local_8 + 0x70) + 0x144))();
    puVar5 = thunk_FUN_1000d970(pvVar4,puVar10,pfVar12);
    _DAT_102992e4 = *puVar5;
    _DAT_102992e8 = puVar5[1];
    _DAT_102992ec = puVar5[2];
    thunk_FUN_1000cae0(&stack0xfffffebc,DAT_102992c8,DAT_102992c8,DAT_102992c8);
    thunk_FUN_10015ce0(&stack0xfffffeb0,(undefined4 *)&DAT_10299688);
    thunk_FUN_10015ce0(&uStack_15c,(undefined4 *)&DAT_102992e4);
    puVar5 = thunk_FUN_100262c0(local_48,*(byte_conflict *)(*(int *)((int)local_8 + 0xc0) + 0x24));
    DAT_1029969c = *puVar5;
    DAT_102996a0 = puVar5[1];
    _DAT_102996a4 = puVar5[2];
    thunk_FUN_1000cb20((void *)(DAT_102906d4 + 0x40),local_60,
                       (float)(int)((-(uint)(*(char *)(*(int *)((int)local_8 + 0xbc) + 0x24) != '\0'
                                            ) & 8) - 4));
    pfVar12 = local_6c;
    puVar10 = local_54;
    pvVar4 = (void *)(**(code **)(**(int **)((int)local_8 + 0x70) + 0x144))();
    puVar5 = thunk_FUN_1000d970(pvVar4,puVar10,pfVar12);
    _DAT_102992e4 = *puVar5;
    _DAT_102992e8 = puVar5[1];
    _DAT_102992ec = puVar5[2];
    thunk_FUN_1000cae0(&stack0xfffffeb8,DAT_102992c8,DAT_102992c8,DAT_102992c8);
    uStack_15c = 0x10022402;
    thunk_FUN_10015ce0(&stack0xfffffeac,(undefined4 *)&DAT_10299688);
    thunk_FUN_10015ce0(&stack0xfffffea0,(undefined4 *)&DAT_102992e4);
    puVar5 = thunk_FUN_100262c0(local_84,*(byte_conflict *)(*(int *)((int)local_8 + 0xc0) + 0x24));
    DAT_1029969c = *puVar5;
    DAT_102996a0 = puVar5[1];
    _DAT_102996a4 = puVar5[2];
  }
  if (*(char *)(*(int *)((int)local_8 + 0xc0) + 0x38) != '\0') {
    if (((*(uint *)(*(int *)((int)local_8 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(uint *)(*(int *)((int)local_8 + 0xc0) + 0xdc) & 1) != 0)) {
      cStack_109 = '\0';
    }
    else {
      cStack_109 = '\x01';
    }
    if (local_a == '\0') {
      uStack_110 = 0x3ff00000;
    }
    else {
      uStack_110 = 0x40000000;
    }
    thunk_FUN_1001e8e0(local_8,*(float *)(*(int *)((int)local_8 + 0xc0) + 0x30) *
                               (float)(double)((ulonglong)uStack_110 << 0x20),
                       (uint)*(byte *)(*(int *)((int)local_8 + 0xc0) + 0x360),cStack_109);
  }
  DAT_1029926c = *(char *)(*(int *)((int)local_8 + 0xbc) + 0x24) != '\0';
  if (local_a == '\0') {
    bStack_10a = (byte)*(undefined2 *)((int)local_8 + 0xd04);
    cStack_109 = (char)((ushort)*(undefined2 *)((int)local_8 + 0xd04) >> 8);
  }
  else {
    bStack_10a = (byte)*(undefined2 *)((int)local_8 + 0xd0e);
    cStack_109 = (char)((ushort)*(undefined2 *)((int)local_8 + 0xd0e) >> 8);
  }
  thunk_FUN_10015740(&stack0xfffffeb0,&DAT_1028ffec);
  thunk_FUN_10015740(&uStack_15c,&DAT_1028ffec);
  uVar9 = 0;
  uVar8 = CONCAT11(cStack_109,bStack_10a);
  uVar6 = thunk_FUN_10020720();
  thunk_FUN_1001d620(*(undefined4 *)((int)local_8 + 0x70),1,uVar6,uVar8,uVar9);
  if (*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x02') {
    if (*(int *)(*(int *)((int)local_8 + 0xbc) + 8) == 1) {
      uStack_110 = 0x9999999a;
      cStack_10c = 0x99;
      uStack_10b = 0x99;
      bStack_10a = 0xc9;
    }
    else {
      uStack_110 = 0xeb851eb8;
      cStack_10c = 0x51;
      uStack_10b = 0xb8;
      bStack_10a = 0x9e;
    }
    _DAT_102996b0 =
         (float)(double)CONCAT17(0x3f,CONCAT16(bStack_10a,
                                               CONCAT15(uStack_10b,CONCAT14(cStack_10c,uStack_110)))
                                );
  }
  else if ((*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x01') ||
          (*(char *)(*(int *)((int)local_8 + 0xbc) + 2) == '\x04')) {
    _DAT_102996b0 = 0.1;
  }
  else {
    uVar3 = thunk_FUN_1001d5f0(*(int *)((int)local_8 + 0x70));
    if (uVar3 == 0) {
      bStack_10a = 0xf0;
    }
    else {
      bStack_10a = 0xe0;
    }
    _DAT_102996b0 =
         *(float *)(*(int *)((int)local_8 + 0xc0) + 0x18) *
         (float)(double)CONCAT17(0x3f,(uint7)bStack_10a << 0x30);
  }
  uVar3 = thunk_FUN_1001d590(*(int *)((int)local_8 + 0x70));
  if (uVar3 == 0) {
    fVar7 = thunk_FUN_100261b0(*(int *)((int)local_8 + 0x70));
    _DAT_102996b0 = (float)(fVar7 * (float10)_DAT_102996b0);
  }
  else {
    _DAT_102996b0 = _DAT_102996b0 / 0.15;
  }
  fVar7 = thunk_FUN_1003fb80();
  *(float *)((int)local_8 + 0x90) = (float)(fVar7 + (float10)_DAT_102996b0);
  *(undefined4 *)((int)local_8 + 0x8c) = *(undefined4 *)((int)local_8 + 0x90);
  fVar7 = thunk_FUN_1003fb80();
  *(float *)((int)local_8 + 0x98) = (float)(fVar7 + (float10)2.0);
  return CONCAT31((int3)((uint)local_8 >> 8),1);
}

/* 10022bb0  FUN_10022bb0  (16 bytes)
 * undefined FUN_10022bb0(void)
 */
void FUN_10022bb0(void)

{
  return;
}

/* 10022bd0  FUN_10022bd0  (16 bytes)
 * undefined FUN_10022bd0(void)
 */
void FUN_10022bd0(void)

{
  return;
}

/* 10022bf0  FUN_10022bf0  (16 bytes)
 * undefined FUN_10022bf0(void)
 */
void FUN_10022bf0(void)

{
  return;
}

/* 10022c10  FUN_10022c10  (137 bytes)
 * undefined FUN_10022c10(int param_1)
 */
void __fastcall FUN_10022c10(int param_1)

{
  float10 fVar1;
  
  if (((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(*(int *)(param_1 + 0xbc) + 8) == 0)) &&
     (0 < *(int *)(*(int *)(param_1 + 0xbc) + 4))) {
    *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 1;
    fVar1 = thunk_FUN_1003fb80();
    *(float *)(param_1 + 0x90) = (float)(fVar1 + (float10)0.7);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
    fVar1 = thunk_FUN_1003fb80();
    *(float *)(param_1 + 0x98) = (float)(fVar1 + (float10)0.7);
  }
  return;
}

/* 10022cc0  FUN_10022cc0  (816 bytes)
 * undefined FUN_10022cc0(int param_1)
 */
void __fastcall FUN_10022cc0(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined1 auStack_b4 [12];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_80;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0xbc) != 0) &&
     (local_8 = param_1, thunk_FUN_10097d70(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x74),
     (*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x250) & 0x30c20) == 0)) {
    local_1c = 0.0;
    fVar4 = (float10)thunk_FUN_1001e850((float *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x20));
    local_20 = (float)fVar4;
    if (local_20 <= 100.0) {
      local_18 = 2;
    }
    else {
      pfVar1 = thunk_FUN_100230c0((void *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x20),local_34);
      uStack_9c = 0x10022d63;
      fVar4 = thunk_FUN_10023170((float *)(DAT_102906d4 + 0x28),pfVar1);
      local_1c = (float)fVar4;
      if (local_1c <= -0.5) {
        local_18 = 3;
      }
      else {
        local_18 = 2;
      }
    }
    local_24 = 0x30;
    if (local_20 <= 100.0) {
      local_14 = 0x46;
    }
    else {
      local_14 = 0x23;
    }
    local_c = 0.5;
    if ((*(int *)(local_8 + 0xdb0) < 1) || (2 < *(int *)(local_8 + 0xdb0))) {
      uStack_9c = 0x10022de6;
      uVar2 = (*DAT_1028fee8)();
      *(undefined4 *)(local_8 + 0xdb0) = uVar2;
    }
    if (*(int *)(local_8 + 0xdb0) == 1) {
      local_28 = 0x11;
      *(undefined4 *)(local_8 + 0xdb0) = 2;
      local_10 = 0x1d;
    }
    else if (*(int *)(local_8 + 0xdb0) == 2) {
      local_28 = 0x10;
      *(undefined4 *)(local_8 + 0xdb0) = 1;
      local_10 = 0x1e;
    }
    if (local_18 == 3) {
      local_28 = 0xf;
      local_14 = 0xffffff9c;
      local_c = 1.0;
      local_24 = 0x36;
      local_10 = 0x1f;
    }
    else if ((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x1a4) & 0x200) == 0) {
      local_28 = 0x11;
      local_10 = 0x20;
    }
    else if (((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x180) & 4) != 0) ||
            ((*(uint *)(*(int *)(local_8 + 4) + 0x1a4) & 0x4000) != 0)) {
      local_28 = 0x11;
      local_14 = 0x5a;
      local_c = 1.0;
      local_10 = 0x21;
    }
    uStack_9c = *(undefined4 *)(*(int *)(local_8 + 0xbc) + 8);
    uStack_a0 = local_28;
    uStack_a4 = 0;
    uStack_a8 = 0;
    uStack_bc = 0x10022f05;
    thunk_FUN_10015740(auStack_b4,&DAT_1028ffec);
    thunk_FUN_10015740(auStack_c0,&DAT_1028ffec);
    uVar6 = 0;
    uVar5 = *(undefined2 *)(local_8 + 0xd14);
    uVar2 = thunk_FUN_10020720();
    thunk_FUN_1001d620(*(undefined4 *)(local_8 + 0x70),1,uVar2,uVar5,uVar6);
    uVar3 = thunk_FUN_1001d5f0(*(int *)(local_8 + 0x70));
    if (uVar3 == 0) {
      uStack_80 = 0x3ff00000;
    }
    else {
      uStack_80 = 0x3fe00000;
    }
    local_c = local_c * (float)(double)((ulonglong)uStack_80 << 0x20);
    uVar3 = thunk_FUN_1001d590(*(int *)(local_8 + 0x70));
    if (uVar3 == 0) {
      fVar4 = thunk_FUN_100261b0(*(int *)(local_8 + 0x70));
      local_c = (float)(fVar4 * (float10)local_c);
    }
    else {
      local_c = local_c / 0.15;
    }
    fVar4 = thunk_FUN_1003fb80();
    *(float *)(local_8 + 0x90) = (float)((float10)local_c * (float10)0.7 + fVar4);
    *(undefined4 *)(local_8 + 0x8c) = *(undefined4 *)(local_8 + 0x90);
    fVar4 = thunk_FUN_1003fb80();
    *(float *)(local_8 + 0x98) = (float)(fVar4 + (float10)3.0);
  }
  return;
}

/* 100230c0  FUN_100230c0  (131 bytes)
 * void * FUN_100230c0(void * param_1)
 */
void * __thiscall FUN_100230c0(void *this,void *param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)thunk_FUN_1001e850(this);
  if ((float)fVar2 == 0.0) {
    thunk_FUN_1000cae0(param_1,0,0,0x3f800000);
  }
  else {
    fVar1 = 1.0 / (float)fVar2;
    thunk_FUN_1000cae0(param_1,fVar1 * *(float *)this,fVar1 * *(float *)((int)this + 4),
                       fVar1 * *(float *)((int)this + 8));
  }
  return param_1;
}

/* 10023170  FUN_10023170  (54 bytes)
 * float10 FUN_10023170(float * param_1, float * param_2)
 */
float10 __cdecl FUN_10023170(float *param_1,float *param_2)

{
  return (float10)param_1[2] * (float10)param_2[2] +
         (float10)param_1[1] * (float10)param_2[1] + (float10)*param_1 * (float10)*param_2;
}

/* 100231c0  FUN_100231c0  (702 bytes)
 * undefined FUN_100231c0(int * param_1)
 */
void __fastcall FUN_100231c0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 auStack_a4 [4];
  undefined4 uStack_a0;
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_64;
  float local_c;
  
  if (param_1[0x2f] != 0) {
    uVar2 = thunk_FUN_1001d5f0(param_1[0x1c]);
    if (uVar2 == 0) {
      uStack_64 = 0x3ff00000;
    }
    else {
      uStack_64 = 0x3fe00000;
    }
    local_c = *(float *)(param_1[0x30] + 0x18) * (float)(double)((ulonglong)uStack_64 << 0x20);
    uVar2 = thunk_FUN_1001d590(param_1[0x1c]);
    if (uVar2 == 0) {
      fVar4 = thunk_FUN_100261b0(param_1[0x1c]);
      local_c = (float)(fVar4 * (float10)local_c);
    }
    else {
      local_c = local_c / 0.15;
    }
    bVar1 = false;
    fVar4 = thunk_FUN_1003fb80();
    param_1[0x24] = (int)(float)((float10)local_c * (float10)0.7 + fVar4);
    param_1[0x23] = param_1[0x24];
    fVar4 = thunk_FUN_1003fb80();
    param_1[0x26] = (int)(float)(fVar4 + (float10)3.0);
    thunk_FUN_10097d70(*(int *)(param_1[0x1c] + 4) + 0x74);
    if (*(char *)(param_1[0x2f] + 0x24) == '\0') {
      if ((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x250) & 0x10c20) != 0) {
        return;
      }
      iStack_80 = 0x1002330c;
      (*DAT_1028fee8)();
      iStack_80 = *(undefined4 *)(param_1[0x2f] + 8);
      uStack_84 = (uint)*(byte *)(param_1 + 0x2e);
      pcStack_88 = (char *)0x0;
      uStack_8c = 0;
      uStack_a0 = 0x10023342;
      thunk_FUN_10015740(auStack_98,&DAT_1028ffec);
      thunk_FUN_10015740(auStack_a4,&DAT_1028ffec);
      uVar6 = 0;
      uVar5 = *(undefined2 *)((int)param_1 + 0xd12);
      uVar3 = thunk_FUN_10020720();
      thunk_FUN_1001d620(param_1[0x1c],1,uVar3,uVar5,uVar6);
    }
    else {
      bVar1 = true;
      iStack_80 = 0x1002338e;
      (*DAT_1028fee8)();
      iStack_80 = 0x3f4ccccd;
      uStack_84 = 0x3f800000;
      pcStack_88 = "weapons/knife/knife_miss.wav";
      uStack_8c = 4;
      uStack_90 = *(undefined4 *)(param_1[0x1c] + 4);
      uStack_94 = 0x100233b7;
      uStack_90 = thunk_FUN_10019bc0();
      uStack_94 = 0x100233c0;
      thunk_FUN_10014910();
    }
    if (bVar1) {
      uVar2 = thunk_FUN_1001d5c0(param_1[0x1c]);
      if (uVar2 == 0) {
        *(int *)(param_1[0x2f] + 4) = *(int *)(param_1[0x2f] + 4) + -1;
      }
      if (*(int *)(param_1[0x2f] + 4) < 1) {
        iStack_80 = 0x10023477;
        thunk_FUN_1001f0c0(param_1,(uint)*(byte *)(param_1 + 0x2e),'\x01');
      }
      else {
        if (*(int *)(param_1[0x2f] + 0x28) == 0) {
          uStack_64 = 0;
        }
        else {
          uStack_64 = (uint)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 4);
        }
        iStack_80 = uStack_64;
        uStack_84 = 0x1002344b;
        (**(code **)(*param_1 + 0x150))();
        uStack_84 = 0x10023450;
        fVar4 = thunk_FUN_1003fb80();
        param_1[0x26] = (int)(float)(fVar4 + (float10)2.0);
      }
    }
  }
  return;
}

/* 10023530  FUN_10023530  (241 bytes)
 * undefined4 FUN_10023530(int param_1, undefined4 param_2, float param_3)
 */
undefined4 __thiscall FUN_10023530(void *this,int param_1,undefined4 param_2,float param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  int local_50;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)((int)this + (uint)*(byte *)(*(int *)((int)this + 0xc0) + 8) * 4 + 0xc4) < 1) {
    uVar1 = 0;
  }
  else {
    if (param_1 - *(int *)(*(int *)((int)this + 0xbc) + 4) <
        *(int *)((int)this + (uint)*(byte *)(*(int *)((int)this + 0xc0) + 8) * 4 + 0xc4)) {
      local_50 = param_1 - *(int *)(*(int *)((int)this + 0xbc) + 4);
    }
    else {
      local_50 = *(int *)((int)this + (uint)*(byte *)(*(int *)((int)this + 0xc0) + 8) * 4 + 0xc4);
    }
    if (local_50 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0xbc) + 0xc) = 1;
      (**(code **)(*(int *)this + 0x150))(param_2,1,0);
      fVar2 = thunk_FUN_1003fb80();
      *(float *)(*(int *)((int)this + 0x70) + 0x118) = (float)(fVar2 + (float10)param_3);
      uVar1 = 1;
    }
  }
  return uVar1;
}

/* 10023660  FUN_10023660  (855 bytes)
 * undefined FUN_10023660(int * param_1)
 */
void __fastcall FUN_10023660(int *param_1)

{
  float10 fVar1;
  int local_4c;
  
  if (*(int *)(param_1[0x2f] + 8) == 0) {
    if ((0 < param_1[*(byte *)(param_1[0x30] + 8) + 0x31]) &&
       (*(int *)(param_1[0x2f] + 4) < *(int *)(param_1[0x30] + 4))) {
      *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x214) = 0;
      if (*(int *)(*(int *)(param_1[0x1c] + 4) + 0xbc) == 0) {
        thunk_FUN_100170c0(param_1[0x30] + 0x12a,param_1[0x1c]);
      }
      *(undefined4 *)(param_1[0x2f] + 8) = 1;
      if (*(int *)(param_1[0x2f] + 0x28) == 0) {
        local_4c = 0;
      }
      else {
        local_4c = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0x10);
      }
      (**(code **)(*param_1 + 0x150))(local_4c,1,0);
      fVar1 = thunk_FUN_1003fb80();
      *(float *)(param_1[0x1c] + 0x118) = (float)(fVar1 + (float10)0.3);
      fVar1 = thunk_FUN_1003fb80();
      param_1[0x26] = (int)(float)(fVar1 + (float10)0.3);
      fVar1 = thunk_FUN_1003fb80();
      param_1[0x23] = (int)(float)(fVar1 + (float10)0.3);
      fVar1 = thunk_FUN_1003fb80();
      param_1[0x24] = (int)(float)(fVar1 + (float10)0.3);
    }
  }
  else if (*(int *)(param_1[0x2f] + 8) == 1) {
    fVar1 = thunk_FUN_1003fb80();
    if ((float10)(float)param_1[0x26] <= fVar1) {
      if ((param_1[*(byte *)(param_1[0x30] + 8) + 0x31] < 1) ||
         (*(int *)(param_1[0x30] + 4) <= *(int *)(param_1[0x2f] + 4))) {
        *(undefined4 *)(param_1[0x2f] + 8) = 2;
      }
      else {
        param_1[*(byte *)(param_1[0x30] + 8) + 0x31] =
             param_1[*(byte *)(param_1[0x30] + 8) + 0x31] + -1;
        *(int *)(param_1[0x2f] + 4) = *(int *)(param_1[0x2f] + 4) + 1;
        (*DAT_1028fee8)(0,0x1f);
        thunk_FUN_10019bc0();
        thunk_FUN_10014910();
        if (*(int *)(param_1[0x2f] + 0x28) == 0) {
          local_4c = 0;
        }
        else {
          local_4c = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0x12);
        }
        (**(code **)(*param_1 + 0x150))(local_4c,1,0);
        fVar1 = thunk_FUN_1003fb80();
        param_1[0x26] = (int)(float)(fVar1 + (float10)*(float *)(param_1[0x30] + 0x14));
      }
    }
  }
  else if (*(int *)(param_1[0x2f] + 8) == 2) {
    *(undefined4 *)(param_1[0x2f] + 8) = 0;
    *(undefined1 *)(param_1[0x2f] + 0x24) = 0;
    if (*(int *)(param_1[0x2f] + 0x28) == 0) {
      local_4c = 0;
    }
    else {
      local_4c = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0x14);
    }
    (**(code **)(*param_1 + 0x150))(local_4c,1,0);
    fVar1 = thunk_FUN_1003fb80();
    *(float *)(param_1[0x1c] + 0x118) = (float)(fVar1 + (float10)0.3);
    fVar1 = thunk_FUN_1003fb80();
    param_1[0x26] = (int)(float)(fVar1 + (float10)3.0);
  }
  return;
}

/* 10023a90  FUN_10023a90  (603 bytes)
 * undefined FUN_10023a90(int * param_1)
 * called by: thunk_FUN_10023a90
 */
void __fastcall FUN_10023a90(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 auStack_94 [4];
  undefined4 uStack_90;
  undefined1 auStack_88 [12];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  
  if (param_1[0x2f] == 0) {
    thunk_FUN_100245b0((int)param_1);
  }
  else if ((*(char *)(param_1[0x30] + 0x360) != '\x02') &&
          (*(char *)(param_1[0x30] + 0x360) != '\x03')) {
    if ((*(char *)(param_1[0x30] + 0x360) == '\x01') && (*(short *)(param_1[0x30] + 200) != 0x24)) {
      thunk_FUN_10023660(param_1);
    }
    else if ((0 < param_1[*(byte *)(param_1[0x30] + 8) + 0x31]) &&
            (*(int *)(param_1[0x2f] + 8) == 0)) {
      if (((char)param_1[0x2e] == '!') && (0 < *(int *)(param_1[0x2f] + 4))) {
        if (*(int *)(param_1[0x2f] + 0x28) == 0) {
          sVar1 = 0;
        }
        else {
          sVar1 = *(short *)(*(int *)(param_1[0x2f] + 0x28) + 0x10);
        }
      }
      else if (*(int *)(param_1[0x2f] + 0x28) == 0) {
        sVar1 = 0;
      }
      else {
        sVar1 = *(short *)(*(int *)(param_1[0x2f] + 0x28) + 2);
      }
      uStack_74 = 0x10023c05;
      iVar2 = thunk_FUN_10023530(param_1,*(int *)(param_1[0x30] + 4),(int)sVar1,
                                 *(float *)(param_1[0x30] + 0x14));
      if (iVar2 != 0) {
        fVar4 = thunk_FUN_1003fb80();
        param_1[0x26] = (int)(float)(fVar4 + (float10)5.0);
        *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x214) = 0;
        if (*(int *)(*(int *)(param_1[0x1c] + 4) + 0xbc) == 0) {
          thunk_FUN_100170c0(param_1[0x30] + 0x12a,param_1[0x1c]);
        }
        uStack_74 = (uint)*(byte *)(param_1 + 0x2e);
        uStack_78 = 0;
        uStack_7c = 0;
        uStack_90 = 0x10023c89;
        thunk_FUN_10015740(auStack_88,&DAT_1028ffec);
        thunk_FUN_10015740(auStack_94,&DAT_1028ffec);
        uVar6 = 0;
        uVar5 = (undefined2)param_1[0x344];
        uVar3 = thunk_FUN_10020720();
        thunk_FUN_1001d620(param_1[0x1c],1,uVar3,uVar5,uVar6);
        if (*(short *)(param_1[0x30] + 200) == 0x24) {
          *(undefined1 *)(param_1[0x2f] + 0x24) = 0;
        }
      }
    }
  }
  return;
}

/* 10023d90  FUN_10023d90  (392 bytes)
 * undefined FUN_10023d90(int param_1)
 */
void __thiscall FUN_10023d90(void *this,int param_1)

{
  bool bVar1;
  float10 fVar2;
  
  bVar1 = false;
  if (*(int *)((int)this + 0xbc) != 0) {
    if (*(int *)(*(int *)((int)this + 0xbc) + 8) == 1) {
      if (((*(uint *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x180) & 0x801) != 0) &&
         (param_1 == 0)) {
        return;
      }
      fVar2 = thunk_FUN_1003fb80();
      *(float *)((int)this + 0x90) = (float)(fVar2 + (float10)0.5);
      *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)this + 0x90);
      fVar2 = thunk_FUN_1003fb80();
      *(float *)((int)this + 0x98) = (float)(fVar2 + (float10)0.5);
      if (*(int *)(*(int *)((int)this + 0xbc) + 4) == 1) {
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0xc0) = 0;
      }
      if (param_1 == 0) {
        *(undefined4 *)(*(int *)((int)this + 0xbc) + 8) = 2;
      }
      else {
        *(undefined4 *)(*(int *)((int)this + 0xbc) + 8) = 0;
      }
      bVar1 = param_1 != 0;
      *(int *)(*(int *)((int)this + 0xbc) + 4) = *(int *)(*(int *)((int)this + 0xbc) + 4) + -1;
    }
    else if (*(int *)(*(int *)((int)this + 0xbc) + 8) == 2) {
      *(undefined4 *)(*(int *)((int)this + 0xbc) + 8) = 0;
      bVar1 = true;
    }
    else {
      fVar2 = thunk_FUN_1003fb80();
      *(float *)((int)this + 0x98) = (float)(fVar2 + (float10)3.0);
    }
    if (bVar1) {
      if (*(int *)(*(int *)((int)this + 0xbc) + 4) < 1) {
        thunk_FUN_1001f0c0(this,(uint)*(byte *)((int)this + 0xb8),'\x01');
      }
      else {
        fVar2 = thunk_FUN_1003fb80();
        *(float *)((int)this + 0x98) = (float)(fVar2 + (float10)2.0);
      }
    }
  }
  return;
}

/* 10023f80  FUN_10023f80  (508 bytes)
 * undefined FUN_10023f80(int * param_1)
 * called by: thunk_FUN_10023f80
 */
void __fastcall FUN_10023f80(int *param_1)

{
  float10 fVar1;
  int local_4c;
  
  if (param_1[0x2f] == 0) {
    thunk_FUN_10024560((int)param_1);
  }
  else {
    param_1[0x29] = *(int *)(param_1[0x2f] + 4);
    if (*(char *)(param_1[0x2f] + 0x2c) == '\0') {
      *(int *)(param_1[0x2f] + 0x28) = param_1[0x30] + 0x26a;
    }
    else {
      *(int *)(param_1[0x2f] + 0x28) = param_1[0x30] + 0x2a4;
    }
    if ((*(char *)(param_1[0x30] + 0x360) == '\x01') && (*(int *)(param_1[0x2f] + 8) != 0)) {
      (**(code **)(*param_1 + 0x164))();
    }
    else {
      if ((*(char *)(param_1[0x2f] + 2) == '\x02') &&
         ((float)param_1[0x23] < 0.0 != ((float)param_1[0x23] == 0.0))) {
        if (*(int *)(param_1[0x2f] + 8) < 1) {
          *(undefined4 *)(param_1[0x2f] + 8) = 0;
        }
        else {
          thunk_FUN_10020750(param_1);
          *(int *)(param_1[0x2f] + 8) = *(int *)(param_1[0x2f] + 8) + -1;
        }
      }
      fVar1 = thunk_FUN_1003fb80();
      if ((float10)(float)param_1[0x26] <= fVar1) {
        if (*(char *)(param_1[0x30] + 0x360) == '\x02') {
          thunk_FUN_10023d90(param_1,0);
        }
        else if (*(int *)(param_1[0x2f] + 4) < 1) {
          (**(code **)(*param_1 + 0x164))();
        }
        else if (*(int *)(param_1[0x2f] + 4) != 0) {
          fVar1 = thunk_FUN_1003fb80();
          param_1[0x26] = (int)(float)(fVar1 + (float10)3.0);
          if (*(int *)(param_1[0x2f] + 0x28) == 0) {
            local_4c = 0;
          }
          else {
            local_4c = (int)**(short **)(param_1[0x2f] + 0x28);
          }
          (**(code **)(*param_1 + 0x150))(local_4c,0,*(undefined4 *)(param_1[1] + 0x114));
        }
      }
    }
  }
  return;
}

/* 10024200  FUN_10024200  (29 bytes)
 * undefined FUN_10024200(int param_1)
 * called by: thunk_FUN_10024200
 */
void __fastcall FUN_10024200(int param_1)

{
  thunk_FUN_10024230(param_1);
  return;
}

/* 10024230  FUN_10024230  (453 bytes)
 * undefined FUN_10024230(int param_1)
 */
void __fastcall FUN_10024230(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  *(int *)(*(int *)(param_1 + 0x70) + 0x970) = param_1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xbc) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xc0) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x214) = 0;
  FUN_100bba20((uint *)(*(int *)(param_1 + 0x70) + 0xab0),(uint *)"");
  fVar2 = thunk_FUN_1003fb80();
  *(float *)(*(int *)(param_1 + 0x70) + 0x118) = (float)(fVar2 + (float10)0.5);
  fVar2 = thunk_FUN_1003fb80();
  *(float *)(param_1 + 0x98) = (float)(fVar2 + (float10)3.0);
  if ((*(float *)(*(int *)(param_1 + 0x70) + 0x718) != 0.0) &&
     (*(char *)(*(int *)(param_1 + 0x70) + 0x720) != '\0')) {
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x718) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x71c) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x70) + 0x720) = 0;
  }
  if ((*(int *)(param_1 + 0x70) == 0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x70) + 0x94))(), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(param_1 + 0xc0) != 0)) {
      if (*(char *)(*(int *)(param_1 + 0xc0) + 0x360) == '\x02') {
        thunk_FUN_10023d90((void *)param_1,1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0xc) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 0;
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xdac) = 0;
    *(undefined4 *)(param_1 + 0xda8) = 0;
    *(undefined4 *)(param_1 + 0xdb0) = 0;
  }
  return;
}

/* 10024470  FUN_10024470  (26 bytes)
 * undefined4 FUN_10024470(void)
 * called by: thunk_FUN_10024470
 */
undefined4 FUN_10024470(void)

{
  return 1;
}

/* 10024490  FUN_10024490  (161 bytes)
 * undefined4 FUN_10024490(undefined4 * param_1)
 * called by: thunk_FUN_10024490
 */
undefined4 __thiscall FUN_10024490(void *this,undefined4 *param_1)

{
  param_1[6] = *(int *)(DAT_102906d4 + 0x98) + **(int **)((int)this + 4);
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *param_1 = 1;
  param_1[1] = 2;
  param_1[9] = 0;
  *(undefined4 *)((int)this + 0x78) = 0x10;
  param_1[8] = 0x10;
  param_1[10] = 1;
  return 1;
}

/* 10024560  FUN_10024560  (62 bytes)
 * undefined FUN_10024560(int param_1)
 */
void __fastcall FUN_10024560(int param_1)

{
  float10 fVar1;
  
  fVar1 = thunk_FUN_1003fb80();
  if ((float10)*(float *)(param_1 + 0x98) <= fVar1) {
    fVar1 = thunk_FUN_1003fb80();
    *(float *)(param_1 + 0x98) = (float)(fVar1 + (float10)3.0);
  }
  return;
}

/* 100245b0  FUN_100245b0  (531 bytes)
 * undefined FUN_100245b0(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100245b0(int param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  
  _DAT_10299698 = 0.6;
  iVar1 = *(int *)(param_1 + 0x70);
  fVar3 = thunk_FUN_1003fb80();
  if (((((float10)*(float *)(iVar1 + 0x118) <= fVar3) &&
       (fVar3 = thunk_FUN_1003fb80(), (float10)*(float *)(param_1 + 0x8c) <= fVar3)) &&
      (fVar3 = thunk_FUN_1003fb80(), (float10)*(float *)(param_1 + 0x90) <= fVar3)) &&
     ((fVar3 = thunk_FUN_1003fb80(), (float10)*(float *)(param_1 + 0x94) <= fVar3 &&
      ((*(uint *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x250) & 0x70c30) == 0)))) {
    if (1.0 < *DAT_102906d4 - *(float *)(*(int *)(param_1 + 0x70) + 0x724)) {
      thunk_FUN_10019bc0();
      thunk_FUN_10024850();
    }
    fVar2 = _DAT_10299698 * 0.5;
    fVar3 = thunk_FUN_100261b0(*(int *)(param_1 + 0x70));
    if ((float10)_DAT_10299698 * (float10)0.5 * (float10)10.0 <= fVar3 * (float10)fVar2) {
      fVar2 = _DAT_10299698 * 0.5 * 10.0;
    }
    else {
      fVar2 = _DAT_10299698 * 0.5;
      fVar3 = thunk_FUN_100261b0(*(int *)(param_1 + 0x70));
      fVar2 = (float)(fVar3 * (float10)fVar2);
    }
    *(float *)(*(int *)(param_1 + 0x70) + 0x724) = *DAT_102906d4 + fVar2;
    fVar2 = _DAT_10299698 * 0.5;
    fVar3 = thunk_FUN_100261b0(*(int *)(param_1 + 0x70));
    if ((float10)_DAT_10299698 * (float10)0.5 * (float10)10.0 <= fVar3 * (float10)fVar2) {
      fVar2 = _DAT_10299698 * 0.5 * 10.0;
    }
    else {
      fVar2 = _DAT_10299698 * 0.5;
      fVar3 = thunk_FUN_100261b0(*(int *)(param_1 + 0x70));
      fVar2 = (float)(fVar3 * (float10)fVar2);
    }
    fVar3 = thunk_FUN_1003fb80();
    *(float *)(param_1 + 0x90) = (float)(fVar3 + (float10)fVar2);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
  }
  return;
}

/* 10024850  FUN_10024850  (48 bytes)
 * undefined FUN_10024850(void)
 */
void FUN_10024850(void)

{
  thunk_FUN_10014910();
  return;
}

/* 10024890  FUN_10024890  (3225 bytes)
 * undefined FUN_10024890(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10024890(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [4];
  undefined4 uStack_c4;
  undefined1 auStack_bc [12];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 local_8c;
  undefined4 local_84;
  float fStack_80;
  double local_7c;
  undefined1 local_2c [15];
  undefined1 local_1d;
  float local_1c;
  float local_18;
  int local_14;
  undefined4 local_10;
  float local_c;
  int local_8;
  
  local_8 = param_1;
  if ((DAT_102a3309 & 1) == 0) {
    DAT_102a3309 = DAT_102a3309 | 1;
    thunk_FUN_10007fe0(&DAT_10299214);
    FUN_100bc490(0x100258b0);
  }
  if ((DAT_102a3309 & 2) == 0) {
    DAT_102a3309 = DAT_102a3309 | 2;
    thunk_FUN_10007fe0(&DAT_1029925c);
    FUN_100bc490(0x10025890);
  }
  if ((DAT_102a3309 & 4) == 0) {
    DAT_102a3309 = DAT_102a3309 | 4;
    thunk_FUN_100258d0(0x10299288);
    FUN_100bc490(0x10025870);
  }
  fVar5 = (float10)thunk_FUN_1001e850((float *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x20));
  local_18 = (float)fVar5;
  local_c = 0.0;
  local_10 = 0;
  _DAT_102992fc = 0.6;
  DAT_102a3304 = 0;
  DAT_102992c4 = 0;
  local_1d = 1;
  iVar3 = *(int *)(local_8 + 0x70);
  fVar5 = thunk_FUN_1003fb80();
  if (((((float10)*(float *)(iVar3 + 0x118) <= fVar5) &&
       (fVar5 = thunk_FUN_1003fb80(), (float10)*(float *)(local_8 + 0x8c) <= fVar5)) &&
      (fVar5 = thunk_FUN_1003fb80(), (float10)*(float *)(local_8 + 0x90) <= fVar5)) &&
     ((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x250) & 0x70c30) == 0)) {
    local_1c = 0.0;
    if (local_18 <= 100.0) {
      local_14 = 2;
    }
    else {
      thunk_FUN_10097d70(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x74);
      pfVar2 = thunk_FUN_100230c0((void *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x20),local_2c);
      uStack_a4 = 0x10024a3c;
      fVar5 = thunk_FUN_10023170((float *)(DAT_102906d4 + 0x28),pfVar2);
      local_1c = (float)fVar5;
      if (local_1c <= -0.5) {
        local_14 = 3;
      }
      else {
        local_14 = 2;
      }
    }
    if ((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x180) & 1) == 0) {
      if ((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x180) & 0x800) != 0) {
        if ((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x250) & 0xc00) == 0) {
          if (((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x1a4) & 0x200) == 0) ||
             (((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x180) & 4) == 0 &&
              ((*(uint *)(*(int *)(local_8 + 4) + 0x1a4) & 0x4000) == 0)))) {
            if (local_14 == 3) {
              DAT_102992c4 = 3;
              DAT_102a3304 = 0x11;
              if (local_18 / 3.3 <= 90.0) {
                fVar1 = local_18 / 3.3;
              }
              else {
                fVar1 = 90.0;
              }
              if (10.0 <= fVar1) {
                if (local_18 / 3.3 <= 90.0) {
                  fStack_80 = local_18 / 3.3;
                }
                else {
                  fStack_80 = 90.0;
                }
                local_7c._0_4_ = fStack_80;
              }
              else {
                local_7c._0_4_ = 10.0;
              }
              local_c = local_7c._0_4_;
              local_10 = 0x38;
              _DAT_102992fc = 0.9;
            }
            else {
              DAT_102992c4 = 2;
              if ((((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x1a4) & 0x200) != 0) ||
                  (local_18 <= 270.0)) ||
                 (((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x180) & 4) == 0 ||
                  (local_1c <= 0.5)))) {
                if (((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x1a4) & 0x200) != 0) ||
                   (local_18 <= 200.0)) {
                  if (((*(uint *)(*(int *)(local_8 + 0x70) + 0x770) & 0x800) == 0) &&
                     (*(int *)(local_8 + 0xdac) < 3)) {
                    local_10 = 0x30;
                    *(int *)(local_8 + 0xdac) = *(int *)(local_8 + 0xdac) + 1;
                    _DAT_102992fc = 0.25;
                    local_c = 10.0;
                    if (*(int *)(local_8 + 0xdb0) == 0xb) {
                      DAT_102a3304 = 0xc;
                    }
                    else if (*(int *)(local_8 + 0xdb0) == 0xc) {
                      DAT_102a3304 = 0xb;
                    }
                    else {
                      uStack_a4 = 0x1002542a;
                      iVar3 = (*DAT_1028fee8)();
                      if (iVar3 == 0) {
                        DAT_102a3304 = 0xb;
                      }
                      else if (iVar3 == 1) {
                        DAT_102a3304 = 0xc;
                      }
                    }
                  }
                  else {
                    local_10 = 0x30;
                    _DAT_102992fc = 0.5;
                    *(undefined4 *)(local_8 + 0xdac) = 0;
                    if (*(int *)(local_8 + 0xdb0) == 0xf) {
                      DAT_102a3304 = 10;
                    }
                    else if (*(int *)(local_8 + 0xdb0) == 10) {
                      DAT_102a3304 = 0xe;
                    }
                    else if (*(int *)(local_8 + 0xdb0) == 0xe) {
                      DAT_102a3304 = 0xd;
                    }
                    else if (*(int *)(local_8 + 0xdb0) == 0xd) {
                      DAT_102a3304 = 0xf;
                    }
                    else {
                      uStack_a4 = 0x100252cf;
                      uVar4 = (*DAT_1028fee8)();
                      switch(uVar4) {
                      case 0:
                        DAT_102a3304 = 0xe;
                        break;
                      case 1:
                        DAT_102a3304 = 0xd;
                        break;
                      case 2:
                        DAT_102a3304 = 10;
                        break;
                      case 3:
                        DAT_102a3304 = 0xf;
                      }
                    }
                    if (local_18 / 15.0 <= 20.0) {
                      local_7c = (double)(local_18 / 15.0);
                    }
                    else {
                      local_7c = 20.0;
                    }
                    if (10.0 <= local_7c) {
                      if (local_18 / 15.0 <= 20.0) {
                        local_8c = (double)(local_18 / 15.0);
                      }
                      else {
                        local_8c = 20.0;
                      }
                      local_84 = (undefined4)local_8c;
                      fStack_80 = (float)local_8c._4_4_;
                    }
                    else {
                      local_84 = 0;
                      fStack_80 = 2.5625;
                    }
                    local_c = (float)(double)CONCAT44(fStack_80,local_84);
                  }
                }
                else {
                  *(undefined4 *)(local_8 + 0xdac) = 0;
                  if (local_18 / 10.0 <= 30.0) {
                    local_7c = (double)(local_18 / 10.0);
                  }
                  else {
                    local_7c = 30.0;
                  }
                  if (10.0 <= local_7c) {
                    if (local_18 / 10.0 <= 30.0) {
                      local_8c = (double)(local_18 / 10.0);
                    }
                    else {
                      local_8c = 30.0;
                    }
                    local_84 = (undefined4)local_8c;
                    fStack_80 = (float)local_8c._4_4_;
                  }
                  else {
                    local_84 = 0;
                    fStack_80 = 2.5625;
                  }
                  local_c = (float)(double)CONCAT44(fStack_80,local_84);
                  local_10 = 0x30;
                  _DAT_102992fc = 0.7;
                  if (*(int *)(local_8 + 0xdb0) == 0xf) {
                    DAT_102a3304 = 0x13;
                  }
                  else if (*(int *)(local_8 + 0xdb0) == 0x13) {
                    DAT_102a3304 = 0x12;
                  }
                  else if (*(int *)(local_8 + 0xdb0) == 0x12) {
                    DAT_102a3304 = 0xf;
                  }
                  else {
                    uStack_a4 = 0x100251dd;
                    iVar3 = (*DAT_1028fee8)();
                    if (iVar3 == 0) {
                      DAT_102a3304 = 0x13;
                    }
                    else if (iVar3 == 1) {
                      DAT_102a3304 = 0x12;
                    }
                    else if (iVar3 == 2) {
                      DAT_102a3304 = 0xf;
                    }
                  }
                }
              }
              else {
                *(undefined4 *)(local_8 + 0xdac) = 0;
                if (local_18 / 6.5 <= 45.0) {
                  fVar1 = local_18 / 6.5;
                }
                else {
                  fVar1 = 45.0;
                }
                if (10.0 <= fVar1) {
                  if (local_18 / 6.5 <= 45.0) {
                    fStack_80 = local_18 / 6.5;
                  }
                  else {
                    fStack_80 = 45.0;
                  }
                  local_7c._0_4_ = fStack_80;
                }
                else {
                  local_7c._0_4_ = 10.0;
                }
                local_c = local_7c._0_4_;
                local_10 = 0x30;
                _DAT_102992fc = 0.9;
                DAT_102a3304 = 0x10;
              }
            }
          }
          else {
            local_c = 30.0;
            DAT_102992c4 = 2;
            DAT_102a3304 = 0x14;
            local_10 = 0x30;
            _DAT_102992fc = 1.0;
            local_14 = 2;
          }
        }
        else {
          DAT_102992c4 = 2;
          local_10 = 0x30;
          _DAT_102992fc = 1.0;
          if (local_18 / 10.0 <= 30.0) {
            fVar1 = local_18 / 10.0;
          }
          else {
            fVar1 = 30.0;
          }
          if (10.0 <= fVar1) {
            if (local_18 / 10.0 <= 30.0) {
              fStack_80 = local_18 / 10.0;
            }
            else {
              fStack_80 = 30.0;
            }
            local_7c._0_4_ = fStack_80;
          }
          else {
            local_7c._0_4_ = 10.0;
          }
          local_c = local_7c._0_4_;
          local_14 = 2;
        }
      }
    }
    else {
      local_14 = 2;
      DAT_102992c4 = 1;
      if ((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x250) & 0x10) == 0) {
        if ((*(uint *)(*(int *)(*(int *)(local_8 + 0x70) + 4) + 0x1a4) & 0x200) == 0) {
          DAT_102a3304 = 0x18;
          _DAT_102992fc = 0.3;
          if (local_18 / 10.0 <= 30.0) {
            local_7c = (double)(local_18 / 10.0);
          }
          else {
            local_7c = 30.0;
          }
          if (10.0 <= local_7c) {
            if (local_18 / 10.0 <= 30.0) {
              local_8c = (double)(local_18 / 10.0);
            }
            else {
              local_8c = 30.0;
            }
            local_84 = (undefined4)local_8c;
            fStack_80 = (float)local_8c._4_4_;
          }
          else {
            local_84 = 0;
            fStack_80 = 2.5625;
          }
          local_c = (float)(double)CONCAT44(fStack_80,local_84);
        }
        else if (*(int *)(local_8 + 0xda8) < 5) {
          *(int *)(local_8 + 0xda8) = *(int *)(local_8 + 0xda8) + 1;
          DAT_102a3304 = 0x16;
          _DAT_102992fc = 0.15;
          local_c = 10.0;
        }
        else {
          _DAT_102992fc = 0.2;
          *(undefined4 *)(local_8 + 0xda8) = 0;
          DAT_102a3304 = 0x17;
          if (local_18 / 15.0 <= 20.0) {
            local_7c = (double)(local_18 / 15.0);
          }
          else {
            local_7c = 20.0;
          }
          if (10.0 <= local_7c) {
            if (local_18 / 15.0 <= 20.0) {
              local_8c = (double)(local_18 / 15.0);
            }
            else {
              local_8c = 20.0;
            }
            local_84 = (undefined4)local_8c;
            fStack_80 = (float)local_8c._4_4_;
          }
          else {
            local_84 = 0;
            fStack_80 = 2.5625;
          }
          local_c = (float)(double)CONCAT44(fStack_80,local_84);
        }
      }
      else {
        _DAT_102992fc = 0.3;
        if (local_18 / 10.0 <= 30.0) {
          local_7c = (double)(local_18 / 10.0);
        }
        else {
          local_7c = 30.0;
        }
        if (10.0 <= local_7c) {
          if (local_18 / 10.0 <= 30.0) {
            local_8c = (double)(local_18 / 10.0);
          }
          else {
            local_8c = 30.0;
          }
          local_84 = (undefined4)local_8c;
          fStack_80 = (float)local_8c._4_4_;
        }
        else {
          local_84 = 0;
          fStack_80 = 2.5625;
        }
        local_c = (float)(double)CONCAT44(fStack_80,local_84);
      }
      local_10 = 0x26;
    }
    if (DAT_102992c4 != 0) {
      *(undefined4 *)(local_8 + 0xdb0) = DAT_102a3304;
      uStack_a4 = 0;
      iStack_a8 = DAT_102992c4;
      uStack_ac = 0;
      uStack_b0 = 0;
      uStack_c4 = 0x1002548d;
      thunk_FUN_10015740(auStack_bc,&DAT_1028ffec);
      thunk_FUN_10015740(auStack_c8,&DAT_1028ffec);
      uVar8 = 0;
      uVar7 = *(undefined2 *)(local_8 + 0xd0c);
      uVar4 = thunk_FUN_10020720();
      thunk_FUN_1001d620(*(undefined4 *)(local_8 + 0x70),1,uVar4,uVar7,uVar8);
    }
    fVar5 = thunk_FUN_1003fb80();
    fVar6 = thunk_FUN_100261b0(*(int *)(local_8 + 0x70));
    *(float *)(local_8 + 0x90) = (float)(fVar6 * (float10)_DAT_102992fc + (float10)(float)fVar5);
    *(undefined4 *)(local_8 + 0x8c) = *(undefined4 *)(local_8 + 0x90);
    fVar5 = thunk_FUN_1003fb80();
    fVar6 = thunk_FUN_100261b0(*(int *)(local_8 + 0x70));
    *(float *)(local_8 + 0x98) = (float)(fVar6 * (float10)_DAT_102992fc + (float10)(float)fVar5);
  }
  return;
}

/* 10025870  FUN_10025870  (16 bytes)
 * undefined FUN_10025870(void)
 */
void FUN_10025870(void)

{
  return;
}

/* 10025890  FUN_10025890  (16 bytes)
 * undefined FUN_10025890(void)
 */
void FUN_10025890(void)

{
  return;
}

/* 100258b0  FUN_100258b0  (16 bytes)
 * undefined FUN_100258b0(void)
 */
void FUN_100258b0(void)

{
  return;
}

/* 100258d0  FUN_100258d0  (44 bytes)
 * int FUN_100258d0(int param_1)
 */
int __fastcall FUN_100258d0(int param_1)

{
  thunk_FUN_10007fe0(param_1 + 0x14);
  thunk_FUN_10007fe0(param_1 + 0x24);
  return param_1;
}

/* 10025910  FUN_10025910  (65 bytes)
 * undefined FUN_10025910(undefined4 param_1, void * param_2, undefined4 * param_3, void * param_4)
 */
void __cdecl FUN_10025910(undefined4 param_1,void *param_2,undefined4 *param_3,void *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  pfVar1 = thunk_FUN_1000cb20(param_4,local_10,32.0);
  puVar2 = thunk_FUN_1000d970(param_2,local_1c,pfVar1);
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  param_3[2] = puVar2[2];
  return;
}

/* 10025970  FUN_10025970  (464 bytes)
 * undefined FUN_10025970(float * param_1, float * param_2, float param_3, float param_4)
 */
void __cdecl FUN_10025970(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar7;
  
  if (0.0 <= param_3) {
    dVar3 = (double)(param_1[1] * param_1[1] + *param_1 * *param_1);
    FUN_100bbfe4(param_1,SUB84(dVar3,0),(uint)((ulonglong)dVar3 >> 0x20));
    fVar1 = (float)extraout_ST0;
    if (0.0 < fVar1) {
      fVar4 = *param_1 - *param_2;
      fVar5 = param_1[1] - param_2[1];
      dVar3 = (double)(fVar5 * fVar5 + fVar4 * fVar4);
      FUN_100bbfe4(param_2,SUB84(dVar3,0),(uint)((ulonglong)dVar3 >> 0x20));
      fVar2 = (float)extraout_ST0_00;
      fVar7 = thunk_FUN_10095800(param_4);
      fVar6 = fVar2;
      if (((float10)param_3 / fVar7) * (float10)15.0 <= (float10)fVar2) {
        fVar7 = thunk_FUN_10095800(param_4);
        fVar6 = (float)(((float10)param_3 / fVar7) * (float10)15.0);
      }
      *param_2 = fVar4 * fVar6 + *param_2;
      fVar7 = thunk_FUN_10095800(param_4);
      if (((float10)param_3 / fVar7) * (float10)15.0 <= (float10)fVar2) {
        fVar7 = thunk_FUN_10095800(param_4);
        fVar2 = (float)(((float10)param_3 / fVar7) * (float10)15.0);
      }
      param_2[1] = fVar5 * fVar2 + param_2[1];
      *param_1 = *param_1 / fVar1;
      param_1[1] = param_1[1] / fVar1;
      fVar7 = thunk_FUN_10095800(param_4);
      fVar1 = (float)((float10)fVar1 - ((float10)param_3 / fVar7) * (float10)15.0);
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      *param_1 = fVar1 * *param_1;
      param_1[1] = fVar1 * param_1[1];
    }
  }
  return;
}

/* 10025bc0  FUN_10025bc0  (104 bytes)
 * undefined1 FUN_10025bc0(int param_1)
 */
undefined1 __cdecl FUN_10025bc0(int param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  
  if (param_1 == 0x22) {
    uVar1 = 3;
  }
  else if (param_1 == 0x21) {
    uVar1 = 1;
  }
  else if (param_1 == 0x10) {
    uVar1 = 9;
  }
  else if (param_1 == 10) {
    uVar1 = 8;
  }
  else if (param_1 == 0x1e) {
    uVar1 = 8;
  }
  else if (param_1 == 8) {
    uVar1 = 8;
  }
  else if (param_1 == 0x15) {
    uVar1 = 8;
  }
  else {
    puVar2 = thunk_FUN_1001d7b0(param_1);
    uVar1 = puVar2[0x360];
  }
  return uVar1;
}

/* 10025c50  FUN_10025c50  (168 bytes)
 * undefined4 FUN_10025c50(int param_1, uint param_2)
 */
uint __cdecl FUN_10025c50(int param_1,uint param_2)

{
  char cVar1;
  undefined4 in_EAX;
  uint3 uVar2;
  uint uVar3;
  
  uVar2 = (uint3)((uint)in_EAX >> 8);
  if ((param_1 < 1) || (0x3f < param_1)) {
    uVar3 = (uint)uVar2 << 8;
  }
  else if (param_2 == 0) {
    uVar3 = CONCAT31(uVar2,1);
  }
  else {
    cVar1 = thunk_FUN_10025bc0(param_1);
    uVar3 = (int)cVar1 - 1;
    switch(uVar3) {
    case 0:
      uVar3 = param_2 & 0x10;
      if (uVar3 == 0) {
        return 1;
      }
      break;
    case 2:
      uVar3 = param_2 & 1;
      if (uVar3 == 0) {
        return 1;
      }
      break;
    case 5:
    case 6:
      uVar3 = param_2 & 8;
      if (uVar3 == 0) {
        return 1;
      }
      break;
    case 7:
      uVar3 = param_2 & 2;
      if (uVar3 == 0) {
        return 1;
      }
      break;
    case 8:
      uVar3 = param_2 & 4;
      if (uVar3 == 0) {
        return 1;
      }
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}

/* 10025d50  FUN_10025d50  (191 bytes)
 * undefined4 * FUN_10025d50(undefined4 * param_1)
 */
undefined4 * __cdecl FUN_10025d50(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_60;
  undefined4 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5501;
  local_10 = ExceptionList;
  local_14 = param_1;
  ExceptionList = &local_10;
  if (param_1 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    iVar1 = (*DAT_1028fdd4)();
    local_14 = (undefined4 *)thunk_FUN_10025e70(iVar1);
  }
  iVar1 = thunk_FUN_10019bc0();
  param_1 = (undefined4 *)thunk_FUN_10025e40(iVar1);
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)thunk_FUN_10025ea0(0xdb4);
    local_8 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      local_60 = (undefined4 *)0x0;
    }
    else {
      local_60 = thunk_FUN_10016f70(puVar2);
    }
    param_1 = local_60;
    local_60[1] = local_14;
  }
  ExceptionList = local_10;
  return param_1;
}

/* 10025e40  FUN_10025e40  (32 bytes)
 * undefined4 FUN_10025e40(int param_1)
 */
undefined4 __cdecl FUN_10025e40(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
  }
  return uVar1;
}

/* 10025e70  FUN_10025e70  (34 bytes)
 * int FUN_10025e70(int param_1)
 */
int __cdecl FUN_10025e70(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x80;
  }
  return iVar1;
}

/* 10025ea0  FUN_10025ea0  (42 bytes)
 * undefined FUN_10025ea0(undefined4 param_1)
 */
void __cdecl FUN_10025ea0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_10019bc0();
  (*DAT_1028fe7c)(uVar1,param_1);
  return;
}

/* 10025ee0  FUN_10025ee0  (40 bytes)
 * undefined FUN_10025ee0(undefined4 param_1, int param_2)
 */
void __cdecl FUN_10025ee0(undefined4 param_1,int param_2)

{
  *(uint *)(param_2 + 0x1a4) = *(uint *)(param_2 + 0x1a4) | 0x40000000;
  return;
}

/* 10025f20  FUN_10025f20  (24 bytes)
 * undefined4 FUN_10025f20(void)
 * called by: thunk_FUN_10025f20
 */
undefined4 FUN_10025f20(void)

{
  return 1;
}

/* 10025f40  FUN_10025f40  (488 bytes)
 * undefined FUN_10025f40(int * param_1)
 * called by: thunk_FUN_10025f40
 */
void __fastcall FUN_10025f40(int *param_1)

{
  int iVar1;
  
  DAT_102b82dc = param_1;
  if (param_1[0x1e] == 0x10) {
    if (param_1[0x2f] == 0) {
      if (((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x800) == 0) ||
         ((float)param_1[0x24] < 0.0 == ((float)param_1[0x24] == 0.0))) {
        if (((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 1) != 0) &&
           ((float)param_1[0x23] < 0.0 != ((float)param_1[0x23] == 0.0))) {
          (**(code **)(*param_1 + 0x158))();
        }
      }
      else {
        (**(code **)(*param_1 + 0x15c))();
      }
      (**(code **)(*param_1 + 0x168))();
    }
    else {
      if (*(int *)(param_1[0x2f] + 0xc) != 0) {
        thunk_FUN_1003fb80();
      }
      if (((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x800) == 0) ||
         ((float)param_1[0x24] < 0.0 == ((float)param_1[0x24] == 0.0))) {
        if (((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 1) == 0) ||
           ((float)param_1[0x23] < 0.0 == ((float)param_1[0x23] == 0.0))) {
          if (((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x2000) == 0) ||
             (*(int *)(DAT_102b82dc[0x2f] + 0xc) != 0)) {
            if ((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x801) == 0) {
              (**(code **)(*param_1 + 0x168))();
              return;
            }
          }
          else {
            (**(code **)(*param_1 + 0x164))();
          }
        }
        else {
          (**(code **)(*param_1 + 0x158))();
        }
      }
      else {
        (**(code **)(*param_1 + 0x15c))();
      }
      iVar1 = (**(code **)(*param_1 + 0x170))();
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x168))();
      }
    }
  }
  return;
}

/* 100261b0  FUN_100261b0  (70 bytes)
 * float10 FUN_100261b0(int param_1)
 */
float10 __fastcall FUN_100261b0(int param_1)

{
  float10 fVar1;
  
  if (*(float *)(*(int *)(param_1 + 4) + 0x254) == 0.0) {
    fVar1 = (float10)1.0;
  }
  else {
    fVar1 = (float10)1.0 / (float10)*(float *)(*(int *)(param_1 + 4) + 0x254);
  }
  return fVar1;
}

/* 10026210  FUN_10026210  (131 bytes)
 * undefined FUN_10026210(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10026210(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0x700) = 0;
  puVar1 = (undefined4 *)thunk_FUN_10008500(&DAT_10320fd0);
  *puVar1 = 0;
  iVar2 = thunk_FUN_10008500(&DAT_10320fd0);
  *(undefined4 *)(iVar2 + 4) = 0;
  iVar2 = thunk_FUN_10008500(&DAT_10320fd0);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  _DAT_1031bf04 = 0;
  return;
}

/* 100262c0  FUN_100262c0  (248 bytes)
 * void * FUN_100262c0(void * param_1, byte.conflict param_2)
 */
void * FUN_100262c0(void *param_1,byte_conflict param_2)

{
  float10 fVar1;
  float10 fVar2;
  float in_stack_00000024;
  float in_stack_00000028;
  int in_stack_0000003c;
  undefined1 local_15;
  undefined4 local_10;
  undefined4 local_c;
  
  for (local_15 = 1; local_15 <= param_2; local_15 = local_15 + 1) {
    fVar1 = thunk_FUN_1003fcb0(in_stack_0000003c + (uint)local_15,-0.5,0.5);
    fVar2 = thunk_FUN_1003fcb0(in_stack_0000003c + 1 + (uint)local_15,-0.5,0.5);
    local_c = (float)(fVar2 + (float10)(float)fVar1);
    fVar1 = thunk_FUN_1003fcb0(in_stack_0000003c + 2 + (uint)local_15,-0.5,0.5);
    fVar2 = thunk_FUN_1003fcb0(in_stack_0000003c + 3 + (uint)local_15,-0.5,0.5);
    local_10 = (float)(fVar2 + (float10)(float)fVar1);
  }
  thunk_FUN_1000cae0(param_1,local_c * in_stack_00000024,local_10 * in_stack_00000028,0);
  return param_1;
}

/* 10026400  FUN_10026400  (658 bytes)
 * undefined FUN_10026400(undefined1 * param_1)
 */
void __cdecl FUN_10026400(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x22;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Katana");
  param_1[0x84] = 1;
  param_1[0x85] = 3;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/katana.spr");
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0xb54;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_katana.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_katana.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_katana.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x288) = 4;
  *(undefined2 *)(param_1 + 0x28a) = 3;
  *(undefined2 *)(param_1 + 0x28c) = 2;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 10;
  *(undefined4 *)(param_1 + 0x364) = 0;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  return;
}

/* 10026740  FUN_10026740  (670 bytes)
 * undefined FUN_10026740(undefined1 * param_1)
 */
void __cdecl FUN_10026740(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x19;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 5;
  *(undefined4 *)(param_1 + 0x20) = 6;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Combat Knife");
  param_1[0x84] = 1;
  param_1[0x85] = 1;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/knife.spr");
  param_1[0xca] = 1;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 100;
  param_1[0xd4] = 1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_knife.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_knife.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_knife.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x288) = 3;
  *(undefined2 *)(param_1 + 0x28a) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 5;
  *(undefined2 *)(param_1 + 0x28e) = 6;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 3;
  *(undefined4 *)(param_1 + 0x364) = 0;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  return;
}

/* 10026a90  FUN_10026a90  (898 bytes)
 * undefined FUN_10026a90(undefined1 * param_1)
 */
void __cdecl FUN_10026a90(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x12;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x1b;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x30) = 0x40b00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 8;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"M16A4");
  param_1[0x84] = 4;
  param_1[0x85] = 8;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/m16.spr");
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd0) = 0x9c4;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/556_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_m16.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_m16.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_m16.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x278) = 8;
  *(undefined2 *)(param_1 + 0x2a4) = 7;
  *(undefined2 *)(param_1 + 0x2a6) = 0xe;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x2aa) = 10;
  *(undefined2 *)(param_1 + 0x2ac) = 0xb;
  *(undefined2 *)(param_1 + 0x2ae) = 10;
  *(undefined2 *)(param_1 + 0x2b0) = 0xb;
  *(undefined2 *)(param_1 + 0x2b2) = 9;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/m16/fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x20;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 10026f00  FUN_10026f00  (943 bytes)
 * undefined FUN_10026f00(undefined1 * param_1)
 */
void __cdecl FUN_10026f00(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 1;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3bf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x3c) = 0x1a;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)&DAT_10269f14);
  param_1[0x84] = 4;
  param_1[0x85] = 2;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/m4.spr");
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 0x1194;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/556_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 4;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 8;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_m4.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_m4.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_m4_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_m4.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x278) = 8;
  *(undefined2 *)(param_1 + 0x2a2) = 0xf;
  *(undefined2 *)(param_1 + 0x2a4) = 7;
  *(undefined2 *)(param_1 + 0x2a6) = 0xe;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x2aa) = 10;
  *(undefined2 *)(param_1 + 0x2ac) = 0xb;
  *(undefined2 *)(param_1 + 0x2ae) = 10;
  *(undefined2 *)(param_1 + 0x2b0) = 0xb;
  *(undefined2 *)(param_1 + 0x2b2) = 9;
  *(undefined2 *)(param_1 + 0x2dc) = 0xf;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/m4/m4-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/m4/m4-fire-sil.wav");
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x17;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 100273a0  FUN_100273a0  (736 bytes)
 * undefined FUN_100273a0(undefined1 * param_1)
 */
void __cdecl FUN_100273a0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 100;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x20;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ddf3b64;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40000000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c1374bc;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"M60E3");
  param_1[0x84] = 4;
  param_1[0x85] = 9;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/m60.spr");
  param_1[0xca] = 0x46;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 8000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/556_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_m60.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_m60.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_m60.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 4;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x270) = 2;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 2;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/m60/m60-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x11;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 6;
  return;
}

/* 10027740  FUN_10027740  (658 bytes)
 * undefined FUN_10027740(undefined1 * param_1)
 */
void __cdecl FUN_10027740(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x18;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 2;
  *(undefined4 *)(param_1 + 0x20) = 4;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"M61 Grenade");
  param_1[0x84] = 1;
  param_1[0x85] = 2;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/m61.spr");
  param_1[0xca] = 0xf;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 1000;
  param_1[0xd4] = 1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_m61.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_m61.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_m61.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x292) = 3;
  *(undefined2 *)(param_1 + 0x294) = 4;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 2;
  *(undefined4 *)(param_1 + 0x364) = 0;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  return;
}

/* 10027a80  FUN_10027a80  (825 bytes)
 * undefined FUN_10027a80(undefined1 * param_1)
 */
void __cdecl FUN_10027a80(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x19;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x17;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3dbc6a7f;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d03126f;
  *(undefined4 *)(param_1 + 0x30) = 0x40a80000;
  *(undefined4 *)(param_1 + 0x34) = 0x3bf5c28f;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)&DAT_1026a0bc);
  param_1[0x84] = 3;
  param_1[0x85] = 6;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/ump.spr");
  param_1[0xca] = 0x19;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd0) = 0x8fc;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 2;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_ump.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_ump.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_ump_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_ump.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 5;
  *(undefined2 *)(param_1 + 0x26e) = 4;
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/ump/ump-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/ump/ump-fire-sil.wav");
  param_1[0x360] = 9;
  *(undefined4 *)(param_1 + 0x364) = 0xf;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x1e;
  *(undefined4 *)(param_1 + 0x370) = 6;
  return;
}

/* 10027e90  FUN_10027e90  (863 bytes)
 * undefined FUN_10027e90(undefined1 * param_1)
 */
void __cdecl FUN_10027e90(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xc;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 10;
  *(undefined2 *)(param_1 + 200) = 9;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f370a3d;
  *(undefined4 *)(param_1 + 0x28) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x40400000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"SOCOM-MK23");
  param_1[0x84] = 2;
  param_1[0x85] = 2;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/mk23.spr");
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 700;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_mk23.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_mk23.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_mk23_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_mk23.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"onehanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 0xb;
  *(undefined2 *)(param_1 + 0x26e) = 4;
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x274) = 1;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 9;
  *(undefined2 *)(param_1 + 0x2a4) = 5;
  *(undefined2 *)(param_1 + 0x2a6) = 0xc;
  *(undefined2 *)(param_1 + 0x2a8) = 0;
  *(undefined2 *)(param_1 + 0x2aa) = 6;
  *(undefined2 *)(param_1 + 0x2ac) = 7;
  *(undefined2 *)(param_1 + 0x2ae) = 6;
  *(undefined2 *)(param_1 + 0x2b0) = 8;
  *(undefined2 *)(param_1 + 0x2b2) = 10;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/mk23/mk23-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/mk23/mk23-fire-sil.wav");
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 100282d0  FUN_100282d0  (998 bytes)
 * undefined FUN_100282d0(undefined1 * param_1)
 */
void __cdecl FUN_100282d0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x18;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 9;
  param_1[0x360] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f370a3d;
  *(undefined4 *)(param_1 + 0x28) = 0x3cf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40600000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Akimbo MK23");
  param_1[0x84] = 5;
  param_1[0x85] = 2;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/mk23_akimbo.spr");
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 700;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_mk23_akimbo.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_mk23_akimbo.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_mk23_akimbo_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_mk23.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"akimbo");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 0xd;
  *(undefined2 *)(param_1 + 0x26e) = 5;
  *(undefined2 *)(param_1 + 0x296) = 1;
  *(undefined2 *)(param_1 + 0x29a) = 3;
  *(undefined2 *)(param_1 + 0x298) = 2;
  *(undefined2 *)(param_1 + 0x29c) = 4;
  *(undefined2 *)(param_1 + 0x29e) = 2;
  *(undefined2 *)(param_1 + 0x2a0) = 4;
  *(undefined2 *)(param_1 + 0x270) = 0xe;
  *(undefined2 *)(param_1 + 0x272) = 0xe;
  *(undefined2 *)(param_1 + 0x274) = 0xe;
  *(undefined2 *)(param_1 + 0x278) = 0xb;
  *(undefined2 *)(param_1 + 0x2a4) = 6;
  *(undefined2 *)(param_1 + 0x2a6) = 0x10;
  *(undefined2 *)(param_1 + 0x2a8) = 5;
  *(undefined2 *)(param_1 + 0x2d0) = 7;
  *(undefined2 *)(param_1 + 0x2d4) = 9;
  *(undefined2 *)(param_1 + 0x2d2) = 8;
  *(undefined2 *)(param_1 + 0x2d6) = 10;
  *(undefined2 *)(param_1 + 0x2d8) = 8;
  *(undefined2 *)(param_1 + 0x2da) = 10;
  *(undefined2 *)(param_1 + 0x2aa) = 6;
  *(undefined2 *)(param_1 + 0x2ac) = 6;
  *(undefined2 *)(param_1 + 0x2ae) = 6;
  *(undefined2 *)(param_1 + 0x2b2) = 0xc;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/mk23/mk23-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/mk23/mk23-fire-sil.wav");
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 100287b0  FUN_100287b0  (924 bytes)
 * undefined FUN_100287b0(undefined1 * param_1)
 */
void __cdecl FUN_100287b0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x1a;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f3d70a4;
  *(undefined4 *)(param_1 + 0x28) = 0x3d916873;
  *(undefined4 *)(param_1 + 0x30) = 0x41680000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Mossberg 500");
  param_1[0x84] = 4;
  param_1[0x85] = 7;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/mossberg.spr");
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd0) = 0x9c4;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/shotgun_shell_gold.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 1;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_mossberg.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_mossberg.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_mossberg.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 0;
  *(undefined2 *)(param_1 + 0x26e) = 7;
  *(undefined2 *)(param_1 + 0x27a) = 8;
  *(undefined2 *)(param_1 + 0x27c) = 9;
  *(undefined2 *)(param_1 + 0x27e) = 10;
  *(undefined2 *)(param_1 + 0x280) = 1;
  *(undefined2 *)(param_1 + 0x282) = 1;
  *(undefined2 *)(param_1 + 0x284) = 2;
  *(undefined2 *)(param_1 + 0x286) = 2;
  *(undefined2 *)(param_1 + 0x278) = 0xb;
  *(undefined2 *)(param_1 + 0x2a4) = 3;
  *(undefined2 *)(param_1 + 0x2a6) = 3;
  *(undefined2 *)(param_1 + 0x2a8) = 7;
  *(undefined2 *)(param_1 + 0x2b4) = 0xd;
  *(undefined2 *)(param_1 + 0x2b6) = 0xe;
  *(undefined2 *)(param_1 + 0x2b8) = 0xf;
  *(undefined2 *)(param_1 + 0x2ba) = 4;
  *(undefined2 *)(param_1 + 700) = 4;
  *(undefined2 *)(param_1 + 0x2be) = 5;
  *(undefined2 *)(param_1 + 0x2c0) = 5;
  *(undefined2 *)(param_1 + 0x2b2) = 0xc;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/mossberg/fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/m3/m3-pump.wav");
  param_1[0x360] = 1;
  *(undefined4 *)(param_1 + 0x364) = 0x11;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 10;
  return;
}

/* 10028c40  FUN_10028c40  (934 bytes)
 * undefined FUN_10028c40(undefined1 * param_1)
 */
void __cdecl FUN_10028c40(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 7;
  *(undefined4 *)(param_1 + 0x14) = 0x40133333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d872b02;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3ced9168;
  *(undefined4 *)(param_1 + 0x30) = 0x40500000;
  *(undefined4 *)(param_1 + 0x34) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)&DAT_1026a3d0);
  param_1[0x84] = 3;
  param_1[0x85] = 3;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/mp5k.spr");
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x5dc;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 2;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_mp5k.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_mp5k.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_mp5k_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_mp5k.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x278) = 5;
  *(undefined2 *)(param_1 + 0x2a4) = 7;
  *(undefined2 *)(param_1 + 0x2a6) = 10;
  *(undefined2 *)(param_1 + 0x2a8) = 7;
  *(undefined2 *)(param_1 + 0x2aa) = 8;
  *(undefined2 *)(param_1 + 0x2ac) = 9;
  *(undefined2 *)(param_1 + 0x2ae) = 8;
  *(undefined2 *)(param_1 + 0x2b0) = 9;
  *(undefined2 *)(param_1 + 0x2b2) = 6;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/mp5k/mp5k-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/mp5k/mp5k-fire-sil.wav");
  param_1[0x360] = 9;
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x16;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 100290d0  FUN_100290d0  (871 bytes)
 * undefined FUN_100290d0(undefined1 * param_1)
 */
void __cdecl FUN_100290d0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 6;
  *(undefined4 *)(param_1 + 0x14) = 0x40133333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d978d50;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"MP5SD");
  param_1[0x84] = 3;
  param_1[0x85] = 2;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/mp5sd.spr");
  param_1[0xca] = 0x19;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd0) = 0x9c4;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 1;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_mp5sd.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_mp5sd.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_mp5sd.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_mp5sd.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 5;
  *(undefined2 *)(param_1 + 0x26e) = 4;
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/mp5sd/mp5sd-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/mp5sd/mp5sd-fire.wav");
  param_1[0x360] = 9;
  *(undefined4 *)(param_1 + 0x364) = 0x10;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 6;
  return;
}

/* 10029510  FUN_10029510  (814 bytes)
 * undefined FUN_10029510(undefined1 * param_1)
 */
void __cdecl FUN_10029510(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x13;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d810625;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cb851ec;
  *(undefined4 *)(param_1 + 0x30) = 0x40266666;
  *(undefined4 *)(param_1 + 0x34) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"MP7-PDW");
  param_1[0x84] = 3;
  param_1[0x85] = 5;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/pdw.spr");
  param_1[0xca] = 0x1e;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd0) = 0xaf0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/56_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 2;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_pdw.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_pdw.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_pdw_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_pdw.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"onehanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 5;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/pdw/fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/pdw/fire-sil.wav");
  param_1[0x360] = 9;
  *(undefined4 *)(param_1 + 0x364) = 0xd;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x10;
  *(undefined4 *)(param_1 + 0x370) = 4;
  return;
}

/* 10029910  FUN_10029910  (779 bytes)
 * undefined FUN_10029910(undefined1 * param_1)
 */
void __cdecl FUN_10029910(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x11;
  param_1[8] = 10;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x1c;
  *(undefined4 *)(param_1 + 0x14) = 0x3fa66666;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Ruger-MK1");
  param_1[0x84] = 2;
  param_1[0x85] = 6;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/ruger.spr");
  param_1[0xca] = 5;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x5dc;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 1;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/22_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_ruger.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_ruger.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_ruger.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_ruger.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"onehanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 4;
  *(undefined2 *)(param_1 + 0x26e) = 3;
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x274) = 1;
  *(undefined2 *)(param_1 + 0x276) = 2;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/ruger/fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/ruger/fire.wav");
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 7;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 10029ce0  FUN_10029ce0  (879 bytes)
 * undefined FUN_10029ce0(undefined1 * param_1)
 */
void __cdecl FUN_10029ce0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  param_1[0x10] = 1;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x21;
  *(undefined4 *)(param_1 + 0x14) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3d7df3b6;
  *(undefined4 *)(param_1 + 0x30) = 0x41180000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Sawed-off");
  param_1[0x84] = 4;
  param_1[0x85] = 10;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/sawedoff.spr");
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x76c;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_sawedoff.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_sawedoff.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_sawedoff.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 2;
  *(undefined2 *)(param_1 + 0x27a) = 9;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x278) = 0xb;
  *(undefined2 *)(param_1 + 0x2a2) = 0xd;
  *(undefined2 *)(param_1 + 0x2a4) = 5;
  *(undefined2 *)(param_1 + 0x2a6) = 6;
  *(undefined2 *)(param_1 + 0x2b4) = 10;
  *(undefined2 *)(param_1 + 0x2a8) = 5;
  *(undefined2 *)(param_1 + 0x2aa) = 7;
  *(undefined2 *)(param_1 + 0x2ac) = 8;
  *(undefined2 *)(param_1 + 0x2ae) = 7;
  *(undefined2 *)(param_1 + 0x2b0) = 8;
  *(undefined2 *)(param_1 + 0x2b2) = 0xc;
  *(undefined2 *)(param_1 + 0x2dc) = 0xd;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/sawedoff/fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 0x11;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 0xb;
  return;
}

/* 1002a130  FUN_1002a130  (670 bytes)
 * undefined FUN_1002a130(undefined1 * param_1)
 */
void __cdecl FUN_1002a130(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x23;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 10;
  *(undefined4 *)(param_1 + 0x20) = 7;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Seal Knife");
  param_1[0x84] = 1;
  param_1[0x85] = 4;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/sealknife.spr");
  param_1[0xca] = 1;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 100;
  param_1[0xd4] = 1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_sealknife.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_sealknife.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_sealknife.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x288) = 2;
  *(undefined2 *)(param_1 + 0x28a) = 3;
  *(undefined2 *)(param_1 + 0x28c) = 4;
  *(undefined2 *)(param_1 + 0x28e) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 3;
  *(undefined4 *)(param_1 + 0x364) = 0;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  return;
}

/* 1002a480  FUN_1002a480  (807 bytes)
 * undefined FUN_1002a480(undefined1 * param_1)
 */
void __cdecl FUN_1002a480(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x14;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f0a3d71;
  *(undefined4 *)(param_1 + 0x28) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40e00000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"SPAS-12");
  param_1[0x84] = 4;
  param_1[0x85] = 6;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/spas12.spr");
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 0x834;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/shotgun_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_spas12.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_spas12.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_spas12.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 5;
  *(undefined2 *)(param_1 + 0x27a) = 2;
  *(undefined2 *)(param_1 + 0x27c) = 3;
  *(undefined2 *)(param_1 + 0x27e) = 4;
  *(undefined2 *)(param_1 + 0x280) = 6;
  *(undefined2 *)(param_1 + 0x282) = 7;
  *(undefined2 *)(param_1 + 0x284) = 8;
  *(undefined2 *)(param_1 + 0x286) = 9;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/spas12/spas12-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/spas12/spas12-pump.wav");
  param_1[0x360] = 1;
  *(undefined4 *)(param_1 + 0x364) = 0x17;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 10;
  return;
}

/* 1002a870  FUN_1002a870  (804 bytes)
 * undefined FUN_1002a870(undefined1 * param_1)
 */
void __cdecl FUN_1002a870(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 6;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x24;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3ef8d4fe;
  *(undefined4 *)(param_1 + 0x28) = 0x3d0f5c29;
  *(undefined4 *)(param_1 + 0x30) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"SPAS-15");
  param_1[0x84] = 4;
  param_1[0x85] = 0xb;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/spas15.spr");
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x834;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/shotgun_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_spas15.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_spas15.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_spas15.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x280) = 2;
  *(undefined2 *)(param_1 + 0x282) = 3;
  *(undefined2 *)(param_1 + 0x284) = 4;
  *(undefined2 *)(param_1 + 0x286) = 5;
  *(undefined2 *)(param_1 + 0x26c) = 6;
  *(undefined2 *)(param_1 + 0x2a2) = 7;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/spas15/spas15-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/spas15/spas15-pump.wav");
  param_1[0x360] = 1;
  *(undefined4 *)(param_1 + 0x364) = 0x17;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 10;
  return;
}

/* 1002ac60  FUN_1002ac60  (857 bytes)
 * undefined FUN_1002ac60(undefined1 * param_1)
 */
void __cdecl FUN_1002ac60(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x11;
  *(undefined4 *)(param_1 + 0x14) = 0x3fe66666;
  *(undefined4 *)(param_1 + 0x18) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x28) = 0x3cdd2f1b;
  *(undefined4 *)(param_1 + 0x30) = 0x40100000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c23d70a;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"STEYR-TMP");
  param_1[0x84] = 3;
  param_1[0x85] = 4;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/tmp.spr");
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x640;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_tmp.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_tmp.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_tmp_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_tmp.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"onehanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x278) = 5;
  *(undefined2 *)(param_1 + 0x2a4) = 7;
  *(undefined2 *)(param_1 + 0x2a6) = 10;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x2aa) = 8;
  *(undefined2 *)(param_1 + 0x2ac) = 9;
  *(undefined2 *)(param_1 + 0x2ae) = 8;
  *(undefined2 *)(param_1 + 0x2b0) = 9;
  *(undefined2 *)(param_1 + 0x2b2) = 6;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/tmp/fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/tmp/fire-sil.wav");
  param_1[0x360] = 9;
  *(undefined4 *)(param_1 + 0x364) = 9;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x10;
  *(undefined4 *)(param_1 + 0x370) = 4;
  return;
}

/* 1002b090  FUN_1002b090  (748 bytes)
 * undefined FUN_1002b090(undefined1 * param_1)
 */
void __cdecl FUN_1002b090(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xb;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e29fbe7;
  *(undefined4 *)(param_1 + 0x1c) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x28) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x41180000;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"USAS-12");
  param_1[0x84] = 4;
  param_1[0x85] = 3;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/usas12.spr");
  param_1[0xca] = 0x32;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xd0) = 0x13ec;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/shotgun_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 1;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_usas.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_usas.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_usas.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/usas/usas-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x1a;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 10;
  return;
}

/* 1002b440  FUN_1002b440  (836 bytes)
 * undefined FUN_1002b440(undefined1 * param_1)
 */
void __cdecl FUN_1002b440(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x20;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0x10;
  *(undefined2 *)(param_1 + 200) = 3;
  *(undefined4 *)(param_1 + 0x14) = 0x400ccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x28) = 0x3cfdf3b6;
  *(undefined4 *)(param_1 + 0x30) = 0x4039999a;
  *(undefined4 *)(param_1 + 0x34) = 0x3bc49ba6;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Mini-Uzi");
  param_1[0x84] = 3;
  param_1[0x85] = 1;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/uzi.spr");
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x514;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_uzi.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_uzi.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_uzi_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_uzi.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"onehanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x278) = 8;
  *(undefined2 *)(param_1 + 0x2a4) = 7;
  *(undefined2 *)(param_1 + 0x2a6) = 0xe;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x2aa) = 10;
  *(undefined2 *)(param_1 + 0x2ac) = 0xb;
  *(undefined2 *)(param_1 + 0x2ae) = 10;
  *(undefined2 *)(param_1 + 0x2b0) = 0xb;
  *(undefined2 *)(param_1 + 0x2b2) = 9;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/uzi/uzi-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/uzi/uzi-fire-sil.wav");
  param_1[0x360] = 9;
  *(undefined4 *)(param_1 + 0x364) = 9;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x16;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 1002b860  FUN_1002b860  (824 bytes)
 * undefined FUN_1002b860(undefined1 * param_1)
 */
void __cdecl FUN_1002b860(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x40;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x20;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 3;
  param_1[0x360] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f066666;
  *(undefined4 *)(param_1 + 0x28) = 0x3d0f5c29;
  *(undefined4 *)(param_1 + 0x30) = 0x404ccccd;
  *(undefined4 *)(param_1 + 0x34) = 0x3bbe61d0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Akimbo Mini-Uzi");
  param_1[0x84] = 5;
  param_1[0x85] = 3;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/uzi_akimbo.spr");
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x514;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_uzi_akimbo.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_uzi_akimbo.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_uzi_akimbo_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_uzi.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"akimbo");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 0xb;
  *(undefined2 *)(param_1 + 0x26e) = 4;
  *(undefined2 *)(param_1 + 0x270) = 0xc;
  *(undefined2 *)(param_1 + 0x272) = 0xd;
  *(undefined2 *)(param_1 + 0x274) = 0xe;
  *(undefined2 *)(param_1 + 0x276) = 0xc;
  *(undefined2 *)(param_1 + 0x296) = 0x18;
  *(undefined2 *)(param_1 + 0x29a) = 0x19;
  *(undefined2 *)(param_1 + 0x298) = 0x18;
  *(undefined2 *)(param_1 + 0x29c) = 0x19;
  *(undefined2 *)(param_1 + 0x29e) = 0x18;
  *(undefined2 *)(param_1 + 0x2a0) = 0x19;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/uzi/uzi-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/uzi/uzi-fire-sil.wav");
  *(undefined4 *)(param_1 + 0x364) = 9;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x16;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 1002bc70  FUN_1002bc70  (52 bytes)
 * void * FUN_1002bc70(uint param_1)
 */
void * __cdecl FUN_1002bc70(uint param_1)

{
  void *_Dst;
  
  _Dst = operator_new(param_1);
  _memset(_Dst,0,param_1);
  return _Dst;
}

/* 1002bcc0  FUN_1002bcc0  (280 bytes)
 * undefined FUN_1002bcc0(undefined4 * param_1)
 */
void __fastcall FUN_1002bcc0(undefined4 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002de50_1026ad9c;
  param_1[1] = &PTR_thunk_FUN_1002de30_1026ad90;
  param_1[2] = &PTR_thunk_FUN_100b5720_1026ad54;
  if ((param_1[0xb61] != 0) && ((void *)param_1[0xb61] != (void *)0x0)) {
    thunk_FUN_1002be20((void *)param_1[0xb61],1);
  }
  if ((param_1[0xb62] != 0) && ((void *)param_1[0xb62] != (void *)0x0)) {
    thunk_FUN_1002be20((void *)param_1[0xb62],1);
  }
  if ((param_1[0xb63] != 0) && ((void *)param_1[0xb63] != (void *)0x0)) {
    thunk_FUN_1002be20((void *)param_1[0xb63],1);
  }
  if ((param_1[0xb64] != 0) && ((void *)param_1[0xb64] != (void *)0x0)) {
    thunk_FUN_1002be20((void *)param_1[0xb64],1);
  }
  return;
}

/* 1002be20  FUN_1002be20  (54 bytes)
 * undefined4 * FUN_1002be20(uint param_1)
 */
undefined4 * __thiscall FUN_1002be20(void *this,uint param_1)

{
  thunk_FUN_100b4de0(this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 1002be70  FUN_1002be70  (940 bytes)
 * undefined FUN_1002be70(int param_1)
 */
void __fastcall FUN_1002be70(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Panel *pPVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  Panel *pPStack_78;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e552b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x11) = 1;
  if ((*(int *)(param_1 + 0x2d84) != 0) && (*(void **)(param_1 + 0x2d84) != (void *)0x0)) {
    thunk_FUN_1002be20(*(void **)(param_1 + 0x2d84),1);
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    pPStack_78 = (Panel *)0x3ff00000;
  }
  else {
    pPStack_78 = (Panel *)0x3fe00000;
  }
  fVar1 = (float)(double)(ZEXT48(pPStack_78) << 0x20);
  lVar8 = __ftol();
  iVar2 = (int)lVar8;
  lVar8 = __ftol();
  iVar3 = (int)lVar8;
  lVar8 = __ftol();
  iVar4 = (int)lVar8;
  pPVar5 = thunk_FUN_100b4d90(0xe8);
  local_8 = 0;
  if (pPVar5 == (Panel *)0x0) {
    pPStack_78 = (Panel *)0x0;
  }
  else {
    pPStack_78 = thunk_FUN_1002c310(pPVar5);
  }
  local_8 = 0xffffffff;
  *(Panel **)(param_1 + 0x2d84) = pPStack_78;
  if (param_1 == 0) {
    pPStack_78 = (Panel *)0x0;
  }
  else {
    pPStack_78 = (Panel *)(param_1 + 8);
  }
  thunk_FUN_100b4e30(*(void **)(param_1 + 0x2d84),8,8,DAT_102e1238 / 2,0x80,0x14,param_1,pPStack_78)
  ;
  if (*(int *)(param_1 + 0x42c) < 1) {
    thunk_FUN_100b5000(*(void **)(param_1 + 0x2d84),0,(uint *)PTR_s_1_Empty_Config_10289098,0xc3,
                       0x2d,0x2d,0x32,fVar1,1,0);
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\0') {
      pPStack_78 = (Panel *)PTR_s_1_Use_Last_Config_102890cc;
    }
    else {
      pPStack_78 = (Panel *)PTR_s_1_Use_New_Config_102890d0;
    }
    uVar13 = 0;
    uVar12 = 1;
    uVar10 = 0x32;
    uVar9 = 0x2d;
    fVar11 = fVar1;
    iVar6 = thunk_FUN_10030bd0();
    iVar7 = ((iVar6 - *(int *)(param_1 + 0x42c) < 0) - 1 & 0x96) + 0x2d;
    iVar6 = thunk_FUN_10030bd0();
    thunk_FUN_100b5000(*(void **)(param_1 + 0x2d84),0,(uint *)pPStack_78,
                       ((iVar6 - *(int *)(param_1 + 0x42c) < 0) - 1 & 0xffffff6a) + 0xc3,iVar7,uVar9
                       ,uVar10,fVar11,uVar12,uVar13);
  }
  thunk_FUN_100b5000(*(void **)(param_1 + 0x2d84),1,(uint *)PTR_s_2_Buy_1028909c,iVar2 / 2,iVar3 / 2
                     ,iVar4 / 2,0x32,fVar1,2,0);
  thunk_FUN_100b5000(*(void **)(param_1 + 0x2d84),2,(uint *)PTR_s_3_Remove_Item_102890a0,iVar2 / 2,
                     iVar3 / 2,iVar4 / 2,0x32,fVar1,3,0);
  thunk_FUN_100b5000(*(void **)(param_1 + 0x2d84),3,(uint *)PTR_s_4_Reset_Config_102890a4,iVar2 / 2,
                     iVar3 / 2,iVar4 / 2,0x32,fVar1,4,0);
  thunk_FUN_100b5000(*(void **)(param_1 + 0x2d84),4,(uint *)PTR_s_5_Save_Config_102890a8,iVar2 / 2,
                     iVar3 / 2,iVar4 / 2,0x32,fVar1,5,0);
  thunk_FUN_100b5000(*(void **)(param_1 + 0x2d84),5,(uint *)PTR_s_6_Load_Config_102890ac,iVar2 / 2,
                     iVar3 / 2,iVar4 / 2,0x32,fVar1,6,0);
  thunk_FUN_100b5000(*(void **)(param_1 + 0x2d84),6,(uint *)PTR_s_7_Buy_Random_102890b0,0x2d,0xc3,
                     0x2d,0x32,fVar1,7,0);
  thunk_FUN_100b5000(*(void **)(param_1 + 0x2d84),7,(uint *)PTR_s_0_Cancel_102890c8,100,100,0xcd,
                     0x32,0x3f800000,0,0);
  thunk_FUN_100b4f30(*(int **)(param_1 + 0x2d84));
  ExceptionList = local_10;
  return;
}

/* 1002c310  FUN_1002c310  (39 bytes)
 * Panel * FUN_1002c310(Panel * param_1)
 */
Panel * __fastcall FUN_1002c310(Panel *param_1)

{
  vgui::Panel::Panel(param_1);
  *(undefined ***)param_1 = &PTR_setPos_1026adac;
  return param_1;
}

/* 1002c340  FUN_1002c340  (651 bytes)
 * undefined FUN_1002c340(int param_1)
 */
void __fastcall FUN_1002c340(int param_1)

{
  ulonglong uVar1;
  Panel *pPVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  Panel *pPStack_7c;
  int local_28;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e554b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0xc) = 2;
  if ((*(int *)(param_1 + 0x2d88) != 0) && (*(void **)(param_1 + 0x2d88) != (void *)0x0)) {
    thunk_FUN_1002be20(*(void **)(param_1 + 0x2d88),1);
  }
  if (*(int *)(param_1 + 0xc) == 2) {
    pPStack_7c = (Panel *)0x3ff00000;
  }
  else {
    pPStack_7c = (Panel *)0x3fe00000;
  }
  uVar1 = ZEXT48(pPStack_7c);
  lVar3 = __ftol();
  lVar4 = __ftol();
  lVar5 = __ftol();
  pPVar2 = thunk_FUN_100b4d90(0xe8);
  local_8 = 0;
  if (pPVar2 == (Panel *)0x0) {
    pPStack_7c = (Panel *)0x0;
  }
  else {
    pPStack_7c = thunk_FUN_1002c310(pPVar2);
  }
  local_8 = 0xffffffff;
  *(Panel **)(param_1 + 0x2d88) = pPStack_7c;
  if (param_1 == 0) {
    pPStack_7c = (Panel *)0x0;
  }
  else {
    pPStack_7c = (Panel *)(param_1 + 8);
  }
  thunk_FUN_100b4e30(*(void **)(param_1 + 0x2d88),(1 < DAT_102da424) + 6,0x88,DAT_102e1238 / 2,0x80,
                     0x14,param_1,pPStack_7c);
  for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
    thunk_FUN_100b5000(*(void **)(param_1 + 0x2d88),local_28,
                       (uint *)(&PTR_s_1_Handguns_102890b4)[local_28],(int)lVar3 / 2,(int)lVar4 / 2,
                       (int)lVar5 / 2,0x32,(float)(double)(uVar1 << 0x20),0xb,local_28);
  }
  if (1 < DAT_102da424) {
    thunk_FUN_100b5000(*(void **)(param_1 + 0x2d88),local_28,(uint *)PTR_s_1_Buy_102890d4,
                       (int)lVar3 / 2,(int)lVar4 / 2,(int)lVar5 / 2,0x32,
                       (float)(double)(uVar1 << 0x20),0xb,local_28);
    local_28 = local_28 + 1;
  }
  thunk_FUN_100b5000(*(void **)(param_1 + 0x2d88),local_28,(uint *)PTR_s_0_Cancel_102890c8,100,100,
                     0xcd,0x32,0x3f800000,0,0);
  thunk_FUN_100b4f30(*(int **)(param_1 + 0x2d88));
  (**(code **)(**(int **)(param_1 + 0x2d88) + 0x24))(1);
  ExceptionList = local_10;
  return;
}

/* 1002c670  FUN_1002c670  (887 bytes)
 * undefined FUN_1002c670(int param_1)
 */
void __fastcall FUN_1002c670(int param_1)

{
  Panel *pPVar1;
  longlong lVar2;
  Panel *pPStack_a0;
  int local_4c;
  uint local_48 [8];
  undefined *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  int local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e556b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0xc) = 5;
  local_14 = param_1;
  if ((*(int *)(param_1 + 0x2d88) != 0) && (*(void **)(param_1 + 0x2d88) != (void *)0x0)) {
    thunk_FUN_1002be20(*(void **)(param_1 + 0x2d88),1);
  }
  if (*(int *)(local_14 + 0xc) == 2) {
    pPStack_a0 = (Panel *)0x3ff00000;
  }
  else {
    pPStack_a0 = (Panel *)0x3fe00000;
  }
  local_18 = (float)(double)(ZEXT48(pPStack_a0) << 0x20);
  lVar2 = __ftol();
  local_1c = (int)lVar2;
  lVar2 = __ftol();
  local_20 = (int)lVar2;
  lVar2 = __ftol();
  local_24 = (int)lVar2;
  pPVar1 = thunk_FUN_100b4d90(0xe8);
  local_8 = 0;
  if (pPVar1 == (Panel *)0x0) {
    pPStack_a0 = (Panel *)0x0;
  }
  else {
    pPStack_a0 = thunk_FUN_1002c310(pPVar1);
  }
  local_8 = 0xffffffff;
  *(Panel **)(local_14 + 0x2d88) = pPStack_a0;
  if (local_14 == 0) {
    pPStack_a0 = (Panel *)0x0;
  }
  else {
    pPStack_a0 = (Panel *)(local_14 + 8);
  }
  thunk_FUN_100b4e30(*(void **)(local_14 + 0x2d88),*(int *)(local_14 + 0x1c) + 1,0x88,
                     DAT_102e1238 / 2,0x80,0x14,local_14,pPStack_a0);
  for (local_4c = 0; local_4c < *(int *)(local_14 + 0x1c); local_4c = local_4c + 1) {
    if (*(int *)(local_14 + 0xb0 + local_4c * 0x38) != 0) {
      if (*(char *)(local_14 + 0xac + local_4c * 0x38) == '\0') {
        local_28 = thunk_FUN_1001d7b0(*(int *)(local_14 + 0xb0 + local_4c * 0x38));
        FUN_100bb6e0((undefined1 *)local_48,(byte_conflict *)"%i %s");
        thunk_FUN_100b5000(*(void **)(local_14 + 0x2d88),local_4c,local_48,local_1c / 2,local_20 / 2
                           ,local_24 / 2,0x32,local_18,8,local_4c);
      }
      else {
        FUN_100bb6e0((undefined1 *)local_48,"%i ");
        if ((*(uint *)(local_14 + 0xb0 + local_4c * 0x38) & 0x10) == 0) {
          if ((*(uint *)(local_14 + 0xb0 + local_4c * 0x38) & 0x20) != 0) {
            FUN_100bba30(local_48,(uint *)"Stealth Shoes");
          }
        }
        else {
          FUN_100bba30(local_48,(uint *)"Kevlar");
        }
        thunk_FUN_100b5000(*(void **)(local_14 + 0x2d88),local_4c,local_48,local_1c / 2,local_20 / 2
                           ,local_24 / 2,0x32,local_18,10,local_4c);
      }
    }
  }
  thunk_FUN_100b5000(*(void **)(local_14 + 0x2d88),local_4c,(uint *)PTR_s_0_Cancel_102890c8,100,100,
                     0xcd,0x32,0x3f800000,0,0);
  thunk_FUN_100b4f30(*(int **)(local_14 + 0x2d88));
  (**(code **)(**(int **)(local_14 + 0x2d88) + 0x24))(1);
  ExceptionList = local_10;
  return;
}

/* 1002cad0  FUN_1002cad0  (68 bytes)
 * undefined FUN_1002cad0(int param_1)
 */
void __fastcall FUN_1002cad0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 1;
  if (*(int *)(param_1 + 0x2d88) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2d88) + 0x24))(0);
  }
  return;
}

/* 1002cb30  FUN_1002cb30  (1189 bytes)
 * undefined FUN_1002cb30(int param_1)
 */
void __fastcall FUN_1002cb30(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Panel *pPVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int local_d4;
  int local_d0;
  int local_cc;
  Panel *pPStack_c4;
  uint local_70 [16];
  char local_2e;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  int local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e558b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0xc) = 3;
  local_14 = param_1;
  if ((*(int *)(param_1 + 0x2d8c) != 0) && (*(void **)(param_1 + 0x2d8c) != (void *)0x0)) {
    thunk_FUN_1002be20(*(void **)(param_1 + 0x2d8c),1);
  }
  if (*(int *)(local_14 + 0xc) == 3) {
    pPStack_c4 = (Panel *)0x3ff00000;
  }
  else {
    pPStack_c4 = (Panel *)0x3fe00000;
  }
  local_18 = (float)(double)(ZEXT48(pPStack_c4) << 0x20);
  local_2c = 0;
  lVar8 = __ftol();
  local_1c = (int)lVar8;
  lVar8 = __ftol();
  local_20 = (int)lVar8;
  lVar8 = __ftol();
  local_24 = (int)lVar8;
  for (local_28 = 0; local_28 < 9; local_28 = local_28 + 1) {
    if ((*(int *)(&DAT_1026ac78 + local_28 * 4 + *(int *)(local_14 + 0x20) * 0x24) != -1) &&
       (uVar3 = thunk_FUN_10030c50(*(int *)(&DAT_1026ac78 +
                                           local_28 * 4 + *(int *)(local_14 + 0x20) * 0x24)),
       (uVar3 & 0xff) == 0)) {
      local_2c = local_2c + 1;
    }
  }
  pPVar4 = thunk_FUN_100b4d90(0xe8);
  local_8 = 0;
  if (pPVar4 == (Panel *)0x0) {
    pPStack_c4 = (Panel *)0x0;
  }
  else {
    pPStack_c4 = thunk_FUN_1002c310(pPVar4);
  }
  local_8 = 0xffffffff;
  *(Panel **)(local_14 + 0x2d8c) = pPStack_c4;
  if (local_14 == 0) {
    pPStack_c4 = (Panel *)0x0;
  }
  else {
    pPStack_c4 = (Panel *)(local_14 + 8);
  }
  thunk_FUN_100b4e30(*(void **)(local_14 + 0x2d8c),local_2c + 1,0x108,DAT_102e1238 / 2,0x80,0x14,
                     local_14,pPStack_c4);
  local_28 = 0;
  do {
    iVar2 = local_28;
    if (local_2c <= local_28) {
      local_28 = local_28 + 1;
      thunk_FUN_100b5000(*(void **)(local_14 + 0x2d8c),iVar2,(uint *)PTR_s_0_Cancel_102890c8,100,100
                         ,0xcd,0x32,0x3f800000,0,0);
      thunk_FUN_100b4f30(*(int **)(local_14 + 0x2d8c));
      (**(code **)(**(int **)(local_14 + 0x2d8c) + 0x24))(1);
      ExceptionList = local_10;
      return;
    }
    if ((*(int *)(&DAT_1026ac78 + local_28 * 4 + *(int *)(local_14 + 0x20) * 0x24) != -1) &&
       (uVar3 = thunk_FUN_10030c50(*(int *)(&DAT_1026ac78 +
                                           local_28 * 4 + *(int *)(local_14 + 0x20) * 0x24)),
       (uVar3 & 0xff) == 0)) {
      local_2e = *(int *)(&DAT_1026ac78 + local_28 * 4 + *(int *)(local_14 + 0x20) * 0x24) ==
                 *(int *)(local_14 + 0x24);
      puVar5 = thunk_FUN_1001d7b0(*(int *)(&DAT_1026ac78 +
                                          local_28 * 4 + *(int *)(local_14 + 0x20) * 0x24));
      iVar2 = *(int *)(puVar5 + 0xd0);
      iVar7 = *(int *)(local_14 + 0x42c);
      iVar6 = thunk_FUN_10030bd0();
      local_2d = iVar2 + iVar7 <= iVar6;
      if ((bool)local_2d) {
        puVar5 = thunk_FUN_1001d7b0(*(int *)(&DAT_1026ac78 +
                                            local_28 * 4 + *(int *)(local_14 + 0x20) * 0x24));
        bVar1 = puVar5[0xca];
        iVar2 = *(int *)(local_14 + 0x430);
        iVar7 = thunk_FUN_10032600();
        if (iVar7 < (int)((uint)bVar1 + iVar2)) goto LAB_1002ce22;
        pPStack_c4._0_1_ = '\x01';
      }
      else {
LAB_1002ce22:
        pPStack_c4._0_1_ = '\0';
      }
      local_2d = (char)pPStack_c4;
      thunk_FUN_1001d7b0(*(int *)(&DAT_1026ac78 + local_28 * 4 + *(int *)(local_14 + 0x20) * 0x24));
      FUN_100bb6e0((undefined1 *)local_70,(byte_conflict *)"%i %s");
      if ((*(int *)(local_14 + 0xc) == 3) || (local_2e != '\0')) {
        pPStack_c4 = (Panel *)0x3ff00000;
      }
      else {
        pPStack_c4 = (Panel *)0x3fe00000;
      }
      if (local_2d == '\0') {
        local_cc = 0x2d;
        local_d0 = 0x2d;
        local_d4 = 0xc3;
      }
      else {
        local_cc = local_24 / 2;
        local_d0 = local_20 / 2;
        local_d4 = local_1c / 2;
      }
      thunk_FUN_100b5000(*(void **)(local_14 + 0x2d8c),local_28,local_70,local_d4,local_d0,local_cc,
                         0x32,(float)(double)(ZEXT48(pPStack_c4) << 0x20),8,local_28);
    }
    local_28 = local_28 + 1;
  } while( true );
}

/* 1002d100  FUN_1002d100  (68 bytes)
 * undefined FUN_1002d100(int param_1)
 */
void __fastcall FUN_1002d100(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 2;
  if (*(int *)(param_1 + 0x2d8c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2d8c) + 0x24))(0);
  }
  return;
}

/* 1002d160  FUN_1002d160  (1895 bytes)
 * undefined FUN_1002d160(void * param_1)
 */
void __fastcall FUN_1002d160(void *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  Panel *pPVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int local_d4;
  int local_d0;
  Panel *pPStack_cc;
  uint local_78 [16];
  char local_35;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  void *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e55ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)param_1 + 0xc) = 4;
  local_14 = param_1;
  if ((*(int *)((int)param_1 + 0x2d90) != 0) && (*(void **)((int)param_1 + 0x2d90) != (void *)0x0))
  {
    thunk_FUN_1002be20(*(void **)((int)param_1 + 0x2d90),1);
  }
  if (*(int *)((int)local_14 + 0xc) == 3) {
    pPStack_cc = (Panel *)0x3ff00000;
  }
  else {
    pPStack_cc = (Panel *)0x3fe00000;
  }
  local_18 = (float)(double)(ZEXT48(pPStack_cc) << 0x20);
  local_2c = 0;
  lVar8 = __ftol();
  local_1c = (int)lVar8;
  lVar8 = __ftol();
  local_20 = (int)lVar8;
  lVar8 = __ftol();
  local_24 = (int)lVar8;
  local_30 = thunk_FUN_10030660(*(uint *)((int)local_14 + 0x24),*(uint *)((int)local_14 + 0x28),'\0'
                                ,'\0');
  iVar7 = local_30 + *(int *)((int)local_14 + 0x42c);
  iVar2 = thunk_FUN_10030bd0();
  local_35 = iVar7 <= iVar2;
  if ((bool)local_35) {
    puVar3 = thunk_FUN_1001d7b0(*(int *)((int)local_14 + 0x24));
    bVar1 = puVar3[0xca];
    iVar2 = *(int *)((int)local_14 + 0x430);
    iVar7 = thunk_FUN_10032600();
    if (iVar7 < (int)((uint)bVar1 + iVar2)) goto LAB_1002d2bf;
    pPStack_cc._0_1_ = '\x01';
  }
  else {
LAB_1002d2bf:
    pPStack_cc._0_1_ = '\0';
  }
  local_35 = (char)pPStack_cc;
  for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
    uVar4 = thunk_FUN_10030cb0(local_14,1 << ((byte)local_28 & 0x1f));
    if ((uVar4 & 0xff) != 0) {
      local_2c = local_2c + 1;
    }
  }
  puVar3 = thunk_FUN_1001d7b0(*(int *)((int)local_14 + 0x24));
  if (*(short *)(puVar3 + 0xc6) == -1) {
    puVar3 = thunk_FUN_1001d7b0(*(int *)((int)local_14 + 0x24));
    if (puVar3[0xd4] != '\0') {
      local_2c = local_2c + 1;
    }
  }
  else {
    local_2c = local_2c + 1;
  }
  pPVar5 = thunk_FUN_100b4d90(0xe8);
  local_8 = 0;
  if (pPVar5 == (Panel *)0x0) {
    pPStack_cc = (Panel *)0x0;
  }
  else {
    pPStack_cc = thunk_FUN_1002c310(pPVar5);
  }
  local_8 = 0xffffffff;
  *(Panel **)((int)local_14 + 0x2d90) = pPStack_cc;
  if (local_14 == (void *)0x0) {
    pPStack_cc = (Panel *)0x0;
  }
  else {
    pPStack_cc = (Panel *)((int)local_14 + 8);
  }
  thunk_FUN_100b4e30(*(void **)((int)local_14 + 0x2d90),local_2c + 2,0x188,DAT_102e1238 / 2,0x80,
                     0x14,(int)local_14,pPStack_cc);
  thunk_FUN_100b5000(*(void **)((int)local_14 + 0x2d90),0,(uint *)PTR_s_1_Buy_102890d4,
                     (-(uint)(local_35 != '\0') & 0xffffff6a) + 0xc3,
                     (-(uint)(local_35 != '\0') & 0x96) + 0x2d,0x2d,0x32,0x3f800000,8,
                     *(undefined4 *)((int)local_14 + 0x24));
  for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
    uVar4 = thunk_FUN_10030cb0(local_14,1 << ((byte)local_28 & 0x1f));
    if ((uVar4 & 0xff) != 0) {
      local_34 = local_30;
      switch(local_28) {
      case 0:
        FUN_100bb6e0((undefined1 *)local_78,(byte_conflict *)"%i Silencer  %i");
        local_34 = local_34 + 900;
        break;
      case 1:
        FUN_100bb6e0((undefined1 *)local_78,(byte_conflict *)"%i Lasersight  %i");
        local_34 = local_34 + 800;
        break;
      case 2:
        FUN_100bb6e0((undefined1 *)local_78,(byte_conflict *)"%i Flashlight  %i");
        local_34 = local_34 + 500;
        break;
      case 3:
        FUN_100bb6e0((undefined1 *)local_78,(byte_conflict *)"%i Scope  %i");
        local_34 = local_34 + 0x708;
      }
      iVar7 = local_34 + *(int *)((int)local_14 + 0x42c);
      iVar2 = thunk_FUN_10030bd0();
      local_35 = iVar7 <= iVar2;
      if ((bool)local_35) {
        pPStack_cc = (Panel *)(local_24 / 2);
        local_d0 = local_20 / 2;
        local_d4 = local_1c / 2;
      }
      else {
        pPStack_cc = (Panel *)0x2d;
        local_d0 = 0x2d;
        local_d4 = 0xc3;
      }
      thunk_FUN_100b5000(*(void **)((int)local_14 + 0x2d90),local_28 + 1,local_78,local_d4,local_d0,
                         pPStack_cc,0x32,0x3f800000,10,local_28);
    }
  }
  puVar3 = thunk_FUN_1001d7b0(*(int *)((int)local_14 + 0x24));
  if (*(short *)(puVar3 + 0xc6) == -1) {
    puVar3 = thunk_FUN_1001d7b0(*(int *)((int)local_14 + 0x24));
    if (puVar3[0xd4] == '\0') goto LAB_1002d84c;
    local_30 = thunk_FUN_10030660(*(uint *)((int)local_14 + 0x24),0,'\x01','\0');
    iVar7 = local_30 + *(int *)((int)local_14 + 0x42c);
    iVar2 = thunk_FUN_10030bd0();
    local_35 = iVar7 <= iVar2;
    if ((bool)local_35) {
      puVar3 = thunk_FUN_1001d7b0(*(int *)((int)local_14 + 0x24));
      bVar1 = puVar3[0xca];
      puVar3 = thunk_FUN_1001d7b0(*(int *)((int)local_14 + 0x24));
      iVar2 = *(int *)(puVar3 + 0x24);
      iVar7 = *(int *)((int)local_14 + 0x430);
      iVar6 = thunk_FUN_10032600();
      if (iVar6 < (int)((uint)bVar1 * iVar2 + iVar7)) goto LAB_1002d7ea;
      pPStack_cc._0_1_ = '\x01';
    }
    else {
LAB_1002d7ea:
      pPStack_cc._0_1_ = '\0';
    }
    local_35 = (char)pPStack_cc;
    thunk_FUN_100b5000(*(void **)((int)local_14 + 0x2d90),local_28,
                       (uint *)PTR_s_6_Full_Load_102890e0,
                       (-(uint)((char)pPStack_cc != '\0') & 0xffffff6a) + 0xc3,
                       (-(uint)((char)pPStack_cc != '\0') & 0x96) + 0x2d,0x2d,0x32,0x3f800000,9,
                       *(undefined4 *)((int)local_14 + 0x24));
    goto LAB_1002d84c;
  }
  local_30 = thunk_FUN_10030660(*(uint *)((int)local_14 + 0x24),*(uint *)((int)local_14 + 0x28),
                                '\x01','\0');
  iVar7 = local_30 + *(int *)((int)local_14 + 0x42c);
  iVar2 = thunk_FUN_10030bd0();
  local_35 = iVar7 <= iVar2;
  if ((bool)local_35) {
    puVar3 = thunk_FUN_1001d7b0(*(int *)((int)local_14 + 0x24));
    bVar1 = puVar3[0xca];
    iVar2 = *(int *)((int)local_14 + 0x430);
    iVar7 = thunk_FUN_10032600();
    if (iVar7 < (int)(iVar2 + (uint)bVar1 * 2)) goto LAB_1002d6c7;
    pPStack_cc._0_1_ = '\x01';
  }
  else {
LAB_1002d6c7:
    pPStack_cc._0_1_ = '\0';
  }
  local_35 = (char)pPStack_cc;
  puVar3 = thunk_FUN_1001d7b0(*(int *)((int)local_14 + 0x24));
  thunk_FUN_100b5000(*(void **)((int)local_14 + 0x2d90),local_28,(uint *)PTR_s_6_Buy_Akimbo_102890dc
                     ,(-(uint)(local_35 != '\0') & 0xffffff6a) + 0xc3,
                     (-(uint)(local_35 != '\0') & 0x96) + 0x2d,0x2d,0x32,0x3f800000,8,
                     (int)*(short *)(puVar3 + 0xc6));
LAB_1002d84c:
  iVar2 = local_28;
  local_28 = local_28 + 1;
  thunk_FUN_100b5000(*(void **)((int)local_14 + 0x2d90),iVar2,(uint *)PTR_s_0_Cancel_102890c8,100,
                     100,0xcd,0x32,0x3f800000,0,0);
  thunk_FUN_100b4f30(*(int **)((int)local_14 + 0x2d90));
  (**(code **)(**(int **)((int)local_14 + 0x2d90) + 0x24))(1);
  ExceptionList = local_10;
  return;
}

/* 1002dac0  FUN_1002dac0  (68 bytes)
 * undefined FUN_1002dac0(int param_1)
 */
void __fastcall FUN_1002dac0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 3;
  if (*(int *)(param_1 + 0x2d90) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2d90) + 0x24))(0);
  }
  return;
}

/* 1002db20  FUN_1002db20  (228 bytes)
 * undefined FUN_1002db20(int param_1)
 */
void __fastcall FUN_1002db20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_4c;
  
  if (*(int *)(param_1 + 0x2d84) != 0) {
    if (*(int *)(param_1 + 0x42c) < 1) {
      thunk_FUN_100b5290(*(void **)(param_1 + 0x2d84),0,(uint *)PTR_s_1_Empty_Config_10289098,0xc3,
                         0x2d,0x2d,0x32,0x3f800000,1,0);
    }
    else {
      if (*(char *)(param_1 + 0x10) == '\0') {
        local_4c = (uint *)PTR_s_1_Use_Last_Config_102890cc;
      }
      else {
        local_4c = (uint *)PTR_s_1_Use_New_Config_102890d0;
      }
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0x3f800000;
      uVar4 = 0x32;
      uVar3 = 0x2d;
      iVar1 = thunk_FUN_10030bd0();
      iVar2 = ((iVar1 - *(int *)(param_1 + 0x42c) < 0) - 1 & 0x96) + 0x2d;
      iVar1 = thunk_FUN_10030bd0();
      thunk_FUN_100b5290(*(void **)(param_1 + 0x2d84),0,local_4c,
                         ((iVar1 - *(int *)(param_1 + 0x42c) < 0) - 1 & 0xffffff6a) + 0xc3,iVar2,
                         uVar3,uVar4,uVar5,uVar6,uVar7);
    }
  }
  return;
}

/* 1002dc40  FUN_1002dc40  (395 bytes)
 * undefined FUN_1002dc40(char param_1)
 */
void __thiscall FUN_1002dc40(void *this,char param_1)

{
  float10 fVar1;
  
  if (param_1 == '\0') {
    *(uint *)(*(int *)(DAT_102e15e0 + 0xaac) + 4) =
         *(uint *)(*(int *)(DAT_102e15e0 + 0xaac) + 4) & 0xfffffffe;
    *(undefined4 *)((int)this + 0xc) = 1;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *(uint *)(*(int *)(DAT_102e15e0 + 0xaac) + 4) =
         *(uint *)(*(int *)(DAT_102e15e0 + 0xaac) + 4) | 1;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    *(undefined1 *)((int)this + 0x10) = 0;
    FUN_100bc090((undefined4 *)((int)this + 0x2c),(undefined4 *)((int)this + 0x434),0x408);
    if (*(char *)((int)this + 0x11) != '\0') {
      *(undefined1 *)((int)this + 0x11) = 0;
      fVar1 = (float10)(*DAT_102e1564)(0x3f000000,0x3f800000);
      thunk_FUN_10030f60(this,(float)fVar1);
    }
    thunk_FUN_100304e0(this);
    thunk_FUN_1002db20((int)this);
  }
  if (*(int *)((int)this + 0x2d84) != 0) {
    (**(code **)(**(int **)((int)this + 0x2d84) + 0x24))(param_1);
  }
  if (*(int *)((int)this + 0x2d88) != 0) {
    (**(code **)(**(int **)((int)this + 0x2d88) + 0x24))(0);
  }
  if (*(int *)((int)this + 0x2d8c) != 0) {
    (**(code **)(**(int **)((int)this + 0x2d8c) + 0x24))(0);
  }
  if (*(int *)((int)this + 0x2d90) != 0) {
    (**(code **)(**(int **)((int)this + 0x2d90) + 0x24))(0);
  }
  return;
}

/* 1002de30  FUN_1002de30  (19 bytes)
 * undefined FUN_1002de30(void)
 * called by: thunk_FUN_1002de30
 */
void FUN_1002de30(void)

{
  return;
}

/* 1002de50  FUN_1002de50  (974 bytes)
 * undefined FUN_1002de50(void * param_1)
 * called by: thunk_FUN_1002de50
 */
void FUN_1002de50(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_94 [16];
  uint local_54 [16];
  int local_14;
  undefined4 local_10;
  void *local_c;
  void *local_8;
  
  local_c = param_1;
  thunk_FUN_10032550(param_1,&local_10,&local_14);
  switch(local_10) {
  case 0:
    switch(*(undefined4 *)((int)local_8 + 0xc)) {
    case 1:
      thunk_FUN_100b4d50(*(undefined4 **)(DAT_102e15e0 + 0xaac));
      break;
    case 2:
    case 5:
      thunk_FUN_1002cad0((int)local_8);
    case 3:
      thunk_FUN_1002d100((int)local_8);
    case 4:
      thunk_FUN_1002dac0((int)local_8);
    }
    break;
  case 1:
    uVar1 = thunk_FUN_1002f2e0((int)local_8);
    if ((uVar1 & 0xff) != 0) {
      thunk_FUN_100b4d50(*(undefined4 **)(DAT_102e15e0 + 0xaac));
    }
    break;
  case 2:
    thunk_FUN_1002c340((int)local_8);
    break;
  case 3:
    thunk_FUN_1002c670((int)local_8);
    break;
  case 4:
    _memset((void *)((int)local_8 + 0x2c),0,0x408);
    thunk_FUN_100873d0(&DAT_102e024c,(uint *)"Config Reset",0,0,0,0x14,0);
    *(undefined1 *)((int)local_8 + 0x10) = 1;
    *(undefined4 *)((int)local_8 + 0x14) = 0;
    thunk_FUN_1002db20((int)local_8);
    break;
  case 7:
    thunk_FUN_10030f60(local_8,0.0);
    break;
  case 8:
    iVar2 = *(int *)((int)local_8 + 0xc);
    if (iVar2 == 3) {
      *(undefined4 *)((int)local_8 + 0x24) =
           *(undefined4 *)(&DAT_1026ac78 + local_14 * 4 + *(int *)((int)local_8 + 0x20) * 0x24);
      thunk_FUN_1002d160(local_8);
    }
    else if (iVar2 == 4) {
      thunk_FUN_1002fb40(local_8,*(uint *)((int)local_8 + 0x24),*(uint *)((int)local_8 + 0x28),'\0',
                         '\0');
    }
    else if (iVar2 == 5) {
      thunk_FUN_1001d7b0(*(int *)((int)local_8 + local_14 * 0x38 + 0xb0));
      FUN_100bb6e0((undefined1 *)local_54,(byte_conflict *)"%s removed.");
      thunk_FUN_100873d0(&DAT_102e024c,local_54,0,0,0,0x14,0);
      thunk_FUN_10030260(local_8,local_14);
      thunk_FUN_100304e0(local_8);
      if (*(int *)((int)local_8 + 0x1c) == 0) {
        thunk_FUN_1002cad0((int)local_8);
      }
      thunk_FUN_100b5340(*(void **)((int)local_8 + 0x2d88),local_14);
    }
    break;
  case 9:
    thunk_FUN_1002fb40(local_8,*(uint *)((int)local_8 + 0x24),*(uint *)((int)local_8 + 0x28),'\x01',
                       '\0');
    break;
  case 10:
    if (*(int *)((int)local_8 + 0xc) == 4) {
      uVar1 = thunk_FUN_10030cb0(local_8,1 << ((byte)local_14 & 0x1f));
      if ((uVar1 & 0xff) != 0) {
        *(uint *)((int)local_8 + 0x28) =
             *(uint *)((int)local_8 + 0x28) | 1 << ((byte)local_14 & 0x1f);
        iVar2 = thunk_FUN_1002fae0(local_8,*(int *)((int)local_8 + 0x24));
        if (iVar2 != 0) {
          thunk_FUN_10030260(local_8,iVar2);
          thunk_FUN_1002fb40(local_8,*(uint *)((int)local_8 + 0x24),*(uint *)((int)local_8 + 0x28),
                             '\0','\0');
        }
      }
    }
    else if (*(int *)((int)local_8 + 0xc) == 5) {
      FUN_100bb6e0((undefined1 *)local_94,(byte_conflict *)"%s removed");
      thunk_FUN_100873d0(&DAT_102e024c,local_94,0,0,0,0x14,0);
      thunk_FUN_10030260(local_8,local_14);
      thunk_FUN_100304e0(local_8);
      if (*(int *)((int)local_8 + 0x1c) == 0) {
        thunk_FUN_1002cad0((int)local_8);
      }
      thunk_FUN_100b5340(*(void **)((int)local_8 + 0x2d88),local_14);
    }
    break;
  case 0xb:
    if (*(int *)((int)local_8 + 0xc) == 2) {
      *(int *)((int)local_8 + 0x20) = local_14;
      thunk_FUN_1002cb30((int)local_8);
    }
  }
  return;
}

/* 1002e370  FUN_1002e370  (1118 bytes)
 * undefined FUN_1002e370(int param_1)
 * called by: thunk_FUN_1002e370
 */
void __thiscall FUN_1002e370(void *this,int param_1)

{
  uint uVar1;
  uint local_44 [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  switch(*(undefined4 *)((int)this + 4)) {
  case 1:
    switch(param_1) {
    case 0xd:
    case 0x31:
      uVar1 = thunk_FUN_1002f2e0((int)this + -8);
      if ((uVar1 & 0xff) != 0) {
        thunk_FUN_100b4d50(*(undefined4 **)(DAT_102e15e0 + 0xaac));
      }
      break;
    case 0x1b:
    case 0x30:
      thunk_FUN_100b4d50(*(undefined4 **)(DAT_102e15e0 + 0xaac));
      break;
    case 0x32:
      thunk_FUN_1002c340((int)this + -8);
      break;
    case 0x33:
      thunk_FUN_1002c670((int)this + -8);
      break;
    case 0x34:
      _memset((void *)((int)this + 0x24),0,0x408);
      thunk_FUN_100873d0(&DAT_102e024c,(uint *)"Config Reset",0,0,0,0x14,0);
      *(undefined1 *)((int)local_8 + 8) = 1;
      *(undefined4 *)((int)local_8 + 0xc) = 0;
      thunk_FUN_1002db20((int)local_8 + -8);
      break;
    case 0x37:
      thunk_FUN_10030f60((void *)((int)this + -8),0.0);
    }
    break;
  case 2:
    local_c = param_1 + -0x30;
    if (local_c != 6) {
      if ((local_c < 1) || (5 < local_c)) {
        if ((param_1 == 0x1b) || (local_c == 0)) {
          thunk_FUN_1002cad0((int)this + -8);
        }
      }
      else if (*(int *)(&DAT_1026ac74 + local_c * 4) != -1) {
        *(int *)((int)this + 0x18) = param_1 + -0x31;
        thunk_FUN_1002cb30((int)this + -8);
      }
    }
    break;
  case 3:
    local_10 = param_1 + -0x30;
    if ((local_10 < 1) || (9 < local_10)) {
      if ((param_1 == 0x1b) || (local_10 == 0)) {
        thunk_FUN_1002d100((int)this + -8);
      }
    }
    else {
      *(undefined4 *)((int)this + 0x1c) =
           *(undefined4 *)(&DAT_1026ac74 + local_10 * 4 + *(int *)((int)this + 0x18) * 0x24);
      thunk_FUN_1002d160((void *)((int)this + -8));
    }
    break;
  case 4:
    local_14 = param_1 + -0x30;
    if ((local_14 == 1) || (local_14 == 6)) {
      thunk_FUN_1002fb40((void *)((int)this + -8),*(uint *)((int)this + 0x1c),
                         *(uint *)((int)this + 0x20),local_14 == 6,'\0');
    }
    else if ((local_14 < 2) || (5 < local_14)) {
      if ((param_1 == 0x1b) || ((param_1 == 0xd || (local_14 == 0)))) {
        thunk_FUN_1002dac0((int)this + -8);
      }
    }
    else {
      uVar1 = thunk_FUN_10030cb0((void *)((int)this + -8),1 << ((char)local_14 - 2U & 0x1f));
      if ((uVar1 & 0xff) != 0) {
        *(uint *)((int)local_8 + 0x20) =
             *(uint *)((int)local_8 + 0x20) | 1 << ((char)local_14 - 2U & 0x1f);
        local_18 = thunk_FUN_1002fae0((void *)((int)local_8 + -8),*(int *)((int)local_8 + 0x1c));
        if (local_18 != 0) {
          thunk_FUN_10030260((void *)((int)local_8 + -8),local_18);
          thunk_FUN_1002fb40((void *)((int)local_8 + -8),*(uint *)((int)local_8 + 0x1c),
                             *(uint *)((int)local_8 + 0x20),'\0','\0');
        }
      }
    }
    break;
  case 5:
    local_1c = param_1 + -0x30;
    if ((local_1c < 1) || (9 < local_1c)) {
      if ((param_1 == 0x1b) || (local_1c == 0)) {
        thunk_FUN_1002cad0((int)this + -8);
      }
    }
    else {
      local_20 = -1;
      local_24 = 0;
      while ((local_24 < 0x10 && (local_20 == -1))) {
        if ((*(int *)((int)this + local_24 * 0x38 + 0xa8) != 0) && (local_24 + 1 == local_1c)) {
          local_20 = local_24;
        }
        local_24 = local_24 + 1;
      }
      if (local_20 != -1) {
        if (*(char *)((int)this + local_20 * 0x38 + 0xa4) == '\0') {
          thunk_FUN_1001d7b0(*(int *)((int)this + local_20 * 0x38 + 0xa8));
          FUN_100bb6e0((undefined1 *)local_44,(byte_conflict *)"%s Removed");
        }
        else {
          FUN_100bb6e0((undefined1 *)local_44,(byte_conflict *)"%s Removed");
        }
        thunk_FUN_100873d0(&DAT_102e024c,local_44,0,0,0,0x14,0);
        thunk_FUN_10030260((void *)((int)local_8 + -8),local_20);
        thunk_FUN_100304e0((void *)((int)local_8 + -8));
        if (*(int *)((int)local_8 + 0x14) == 0) {
          thunk_FUN_1002cad0((int)local_8 + -8);
        }
      }
    }
  }
  return;
}

/* 1002e960  FUN_1002e960  (1935 bytes)
 * undefined FUN_1002e960(int param_1)
 */
void __fastcall FUN_1002e960(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  longlong lVar9;
  int local_80;
  int local_7c;
  int local_78;
  int local_18;
  int local_10;
  uint local_c;
  
  lVar9 = __ftol();
  iVar2 = (int)lVar9;
  lVar9 = __ftol();
  iVar3 = (int)lVar9;
  lVar9 = __ftol();
  iVar4 = (int)lVar9;
  (*DAT_102e1484)(8,8,0x280,0x13,iVar2 / 2,iVar3 / 2,iVar4 / 2,0x32);
  cVar1 = thunk_FUN_10030c10();
  if (cVar1 == '\0') {
    FUN_100bb6e0(&DAT_102b82e0,(byte_conflict *)"(Total: %i)");
  }
  else {
    thunk_FUN_10030bd0();
    FUN_100bb6e0(&DAT_102b82e0,(byte_conflict *)"Remain Cash : %i (Total: %i)");
  }
  iVar5 = thunk_FUN_10030bd0();
  if (iVar5 == *(int *)(param_1 + 0x42c) || iVar5 - *(int *)(param_1 + 0x42c) < 0) {
    local_78 = 0x2d;
  }
  else {
    local_78 = iVar4 / 2;
  }
  iVar5 = thunk_FUN_10030bd0();
  if (iVar5 == *(int *)(param_1 + 0x42c) || iVar5 - *(int *)(param_1 + 0x42c) < 0) {
    local_7c = 0x2d;
  }
  else {
    local_7c = iVar3 / 2;
  }
  iVar5 = thunk_FUN_10030bd0();
  if (iVar5 == *(int *)(param_1 + 0x42c) || iVar5 - *(int *)(param_1 + 0x42c) < 0) {
    local_80 = 0xc3;
  }
  else {
    local_80 = iVar2 / 2;
  }
  thunk_FUN_10047f00(8,8,DAT_102e1234,&DAT_102b82e0,local_80,local_7c,local_78);
  thunk_FUN_10032600();
  FUN_100bb6e0(&DAT_102b82e0,(byte_conflict *)"Free Slots : %i");
  iVar5 = thunk_FUN_10032600();
  if (iVar5 == *(int *)(param_1 + 0x430) || iVar5 - *(int *)(param_1 + 0x430) < 0) {
    local_78 = 0x2d;
  }
  else {
    local_78 = iVar4 / 2;
  }
  iVar5 = thunk_FUN_10032600();
  if (iVar5 == *(int *)(param_1 + 0x430) || iVar5 - *(int *)(param_1 + 0x430) < 0) {
    local_7c = 0x2d;
  }
  else {
    local_7c = iVar3 / 2;
  }
  iVar5 = thunk_FUN_10032600();
  if (iVar5 == *(int *)(param_1 + 0x430) || iVar5 - *(int *)(param_1 + 0x430) < 0) {
    local_80 = 0xc3;
  }
  else {
    local_80 = iVar2 / 2;
  }
  thunk_FUN_10047f00(0x108,8,DAT_102e1234,&DAT_102b82e0,local_80,local_7c,local_78);
  for (local_c = 1; (int)local_c < 6; local_c = local_c + 1) {
    iVar5 = (local_c - 1) * 0x80 + 8;
    (*DAT_102e1484)(iVar5,0x1c,0x80,0x14,iVar2 / 2,iVar3 / 2,iVar4 / 2,0x32);
    thunk_FUN_10088620(&DAT_102da3c8,iVar5,0x1c,2,local_c,iVar2 / 2,iVar3 / 2,iVar4 / 2);
    local_18 = 0x30;
    for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
      if ((*(int *)(param_1 + 0xb0 + local_10 * 0x38) == 0) ||
         (*(char *)(param_1 + 0xac + local_10 * 0x38) == '\0')) {
        if (*(int *)(param_1 + 0xb0 + local_10 * 0x38) != 0) {
          puVar6 = thunk_FUN_1001d7b0(*(int *)(param_1 + 0xb0 + local_10 * 0x38));
          if ((byte)puVar6[0x84] == local_c) {
            uVar7 = thunk_FUN_10030c50(*(int *)(param_1 + 0xb0 + local_10 * 0x38));
            local_80 = iVar2;
            local_7c = iVar3;
            local_78 = iVar4;
            if ((uVar7 & 0xff) != 0) {
              local_78 = 0x2d;
              local_7c = 0x2d;
              local_80 = 0xc3;
            }
            (*DAT_102e1468)(*(undefined4 *)
                             (&DAT_102db794 + *(int *)(param_1 + 0xb0 + local_10 * 0x38) * 4),
                            local_80,local_7c,local_78);
            (*DAT_102e1474)(0,iVar5,local_18,0);
            if (*(int *)(param_1 + 0xe0 + local_10 * 0x38) == 0) {
              if (puVar6[8] != '\0') {
                thunk_FUN_10088620(&DAT_102da3c8,iVar5,local_18 + 5,5,
                                   *(int *)(param_1 + 0x2c + (uint)(byte)puVar6[8] * 8),iVar2,iVar3,
                                   iVar4);
              }
            }
            else {
              thunk_FUN_10088620(&DAT_102da3c8,iVar5,local_18 + 5,2,
                                 *(int *)(param_1 + 0xe0 + local_10 * 0x38),iVar2,iVar3,iVar4);
            }
            if ((*(int *)(param_1 + 0xb4 + local_10 * 0x38) != 0) &&
               (thunk_FUN_1006b830((uint *)&DAT_102b82e0,*(uint *)(param_1 + 0xb4 + local_10 * 0x38)
                                  ), DAT_102b82e0 != '\0')) {
              thunk_FUN_10047f00(iVar5,local_18 + 0x14,DAT_102e1234,&DAT_102b82e0,iVar2 / 2,
                                 iVar3 / 2,iVar4 / 2);
            }
            local_18 = local_18 + 0x30;
          }
          if ((*(char *)(param_1 + 0xdc + local_10 * 0x38) != '\0') &&
             (puVar8 = thunk_FUN_1001d7b0((int)*(short *)(puVar6 + 0xc6)),
             (byte)puVar8[0x84] == local_c)) {
            uVar7 = thunk_FUN_10030c50((int)*(short *)(puVar6 + 0xc6));
            local_80 = iVar2;
            local_7c = iVar3;
            local_78 = iVar4;
            if ((uVar7 & 0xff) != 0) {
              local_78 = 0x2d;
              local_7c = 0x2d;
              local_80 = 0xc3;
            }
            (*DAT_102e1468)(*(undefined4 *)(&DAT_102db794 + *(short *)(puVar6 + 0xc6) * 4),local_80,
                            local_7c,local_78);
            (*DAT_102e1474)(0,iVar5,local_18,0);
            thunk_FUN_10088620(&DAT_102da3c8,iVar5,local_18 + 5,5,
                               *(int *)(param_1 + 0x2c + (uint)(byte)puVar6[8] * 8),iVar2,iVar3,
                               iVar4);
            if ((*(int *)(param_1 + 0xb4 + local_10 * 0x38) != 0) &&
               (thunk_FUN_1006b830((uint *)&DAT_102b82e0,*(uint *)(param_1 + 0xb4 + local_10 * 0x38)
                                  ), DAT_102b82e0 != '\0')) {
              thunk_FUN_10047f00(iVar5,local_18 + 0x14,DAT_102e1234,&DAT_102b82e0,iVar2 / 2,
                                 iVar3 / 2,iVar4 / 2);
            }
            local_18 = local_18 + 0x30;
          }
        }
      }
      else if (local_c == 1) {
        if ((*(uint *)(param_1 + 0xb0 + local_10 * 0x38) & 0x10) == 0) {
          if ((*(uint *)(param_1 + 0xb0 + local_10 * 0x38) & 0x20) != 0) {
            FUN_100bba20((uint *)&DAT_102b82e0,(uint *)"Stealth Shoes");
          }
        }
        else {
          FUN_100bba20((uint *)&DAT_102b82e0,(uint *)"Kevlar");
        }
        thunk_FUN_10047f00(8,local_18 + 5,DAT_102e1234,&DAT_102b82e0,iVar2 / 2,iVar3 / 2,iVar4 / 2);
        local_18 = local_18 + 0x30;
      }
    }
  }
  return;
}

/* 1002f2e0  FUN_1002f2e0  (1639 bytes)
 * undefined4 FUN_1002f2e0(int param_1)
 */
uint __fastcall FUN_1002f2e0(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_210;
  int local_20c;
  undefined4 local_208 [14];
  char local_1ce;
  char local_1cd;
  int local_1cc;
  uint local_1c8 [16];
  uint local_188 [32];
  uint local_108 [32];
  uint local_88 [32];
  int local_8;
  
  local_1cc = 0;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x42c) < 1) {
    thunk_FUN_100873d0(&DAT_102e024c,(uint *)"Your config is empty!",0xc3,0x2d,0x2d,0x14,0);
  }
  iVar2 = thunk_FUN_10030bd0();
  if (iVar2 < *(int *)(local_8 + 0x42c)) {
    uVar3 = thunk_FUN_100873d0(&DAT_102e024c,(uint *)"No cash left!",0xc3,0x2d,0x2d,0x14,0);
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    uVar3 = thunk_FUN_10032600();
    if ((int)uVar3 < *(int *)(local_8 + 0x430)) {
      uVar3 = uVar3 & 0xffffff00;
    }
    else {
      do {
        local_1cd = '\0';
        for (local_20c = 0; local_20c < 0xf; local_20c = local_20c + 1) {
          if ((0 < *(int *)(local_8 + 0xb0 + local_20c * 0x38)) &&
             (0 < *(int *)(local_8 + 0xb0 + (local_20c + 1) * 0x38))) {
            local_1ce = '\0';
            if ((*(char *)(local_8 + 0xac + local_20c * 0x38) == '\0') &&
               (*(char *)(local_8 + 0xac + (local_20c + 1) * 0x38) == '\0')) {
              puVar4 = thunk_FUN_1001d7b0(*(int *)(local_8 + 0xb0 + local_20c * 0x38));
              if ((puVar4[8] == '\0') ||
                 (puVar4 = thunk_FUN_1001d7b0(*(int *)(local_8 + 0xb0 + (local_20c + 1) * 0x38)),
                 puVar4[8] == '\0')) {
                puVar4 = thunk_FUN_1001d7b0(*(int *)(local_8 + 0xb0 + local_20c * 0x38));
                if ((puVar4[8] == '\0') &&
                   (puVar4 = thunk_FUN_1001d7b0(*(int *)(local_8 + 0xb0 + (local_20c + 1) * 0x38)),
                   puVar4[8] == '\0')) {
                  if (*(int *)(local_8 + 0xb8 + (local_20c + 1) * 0x38) <
                      *(int *)(local_8 + 0xb8 + local_20c * 0x38)) {
                    local_1ce = '\x01';
                  }
                }
                else {
                  puVar4 = thunk_FUN_1001d7b0(*(int *)(local_8 + 0xb0 + local_20c * 0x38));
                  if (puVar4[8] != '\0') {
                    local_1ce = '\x01';
                  }
                }
              }
              else if (*(int *)(local_8 + 0xb8 + (local_20c + 1) * 0x38) <
                       *(int *)(local_8 + 0xb8 + local_20c * 0x38)) {
                local_1ce = '\x01';
              }
            }
            else {
              bVar1 = *(int *)(local_8 + 0xb8 + (local_20c + 1) * 0x38) <
                      *(int *)(local_8 + 0xb8 + local_20c * 0x38);
              local_1ce = bVar1;
              if (bVar1) {
                local_1ce = 1;
                local_1ce = bVar1;
              }
            }
            if (local_1ce != '\0') {
              puVar6 = (undefined4 *)(local_8 + 0xac + local_20c * 0x38);
              puVar7 = local_208;
              for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
              puVar6 = (undefined4 *)(local_8 + 0xac + (local_20c + 1) * 0x38);
              puVar7 = (undefined4 *)(local_8 + 0xac + local_20c * 0x38);
              for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
              puVar6 = local_208;
              puVar7 = (undefined4 *)(local_8 + 0xac + (local_20c + 1) * 0x38);
              for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
              local_1cd = '\x01';
            }
          }
        }
      } while (local_1cd != '\0');
      (*DAT_102e14a4)("rst_cfg");
      FUN_100bba20(local_88,(uint *)&DAT_1026b154);
      FUN_100bba20(local_108,(uint *)&DAT_1026b14c);
      FUN_100bba20(local_188,(uint *)&DAT_1026b144);
      for (local_210 = 0; local_210 < 0x10; local_210 = local_210 + 1) {
        local_1cc = local_8 + 0xac + local_210 * 0x38;
        if (*(int *)(local_1cc + 4) != 0) {
          if (*(char *)(local_8 + 0xac + local_210 * 0x38) == '\0') {
            puVar4 = thunk_FUN_1001d7b0(*(int *)(local_1cc + 4));
            if (puVar4[0xd4] == '\0') {
              if (*(char *)(local_1cc + 0x30) == '\0') {
                FUN_100bb6e0((undefined1 *)local_1c8,(byte_conflict *)"%i_%i ");
                FUN_100bba30(local_88,local_1c8);
              }
              else {
                FUN_100bb6e0((undefined1 *)local_1c8,(byte_conflict *)"%i_%i ");
                FUN_100bba30(local_88,local_1c8);
                FUN_100bb6e0((undefined1 *)local_1c8,(byte_conflict *)"%i_%i ");
                FUN_100bba30(local_88,local_1c8);
              }
            }
            else {
              FUN_100bb6e0((undefined1 *)local_1c8,(byte_conflict *)"%i_%i ");
              FUN_100bba30(local_88,local_1c8);
            }
          }
          else {
            FUN_100bb6e0((undefined1 *)local_1c8,"%i ");
            FUN_100bba30(local_188,local_1c8);
          }
        }
      }
      for (local_210 = 0; local_210 < 0x10; local_210 = local_210 + 1) {
        if (*(int *)(local_8 + 0x2c + local_210 * 8) != 0) {
          FUN_100bb6e0((undefined1 *)local_1c8,(byte_conflict *)"%i_%i ");
          FUN_100bba30(local_108,local_1c8);
        }
      }
      (*DAT_102e14a4)(local_88);
      (*DAT_102e14a4)(local_188);
      (*DAT_102e14a4)(local_108);
      if (*(char *)(local_8 + 0x10) == '\0') {
        thunk_FUN_100873d0(&DAT_102e024c,(uint *)"Using last config.",0,0,0,0x14,0);
      }
      else {
        thunk_FUN_100873d0(&DAT_102e024c,(uint *)"Using new config.",0,0,0,0x14,0);
      }
      *(undefined1 *)(local_8 + 0x10) = 0;
      FUN_100bc090((undefined4 *)(local_8 + 0x434),(undefined4 *)(local_8 + 0x2c),0x408);
      uVar5 = thunk_FUN_1002db20(local_8);
      uVar3 = CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  return uVar3;
}

/* 1002fae0  FUN_1002fae0  (76 bytes)
 * int FUN_1002fae0(int param_1)
 */
int __thiscall FUN_1002fae0(void *this,int param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0xf < local_c) {
      return -1;
    }
    if (*(int *)((int)this + local_c * 0x38 + 0xb0) == param_1) break;
    local_c = local_c + 1;
  }
  return local_c;
}

/* 1002fb40  FUN_1002fb40  (1455 bytes)
 * undefined4 FUN_1002fb40(uint param_1, uint param_2, char param_3, char param_4)
 */
undefined4 __thiscall FUN_1002fb40(void *this,uint param_1,uint param_2,char param_3,char param_4)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int local_60;
  int local_5c;
  int local_14;
  
  if (param_4 == '\0') {
    uVar3 = thunk_FUN_10030c50(param_1);
    if ((uVar3 & 0xff) != 0) {
      return 0;
    }
    iVar4 = thunk_FUN_10030bd0();
    iVar5 = thunk_FUN_10030660(param_1,param_2,param_3,'\0');
    uVar3 = iVar5 + *(int *)((int)this + 0x42c);
    if (iVar4 < (int)uVar3) {
      return uVar3 & 0xffffff00;
    }
    if (param_3 == '\0') {
      local_60 = 1;
    }
    else {
      puVar6 = thunk_FUN_1001d7b0(param_1);
      if (puVar6[0xd4] == '\0') {
        local_5c = 2;
      }
      else {
        puVar6 = thunk_FUN_1001d7b0(param_1);
        local_5c = *(int *)(puVar6 + 0x24);
      }
      local_60 = local_5c;
    }
    iVar4 = thunk_FUN_10032600();
    puVar6 = thunk_FUN_1001d7b0(param_1);
    if (iVar4 < (int)((uint)(byte)puVar6[0xca] * local_60 + *(int *)((int)this + 0x430))) {
      return (uint)puVar6 & 0xffffff00;
    }
  }
  else {
    iVar4 = thunk_FUN_10030bd0();
    iVar5 = thunk_FUN_10030660(param_1,0,'\0','\x01');
    uVar3 = iVar5 + *(int *)((int)this + 0x42c);
    if (iVar4 < (int)uVar3) {
      return uVar3 & 0xffffff00;
    }
  }
  bVar2 = false;
  local_14 = 0;
  while ((local_14 < 0x10 && (!bVar2))) {
    if (*(uint *)((int)this + local_14 * 0x38 + 0xb0) == param_1) {
      if (param_4 == '\0') {
        puVar6 = thunk_FUN_1001d7b0(param_1);
        if (puVar6[0xd4] != '\0') {
          puVar6 = thunk_FUN_1001d7b0(param_1);
          if (*(int *)(puVar6 + 0x24) <= *(int *)((int)this + local_14 * 0x38 + 0xe0)) {
            return (uint)puVar6 & 0xffffff00;
          }
          if (param_3 == '\0') {
            *(int *)((int)this + local_14 * 0x38 + 0xe0) =
                 *(int *)((int)this + local_14 * 0x38 + 0xe0) + 1;
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(int *)((int)this + local_14 * 0x38 + 0xb8) =
                 *(int *)((int)this + local_14 * 0x38 + 0xb8) + *(int *)(puVar6 + 0xd0);
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + *(int *)(puVar6 + 0xd0);
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(uint *)((int)this + 0x430) = (uint)(byte)puVar6[0xca] + *(int *)((int)this + 0x430);
          }
          else {
            puVar6 = thunk_FUN_1001d7b0(param_1);
            iVar4 = *(int *)(puVar6 + 0x24) - *(int *)((int)this + local_14 * 0x38 + 0xe0);
            *(int *)((int)this + local_14 * 0x38 + 0xe0) =
                 *(int *)((int)this + local_14 * 0x38 + 0xe0) + iVar4;
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(int *)((int)this + local_14 * 0x38 + 0xb8) =
                 *(int *)(puVar6 + 0xd0) * iVar4 + *(int *)((int)this + local_14 * 0x38 + 0xb8);
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(int *)((int)this + 0x42c) =
                 *(int *)(puVar6 + 0xd0) * iVar4 + *(int *)((int)this + 0x42c);
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(uint *)((int)this + 0x430) =
                 (uint)(byte)puVar6[0xca] * iVar4 + *(int *)((int)this + 0x430);
          }
          thunk_FUN_100304e0(this);
          *(undefined1 *)((int)this + 0x10) = 1;
          uVar7 = thunk_FUN_1002db20((int)this);
          return CONCAT31((int3)((uint)uVar7 >> 8),1);
        }
        puVar6 = thunk_FUN_1001d7b0(param_1);
        if ((*(short *)(puVar6 + 0xc6) == -1) ||
           (*(char *)((int)this + local_14 * 0x38 + 0xdc) != '\0')) {
          thunk_FUN_10030260(this,local_14);
          bVar2 = true;
        }
        else {
          param_3 = '\x01';
          param_2 = param_2 | *(uint *)((int)this + local_14 * 0x38 + 0xb4);
          thunk_FUN_10030260(this,local_14);
          bVar2 = true;
        }
      }
      else if (*(char *)((int)this + local_14 * 0x38 + 0xacU) != '\0') {
        return local_14 * 0x38 & 0xffffff00;
      }
    }
    local_14 = local_14 + 1;
  }
  local_14 = 0;
  while ((local_14 < 0x10 && (*(int *)((int)this + local_14 * 0x38 + 0xb0) != 0))) {
    local_14 = local_14 + 1;
  }
  pcVar1 = (char *)((int)this + local_14 * 0x38 + 0xac);
  puVar6 = thunk_FUN_1001d7b0(param_1);
  if (puVar6[0xd4] == '\0') {
    pcVar1[0x30] = param_3;
  }
  *(uint *)(pcVar1 + 4) = param_1;
  *pcVar1 = param_4;
  *(uint *)(pcVar1 + 8) = ~-(uint)(param_4 != '\0') & param_2;
  iVar4 = thunk_FUN_10030660(param_1,param_2,param_3,param_4);
  *(int *)(pcVar1 + 0xc) = iVar4;
  if ((param_4 == '\0') && (puVar6 = thunk_FUN_1001d7b0(param_1), puVar6[0xd4] != '\0')) {
    if (param_3 == '\0') {
      *(undefined4 *)((int)this + local_14 * 0x38 + 0xe0) = 1;
    }
    else {
      puVar6 = thunk_FUN_1001d7b0(param_1);
      *(undefined4 *)((int)this + local_14 * 0x38 + 0xe0) = *(undefined4 *)(puVar6 + 0x24);
    }
  }
  *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + *(int *)(pcVar1 + 0xc);
  if (param_4 == '\0') {
    if (param_3 == '\0') {
      local_60 = 1;
    }
    else {
      puVar6 = thunk_FUN_1001d7b0(param_1);
      if (puVar6[0xd4] == '\0') {
        local_5c = 2;
      }
      else {
        puVar6 = thunk_FUN_1001d7b0(param_1);
        local_5c = *(int *)(puVar6 + 0x24);
      }
      local_60 = local_5c;
    }
    puVar6 = thunk_FUN_1001d7b0(param_1);
    *(uint *)((int)this + 0x430) = (uint)(byte)puVar6[0xca] * local_60 + *(int *)((int)this + 0x430)
    ;
  }
  thunk_FUN_100304e0(this);
  *(undefined1 *)((int)this + 0x10) = 1;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  uVar7 = thunk_FUN_1002db20((int)this);
  return CONCAT31((int3)((uint)uVar7 >> 8),1);
}

/* 10030260  FUN_10030260  (511 bytes)
 * undefined4 FUN_10030260(int param_1)
 */
undefined4 __thiscall FUN_10030260(void *this,int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_48;
  undefined4 local_44 [14];
  char local_9;
  void *local_8;
  
  *(int *)((int)this + 0x42c) =
       *(int *)((int)this + 0x42c) - *(int *)((int)this + param_1 * 0x38 + 0xb8);
  local_8 = this;
  if (*(char *)((int)this + param_1 * 0x38 + 0xac) == '\0') {
    if (*(int *)((int)this + param_1 * 0x38 + 0xe0) == 0) {
      puVar1 = thunk_FUN_1001d7b0(*(int *)((int)this + param_1 * 0x38 + 0xb0));
      *(uint *)((int)local_8 + 0x430) =
           *(int *)((int)local_8 + 0x430) -
           (uint)(byte)puVar1[0xca] *
           ((*(char *)((int)local_8 + param_1 * 0x38 + 0xdc) != '\0') + 1);
    }
    else {
      puVar1 = thunk_FUN_1001d7b0(*(int *)((int)this + param_1 * 0x38 + 0xb0));
      *(uint *)((int)local_8 + 0x430) =
           *(int *)((int)local_8 + 0x430) -
           (uint)(byte)puVar1[0xca] * *(int *)((int)local_8 + param_1 * 0x38 + 0xe0);
    }
  }
  _memset((void *)((int)local_8 + param_1 * 0x38 + 0xac),0,0x38);
  do {
    local_9 = '\0';
    for (local_48 = 0; local_48 < 0xf; local_48 = local_48 + 1) {
      if ((*(int *)((int)local_8 + local_48 * 0x38 + 0xb0) < 1) &&
         (0 < *(int *)((int)local_8 + (local_48 + 1) * 0x38 + 0xb0))) {
        puVar4 = (undefined4 *)((int)local_8 + local_48 * 0x38 + 0xac);
        puVar5 = local_44;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = (undefined4 *)((int)local_8 + (local_48 + 1) * 0x38 + 0xac);
        puVar5 = (undefined4 *)((int)local_8 + local_48 * 0x38 + 0xac);
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = local_44;
        puVar5 = (undefined4 *)((int)local_8 + (local_48 + 1) * 0x38 + 0xac);
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_9 = '\x01';
      }
    }
  } while (local_9 != '\0');
  *(undefined1 *)((int)local_8 + 0x10) = 1;
  *(int *)((int)local_8 + 0x1c) = *(int *)((int)local_8 + 0x1c) + -1;
  uVar2 = thunk_FUN_1002db20((int)local_8);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

/* 100304e0  FUN_100304e0  (302 bytes)
 * undefined FUN_100304e0(void * param_1)
 */
void __fastcall FUN_100304e0(void *param_1)

{
  char *pcVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int local_64;
  int local_20;
  int local_14;
  
  local_64 = thunk_FUN_10030bd0();
  local_64 = local_64 - *(int *)((int)param_1 + 0x42c);
  _memset((void *)((int)param_1 + 0x2c),0,0x80);
  local_14 = local_64;
  if (0 < local_64) {
    do {
      bVar2 = true;
      for (local_20 = 0; local_20 < 0x10; local_20 = local_20 + 1) {
        pcVar1 = (char *)((int)param_1 + local_20 * 0x38 + 0xac);
        if ((*(int *)(pcVar1 + 4) != 0) && (*pcVar1 == '\0')) {
          puVar3 = thunk_FUN_1001d7b0(*(int *)(pcVar1 + 4));
          uVar5 = (uint)(byte)puVar3[8];
          puVar3 = thunk_FUN_1001d7f0(uVar5);
          if ((-1 < local_14 - *(int *)(puVar3 + 4)) &&
             (uVar4 = thunk_FUN_10030830(param_1,uVar5), (uVar4 & 0xff) != 0)) {
            puVar3 = thunk_FUN_1001d7f0(uVar5);
            local_14 = local_14 - *(int *)(puVar3 + 4);
            bVar2 = false;
          }
        }
      }
    } while (!bVar2);
    if (local_64 == local_14 || local_64 - local_14 < 0) {
      local_64 = 0;
    }
    else {
      local_64 = local_64 - local_14;
    }
    *(int *)((int)param_1 + 0x14) = local_64;
  }
  return;
}

/* 10030660  FUN_10030660  (284 bytes)
 * int FUN_10030660(uint param_1, uint param_2, char param_3, char param_4)
 */
int FUN_10030660(uint param_1,uint param_2,char param_3,char param_4)

{
  undefined *puVar1;
  int local_50;
  int local_c;
  
  if (param_4 == '\0') {
    puVar1 = thunk_FUN_1001d7b0(param_1);
    if (puVar1[0xd4] == '\0') {
      puVar1 = thunk_FUN_1001d7b0(param_1);
      local_c = *(int *)(puVar1 + 0xd0) * ((param_3 != '\0') + 1);
      if ((param_2 & 1) != 0) {
        local_c = local_c + 900;
      }
      if ((param_2 & 2) != 0) {
        local_c = local_c + 800;
      }
      if ((param_2 & 4) != 0) {
        local_c = local_c + 500;
      }
      if ((param_2 & 8) != 0) {
        local_c = local_c + 0x708;
      }
    }
    else {
      if (param_3 == '\0') {
        local_50 = 1;
      }
      else {
        puVar1 = thunk_FUN_1001d7b0(param_1);
        local_50 = *(int *)(puVar1 + 0x24);
      }
      puVar1 = thunk_FUN_1001d7b0(param_1);
      local_c = *(int *)(puVar1 + 0xd0) * local_50;
    }
  }
  else if ((param_1 & 0x10) == 0) {
    if ((param_1 & 0x20) != 0) {
      local_c = 700;
    }
  }
  else {
    local_c = 0x76c;
  }
  return local_c;
}

/* 100307d0  FUN_100307d0  (75 bytes)
 * undefined4 * FUN_100307d0(int param_1)
 */
undefined4 * __thiscall FUN_100307d0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &vgui::Cursor::_vftable_;
  return this;
}

/* 10030830  FUN_10030830  (183 bytes)
 * undefined4 FUN_10030830(int param_1)
 */
uint __thiscall FUN_10030830(void *this,int param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined *puVar2;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    puVar2 = thunk_FUN_1001d7f0(param_1);
    if (*(int *)((int)this + param_1 * 8 + 0x2c) < *(int *)(puVar2 + 0xc)) {
      puVar2 = thunk_FUN_1001d7f0(param_1);
      *(int *)((int)this + param_1 * 8 + 0x2c) =
           *(int *)((int)this + param_1 * 8 + 0x2c) + *(int *)(puVar2 + 0x10);
      *(int *)((int)this + param_1 * 8 + 0x30) = *(int *)((int)this + param_1 * 8 + 0x30) + 1;
      puVar2 = thunk_FUN_1001d7f0(param_1);
      if (*(int *)(puVar2 + 0xc) < *(int *)((int)this + param_1 * 8 + 0x2c)) {
        puVar2 = thunk_FUN_1001d7f0(param_1);
        puVar2 = *(undefined **)(puVar2 + 0xc);
        *(undefined **)((int)this + param_1 * 8 + 0x2c) = puVar2;
      }
      uVar1 = CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
    else {
      uVar1 = (uint)puVar2 & 0xffffff00;
    }
  }
  return uVar1;
}

/* 10030920  FUN_10030920  (94 bytes)
 * int FUN_10030920(int param_1)
 */
int __thiscall FUN_10030920(void *this,int param_1)

{
  uint local_c;
  
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 4) = *(undefined4 *)(param_1 + 4 + local_c * 4);
  }
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return (int)this;
}

/* 100309a0  FUN_100309a0  (438 bytes)
 * Panel * FUN_100309a0(Panel * param_1)
 */
Panel * __thiscall FUN_100309a0(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(Panel *)((int)this + 0xc0) = param_1[0xc0];
  *(Panel *)((int)this + 0xc1) = param_1[0xc1];
  *(Panel *)((int)this + 0xc2) = param_1[0xc2];
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined ***)this = &vgui::Frame::_vftable_;
  return this;
}

/* 10030bd0  FUN_10030bd0  (48 bytes)
 * undefined4 FUN_10030bd0(void)
 */
undefined4 FUN_10030bd0(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = thunk_FUN_10030c10();
  uVar2 = DAT_102e0270;
  if (cVar1 == '\0') {
    uVar2 = 30000;
  }
  return uVar2;
}

/* 10030c10  FUN_10030c10  (47 bytes)
 * undefined1 FUN_10030c10(void)
 */
undefined1 FUN_10030c10(void)

{
  undefined1 uVar1;
  
  if (DAT_102da424 < 2) {
    if (DAT_1031beec == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* 10030c50  FUN_10030c50  (77 bytes)
 * undefined4 FUN_10030c50(int param_1)
 */
undefined4 FUN_10030c50(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = thunk_FUN_10025c50(param_1,DAT_1031bef0);
  if ((uVar1 & 0xff) == 0) {
    if (DAT_102da424 < 2) {
      if (param_1 == 0x18) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* 10030cb0  FUN_10030cb0  (104 bytes)
 * undefined4 FUN_10030cb0(uint param_1)
 */
uint __thiscall FUN_10030cb0(void *this,uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint3 uVar3;
  
  if ((*(uint *)((int)this + 0x28) & param_1) == 0) {
    puVar2 = thunk_FUN_1001d7b0(*(int *)((int)this + 0x24));
    if ((*(uint *)(puVar2 + 0xdc) & param_1) == 0) {
      puVar2 = thunk_FUN_1001d7b0(*(int *)((int)this + 0x24));
      uVar3 = (uint3)((uint)puVar2 >> 8);
      if ((*(uint *)(puVar2 + 0xd8) & param_1) == 0) {
        uVar1 = (uint)uVar3 << 8;
      }
      else {
        uVar1 = CONCAT31(uVar3,1);
      }
    }
    else {
      uVar1 = (uint)puVar2 & 0xffffff00;
    }
  }
  else {
    uVar1 = (uint)this & 0xffffff00;
  }
  return uVar1;
}

/* 10030d40  FUN_10030d40  (429 bytes)
 * Panel * FUN_10030d40(Panel * param_1)
 */
Panel * __thiscall FUN_10030d40(void *this,Panel *param_1)

{
  vgui::Panel::operator=(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(Panel *)((int)this + 0xc0) = param_1[0xc0];
  *(Panel *)((int)this + 0xc1) = param_1[0xc1];
  *(Panel *)((int)this + 0xc2) = param_1[0xc2];
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  return this;
}

/* 10030f60  FUN_10030f60  (1273 bytes)
 * undefined FUN_10030f60(float param_1)
 */
void __thiscall FUN_10030f60(void *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  float10 fVar5;
  char cVar6;
  float local_c;
  
  _memset((void *)((int)this + 0x2c),0,0x408);
  *(undefined1 *)((int)this + 0x10) = 1;
  iVar1 = (*DAT_102e1568)(0,5);
  if (iVar1 == 2) {
    cVar4 = '\0';
    iVar1 = (*DAT_102e1568)(0,2);
    thunk_FUN_1002fb40(this,0x23,0,iVar1 == 0,cVar4);
  }
  else if (iVar1 == 3) {
    thunk_FUN_1002fb40(this,0x22,0,'\0','\0');
  }
  else {
    cVar4 = '\0';
    iVar1 = (*DAT_102e1568)(0,2);
    thunk_FUN_1002fb40(this,0x19,0,iVar1 == 0,cVar4);
  }
  if (param_1 <= 0.0) {
    fVar5 = (float10)(*DAT_102e1564)(0,0x3f800000);
    local_c = (float)fVar5;
  }
  else {
    local_c = param_1;
  }
  if ((0.1 < local_c) && (local_c < 0.9)) {
    uVar2 = (*DAT_102e1568)(1,9);
    switch(uVar2) {
    case 1:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(1);
      thunk_FUN_1002fb40(this,1,uVar3,cVar4,cVar6);
      break;
    case 2:
      cVar6 = '\0';
      iVar1 = (*DAT_102e1568)(0,1);
      cVar4 = iVar1 != 0;
      uVar3 = thunk_FUN_10070720(9);
      thunk_FUN_1002fb40(this,9,uVar3,cVar4,cVar6);
      break;
    case 3:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0xc);
      thunk_FUN_1002fb40(this,0xc,uVar3,cVar4,cVar6);
      break;
    case 4:
      cVar6 = '\0';
      iVar1 = (*DAT_102e1568)(0,1);
      cVar4 = iVar1 != 0;
      uVar3 = thunk_FUN_10070720(0xe);
      thunk_FUN_1002fb40(this,0xe,uVar3,cVar4,cVar6);
      break;
    case 5:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(8);
      thunk_FUN_1002fb40(this,8,uVar3,cVar4,cVar6);
      break;
    case 6:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x15);
      thunk_FUN_1002fb40(this,0x15,uVar3,cVar4,cVar6);
      break;
    case 7:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x16);
      thunk_FUN_1002fb40(this,0x16,uVar3,cVar4,cVar6);
      break;
    case 8:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x1c);
      thunk_FUN_1002fb40(this,0x1c,uVar3,cVar4,cVar6);
      break;
    case 9:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x1f);
      thunk_FUN_1002fb40(this,0x1f,uVar3,cVar4,cVar6);
    }
  }
  if ((local_c <= 0.3) || (0.7 <= local_c)) {
    if (0.7 <= local_c) {
      uVar2 = (*DAT_102e1568)(1,0xb);
      switch(uVar2) {
      case 1:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(4);
        thunk_FUN_1002fb40(this,4,uVar3,cVar4,cVar6);
        break;
      case 2:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0xb);
        thunk_FUN_1002fb40(this,0xb,uVar3,cVar4,cVar6);
        break;
      case 3:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x14);
        thunk_FUN_1002fb40(this,0x14,uVar3,cVar4,cVar6);
        break;
      case 4:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0xd);
        thunk_FUN_1002fb40(this,0xd,uVar3,cVar4,cVar6);
        break;
      case 5:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(5);
        thunk_FUN_1002fb40(this,5,uVar3,cVar4,cVar6);
        break;
      case 6:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0xf);
        thunk_FUN_1002fb40(this,0xf,uVar3,cVar4,cVar6);
        break;
      case 7:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x1a);
        thunk_FUN_1002fb40(this,0x1a,uVar3,cVar4,cVar6);
        break;
      case 8:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x1b);
        thunk_FUN_1002fb40(this,0x1b,uVar3,cVar4,cVar6);
        break;
      case 9:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x21);
        thunk_FUN_1002fb40(this,0x21,uVar3,cVar4,cVar6);
        break;
      case 10:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x12);
        thunk_FUN_1002fb40(this,0x12,uVar3,cVar4,cVar6);
        break;
      case 0xb:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x20);
        thunk_FUN_1002fb40(this,0x20,uVar3,cVar4,cVar6);
      }
    }
  }
  else {
    uVar2 = (*DAT_102e1568)(1,6);
    switch(uVar2) {
    case 1:
      cVar6 = '\0';
      iVar1 = (*DAT_102e1568)(0,1);
      cVar4 = iVar1 != 0;
      uVar3 = thunk_FUN_10070720(3);
      thunk_FUN_1002fb40(this,3,uVar3,cVar4,cVar6);
      break;
    case 2:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(6);
      thunk_FUN_1002fb40(this,6,uVar3,cVar4,cVar6);
      break;
    case 3:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(7);
      thunk_FUN_1002fb40(this,7,uVar3,cVar4,cVar6);
      break;
    case 4:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x11);
      thunk_FUN_1002fb40(this,0x11,uVar3,cVar4,cVar6);
      break;
    case 5:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x13);
      thunk_FUN_1002fb40(this,0x13,uVar3,cVar4,cVar6);
      break;
    case 6:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x17);
      thunk_FUN_1002fb40(this,0x17,uVar3,cVar4,cVar6);
    }
  }
  FUN_100bc090((undefined4 *)((int)this + 0x434),(undefined4 *)((int)this + 0x2c),0x408);
  thunk_FUN_1002db20((int)this);
  return;
}

/* 10031620  FUN_10031620  (121 bytes)
 * undefined4 * FUN_10031620(int param_1)
 */
undefined4 * __thiscall FUN_10031620(void *this,int param_1)

{
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)this = &vgui::SurfaceBase::_vftable_;
  return this;
}

/* 100316c0  FUN_100316c0  (112 bytes)
 * int FUN_100316c0(int param_1)
 */
int __thiscall FUN_100316c0(void *this,int param_1)

{
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return (int)this;
}

/* 10031750  FUN_10031750  (109 bytes)
 * SurfaceBase * FUN_10031750(SurfaceBase * param_1)
 */
SurfaceBase * __thiscall FUN_10031750(void *this,SurfaceBase *param_1)

{
  vgui::SurfaceBase::SurfaceBase(this,param_1);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(SurfaceBase *)((int)this + 0x28) = param_1[0x28];
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined ***)this = &vgui::Surface::_vftable_;
  return this;
}

/* 100317e0  FUN_100317e0  (100 bytes)
 * SurfaceBase * FUN_100317e0(SurfaceBase * param_1)
 */
SurfaceBase * __thiscall FUN_100317e0(void *this,SurfaceBase *param_1)

{
  vgui::SurfaceBase::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(SurfaceBase *)((int)this + 0x28) = param_1[0x28];
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}

/* 10031860  FUN_10031860  (27 bytes)
 * undefined FUN_10031860(SurfaceBase * param_1)
 */
void __fastcall FUN_10031860(SurfaceBase *param_1)

{
  vgui::SurfaceBase::~SurfaceBase(param_1);
  return;
}

/* 10031890  FUN_10031890  (33 bytes)
 * undefined4 * FUN_10031890(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_10031890(undefined4 *param_1)

{
  *param_1 = &vgui::Layout::_vftable_;
  return param_1;
}

/* 100318c0  FUN_100318c0  (24 bytes)
 * undefined4 FUN_100318c0(undefined4 param_1)
 */
undefined4 __fastcall FUN_100318c0(undefined4 param_1)

{
  return param_1;
}

/* 100318e0  FUN_100318e0  (57 bytes)
 * Layout * FUN_100318e0(Layout * param_1)
 */
Layout * __thiscall FUN_100318e0(void *this,Layout *param_1)

{
  vgui::Layout::Layout(this,param_1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &vgui::BorderLayout::_vftable_;
  return this;
}

/* 10031930  FUN_10031930  (48 bytes)
 * Layout * FUN_10031930(Layout * param_1)
 */
Layout * __thiscall FUN_10031930(void *this,Layout *param_1)

{
  vgui::Layout::operator=(this,param_1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}

/* 10031970  FUN_10031970  (31 bytes)
 * undefined4 * FUN_10031970(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_10031970(undefined4 *param_1)

{
  *param_1 = &vgui::ActionSignal::_vftable_;
  return param_1;
}

/* 100319a0  FUN_100319a0  (33 bytes)
 * undefined4 * FUN_100319a0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_100319a0(undefined4 *param_1)

{
  *param_1 = &vgui::ActionSignal::_vftable_;
  return param_1;
}

/* 100319d0  FUN_100319d0  (24 bytes)
 * undefined4 FUN_100319d0(undefined4 param_1)
 */
undefined4 __fastcall FUN_100319d0(undefined4 param_1)

{
  return param_1;
}

/* 100319f0  FUN_100319f0  (45 bytes)
 * Label * FUN_100319f0(Label * param_1)
 */
Label * __thiscall FUN_100319f0(void *this,Label *param_1)

{
  vgui::Label::Label(this,param_1);
  *(undefined ***)this = &vgui::MenuSeparator::_vftable_;
  return this;
}

/* 10031a30  FUN_10031a30  (36 bytes)
 * Label * FUN_10031a30(Label * param_1)
 */
Label * __thiscall FUN_10031a30(void *this,Label *param_1)

{
  vgui::Label::operator=(this,param_1);
  return this;
}

/* 10031a60  FUN_10031a60  (63 bytes)
 * Panel * FUN_10031a60(Panel * param_1)
 */
Panel * __thiscall FUN_10031a60(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &vgui::TextPanel::_vftable_;
  return this;
}

/* 10031ab0  FUN_10031ab0  (54 bytes)
 * Panel * FUN_10031ab0(Panel * param_1)
 */
Panel * __thiscall FUN_10031ab0(void *this,Panel *param_1)

{
  vgui::Panel::operator=(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return this;
}

/* 10031b00  FUN_10031b00  (45 bytes)
 * Border * FUN_10031b00(Border * param_1)
 */
Border * __thiscall FUN_10031b00(void *this,Border *param_1)

{
  vgui::Border::Border(this,param_1);
  *(undefined ***)this = &vgui::LoweredBorder::_vftable_;
  return this;
}

/* 10031b40  FUN_10031b40  (36 bytes)
 * Border * FUN_10031b40(Border * param_1)
 */
Border * __thiscall FUN_10031b40(void *this,Border *param_1)

{
  vgui::Border::operator=(this,param_1);
  return this;
}

/* 10031b70  FUN_10031b70  (69 bytes)
 * undefined4 * FUN_10031b70(int param_1)
 */
undefined4 * __thiscall FUN_10031b70(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined ***)this = &vgui::Font::_vftable_;
  return this;
}

/* 10031bd0  FUN_10031bd0  (60 bytes)
 * int FUN_10031bd0(int param_1)
 */
int __thiscall FUN_10031bd0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return (int)this;
}

/* 10031c20  FUN_10031c20  (531 bytes)
 * undefined4 * FUN_10031c20(int param_1)
 */
undefined4 * __thiscall FUN_10031c20(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)(param_1 + 5);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)((int)this + 0x28) = *(undefined2 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined2 *)((int)this + 0x2b) = *(undefined2 *)(param_1 + 0x2b);
  *(undefined1 *)((int)this + 0x2d) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined2 *)((int)this + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined1 *)((int)this + 0x30) = *(undefined1 *)(param_1 + 0x30);
  *(undefined2 *)((int)this + 0x31) = *(undefined2 *)(param_1 + 0x31);
  *(undefined1 *)((int)this + 0x33) = *(undefined1 *)(param_1 + 0x33);
  puVar2 = (undefined4 *)(param_1 + 0x34);
  puVar3 = (undefined4 *)((int)this + 0x34);
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
  puVar2 = (undefined4 *)(param_1 + 0x9b);
  puVar3 = (undefined4 *)((int)this + 0x9b);
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
  puVar2 = (undefined4 *)(param_1 + 0x102);
  puVar3 = (undefined4 *)((int)this + 0x102);
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
  puVar2 = (undefined4 *)(param_1 + 0x169);
  puVar3 = (undefined4 *)((int)this + 0x169);
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
  *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)((int)this + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)((int)this + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined1 *)((int)this + 0x1e0) = *(undefined1 *)(param_1 + 0x1e0);
  *(undefined1 *)((int)this + 0x1e1) = *(undefined1 *)(param_1 + 0x1e1);
  *(undefined4 *)((int)this + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  puVar2 = (undefined4 *)(param_1 + 0x1e8);
  puVar3 = (undefined4 *)((int)this + 0x1e8);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)((int)this + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)((int)this + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(undefined ***)this = &vgui::App::_vftable_;
  return this;
}

/* 10031ec0  FUN_10031ec0  (717 bytes)
 * int FUN_10031ec0(int param_1)
 */
int __thiscall FUN_10031ec0(void *this,int param_1)

{
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)(param_1 + 5);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    *(undefined1 *)((int)this + local_c + 0x28) = *(undefined1 *)(param_1 + local_c + 0x28);
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *(undefined1 *)((int)this + local_10 + 0x2b) = *(undefined1 *)(param_1 + local_10 + 0x2b);
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    *(undefined1 *)((int)this + local_14 + 0x2e) = *(undefined1 *)(param_1 + local_14 + 0x2e);
  }
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    *(undefined1 *)((int)this + local_18 + 0x31) = *(undefined1 *)(param_1 + local_18 + 0x31);
  }
  for (local_1c = 0; local_1c < 0x67; local_1c = local_1c + 1) {
    *(undefined1 *)((int)this + local_1c + 0x34) = *(undefined1 *)(param_1 + local_1c + 0x34);
  }
  for (local_20 = 0; local_20 < 0x67; local_20 = local_20 + 1) {
    *(undefined1 *)((int)this + local_20 + 0x9b) = *(undefined1 *)(param_1 + local_20 + 0x9b);
  }
  for (local_24 = 0; local_24 < 0x67; local_24 = local_24 + 1) {
    *(undefined1 *)((int)this + local_24 + 0x102) = *(undefined1 *)(param_1 + local_24 + 0x102);
  }
  for (local_28 = 0; local_28 < 0x67; local_28 = local_28 + 1) {
    *(undefined1 *)((int)this + local_28 + 0x169) = *(undefined1 *)(param_1 + local_28 + 0x169);
  }
  *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)((int)this + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)((int)this + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined1 *)((int)this + 0x1e0) = *(undefined1 *)(param_1 + 0x1e0);
  *(undefined1 *)((int)this + 0x1e1) = *(undefined1 *)(param_1 + 0x1e1);
  *(undefined4 *)((int)this + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  for (local_2c = 0; local_2c < 0xe; local_2c = local_2c + 1) {
    *(undefined4 *)((int)this + local_2c * 4 + 0x1e8) =
         *(undefined4 *)(param_1 + 0x1e8 + local_2c * 4);
  }
  *(undefined4 *)((int)this + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)((int)this + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)((int)this + 0x228) = *(undefined4 *)(param_1 + 0x228);
  return (int)this;
}

/* 10032240  FUN_10032240  (285 bytes)
 * undefined4 * FUN_10032240(int param_1)
 */
undefined4 * __thiscall FUN_10032240(void *this,int param_1)

{
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined ***)this = &vgui::BuildGroup::_vftable_;
  return this;
}

/* 100323b0  FUN_100323b0  (332 bytes)
 * int FUN_100323b0(int param_1)
 */
int __thiscall FUN_100323b0(void *this,int param_1)

{
  uint local_10;
  uint local_c;
  
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 0x2c) = *(undefined4 *)(param_1 + 0x2c + local_c * 4);
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined4 *)((int)this + local_10 * 4 + 0x34) =
         *(undefined4 *)(param_1 + 0x34 + local_10 * 4);
  }
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return (int)this;
}

/* 10032550  FUN_10032550  (49 bytes)
 * undefined FUN_10032550(undefined4 * param_1, undefined4 * param_2)
 */
void __thiscall FUN_10032550(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *(undefined4 *)((int)this + 0x144);
  *param_2 = *(undefined4 *)((int)this + 0x148);
  return;
}

/* 10032590  FUN_10032590  (55 bytes)
 * undefined FUN_10032590(int param_1)
 * called by: thunk_FUN_10032590
 */
void __fastcall FUN_10032590(int param_1)

{
  if (*(int *)(param_1 + 0xe4) != 0) {
    (**(code **)**(undefined4 **)(param_1 + 0xe4))();
  }
  return;
}

/* 100325e0  FUN_100325e0  (19 bytes)
 * undefined FUN_100325e0(void)
 * called by: thunk_FUN_100325e0
 */
void FUN_100325e0(void)

{
  return;
}

/* 10032600  FUN_10032600  (24 bytes)
 * undefined4 FUN_10032600(void)
 */
undefined4 FUN_10032600(void)

{
  return 0x51;
}

/* 10032620  FUN_10032620  (31 bytes)
 * undefined4 * FUN_10032620(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_10032620(undefined4 *param_1)

{
  *param_1 = &vgui::InputStream::_vftable_;
  return param_1;
}

/* 10032650  FUN_10032650  (33 bytes)
 * undefined4 * FUN_10032650(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_10032650(undefined4 *param_1)

{
  *param_1 = &vgui::InputStream::_vftable_;
  return param_1;
}

/* 10032680  FUN_10032680  (24 bytes)
 * undefined4 FUN_10032680(undefined4 param_1)
 */
undefined4 __fastcall FUN_10032680(undefined4 param_1)

{
  return param_1;
}

/* 100326a0  FUN_100326a0  (57 bytes)
 * InputStream * FUN_100326a0(InputStream * param_1)
 */
InputStream * __thiscall FUN_100326a0(void *this,InputStream *param_1)

{
  vgui::InputStream::InputStream(this,param_1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &vgui::FileInputStream::_vftable_;
  return this;
}

/* 100326f0  FUN_100326f0  (48 bytes)
 * InputStream * FUN_100326f0(InputStream * param_1)
 */
InputStream * __thiscall FUN_100326f0(void *this,InputStream *param_1)

{
  vgui::InputStream::operator=(this,param_1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}

/* 10032730  FUN_10032730  (99 bytes)
 * Panel * FUN_10032730(Panel * param_1)
 */
Panel * __thiscall FUN_10032730(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined ***)this = &vgui::DesktopIcon::_vftable_;
  return this;
}

/* 100327b0  FUN_100327b0  (90 bytes)
 * Panel * FUN_100327b0(Panel * param_1)
 */
Panel * __thiscall FUN_100327b0(void *this,Panel *param_1)

{
  vgui::Panel::operator=(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  return this;
}

/* 10032820  FUN_10032820  (45 bytes)
 * undefined4 * FUN_10032820(int param_1)
 */
undefined4 * __thiscall FUN_10032820(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &vgui::MiniApp::_vftable_;
  return this;
}

/* 10032860  FUN_10032860  (36 bytes)
 * int FUN_10032860(int param_1)
 */
int __thiscall FUN_10032860(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (int)this;
}

/* 10032890  FUN_10032890  (34 bytes)
 * undefined4 * FUN_10032890(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10032890(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  return this;
}

/* 100328c0  FUN_100328c0  (137 bytes)
 * Panel * FUN_100328c0(Panel * param_1)
 */
Panel * __thiscall FUN_100328c0(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined2 *)((int)this + 0xcc) = *(undefined2 *)(param_1 + 0xcc);
  *(undefined ***)this = &vgui::ScrollPanel::_vftable_;
  return this;
}

/* 10032970  FUN_10032970  (158 bytes)
 * Panel * FUN_10032970(Panel * param_1)
 */
Panel * __thiscall FUN_10032970(void *this,Panel *param_1)

{
  uint local_c;
  
  vgui::Panel::operator=(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(Panel *)((int)this + local_c + 0xcc) = param_1[local_c + 0xcc];
  }
  return this;
}

/* 10032a40  FUN_10032a40  (144 bytes)
 * Panel * FUN_10032a40(Panel * param_1)
 */
Panel * __thiscall FUN_10032a40(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined ***)this = &vgui::ScrollBar::_vftable_;
  return this;
}

/* 10032b00  FUN_10032b00  (157 bytes)
 * Panel * FUN_10032b00(Panel * param_1)
 */
Panel * __thiscall FUN_10032b00(void *this,Panel *param_1)

{
  uint local_c;
  
  vgui::Panel::operator=(this,param_1);
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 0xbc) = *(undefined4 *)(param_1 + local_c * 4 + 0xbc);
  }
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  return this;
}

/* 10032bd0  FUN_10032bd0  (306 bytes)
 * Panel * FUN_10032bd0(Panel * param_1)
 */
Panel * __thiscall FUN_10032bd0(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(Panel *)((int)this + 0xbc) = param_1[0xbc];
  *(Panel *)((int)this + 0xbd) = param_1[0xbd];
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(Panel *)((int)this + 0xf4) = param_1[0xf4];
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined ***)this = &vgui::Slider::_vftable_;
  return this;
}

/* 10032d50  FUN_10032d50  (385 bytes)
 * Panel * FUN_10032d50(Panel * param_1)
 */
Panel * __thiscall FUN_10032d50(void *this,Panel *param_1)

{
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  vgui::Panel::operator=(this,param_1);
  *(Panel *)((int)this + 0xbc) = param_1[0xbc];
  *(Panel *)((int)this + 0xbd) = param_1[0xbd];
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 0xc0) = *(undefined4 *)(param_1 + local_c * 4 + 0xc0);
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined4 *)((int)this + local_10 * 4 + 200) = *(undefined4 *)(param_1 + local_10 * 4 + 200);
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    *(undefined4 *)((int)this + local_14 * 4 + 0xd0) =
         *(undefined4 *)(param_1 + local_14 * 4 + 0xd0);
  }
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    *(undefined4 *)((int)this + local_18 * 4 + 0xe4) =
         *(undefined4 *)(param_1 + local_18 * 4 + 0xe4);
  }
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(Panel *)((int)this + 0xf4) = param_1[0xf4];
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  return this;
}

/* 10032f40  FUN_10032f40  (855 bytes)
 * Panel * FUN_10032f40(int param_1, int param_2, int param_3, int param_4, char param_5)
 */
Panel * __thiscall
FUN_10032f40(void *this,int param_1,int param_2,int param_3,int param_4,char param_5)

{
  Slider2 *pSVar1;
  void *pvVar2;
  Slider2 *local_88;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5602;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  vgui::Dar<vgui::IntChangeSignal*>::Dar<vgui::IntChangeSignal*>
            ((Dar<vgui::IntChangeSignal*> *)((int)this + 200));
  *(undefined ***)this = &vgui::ScrollBar2::_vftable_;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  if (param_5 == '\0') {
    pSVar1 = operator_new(0xfc);
    local_8 = 3;
    if (pSVar1 == (Slider2 *)0x0) {
      local_88 = (Slider2 *)0x0;
    }
    else {
      local_88 = (Slider2 *)
                 vgui::Slider2::Slider2(pSVar1,param_4,0,param_3 + param_4 * -2,param_4,false);
    }
    local_8 = 0xffffffff;
    vgui::ScrollBar2::setSlider(this,local_88);
    pvVar2 = operator_new(0x134);
    local_8 = 4;
    if (pvVar2 == (void *)0x0) {
      local_88 = (Slider2 *)0x0;
    }
    else {
      local_88 = (Slider2 *)
                 thunk_FUN_10033370(pvVar2,"gfx/vgui/320_arrowlt.tga",0,0,param_4 + 1,param_4 + 1);
    }
    local_8 = 0xffffffff;
    vgui::ScrollBar2::setButton(this,(Button *)local_88,0);
    pvVar2 = operator_new(0x134);
    local_8 = 5;
    if (pvVar2 == (void *)0x0) {
      local_88 = (Slider2 *)0x0;
    }
    else {
      local_88 = (Slider2 *)
                 thunk_FUN_10033370(pvVar2,"gfx/vgui/320_arrowrt.tga",param_3 - param_4,0,
                                    param_4 + 1,param_4 + 1);
    }
    local_8 = 0xffffffff;
    vgui::ScrollBar2::setButton(this,(Button *)local_88,1);
  }
  else {
    pSVar1 = operator_new(0xfc);
    local_8 = 0;
    if (pSVar1 == (Slider2 *)0x0) {
      local_88 = (Slider2 *)0x0;
    }
    else {
      local_88 = (Slider2 *)
                 vgui::Slider2::Slider2
                           (pSVar1,0,param_3 + -1,param_3,param_4 + param_3 * -2 + 2,true);
    }
    local_8 = 0xffffffff;
    vgui::ScrollBar2::setSlider(this,local_88);
    pvVar2 = operator_new(0x134);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_88 = (Slider2 *)0x0;
    }
    else {
      local_88 = (Slider2 *)thunk_FUN_10033370(pvVar2,"gfx/vgui/arrowup.tga",0,0,param_3,param_3);
    }
    local_8 = 0xffffffff;
    vgui::ScrollBar2::setButton(this,(Button *)local_88,0);
    pvVar2 = operator_new(0x134);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_88 = (Slider2 *)0x0;
    }
    else {
      local_88 = (Slider2 *)
                 thunk_FUN_10033370(pvVar2,"gfx/vgui/arrowdown.tga",0,param_4 - param_3,param_3,
                                    param_3);
    }
    local_8 = 0xffffffff;
    vgui::ScrollBar2::setButton(this,(Button *)local_88,1);
  }
  vgui::Panel::setPaintBorderEnabled(this,true);
  vgui::Panel::setPaintBackgroundEnabled(this,true);
  vgui::Panel::setPaintEnabled(this,true);
  vgui::ScrollBar2::setButtonPressedScrollValue(this,0xf);
  vgui::ScrollBar2::validate(this);
  ExceptionList = local_10;
  return this;
}

