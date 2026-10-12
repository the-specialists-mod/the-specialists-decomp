/* client.dll - unnamed_1006ca30 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006ca30  FUN_1006ca30  (747 bytes)
 * undefined FUN_1006ca30(int param_1)
 */
void __fastcall FUN_1006ca30(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcStack_4c;
  
  lVar3 = __ftol();
  *(int *)(param_1 + 0x416c) = (int)lVar3;
  lVar3 = __ftol();
  *(int *)(param_1 + 0x4170) = (int)lVar3;
  lVar3 = __ftol();
  *(int *)(param_1 + 0x4174) = (int)lVar3;
  if (*(int *)(param_1 + 4) == 0) {
    pcStack_4c = (char *)0x3ff00000;
  }
  else {
    pcStack_4c = (char *)0x3fe00000;
  }
  DAT_10316910 = (float)(double)(ZEXT48(pcStack_4c) << 0x20);
  thunk_FUN_1008f200(&DAT_10318a88,8,DAT_102e1238 / 2,0x14,0x80);
  if (*(int *)(param_1 + 0x414) < 1) {
    thunk_FUN_1008f270(&DAT_10318a88,"1 Empty Config",0xc3,0x2d,0x2d,0x32);
  }
  else {
    if (*(char *)(param_1 + 0x4178) == '\0') {
      pcStack_4c = "1 Use Last Config";
    }
    else {
      pcStack_4c = "1 Use New Config";
    }
    iVar5 = 0x32;
    uVar4 = 0x2d;
    iVar1 = thunk_FUN_1006b390();
    iVar2 = ((iVar1 - *(int *)(param_1 + 0x414) < 0) - 1 & 0x96) + 0x2d;
    iVar1 = thunk_FUN_1006b390();
    thunk_FUN_1008f270(&DAT_10318a88,pcStack_4c,
                       ((iVar1 - *(int *)(param_1 + 0x414) < 0) - 1 & 0xffffff6a) + 0xc3,iVar2,uVar4
                       ,iVar5);
  }
  thunk_FUN_1008f270(&DAT_10318a88,"2 Buy",*(int *)(param_1 + 0x416c) / 2,
                     *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"3 Remove Item",*(int *)(param_1 + 0x416c) / 2,
                     *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"4 Reset Config",*(int *)(param_1 + 0x416c) / 2,
                     *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"5 Save Config",*(int *)(param_1 + 0x416c) / 2,
                     *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"6 Load Config",*(int *)(param_1 + 0x416c) / 2,
                     *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"7 Buy Random",0x2d,0xc3,0x2d,0x32);
  if (*(int *)(param_1 + 4) == 0) {
    thunk_FUN_1008f270(&DAT_10318a88,"0 Cancel",100,100,0xcd,0x32);
  }
  return;
}

/* 1006cde0  FUN_1006cde0  (514 bytes)
 * undefined FUN_1006cde0(int param_1)
 */
void __fastcall FUN_1006cde0(int param_1)

{
  longlong lVar1;
  double local_50;
  
  lVar1 = __ftol();
  *(int *)(param_1 + 0x416c) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x4170) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x4174) = (int)lVar1;
  if (*(int *)(param_1 + 4) == 1) {
    lVar1 = 0x3ff00000;
  }
  else {
    lVar1 = 0x3fe00000;
  }
  local_50 = (double)(lVar1 << 0x20);
  DAT_1031688c = (float)local_50;
  thunk_FUN_1008f200(&DAT_10318a88,0x88,DAT_102e1238 / 2,0x14,0x80);
  for (DAT_103167d8 = 0;
      (DAT_103167d8 < 0x20 && (*(int *)(param_1 + 0x2d6c + DAT_103167d8 * 4) != -1));
      DAT_103167d8 = DAT_103167d8 + 1) {
    FUN_100bb6e0(&DAT_10316860,(byte_conflict *)"%i %s");
    thunk_FUN_1008f270(&DAT_10318a88,&DAT_10316860,*(int *)(param_1 + 0x416c) / 2,
                       *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
  }
  if (1 < DAT_102da424) {
    thunk_FUN_1008f270(&DAT_10318a88,"6 Player Accessory",*(int *)(param_1 + 0x416c) / 2,
                       *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
  }
  if (*(int *)(param_1 + 4) == 1) {
    thunk_FUN_1008f270(&DAT_10318a88,"0 Go Back",100,100,0xcd,0x32);
  }
  thunk_FUN_1006ca30(param_1);
  return;
}

/* 1006d070  FUN_1006d070  (810 bytes)
 * undefined FUN_1006d070(void * param_1)
 */
void __fastcall FUN_1006d070(void *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int local_5c;
  int local_58;
  int local_54;
  char cStack_4c;
  
  lVar7 = __ftol();
  *(int *)((int)param_1 + 0x416c) = (int)lVar7;
  lVar7 = __ftol();
  *(int *)((int)param_1 + 0x4170) = (int)lVar7;
  lVar7 = __ftol();
  *(int *)((int)param_1 + 0x4174) = (int)lVar7;
  thunk_FUN_1008f200(&DAT_10318a88,0x108,DAT_102e1238 / 2,0x14,0x80);
  DAT_103168e4 = 0;
  do {
    if (0x1f < DAT_103168e4) {
      if (*(int *)((int)param_1 + 4) == 2) {
        thunk_FUN_1008f270(&DAT_10318a88,"0 Go Back",100,100,0xcd,0x32);
      }
      thunk_FUN_1006cde0((int)param_1);
      return;
    }
    if ((*(int *)((int)param_1 + *(int *)((int)param_1 + 8) * 4 + DAT_103168e4 * 0x80 + 0x2d6c) !=
         -1) && (uVar3 = thunk_FUN_1006b330(*(int *)((int)param_1 +
                                                    *(int *)((int)param_1 + 8) * 4 +
                                                    DAT_103168e4 * 0x80 + 0x2d6c)),
                (uVar3 & 0xff) == 0)) {
      DAT_10316808 = *(int *)((int)param_1 +
                             *(int *)((int)param_1 + 8) * 4 + DAT_103168e4 * 0x80 + 0x2d6c) ==
                     *(int *)((int)param_1 + 0xc);
      puVar4 = thunk_FUN_1001d7b0(*(int *)((int)param_1 +
                                          *(int *)((int)param_1 + 8) * 4 +
                                          DAT_103168e4 * 0x80 + 0x2d6c));
      iVar2 = *(int *)(puVar4 + 0xd0);
      iVar6 = *(int *)((int)param_1 + 0x414);
      iVar5 = thunk_FUN_1006b390();
      DAT_10316920 = iVar2 + iVar6 <= iVar5;
      if ((bool)DAT_10316920) {
        puVar4 = thunk_FUN_1001d7b0(*(int *)((int)param_1 +
                                            *(int *)((int)param_1 + 8) * 4 +
                                            DAT_103168e4 * 0x80 + 0x2d6c));
        bVar1 = puVar4[0xca];
        iVar2 = *(int *)((int)param_1 + 0x418);
        iVar6 = thunk_FUN_1006b3d0();
        if (iVar6 < (int)((uint)bVar1 + iVar2)) goto LAB_1006d220;
        cStack_4c = '\x01';
      }
      else {
LAB_1006d220:
        cStack_4c = '\0';
      }
      DAT_10316920 = cStack_4c;
      thunk_FUN_1001d7b0(*(int *)((int)param_1 +
                                 *(int *)((int)param_1 + 8) * 4 + DAT_103168e4 * 0x80 + 0x2d6c));
      FUN_100bb6e0(&DAT_103168c0,(byte_conflict *)"%i %s");
      if (DAT_10316920 == '\0') {
        local_54 = 0x2d;
        local_58 = 0x2d;
        local_5c = 0xc3;
      }
      else {
        local_54 = *(int *)((int)param_1 + 0x4174) / 2;
        local_58 = *(int *)((int)param_1 + 0x4170) / 2;
        local_5c = *(int *)((int)param_1 + 0x416c) / 2;
      }
      thunk_FUN_1008f270(&DAT_10318a88,&DAT_103168c0,local_5c,local_58,local_54,0x32);
      if (DAT_10316808 != '\0') {
        thunk_FUN_1006ddd0(param_1,*(int *)((int)param_1 + 0xc));
      }
    }
    DAT_103168e4 = DAT_103168e4 + 1;
  } while( true );
}

/* 1006d470  FUN_1006d470  (1386 bytes)
 * undefined FUN_1006d470(void * param_1)
 */
void __fastcall FUN_1006d470(void *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int local_54;
  int local_50;
  int local_4c;
  
  lVar7 = __ftol();
  *(int *)((int)param_1 + 0x416c) = (int)lVar7;
  lVar7 = __ftol();
  *(int *)((int)param_1 + 0x4170) = (int)lVar7;
  lVar7 = __ftol();
  *(int *)((int)param_1 + 0x4174) = (int)lVar7;
  DAT_103167fc = thunk_FUN_1006f1d0(*(uint *)((int)param_1 + 0xc),*(uint *)((int)param_1 + 0x10),
                                    '\0','\0');
  iVar6 = DAT_103167fc + *(int *)((int)param_1 + 0x414);
  iVar2 = thunk_FUN_1006b390();
  DAT_103168e0 = iVar6 <= iVar2;
  if ((bool)DAT_103168e0) {
    puVar3 = thunk_FUN_1001d7b0(*(int *)((int)param_1 + 0xc));
    bVar1 = puVar3[0xca];
    iVar2 = *(int *)((int)param_1 + 0x418);
    iVar6 = thunk_FUN_1006b3d0();
    if (iVar6 < (int)((uint)bVar1 + iVar2)) goto LAB_1006d543;
    local_4c._0_1_ = '\x01';
  }
  else {
LAB_1006d543:
    local_4c._0_1_ = '\0';
  }
  DAT_103168e0 = (char)local_4c;
  thunk_FUN_1008f200(&DAT_10318a88,0x188,DAT_102e1238 / 2,0x14,0x80);
  thunk_FUN_1008f270(&DAT_10318a88,"1 Buy",(-(uint)(DAT_103168e0 != '\0') & 0xffffff6a) + 0xc3,
                     (-(uint)(DAT_103168e0 != '\0') & 0x96) + 0x2d,0x2d,0x32);
  for (DAT_10316914 = 0; DAT_10316914 < 4; DAT_10316914 = DAT_10316914 + 1) {
    uVar4 = thunk_FUN_1006f140(param_1,1 << ((byte)DAT_10316914 & 0x1f));
    if ((uVar4 & 0xff) != 0) {
      DAT_10316880 = DAT_103167fc;
      switch(DAT_10316914) {
      case 0:
        FUN_100bb6e0(&DAT_10316894,(byte_conflict *)"%i Silencer  %i");
        DAT_10316880 = DAT_10316880 + 900;
        break;
      case 1:
        FUN_100bb6e0(&DAT_10316894,(byte_conflict *)"%i Lasersight  %i");
        DAT_10316880 = DAT_10316880 + 800;
        break;
      case 2:
        FUN_100bb6e0(&DAT_10316894,(byte_conflict *)"%i Flashlight  %i");
        DAT_10316880 = DAT_10316880 + 500;
        break;
      case 3:
        FUN_100bb6e0(&DAT_10316894,(byte_conflict *)"%i Scope  %i");
        DAT_10316880 = DAT_10316880 + 0x708;
      }
      iVar6 = DAT_10316880 + *(int *)((int)param_1 + 0x414);
      iVar2 = thunk_FUN_1006b390();
      DAT_103168e0 = iVar6 <= iVar2;
      if ((bool)DAT_103168e0) {
        local_4c = *(int *)((int)param_1 + 0x4174) / 2;
        local_50 = *(int *)((int)param_1 + 0x4170) / 2;
        local_54 = *(int *)((int)param_1 + 0x416c) / 2;
      }
      else {
        local_4c = 0x2d;
        local_50 = 0x2d;
        local_54 = 0xc3;
      }
      thunk_FUN_1008f270(&DAT_10318a88,&DAT_10316894,local_54,local_50,local_4c,0x32);
    }
  }
  puVar3 = thunk_FUN_1001d7b0(*(int *)((int)param_1 + 0xc));
  if (*(short *)(puVar3 + 0xc6) == -1) {
    puVar3 = thunk_FUN_1001d7b0(*(int *)((int)param_1 + 0xc));
    if (puVar3[0xd4] == '\0') goto LAB_1006d9a3;
    DAT_103167fc = thunk_FUN_1006f1d0(*(uint *)((int)param_1 + 0xc),0,'\x01','\0');
    iVar6 = DAT_103167fc + *(int *)((int)param_1 + 0x414);
    iVar2 = thunk_FUN_1006b390();
    DAT_103168e0 = iVar6 <= iVar2;
    if ((bool)DAT_103168e0) {
      puVar3 = thunk_FUN_1001d7b0(*(int *)((int)param_1 + 0xc));
      bVar1 = puVar3[0xca];
      puVar3 = thunk_FUN_1001d7b0(*(int *)((int)param_1 + 0xc));
      iVar2 = *(int *)(puVar3 + 0x24);
      iVar6 = *(int *)((int)param_1 + 0x418);
      iVar5 = thunk_FUN_1006b3d0();
      if (iVar5 < (int)((uint)bVar1 * iVar2 + iVar6)) goto LAB_1006d951;
      local_4c._0_1_ = '\x01';
    }
    else {
LAB_1006d951:
      local_4c._0_1_ = '\0';
    }
    DAT_103168e0 = (char)local_4c;
    thunk_FUN_1008f270(&DAT_10318a88,"6 Full Load",
                       (-(uint)((char)local_4c != '\0') & 0xffffff6a) + 0xc3,
                       (-(uint)((char)local_4c != '\0') & 0x96) + 0x2d,0x2d,0x32);
    goto LAB_1006d9a3;
  }
  DAT_103167fc = thunk_FUN_1006f1d0(*(uint *)((int)param_1 + 0xc),*(uint *)((int)param_1 + 0x10),
                                    '\x01','\0');
  iVar6 = DAT_103167fc + *(int *)((int)param_1 + 0x414);
  iVar2 = thunk_FUN_1006b390();
  DAT_103168e0 = iVar6 <= iVar2;
  if ((bool)DAT_103168e0) {
    puVar3 = thunk_FUN_1001d7b0(*(int *)((int)param_1 + 0xc));
    bVar1 = puVar3[0xca];
    iVar2 = *(int *)((int)param_1 + 0x418);
    iVar6 = thunk_FUN_1006b3d0();
    if (iVar6 < (int)(iVar2 + (uint)bVar1 * 2)) goto LAB_1006d848;
    local_4c._0_1_ = '\x01';
  }
  else {
LAB_1006d848:
    local_4c._0_1_ = '\0';
  }
  DAT_103168e0 = (char)local_4c;
  thunk_FUN_1008f270(&DAT_10318a88,"6 Buy Akimbo",
                     (-(uint)((char)local_4c != '\0') & 0xffffff6a) + 0xc3,
                     (-(uint)((char)local_4c != '\0') & 0x96) + 0x2d,0x2d,0x32);
LAB_1006d9a3:
  if (*(int *)((int)param_1 + 4) == 3) {
    thunk_FUN_1008f270(&DAT_10318a88,"0 Go Back",100,100,0xcd,0x32);
  }
  thunk_FUN_1006d070(param_1);
  return;
}

/* 1006db50  FUN_1006db50  (511 bytes)
 * undefined FUN_1006db50(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006db50(int param_1)

{
  int iVar1;
  longlong lVar2;
  int local_54;
  int local_50;
  int local_4c;
  
  lVar2 = __ftol();
  *(int *)(param_1 + 0x416c) = (int)lVar2;
  lVar2 = __ftol();
  *(int *)(param_1 + 0x4170) = (int)lVar2;
  lVar2 = __ftol();
  *(int *)(param_1 + 0x4174) = (int)lVar2;
  _DAT_103168b8 = 0;
  thunk_FUN_1008f200(&DAT_10318a88,0x108,DAT_102e1238 / 2,0x14,0x80);
  for (DAT_103168e8 = 0; DAT_103168e8 < 2; DAT_103168e8 = DAT_103168e8 + 1) {
    if (DAT_103168e8 == 0) {
      FUN_100bb6e0(&DAT_103167dc,(byte_conflict *)"%i Kevlar  %i");
      _DAT_103168b8 = 0x76c;
    }
    else if (DAT_103168e8 == 1) {
      FUN_100bb6e0(&DAT_103167dc,(byte_conflict *)"%i Stealth Shoes  %i");
      _DAT_103168b8 = 700;
    }
    iVar1 = thunk_FUN_1006b390();
    if (iVar1 < *(int *)(param_1 + 0x414) + _DAT_103168b8) {
      local_4c = 0x2d;
    }
    else {
      local_4c = *(int *)(param_1 + 0x4174) / 2;
    }
    iVar1 = thunk_FUN_1006b390();
    if (iVar1 < *(int *)(param_1 + 0x414) + _DAT_103168b8) {
      local_50 = 0x2d;
    }
    else {
      local_50 = *(int *)(param_1 + 0x4170) / 2;
    }
    iVar1 = thunk_FUN_1006b390();
    if (iVar1 < *(int *)(param_1 + 0x414) + _DAT_103168b8) {
      local_54 = 0xc3;
    }
    else {
      local_54 = *(int *)(param_1 + 0x416c) / 2;
    }
    thunk_FUN_1008f270(&DAT_10318a88,&DAT_103167dc,local_54,local_50,local_4c,0x32);
  }
  thunk_FUN_1008f270(&DAT_10318a88,"0 Go Back",100,100,0xcd,0x32);
  thunk_FUN_1006cde0(param_1);
  return;
}

/* 1006ddd0  FUN_1006ddd0  (550 bytes)
 * undefined FUN_1006ddd0(int param_1)
 */
void __thiscall FUN_1006ddd0(void *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  *(int *)((int)this + 0x416c) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)((int)this + 0x4170) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)((int)this + 0x4174) = (int)lVar1;
  DAT_10316890 = 0x100;
  DAT_10316800 = 0x30;
  DAT_1031691c = 0x108;
  DAT_10316830 = DAT_102e1238 / 2 + -0x30;
  (*DAT_102e1484)(0x108,DAT_10316830,0xff,0x2f,*(undefined4 *)((int)this + 0x416c),
                  *(undefined4 *)((int)this + 0x4170),*(undefined4 *)((int)this + 0x4174),0x19);
  (*DAT_102e1468)(*(undefined4 *)(&DAT_102db794 + param_1 * 4),*(undefined4 *)((int)this + 0x416c),
                  *(undefined4 *)((int)this + 0x4170),*(undefined4 *)((int)this + 0x4174));
  (*DAT_102e1474)(0,DAT_1031691c,DAT_10316830,0);
  thunk_FUN_1001d7b0(param_1);
  FUN_100bb6e0(&DAT_10316924,(byte_conflict *)"%i Credits");
  thunk_FUN_10047f00(DAT_1031691c + DAT_10316890 / 2,DAT_10316830,DAT_102e1234,&DAT_10316924,
                     *(int *)((int)this + 0x416c) / 2,*(int *)((int)this + 0x4170) / 2,
                     *(int *)((int)this + 0x4174) / 2);
  thunk_FUN_1001d7b0(param_1);
  FUN_100bb6e0(&DAT_10316924,(byte_conflict *)"%i Slots");
  thunk_FUN_10047f00(DAT_1031691c + DAT_10316890 / 2,DAT_10316830 + 0x14,DAT_102e1234,&DAT_10316924,
                     *(int *)((int)this + 0x416c) / 2,*(int *)((int)this + 0x4170) / 2,
                     *(int *)((int)this + 0x4174) / 2);
  return;
}

/* 1006e080  FUN_1006e080  (215 bytes)
 * undefined FUN_1006e080(uint param_1)
 */
void __thiscall FUN_1006e080(void *this,uint param_1)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  void *local_8;
  
  local_c = *(uint *)((int)this + 0x4188) ^ param_1;
  *(uint *)((int)this + 0x418c) = local_c & param_1;
  *(uint *)((int)this + 0x4190) = local_c & ~param_1;
  *(uint *)((int)this + 0x4188) = param_1;
  local_8 = this;
  if ((*(uint *)((int)this + 0x4190) & 1) == 0) {
    if ((*(uint *)((int)this + 0x4190) & 2) != 0) {
      thunk_FUN_1006e830(this,*(undefined4 *)((int)this + 4),10);
    }
  }
  else {
    (*DAT_102e151c)(&local_10,&local_14);
    thunk_FUN_1006e1b0(local_8,local_10,local_14,&local_18,&local_1c);
    if (local_18 == -1) {
      thunk_FUN_1006e830(local_8,*(undefined4 *)((int)local_8 + 4),1);
    }
    else {
      thunk_FUN_1006e830(local_8,local_18,local_1c);
    }
  }
  return;
}

/* 1006e190  FUN_1006e190  (21 bytes)
 * undefined FUN_1006e190(void)
 */
void FUN_1006e190(void)

{
  return;
}

/* 1006e1b0  FUN_1006e1b0  (1326 bytes)
 * undefined FUN_1006e1b0(int param_1, int param_2, undefined4 * param_3, int * param_4)
 */
void __thiscall FUN_1006e1b0(void *this,int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int local_74;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if ((param_1 < 8) || (param_2 < DAT_102e1238 / 2)) {
    *param_3 = 0xffffffff;
  }
  else {
    local_74 = (param_2 - DAT_102e1238 / 2) / 0x14;
    iVar1 = (int)(param_1 + -8 + (param_1 + -8 >> 0x1f & 0x7fU)) >> 7;
    if (iVar1 == 0) {
      if (local_74 < 8) {
        *param_3 = 0;
        if ((*(int *)((int)this + 4) == 0) || (local_74 != 7)) {
          if (local_74 == 7) {
            local_74 = 10;
          }
          else {
            local_74 = local_74 + 1;
          }
          *param_4 = local_74;
        }
        else {
          *param_3 = 0xffffffff;
        }
      }
      else {
        *param_3 = 0xffffffff;
      }
    }
    else {
      if (iVar1 == 1) {
        if ((((*(int *)((int)this + 4) == 1) || (*(int *)((int)this + 4) == 2)) ||
            (*(int *)((int)this + 4) == 3)) || (*(int *)((int)this + 4) == 4)) {
          iVar1 = (DAT_102da424 != 0) + 5;
          if (iVar1 < local_74) {
            *param_3 = 0xffffffff;
            return;
          }
          *param_3 = 1;
          if ((*(int *)((int)this + 4) != 1) && (local_74 == iVar1)) {
            *param_3 = 0xffffffff;
            return;
          }
          if (local_74 == iVar1) {
            local_74 = 10;
          }
          else {
            local_74 = local_74 + 1;
          }
          *param_4 = local_74;
          return;
        }
        if (*(int *)((int)this + 4) != 5) {
          if ((*(int *)((int)this + 4) != 6) && (*(int *)((int)this + 4) != 7)) {
            *param_3 = 0xffffffff;
            return;
          }
          if (local_74 < 0xb) {
            *param_3 = *(undefined4 *)((int)this + 4);
            *param_4 = local_74;
            return;
          }
          *param_3 = 0xffffffff;
          return;
        }
        for (local_20 = 0; local_20 < 0x10; local_20 = local_20 + 1) {
          if (*(int *)((int)this + local_20 * 0x38 + 0x98) == 0) {
            if (local_74 == local_20) {
              *param_3 = 5;
              *param_4 = 10;
              return;
            }
            *param_3 = 0xffffffff;
            return;
          }
          if (local_74 == local_20) {
            *param_3 = 5;
            *param_4 = local_74 + 1;
            return;
          }
        }
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 != 3) {
            *param_3 = 0xffffffff;
            return;
          }
          if (*(int *)((int)this + 4) != 3) {
            *param_3 = 0xffffffff;
            return;
          }
          if (local_74 == 0) {
            *param_3 = 3;
            *param_4 = 1;
            return;
          }
          local_2c = 0;
          for (local_30 = 0; local_30 < 4; local_30 = local_30 + 1) {
            uVar2 = thunk_FUN_1006f140(this,1 << ((byte)local_30 & 0x1f));
            if ((uVar2 & 0xff) == 0) {
              local_2c = local_2c + 1;
            }
            else if (local_74 == (local_30 - local_2c) + 1) {
              *param_3 = 3;
              *param_4 = local_74 + 1 + local_2c;
              return;
            }
          }
          puVar3 = thunk_FUN_1001d7b0(*(int *)((int)this + 0xc));
          if (*(short *)(puVar3 + 0xc6) == -1) {
            puVar3 = thunk_FUN_1001d7b0(*(int *)((int)this + 0xc));
            if ((puVar3[0xd4] != '\0') &&
               (iVar1 = local_30 - local_2c, local_30 = local_30 + 1, local_74 == iVar1 + 1)) {
              *param_3 = 3;
              *param_4 = 6;
              return;
            }
          }
          else {
            iVar1 = local_30 - local_2c;
            local_30 = local_30 + 1;
            if (local_74 == iVar1 + 1) {
              *param_3 = 3;
              *param_4 = 6;
              return;
            }
          }
          if (local_74 == (local_30 - local_2c) + 1) {
            *param_3 = 3;
            *param_4 = 10;
            return;
          }
          *param_3 = 0xffffffff;
          return;
        }
        if ((*(int *)((int)this + 4) != 2) && (*(int *)((int)this + 4) != 3)) {
          if (*(int *)((int)this + 4) != 4) {
            *param_3 = 0xffffffff;
            return;
          }
          if (local_74 < 3) {
            *param_3 = 4;
            if (local_74 == 2) {
              local_74 = 10;
            }
            else {
              local_74 = local_74 + 1;
            }
            *param_4 = local_74;
            return;
          }
          *param_3 = 0xffffffff;
          return;
        }
        local_24 = 0;
        for (local_28 = 0; local_28 < 0x20; local_28 = local_28 + 1) {
          if (*(int *)((int)this + *(int *)((int)this + 8) * 4 + local_28 * 0x80 + 0x2d6c) == -1) {
            if (local_74 == local_28 - local_24) {
              *param_3 = 2;
              *param_4 = 10;
              return;
            }
            *param_3 = 0xffffffff;
            return;
          }
          uVar2 = thunk_FUN_1006b330(*(int *)((int)this +
                                             *(int *)((int)this + 8) * 4 + local_28 * 0x80 + 0x2d6c)
                                    );
          if ((uVar2 & 0xff) == 0) {
            if (local_74 == local_28 - local_24) {
              *param_3 = 2;
              *param_4 = local_74 + 1 + local_24;
              return;
            }
          }
          else {
            local_24 = local_24 + 1;
          }
        }
      }
      thunk_FUN_10068c10("A hole in the menu! TELL VINO IMMEDIATELY!");
    }
  }
  return;
}

/* 1006e830  FUN_1006e830  (1818 bytes)
 * undefined FUN_1006e830(undefined4 param_1, int param_2)
 */
void __thiscall FUN_1006e830(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined1 local_b4 [64];
  uint local_74;
  uint local_70 [8];
  int local_50;
  int local_4c;
  uint local_48 [8];
  uint local_28 [8];
  undefined1 *local_8;
  
  if ((0 < param_2) && (param_2 < 0xb)) {
    local_8 = this;
    switch(param_1) {
    case 0:
      if (param_2 == 1) {
        uVar1 = thunk_FUN_1006ff20((int)this);
        if ((uVar1 & 0xff) != 0) {
          thunk_FUN_1006b530(local_8);
        }
      }
      else if (param_2 == 2) {
        *(undefined4 *)((int)this + 4) = 1;
      }
      else if (param_2 == 3) {
        *(undefined4 *)((int)this + 4) = 5;
      }
      else if (param_2 == 4) {
        _memset((void *)((int)this + 0x14),0,0x408);
        thunk_FUN_100873d0(&DAT_102e024c,(uint *)"Config Reset",0,0,0,0x14,0);
        *(undefined1 *)((int)local_8 + 0x4178) = 1;
        *(undefined4 *)((int)local_8 + 0x417c) = 0;
      }
      else if (param_2 == 5) {
        *(undefined4 *)((int)this + 4) = 6;
      }
      else if (param_2 == 6) {
        *(undefined4 *)((int)this + 4) = 7;
      }
      else if (param_2 == 7) {
        thunk_FUN_10070860(this,0.0);
      }
      else if (param_2 == 10) {
        thunk_FUN_1006b530(this);
      }
      break;
    case 1:
      if (param_2 == 6) {
        if (1 < DAT_102da424) {
          *(undefined4 *)((int)this + 4) = 4;
        }
      }
      else if ((param_2 < 1) || (5 < param_2)) {
        if (param_2 == 10) {
          *(undefined4 *)((int)this + 4) = 0;
          *(undefined4 *)((int)this + 8) = 0;
          *(undefined4 *)((int)this + 0xc) = 0;
          *(undefined4 *)((int)this + 0x10) = 0;
        }
      }
      else if (*(int *)((int)this + param_2 * 4 + 0x2d68) != -1) {
        *(undefined4 *)((int)this + 4) = 2;
        *(int *)((int)this + 8) = param_2 + -1;
      }
      break;
    case 2:
      if (param_2 == 10) {
        *(undefined4 *)((int)this + 4) = 1;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
      }
      else if ((((0 < param_2) && (param_2 + -1 < 0x20)) &&
               (*(int *)((int)this + *(int *)((int)this + 8) * 4 + (param_2 + -1) * 0x80 + 0x2d6c)
                != -1)) &&
              (uVar1 = thunk_FUN_1006b330(*(int *)((int)this +
                                                  *(int *)((int)this + 8) * 4 +
                                                  (param_2 + -1) * 0x80 + 0x2d6c)),
              (uVar1 & 0xff) == 0)) {
        *(undefined4 *)((int)local_8 + 4) = 3;
        *(undefined4 *)((int)local_8 + 0xc) =
             *(undefined4 *)
              ((int)local_8 + *(int *)((int)local_8 + 8) * 4 + (param_2 + -1) * 0x80 + 0x2d6c);
      }
      break;
    case 3:
      if ((param_2 == 1) || (param_2 == 6)) {
        thunk_FUN_1006f5b0(this,*(uint *)((int)this + 0xc),*(uint *)((int)this + 0x10),param_2 == 6,
                           '\0');
        *(undefined4 *)((int)local_8 + 4) = 1;
        *(undefined4 *)((int)local_8 + 0xc) = 0;
        *(undefined4 *)((int)local_8 + 0x10) = 0;
      }
      else if ((param_2 < 2) || (5 < param_2)) {
        if (param_2 == 10) {
          *(undefined4 *)((int)this + 4) = 2;
          *(undefined4 *)((int)this + 0xc) = 0;
          *(undefined4 *)((int)this + 0x10) = 0;
        }
      }
      else {
        uVar1 = thunk_FUN_1006f140(this,1 << ((char)param_2 - 2U & 0x1f));
        if ((uVar1 & 0xff) != 0) {
          *(uint *)((int)local_8 + 0x10) =
               *(uint *)((int)local_8 + 0x10) | 1 << ((char)param_2 - 2U & 0x1f);
        }
      }
      break;
    case 4:
      if ((param_2 < 1) || (2 < param_2)) {
        if (param_2 == 10) {
          *(undefined4 *)((int)this + 4) = 1;
          *(undefined4 *)((int)this + 0xc) = 0;
          *(undefined4 *)((int)this + 0x10) = 0;
        }
      }
      else {
        if (param_2 == 1) {
          local_74 = 0x10;
        }
        else if (param_2 == 2) {
          local_74 = 0x20;
        }
        thunk_FUN_1006f5b0(this,local_74,0,'\0','\x01');
        *(undefined4 *)((int)local_8 + 4) = 1;
        *(undefined4 *)((int)local_8 + 0xc) = 0;
        *(undefined4 *)((int)local_8 + 0x10) = 0;
      }
      break;
    case 5:
      if (param_2 == 10) {
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
      }
      else {
        local_4c = -1;
        local_50 = 0;
        while ((local_50 < 0x10 && (local_4c == -1))) {
          if ((*(int *)((int)this + local_50 * 0x38 + 0x98) != 0) && (local_50 + 1 == param_2)) {
            local_4c = local_50;
          }
          local_50 = local_50 + 1;
        }
        if (local_4c != -1) {
          if (*(char *)((int)this + local_4c * 0x38 + 0x94) == '\0') {
            thunk_FUN_1001d7b0(*(int *)((int)this + local_4c * 0x38 + 0x98));
            FUN_100bb6e0((undefined1 *)local_70,(byte_conflict *)"%s Removed");
          }
          else {
            FUN_100bb6e0((undefined1 *)local_70,(byte_conflict *)"%s Removed");
          }
          thunk_FUN_100873d0(&DAT_102e024c,local_70,0,0,0,0x14,0);
          thunk_FUN_1006f340(local_8,local_4c);
          thunk_FUN_1006fcb0(local_8);
        }
      }
      break;
    case 6:
      if (param_2 == 10) {
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
      }
      else {
        FUN_100bc090((undefined4 *)((int)this + (param_2 + -1) * 0x408 + 0x824),
                     (undefined4 *)((int)this + 0x14),0x408);
        thunk_FUN_1006b210((int)local_8);
        *(undefined4 *)((int)local_8 + 4) = 0;
        *(undefined4 *)((int)local_8 + 8) = 0;
        *(undefined4 *)((int)local_8 + 0xc) = 0;
        *(undefined4 *)((int)local_8 + 0x10) = 0;
        FUN_100bb6e0((undefined1 *)local_28,(byte_conflict *)"Saved Config on slot #%i");
        thunk_FUN_100873d0(&DAT_102e024c,local_28,0,0,0,0x14,0);
      }
      break;
    case 7:
      if (param_2 == 10) {
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
      }
      else if (0 < *(int *)((int)this + (param_2 + -1) * 0x408 + 0xc24)) {
        FUN_100bc090((undefined4 *)((int)this + 0x14),
                     (undefined4 *)((int)this + (param_2 + -1) * 0x408 + 0x824),0x408);
        thunk_FUN_1006fcb0(local_8);
        FUN_100bb6e0((undefined1 *)local_48,(byte_conflict *)"Config #%i Loaded");
        thunk_FUN_100873d0(&DAT_102e024c,local_48,0,0,0,0x14,0);
        *(undefined1 *)((int)local_8 + 0x4178) = 1;
        *(undefined4 *)((int)local_8 + 4) = 0;
        *(undefined4 *)((int)local_8 + 8) = 0;
        *(undefined4 *)((int)local_8 + 0xc) = 0;
        *(undefined4 *)((int)local_8 + 0x10) = 0;
      }
      break;
    case 8:
      if ((param_2 < 1) || (2 < param_2)) {
        if (param_2 == 10) {
          thunk_FUN_1006b530(this);
        }
      }
      else {
        FUN_100bb6e0(local_b4,(byte_conflict *)"chgteam %i");
        (*DAT_102e14a4)(local_b4);
        thunk_FUN_1006b530(local_8);
      }
    }
  }
  return;
}

/* 1006f140  FUN_1006f140  (104 bytes)
 * undefined4 FUN_1006f140(uint param_1)
 */
uint __thiscall FUN_1006f140(void *this,uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint3 uVar3;
  
  if ((*(uint *)((int)this + 0x10) & param_1) == 0) {
    puVar2 = thunk_FUN_1001d7b0(*(int *)((int)this + 0xc));
    if ((*(uint *)(puVar2 + 0xdc) & param_1) == 0) {
      puVar2 = thunk_FUN_1001d7b0(*(int *)((int)this + 0xc));
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

/* 1006f1d0  FUN_1006f1d0  (284 bytes)
 * int FUN_1006f1d0(uint param_1, uint param_2, char param_3, char param_4)
 */
int FUN_1006f1d0(uint param_1,uint param_2,char param_3,char param_4)

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

/* 1006f340  FUN_1006f340  (491 bytes)
 * undefined4 FUN_1006f340(int param_1)
 */
undefined4 __thiscall FUN_1006f340(void *this,int param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_48;
  undefined4 local_44 [14];
  undefined1 local_9;
  void *local_8;
  
  *(int *)((int)this + 0x414) =
       *(int *)((int)this + 0x414) - *(int *)((int)this + param_1 * 0x38 + 0xa0);
  local_8 = this;
  if (*(char *)((int)this + param_1 * 0x38 + 0x94) == '\0') {
    if (*(int *)((int)this + param_1 * 0x38 + 200) == 0) {
      puVar2 = thunk_FUN_1001d7b0(*(int *)((int)this + param_1 * 0x38 + 0x98));
      *(uint *)((int)local_8 + 0x418) =
           *(int *)((int)local_8 + 0x418) -
           (uint)(byte)puVar2[0xca] *
           ((*(char *)((int)local_8 + param_1 * 0x38 + 0xc4) != '\0') + 1);
    }
    else {
      puVar2 = thunk_FUN_1001d7b0(*(int *)((int)this + param_1 * 0x38 + 0x98));
      *(uint *)((int)local_8 + 0x418) =
           *(int *)((int)local_8 + 0x418) -
           (uint)(byte)puVar2[0xca] * *(int *)((int)local_8 + param_1 * 0x38 + 200);
    }
  }
  _memset((void *)((int)local_8 + param_1 * 0x38 + 0x94),0,0x38);
  do {
    local_9 = 0;
    bVar1 = false;
    for (local_48 = 0; local_48 < 0xf; local_48 = local_48 + 1) {
      if ((*(int *)((int)local_8 + local_48 * 0x38 + 0x98) < 1) &&
         (0 < *(int *)((int)local_8 + (local_48 + 1) * 0x38 + 0x98))) {
        puVar4 = (undefined4 *)((int)local_8 + local_48 * 0x38 + 0x94);
        puVar5 = local_44;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = (undefined4 *)((int)local_8 + (local_48 + 1) * 0x38 + 0x94);
        puVar5 = (undefined4 *)((int)local_8 + local_48 * 0x38 + 0x94);
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = local_44;
        puVar5 = (undefined4 *)((int)local_8 + (local_48 + 1) * 0x38 + 0x94);
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_9 = 1;
        bVar1 = true;
      }
    }
  } while (bVar1);
  *(undefined1 *)((int)local_8 + 0x4178) = 1;
  return CONCAT31((int3)((uint)local_8 >> 8),1);
}

/* 1006f5b0  FUN_1006f5b0  (1430 bytes)
 * undefined4 FUN_1006f5b0(uint param_1, uint param_2, char param_3, char param_4)
 */
undefined4 __thiscall FUN_1006f5b0(void *this,uint param_1,uint param_2,char param_3,char param_4)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined3 uVar7;
  int local_60;
  int local_5c;
  int local_14;
  
  if (param_4 == '\0') {
    uVar3 = thunk_FUN_1006b330(param_1);
    if ((uVar3 & 0xff) != 0) {
      return 0;
    }
    iVar4 = thunk_FUN_1006b390();
    iVar5 = thunk_FUN_1006f1d0(param_1,param_2,param_3,'\0');
    uVar3 = iVar5 + *(int *)((int)this + 0x414);
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
    iVar4 = thunk_FUN_1006b3d0();
    puVar6 = thunk_FUN_1001d7b0(param_1);
    if (iVar4 < (int)((uint)(byte)puVar6[0xca] * local_60 + *(int *)((int)this + 0x418))) {
      return (uint)puVar6 & 0xffffff00;
    }
  }
  else {
    iVar4 = thunk_FUN_1006b390();
    iVar5 = thunk_FUN_1006f1d0(param_1,0,'\0','\x01');
    uVar3 = iVar5 + *(int *)((int)this + 0x414);
    if (iVar4 < (int)uVar3) {
      return uVar3 & 0xffffff00;
    }
  }
  bVar2 = false;
  local_14 = 0;
  while ((uVar7 = (undefined3)((uint)this >> 8), local_14 < 0x10 && (!bVar2))) {
    if (*(uint *)((int)this + local_14 * 0x38 + 0x98) == param_1) {
      if (param_4 == '\0') {
        puVar6 = thunk_FUN_1001d7b0(param_1);
        if (puVar6[0xd4] != '\0') {
          puVar6 = thunk_FUN_1001d7b0(param_1);
          if (*(int *)(puVar6 + 0x24) <= *(int *)((int)this + local_14 * 0x38 + 200)) {
            return (uint)puVar6 & 0xffffff00;
          }
          if (param_3 == '\0') {
            *(int *)((int)this + local_14 * 0x38 + 200) =
                 *(int *)((int)this + local_14 * 0x38 + 200) + 1;
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(int *)((int)this + local_14 * 0x38 + 0xa0) =
                 *(int *)((int)this + local_14 * 0x38 + 0xa0) + *(int *)(puVar6 + 0xd0);
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(int *)((int)this + 0x414) = *(int *)((int)this + 0x414) + *(int *)(puVar6 + 0xd0);
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(uint *)((int)this + 0x418) = (uint)(byte)puVar6[0xca] + *(int *)((int)this + 0x418);
          }
          else {
            puVar6 = thunk_FUN_1001d7b0(param_1);
            iVar4 = *(int *)(puVar6 + 0x24) - *(int *)((int)this + local_14 * 0x38 + 200);
            *(int *)((int)this + local_14 * 0x38 + 200) =
                 *(int *)((int)this + local_14 * 0x38 + 200) + iVar4;
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(int *)((int)this + local_14 * 0x38 + 0xa0) =
                 *(int *)(puVar6 + 0xd0) * iVar4 + *(int *)((int)this + local_14 * 0x38 + 0xa0);
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(int *)((int)this + 0x414) =
                 *(int *)(puVar6 + 0xd0) * iVar4 + *(int *)((int)this + 0x414);
            puVar6 = thunk_FUN_1001d7b0(param_1);
            *(uint *)((int)this + 0x418) =
                 (uint)(byte)puVar6[0xca] * iVar4 + *(int *)((int)this + 0x418);
          }
          thunk_FUN_1006fcb0(this);
          *(undefined1 *)((int)this + 0x4178) = 1;
          return CONCAT31(uVar7,1);
        }
        puVar6 = thunk_FUN_1001d7b0(param_1);
        if ((*(short *)(puVar6 + 0xc6) == -1) ||
           (*(char *)((int)this + local_14 * 0x38 + 0xc4) != '\0')) {
          thunk_FUN_1006f340(this,local_14);
          bVar2 = true;
        }
        else {
          param_3 = '\x01';
          param_2 = param_2 | *(uint *)((int)this + local_14 * 0x38 + 0x9c);
          thunk_FUN_1006f340(this,local_14);
          bVar2 = true;
        }
      }
      else if (*(char *)((int)this + local_14 * 0x38 + 0x94U) != '\0') {
        return local_14 * 0x38 & 0xffffff00;
      }
    }
    local_14 = local_14 + 1;
  }
  local_14 = 0;
  while ((local_14 < 0x10 && (*(int *)((int)this + local_14 * 0x38 + 0x98) != 0))) {
    local_14 = local_14 + 1;
  }
  pcVar1 = (char *)((int)this + local_14 * 0x38 + 0x94);
  puVar6 = thunk_FUN_1001d7b0(param_1);
  if (puVar6[0xd4] == '\0') {
    pcVar1[0x30] = param_3;
  }
  *(uint *)(pcVar1 + 4) = param_1;
  *pcVar1 = param_4;
  *(uint *)(pcVar1 + 8) = ~-(uint)(param_4 != '\0') & param_2;
  iVar4 = thunk_FUN_1006f1d0(param_1,param_2,param_3,param_4);
  *(int *)(pcVar1 + 0xc) = iVar4;
  if ((param_4 == '\0') && (puVar6 = thunk_FUN_1001d7b0(param_1), puVar6[0xd4] != '\0')) {
    if (param_3 == '\0') {
      *(undefined4 *)((int)this + local_14 * 0x38 + 200) = 1;
    }
    else {
      puVar6 = thunk_FUN_1001d7b0(param_1);
      *(undefined4 *)((int)this + local_14 * 0x38 + 200) = *(undefined4 *)(puVar6 + 0x24);
    }
  }
  *(int *)((int)this + 0x414) = *(int *)((int)this + 0x414) + *(int *)(pcVar1 + 0xc);
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
    *(uint *)((int)this + 0x418) = (uint)(byte)puVar6[0xca] * local_60 + *(int *)((int)this + 0x418)
    ;
  }
  thunk_FUN_1006fcb0(this);
  *(undefined1 *)((int)this + 0x4178) = 1;
  return CONCAT31(uVar7,1);
}

/* 1006fcb0  FUN_1006fcb0  (305 bytes)
 * undefined FUN_1006fcb0(void * param_1)
 */
void __fastcall FUN_1006fcb0(void *param_1)

{
  char *pcVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int local_64;
  int local_20;
  int local_14;
  
  local_64 = thunk_FUN_1006b390();
  local_64 = local_64 - *(int *)((int)param_1 + 0x414);
  _memset((void *)((int)param_1 + 0x14),0,0x80);
  local_14 = local_64;
  if (0 < local_64) {
    do {
      bVar2 = true;
      for (local_20 = 0; local_20 < 0x10; local_20 = local_20 + 1) {
        pcVar1 = (char *)((int)param_1 + local_20 * 0x38 + 0x94);
        if ((*(int *)(pcVar1 + 4) != 0) && (*pcVar1 == '\0')) {
          puVar3 = thunk_FUN_1001d7b0(*(int *)(pcVar1 + 4));
          uVar5 = (uint)(byte)puVar3[8];
          puVar3 = thunk_FUN_1001d7f0(uVar5);
          if ((-1 < local_14 - *(int *)(puVar3 + 4)) &&
             (uVar4 = thunk_FUN_1006fe30(param_1,uVar5), (uVar4 & 0xff) != 0)) {
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
    *(int *)((int)param_1 + 0x417c) = local_64;
  }
  return;
}

/* 1006fe30  FUN_1006fe30  (183 bytes)
 * undefined4 FUN_1006fe30(int param_1)
 */
uint __thiscall FUN_1006fe30(void *this,int param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined *puVar2;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    puVar2 = thunk_FUN_1001d7f0(param_1);
    if (*(int *)((int)this + param_1 * 8 + 0x14) < *(int *)(puVar2 + 0xc)) {
      puVar2 = thunk_FUN_1001d7f0(param_1);
      *(int *)((int)this + param_1 * 8 + 0x14) =
           *(int *)((int)this + param_1 * 8 + 0x14) + *(int *)(puVar2 + 0x10);
      *(int *)((int)this + param_1 * 8 + 0x18) = *(int *)((int)this + param_1 * 8 + 0x18) + 1;
      puVar2 = thunk_FUN_1001d7f0(param_1);
      if (*(int *)(puVar2 + 0xc) < *(int *)((int)this + param_1 * 8 + 0x14)) {
        puVar2 = thunk_FUN_1001d7f0(param_1);
        puVar2 = *(undefined **)(puVar2 + 0xc);
        *(undefined **)((int)this + param_1 * 8 + 0x14) = puVar2;
      }
      uVar1 = CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
    else {
      uVar1 = (uint)puVar2 & 0xffffff00;
    }
  }
  return uVar1;
}

/* 1006ff20  FUN_1006ff20  (1637 bytes)
 * undefined4 FUN_1006ff20(int param_1)
 */
uint __fastcall FUN_1006ff20(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
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
  if (*(int *)(param_1 + 0x414) < 1) {
    thunk_FUN_100873d0(&DAT_102e024c,(uint *)"Your config is empty!",0xc3,0x2d,0x2d,0x14,0);
  }
  iVar2 = thunk_FUN_1006b390();
  if (iVar2 < *(int *)(local_8 + 0x414)) {
    uVar3 = thunk_FUN_100873d0(&DAT_102e024c,(uint *)"No cash left!",0xc3,0x2d,0x2d,0x14,0);
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    uVar3 = thunk_FUN_1006b3d0();
    if ((int)uVar3 < *(int *)(local_8 + 0x418)) {
      uVar3 = uVar3 & 0xffffff00;
    }
    else {
      do {
        local_1cd = '\0';
        for (local_20c = 0; local_20c < 0xf; local_20c = local_20c + 1) {
          if ((0 < *(int *)(local_8 + 0x98 + local_20c * 0x38)) &&
             (0 < *(int *)(local_8 + 0x98 + (local_20c + 1) * 0x38))) {
            local_1ce = '\0';
            if ((*(char *)(local_8 + 0x94 + local_20c * 0x38) == '\0') &&
               (*(char *)(local_8 + 0x94 + (local_20c + 1) * 0x38) == '\0')) {
              puVar4 = thunk_FUN_1001d7b0(*(int *)(local_8 + 0x98 + local_20c * 0x38));
              if ((puVar4[8] == '\0') ||
                 (puVar4 = thunk_FUN_1001d7b0(*(int *)(local_8 + 0x98 + (local_20c + 1) * 0x38)),
                 puVar4[8] == '\0')) {
                puVar4 = thunk_FUN_1001d7b0(*(int *)(local_8 + 0x98 + local_20c * 0x38));
                if ((puVar4[8] == '\0') &&
                   (puVar4 = thunk_FUN_1001d7b0(*(int *)(local_8 + 0x98 + (local_20c + 1) * 0x38)),
                   puVar4[8] == '\0')) {
                  if (*(int *)(local_8 + 0xa0 + (local_20c + 1) * 0x38) <
                      *(int *)(local_8 + 0xa0 + local_20c * 0x38)) {
                    local_1ce = '\x01';
                  }
                }
                else {
                  puVar4 = thunk_FUN_1001d7b0(*(int *)(local_8 + 0x98 + local_20c * 0x38));
                  if (puVar4[8] != '\0') {
                    local_1ce = '\x01';
                  }
                }
              }
              else if (*(int *)(local_8 + 0xa0 + (local_20c + 1) * 0x38) <
                       *(int *)(local_8 + 0xa0 + local_20c * 0x38)) {
                local_1ce = '\x01';
              }
            }
            else {
              bVar1 = *(int *)(local_8 + 0xa0 + (local_20c + 1) * 0x38) <
                      *(int *)(local_8 + 0xa0 + local_20c * 0x38);
              local_1ce = bVar1;
              if (bVar1) {
                local_1ce = 1;
                local_1ce = bVar1;
              }
            }
            if (local_1ce != '\0') {
              puVar5 = (undefined4 *)(local_8 + 0x94 + local_20c * 0x38);
              puVar6 = local_208;
              for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              puVar5 = (undefined4 *)(local_8 + 0x94 + (local_20c + 1) * 0x38);
              puVar6 = (undefined4 *)(local_8 + 0x94 + local_20c * 0x38);
              for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              puVar5 = local_208;
              puVar6 = (undefined4 *)(local_8 + 0x94 + (local_20c + 1) * 0x38);
              for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
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
        local_1cc = local_8 + 0x94 + local_210 * 0x38;
        if (*(int *)(local_1cc + 4) != 0) {
          if (*(char *)(local_8 + 0x94 + local_210 * 0x38) == '\0') {
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
        if (*(int *)(local_8 + 0x14 + local_210 * 8) != 0) {
          FUN_100bb6e0((undefined1 *)local_1c8,(byte_conflict *)"%i_%i ");
          FUN_100bba30(local_108,local_1c8);
        }
      }
      (*DAT_102e14a4)(local_88);
      (*DAT_102e14a4)(local_188);
      (*DAT_102e14a4)(local_108);
      if (*(char *)(local_8 + 0x4178) == '\0') {
        thunk_FUN_100873d0(&DAT_102e024c,(uint *)"Using last config.",0,0,0,0x14,0);
      }
      else {
        thunk_FUN_100873d0(&DAT_102e024c,(uint *)"Using new config.",0,0,0,0x14,0);
      }
      *(undefined1 *)(local_8 + 0x4178) = 0;
      puVar5 = FUN_100bc090((undefined4 *)(local_8 + 0x41c),(undefined4 *)(local_8 + 0x14),0x408);
      uVar3 = CONCAT31((int3)((uint)puVar5 >> 8),1);
    }
  }
  return uVar3;
}

/* 10070720  FUN_10070720  (254 bytes)
 * uint FUN_10070720(int param_1)
 */
uint __cdecl FUN_10070720(int param_1)

{
  int iVar1;
  undefined *puVar2;
  uint local_8;
  
  local_8 = 0;
  iVar1 = (*DAT_102e1568)(0,100);
  if (0x32 < iVar1) {
    puVar2 = thunk_FUN_1001d7b0(param_1);
    if ((*(uint *)(puVar2 + 0xd8) & 1) != 0) {
      puVar2 = thunk_FUN_1001d7b0(param_1);
      if ((*(uint *)(puVar2 + 0xdc) & 1) == 0) {
        local_8 = 1;
      }
    }
  }
  iVar1 = (*DAT_102e1568)(0,100);
  if (0x32 < iVar1) {
    puVar2 = thunk_FUN_1001d7b0(param_1);
    if ((*(uint *)(puVar2 + 0xd8) & 2) != 0) {
      puVar2 = thunk_FUN_1001d7b0(param_1);
      if ((*(uint *)(puVar2 + 0xdc) & 2) == 0) {
        local_8 = local_8 | 2;
      }
    }
  }
  iVar1 = (*DAT_102e1568)(0,100);
  if (0x4b < iVar1) {
    puVar2 = thunk_FUN_1001d7b0(param_1);
    if ((*(uint *)(puVar2 + 0xd8) & 8) != 0) {
      puVar2 = thunk_FUN_1001d7b0(param_1);
      if ((*(uint *)(puVar2 + 0xdc) & 8) == 0) {
        local_8 = local_8 | 8;
      }
    }
  }
  return local_8;
}

/* 10070860  FUN_10070860  (1268 bytes)
 * undefined FUN_10070860(float param_1)
 */
void __thiscall FUN_10070860(void *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  float10 fVar5;
  char cVar6;
  float local_c;
  
  _memset((void *)((int)this + 0x14),0,0x408);
  *(undefined1 *)((int)this + 0x4178) = 1;
  iVar1 = (*DAT_102e1568)(0,5);
  if (iVar1 == 2) {
    cVar4 = '\0';
    iVar1 = (*DAT_102e1568)(0,2);
    thunk_FUN_1006f5b0(this,0x23,0,iVar1 == 0,cVar4);
  }
  else if (iVar1 == 3) {
    thunk_FUN_1006f5b0(this,0x22,0,'\0','\0');
  }
  else {
    cVar4 = '\0';
    iVar1 = (*DAT_102e1568)(0,2);
    thunk_FUN_1006f5b0(this,0x19,0,iVar1 == 0,cVar4);
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
      thunk_FUN_1006f5b0(this,1,uVar3,cVar4,cVar6);
      break;
    case 2:
      cVar6 = '\0';
      iVar1 = (*DAT_102e1568)(0,1);
      cVar4 = iVar1 != 0;
      uVar3 = thunk_FUN_10070720(9);
      thunk_FUN_1006f5b0(this,9,uVar3,cVar4,cVar6);
      break;
    case 3:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0xc);
      thunk_FUN_1006f5b0(this,0xc,uVar3,cVar4,cVar6);
      break;
    case 4:
      cVar6 = '\0';
      iVar1 = (*DAT_102e1568)(0,1);
      cVar4 = iVar1 != 0;
      uVar3 = thunk_FUN_10070720(0xe);
      thunk_FUN_1006f5b0(this,0xe,uVar3,cVar4,cVar6);
      break;
    case 5:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(8);
      thunk_FUN_1006f5b0(this,8,uVar3,cVar4,cVar6);
      break;
    case 6:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x15);
      thunk_FUN_1006f5b0(this,0x15,uVar3,cVar4,cVar6);
      break;
    case 7:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x16);
      thunk_FUN_1006f5b0(this,0x16,uVar3,cVar4,cVar6);
      break;
    case 8:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x1c);
      thunk_FUN_1006f5b0(this,0x1c,uVar3,cVar4,cVar6);
      break;
    case 9:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x1f);
      thunk_FUN_1006f5b0(this,0x1f,uVar3,cVar4,cVar6);
    }
  }
  if ((local_c <= 0.3) || (0.7 <= local_c)) {
    if (0.7 <= local_c) {
      uVar2 = (*DAT_102e1568)(1,0xc);
      switch(uVar2) {
      case 1:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(4);
        thunk_FUN_1006f5b0(this,4,uVar3,cVar4,cVar6);
        break;
      case 2:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0xb);
        thunk_FUN_1006f5b0(this,0xb,uVar3,cVar4,cVar6);
        break;
      case 3:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x14);
        thunk_FUN_1006f5b0(this,0x14,uVar3,cVar4,cVar6);
        break;
      case 4:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0xd);
        thunk_FUN_1006f5b0(this,0xd,uVar3,cVar4,cVar6);
        break;
      case 5:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(5);
        thunk_FUN_1006f5b0(this,5,uVar3,cVar4,cVar6);
        break;
      case 6:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0xf);
        thunk_FUN_1006f5b0(this,0xf,uVar3,cVar4,cVar6);
        break;
      case 7:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x1a);
        thunk_FUN_1006f5b0(this,0x1a,uVar3,cVar4,cVar6);
        break;
      case 8:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x1b);
        thunk_FUN_1006f5b0(this,0x1b,uVar3,cVar4,cVar6);
        break;
      case 9:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x21);
        thunk_FUN_1006f5b0(this,0x21,uVar3,cVar4,cVar6);
        break;
      case 10:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x12);
        thunk_FUN_1006f5b0(this,0x12,uVar3,cVar4,cVar6);
        break;
      case 0xb:
        cVar6 = '\0';
        cVar4 = '\0';
        uVar3 = thunk_FUN_10070720(0x20);
        thunk_FUN_1006f5b0(this,0x20,uVar3,cVar4,cVar6);
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
      thunk_FUN_1006f5b0(this,3,uVar3,cVar4,cVar6);
      break;
    case 2:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(6);
      thunk_FUN_1006f5b0(this,6,uVar3,cVar4,cVar6);
      break;
    case 3:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(7);
      thunk_FUN_1006f5b0(this,7,uVar3,cVar4,cVar6);
      break;
    case 4:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x11);
      thunk_FUN_1006f5b0(this,0x11,uVar3,cVar4,cVar6);
      break;
    case 5:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x13);
      thunk_FUN_1006f5b0(this,0x13,uVar3,cVar4,cVar6);
      break;
    case 6:
      cVar6 = '\0';
      cVar4 = '\0';
      uVar3 = thunk_FUN_10070720(0x17);
      thunk_FUN_1006f5b0(this,0x17,uVar3,cVar4,cVar6);
    }
  }
  FUN_100bc090((undefined4 *)((int)this + 0x41c),(undefined4 *)((int)this + 0x14),0x408);
  return;
}

/* 10070f20  FUN_10070f20  (1333 bytes)
 * undefined FUN_10070f20(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070f20(void)

{
  int *piVar1;
  float *pfVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  void *extraout_ECX;
  float10 fVar10;
  undefined1 *puVar11;
  float local_c0;
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_10316a84 & 1) == 0) {
    DAT_10316a84 = DAT_10316a84 | 1;
    thunk_FUN_10007fe0(&DAT_10316998);
    FUN_100bc490(0x10071610);
  }
  if ((DAT_10316a84 & 2) == 0) {
    DAT_10316a84 = DAT_10316a84 | 2;
    thunk_FUN_10007fe0(&DAT_10316a08);
    FUN_100bc490(0x100715f0);
  }
  if ((DAT_10316a84 & 4) == 0) {
    DAT_10316a84 = DAT_10316a84 | 4;
    thunk_FUN_1006a030(&DAT_10316a20);
    FUN_100bc490(0x100715d0);
  }
  if ((DAT_10316a84 & 8) == 0) {
    DAT_10316a84 = DAT_10316a84 | 8;
    thunk_FUN_1000c160(0x10316a98);
    FUN_100bc490(0x100715b0);
  }
  if ((DAT_102db764 & 4) != 0) {
    (**(code **)(DAT_102e15a8 + 0x2c))();
    (**(code **)(DAT_102e15a8 + 0x28))(0,1);
    piVar1 = (int *)(*DAT_102e1524)();
    (**(code **)(DAT_102e15a8 + 0x34))(*piVar1 + -1);
    (**(code **)(DAT_102e15a8 + 0x38))(2);
    (*DAT_102e1524)(&DAT_10316a98);
    pfVar2 = thunk_FUN_1000cb20(&DAT_1031ab5c,local_1c,1024.0);
    puVar11 = local_28;
    pvVar3 = thunk_FUN_10096e30(local_10);
    pvVar3 = thunk_FUN_1000d970(pvVar3,puVar11,pfVar2);
    uVar4 = thunk_FUN_10008500(pvVar3);
    pvVar3 = thunk_FUN_10096e30(local_34);
    uVar5 = thunk_FUN_10008500(pvVar3);
    (**(code **)(DAT_102e15a8 + 0x3c))(uVar5,uVar4);
    (**(code **)(DAT_102e15a8 + 0x30))();
    if (DAT_10316aa8 != 0x3f800000) {
      pfVar2 = thunk_FUN_10096e30(local_40);
      pvVar3 = thunk_FUN_1000ca70(&DAT_10316aac,local_4c,pfVar2);
      pvVar3 = (void *)thunk_FUN_10008500(pvVar3);
      fVar10 = thunk_FUN_10097fc0(extraout_ECX,pvVar3);
      _DAT_10316a18 = (float)fVar10;
      DAT_103169a4 = 0;
      DAT_103169a4 = (**(code **)(DAT_102e15a4 + 0x100))(2);
      if (DAT_103169a4 != 0) {
        puVar6 = (undefined4 *)thunk_FUN_10008500(&DAT_10316aac);
        puVar7 = (undefined4 *)thunk_FUN_10008500(DAT_103169a4);
        *puVar7 = *puVar6;
        iVar8 = thunk_FUN_10008500(&DAT_10316aac);
        iVar9 = thunk_FUN_10008500(DAT_103169a4);
        *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar8 + 4);
        iVar8 = thunk_FUN_10008500(&DAT_10316aac);
        iVar9 = thunk_FUN_10008500(DAT_103169a4);
        *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar8 + 8);
        if (120.0 <= 1024.0 - _DAT_10316a18) {
          local_c0 = 120.0;
        }
        else {
          local_c0 = 1024.0 - _DAT_10316a18;
        }
        *(float *)(DAT_103169a4 + 0xc) = local_c0;
        *(undefined1 *)(DAT_103169a4 + 0x10) = 0xff;
        *(undefined1 *)(DAT_103169a4 + 0x11) = 0xff;
        *(undefined1 *)(DAT_103169a4 + 0x12) = 0xff;
        fVar10 = (float10)(*DAT_102e1530)();
        *(float *)(DAT_103169a4 + 0x14) = (float)(fVar10 + (float10)0.1);
      }
    }
    if ((DAT_10320fe4 != 0) &&
       (DAT_10316adc = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/flash.spr",5),
       DAT_10316adc != -1)) {
      uVar4 = (*DAT_102e1550)(*(undefined4 *)(&DAT_1031abdc + DAT_10316adc * 0x28),0);
      iVar8 = (**(code **)(DAT_102e15a0 + 0x2c))(uVar4);
      if (iVar8 != 0) {
        (**(code **)(DAT_102e15a0 + 4))(5);
        (**(code **)(DAT_102e15a0 + 0x28))(1);
        (**(code **)(DAT_102e15a0 + 8))(2);
        (**(code **)(DAT_102e15a0 + 0x10))(0x3f333333,0x3f333333,0x3f333333,0x3f800000);
        puVar6 = (undefined4 *)thunk_FUN_10008500(DAT_10320fe4 + 0xb60);
        puVar7 = (undefined4 *)thunk_FUN_10008500(&DAT_10316a08);
        *puVar7 = *puVar6;
        iVar8 = thunk_FUN_10008500(DAT_10320fe4 + 0xb60);
        iVar9 = thunk_FUN_10008500(&DAT_10316a08);
        *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar8 + 4);
        iVar8 = thunk_FUN_10008500(DAT_10320fe4 + 0xb60);
        iVar9 = thunk_FUN_10008500(&DAT_10316a08);
        *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar8 + 8);
        pfVar2 = thunk_FUN_1000cb20(&DAT_1031ab74,local_58,1.0);
        puVar6 = thunk_FUN_1000ca70(&DAT_10316a08,local_64,pfVar2);
        _DAT_10316a08 = *puVar6;
        _DAT_10316a0c = puVar6[1];
        _DAT_10316a10 = puVar6[2];
        thunk_FUN_1008f470((undefined4 *)&DAT_10316a20,&DAT_10316a08,&DAT_10316998,6.0,'\x01');
        thunk_FUN_1008f360(0x10316a20);
        if ((DAT_102db764 & 0x40) != 0) {
          puVar6 = (undefined4 *)thunk_FUN_10008500(DAT_10320fe4 + 0xb78);
          puVar7 = (undefined4 *)thunk_FUN_10008500(&DAT_10316a08);
          *puVar7 = *puVar6;
          iVar8 = thunk_FUN_10008500(DAT_10320fe4 + 0xb78);
          iVar9 = thunk_FUN_10008500(&DAT_10316a08);
          *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar8 + 4);
          iVar8 = thunk_FUN_10008500(DAT_10320fe4 + 0xb78);
          iVar9 = thunk_FUN_10008500(&DAT_10316a08);
          *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar8 + 8);
          pfVar2 = thunk_FUN_1000cb20(&DAT_1031ab74,local_70,1.0);
          puVar6 = thunk_FUN_1000ca70(&DAT_10316a08,local_7c,pfVar2);
          _DAT_10316a08 = *puVar6;
          _DAT_10316a0c = puVar6[1];
          _DAT_10316a10 = puVar6[2];
          thunk_FUN_1008f470((undefined4 *)&DAT_10316a20,&DAT_10316a08,&DAT_10316998,4.0,'\x01');
          thunk_FUN_1008f360(0x10316a20);
        }
        (**(code **)(DAT_102e15a0 + 0xc))();
        (**(code **)(DAT_102e15a0 + 4))(0);
      }
    }
  }
  return;
}

/* 100715b0  FUN_100715b0  (16 bytes)
 * undefined FUN_100715b0(void)
 */
void FUN_100715b0(void)

{
  return;
}

/* 100715d0  FUN_100715d0  (16 bytes)
 * undefined FUN_100715d0(void)
 */
void FUN_100715d0(void)

{
  return;
}

/* 100715f0  FUN_100715f0  (16 bytes)
 * undefined FUN_100715f0(void)
 */
void FUN_100715f0(void)

{
  return;
}

/* 10071610  FUN_10071610  (16 bytes)
 * undefined FUN_10071610(void)
 */
void FUN_10071610(void)

{
  return;
}

/* 10071630  FUN_10071630  (1024 bytes)
 * undefined FUN_10071630(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10071630(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  void *extraout_ECX;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  float local_78;
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_103169f4 & 1) == 0) {
    DAT_103169f4 = DAT_103169f4 | 1;
    thunk_FUN_10007fe0(&DAT_103169fc);
    FUN_100bc490(0x10071b90);
  }
  if ((DAT_103169f4 & 2) == 0) {
    DAT_103169f4 = DAT_103169f4 | 2;
    thunk_FUN_10007fe0(&DAT_10316a88);
    FUN_100bc490(0x10071b70);
  }
  if ((DAT_103169f4 & 4) == 0) {
    DAT_103169f4 = DAT_103169f4 | 4;
    thunk_FUN_10007fe0(&DAT_10316a78);
    FUN_100bc490(0x10071b50);
  }
  if ((DAT_103169f4 & 8) == 0) {
    DAT_103169f4 = DAT_103169f4 | 8;
    thunk_FUN_1000c160(0x103169b0);
    FUN_100bc490(0x10071b30);
  }
  DAT_10316a14 = (*DAT_102e14e8)();
  piVar2 = (int *)(*DAT_102e1524)();
  DAT_10316a74 = *piVar2;
  for (DAT_103169a8 = 0; DAT_103169a8 <= DAT_10316a14; DAT_103169a8 = DAT_103169a8 + 1) {
    if ((((DAT_103169a8 != DAT_10316a74) && (((&DAT_10316c64)[DAT_103169a8] & 4) != 0)) &&
        (DAT_103169f8 = (int *)(*DAT_102e152c)(DAT_103169a8), DAT_103169f8 != (int *)0x0)) &&
       ((DAT_103169f8[1] != 0 && (cVar1 = thunk_FUN_10097610(DAT_103169a8), cVar1 != '\0')))) {
      _DAT_10316a88 = DAT_103169f8[0x2d2];
      _DAT_10316a8c = DAT_103169f8[0x2d3];
      _DAT_10316a90 = DAT_103169f8[0x2d4];
      iVar3 = thunk_FUN_10008500(&DAT_10316a88);
      *(float *)(iVar3 + 8) = *(float *)(iVar3 + 8) + 24.0;
      _DAT_10316a78 = DAT_103169f8[0x2d5];
      _DAT_10316a7c = DAT_103169f8[0x2d6];
      _DAT_10316a80 = DAT_103169f8[0x2d7];
      pfVar4 = (float *)thunk_FUN_10008500(&DAT_10316a78);
      *pfVar4 = *pfVar4 * -3.0;
      uVar13 = 0;
      uVar12 = 0;
      uVar5 = thunk_FUN_10008500(&DAT_103169fc);
      uVar6 = thunk_FUN_10008500(&DAT_10316a78);
      (*DAT_102e14b8)(uVar6,uVar5,uVar12,uVar13);
      (**(code **)(DAT_102e15a8 + 0x2c))();
      (**(code **)(DAT_102e15a8 + 0x28))(0,1);
      (**(code **)(DAT_102e15a8 + 0x34))(*DAT_103169f8 + -1);
      (**(code **)(DAT_102e15a8 + 0x38))(2);
      puVar14 = &DAT_103169b0;
      iVar3 = *DAT_103169f8;
      uVar12 = 2;
      pfVar4 = thunk_FUN_1000cb20(&DAT_103169fc,local_10,1024.0);
      pvVar7 = thunk_FUN_1000d970(&DAT_10316a88,local_1c,pfVar4);
      uVar5 = thunk_FUN_10008500(pvVar7);
      uVar6 = thunk_FUN_10008500(&DAT_10316a88);
      (**(code **)(DAT_102e15a8 + 0x3c))(uVar6,uVar5,uVar12,iVar3,puVar14);
      (**(code **)(DAT_102e15a8 + 0x30))();
      if (DAT_103169c0 != 0x3f800000) {
        pfVar4 = thunk_FUN_10096e30(local_28);
        pvVar7 = thunk_FUN_1000ca70(&DAT_103169c4,local_34,pfVar4);
        pvVar7 = (void *)thunk_FUN_10008500(pvVar7);
        fVar11 = thunk_FUN_10097fc0(extraout_ECX,pvVar7);
        _DAT_10316a70 = (float)fVar11;
        DAT_10316a1c = 0;
        DAT_10316a1c = (**(code **)(DAT_102e15a4 + 0x100))(*DAT_103169f8 + 3);
        if (DAT_10316a1c != 0) {
          puVar8 = (undefined4 *)thunk_FUN_10008500(&DAT_103169c4);
          puVar9 = (undefined4 *)thunk_FUN_10008500(DAT_10316a1c);
          *puVar9 = *puVar8;
          iVar3 = thunk_FUN_10008500(&DAT_103169c4);
          iVar10 = thunk_FUN_10008500(DAT_10316a1c);
          *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar3 + 4);
          iVar3 = thunk_FUN_10008500(&DAT_103169c4);
          iVar10 = thunk_FUN_10008500(DAT_10316a1c);
          *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar3 + 8);
          if (120.0 <= 1024.0 - _DAT_10316a70) {
            local_78 = 120.0;
          }
          else {
            local_78 = 1024.0 - _DAT_10316a70;
          }
          *(float *)(DAT_10316a1c + 0xc) = local_78;
          *(undefined1 *)(DAT_10316a1c + 0x10) = 0xff;
          *(undefined1 *)(DAT_10316a1c + 0x11) = 0xff;
          *(undefined1 *)(DAT_10316a1c + 0x12) = 0xff;
          fVar11 = (float10)(*DAT_102e1530)();
          *(float *)(DAT_10316a1c + 0x14) = (float)(fVar11 + (float10)0.1);
        }
      }
    }
  }
  return;
}

/* 10071b30  FUN_10071b30  (16 bytes)
 * undefined FUN_10071b30(void)
 */
void FUN_10071b30(void)

{
  return;
}

/* 10071b50  FUN_10071b50  (16 bytes)
 * undefined FUN_10071b50(void)
 */
void FUN_10071b50(void)

{
  return;
}

/* 10071b70  FUN_10071b70  (16 bytes)
 * undefined FUN_10071b70(void)
 */
void FUN_10071b70(void)

{
  return;
}

/* 10071b90  FUN_10071b90  (16 bytes)
 * undefined FUN_10071b90(void)
 */
void FUN_10071b90(void)

{
  return;
}

/* 10071bb0  FUN_10071bb0  (26 bytes)
 * undefined FUN_10071bb0(void)
 */
void FUN_10071bb0(void)

{
  thunk_FUN_10070f20();
  thunk_FUN_10071630();
  return;
}

/* 10071bd0  FUN_10071bd0  (3674 bytes)
 * undefined FUN_10071bd0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10071bd0(void)

{
  float fVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  float10 fVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined1 local_2bc [12];
  undefined1 local_2b0 [12];
  undefined1 local_2a4 [12];
  undefined1 local_298 [12];
  undefined1 local_28c [12];
  undefined1 local_280 [12];
  undefined1 local_274 [12];
  undefined1 local_268 [12];
  undefined1 local_25c [12];
  undefined1 local_250 [12];
  undefined1 local_244 [12];
  undefined1 local_238 [12];
  undefined1 local_22c [12];
  undefined1 local_220 [12];
  undefined1 local_214 [12];
  undefined1 local_208 [12];
  undefined1 local_1fc [12];
  undefined1 local_1f0 [12];
  undefined1 local_1e4 [12];
  undefined1 local_1d8 [12];
  undefined1 local_1cc [12];
  undefined1 local_1c0 [12];
  undefined1 local_1b4 [12];
  undefined1 local_1a8 [12];
  undefined1 local_19c [12];
  undefined1 local_190 [12];
  undefined1 local_184 [12];
  undefined1 local_178 [12];
  undefined1 local_16c [12];
  undefined1 local_160 [12];
  undefined1 local_154 [12];
  undefined1 local_148 [12];
  undefined1 local_13c [12];
  undefined1 local_130 [12];
  undefined1 local_124 [12];
  undefined1 local_118 [12];
  undefined1 local_10c [12];
  undefined1 local_100 [12];
  undefined1 local_f4 [12];
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_10316b88 & 1) == 0) {
    DAT_10316b88 = DAT_10316b88 | 1;
    thunk_FUN_10007fe0(&DAT_10316d6c);
    FUN_100bc490(0x10072ea0);
  }
  if ((DAT_10316b88 & 2) == 0) {
    DAT_10316b88 = DAT_10316b88 | 2;
    thunk_FUN_10007fe0(&DAT_10316d60);
    FUN_100bc490(0x10072e80);
  }
  if ((DAT_10316b88 & 4) == 0) {
    DAT_10316b88 = DAT_10316b88 | 4;
    thunk_FUN_10007fe0(&DAT_10316c04);
    FUN_100bc490(0x10072e60);
  }
  if ((DAT_10316b88 & 8) == 0) {
    DAT_10316b88 = DAT_10316b88 | 8;
    thunk_FUN_10007fe0(&DAT_10316b8c);
    FUN_100bc490(0x10072e40);
  }
  if ((DAT_10316b88 & 0x10) == 0) {
    DAT_10316b88 = DAT_10316b88 | 0x10;
    thunk_FUN_10007fe0(&DAT_10316d44);
    FUN_100bc490(0x10072e20);
  }
  if ((DAT_10316b88 & 0x20) == 0) {
    DAT_10316b88 = DAT_10316b88 | 0x20;
    thunk_FUN_1006a030(&DAT_10316ba8);
    FUN_100bc490(0x10072e00);
  }
  if ((DAT_10316b88 & 0x40) == 0) {
    DAT_10316b88 = DAT_10316b88 | 0x40;
    thunk_FUN_1000c160(0x10316c88);
    FUN_100bc490(0x10072de0);
  }
  if ((DAT_10316b88 & 0x80) == 0) {
    DAT_10316b88 = DAT_10316b88 | 0x80;
    thunk_FUN_1000c160(0x10316c20);
    FUN_100bc490(0x10072dc0);
  }
  if ((DAT_102db764 & 2) == 0) {
    return;
  }
  (**(code **)(DAT_102e15a8 + 0x2c))();
  (**(code **)(DAT_102e15a8 + 0x28))(0,1);
  piVar2 = (int *)(*DAT_102e1524)();
  (**(code **)(DAT_102e15a8 + 0x34))(*piVar2 + -1);
  fVar11 = (float10)(*DAT_102e1564)(0xbf800000,0x3f800000);
  _DAT_10316ba4 = (float)fVar11;
  fVar11 = (float10)(*DAT_102e1564)(0xbf800000,0x3f800000);
  _DAT_10316d50 = (float)fVar11;
  if ((DAT_10320fe4 == 0) || (*(float *)(DAT_102e82ec + 0xc) == 1.0)) {
    _DAT_10316b8c = DAT_1031ab5c;
    _DAT_10316b90 = DAT_1031ab60;
    _DAT_10316b94 = DAT_1031ab64;
  }
  else {
    puVar14 = local_1c;
    pvVar3 = thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb6c),local_10,
                                (float *)(DAT_10320fe4 + 0xb60));
    puVar4 = thunk_FUN_100230c0(pvVar3,puVar14);
    _DAT_10316b8c = *puVar4;
    _DAT_10316b90 = puVar4[1];
    _DAT_10316b94 = puVar4[2];
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_10316b8c);
    *pfVar5 = _DAT_10316ba4 * 0.003 + *pfVar5;
    iVar6 = thunk_FUN_10008500(&DAT_10316b8c);
    *(float *)(iVar6 + 4) = _DAT_10316d50 * 0.003 + *(float *)(iVar6 + 4);
  }
  if ((DAT_102db764 & 0x40) == 0) {
    (**(code **)(DAT_102e15a8 + 0x38))(2);
    (*DAT_102e1524)(&DAT_10316c88);
    pfVar5 = thunk_FUN_1000cb20(&DAT_10316b8c,local_13c,8192.0);
    puVar14 = local_148;
    pvVar3 = thunk_FUN_10096e30(local_130);
    pvVar3 = thunk_FUN_1000d970(pvVar3,puVar14,pfVar5);
    uVar8 = thunk_FUN_10008500(pvVar3);
    pvVar3 = thunk_FUN_10096e30(local_154);
    uVar9 = thunk_FUN_10008500(pvVar3);
    (**(code **)(DAT_102e15a8 + 0x3c))(uVar9,uVar8);
    pfVar5 = thunk_FUN_10096e30(local_160);
    pfVar5 = thunk_FUN_1000ca70(&DAT_10316c9c,local_16c,pfVar5);
    fVar11 = (float10)thunk_FUN_1001e850(pfVar5);
    DAT_10316b9c = (float)fVar11;
    DAT_10316c1c = 0.0;
  }
  else {
    if ((DAT_10320fe4 == 0) || (*(float *)(DAT_102e82ec + 0xc) == 1.0)) {
      _DAT_10316d44 = DAT_1031ab5c;
      _DAT_10316d48 = DAT_1031ab60;
      _DAT_10316d4c = DAT_1031ab64;
    }
    else {
      puVar14 = local_34;
      pvVar3 = thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb84),local_28,
                                  (float *)(DAT_10320fe4 + 0xb78));
      puVar4 = thunk_FUN_100230c0(pvVar3,puVar14);
      _DAT_10316d44 = *puVar4;
      _DAT_10316d48 = puVar4[1];
      _DAT_10316d4c = puVar4[2];
      pfVar5 = (float *)thunk_FUN_10008500(&DAT_10316d44);
      *pfVar5 = _DAT_10316d50 * 0.003 + *pfVar5;
      iVar6 = thunk_FUN_10008500(&DAT_10316d44);
      *(float *)(iVar6 + 4) = _DAT_10316ba4 * 0.003 + *(float *)(iVar6 + 4);
    }
    (**(code **)(DAT_102e15a8 + 0x38))(2);
    (*DAT_102e1524)(&DAT_10316c88);
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_64,4.0);
    puVar14 = local_70;
    pfVar7 = thunk_FUN_1000cb20(&DAT_10316b8c,local_4c,8192.0);
    puVar13 = local_58;
    pvVar3 = thunk_FUN_10096e30(local_40);
    pvVar3 = thunk_FUN_1000d970(pvVar3,puVar13,pfVar7);
    pvVar3 = thunk_FUN_1000d970(pvVar3,puVar14,pfVar5);
    uVar8 = thunk_FUN_10008500(pvVar3);
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_88,4.0);
    puVar14 = local_94;
    pvVar3 = thunk_FUN_10096e30(local_7c);
    pvVar3 = thunk_FUN_1000d970(pvVar3,puVar14,pfVar5);
    uVar9 = thunk_FUN_10008500(pvVar3);
    (**(code **)(DAT_102e15a8 + 0x3c))(uVar9,uVar8);
    (*DAT_102e1524)(&DAT_10316c20);
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_c4,-4.0);
    puVar14 = local_d0;
    pfVar7 = thunk_FUN_1000cb20(&DAT_10316d44,local_ac,8192.0);
    puVar13 = local_b8;
    pvVar3 = thunk_FUN_10096e30(local_a0);
    pvVar3 = thunk_FUN_1000d970(pvVar3,puVar13,pfVar7);
    pvVar3 = thunk_FUN_1000d970(pvVar3,puVar14,pfVar5);
    uVar8 = thunk_FUN_10008500(pvVar3);
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_e8,-4.0);
    puVar14 = local_f4;
    pvVar3 = thunk_FUN_10096e30(local_dc);
    pvVar3 = thunk_FUN_1000d970(pvVar3,puVar14,pfVar5);
    uVar9 = thunk_FUN_10008500(pvVar3);
    (**(code **)(DAT_102e15a8 + 0x3c))(uVar9,uVar8);
    pfVar5 = thunk_FUN_10096e30(local_100);
    pfVar5 = thunk_FUN_1000ca70(&DAT_10316c9c,local_10c,pfVar5);
    fVar11 = (float10)thunk_FUN_1001e850(pfVar5);
    DAT_10316b9c = (float)fVar11;
    pfVar5 = thunk_FUN_10096e30(local_118);
    pfVar5 = thunk_FUN_1000ca70(&DAT_10316c34,local_124,pfVar5);
    fVar11 = (float10)thunk_FUN_1001e850(pfVar5);
    DAT_10316c1c = (float)fVar11;
  }
  (**(code **)(DAT_102e15a8 + 0x30))();
  pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab5c,local_178,2.0);
  puVar4 = thunk_FUN_1000ca70(&DAT_10316c9c,local_184,pfVar5);
  _DAT_10316d6c = *puVar4;
  _DAT_10316d70 = puVar4[1];
  _DAT_10316d74 = puVar4[2];
  puVar15 = (undefined4 *)&DAT_10316c18;
  puVar4 = (undefined4 *)&DAT_10316b2c;
  uVar8 = thunk_FUN_10008500(&DAT_10316d6c);
  thunk_FUN_10097650(uVar8,puVar4,puVar15);
  fVar1 = (float)_DAT_10316b2c;
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_102db76c);
  *pfVar5 = fVar1;
  fVar1 = (float)_DAT_10316c18;
  iVar6 = thunk_FUN_10008500(&DAT_102db76c);
  *(float *)(iVar6 + 4) = fVar1;
  iVar6 = thunk_FUN_10008500(&DAT_102db76c);
  *(float *)(iVar6 + 8) = DAT_10316b9c;
  if ((DAT_102db764 & 0x40) != 0) {
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab5c,local_190,2.0);
    puVar4 = thunk_FUN_1000ca70(&DAT_10316c34,local_19c,pfVar5);
    _DAT_10316d6c = *puVar4;
    _DAT_10316d70 = puVar4[1];
    _DAT_10316d74 = puVar4[2];
    puVar15 = (undefined4 *)&DAT_10316c18;
    puVar4 = (undefined4 *)&DAT_10316b2c;
    uVar8 = thunk_FUN_10008500(&DAT_10316d6c);
    thunk_FUN_10097650(uVar8,puVar4,puVar15);
    fVar1 = (float)_DAT_10316b2c;
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_102db778);
    *pfVar5 = fVar1;
    fVar1 = (float)_DAT_10316c18;
    iVar6 = thunk_FUN_10008500(&DAT_102db778);
    *(float *)(iVar6 + 4) = fVar1;
    iVar6 = thunk_FUN_10008500(&DAT_102db778);
    *(float *)(iVar6 + 8) = DAT_10316c1c;
  }
  if (DAT_10320fe4 != 0) {
    DAT_10316d7c = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/laserbeam.spr",5);
    if (DAT_10316d7c == -1) {
      return;
    }
    uVar8 = (*DAT_102e1550)(*(undefined4 *)(&DAT_1031abdc + DAT_10316d7c * 0x28),0);
    iVar6 = (**(code **)(DAT_102e15a0 + 0x2c))(uVar8);
    if (iVar6 == 0) {
      return;
    }
    puVar4 = (undefined4 *)thunk_FUN_10008500(DAT_10320fe4 + 0xb60);
    puVar15 = (undefined4 *)thunk_FUN_10008500(&DAT_10316c04);
    *puVar15 = *puVar4;
    iVar6 = thunk_FUN_10008500(DAT_10320fe4 + 0xb60);
    iVar10 = thunk_FUN_10008500(&DAT_10316c04);
    *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar6 + 4);
    iVar6 = thunk_FUN_10008500(DAT_10320fe4 + 0xb60);
    iVar10 = thunk_FUN_10008500(&DAT_10316c04);
    *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar6 + 8);
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab74,local_1a8,1.0);
    puVar4 = thunk_FUN_1000ca70(&DAT_10316c04,local_1b4,pfVar5);
    _DAT_10316c04 = *puVar4;
    _DAT_10316c08 = puVar4[1];
    _DAT_10316c0c = puVar4[2];
    (**(code **)(DAT_102e15a0 + 4))(5);
    (**(code **)(DAT_102e15a0 + 0x28))(1);
    (**(code **)(DAT_102e15a0 + 8))(2);
    (**(code **)(DAT_102e15a0 + 0x10))
              ((_DAT_10316ba4 + 1.0) / 8.0 + 0.75,(_DAT_10316ba4 + 1.0) / 8.0 + 0.75,
               (_DAT_10316ba4 + 1.0) / 8.0 + 0.75,0x3f800000);
    pfVar5 = thunk_FUN_1000cb20(&DAT_10316b8c,local_1c0,2.0);
    puVar4 = thunk_FUN_1000ca70(&DAT_10316c9c,local_1cc,pfVar5);
    _DAT_10316d6c = *puVar4;
    _DAT_10316d70 = puVar4[1];
    _DAT_10316d74 = puVar4[2];
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab74,local_1d8,1.5);
    puVar4 = thunk_FUN_1000ca70(&DAT_10316d6c,local_1e4,pfVar5);
    _DAT_10316d60 = *puVar4;
    _DAT_10316d64 = puVar4[1];
    _DAT_10316d68 = puVar4[2];
    (**(code **)(DAT_102e15a0 + 0x18))(0,0);
    uVar8 = thunk_FUN_10008500(&DAT_10316d60);
    (**(code **)(DAT_102e15a0 + 0x1c))(uVar8);
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab74,local_1f0,1.5);
    puVar4 = thunk_FUN_1000d970(&DAT_10316d6c,local_1fc,pfVar5);
    _DAT_10316d60 = *puVar4;
    _DAT_10316d64 = puVar4[1];
    _DAT_10316d68 = puVar4[2];
    (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0);
    uVar8 = thunk_FUN_10008500(&DAT_10316d60);
    (**(code **)(DAT_102e15a0 + 0x1c))(uVar8);
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab74,local_208,1.5);
    puVar4 = thunk_FUN_1000d970(&DAT_10316c04,local_214,pfVar5);
    _DAT_10316d60 = *puVar4;
    _DAT_10316d64 = puVar4[1];
    _DAT_10316d68 = puVar4[2];
    (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0x3f800000);
    uVar8 = thunk_FUN_10008500(&DAT_10316d60);
    (**(code **)(DAT_102e15a0 + 0x1c))(uVar8);
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab74,local_220,1.5);
    puVar4 = thunk_FUN_1000ca70(&DAT_10316c04,local_22c,pfVar5);
    _DAT_10316d60 = *puVar4;
    _DAT_10316d64 = puVar4[1];
    _DAT_10316d68 = puVar4[2];
    (**(code **)(DAT_102e15a0 + 0x18))(0,0x3f800000);
    uVar8 = thunk_FUN_10008500(&DAT_10316d60);
    (**(code **)(DAT_102e15a0 + 0x1c))(uVar8);
    if ((DAT_102db764 & 0x40) != 0) {
      puVar4 = (undefined4 *)thunk_FUN_10008500(DAT_10320fe4 + 0xb78);
      puVar15 = (undefined4 *)thunk_FUN_10008500(&DAT_10316c04);
      *puVar15 = *puVar4;
      iVar6 = thunk_FUN_10008500(DAT_10320fe4 + 0xb78);
      iVar10 = thunk_FUN_10008500(&DAT_10316c04);
      *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar6 + 4);
      iVar6 = thunk_FUN_10008500(DAT_10320fe4 + 0xb78);
      iVar10 = thunk_FUN_10008500(&DAT_10316c04);
      *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar6 + 8);
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab74,local_238,1.0);
      puVar4 = thunk_FUN_1000ca70(&DAT_10316c04,local_244,pfVar5);
      _DAT_10316c04 = *puVar4;
      _DAT_10316c08 = puVar4[1];
      _DAT_10316c0c = puVar4[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_10316d44,local_250,2.0);
      puVar4 = thunk_FUN_1000ca70(&DAT_10316c34,local_25c,pfVar5);
      _DAT_10316d6c = *puVar4;
      _DAT_10316d70 = puVar4[1];
      _DAT_10316d74 = puVar4[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab74,local_268,1.5);
      puVar4 = thunk_FUN_1000ca70(&DAT_10316d6c,local_274,pfVar5);
      _DAT_10316d60 = *puVar4;
      _DAT_10316d64 = puVar4[1];
      _DAT_10316d68 = puVar4[2];
      (**(code **)(DAT_102e15a0 + 0x18))(0,0);
      uVar8 = thunk_FUN_10008500(&DAT_10316d60);
      (**(code **)(DAT_102e15a0 + 0x1c))(uVar8);
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab74,local_280,1.5);
      puVar4 = thunk_FUN_1000d970(&DAT_10316d6c,local_28c,pfVar5);
      _DAT_10316d60 = *puVar4;
      _DAT_10316d64 = puVar4[1];
      _DAT_10316d68 = puVar4[2];
      (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0);
      uVar8 = thunk_FUN_10008500(&DAT_10316d60);
      (**(code **)(DAT_102e15a0 + 0x1c))(uVar8);
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab74,local_298,1.5);
      puVar4 = thunk_FUN_1000d970(&DAT_10316c04,local_2a4,pfVar5);
      _DAT_10316d60 = *puVar4;
      _DAT_10316d64 = puVar4[1];
      _DAT_10316d68 = puVar4[2];
      (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0x3f800000);
      uVar8 = thunk_FUN_10008500(&DAT_10316d60);
      (**(code **)(DAT_102e15a0 + 0x1c))(uVar8);
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab74,local_2b0,1.5);
      puVar4 = thunk_FUN_1000ca70(&DAT_10316c04,local_2bc,pfVar5);
      _DAT_10316d60 = *puVar4;
      _DAT_10316d64 = puVar4[1];
      _DAT_10316d68 = puVar4[2];
      (**(code **)(DAT_102e15a0 + 0x18))(0,0x3f800000);
      uVar8 = thunk_FUN_10008500(&DAT_10316d60);
      (**(code **)(DAT_102e15a0 + 0x1c))(uVar8);
    }
    (**(code **)(DAT_102e15a0 + 0xc))();
    (**(code **)(DAT_102e15a0 + 4))(0);
  }
  lVar12 = __ftol();
  _DAT_102db768 = (int)lVar12;
  return;
}

/* 10072dc0  FUN_10072dc0  (16 bytes)
 * undefined FUN_10072dc0(void)
 */
void FUN_10072dc0(void)

{
  return;
}

/* 10072de0  FUN_10072de0  (16 bytes)
 * undefined FUN_10072de0(void)
 */
void FUN_10072de0(void)

{
  return;
}

/* 10072e00  FUN_10072e00  (16 bytes)
 * undefined FUN_10072e00(void)
 */
void FUN_10072e00(void)

{
  return;
}

/* 10072e20  FUN_10072e20  (16 bytes)
 * undefined FUN_10072e20(void)
 */
void FUN_10072e20(void)

{
  return;
}

/* 10072e40  FUN_10072e40  (16 bytes)
 * undefined FUN_10072e40(void)
 */
void FUN_10072e40(void)

{
  return;
}

/* 10072e60  FUN_10072e60  (16 bytes)
 * undefined FUN_10072e60(void)
 */
void FUN_10072e60(void)

{
  return;
}

/* 10072e80  FUN_10072e80  (16 bytes)
 * undefined FUN_10072e80(void)
 */
void FUN_10072e80(void)

{
  return;
}

/* 10072ea0  FUN_10072ea0  (16 bytes)
 * undefined FUN_10072ea0(void)
 */
void FUN_10072ea0(void)

{
  return;
}

/* 10072ec0  FUN_10072ec0  (553 bytes)
 * undefined FUN_10072ec0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10072ec0(void)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *in_stack_00000010;
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_10316cd8 & 1) == 0) {
    DAT_10316cd8 = DAT_10316cd8 | 1;
    thunk_FUN_10007fe0(&DAT_10316ccc);
    FUN_100bc490(0x10073180);
  }
  (**(code **)(DAT_102e15a0 + 4))(5);
  (**(code **)(DAT_102e15a0 + 0x28))(1);
  (**(code **)(DAT_102e15a0 + 8))(2);
  (**(code **)(DAT_102e15a0 + 0x10))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  pfVar1 = thunk_FUN_1000cb20(&DAT_1031ab74,local_10,1.0);
  puVar2 = thunk_FUN_1000ca70(in_stack_00000010,local_1c,pfVar1);
  _DAT_10316ccc = *puVar2;
  _DAT_10316cd0 = puVar2[1];
  _DAT_10316cd4 = puVar2[2];
  (**(code **)(DAT_102e15a0 + 0x18))(0,0);
  uVar3 = thunk_FUN_10008500(&DAT_10316ccc);
  (**(code **)(DAT_102e15a0 + 0x1c))(uVar3);
  pfVar1 = thunk_FUN_1000cb20(&DAT_1031ab74,local_28,1.0);
  puVar2 = thunk_FUN_1000d970(in_stack_00000010,local_34,pfVar1);
  _DAT_10316ccc = *puVar2;
  _DAT_10316cd0 = puVar2[1];
  _DAT_10316cd4 = puVar2[2];
  (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0);
  uVar3 = thunk_FUN_10008500(&DAT_10316ccc);
  (**(code **)(DAT_102e15a0 + 0x1c))(uVar3);
  pfVar1 = thunk_FUN_1000cb20(&DAT_1031ab74,local_40,1.0);
  puVar2 = thunk_FUN_1000d970(&stack0x00000004,local_4c,pfVar1);
  _DAT_10316ccc = *puVar2;
  _DAT_10316cd0 = puVar2[1];
  _DAT_10316cd4 = puVar2[2];
  (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0x3f800000);
  uVar3 = thunk_FUN_10008500(&DAT_10316ccc);
  (**(code **)(DAT_102e15a0 + 0x1c))(uVar3);
  pfVar1 = thunk_FUN_1000cb20(&DAT_1031ab74,local_58,1.0);
  puVar2 = thunk_FUN_1000ca70(&stack0x00000004,local_64,pfVar1);
  _DAT_10316ccc = *puVar2;
  _DAT_10316cd0 = puVar2[1];
  _DAT_10316cd4 = puVar2[2];
  (**(code **)(DAT_102e15a0 + 0x18))(0,0x3f800000);
  uVar3 = thunk_FUN_10008500(&DAT_10316ccc);
  (**(code **)(DAT_102e15a0 + 0x1c))(uVar3);
  (**(code **)(DAT_102e15a0 + 0xc))();
  (**(code **)(DAT_102e15a0 + 4))(0);
  return;
}

/* 10073180  FUN_10073180  (16 bytes)
 * undefined FUN_10073180(void)
 */
void FUN_10073180(void)

{
  return;
}

/* 100731a0  FUN_100731a0  (1252 bytes)
 * undefined FUN_100731a0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100731a0(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_10316d3c & 1) == 0) {
    DAT_10316d3c = DAT_10316d3c | 1;
    thunk_FUN_10007fe0(&DAT_10316b74);
    FUN_100bc490(0x10073860);
  }
  if ((DAT_10316d3c & 2) == 0) {
    DAT_10316d3c = DAT_10316d3c | 2;
    thunk_FUN_10007fe0(&DAT_10316bf8);
    FUN_100bc490(0x10073840);
  }
  if ((DAT_10316d3c & 4) == 0) {
    DAT_10316d3c = DAT_10316d3c | 4;
    thunk_FUN_10007fe0(&DAT_10316d30);
    FUN_100bc490(0x10073820);
  }
  if ((DAT_10316d3c & 8) == 0) {
    DAT_10316d3c = DAT_10316d3c | 8;
    thunk_FUN_10007fe0(&DAT_10316d54);
    FUN_100bc490(0x10073800);
  }
  if ((DAT_10316d3c & 0x10) == 0) {
    DAT_10316d3c = DAT_10316d3c | 0x10;
    thunk_FUN_1006a030(&DAT_10316ce0);
    FUN_100bc490(0x100737e0);
  }
  if ((DAT_10316d3c & 0x20) == 0) {
    DAT_10316d3c = DAT_10316d3c | 0x20;
    thunk_FUN_1000c160(0x10316b30);
    FUN_100bc490(0x100737c0);
  }
  DAT_10316b28 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/laserdot.spr",5);
  if ((DAT_10316b28 != -1) &&
     (DAT_10316b84 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/laserbeam.spr",5),
     DAT_10316b84 != -1)) {
    fVar9 = (float10)(*DAT_102e1564)(0xbf800000,0x3f800000);
    _DAT_10316b80 = (float)fVar9;
    fVar9 = (float10)(*DAT_102e1564)(0xbf800000,0x3f800000);
    _DAT_10316b98 = (float)fVar9;
    DAT_10316ba0 = (*DAT_102e14e8)();
    piVar2 = (int *)(*DAT_102e1524)();
    DAT_10316c14 = *piVar2;
    for (DAT_10316c10 = 0; DAT_10316c10 <= DAT_10316ba0; DAT_10316c10 = DAT_10316c10 + 1) {
      if ((((DAT_10316c10 != DAT_10316c14) && (((&DAT_10316c64)[DAT_10316c10] & 2) != 0)) &&
          (DAT_10316d40 = (int *)(*DAT_102e152c)(DAT_10316c10), DAT_10316d40 != (int *)0x0)) &&
         ((DAT_10316d40[1] != 0 && (cVar1 = thunk_FUN_10097610(DAT_10316c10), cVar1 != '\0')))) {
        uVar3 = (*DAT_102e1550)(*(undefined4 *)(&DAT_1031abdc + DAT_10316b28 * 0x28),0);
        iVar4 = (**(code **)(DAT_102e15a0 + 0x2c))(uVar3);
        if (iVar4 != 0) {
          _DAT_10316d30 = DAT_10316d40[0x2d2];
          _DAT_10316d34 = DAT_10316d40[0x2d3];
          _DAT_10316d38 = DAT_10316d40[0x2d4];
          iVar4 = thunk_FUN_10008500(&DAT_10316d30);
          *(float *)(iVar4 + 8) = *(float *)(iVar4 + 8) + 24.0;
          _DAT_10316d54 = DAT_10316d40[0x2d5];
          _DAT_10316d58 = DAT_10316d40[0x2d6];
          _DAT_10316d5c = DAT_10316d40[0x2d7];
          pfVar5 = (float *)thunk_FUN_10008500(&DAT_10316d54);
          *pfVar5 = *pfVar5 * -3.0;
          pfVar5 = (float *)thunk_FUN_10008500(&DAT_10316d54);
          *pfVar5 = _DAT_10316b80 * 0.05 + *pfVar5;
          iVar4 = thunk_FUN_10008500(&DAT_10316d54);
          *(float *)(iVar4 + 4) = _DAT_10316b98 * 0.05 + *(float *)(iVar4 + 4);
          uVar11 = 0;
          uVar10 = 0;
          uVar3 = thunk_FUN_10008500(&DAT_10316b74);
          uVar6 = thunk_FUN_10008500(&DAT_10316d54);
          (*DAT_102e14b8)(uVar6,uVar3,uVar10,uVar11);
          (**(code **)(DAT_102e15a8 + 0x2c))();
          (**(code **)(DAT_102e15a8 + 0x28))(0,1);
          (**(code **)(DAT_102e15a8 + 0x34))(*DAT_10316d40 + -1);
          (**(code **)(DAT_102e15a8 + 0x38))(2);
          puVar12 = &DAT_10316b30;
          iVar4 = *DAT_10316d40;
          uVar10 = 2;
          pfVar5 = thunk_FUN_1000cb20(&DAT_10316b74,local_10,8192.0);
          pvVar7 = thunk_FUN_1000d970(&DAT_10316d30,local_1c,pfVar5);
          uVar3 = thunk_FUN_10008500(pvVar7);
          uVar6 = thunk_FUN_10008500(&DAT_10316d30);
          (**(code **)(DAT_102e15a8 + 0x3c))(uVar6,uVar3,uVar10,iVar4,puVar12);
          (**(code **)(DAT_102e15a8 + 0x30))();
          pfVar5 = thunk_FUN_1000cb20(&DAT_10316b74,local_28,2.0);
          puVar8 = thunk_FUN_1000ca70(&DAT_10316b44,local_34,pfVar5);
          _DAT_10316bf8 = *puVar8;
          _DAT_10316bfc = puVar8[1];
          _DAT_10316c00 = puVar8[2];
          (**(code **)(DAT_102e15a0 + 4))(5);
          (**(code **)(DAT_102e15a0 + 0x28))(1);
          (**(code **)(DAT_102e15a0 + 8))(2);
          (**(code **)(DAT_102e15a0 + 0x10))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
          thunk_FUN_1008f470((undefined4 *)&DAT_10316ce0,&DAT_10316bf8,&DAT_10316d30,4.0,'\x01');
          thunk_FUN_1008f360(0x10316ce0);
          (**(code **)(DAT_102e15a0 + 0xc))();
          (**(code **)(DAT_102e15a0 + 4))(0);
        }
      }
    }
  }
  return;
}

/* 100737c0  FUN_100737c0  (16 bytes)
 * undefined FUN_100737c0(void)
 */
void FUN_100737c0(void)

{
  return;
}

/* 100737e0  FUN_100737e0  (16 bytes)
 * undefined FUN_100737e0(void)
 */
void FUN_100737e0(void)

{
  return;
}

/* 10073800  FUN_10073800  (16 bytes)
 * undefined FUN_10073800(void)
 */
void FUN_10073800(void)

{
  return;
}

/* 10073820  FUN_10073820  (16 bytes)
 * undefined FUN_10073820(void)
 */
void FUN_10073820(void)

{
  return;
}

/* 10073840  FUN_10073840  (16 bytes)
 * undefined FUN_10073840(void)
 */
void FUN_10073840(void)

{
  return;
}

/* 10073860  FUN_10073860  (16 bytes)
 * undefined FUN_10073860(void)
 */
void FUN_10073860(void)

{
  return;
}

/* 10073880  FUN_10073880  (26 bytes)
 * undefined FUN_10073880(void)
 */
void FUN_10073880(void)

{
  thunk_FUN_10071bd0();
  thunk_FUN_100731a0();
  return;
}

/* 100738a0  FUN_100738a0  (115 bytes)
 * longlong FUN_100738a0(void)
 */
longlong FUN_100738a0(void)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  return lVar1;
}

/* 10073930  FUN_10073930  (56 bytes)
 * undefined FUN_10073930(int param_1)
 * called by: thunk_FUN_10073930
 */
void __cdecl FUN_10073930(int param_1)

{
  DAT_10317000 = thunk_FUN_1001d7b0(*(int *)(param_1 + 0x38));
  thunk_FUN_10075080(param_1,(int)DAT_10317000,'\x01');
  return;
}

/* 10073980  FUN_10073980  (150 bytes)
 * undefined FUN_10073980(int param_1)
 * called by: thunk_FUN_10073980
 */
void __cdecl FUN_10073980(int param_1)

{
  DAT_1031724c = thunk_FUN_1001d7b0(*(int *)(param_1 + 0x38));
  if ((DAT_1031724c[0x360] == '\x04') || (DAT_1031724c[0x360] == '\x05')) {
    thunk_FUN_10075080(param_1,(int)DAT_1031724c,'\0');
  }
  else if (DAT_1031724c[0x360] == '\x01') {
    thunk_FUN_10076ce0(param_1,(int)DAT_1031724c);
  }
  else {
    thunk_FUN_10073b70(param_1,(int)DAT_1031724c);
  }
  return;
}

/* 10073a40  FUN_10073a40  (236 bytes)
 * undefined FUN_10073a40(undefined4 param_1)
 */
void __cdecl FUN_10073a40(undefined4 param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float10 fVar4;
  int in_stack_00000014;
  char in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  float fVar5;
  undefined4 uVar6;
  
  if (in_stack_00000018 == '\0') {
    iVar1 = (*DAT_102e1568)(0xfffffffb,5);
    iVar1 = in_stack_00000020 + iVar1;
    uVar6 = 0;
    puVar3 = (undefined4 *)thunk_FUN_1001d7f0((uint)*(byte *)(in_stack_00000014 + 8));
    fVar4 = (float10)(*DAT_102e1564)(0x3f6b851f,0x3f800000,*puVar3,uVar6,iVar1);
    fVar5 = (float)fVar4;
    iVar1 = in_stack_00000014 + 0x2de;
    uVar6 = thunk_FUN_10008500(&stack0x00000008);
    (**(code **)(DAT_102e15a8 + 4))(param_1,uVar6,in_stack_0000001c,iVar1,fVar5);
  }
  else {
    iVar1 = (*DAT_102e1568)(0xfffffffb,5);
    iVar1 = in_stack_00000020 + iVar1;
    uVar6 = 0;
    pfVar2 = (float *)thunk_FUN_1001d7f0((uint)*(byte *)(in_stack_00000014 + 8));
    fVar4 = (float10)(*DAT_102e1564)(0x3f570a3d,0x3f6b851f,*pfVar2 + *pfVar2,uVar6,iVar1);
    fVar5 = (float)fVar4;
    iVar1 = in_stack_00000014 + 0x31e;
    uVar6 = thunk_FUN_10008500(&stack0x00000008);
    (**(code **)(DAT_102e15a8 + 4))(param_1,uVar6,in_stack_0000001c,iVar1,fVar5);
  }
  return;
}

/* 10073b70  FUN_10073b70  (4046 bytes)
 * undefined FUN_10073b70(int param_1, int param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10073b70(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined3 extraout_var;
  float *pfVar5;
  float *pfVar6;
  void *pvVar7;
  undefined3 extraout_var_00;
  float *pfVar8;
  undefined4 uVar9;
  undefined3 extraout_var_01;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  int in_stack_fffffd8c;
  undefined1 *in_stack_fffffd90;
  byte_conflict bVar17;
  undefined1 *in_stack_fffffd94;
  short sVar18;
  float fVar19;
  undefined1 *puVar20;
  float fVar21;
  float fVar22;
  byte_conflict bVar23;
  undefined4 uVar24;
  byte_conflict local_234;
  undefined1 local_1ec [12];
  undefined1 local_1e0 [12];
  undefined1 local_1d4 [12];
  undefined1 local_1c8 [12];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined1 local_198 [12];
  undefined1 local_18c [20];
  undefined1 local_178 [12];
  undefined1 local_16c [72];
  undefined1 local_124 [12];
  undefined1 local_118 [12];
  undefined1 local_10c [12];
  undefined1 local_100 [12];
  undefined1 local_f4 [12];
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [20];
  undefined1 local_74 [72];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [16];
  
  if ((DAT_103172ed & 1) == 0) {
    DAT_103172ed = DAT_103172ed | 1;
    thunk_FUN_10007fe0(&DAT_103173f8);
    FUN_100bc490(0x10075060);
  }
  if ((DAT_103172ed & 2) == 0) {
    DAT_103172ed = DAT_103172ed | 2;
    thunk_FUN_10007fe0(&DAT_1031715c);
    FUN_100bc490(0x10075040);
  }
  if ((DAT_103172ed & 4) == 0) {
    DAT_103172ed = DAT_103172ed | 4;
    thunk_FUN_10007fe0(&DAT_10316ef0);
    FUN_100bc490(0x10075020);
  }
  if ((DAT_103172ed & 8) == 0) {
    DAT_103172ed = DAT_103172ed | 8;
    thunk_FUN_10007fe0(&DAT_10317020);
    FUN_100bc490(0x10075000);
  }
  if ((DAT_103172ed & 0x10) == 0) {
    DAT_103172ed = DAT_103172ed | 0x10;
    thunk_FUN_10007fe0(&DAT_10317108);
    FUN_100bc490(0x10074fe0);
  }
  if ((DAT_103172ed & 0x20) == 0) {
    DAT_103172ed = DAT_103172ed | 0x20;
    thunk_FUN_10007fe0(&DAT_10317168);
    FUN_100bc490(0x10074fc0);
  }
  if ((DAT_103172ed & 0x40) == 0) {
    DAT_103172ed = DAT_103172ed | 0x40;
    thunk_FUN_10007fe0(&DAT_10317144);
    FUN_100bc490(0x10074fa0);
  }
  if ((DAT_103172ed & 0x80) == 0) {
    DAT_103172ed = DAT_103172ed | 0x80;
    thunk_FUN_10007fe0(&DAT_10316f54);
    FUN_100bc490(0x10074f80);
  }
  if ((DAT_10316f34 & 1) == 0) {
    DAT_10316f34 = DAT_10316f34 | 1;
    thunk_FUN_10007fe0(&DAT_10317038);
    FUN_100bc490(0x10074f60);
  }
  if ((DAT_10316f34 & 2) == 0) {
    DAT_10316f34 = DAT_10316f34 | 2;
    thunk_FUN_10007fe0(&DAT_10317370);
    FUN_100bc490(0x10074f40);
  }
  DAT_103170c0 = *(int *)(param_1 + 4);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_103173f8);
  *puVar3 = *(undefined4 *)(param_1 + 8);
  iVar4 = thunk_FUN_10008500(&DAT_103173f8);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar4 = thunk_FUN_10008500(&DAT_103173f8);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031715c);
  *puVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = thunk_FUN_10008500(&DAT_1031715c);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = thunk_FUN_10008500(&DAT_1031715c);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10316ef0);
  *puVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = thunk_FUN_10008500(&DAT_10316ef0);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar4 = thunk_FUN_10008500(&DAT_10316ef0);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x28);
  DAT_10316fec = *(int *)(param_1 + 0x40);
  thunk_FUN_10008500(&DAT_10316f54);
  thunk_FUN_10008500(&DAT_10317038);
  thunk_FUN_10008500(&DAT_10317370);
  thunk_FUN_10008500(&DAT_1031715c);
  (*DAT_102e14b8)();
  DAT_10317348 = *(int *)(param_1 + 0x38);
  DAT_103170e0 = *(uint *)(param_1 + 0x3c);
  if (*(char *)(param_2 + 0xe0) == '\0') {
    DAT_103172dc = 0;
  }
  else {
    DAT_103172dc = (**(code **)(DAT_102e15a8 + 0xc))();
  }
  _DAT_10316f40 = (*DAT_102e1568)();
  DAT_10316e08 = (*DAT_102e1568)();
  if (((DAT_103170e0 & 1) == 0) &&
     ((cVar1 = thunk_FUN_10097610(DAT_103170c0), cVar1 != '\0' ||
      (bVar2 = thunk_FUN_10042e10(DAT_103170c0), CONCAT31(extraout_var,bVar2) != 0)))) {
    pfVar5 = thunk_FUN_1000cb20(&DAT_10316f54,local_2c,32.0);
    puVar15 = &stack0xfffffda0;
    pfVar6 = thunk_FUN_1000cb20(&DAT_10317370,local_14,16.0);
    in_stack_fffffd90 = local_20;
    in_stack_fffffd8c = 0x10073f67;
    pvVar7 = thunk_FUN_1000d970(&DAT_103173f8,in_stack_fffffd90,pfVar6);
    in_stack_fffffd94 = (undefined1 *)0x10073f6e;
    thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
    thunk_FUN_10083260();
  }
  bVar2 = thunk_FUN_10042e10(DAT_103170c0);
  if (CONCAT31(extraout_var_00,bVar2) != 0) {
    if (DAT_10317301 == '\0') {
      DAT_10317234 = param_2 + 0x26a;
    }
    else {
      DAT_10317234 = param_2 + 0x2a4;
    }
    DAT_10316f18 = thunk_FUN_1001d690(DAT_10317348,DAT_103170e0);
    if (DAT_10316fec == 0) {
      (*DAT_102e1568)();
    }
    (**(code **)(DAT_102e15a8 + 0x40))();
    iVar4 = thunk_FUN_100b5a50();
    if (iVar4 == 0) {
      if (DAT_10320fe4 == 0) {
        if (DAT_103172dc != 0) {
          uVar24 = 1;
          iVar4 = DAT_103172dc;
          uVar14 = thunk_FUN_10008500(&DAT_10316ef0);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317370,local_118,(float)(DAT_10316e08 + 0x32));
          puVar15 = local_124;
          pfVar6 = thunk_FUN_1000cb20(&DAT_10316f54,local_100,(float)DAT_10316e08);
          puVar20 = local_10c;
          pfVar8 = thunk_FUN_1000cb20(&DAT_10317038,local_e8,(float)_DAT_10316f40);
          in_stack_fffffd94 = (undefined1 *)0x1007447a;
          pvVar7 = thunk_FUN_1000d970(&DAT_10316ef0,local_f4,pfVar8);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
          uVar16 = thunk_FUN_10008500(pvVar7);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031715c);
          uVar9 = thunk_FUN_10008500(&DAT_10320680);
          thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
        }
      }
      else {
        if ((DAT_103170e0 & 1) == 0) {
          thunk_FUN_10015ce0(&stack0xfffffda4,(undefined4 *)&DAT_10317370);
          cVar1 = *(char *)(param_2 + 0x368);
          fVar19 = (float)*(int *)(param_2 + 0x370);
          sVar18 = *(short *)(param_2 + 0x36c);
          puVar15 = &stack0xfffffd8c;
          uVar16 = 0x41200000;
          uVar14 = 0x100740ad;
          thunk_FUN_10069fd0(&DAT_10316ef0,&stack0xfffffd8c,10.0);
          thunk_FUN_10095db0(&stack0xfffffd80,DAT_103170c0,'\0');
          thunk_FUN_10080a30(uVar14,puVar15,uVar16,in_stack_fffffd8c,in_stack_fffffd90,
                             in_stack_fffffd94,sVar18,fVar19,cVar1);
          if ((DAT_10317348 == 0x21) || (DAT_10317348 == 0xb)) {
            thunk_FUN_10015ce0(&stack0xfffffda8,(undefined4 *)&DAT_10317370);
            in_stack_fffffd94 = &stack0xfffffd9c;
            in_stack_fffffd90 = (undefined1 *)0x10074108;
            thunk_FUN_10069fd0(&DAT_10316ef0,&stack0xfffffd9c,10.0);
            thunk_FUN_10015ce0(&stack0xfffffd90,(undefined4 *)(DAT_10320fe4 + 0xb60));
            in_stack_fffffd8c = (*DAT_102e1568)();
            thunk_FUN_1007f970(0x10,in_stack_fffffd8c);
          }
          else {
            thunk_FUN_10015ce0(&stack0xfffffda8,(undefined4 *)&DAT_10317370);
            in_stack_fffffd94 = &stack0xfffffd9c;
            in_stack_fffffd90 = (undefined1 *)0x10074166;
            thunk_FUN_10069fd0(&DAT_10316ef0,&stack0xfffffd9c,10.0);
            thunk_FUN_10015ce0(&stack0xfffffd90,(undefined4 *)(DAT_10320fe4 + 0xb60));
            in_stack_fffffd8c = (*DAT_102e1568)();
            thunk_FUN_1007f970(0x10,in_stack_fffffd8c);
          }
        }
        else {
          thunk_FUN_10015ce0(&stack0xfffffda8,(undefined4 *)&DAT_10317370);
          thunk_FUN_10069fd0(&DAT_10316ef0,&stack0xfffffd9c,10.0);
          thunk_FUN_10015ce0(&stack0xfffffd90,(undefined4 *)(DAT_10320fe4 + 0xb60));
          iVar4 = (*DAT_102e1568)();
          thunk_FUN_1007f970(8,iVar4);
          thunk_FUN_10015ce0(&stack0xfffffda8,(undefined4 *)&DAT_10317038);
          thunk_FUN_10069fd0(&DAT_10316ef0,&stack0xfffffd9c,10.0);
          in_stack_fffffd94 = local_74;
          in_stack_fffffd90 = (undefined1 *)0x1007423e;
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317370,in_stack_fffffd94,
                                      (float)*(int *)(param_2 + 0x364));
          thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb60),&stack0xfffffd90,pfVar5);
          in_stack_fffffd8c = (*DAT_102e1568)();
          thunk_FUN_1007f970(1,in_stack_fffffd8c);
        }
        if (1 < *(int *)(param_2 + 0x24)) {
          thunk_FUN_1000cb20(&DAT_10317370,&stack0xfffffd8c,3.0);
          thunk_FUN_10095db0(&stack0xfffffd80,DAT_103170c0,'\0');
          thunk_FUN_1007ef20();
        }
        if (DAT_103172dc != 0) {
          uVar24 = 1;
          iVar4 = DAT_103172dc;
          uVar14 = thunk_FUN_10008500(&DAT_10316ef0);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317370,local_b8,(float)(DAT_10316e08 + 0x32));
          puVar15 = local_c4;
          pfVar6 = thunk_FUN_1000cb20(&DAT_10316f54,local_a0,(float)DAT_10316e08);
          puVar20 = local_ac;
          pfVar8 = thunk_FUN_1000cb20(&DAT_10317038,local_88,(float)_DAT_10316f40);
          in_stack_fffffd94 = (undefined1 *)0x1007436b;
          pvVar7 = thunk_FUN_1000d970(&DAT_10316ef0,local_94,pfVar8);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
          uVar16 = thunk_FUN_10008500(pvVar7);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031715c);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317370,local_d0,(float)*(int *)(param_2 + 0x364));
          pvVar7 = thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb60),local_dc,pfVar5);
          uVar9 = thunk_FUN_10008500(pvVar7);
          thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
        }
      }
    }
  }
  iVar4 = thunk_FUN_100b5a50();
  if (((iVar4 != 0) ||
      (bVar2 = thunk_FUN_10042e10(DAT_103170c0), CONCAT31(extraout_var_01,bVar2) == 0)) &&
     (cVar1 = thunk_FUN_10097610(DAT_103170c0), cVar1 != '\0')) {
    if ((DAT_103170e0 & 1) == 0) {
      if ((*(char *)(param_2 + 0x360) == '\x06') || (*(char *)(param_2 + 0x360) == '\a')) {
        local_234 = '\x03';
      }
      else {
        local_234 = '\0';
      }
      thunk_FUN_10015ce0(&stack0xfffffda4,(undefined4 *)&DAT_10317370);
      cVar1 = *(char *)(param_2 + 0x368);
      fVar19 = (float)*(int *)(param_2 + 0x370) * 1.3;
      sVar18 = *(short *)(param_2 + 0x36c);
      puVar15 = &stack0xfffffd8c;
      uVar16 = 0x41200000;
      uVar14 = 0x1007459d;
      thunk_FUN_10069fd0(&DAT_10316ef0,&stack0xfffffd8c,10.0);
      thunk_FUN_10095db0(&stack0xfffffd80,DAT_103170c0,local_234);
      thunk_FUN_10080a30(uVar14,puVar15,uVar16,in_stack_fffffd8c,in_stack_fffffd90,in_stack_fffffd94
                         ,sVar18,fVar19,cVar1);
      if ((DAT_10317348 == 0x21) || (DAT_10317348 == 0xb)) {
        if ((*(char *)(param_2 + 0x360) == '\x06') || (*(char *)(param_2 + 0x360) == '\a')) {
          local_234 = '\x03';
        }
        else {
          local_234 = '\0';
        }
        thunk_FUN_10015ce0(&stack0xfffffda8,(undefined4 *)&DAT_10317370);
        thunk_FUN_10069fd0(&DAT_10316ef0,&stack0xfffffd9c,10.0);
        thunk_FUN_10095db0(&stack0xfffffd90,DAT_103170c0,local_234);
        iVar4 = (*DAT_102e1568)();
        thunk_FUN_1007f970(0x10,iVar4);
      }
      else {
        if ((*(char *)(param_2 + 0x360) == '\x06') || (*(char *)(param_2 + 0x360) == '\a')) {
          local_234 = '\x03';
        }
        else {
          local_234 = '\0';
        }
        thunk_FUN_10015ce0(&stack0xfffffda8,(undefined4 *)&DAT_10317370);
        thunk_FUN_10069fd0(&DAT_10316ef0,&stack0xfffffd9c,10.0);
        thunk_FUN_10095db0(&stack0xfffffd90,DAT_103170c0,local_234);
        iVar4 = (*DAT_102e1568)();
        thunk_FUN_1007f970(0x10,iVar4);
      }
    }
    else {
      if ((*(char *)(param_2 + 0x360) == '\x06') || (*(char *)(param_2 + 0x360) == '\a')) {
        local_234 = '\x03';
      }
      else {
        local_234 = '\0';
      }
      thunk_FUN_10015ce0(&stack0xfffffda8,(undefined4 *)&DAT_10317370);
      thunk_FUN_10069fd0(&DAT_10316ef0,&stack0xfffffd9c,10.0);
      thunk_FUN_10095db0(&stack0xfffffd90,DAT_103170c0,local_234);
      iVar4 = (*DAT_102e1568)();
      thunk_FUN_1007f970(8,iVar4);
      if ((*(char *)(param_2 + 0x360) == '\x06') || (*(char *)(param_2 + 0x360) == '\a')) {
        local_234 = '\x03';
      }
      else {
        local_234 = '\0';
      }
      thunk_FUN_10015ce0(&stack0xfffffda8,(undefined4 *)&DAT_10317038);
      thunk_FUN_10069fd0(&DAT_10316ef0,&stack0xfffffd9c,10.0);
      pfVar5 = thunk_FUN_1000cb20(&DAT_10317370,local_178,(float)*(int *)(param_2 + 0x364));
      puVar15 = &stack0xfffffd90;
      pvVar7 = thunk_FUN_10095db0(local_16c,DAT_103170c0,local_234);
      thunk_FUN_1000ca70(pvVar7,puVar15,pfVar5);
      iVar4 = (*DAT_102e1568)();
      thunk_FUN_1007f970(1,iVar4);
    }
    if (1 < *(int *)(param_2 + 0x24)) {
      thunk_FUN_1000cb20(&DAT_10317370,&stack0xfffffd8c,3.0);
      thunk_FUN_10095db0(&stack0xfffffd80,DAT_103170c0,'\x03');
      thunk_FUN_1007ef20();
    }
    if (DAT_103172dc != 0) {
      if ((*(char *)(param_2 + 0x360) == '\x06') || (*(char *)(param_2 + 0x360) == '\a')) {
        local_234 = '\x03';
      }
      else {
        local_234 = '\0';
      }
      uVar24 = 1;
      iVar4 = DAT_103172dc;
      uVar14 = thunk_FUN_10008500(&DAT_10316ef0);
      pfVar5 = thunk_FUN_1000cb20(&DAT_10317370,local_1bc,(float)(DAT_10316e08 + 0x32));
      puVar15 = local_1c8;
      pfVar6 = thunk_FUN_1000cb20(&DAT_10316f54,local_1a4,(float)DAT_10316e08);
      puVar20 = local_1b0;
      pfVar8 = thunk_FUN_1000cb20(&DAT_10317038,local_18c,(float)_DAT_10316f40);
      pvVar7 = thunk_FUN_1000d970(&DAT_10316ef0,local_198,pfVar8);
      pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
      pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
      uVar16 = thunk_FUN_10008500(pvVar7);
      puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031715c);
      pfVar5 = thunk_FUN_1000cb20(&DAT_10317370,local_1e0,(float)*(int *)(param_2 + 0x364));
      puVar15 = local_1ec;
      pvVar7 = thunk_FUN_10095db0(local_1d4,DAT_103170c0,local_234);
      pvVar7 = thunk_FUN_1000ca70(pvVar7,puVar15,pfVar5);
      uVar9 = thunk_FUN_10008500(pvVar7);
      thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
    }
  }
  thunk_FUN_100738a0();
  thunk_FUN_10015ce0(&stack0xfffffda0,(undefined4 *)&DAT_103173f8);
  thunk_FUN_10073a40(DAT_103170c0);
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_103173f8);
  pfVar6 = (float *)thunk_FUN_10008500(&DAT_10317168);
  thunk_FUN_10042e50(param_1,pfVar6,pfVar5);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317370);
  puVar10 = (undefined4 *)thunk_FUN_10008500(&DAT_10317144);
  *puVar10 = *puVar3;
  iVar4 = thunk_FUN_10008500(&DAT_10317370);
  iVar11 = thunk_FUN_10008500(&DAT_10317144);
  *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar4 + 4);
  iVar4 = thunk_FUN_10008500(&DAT_10317370);
  iVar11 = thunk_FUN_10008500(&DAT_10317144);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar4 + 8);
  iVar4 = *(int *)(param_1 + 0x44);
  bVar23 = *(byte_conflict *)(param_2 + 0x2c);
  uVar13 = (uint)*(byte *)(param_2 + 8);
  iVar11 = *(int *)(param_2 + 0x20);
  fVar19 = *(float *)(param_2 + 0x1c);
  fVar22 = *(float *)(param_1 + 0x34);
  fVar21 = *(float *)(param_1 + 0x30);
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_10317144);
  pfVar6 = (float *)thunk_FUN_10008500(&DAT_10317168);
  bVar17 = *(byte_conflict *)(param_2 + 0x24);
  pfVar8 = (float *)thunk_FUN_10008500(&DAT_10316f54);
  pfVar12 = (float *)thunk_FUN_10008500(&DAT_10317038);
  uVar14 = thunk_FUN_10008500(&DAT_10317370);
  thunk_FUN_1007c5e0(DAT_103170c0,uVar14,pfVar12,pfVar8,bVar17,pfVar6,pfVar5,fVar21,fVar22,fVar19,
                     iVar11,uVar13,bVar23,iVar4);
  return;
}

/* 10074f40  FUN_10074f40  (16 bytes)
 * undefined FUN_10074f40(void)
 */
void FUN_10074f40(void)

{
  return;
}

/* 10074f60  FUN_10074f60  (16 bytes)
 * undefined FUN_10074f60(void)
 */
void FUN_10074f60(void)

{
  return;
}

/* 10074f80  FUN_10074f80  (16 bytes)
 * undefined FUN_10074f80(void)
 */
void FUN_10074f80(void)

{
  return;
}

/* 10074fa0  FUN_10074fa0  (16 bytes)
 * undefined FUN_10074fa0(void)
 */
void FUN_10074fa0(void)

{
  return;
}

/* 10074fc0  FUN_10074fc0  (16 bytes)
 * undefined FUN_10074fc0(void)
 */
void FUN_10074fc0(void)

{
  return;
}

/* 10074fe0  FUN_10074fe0  (16 bytes)
 * undefined FUN_10074fe0(void)
 */
void FUN_10074fe0(void)

{
  return;
}

/* 10075000  FUN_10075000  (16 bytes)
 * undefined FUN_10075000(void)
 */
void FUN_10075000(void)

{
  return;
}

/* 10075020  FUN_10075020  (16 bytes)
 * undefined FUN_10075020(void)
 */
void FUN_10075020(void)

{
  return;
}

/* 10075040  FUN_10075040  (16 bytes)
 * undefined FUN_10075040(void)
 */
void FUN_10075040(void)

{
  return;
}

/* 10075060  FUN_10075060  (16 bytes)
 * undefined FUN_10075060(void)
 */
void FUN_10075060(void)

{
  return;
}

/* 10075080  FUN_10075080  (5549 bytes)
 * undefined FUN_10075080(int param_1, int param_2, char param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10075080(int param_1,int param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined3 extraout_var;
  float *pfVar5;
  float *pfVar6;
  void *pvVar7;
  undefined3 extraout_var_00;
  float *pfVar8;
  undefined4 uVar9;
  undefined3 extraout_var_01;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  int in_stack_fffffbc0;
  undefined1 *in_stack_fffffbc4;
  byte_conflict bVar17;
  undefined1 *in_stack_fffffbc8;
  short sVar18;
  float fVar19;
  undefined1 *puVar20;
  float fVar21;
  float fVar22;
  byte_conflict bVar23;
  undefined4 uVar24;
  undefined1 local_3c0 [12];
  undefined1 local_3b4 [12];
  undefined1 local_3a8 [12];
  undefined1 local_39c [12];
  undefined1 local_390 [12];
  undefined1 local_384 [16];
  undefined1 local_374 [12];
  undefined1 local_368 [12];
  undefined1 local_35c [12];
  undefined1 local_350 [12];
  undefined1 local_344 [12];
  undefined1 local_338 [12];
  undefined1 local_32c [12];
  undefined1 local_320 [12];
  undefined1 local_314 [12];
  undefined1 local_308 [12];
  undefined1 local_2fc [84];
  undefined1 local_2a8 [12];
  undefined1 local_29c [12];
  undefined1 local_290 [12];
  undefined1 local_284 [12];
  undefined1 local_278 [12];
  undefined1 local_26c [12];
  undefined1 local_260 [12];
  undefined1 local_254 [12];
  undefined1 local_248 [12];
  undefined1 local_23c [12];
  undefined1 local_230 [12];
  undefined1 local_224 [12];
  undefined1 local_218 [12];
  undefined1 local_20c [12];
  undefined1 local_200 [12];
  undefined1 local_1f4 [12];
  undefined1 local_1e8 [12];
  undefined1 local_1dc [12];
  undefined1 local_1d0 [12];
  undefined1 local_1c4 [12];
  undefined1 local_1b8 [12];
  undefined1 local_1ac [12];
  undefined1 local_1a0 [12];
  undefined1 local_194 [12];
  undefined1 local_188 [12];
  undefined1 local_17c [12];
  undefined1 local_170 [12];
  undefined1 local_164 [12];
  undefined1 local_158 [12];
  undefined1 local_14c [12];
  undefined1 local_140 [12];
  undefined1 local_134 [12];
  undefined1 local_128 [12];
  undefined1 local_11c [12];
  undefined1 local_110 [12];
  undefined1 local_104 [12];
  undefined1 local_f8 [12];
  undefined1 local_ec [12];
  undefined1 local_e0 [12];
  undefined1 local_d4 [12];
  undefined1 local_c8 [12];
  undefined1 local_bc [12];
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [84];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [16];
  
  if ((DAT_1031725c & 1) == 0) {
    DAT_1031725c = DAT_1031725c | 1;
    thunk_FUN_10007fe0(&DAT_10317250);
    FUN_100bc490(0x10076cc0);
  }
  if ((DAT_1031725c & 2) == 0) {
    DAT_1031725c = DAT_1031725c | 2;
    thunk_FUN_10007fe0(&DAT_1031734c);
    FUN_100bc490(0x10076ca0);
  }
  if ((DAT_1031725c & 4) == 0) {
    DAT_1031725c = DAT_1031725c | 4;
    thunk_FUN_10007fe0(&DAT_10317228);
    FUN_100bc490(0x10076c80);
  }
  if ((DAT_1031725c & 8) == 0) {
    DAT_1031725c = DAT_1031725c | 8;
    thunk_FUN_10007fe0(&DAT_10317274);
    FUN_100bc490(0x10076c60);
  }
  if ((DAT_1031725c & 0x10) == 0) {
    DAT_1031725c = DAT_1031725c | 0x10;
    thunk_FUN_10007fe0(&DAT_10316e68);
    FUN_100bc490(0x10076c40);
  }
  if ((DAT_1031725c & 0x20) == 0) {
    DAT_1031725c = DAT_1031725c | 0x20;
    thunk_FUN_10007fe0(&DAT_10317138);
    FUN_100bc490(0x10076c20);
  }
  if ((DAT_1031725c & 0x40) == 0) {
    DAT_1031725c = DAT_1031725c | 0x40;
    thunk_FUN_10007fe0(&DAT_103170a4);
    FUN_100bc490(0x10076c00);
  }
  if ((DAT_1031725c & 0x80) == 0) {
    DAT_1031725c = DAT_1031725c | 0x80;
    thunk_FUN_10007fe0(&DAT_103170e4);
    FUN_100bc490(0x10076be0);
  }
  if ((DAT_10317208 & 1) == 0) {
    DAT_10317208 = DAT_10317208 | 1;
    thunk_FUN_10007fe0(&DAT_103171e0);
    FUN_100bc490(0x10076bc0);
  }
  if ((DAT_10317208 & 2) == 0) {
    DAT_10317208 = DAT_10317208 | 2;
    thunk_FUN_10007fe0(&DAT_10317094);
    FUN_100bc490(0x10076ba0);
  }
  DAT_1031701c = *(int *)(param_1 + 4);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317250);
  *puVar3 = *(undefined4 *)(param_1 + 8);
  iVar4 = thunk_FUN_10008500(&DAT_10317250);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar4 = thunk_FUN_10008500(&DAT_10317250);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031734c);
  *puVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = thunk_FUN_10008500(&DAT_1031734c);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = thunk_FUN_10008500(&DAT_1031734c);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317228);
  *puVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = thunk_FUN_10008500(&DAT_10317228);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar4 = thunk_FUN_10008500(&DAT_10317228);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x28);
  _DAT_10317080 = *(undefined4 *)(param_1 + 0x40);
  DAT_10317100 = *(int *)(param_1 + 0x40);
  thunk_FUN_10008500(&DAT_103170e4);
  thunk_FUN_10008500(&DAT_103171e0);
  thunk_FUN_10008500(&DAT_10317094);
  thunk_FUN_10008500(&DAT_1031734c);
  (*DAT_102e14b8)();
  DAT_10316e94 = *(int *)(param_1 + 0x38);
  DAT_103173f4 = *(uint *)(param_1 + 0x3c);
  if (*(char *)(param_2 + 0xe0) == '\0') {
    DAT_1031711c = 0;
  }
  else {
    DAT_1031711c = (**(code **)(DAT_102e15a8 + 0xc))();
  }
  _DAT_10316f64 = (*DAT_102e1568)();
  DAT_10316e74 = (*DAT_102e1568)();
  if (((DAT_103173f4 & 1) == 0) &&
     ((cVar1 = thunk_FUN_10097610(DAT_1031701c), cVar1 != '\0' ||
      (bVar2 = thunk_FUN_10042e10(DAT_1031701c), CONCAT31(extraout_var,bVar2) != 0)))) {
    pfVar5 = thunk_FUN_1000cb20(&DAT_103170e4,local_2c,32.0);
    puVar15 = &stack0xfffffbd4;
    pfVar6 = thunk_FUN_1000cb20(&DAT_10317094,local_14,16.0);
    in_stack_fffffbc4 = local_20;
    in_stack_fffffbc0 = 0x10075483;
    pvVar7 = thunk_FUN_1000d970(&DAT_10317250,in_stack_fffffbc4,pfVar6);
    in_stack_fffffbc8 = (undefined1 *)0x1007548a;
    thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
    thunk_FUN_10083260();
  }
  bVar2 = thunk_FUN_10042e10(DAT_1031701c);
  if (CONCAT31(extraout_var_00,bVar2) != 0) {
    if (DAT_10317301 == '\0') {
      DAT_10317114 = param_2 + 0x26a;
    }
    else {
      DAT_10317114 = param_2 + 0x2a4;
    }
    DAT_10316e04 = thunk_FUN_1001d690(DAT_10316e94,DAT_103173f4);
    if (param_3 == '\0') {
      if (DAT_10317100 == 0) {
        iVar4 = (*DAT_102e1568)();
        sVar18 = *(short *)(DAT_10317114 + 0x30 + iVar4 * 2);
      }
      else {
        iVar4 = (*DAT_102e1568)();
        sVar18 = *(short *)(DAT_10317114 + 0x2c + iVar4 * 2);
      }
    }
    else {
      iVar4 = (*DAT_102e1568)();
      sVar18 = *(short *)(DAT_10317114 + 6 + iVar4 * 2);
    }
    DAT_103171f8 = (int)sVar18;
    (**(code **)(DAT_102e15a8 + 0x40))();
    iVar4 = thunk_FUN_100b5a50();
    if (iVar4 == 0) {
      if (DAT_10320fe4 == 0) {
        if (param_3 == '\0') {
          if (DAT_1031711c != 0) {
            uVar24 = 1;
            iVar4 = DAT_1031711c;
            uVar14 = thunk_FUN_10008500(&DAT_10317228);
            pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_29c,(float)(DAT_10316e74 + 0x32));
            puVar15 = local_2a8;
            pfVar6 = thunk_FUN_1000cb20(&DAT_103170e4,local_284,(float)DAT_10316e74);
            puVar20 = local_290;
            pfVar8 = thunk_FUN_1000cb20(&DAT_103171e0,local_26c,(float)_DAT_10316f64);
            in_stack_fffffbc8 = (undefined1 *)0x10075e8e;
            pvVar7 = thunk_FUN_1000d970(&DAT_10317228,local_278,pfVar8);
            pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
            pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
            uVar16 = thunk_FUN_10008500(pvVar7);
            puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031734c);
            uVar9 = thunk_FUN_10008500(&DAT_10320680);
            thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
          }
        }
        else if (DAT_1031711c != 0) {
          uVar24 = 1;
          iVar4 = DAT_1031711c;
          uVar14 = thunk_FUN_10008500(&DAT_10317228);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_1dc,(float)(DAT_10316e74 + 0x32));
          puVar15 = local_1e8;
          pfVar6 = thunk_FUN_1000cb20(&DAT_103170e4,local_1c4,(float)DAT_10316e74);
          puVar20 = local_1d0;
          pfVar8 = thunk_FUN_1000cb20(&DAT_103171e0,local_1ac,(float)_DAT_10316f64);
          pvVar7 = thunk_FUN_1000d970(&DAT_10317228,local_1b8,pfVar8);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
          uVar16 = thunk_FUN_10008500(pvVar7);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031734c);
          pfVar5 = thunk_FUN_1000cb20(&DAT_103171e0,local_1f4,4.0);
          pvVar7 = thunk_FUN_1000ca70(&DAT_10320680,local_200,pfVar5);
          uVar9 = thunk_FUN_10008500(pvVar7);
          thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
          uVar24 = 1;
          iVar4 = DAT_1031711c;
          uVar14 = thunk_FUN_10008500(&DAT_10317228);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_23c,(float)(DAT_10316e74 + 0x32));
          puVar15 = local_248;
          pfVar6 = thunk_FUN_1000cb20(&DAT_103170e4,local_224,(float)DAT_10316e74);
          puVar20 = local_230;
          pfVar8 = thunk_FUN_1000cb20(&DAT_103171e0,local_20c,(float)_DAT_10316f64);
          in_stack_fffffbc8 = (undefined1 *)0x10075d8e;
          pvVar7 = thunk_FUN_1000d970(&DAT_10317228,local_218,pfVar8);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
          uVar16 = thunk_FUN_10008500(pvVar7);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031734c);
          pfVar5 = thunk_FUN_1000cb20(&DAT_103171e0,local_254,4.0);
          pvVar7 = thunk_FUN_1000d970(&DAT_10320680,local_260,pfVar5);
          uVar9 = thunk_FUN_10008500(pvVar7);
          thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
        }
      }
      else {
        if ((DAT_103173f4 & 1) == 0) {
          if (param_3 == '\0') {
            thunk_FUN_10015ce0(&stack0xfffffbd8,(undefined4 *)&DAT_10317094);
            cVar1 = *(char *)(param_2 + 0x368);
            fVar19 = (float)*(int *)(param_2 + 0x370);
            sVar18 = *(short *)(param_2 + 0x36c);
            puVar15 = &stack0xfffffbc0;
            uVar16 = 0x41200000;
            uVar14 = 0x1007571e;
            thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbc0,10.0);
            thunk_FUN_10095db0(&stack0xfffffbb4,DAT_1031701c,(-(DAT_10317100 != 0) & 0xfeU) + 2);
            thunk_FUN_10080a30(uVar14,puVar15,uVar16,in_stack_fffffbc0,in_stack_fffffbc4,
                               in_stack_fffffbc8,sVar18,fVar19,cVar1);
          }
          else {
            thunk_FUN_10015ce0(&stack0xfffffbd8,(undefined4 *)&DAT_10317094);
            cVar1 = *(char *)(param_2 + 0x368);
            fVar19 = (float)*(int *)(param_2 + 0x370);
            sVar18 = *(short *)(param_2 + 0x36c);
            puVar15 = &stack0xfffffbc0;
            uVar16 = 0x41200000;
            uVar14 = 0x10075619;
            thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbc0,10.0);
            thunk_FUN_10095db0(&stack0xfffffbb4,DAT_1031701c,'\0');
            thunk_FUN_10080a30(uVar14,puVar15,uVar16,in_stack_fffffbc0,in_stack_fffffbc4,
                               in_stack_fffffbc8,sVar18,fVar19,cVar1);
            thunk_FUN_10015ce0(&stack0xfffffbd8,(undefined4 *)&DAT_10317094);
            cVar1 = *(char *)(param_2 + 0x368);
            fVar19 = (float)*(int *)(param_2 + 0x370);
            sVar18 = *(short *)(param_2 + 0x36c);
            puVar15 = &stack0xfffffbc0;
            uVar16 = 0x41200000;
            uVar14 = 0x10075699;
            thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbc0,10.0);
            thunk_FUN_10095db0(&stack0xfffffbb4,DAT_1031701c,'\x02');
            thunk_FUN_10080a30(uVar14,puVar15,uVar16,in_stack_fffffbc0,in_stack_fffffbc4,
                               in_stack_fffffbc8,sVar18,fVar19,cVar1);
          }
          thunk_FUN_10015ce0(&stack0xfffffbdc,(undefined4 *)&DAT_10317094);
          in_stack_fffffbc8 = &stack0xfffffbd0;
          in_stack_fffffbc4 = (undefined1 *)0x10075777;
          thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbd0,10.0);
          thunk_FUN_10015ce0(&stack0xfffffbc4,
                             (undefined4 *)
                             (DAT_10320fe4 + 0xb60 +
                             ((-(uint)(DAT_10317100 != 0) & 0xfffffffe) + 2) * 0xc));
          in_stack_fffffbc0 = (*DAT_102e1568)();
          thunk_FUN_1007f970(0x10,in_stack_fffffbc0);
        }
        else {
          thunk_FUN_10015ce0(&stack0xfffffbdc,(undefined4 *)&DAT_10317094);
          thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbd0,10.0);
          thunk_FUN_10015ce0(&stack0xfffffbc4,
                             (undefined4 *)
                             (DAT_10320fe4 + 0xb60 +
                             ((-(uint)(DAT_10317100 != 0) & 0xfffffffe) + 2) * 0xc));
          iVar4 = (*DAT_102e1568)();
          thunk_FUN_1007f970(8,iVar4);
          thunk_FUN_10015ce0(&stack0xfffffbdc,(undefined4 *)&DAT_103171e0);
          thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbd0,10.0);
          in_stack_fffffbc8 = local_80;
          in_stack_fffffbc4 = (undefined1 *)0x10075873;
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,in_stack_fffffbc8,
                                      (float)*(int *)(param_2 + 0x364));
          thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb60 +
                                     ((-(uint)(DAT_10317100 != 0) & 0xfffffffe) + 2) * 0xc),
                             &stack0xfffffbc4,pfVar5);
          in_stack_fffffbc0 = (*DAT_102e1568)();
          thunk_FUN_1007f970(1,in_stack_fffffbc0);
        }
        if (param_3 == '\0') {
          if (DAT_1031711c != 0) {
            uVar24 = 1;
            iVar4 = DAT_1031711c;
            uVar14 = thunk_FUN_10008500(&DAT_10317228);
            pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_17c,(float)(DAT_10316e74 + 0x32));
            puVar15 = local_188;
            pfVar6 = thunk_FUN_1000cb20(&DAT_103170e4,local_164,(float)DAT_10316e74);
            puVar20 = local_170;
            pfVar8 = thunk_FUN_1000cb20(&DAT_103171e0,local_14c,(float)_DAT_10316f64);
            in_stack_fffffbc8 = (undefined1 *)0x10075b71;
            pvVar7 = thunk_FUN_1000d970(&DAT_10317228,local_158,pfVar8);
            pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
            pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
            uVar16 = thunk_FUN_10008500(pvVar7);
            puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031734c);
            pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_194,(float)*(int *)(param_2 + 0x364));
            pvVar7 = thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb60 +
                                                ((-(uint)(DAT_10317100 != 0) & 0xfffffffe) + 2) *
                                                0xc),local_1a0,pfVar5);
            uVar9 = thunk_FUN_10008500(pvVar7);
            thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
          }
        }
        else if (DAT_1031711c != 0) {
          uVar24 = 1;
          iVar4 = DAT_1031711c;
          uVar14 = thunk_FUN_10008500(&DAT_10317228);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_bc,(float)(DAT_10316e74 + 0x32));
          puVar15 = local_c8;
          pfVar6 = thunk_FUN_1000cb20(&DAT_103170e4,local_a4,(float)DAT_10316e74);
          puVar20 = local_b0;
          pfVar8 = thunk_FUN_1000cb20(&DAT_103171e0,local_8c,(float)_DAT_10316f64);
          pvVar7 = thunk_FUN_1000d970(&DAT_10317228,local_98,pfVar8);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
          uVar16 = thunk_FUN_10008500(pvVar7);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031734c);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_d4,(float)*(int *)(param_2 + 0x364));
          pvVar7 = thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb60),local_e0,pfVar5);
          uVar9 = thunk_FUN_10008500(pvVar7);
          thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
          uVar24 = 1;
          iVar4 = DAT_1031711c;
          uVar14 = thunk_FUN_10008500(&DAT_10317228);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_11c,(float)(DAT_10316e74 + 0x32));
          puVar15 = local_128;
          pfVar6 = thunk_FUN_1000cb20(&DAT_103170e4,local_104,(float)DAT_10316e74);
          puVar20 = local_110;
          pfVar8 = thunk_FUN_1000cb20(&DAT_103171e0,local_ec,(float)_DAT_10316f64);
          in_stack_fffffbc8 = (undefined1 *)0x10075a62;
          pvVar7 = thunk_FUN_1000d970(&DAT_10317228,local_f8,pfVar8);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
          uVar16 = thunk_FUN_10008500(pvVar7);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031734c);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_134,(float)*(int *)(param_2 + 0x364));
          pvVar7 = thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb78),local_140,pfVar5);
          uVar9 = thunk_FUN_10008500(pvVar7);
          thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
        }
      }
    }
  }
  iVar4 = thunk_FUN_100b5a50();
  if (((iVar4 != 0) ||
      (bVar2 = thunk_FUN_10042e10(DAT_1031701c), CONCAT31(extraout_var_01,bVar2) == 0)) &&
     (cVar1 = thunk_FUN_10097610(DAT_1031701c), cVar1 != '\0')) {
    if ((DAT_103173f4 & 1) == 0) {
      if (param_3 == '\0') {
        thunk_FUN_10015ce0(&stack0xfffffbd8,(undefined4 *)&DAT_10317094);
        cVar1 = *(char *)(param_2 + 0x368);
        fVar19 = (float)*(int *)(param_2 + 0x370) * 1.3;
        sVar18 = *(short *)(param_2 + 0x36c);
        puVar15 = &stack0xfffffbc0;
        uVar16 = 0x41200000;
        uVar14 = 0x100760a4;
        thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbc0,10.0);
        thunk_FUN_10095db0(&stack0xfffffbb4,DAT_1031701c,(-(DAT_10317100 != 0) & 0xfeU) + 2);
        thunk_FUN_10080a30(uVar14,puVar15,uVar16,in_stack_fffffbc0,in_stack_fffffbc4,
                           in_stack_fffffbc8,sVar18,fVar19,cVar1);
      }
      else {
        thunk_FUN_10015ce0(&stack0xfffffbd8,(undefined4 *)&DAT_10317094);
        cVar1 = *(char *)(param_2 + 0x368);
        fVar19 = (float)*(int *)(param_2 + 0x370) * 1.3;
        sVar18 = *(short *)(param_2 + 0x36c);
        puVar15 = &stack0xfffffbc0;
        uVar16 = 0x41200000;
        uVar14 = 0x10075f87;
        thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbc0,10.0);
        thunk_FUN_10095db0(&stack0xfffffbb4,DAT_1031701c,'\0');
        thunk_FUN_10080a30(uVar14,puVar15,uVar16,in_stack_fffffbc0,in_stack_fffffbc4,
                           in_stack_fffffbc8,sVar18,fVar19,cVar1);
        thunk_FUN_10015ce0(&stack0xfffffbd8,(undefined4 *)&DAT_10317094);
        cVar1 = *(char *)(param_2 + 0x368);
        fVar19 = (float)*(int *)(param_2 + 0x370) * 1.3;
        sVar18 = *(short *)(param_2 + 0x36c);
        puVar15 = &stack0xfffffbc0;
        uVar16 = 0x41200000;
        uVar14 = 0x10076013;
        thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbc0,10.0);
        thunk_FUN_10095db0(&stack0xfffffbb4,DAT_1031701c,'\x02');
        thunk_FUN_10080a30(uVar14,puVar15,uVar16,in_stack_fffffbc0,in_stack_fffffbc4,
                           in_stack_fffffbc8,sVar18,fVar19,cVar1);
      }
      thunk_FUN_10015ce0(&stack0xfffffbdc,(undefined4 *)&DAT_10317094);
      thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbd0,10.0);
      thunk_FUN_10095db0(&stack0xfffffbc4,DAT_1031701c,(-(DAT_10317100 != 0) & 0xfeU) + 2);
      iVar4 = (*DAT_102e1568)();
      thunk_FUN_1007f970(0x10,iVar4);
    }
    else {
      thunk_FUN_10015ce0(&stack0xfffffbdc,(undefined4 *)&DAT_10317094);
      thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbd0,10.0);
      thunk_FUN_10095db0(&stack0xfffffbc4,DAT_1031701c,(-(DAT_10317100 != 0) & 0xfeU) + 2);
      iVar4 = (*DAT_102e1568)();
      thunk_FUN_1007f970(8,iVar4);
      thunk_FUN_10015ce0(&stack0xfffffbdc,(undefined4 *)&DAT_103171e0);
      thunk_FUN_10069fd0(&DAT_10317228,&stack0xfffffbd0,10.0);
      pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_308,(float)*(int *)(param_2 + 0x364));
      puVar15 = &stack0xfffffbc4;
      pvVar7 = thunk_FUN_10095db0(local_2fc,DAT_1031701c,(-(DAT_10317100 != 0) & 0xfeU) + 2);
      thunk_FUN_1000ca70(pvVar7,puVar15,pfVar5);
      iVar4 = (*DAT_102e1568)();
      thunk_FUN_1007f970(1,iVar4);
    }
    if (DAT_1031711c != 0) {
      uVar24 = 1;
      iVar4 = DAT_1031711c;
      uVar14 = thunk_FUN_10008500(&DAT_10317228);
      pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_344,(float)(DAT_10316e74 + 0x32));
      puVar15 = local_350;
      pfVar6 = thunk_FUN_1000cb20(&DAT_103170e4,local_32c,(float)DAT_10316e74);
      puVar20 = local_338;
      pfVar8 = thunk_FUN_1000cb20(&DAT_103171e0,local_314,(float)_DAT_10316f64);
      pvVar7 = thunk_FUN_1000d970(&DAT_10317228,local_320,pfVar8);
      pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
      pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
      uVar16 = thunk_FUN_10008500(pvVar7);
      puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031734c);
      pfVar5 = thunk_FUN_1000cb20(&DAT_10317094,local_368,(float)*(int *)(param_2 + 0x364));
      puVar15 = local_374;
      pvVar7 = thunk_FUN_10095db0(local_35c,DAT_1031701c,(-(DAT_10317100 != 0) & 0xfeU) + 2);
      pvVar7 = thunk_FUN_1000ca70(pvVar7,puVar15,pfVar5);
      uVar9 = thunk_FUN_10008500(pvVar7);
      thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
    }
  }
  thunk_FUN_100738a0();
  thunk_FUN_10015ce0(&stack0xfffffbd4,(undefined4 *)&DAT_10317250);
  thunk_FUN_10073a40(DAT_1031701c);
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_10317250);
  pfVar6 = (float *)thunk_FUN_10008500(&DAT_10317138);
  thunk_FUN_10042e50(param_1,pfVar6,pfVar5);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317094);
  puVar10 = (undefined4 *)thunk_FUN_10008500(&DAT_103170a4);
  *puVar10 = *puVar3;
  iVar4 = thunk_FUN_10008500(&DAT_10317094);
  iVar11 = thunk_FUN_10008500(&DAT_103170a4);
  *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar4 + 4);
  iVar4 = thunk_FUN_10008500(&DAT_10317094);
  iVar11 = thunk_FUN_10008500(&DAT_103170a4);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar4 + 8);
  if (param_3 == '\0') {
    iVar4 = *(int *)(param_1 + 0x44);
    bVar23 = *(byte_conflict *)(param_2 + 0x2c);
    uVar13 = (uint)*(byte *)(param_2 + 8);
    iVar11 = *(int *)(param_2 + 0x20);
    fVar19 = *(float *)(param_2 + 0x1c);
    fVar22 = *(float *)(param_1 + 0x34);
    fVar21 = *(float *)(param_1 + 0x30);
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_103170a4);
    pfVar6 = thunk_FUN_1000cb20(&DAT_103171e0,local_3b4,
                                (float)(int)((uint)(DAT_10317100 != 0) * 8 + -4));
    pvVar7 = thunk_FUN_1000d970(&DAT_10317138,local_3c0,pfVar6);
    pfVar6 = (float *)thunk_FUN_10008500(pvVar7);
    bVar17 = *(byte_conflict *)(param_2 + 0x24);
    pfVar8 = (float *)thunk_FUN_10008500(&DAT_103170e4);
    pfVar12 = (float *)thunk_FUN_10008500(&DAT_103171e0);
    uVar14 = thunk_FUN_10008500(&DAT_10317094);
    thunk_FUN_1007c5e0(DAT_1031701c,uVar14,pfVar12,pfVar8,bVar17,pfVar6,pfVar5,fVar21,fVar22,fVar19,
                       iVar11,uVar13,bVar23,iVar4);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x44);
    bVar23 = *(byte_conflict *)(param_2 + 0x2c);
    uVar13 = (uint)*(byte *)(param_2 + 8);
    iVar11 = *(int *)(param_2 + 0x20);
    fVar19 = *(float *)(param_2 + 0x1c);
    fVar22 = *(float *)(param_1 + 0x34);
    fVar21 = *(float *)(param_1 + 0x30);
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_103170a4);
    pfVar6 = thunk_FUN_1000cb20(&DAT_103171e0,local_384,4.0);
    pvVar7 = thunk_FUN_1000d970(&DAT_10317138,local_390,pfVar6);
    pfVar6 = (float *)thunk_FUN_10008500(pvVar7);
    bVar17 = *(byte_conflict *)(param_2 + 0x24);
    pfVar8 = (float *)thunk_FUN_10008500(&DAT_103170e4);
    pfVar12 = (float *)thunk_FUN_10008500(&DAT_103171e0);
    uVar14 = thunk_FUN_10008500(&DAT_10317094);
    thunk_FUN_1007c5e0(DAT_1031701c,uVar14,pfVar12,pfVar8,bVar17,pfVar6,pfVar5,fVar21,fVar22,fVar19,
                       iVar11,uVar13,bVar23,iVar4);
    iVar4 = *(int *)(param_1 + 0x44);
    bVar23 = *(byte_conflict *)(param_2 + 0x2c);
    uVar13 = (uint)*(byte *)(param_2 + 8);
    iVar11 = *(int *)(param_2 + 0x20);
    fVar19 = *(float *)(param_2 + 0x1c);
    fVar22 = *(float *)(param_1 + 0x34);
    fVar21 = *(float *)(param_1 + 0x30);
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_103170a4);
    pfVar6 = thunk_FUN_1000cb20(&DAT_103171e0,local_39c,-4.0);
    pvVar7 = thunk_FUN_1000d970(&DAT_10317138,local_3a8,pfVar6);
    pfVar6 = (float *)thunk_FUN_10008500(pvVar7);
    bVar17 = *(byte_conflict *)(param_2 + 0x24);
    pfVar8 = (float *)thunk_FUN_10008500(&DAT_103170e4);
    pfVar12 = (float *)thunk_FUN_10008500(&DAT_103171e0);
    uVar14 = thunk_FUN_10008500(&DAT_10317094);
    thunk_FUN_1007c5e0(DAT_1031701c,uVar14,pfVar12,pfVar8,bVar17,pfVar6,pfVar5,fVar21,fVar22,fVar19,
                       iVar11,uVar13,bVar23,iVar4);
  }
  return;
}

/* 10076ba0  FUN_10076ba0  (16 bytes)
 * undefined FUN_10076ba0(void)
 */
void FUN_10076ba0(void)

{
  return;
}

/* 10076bc0  FUN_10076bc0  (16 bytes)
 * undefined FUN_10076bc0(void)
 */
void FUN_10076bc0(void)

{
  return;
}

/* 10076be0  FUN_10076be0  (16 bytes)
 * undefined FUN_10076be0(void)
 */
void FUN_10076be0(void)

{
  return;
}

/* 10076c00  FUN_10076c00  (16 bytes)
 * undefined FUN_10076c00(void)
 */
void FUN_10076c00(void)

{
  return;
}

/* 10076c20  FUN_10076c20  (16 bytes)
 * undefined FUN_10076c20(void)
 */
void FUN_10076c20(void)

{
  return;
}

/* 10076c40  FUN_10076c40  (16 bytes)
 * undefined FUN_10076c40(void)
 */
void FUN_10076c40(void)

{
  return;
}

/* 10076c60  FUN_10076c60  (16 bytes)
 * undefined FUN_10076c60(void)
 */
void FUN_10076c60(void)

{
  return;
}

/* 10076c80  FUN_10076c80  (16 bytes)
 * undefined FUN_10076c80(void)
 */
void FUN_10076c80(void)

{
  return;
}

/* 10076ca0  FUN_10076ca0  (16 bytes)
 * undefined FUN_10076ca0(void)
 */
void FUN_10076ca0(void)

{
  return;
}

/* 10076cc0  FUN_10076cc0  (16 bytes)
 * undefined FUN_10076cc0(void)
 */
void FUN_10076cc0(void)

{
  return;
}

/* 10076ce0  FUN_10076ce0  (2882 bytes)
 * undefined FUN_10076ce0(int param_1, int param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10076ce0(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined3 extraout_var;
  float *pfVar5;
  float *pfVar6;
  void *pvVar7;
  undefined3 extraout_var_00;
  float *pfVar8;
  undefined4 uVar9;
  undefined3 extraout_var_01;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  int in_stack_fffffdfc;
  undefined1 *in_stack_fffffe00;
  byte_conflict bVar17;
  undefined1 *in_stack_fffffe04;
  short sVar18;
  float fVar19;
  undefined1 *puVar20;
  float fVar21;
  float fVar22;
  byte_conflict bVar23;
  undefined4 uVar24;
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [12];
  undefined1 local_15c [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined1 local_120 [44];
  undefined1 local_f4 [12];
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [44];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [16];
  
  if ((DAT_10317118 & 1) == 0) {
    DAT_10317118 = DAT_10317118 | 1;
    thunk_FUN_10007fe0(&DAT_10317384);
    FUN_100bc490(0x10077c20);
  }
  if ((DAT_10317118 & 2) == 0) {
    DAT_10317118 = DAT_10317118 | 2;
    thunk_FUN_10007fe0(&DAT_10316f00);
    FUN_100bc490(0x10077c00);
  }
  if ((DAT_10317118 & 4) == 0) {
    DAT_10317118 = DAT_10317118 | 4;
    thunk_FUN_10007fe0(&DAT_10317268);
    FUN_100bc490(0x10077be0);
  }
  if ((DAT_10317118 & 8) == 0) {
    DAT_10317118 = DAT_10317118 | 8;
    thunk_FUN_10007fe0(&DAT_1031702c);
    FUN_100bc490(0x10077bc0);
  }
  if ((DAT_10317118 & 0x10) == 0) {
    DAT_10317118 = DAT_10317118 | 0x10;
    thunk_FUN_10007fe0(&DAT_103172c4);
    FUN_100bc490(0x10077ba0);
  }
  if ((DAT_10317118 & 0x20) == 0) {
    DAT_10317118 = DAT_10317118 | 0x20;
    thunk_FUN_10007fe0(&DAT_10317044);
    FUN_100bc490(0x10077b80);
  }
  if ((DAT_10317118 & 0x40) == 0) {
    DAT_10317118 = DAT_10317118 | 0x40;
    thunk_FUN_10007fe0(&DAT_103171bc);
    FUN_100bc490(0x10077b60);
  }
  if ((DAT_10317118 & 0x80) == 0) {
    DAT_10317118 = DAT_10317118 | 0x80;
    thunk_FUN_10007fe0(&DAT_1031723c);
    FUN_100bc490(0x10077b40);
  }
  if ((DAT_10317248 & 1) == 0) {
    DAT_10317248 = DAT_10317248 | 1;
    thunk_FUN_10007fe0(&DAT_10316f28);
    FUN_100bc490(0x10077b20);
  }
  if ((DAT_10317248 & 2) == 0) {
    DAT_10317248 = DAT_10317248 | 2;
    thunk_FUN_10007fe0(&DAT_10317010);
    FUN_100bc490(0x10077b00);
  }
  DAT_10316edc = *(int *)(param_1 + 4);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317384);
  *puVar3 = *(undefined4 *)(param_1 + 8);
  iVar4 = thunk_FUN_10008500(&DAT_10317384);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar4 = thunk_FUN_10008500(&DAT_10317384);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10316f00);
  *puVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = thunk_FUN_10008500(&DAT_10316f00);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = thunk_FUN_10008500(&DAT_10316f00);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317268);
  *puVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = thunk_FUN_10008500(&DAT_10317268);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar4 = thunk_FUN_10008500(&DAT_10317268);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x28);
  thunk_FUN_10008500(&DAT_1031723c);
  thunk_FUN_10008500(&DAT_10316f28);
  thunk_FUN_10008500(&DAT_10317010);
  thunk_FUN_10008500(&DAT_10316f00);
  (*DAT_102e14b8)();
  DAT_10316ee0 = *(int *)(param_1 + 0x38);
  DAT_103170b0 = *(uint *)(param_1 + 0x3c);
  DAT_10316f44 = *(int *)(param_1 + 0x40);
  if (*(char *)(param_2 + 0xe0) == '\0') {
    DAT_1031731c = 0;
  }
  else {
    DAT_1031731c = (**(code **)(DAT_102e15a8 + 0xc))();
  }
  _DAT_103171a8 = (*DAT_102e1568)();
  _DAT_10316f74 = (*DAT_102e1568)();
  if (((DAT_103170b0 & 1) == 0) &&
     ((cVar1 = thunk_FUN_10097610(DAT_10316edc), cVar1 != '\0' ||
      (bVar2 = thunk_FUN_10042e10(DAT_10316edc), CONCAT31(extraout_var,bVar2) != 0)))) {
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031723c,local_2c,32.0);
    puVar15 = &stack0xfffffe10;
    pfVar6 = thunk_FUN_1000cb20(&DAT_10317010,local_14,16.0);
    in_stack_fffffe00 = local_20;
    in_stack_fffffdfc = 0x100770d4;
    pvVar7 = thunk_FUN_1000d970(&DAT_10317384,in_stack_fffffe00,pfVar6);
    in_stack_fffffe04 = (undefined1 *)0x100770db;
    thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
    thunk_FUN_10083260();
  }
  bVar2 = thunk_FUN_10042e10(DAT_10316edc);
  if (CONCAT31(extraout_var_00,bVar2) != 0) {
    if (DAT_10317301 == '\0') {
      DAT_10317264 = param_2 + 0x26a;
    }
    else {
      DAT_10317264 = param_2 + 0x2a4;
    }
    DAT_103170fc = thunk_FUN_1001d690(DAT_10316ee0,DAT_103170b0);
    (**(code **)(DAT_102e15a8 + 0x40))();
    iVar4 = thunk_FUN_100b5a50();
    if (iVar4 == 0) {
      if (DAT_10320fe4 == 0) {
        if ((DAT_10316f44 == 0) && (DAT_1031731c != 0)) {
          uVar24 = 2;
          iVar4 = DAT_1031731c;
          uVar14 = thunk_FUN_10008500(&DAT_10317268);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317010,local_e8,(float)_DAT_103171a8);
          puVar15 = local_f4;
          pfVar6 = thunk_FUN_1000cb20(&DAT_1031723c,local_d0,(float)_DAT_10316f74);
          puVar20 = local_dc;
          pfVar8 = thunk_FUN_1000cb20(&DAT_10316f28,local_b8,(float)_DAT_103171a8);
          in_stack_fffffe04 = (undefined1 *)0x10077454;
          pvVar7 = thunk_FUN_1000d970(&DAT_10317268,local_c4,pfVar8);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
          uVar16 = thunk_FUN_10008500(pvVar7);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10316f00);
          uVar9 = thunk_FUN_10008500(&DAT_10320680);
          thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
        }
      }
      else {
        thunk_FUN_10015ce0(&stack0xfffffe14,(undefined4 *)&DAT_10317010);
        cVar1 = *(char *)(param_2 + 0x368);
        fVar19 = (float)*(int *)(param_2 + 0x370);
        sVar18 = *(short *)(param_2 + 0x36c);
        puVar15 = &stack0xfffffdfc;
        uVar16 = 0x41200000;
        uVar14 = 0x100771e6;
        thunk_FUN_10069fd0(&DAT_10317268,&stack0xfffffdfc,10.0);
        thunk_FUN_10095db0(&stack0xfffffdf0,DAT_10316edc,'\0');
        thunk_FUN_10080a30(uVar14,puVar15,uVar16,in_stack_fffffdfc,in_stack_fffffe00,
                           in_stack_fffffe04,sVar18,fVar19,cVar1);
        thunk_FUN_10015ce0(&stack0xfffffe18,(undefined4 *)&DAT_10317010);
        in_stack_fffffe04 = &stack0xfffffe0c;
        in_stack_fffffe00 = (undefined1 *)0x10077230;
        thunk_FUN_10069fd0(&DAT_10317268,&stack0xfffffe0c,10.0);
        thunk_FUN_10015ce0(&stack0xfffffe00,(undefined4 *)(DAT_10320fe4 + 0xb60));
        in_stack_fffffdfc = (*DAT_102e1568)();
        thunk_FUN_1007f970(0x10,in_stack_fffffdfc);
        thunk_FUN_1000cb20(&DAT_10317010,&stack0xfffffdfc,3.0);
        thunk_FUN_10095db0(&stack0xfffffdf0,DAT_10316edc,'\0');
        thunk_FUN_1007ef20();
        if ((DAT_10316f44 == 0) && (DAT_1031731c != 0)) {
          uVar24 = 2;
          iVar4 = DAT_1031731c;
          uVar14 = thunk_FUN_10008500(&DAT_10317268);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317010,local_88,(float)_DAT_103171a8);
          puVar20 = local_94;
          pfVar6 = thunk_FUN_1000cb20(&DAT_1031723c,local_70,(float)_DAT_10316f74);
          puVar15 = local_7c;
          pfVar8 = thunk_FUN_1000cb20(&DAT_10316f28,local_58,(float)_DAT_103171a8);
          in_stack_fffffe04 = (undefined1 *)0x10077347;
          pvVar7 = thunk_FUN_1000d970(&DAT_10317268,local_64,pfVar8);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar6);
          pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar5);
          uVar16 = thunk_FUN_10008500(pvVar7);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10316f00);
          pfVar5 = thunk_FUN_1000cb20(&DAT_10317010,local_a0,(float)*(int *)(param_2 + 0x364));
          pvVar7 = thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb60),local_ac,pfVar5);
          uVar9 = thunk_FUN_10008500(pvVar7);
          thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
        }
      }
    }
  }
  iVar4 = thunk_FUN_100b5a50();
  if (((iVar4 != 0) ||
      (bVar2 = thunk_FUN_10042e10(DAT_10316edc), CONCAT31(extraout_var_01,bVar2) == 0)) &&
     (cVar1 = thunk_FUN_10097610(DAT_10316edc), cVar1 != '\0')) {
    thunk_FUN_10015ce0(&stack0xfffffe14,(undefined4 *)&DAT_10317010);
    cVar1 = *(char *)(param_2 + 0x368);
    fVar19 = (float)*(int *)(param_2 + 0x370) * 1.3;
    sVar18 = *(short *)(param_2 + 0x36c);
    puVar15 = &stack0xfffffdfc;
    uVar16 = 0x41200000;
    uVar14 = 0x1007751a;
    thunk_FUN_10069fd0(&DAT_10317268,&stack0xfffffdfc,10.0);
    thunk_FUN_10095db0(&stack0xfffffdf0,DAT_10316edc,'\x03');
    thunk_FUN_10080a30(uVar14,puVar15,uVar16,in_stack_fffffdfc,in_stack_fffffe00,in_stack_fffffe04,
                       sVar18,fVar19,cVar1);
    thunk_FUN_10015ce0(&stack0xfffffe18,(undefined4 *)&DAT_10317010);
    thunk_FUN_10069fd0(&DAT_10317268,&stack0xfffffe0c,10.0);
    thunk_FUN_10095db0(&stack0xfffffe00,DAT_10316edc,'\x03');
    iVar4 = (*DAT_102e1568)();
    thunk_FUN_1007f970(0x18,iVar4);
    thunk_FUN_1000cb20(&DAT_10317010,&stack0xfffffdfc,3.0);
    thunk_FUN_10095db0(&stack0xfffffdf0,DAT_10316edc,'\x03');
    thunk_FUN_1007ef20();
    if ((DAT_10316f44 == 0) && (DAT_1031731c != 0)) {
      uVar24 = 2;
      iVar4 = DAT_1031731c;
      uVar14 = thunk_FUN_10008500(&DAT_10317268);
      pfVar5 = thunk_FUN_1000cb20(&DAT_10317010,local_150,(float)_DAT_103171a8);
      puVar15 = local_15c;
      pfVar6 = thunk_FUN_1000cb20(&DAT_1031723c,local_138,(float)_DAT_10316f74);
      puVar20 = local_144;
      pfVar8 = thunk_FUN_1000cb20(&DAT_10316f28,local_120,(float)_DAT_103171a8);
      pvVar7 = thunk_FUN_1000d970(&DAT_10317268,local_12c,pfVar8);
      pvVar7 = thunk_FUN_1000d970(pvVar7,puVar20,pfVar6);
      pvVar7 = thunk_FUN_1000d970(pvVar7,puVar15,pfVar5);
      uVar16 = thunk_FUN_10008500(pvVar7);
      puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10316f00);
      pfVar5 = thunk_FUN_1000cb20(&DAT_10317010,local_174,(float)*(int *)(param_2 + 0x364));
      puVar15 = local_180;
      pvVar7 = thunk_FUN_10095db0(local_168,DAT_10316edc,'\x03');
      pvVar7 = thunk_FUN_1000ca70(pvVar7,puVar15,pfVar5);
      uVar9 = thunk_FUN_10008500(pvVar7);
      thunk_FUN_10095850(uVar9,puVar3,uVar16,uVar14,iVar4,uVar24);
    }
  }
  thunk_FUN_100738a0();
  thunk_FUN_10015ce0(&stack0xfffffe10,(undefined4 *)&DAT_10317384);
  thunk_FUN_10073a40(DAT_10316edc);
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_10317384);
  pfVar6 = (float *)thunk_FUN_10008500(&DAT_10317044);
  thunk_FUN_10042e50(param_1,pfVar6,pfVar5);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317010);
  puVar10 = (undefined4 *)thunk_FUN_10008500(&DAT_103171bc);
  *puVar10 = *puVar3;
  iVar4 = thunk_FUN_10008500(&DAT_10317010);
  iVar11 = thunk_FUN_10008500(&DAT_103171bc);
  *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar4 + 4);
  iVar4 = thunk_FUN_10008500(&DAT_10317010);
  iVar11 = thunk_FUN_10008500(&DAT_103171bc);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar4 + 8);
  iVar4 = *(int *)(param_1 + 0x44);
  bVar23 = *(byte_conflict *)(param_2 + 0x2c);
  uVar13 = (uint)*(byte *)(param_2 + 8);
  iVar11 = *(int *)(param_2 + 0x20);
  fVar19 = *(float *)(param_2 + 0x1c);
  fVar22 = *(float *)(param_1 + 0x34);
  fVar21 = *(float *)(param_1 + 0x30);
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_103171bc);
  pfVar6 = (float *)thunk_FUN_10008500(&DAT_10317044);
  bVar17 = *(byte_conflict *)(param_2 + 0x24);
  pfVar8 = (float *)thunk_FUN_10008500(&DAT_1031723c);
  pfVar12 = (float *)thunk_FUN_10008500(&DAT_10316f28);
  uVar14 = thunk_FUN_10008500(&DAT_10317010);
  thunk_FUN_1007c5e0(DAT_10316edc,uVar14,pfVar12,pfVar8,bVar17,pfVar6,pfVar5,fVar21,fVar22,fVar19,
                     iVar11,uVar13,bVar23,iVar4);
  return;
}

/* 10077b00  FUN_10077b00  (16 bytes)
 * undefined FUN_10077b00(void)
 */
void FUN_10077b00(void)

{
  return;
}

/* 10077b20  FUN_10077b20  (16 bytes)
 * undefined FUN_10077b20(void)
 */
void FUN_10077b20(void)

{
  return;
}

/* 10077b40  FUN_10077b40  (16 bytes)
 * undefined FUN_10077b40(void)
 */
void FUN_10077b40(void)

{
  return;
}

/* 10077b60  FUN_10077b60  (16 bytes)
 * undefined FUN_10077b60(void)
 */
void FUN_10077b60(void)

{
  return;
}

/* 10077b80  FUN_10077b80  (16 bytes)
 * undefined FUN_10077b80(void)
 */
void FUN_10077b80(void)

{
  return;
}

/* 10077ba0  FUN_10077ba0  (16 bytes)
 * undefined FUN_10077ba0(void)
 */
void FUN_10077ba0(void)

{
  return;
}

/* 10077bc0  FUN_10077bc0  (16 bytes)
 * undefined FUN_10077bc0(void)
 */
void FUN_10077bc0(void)

{
  return;
}

/* 10077be0  FUN_10077be0  (16 bytes)
 * undefined FUN_10077be0(void)
 */
void FUN_10077be0(void)

{
  return;
}

/* 10077c00  FUN_10077c00  (16 bytes)
 * undefined FUN_10077c00(void)
 */
void FUN_10077c00(void)

{
  return;
}

/* 10077c20  FUN_10077c20  (16 bytes)
 * undefined FUN_10077c20(void)
 */
void FUN_10077c20(void)

{
  return;
}

/* 10077c40  FUN_10077c40  (2162 bytes)
 * undefined FUN_10077c40(int param_1)
 * called by: thunk_FUN_10077c40
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10077c40(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined3 extraout_var_00;
  undefined4 uStack_1cc;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined1 local_154 [12];
  undefined1 local_148 [24];
  undefined1 local_130 [12];
  undefined1 local_124 [12];
  undefined1 local_118 [12];
  undefined1 local_10c [12];
  undefined1 local_100 [12];
  undefined1 local_f4 [12];
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [24];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_103172ec & 1) == 0) {
    DAT_103172ec = DAT_103172ec | 1;
    thunk_FUN_10007fe0(&DAT_10316ff4);
    FUN_100bc490(0x100787f0);
  }
  if ((DAT_103172ec & 2) == 0) {
    DAT_103172ec = DAT_103172ec | 2;
    thunk_FUN_10007fe0(&DAT_10317004);
    FUN_100bc490(0x100787d0);
  }
  if ((DAT_103172ec & 4) == 0) {
    DAT_103172ec = DAT_103172ec | 4;
    thunk_FUN_10007fe0(&DAT_103172f4);
    FUN_100bc490(0x100787b0);
  }
  if ((DAT_103172ec & 8) == 0) {
    DAT_103172ec = DAT_103172ec | 8;
    thunk_FUN_10007fe0(&DAT_10316f48);
    FUN_100bc490(0x10078790);
  }
  if ((DAT_103172ec & 0x10) == 0) {
    DAT_103172ec = DAT_103172ec | 0x10;
    thunk_FUN_10007fe0(&DAT_10317358);
    FUN_100bc490(0x10078770);
  }
  if ((DAT_103172ec & 0x20) == 0) {
    DAT_103172ec = DAT_103172ec | 0x20;
    thunk_FUN_10007fe0(&DAT_10317404);
    FUN_100bc490(0x10078750);
  }
  if ((DAT_103172ec & 0x40) == 0) {
    DAT_103172ec = DAT_103172ec | 0x40;
    thunk_FUN_10007fe0(&DAT_1031728c);
    FUN_100bc490(0x10078730);
  }
  if ((DAT_103172ec & 0x80) == 0) {
    DAT_103172ec = DAT_103172ec | 0x80;
    thunk_FUN_10007fe0(&DAT_10317128);
    FUN_100bc490(0x10078710);
  }
  if ((DAT_103173dc & 1) == 0) {
    DAT_103173dc = DAT_103173dc | 1;
    thunk_FUN_10007fe0(&DAT_103171b0);
    FUN_100bc490(0x100786f0);
  }
  if ((DAT_103173dc & 2) == 0) {
    DAT_103173dc = DAT_103173dc | 2;
    thunk_FUN_10007fe0(&DAT_10317320);
    FUN_100bc490(0x100786d0);
  }
  DAT_10317134 = *(int *)(param_1 + 4);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10316ff4);
  *puVar3 = *(undefined4 *)(param_1 + 8);
  iVar4 = thunk_FUN_10008500(&DAT_10316ff4);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar4 = thunk_FUN_10008500(&DAT_10316ff4);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317004);
  *puVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = thunk_FUN_10008500(&DAT_10317004);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = thunk_FUN_10008500(&DAT_10317004);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_103172f4);
  *puVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = thunk_FUN_10008500(&DAT_103172f4);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar4 = thunk_FUN_10008500(&DAT_103172f4);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x28);
  thunk_FUN_10008500(&DAT_10317128);
  thunk_FUN_10008500(&DAT_103171b0);
  thunk_FUN_10008500(&DAT_10317320);
  thunk_FUN_10008500(&DAT_10317004);
  (*DAT_102e14b8)();
  DAT_10316f10 = *(int *)(param_1 + 0x38);
  DAT_10317390 = *(uint *)(param_1 + 0x3c);
  DAT_10317050 = thunk_FUN_1001d7b0(*(int *)(param_1 + 0x38));
  if (DAT_10317050[0xe0] == '\0') {
    DAT_10317120 = 0;
  }
  else {
    DAT_10317120 = (**(code **)(DAT_102e15a8 + 0xc))();
  }
  _DAT_103170dc = (*DAT_102e1568)();
  _DAT_10317124 = (*DAT_102e1568)();
  bVar1 = thunk_FUN_10042e10(DAT_10317134);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (DAT_10317301 == '\0') {
      DAT_103172b4 = DAT_10317050 + 0x26a;
    }
    else {
      DAT_103172b4 = DAT_10317050 + 0x2a4;
    }
    DAT_103173e4 = thunk_FUN_1001d690(DAT_10316f10,DAT_10317390);
    (*DAT_102e1568)();
    (**(code **)(DAT_102e15a8 + 0x40))();
    iVar4 = thunk_FUN_100b5a50();
    if (iVar4 == 0) {
      if (DAT_10320fe4 == 0) {
        if (DAT_10317120 != 0) {
          uVar14 = 2;
          iVar4 = DAT_10317120;
          uVar5 = thunk_FUN_10008500(&DAT_103172f4);
          pfVar6 = thunk_FUN_1000cb20(&DAT_10317320,local_b8,(float)_DAT_103170dc);
          puVar13 = local_c4;
          pfVar7 = thunk_FUN_1000cb20(&DAT_10317128,local_a0,(float)_DAT_10317124);
          puVar12 = local_ac;
          pfVar8 = thunk_FUN_1000cb20(&DAT_103171b0,local_88,(float)_DAT_103170dc);
          pvVar9 = thunk_FUN_1000d970(&DAT_103172f4,local_94,pfVar8);
          pvVar9 = thunk_FUN_1000d970(pvVar9,puVar12,pfVar7);
          pvVar9 = thunk_FUN_1000d970(pvVar9,puVar13,pfVar6);
          uVar10 = thunk_FUN_10008500(pvVar9);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317004);
          uVar11 = thunk_FUN_10008500(&DAT_10320680);
          thunk_FUN_10095850(uVar11,puVar3,uVar10,uVar5,iVar4,uVar14);
        }
      }
      else if (DAT_10317120 != 0) {
        uVar14 = 2;
        iVar4 = DAT_10317120;
        uVar5 = thunk_FUN_10008500(&DAT_103172f4);
        pfVar6 = thunk_FUN_1000cb20(&DAT_10317320,local_40,(float)_DAT_103170dc);
        puVar13 = local_4c;
        pfVar7 = thunk_FUN_1000cb20(&DAT_10317128,local_28,(float)_DAT_10317124);
        puVar12 = local_34;
        pfVar8 = thunk_FUN_1000cb20(&DAT_103171b0,local_10,(float)_DAT_103170dc);
        pvVar9 = thunk_FUN_1000d970(&DAT_103172f4,local_1c,pfVar8);
        pvVar9 = thunk_FUN_1000d970(pvVar9,puVar12,pfVar7);
        pvVar9 = thunk_FUN_1000d970(pvVar9,puVar13,pfVar6);
        uVar10 = thunk_FUN_10008500(pvVar9);
        puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317004);
        pfVar6 = thunk_FUN_1000cb20(&DAT_10317320,local_58,(float)*(int *)(DAT_10317050 + 0x364));
        pvVar9 = thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb60),local_64,pfVar6);
        uVar11 = thunk_FUN_10008500(pvVar9);
        thunk_FUN_10095850(uVar11,puVar3,uVar10,uVar5,iVar4,uVar14);
        thunk_FUN_10015ce0(&stack0xfffffe4c,(undefined4 *)&DAT_103171b0);
        uStack_1cc = 0x1007816d;
        thunk_FUN_10069fd0(&DAT_103172f4,&stack0xfffffe40,10.0);
        uStack_1cc = 0x1007818b;
        pfVar6 = thunk_FUN_1000cb20(&DAT_10317320,local_7c,(float)*(int *)(DAT_10317050 + 0x364));
        thunk_FUN_1000ca70((void *)(DAT_10320fe4 + 0xb60),&uStack_1cc,pfVar6);
        iVar4 = (*DAT_102e1568)(0x14,0x28);
        thunk_FUN_1007f970(1,iVar4);
      }
    }
  }
  iVar4 = thunk_FUN_100b5a50();
  if ((((iVar4 != 0) ||
       (bVar1 = thunk_FUN_10042e10(DAT_10317134), CONCAT31(extraout_var_00,bVar1) == 0)) &&
      (cVar2 = thunk_FUN_10097610(DAT_10317134), cVar2 != '\0')) && (DAT_10317120 != 0)) {
    uVar14 = 2;
    iVar4 = DAT_10317120;
    uVar5 = thunk_FUN_10008500(&DAT_103172f4);
    pfVar6 = thunk_FUN_1000cb20(&DAT_10317320,local_100,(float)_DAT_103170dc);
    puVar13 = local_10c;
    pfVar7 = thunk_FUN_1000cb20(&DAT_10317128,local_e8,(float)_DAT_10317124);
    puVar12 = local_f4;
    pfVar8 = thunk_FUN_1000cb20(&DAT_103171b0,local_d0,(float)_DAT_103170dc);
    pvVar9 = thunk_FUN_1000d970(&DAT_103172f4,local_dc,pfVar8);
    pvVar9 = thunk_FUN_1000d970(pvVar9,puVar12,pfVar7);
    pvVar9 = thunk_FUN_1000d970(pvVar9,puVar13,pfVar6);
    uVar10 = thunk_FUN_10008500(pvVar9);
    puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317004);
    pfVar6 = thunk_FUN_1000cb20(&DAT_10317320,local_124,(float)*(int *)(DAT_10317050 + 0x364));
    puVar13 = local_130;
    uStack_1cc = 0x100783b3;
    pvVar9 = thunk_FUN_10095db0(local_118,DAT_10317134,'\x03');
    pvVar9 = thunk_FUN_1000ca70(pvVar9,puVar13,pfVar6);
    uVar11 = thunk_FUN_10008500(pvVar9);
    thunk_FUN_10095850(uVar11,puVar3,uVar10,uVar5,iVar4,uVar14);
    thunk_FUN_10015ce0(&stack0xfffffe4c,(undefined4 *)&DAT_103171b0);
    uStack_1cc = 0x100783f8;
    thunk_FUN_10069fd0(&DAT_103172f4,&stack0xfffffe40,10.0);
    uStack_1cc = 0x10078419;
    pfVar6 = thunk_FUN_1000cb20(&DAT_10317320,local_154,(float)*(int *)(DAT_10317050 + 0x364));
    puVar3 = &uStack_1cc;
    pvVar9 = thunk_FUN_10095db0(local_148,DAT_10317134,'\x03');
    thunk_FUN_1000ca70(pvVar9,puVar3,pfVar6);
    iVar4 = (*DAT_102e1568)(0x14,0x28);
    thunk_FUN_1007f970(1,iVar4);
  }
  (*DAT_102e1568)();
  (*DAT_102e1564)();
  thunk_FUN_10008500(&DAT_10316ff4);
  (**(code **)(DAT_102e15a8 + 4))();
  return;
}

/* 100786d0  FUN_100786d0  (16 bytes)
 * undefined FUN_100786d0(void)
 */
void FUN_100786d0(void)

{
  return;
}

/* 100786f0  FUN_100786f0  (16 bytes)
 * undefined FUN_100786f0(void)
 */
void FUN_100786f0(void)

{
  return;
}

/* 10078710  FUN_10078710  (16 bytes)
 * undefined FUN_10078710(void)
 */
void FUN_10078710(void)

{
  return;
}

/* 10078730  FUN_10078730  (16 bytes)
 * undefined FUN_10078730(void)
 */
void FUN_10078730(void)

{
  return;
}

/* 10078750  FUN_10078750  (16 bytes)
 * undefined FUN_10078750(void)
 */
void FUN_10078750(void)

{
  return;
}

/* 10078770  FUN_10078770  (16 bytes)
 * undefined FUN_10078770(void)
 */
void FUN_10078770(void)

{
  return;
}

/* 10078790  FUN_10078790  (16 bytes)
 * undefined FUN_10078790(void)
 */
void FUN_10078790(void)

{
  return;
}

/* 100787b0  FUN_100787b0  (16 bytes)
 * undefined FUN_100787b0(void)
 */
void FUN_100787b0(void)

{
  return;
}

/* 100787d0  FUN_100787d0  (16 bytes)
 * undefined FUN_100787d0(void)
 */
void FUN_100787d0(void)

{
  return;
}

/* 100787f0  FUN_100787f0  (16 bytes)
 * undefined FUN_100787f0(void)
 */
void FUN_100787f0(void)

{
  return;
}

/* 10078810  FUN_10078810  (217 bytes)
 * undefined FUN_10078810(int param_1)
 * called by: thunk_FUN_10078810
 */
void __cdecl FUN_10078810(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uVar5;
  char *pcVar6;
  float fVar7;
  
  if ((DAT_10317300 & 1) == 0) {
    DAT_10317300 = DAT_10317300 | 1;
    thunk_FUN_10007fe0(&DAT_10317058);
    FUN_100bc490(0x10078920);
  }
  DAT_10317318 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)thunk_FUN_10008500(&DAT_10317058);
  *puVar1 = *(undefined4 *)(param_1 + 8);
  iVar2 = thunk_FUN_10008500(&DAT_10317058);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar2 = thunk_FUN_10008500(&DAT_10317058);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x10);
  iVar2 = (*DAT_102e1568)(0,3);
  fVar4 = (float10)(*DAT_102e1564)(0x3f6b851f,0x3f800000,0x3f4ccccd,0,iVar2 + 0x62);
  fVar7 = (float)fVar4;
  pcVar6 = "weapons/pistol-empty.wav";
  uVar5 = 1;
  uVar3 = thunk_FUN_10008500(&DAT_10317058);
  (**(code **)(DAT_102e15a8 + 4))(DAT_10317318,uVar3,uVar5,pcVar6,fVar7);
  return;
}

/* 10078920  FUN_10078920  (16 bytes)
 * undefined FUN_10078920(void)
 */
void FUN_10078920(void)

{
  return;
}

/* 10078940  FUN_10078940  (1789 bytes)
 * undefined FUN_10078940(int param_1)
 * called by: thunk_FUN_10078940
 */
void __cdecl FUN_10078940(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined3 extraout_var;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  void *pvVar12;
  float10 fVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  char *pcVar16;
  float fVar17;
  undefined4 uVar18;
  int local_150;
  undefined1 local_10c [12];
  undefined1 local_100 [12];
  undefined1 local_f4 [12];
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  if ((DAT_10316efc & 1) == 0) {
    DAT_10316efc = DAT_10316efc | 1;
    thunk_FUN_10007fe0(&DAT_103172e0);
    FUN_100bc490(0x100792c0);
  }
  if ((DAT_10316efc & 2) == 0) {
    DAT_10316efc = DAT_10316efc | 2;
    thunk_FUN_10007fe0(&DAT_10317070);
    FUN_100bc490(0x100792a0);
  }
  if ((DAT_10316efc & 4) == 0) {
    DAT_10316efc = DAT_10316efc | 4;
    thunk_FUN_10007fe0(&DAT_10317178);
    FUN_100bc490(0x10079280);
  }
  if ((DAT_10316efc & 8) == 0) {
    DAT_10316efc = DAT_10316efc | 8;
    thunk_FUN_10007fe0(&DAT_10317280);
    FUN_100bc490(0x10079260);
  }
  if ((DAT_10316efc & 0x10) == 0) {
    DAT_10316efc = DAT_10316efc | 0x10;
    thunk_FUN_10007fe0(&DAT_103170b4);
    FUN_100bc490(0x10079240);
  }
  if ((DAT_10316efc & 0x20) == 0) {
    DAT_10316efc = DAT_10316efc | 0x20;
    thunk_FUN_10007fe0(&DAT_10317150);
    FUN_100bc490(0x10079220);
  }
  if ((DAT_10316efc & 0x40) == 0) {
    DAT_10316efc = DAT_10316efc | 0x40;
    thunk_FUN_10007fe0(&DAT_10317190);
    FUN_100bc490(0x10079200);
  }
  DAT_103172f0 = *(int *)(param_1 + 0x38);
  DAT_10316f14 = thunk_FUN_1001d7b0(*(int *)(param_1 + 0x38));
  DAT_103172a8 = *(int *)(param_1 + 4);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_103172e0);
  *puVar3 = *(undefined4 *)(param_1 + 8);
  iVar4 = thunk_FUN_10008500(&DAT_103172e0);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar4 = thunk_FUN_10008500(&DAT_103172e0);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317070);
  *puVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = thunk_FUN_10008500(&DAT_10317070);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = thunk_FUN_10008500(&DAT_10317070);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317280);
  *puVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = thunk_FUN_10008500(&DAT_10317280);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar4 = thunk_FUN_10008500(&DAT_10317280);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x28);
  uVar5 = thunk_FUN_10008500(&DAT_103170b4);
  uVar6 = thunk_FUN_10008500(&DAT_10317150);
  uVar7 = thunk_FUN_10008500(&DAT_10317190);
  uVar8 = thunk_FUN_10008500(&DAT_10317070);
  (*DAT_102e14b8)(uVar8,uVar7,uVar6,uVar5);
  iVar4 = thunk_FUN_100b5a50();
  if ((iVar4 != 0) || (bVar1 = thunk_FUN_10042e10(DAT_103172a8), CONCAT31(extraout_var,bVar1) == 0))
  {
    iVar4 = (*DAT_102e1568)(0,3);
    fVar13 = (float10)(*DAT_102e1564)(0x3f6b851f,0x3f800000,0x3f4ccccd,0,iVar4 + 0x62);
    fVar17 = (float)fVar13;
    pcVar16 = "weapons/generic_reload.wav";
    uVar6 = 1;
    uVar5 = thunk_FUN_10008500(&DAT_103172e0);
    (**(code **)(DAT_102e15a8 + 4))(DAT_103172a8,uVar5,uVar6,pcVar16,fVar17);
    cVar2 = thunk_FUN_10097610(DAT_103172a8);
    if (cVar2 != '\0') {
      if (DAT_103172f0 == 0x21) {
        local_8 = (**(code **)(DAT_102e15a8 + 0xc))("models/shotgun_shell.mdl");
        for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
          local_c = (*DAT_102e1568)(0xffffffe2,0x1e);
          local_10 = (*DAT_102e1568)(0,0x1e);
          uVar18 = 2;
          uVar5 = local_8;
          uVar6 = thunk_FUN_10008500(&DAT_10317280);
          pfVar9 = thunk_FUN_1000cb20(&DAT_103170b4,local_64,(float)local_10);
          puVar15 = local_70;
          pfVar10 = thunk_FUN_1000cb20(&DAT_10317190,local_4c,10.0);
          puVar14 = local_58;
          pfVar11 = thunk_FUN_1000cb20(&DAT_10317150,local_34,(float)local_c);
          pvVar12 = thunk_FUN_1000d970(&DAT_10317280,local_40,pfVar11);
          pvVar12 = thunk_FUN_1000d970(pvVar12,puVar14,pfVar10);
          pvVar12 = thunk_FUN_1000d970(pvVar12,puVar15,pfVar9);
          uVar7 = thunk_FUN_10008500(pvVar12);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317070);
          pvVar12 = thunk_FUN_10095db0(local_7c,DAT_103172a8,'\0');
          uVar8 = thunk_FUN_10008500(pvVar12);
          thunk_FUN_10095850(uVar8,puVar3,uVar7,uVar6,uVar5,uVar18);
        }
      }
      else if (DAT_103172f0 == 0x1f) {
        local_18 = (**(code **)(DAT_102e15a8 + 0xc))("models/9mm_shell.mdl");
        for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
          local_1c = (*DAT_102e1568)(0xffffffe2,0x1e);
          local_20 = (*DAT_102e1568)(0,0x1e);
          uVar18 = 1;
          uVar5 = local_18;
          uVar6 = thunk_FUN_10008500(&DAT_10317280);
          pfVar9 = thunk_FUN_1000cb20(&DAT_103170b4,local_b8,(float)local_20);
          puVar15 = local_c4;
          pfVar10 = thunk_FUN_1000cb20(&DAT_10317190,local_a0,10.0);
          puVar14 = local_ac;
          pfVar11 = thunk_FUN_1000cb20(&DAT_10317150,local_88,(float)local_1c);
          pvVar12 = thunk_FUN_1000d970(&DAT_10317280,local_94,pfVar11);
          pvVar12 = thunk_FUN_1000d970(pvVar12,puVar14,pfVar10);
          pvVar12 = thunk_FUN_1000d970(pvVar12,puVar15,pfVar9);
          uVar7 = thunk_FUN_10008500(pvVar12);
          puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317070);
          pvVar12 = thunk_FUN_10095db0(local_d0,DAT_103172a8,'\0');
          uVar8 = thunk_FUN_10008500(pvVar12);
          thunk_FUN_10095850(uVar8,puVar3,uVar7,uVar6,uVar5,uVar18);
        }
      }
      else {
        local_28 = 0;
        while( true ) {
          if ((DAT_10316f14[0x360] == '\x04') || (DAT_10316f14[0x360] == '\x05')) {
            local_150 = 2;
          }
          else {
            local_150 = 1;
          }
          if (local_150 <= local_28) break;
          fVar13 = (float10)(*DAT_102e1564)(0xc2700000,0x42700000);
          iVar4 = thunk_FUN_10008500(&DAT_10317178);
          *(float *)(iVar4 + 4) = (float)fVar13;
          fVar13 = (float10)(*DAT_102e1564)(0xc2700000,0x42700000);
          pfVar9 = (float *)thunk_FUN_10008500(&DAT_10317178);
          *pfVar9 = (float)fVar13;
          fVar13 = (float10)(*DAT_102e1564)(0xc2700000,0x42700000);
          iVar4 = thunk_FUN_10008500(&DAT_10317178);
          *(float *)(iVar4 + 8) = (float)fVar13;
          DAT_1031737c = (**(code **)(DAT_102e15a8 + 0xc))("models/generic_clip.mdl");
          thunk_FUN_10008500(&DAT_10317178);
          pfVar9 = thunk_FUN_1000cb20(&DAT_10317150,local_dc,
                                      (float)(int)((-(uint)(local_28 != 0) & 0xffffff88) + 0x3c));
          pvVar12 = thunk_FUN_1000d970(&DAT_10317280,local_e8,pfVar9);
          uVar5 = thunk_FUN_10008500(pvVar12);
          pfVar9 = thunk_FUN_1000cb20(&DAT_10317190,local_100,8.0);
          puVar15 = local_10c;
          pvVar12 = thunk_FUN_10095db0(local_f4,DAT_103172a8,-(local_28 != 0) & 2);
          pvVar12 = thunk_FUN_1000ca70(pvVar12,puVar15,pfVar9);
          uVar6 = thunk_FUN_10008500(pvVar12);
          (**(code **)(DAT_102e15a4 + 0xc0))(uVar6,uVar5);
          local_28 = local_28 + 1;
        }
      }
    }
  }
  return;
}

/* 10079200  FUN_10079200  (16 bytes)
 * undefined FUN_10079200(void)
 */
void FUN_10079200(void)

{
  return;
}

/* 10079220  FUN_10079220  (16 bytes)
 * undefined FUN_10079220(void)
 */
void FUN_10079220(void)

{
  return;
}

/* 10079240  FUN_10079240  (16 bytes)
 * undefined FUN_10079240(void)
 */
void FUN_10079240(void)

{
  return;
}

/* 10079260  FUN_10079260  (16 bytes)
 * undefined FUN_10079260(void)
 */
void FUN_10079260(void)

{
  return;
}

/* 10079280  FUN_10079280  (16 bytes)
 * undefined FUN_10079280(void)
 */
void FUN_10079280(void)

{
  return;
}

/* 100792a0  FUN_100792a0  (16 bytes)
 * undefined FUN_100792a0(void)
 */
void FUN_100792a0(void)

{
  return;
}

/* 100792c0  FUN_100792c0  (16 bytes)
 * undefined FUN_100792c0(void)
 */
void FUN_100792c0(void)

{
  return;
}

/* 100792e0  FUN_100792e0  (1354 bytes)
 * undefined FUN_100792e0(int param_1)
 * called by: thunk_FUN_100792e0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100792e0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_d4 [4];
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  char *pcStack_c0;
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_10317249 & 1) == 0) {
    DAT_10317249 = DAT_10317249 | 1;
    thunk_FUN_10007fe0(&DAT_10316e5c);
    FUN_100bc490(0x10079a80);
  }
  if ((DAT_10317249 & 2) == 0) {
    DAT_10317249 = DAT_10317249 | 2;
    thunk_FUN_10007fe0(&DAT_10317088);
    FUN_100bc490(0x10079a60);
  }
  if ((DAT_10317249 & 4) == 0) {
    DAT_10317249 = DAT_10317249 | 4;
    thunk_FUN_10007fe0(&DAT_10316f78);
    FUN_100bc490(0x10079a40);
  }
  if ((DAT_10317249 & 8) == 0) {
    DAT_10317249 = DAT_10317249 | 8;
    thunk_FUN_10007fe0(&DAT_103172b8);
    FUN_100bc490(0x10079a20);
  }
  if ((DAT_10317249 & 0x10) == 0) {
    DAT_10317249 = DAT_10317249 | 0x10;
    thunk_FUN_10007fe0(&DAT_103171ec);
    FUN_100bc490(0x10079a00);
  }
  if ((DAT_10317249 & 0x20) == 0) {
    DAT_10317249 = DAT_10317249 | 0x20;
    thunk_FUN_10007fe0(&DAT_10316e78);
    FUN_100bc490(0x100799e0);
  }
  if ((DAT_10317249 & 0x40) == 0) {
    DAT_10317249 = DAT_10317249 | 0x40;
    thunk_FUN_10007fe0(&DAT_10316e88);
    FUN_100bc490(0x100799c0);
  }
  if ((DAT_10317249 & 0x80) == 0) {
    DAT_10317249 = DAT_10317249 | 0x80;
    thunk_FUN_10007fe0(&DAT_103173e8);
    FUN_100bc490(0x100799a0);
  }
  if ((DAT_10316e84 & 1) == 0) {
    DAT_10316e84 = DAT_10316e84 | 1;
    thunk_FUN_1000c160(0x10317398);
    FUN_100bc490(0x10079980);
  }
  DAT_10316f3c = *(undefined4 *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_10316e5c);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(&DAT_10316e5c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(&DAT_10316e5c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_10317088);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(&DAT_10317088);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(&DAT_10317088);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_10316f78);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = thunk_FUN_10008500(&DAT_10316f78);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = thunk_FUN_10008500(&DAT_10316f78);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x28);
  thunk_FUN_10008500(&DAT_103172b8);
  thunk_FUN_10008500(&DAT_103171ec);
  thunk_FUN_10008500(&DAT_10316e78);
  thunk_FUN_10008500(&DAT_10317088);
  pcStack_c0 = (char *)0x1007959f;
  (*DAT_102e14b8)();
  DAT_10317304 = *(int *)(param_1 + 0x38);
  pfVar4 = (float *)thunk_FUN_10008500(&DAT_10316e5c);
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_10316e88);
  thunk_FUN_10042e50(param_1,pfVar5,pfVar4);
  if (DAT_10317304 == 3) {
    pfVar4 = thunk_FUN_1000cb20(&DAT_10316e78,local_10,-56.0);
    puVar2 = thunk_FUN_1000d970(&DAT_10316e88,local_1c,pfVar4);
    _DAT_103173e8 = *puVar2;
    _DAT_103173ec = puVar2[1];
    _DAT_103173f0 = puVar2[2];
  }
  else if (DAT_10317304 == 2) {
    pfVar4 = thunk_FUN_1000cb20(&DAT_10316e78,local_28,48.0);
    puVar2 = thunk_FUN_1000d970(&DAT_10316e88,local_34,pfVar4);
    _DAT_103173e8 = *puVar2;
    _DAT_103173ec = puVar2[1];
    _DAT_103173f0 = puVar2[2];
  }
  else {
    pfVar4 = thunk_FUN_1000cb20(&DAT_10316e78,local_40,38.0);
    puVar2 = thunk_FUN_1000d970(&DAT_10316e88,local_4c,pfVar4);
    _DAT_103173e8 = *puVar2;
    _DAT_103173ec = puVar2[1];
    _DAT_103173f0 = puVar2[2];
  }
  (*DAT_102e1568)();
  pcStack_c0 = (char *)0x3f6b851f;
  uStack_c4 = 0x100796c5;
  (*DAT_102e1564)();
  pcStack_c0 = "player/closecombat.wav";
  uStack_c4 = 1;
  uStack_c8 = 0x100796dc;
  uStack_c8 = thunk_FUN_10008500(&DAT_10316e5c);
  uStack_d0 = 0x100796ec;
  (**(code **)(DAT_102e15a8 + 4))();
  (**(code **)(DAT_102e15a8 + 0x28))();
  (**(code **)(DAT_102e15a8 + 0x2c))();
  (**(code **)(DAT_102e15a8 + 0x34))();
  (**(code **)(DAT_102e15a8 + 0x38))();
  thunk_FUN_10008500(&DAT_103173e8);
  pcStack_c0 = (char *)0x10079746;
  pcStack_c0 = (char *)thunk_FUN_10008500(&DAT_10316e88);
  uStack_c4 = 0x1007974f;
  (**(code **)(DAT_102e15a8 + 0x3c))();
  if (_DAT_103173a8 == 1.0) goto LAB_1007981b;
  uVar6 = thunk_FUN_10008500(&DAT_103173e8);
  uVar7 = thunk_FUN_10008500(&DAT_10316e88);
  pcStack_c0 = (char *)0x1007978f;
  cVar1 = thunk_FUN_1007d250(DAT_10316f3c,0x10317398,uVar7,uVar6);
  if (cVar1 != 'D') {
    if (cVar1 == 'F') goto LAB_1007981b;
    if (cVar1 != 'W') {
      uStack_d0 = 0x10079804;
      thunk_FUN_10015ce0(&uStack_c8,(undefined4 *)&DAT_103173b8);
      thunk_FUN_10015ce0(auStack_d4,(undefined4 *)&DAT_103173ac);
      thunk_FUN_1007e550();
      goto LAB_1007981b;
    }
  }
  uStack_d0 = 0x100797cf;
  thunk_FUN_10015ce0(&uStack_c8,(undefined4 *)&DAT_103173b8);
  thunk_FUN_10015ce0(auStack_d4,(undefined4 *)&DAT_103173ac);
  thunk_FUN_1007e550();
LAB_1007981b:
  (**(code **)(DAT_102e15a8 + 0x30))();
  return;
}

/* 10079980  FUN_10079980  (16 bytes)
 * undefined FUN_10079980(void)
 */
void FUN_10079980(void)

{
  return;
}

/* 100799a0  FUN_100799a0  (16 bytes)
 * undefined FUN_100799a0(void)
 */
void FUN_100799a0(void)

{
  return;
}

/* 100799c0  FUN_100799c0  (16 bytes)
 * undefined FUN_100799c0(void)
 */
void FUN_100799c0(void)

{
  return;
}

/* 100799e0  FUN_100799e0  (16 bytes)
 * undefined FUN_100799e0(void)
 */
void FUN_100799e0(void)

{
  return;
}

/* 10079a00  FUN_10079a00  (16 bytes)
 * undefined FUN_10079a00(void)
 */
void FUN_10079a00(void)

{
  return;
}

/* 10079a20  FUN_10079a20  (16 bytes)
 * undefined FUN_10079a20(void)
 */
void FUN_10079a20(void)

{
  return;
}

/* 10079a40  FUN_10079a40  (16 bytes)
 * undefined FUN_10079a40(void)
 */
void FUN_10079a40(void)

{
  return;
}

/* 10079a60  FUN_10079a60  (16 bytes)
 * undefined FUN_10079a60(void)
 */
void FUN_10079a60(void)

{
  return;
}

/* 10079a80  FUN_10079a80  (16 bytes)
 * undefined FUN_10079a80(void)
 */
void FUN_10079a80(void)

{
  return;
}

/* 10079aa0  FUN_10079aa0  (1354 bytes)
 * undefined FUN_10079aa0(int param_1)
 * called by: thunk_FUN_10079aa0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10079aa0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_d4 [4];
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  char *pcStack_c0;
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_103172a4 & 1) == 0) {
    DAT_103172a4 = DAT_103172a4 | 1;
    thunk_FUN_10007fe0(&DAT_1031732c);
    FUN_100bc490(0x1007a240);
  }
  if ((DAT_103172a4 & 2) == 0) {
    DAT_103172a4 = DAT_103172a4 | 2;
    thunk_FUN_10007fe0(&DAT_10317338);
    FUN_100bc490(0x1007a220);
  }
  if ((DAT_103172a4 & 4) == 0) {
    DAT_103172a4 = DAT_103172a4 | 4;
    thunk_FUN_10007fe0(&DAT_1031719c);
    FUN_100bc490(0x1007a200);
  }
  if ((DAT_103172a4 & 8) == 0) {
    DAT_103172a4 = DAT_103172a4 | 8;
    thunk_FUN_10007fe0(&DAT_1031720c);
    FUN_100bc490(0x1007a1e0);
  }
  if ((DAT_103172a4 & 0x10) == 0) {
    DAT_103172a4 = DAT_103172a4 | 0x10;
    thunk_FUN_10007fe0(&DAT_103170f0);
    FUN_100bc490(0x1007a1c0);
  }
  if ((DAT_103172a4 & 0x20) == 0) {
    DAT_103172a4 = DAT_103172a4 | 0x20;
    thunk_FUN_10007fe0(&DAT_10316f1c);
    FUN_100bc490(0x1007a1a0);
  }
  if ((DAT_103172a4 & 0x40) == 0) {
    DAT_103172a4 = DAT_103172a4 | 0x40;
    thunk_FUN_10007fe0(&DAT_10317064);
    FUN_100bc490(0x1007a180);
  }
  if ((DAT_103172a4 & 0x80) == 0) {
    DAT_103172a4 = DAT_103172a4 | 0x80;
    thunk_FUN_10007fe0(&DAT_10317298);
    FUN_100bc490(0x1007a160);
  }
  if ((DAT_10317174 & 1) == 0) {
    DAT_10317174 = DAT_10317174 | 1;
    thunk_FUN_1000c160(0x10316f90);
    FUN_100bc490(0x1007a140);
  }
  DAT_103172b0 = *(undefined4 *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_1031732c);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(&DAT_1031732c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(&DAT_1031732c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_10317338);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(&DAT_10317338);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(&DAT_10317338);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_1031719c);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = thunk_FUN_10008500(&DAT_1031719c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = thunk_FUN_10008500(&DAT_1031719c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x28);
  thunk_FUN_10008500(&DAT_1031720c);
  thunk_FUN_10008500(&DAT_103170f0);
  thunk_FUN_10008500(&DAT_10316f1c);
  thunk_FUN_10008500(&DAT_10317338);
  pcStack_c0 = (char *)0x10079d5f;
  (*DAT_102e14b8)();
  DAT_103172ac = *(int *)(param_1 + 0x38);
  pfVar4 = (float *)thunk_FUN_10008500(&DAT_1031732c);
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_10317064);
  thunk_FUN_10042e50(param_1,pfVar5,pfVar4);
  if (DAT_103172ac == 3) {
    pfVar4 = thunk_FUN_1000cb20(&DAT_10316f1c,local_10,-56.0);
    puVar2 = thunk_FUN_1000d970(&DAT_10317064,local_1c,pfVar4);
    _DAT_10317298 = *puVar2;
    _DAT_1031729c = puVar2[1];
    _DAT_103172a0 = puVar2[2];
  }
  else if (DAT_103172ac == 2) {
    pfVar4 = thunk_FUN_1000cb20(&DAT_10316f1c,local_28,48.0);
    puVar2 = thunk_FUN_1000d970(&DAT_10317064,local_34,pfVar4);
    _DAT_10317298 = *puVar2;
    _DAT_1031729c = puVar2[1];
    _DAT_103172a0 = puVar2[2];
  }
  else {
    pfVar4 = thunk_FUN_1000cb20(&DAT_10316f1c,local_40,38.0);
    puVar2 = thunk_FUN_1000d970(&DAT_10317064,local_4c,pfVar4);
    _DAT_10317298 = *puVar2;
    _DAT_1031729c = puVar2[1];
    _DAT_103172a0 = puVar2[2];
  }
  (*DAT_102e1568)();
  pcStack_c0 = (char *)0x3f6b851f;
  uStack_c4 = 0x10079e85;
  (*DAT_102e1564)();
  pcStack_c0 = "player/closecombat.wav";
  uStack_c4 = 1;
  uStack_c8 = 0x10079e9c;
  uStack_c8 = thunk_FUN_10008500(&DAT_1031732c);
  uStack_d0 = 0x10079eac;
  (**(code **)(DAT_102e15a8 + 4))();
  (**(code **)(DAT_102e15a8 + 0x28))();
  (**(code **)(DAT_102e15a8 + 0x2c))();
  (**(code **)(DAT_102e15a8 + 0x34))();
  (**(code **)(DAT_102e15a8 + 0x38))();
  thunk_FUN_10008500(&DAT_10317298);
  pcStack_c0 = (char *)0x10079f06;
  pcStack_c0 = (char *)thunk_FUN_10008500(&DAT_10317064);
  uStack_c4 = 0x10079f0f;
  (**(code **)(DAT_102e15a8 + 0x3c))();
  if (_DAT_10316fa0 == 1.0) goto LAB_10079fdb;
  uVar6 = thunk_FUN_10008500(&DAT_10317298);
  uVar7 = thunk_FUN_10008500(&DAT_10317064);
  pcStack_c0 = (char *)0x10079f4f;
  cVar1 = thunk_FUN_1007d250(DAT_103172b0,0x10316f90,uVar7,uVar6);
  if (cVar1 != 'D') {
    if (cVar1 == 'F') goto LAB_10079fdb;
    if (cVar1 != 'W') {
      uStack_d0 = 0x10079fc4;
      thunk_FUN_10015ce0(&uStack_c8,(undefined4 *)&DAT_10316fb0);
      thunk_FUN_10015ce0(auStack_d4,(undefined4 *)&DAT_10316fa4);
      thunk_FUN_1007e550();
      goto LAB_10079fdb;
    }
  }
  uStack_d0 = 0x10079f8f;
  thunk_FUN_10015ce0(&uStack_c8,(undefined4 *)&DAT_10316fb0);
  thunk_FUN_10015ce0(auStack_d4,(undefined4 *)&DAT_10316fa4);
  thunk_FUN_1007e550();
LAB_10079fdb:
  (**(code **)(DAT_102e15a8 + 0x30))();
  return;
}

/* 1007a140  FUN_1007a140  (16 bytes)
 * undefined FUN_1007a140(void)
 */
void FUN_1007a140(void)

{
  return;
}

/* 1007a160  FUN_1007a160  (16 bytes)
 * undefined FUN_1007a160(void)
 */
void FUN_1007a160(void)

{
  return;
}

/* 1007a180  FUN_1007a180  (16 bytes)
 * undefined FUN_1007a180(void)
 */
void FUN_1007a180(void)

{
  return;
}

/* 1007a1a0  FUN_1007a1a0  (16 bytes)
 * undefined FUN_1007a1a0(void)
 */
void FUN_1007a1a0(void)

{
  return;
}

/* 1007a1c0  FUN_1007a1c0  (16 bytes)
 * undefined FUN_1007a1c0(void)
 */
void FUN_1007a1c0(void)

{
  return;
}

/* 1007a1e0  FUN_1007a1e0  (16 bytes)
 * undefined FUN_1007a1e0(void)
 */
void FUN_1007a1e0(void)

{
  return;
}

/* 1007a200  FUN_1007a200  (16 bytes)
 * undefined FUN_1007a200(void)
 */
void FUN_1007a200(void)

{
  return;
}

/* 1007a220  FUN_1007a220  (16 bytes)
 * undefined FUN_1007a220(void)
 */
void FUN_1007a220(void)

{
  return;
}

/* 1007a240  FUN_1007a240  (16 bytes)
 * undefined FUN_1007a240(void)
 */
void FUN_1007a240(void)

{
  return;
}

/* 1007a260  FUN_1007a260  (1487 bytes)
 * undefined FUN_1007a260(int param_1)
 * called by: thunk_FUN_1007a260
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1007a260(int param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined3 extraout_var;
  undefined1 auStack_b8 [4];
  undefined4 uStack_b4;
  undefined1 auStack_ac [4];
  undefined4 uStack_a8;
  char *pcStack_a0;
  int iStack_9c;
  undefined4 uStack_94;
  char *pcStack_90;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_10317218 & 1) == 0) {
    DAT_10317218 = DAT_10317218 | 1;
    thunk_FUN_10007fe0(&DAT_10317364);
    FUN_100bc490(0x1007ab30);
  }
  if ((DAT_10317218 & 2) == 0) {
    DAT_10317218 = DAT_10317218 | 2;
    thunk_FUN_10007fe0(&DAT_103171fc);
    FUN_100bc490(0x1007ab10);
  }
  if ((DAT_10317218 & 4) == 0) {
    DAT_10317218 = DAT_10317218 | 4;
    thunk_FUN_10007fe0(&DAT_1031721c);
    FUN_100bc490(0x1007aaf0);
  }
  if ((DAT_10317218 & 8) == 0) {
    DAT_10317218 = DAT_10317218 | 8;
    thunk_FUN_10007fe0(&DAT_103170d0);
    FUN_100bc490(0x1007aad0);
  }
  if ((DAT_10317218 & 0x10) == 0) {
    DAT_10317218 = DAT_10317218 | 0x10;
    thunk_FUN_10007fe0(&DAT_10316fd4);
    FUN_100bc490(0x1007aab0);
  }
  if ((DAT_10317218 & 0x20) == 0) {
    DAT_10317218 = DAT_10317218 | 0x20;
    thunk_FUN_10007fe0(&DAT_103171d4);
    FUN_100bc490(0x1007aa90);
  }
  if ((DAT_10317218 & 0x40) == 0) {
    DAT_10317218 = DAT_10317218 | 0x40;
    thunk_FUN_10007fe0(&DAT_10316fe0);
    FUN_100bc490(0x1007aa70);
  }
  if ((DAT_10317218 & 0x80) == 0) {
    DAT_10317218 = DAT_10317218 | 0x80;
    thunk_FUN_10007fe0(&DAT_10316df8);
    FUN_100bc490(0x1007aa50);
  }
  if ((DAT_10317054 & 1) == 0) {
    DAT_10317054 = DAT_10317054 | 1;
    thunk_FUN_1000c160(0x10316e18);
    FUN_100bc490(0x1007aa30);
  }
  DAT_103173e0 = *(int *)(param_1 + 4);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10317364);
  *puVar3 = *(undefined4 *)(param_1 + 8);
  iVar4 = thunk_FUN_10008500(&DAT_10317364);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar4 = thunk_FUN_10008500(&DAT_10317364);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_103171fc);
  *puVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = thunk_FUN_10008500(&DAT_103171fc);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = thunk_FUN_10008500(&DAT_103171fc);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_1031721c);
  *puVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = thunk_FUN_10008500(&DAT_1031721c);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar4 = thunk_FUN_10008500(&DAT_1031721c);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x28);
  thunk_FUN_10008500(&DAT_103170d0);
  thunk_FUN_10008500(&DAT_10316fd4);
  thunk_FUN_10008500(&DAT_103171d4);
  thunk_FUN_10008500(&DAT_103171fc);
  pcStack_90 = (char *)0x1007a51c;
  (*DAT_102e14b8)();
  DAT_10317104 = thunk_FUN_1001d7b0(*(int *)(param_1 + 0x38));
  DAT_10317380 = DAT_10317104 + 0x26a;
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_10317364);
  pfVar6 = (float *)thunk_FUN_10008500(&DAT_10316fe0);
  thunk_FUN_10042e50(param_1,pfVar6,pfVar5);
  pfVar5 = thunk_FUN_1000cb20(&DAT_103171d4,local_10,38.0);
  puVar3 = thunk_FUN_1000d970(&DAT_10316fe0,local_1c,pfVar5);
  _DAT_10316df8 = *puVar3;
  _DAT_10316dfc = puVar3[1];
  _DAT_10316e00 = puVar3[2];
  (**(code **)(DAT_102e15a8 + 0x28))();
  (**(code **)(DAT_102e15a8 + 0x2c))();
  (**(code **)(DAT_102e15a8 + 0x34))();
  (**(code **)(DAT_102e15a8 + 0x38))();
  thunk_FUN_10008500(&DAT_10316df8);
  pcStack_90 = (char *)0x1007a5f7;
  pcStack_90 = (char *)thunk_FUN_10008500(&DAT_10316fe0);
  uStack_94 = 0x1007a600;
  (**(code **)(DAT_102e15a8 + 0x3c))();
  DAT_103170a0 = *(undefined4 *)(param_1 + 0x3c);
  if (_DAT_10316e28 == 1.0) {
    (*DAT_102e1568)();
    pcStack_90 = (char *)0x3f6b851f;
    uStack_94 = 0x1007a772;
    (*DAT_102e1564)();
    pcStack_90 = "weapons/knife/knife_miss.wav";
    uStack_94 = 1;
    thunk_FUN_10008500(&DAT_10317364);
    iStack_9c = DAT_103173e0;
    pcStack_a0 = (char *)0x1007a799;
    (**(code **)(DAT_102e15a8 + 4))();
  }
  else {
    uVar7 = thunk_FUN_10008500(&DAT_10316df8);
    uVar8 = thunk_FUN_10008500(&DAT_10316fe0);
    pcStack_90 = (char *)0x1007a64c;
    uVar1 = thunk_FUN_1007d250(DAT_103173e0,0x10316e18,uVar8,uVar7);
    switch(uVar1) {
    case 0:
      break;
    default:
      iStack_9c = 0x1007a69e;
      thunk_FUN_10015ce0(&uStack_94,(undefined4 *)&DAT_10316e38);
      uStack_a8 = 0x1007a6ad;
      thunk_FUN_10015ce0(&pcStack_a0,(undefined4 *)&DAT_10316e2c);
      thunk_FUN_1007f3f0();
      pcStack_90 = (char *)0x10;
      uStack_94 = 0x40000000;
      iStack_9c = 5;
      pcStack_a0 = "sprites/scintille2.spr";
      uStack_b4 = 0x1007a6df;
      thunk_FUN_10015ce0(auStack_ac,(undefined4 *)&DAT_10316e38);
      thunk_FUN_10015ce0(auStack_b8,(undefined4 *)&DAT_10316e2c);
      thunk_FUN_1007ef20();
      (*DAT_102e1568)();
      pcStack_90 = (char *)0x3f6b851f;
      uStack_94 = 0x1007a71e;
      (*DAT_102e1564)();
      pcStack_90 = "weapons/knife/knife_hit.wav";
      uStack_94 = 1;
      thunk_FUN_10008500(&DAT_10317364);
      iStack_9c = DAT_103173e0;
      pcStack_a0 = (char *)0x1007a745;
      (**(code **)(DAT_102e15a8 + 4))();
      break;
    case 0x44:
    case 0x57:
      break;
    case 0x46:
      DAT_103170a0 = 1;
    }
  }
  bVar2 = thunk_FUN_10042e10(DAT_103173e0);
  if ((CONCAT31(extraout_var,bVar2) != 0) && (iVar4 = thunk_FUN_100b5a50(), iVar4 == 0)) {
    iVar4 = (*DAT_102e1568)();
    if (iVar4 == 0) {
      DAT_10316f0c = 0xf;
    }
    else if (iVar4 == 1) {
      DAT_10316f0c = 0x10;
    }
    else if (iVar4 == 2) {
      DAT_10316f0c = 0x11;
    }
    (**(code **)(DAT_102e15a8 + 0x40))();
  }
  (**(code **)(DAT_102e15a8 + 0x30))();
  return;
}

/* 1007aa30  FUN_1007aa30  (16 bytes)
 * undefined FUN_1007aa30(void)
 */
void FUN_1007aa30(void)

{
  return;
}

/* 1007aa50  FUN_1007aa50  (16 bytes)
 * undefined FUN_1007aa50(void)
 */
void FUN_1007aa50(void)

{
  return;
}

/* 1007aa70  FUN_1007aa70  (16 bytes)
 * undefined FUN_1007aa70(void)
 */
void FUN_1007aa70(void)

{
  return;
}

/* 1007aa90  FUN_1007aa90  (16 bytes)
 * undefined FUN_1007aa90(void)
 */
void FUN_1007aa90(void)

{
  return;
}

/* 1007aab0  FUN_1007aab0  (16 bytes)
 * undefined FUN_1007aab0(void)
 */
void FUN_1007aab0(void)

{
  return;
}

/* 1007aad0  FUN_1007aad0  (16 bytes)
 * undefined FUN_1007aad0(void)
 */
void FUN_1007aad0(void)

{
  return;
}

/* 1007aaf0  FUN_1007aaf0  (16 bytes)
 * undefined FUN_1007aaf0(void)
 */
void FUN_1007aaf0(void)

{
  return;
}

/* 1007ab10  FUN_1007ab10  (16 bytes)
 * undefined FUN_1007ab10(void)
 */
void FUN_1007ab10(void)

{
  return;
}

/* 1007ab30  FUN_1007ab30  (16 bytes)
 * undefined FUN_1007ab30(void)
 */
void FUN_1007ab30(void)

{
  return;
}

/* 1007ab50  FUN_1007ab50  (1591 bytes)
 * undefined FUN_1007ab50(int param_1)
 * called by: thunk_FUN_1007ab50
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1007ab50(int param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined3 extraout_var;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined1 auStack_c4 [4];
  undefined4 uStack_c0;
  char *pcStack_b8;
  int iStack_b4;
  undefined4 uStack_ac;
  char *pcStack_a8;
  char *local_88;
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_10317308 & 1) == 0) {
    DAT_10317308 = DAT_10317308 | 1;
    thunk_FUN_10007fe0(&DAT_103171c8);
    FUN_100bc490(0x1007b4a0);
  }
  if ((DAT_10317308 & 2) == 0) {
    DAT_10317308 = DAT_10317308 | 2;
    thunk_FUN_10007fe0(&DAT_10316f84);
    FUN_100bc490(0x1007b480);
  }
  if ((DAT_10317308 & 4) == 0) {
    DAT_10317308 = DAT_10317308 | 4;
    thunk_FUN_10007fe0(&DAT_103170c4);
    FUN_100bc490(0x1007b460);
  }
  if ((DAT_10317308 & 8) == 0) {
    DAT_10317308 = DAT_10317308 | 8;
    thunk_FUN_10007fe0(&DAT_10316f68);
    FUN_100bc490(0x1007b440);
  }
  if ((DAT_10317308 & 0x10) == 0) {
    DAT_10317308 = DAT_10317308 | 0x10;
    thunk_FUN_10007fe0(&DAT_103172d0);
    FUN_100bc490(0x1007b420);
  }
  if ((DAT_10317308 & 0x20) == 0) {
    DAT_10317308 = DAT_10317308 | 0x20;
    thunk_FUN_10007fe0(&DAT_1031730c);
    FUN_100bc490(0x1007b400);
  }
  if ((DAT_10317308 & 0x40) == 0) {
    DAT_10317308 = DAT_10317308 | 0x40;
    thunk_FUN_10007fe0(&DAT_10317184);
    FUN_100bc490(0x1007b3e0);
  }
  if ((DAT_10317308 & 0x80) == 0) {
    DAT_10317308 = DAT_10317308 | 0x80;
    thunk_FUN_10007fe0(&DAT_10316ee4);
    FUN_100bc490(0x1007b3c0);
  }
  if ((DAT_10317209 & 1) == 0) {
    DAT_10317209 = DAT_10317209 | 1;
    thunk_FUN_1000c160(0x10316e98);
    FUN_100bc490(0x1007b3a0);
  }
  DAT_10316f60 = *(int *)(param_1 + 4);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_103171c8);
  *puVar3 = *(undefined4 *)(param_1 + 8);
  iVar4 = thunk_FUN_10008500(&DAT_103171c8);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar4 = thunk_FUN_10008500(&DAT_103171c8);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10316f84);
  *puVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = thunk_FUN_10008500(&DAT_10316f84);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = thunk_FUN_10008500(&DAT_10316f84);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_103170c4);
  *puVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = thunk_FUN_10008500(&DAT_103170c4);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar4 = thunk_FUN_10008500(&DAT_103170c4);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x28);
  thunk_FUN_10008500(&DAT_10316f68);
  thunk_FUN_10008500(&DAT_103172d0);
  thunk_FUN_10008500(&DAT_1031730c);
  thunk_FUN_10008500(&DAT_10316f84);
  pcStack_a8 = (char *)0x1007ae0f;
  (*DAT_102e14b8)();
  DAT_10317238 = thunk_FUN_1001d7b0(0x22);
  DAT_10317344 = DAT_10317238 + 0x26a;
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_103171c8);
  pfVar6 = (float *)thunk_FUN_10008500(&DAT_10317184);
  thunk_FUN_10042e50(param_1,pfVar6,pfVar5);
  DAT_10316e10 = *(int *)(param_1 + 0x38);
  if (DAT_10316e10 == 0xf) {
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031730c,local_10,54.0);
    puVar3 = thunk_FUN_1000ca70(&DAT_10317184,local_1c,pfVar5);
    _DAT_10316ee4 = *puVar3;
    _DAT_10316ee8 = puVar3[1];
    _DAT_10316eec = puVar3[2];
  }
  else {
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031730c,local_28,48.0);
    puVar3 = thunk_FUN_1000d970(&DAT_10317184,local_34,pfVar5);
    _DAT_10316ee4 = *puVar3;
    _DAT_10316ee8 = puVar3[1];
    _DAT_10316eec = puVar3[2];
  }
  (**(code **)(DAT_102e15a8 + 0x28))();
  (**(code **)(DAT_102e15a8 + 0x2c))();
  (**(code **)(DAT_102e15a8 + 0x34))();
  (**(code **)(DAT_102e15a8 + 0x38))();
  thunk_FUN_10008500(&DAT_10316ee4);
  pcStack_a8 = (char *)0x1007af38;
  pcStack_a8 = (char *)thunk_FUN_10008500(&DAT_10317184);
  uStack_ac = 0x1007af41;
  (**(code **)(DAT_102e15a8 + 0x3c))();
  DAT_103171ac = *(undefined4 *)(param_1 + 0x3c);
  if (_DAT_10316ea8 == 1.0) {
    iVar4 = (*DAT_102e1568)();
    if (iVar4 == 0) {
      local_88 = "weapons/katana/miss1.wav";
    }
    else {
      local_88 = "weapons/katana/miss.wav";
    }
    (*DAT_102e1568)();
    pcStack_a8 = (char *)0x3f6b851f;
    uStack_ac = 0x1007b10d;
    (*DAT_102e1564)();
    pcStack_a8 = local_88;
    uStack_ac = 1;
    thunk_FUN_10008500(&DAT_103171c8);
    iStack_b4 = DAT_10316f60;
    pcStack_b8 = (char *)0x1007b137;
    (**(code **)(DAT_102e15a8 + 4))();
  }
  else {
    uVar7 = thunk_FUN_10008500(&DAT_10316ee4);
    uVar8 = thunk_FUN_10008500(&DAT_10317184);
    pcStack_a8 = (char *)0x1007af8d;
    uVar1 = thunk_FUN_1007d250(DAT_10316f60,0x10316e98,uVar8,uVar7);
    switch(uVar1) {
    case 0:
      break;
    default:
      iStack_b4 = 0x1007afe8;
      thunk_FUN_10015ce0(&uStack_ac,(undefined4 *)&DAT_10316eb8);
      uStack_c0 = 0x1007aff7;
      thunk_FUN_10015ce0(&pcStack_b8,(undefined4 *)&DAT_10316eac);
      thunk_FUN_1007f3f0();
      pcStack_a8 = (char *)0x10;
      uStack_ac = 0x40000000;
      iStack_b4 = 5;
      pcStack_b8 = "sprites/scintille2.spr";
      uStack_cc = 0x1007b029;
      thunk_FUN_10015ce0(auStack_c4,(undefined4 *)&DAT_10316eb8);
      thunk_FUN_10015ce0(auStack_d0,(undefined4 *)&DAT_10316eac);
      thunk_FUN_1007ef20();
      iVar4 = (*DAT_102e1568)();
      if (iVar4 == 0) {
        local_88 = "weapons/katana/hit1.wav";
      }
      else {
        local_88 = "weapons/katana/hit.wav";
      }
      (*DAT_102e1568)();
      pcStack_a8 = (char *)0x3f6b851f;
      uStack_ac = 0x1007b08f;
      (*DAT_102e1564)();
      pcStack_a8 = local_88;
      uStack_ac = 1;
      thunk_FUN_10008500(&DAT_103171c8);
      iStack_b4 = DAT_10316f60;
      pcStack_b8 = (char *)0x1007b0b9;
      (**(code **)(DAT_102e15a8 + 4))();
      break;
    case 0x44:
    case 0x57:
      break;
    case 0x46:
      DAT_103171ac = 1;
    }
  }
  bVar2 = thunk_FUN_10042e10(DAT_10316f60);
  if ((CONCAT31(extraout_var,bVar2) != 0) && (iVar4 = thunk_FUN_100b5a50(), iVar4 == 0)) {
    (**(code **)(DAT_102e15a8 + 0x40))();
  }
  (**(code **)(DAT_102e15a8 + 0x30))();
  return;
}

/* 1007b3a0  FUN_1007b3a0  (16 bytes)
 * undefined FUN_1007b3a0(void)
 */
void FUN_1007b3a0(void)

{
  return;
}

/* 1007b3c0  FUN_1007b3c0  (16 bytes)
 * undefined FUN_1007b3c0(void)
 */
void FUN_1007b3c0(void)

{
  return;
}

/* 1007b3e0  FUN_1007b3e0  (16 bytes)
 * undefined FUN_1007b3e0(void)
 */
void FUN_1007b3e0(void)

{
  return;
}

/* 1007b400  FUN_1007b400  (16 bytes)
 * undefined FUN_1007b400(void)
 */
void FUN_1007b400(void)

{
  return;
}

/* 1007b420  FUN_1007b420  (16 bytes)
 * undefined FUN_1007b420(void)
 */
void FUN_1007b420(void)

{
  return;
}

/* 1007b440  FUN_1007b440  (16 bytes)
 * undefined FUN_1007b440(void)
 */
void FUN_1007b440(void)

{
  return;
}

/* 1007b460  FUN_1007b460  (16 bytes)
 * undefined FUN_1007b460(void)
 */
void FUN_1007b460(void)

{
  return;
}

/* 1007b480  FUN_1007b480  (16 bytes)
 * undefined FUN_1007b480(void)
 */
void FUN_1007b480(void)

{
  return;
}

/* 1007b4a0  FUN_1007b4a0  (16 bytes)
 * undefined FUN_1007b4a0(void)
 */
void FUN_1007b4a0(void)

{
  return;
}

/* 1007b4c0  FUN_1007b4c0  (554 bytes)
 * int FUN_1007b4c0(int type, cl_entity_t * ent, char * modelname)
 */
int __cdecl FUN_1007b4c0(int type,cl_entity_t *ent,char *modelname)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int local_48;
  
  if (type == 1) {
    uVar2 = thunk_FUN_100973d0((int)ent);
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    uVar2 = thunk_FUN_10096f60((int)ent);
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    if ((-1 < ent->index) && (ent->index < 0x22)) {
      if (*(int *)(&DAT_1031f8f8 + ent->index * 4) != 0) {
        return 0;
      }
      (&DAT_1031ab14)[ent->index] = 1;
      (&DAT_102e120d)[ent->index] = 1;
    }
  }
  else {
    if (((ent->curstate).iuser4 & 1U) == 0) {
      if (((ent->curstate).iuser4 & 4U) == 0) {
        if (((ent->curstate).iuser4 & 2U) != 0) {
          uVar1 = thunk_FUN_10097580(ent->origin,0x400);
          if ((uVar1 & 0xff) != 0) {
            return 0;
          }
          uVar2 = thunk_FUN_100968f0(ent->origin);
          if ((uVar2 & 0xff) == 0) {
            return 0;
          }
        }
      }
      else {
        uVar1 = thunk_FUN_10097580(ent->origin,0x100);
        if ((uVar1 & 0xff) != 0) {
          return 0;
        }
        uVar2 = thunk_FUN_100968f0(ent->origin);
        if ((uVar2 & 0xff) == 0) {
          return 0;
        }
      }
    }
    else {
      uVar1 = thunk_FUN_10097580(ent->origin,0x250);
      if ((uVar1 & 0xff) != 0) {
        return 0;
      }
      uVar2 = thunk_FUN_100968f0(ent->origin);
      if ((uVar2 & 0xff) == 0) {
        return 0;
      }
    }
    if (((ent->curstate).iuser4 & 8U) != 0) {
      if (DAT_1031b819 == '\0') {
        local_48 = thunk_FUN_100967d0(ent->origin);
      }
      else {
        local_48 = 0;
      }
      (ent->curstate).body = local_48;
    }
  }
  iVar3 = (*DAT_102e15b8)();
  if ((iVar3 == 0) ||
     (((thunk_FUN_1004de20(&DAT_102daaa0,type,&ent->index), DAT_102daab4 != 4 && (DAT_102daab8 != 2)
       ) || (ent->index != DAT_102db3f0)))) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

/* 1007b780  FUN_1007b780  (122 bytes)
 * void FUN_1007b780(mstudioevent_s * event, cl_entity_t * entity)
 */
void __cdecl FUN_1007b780(mstudioevent_s *event,cl_entity_t *entity)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (event->event == 0x138a) {
    uVar3 = 100;
    uVar2 = 0xffffff9c;
    uVar1 = FUN_100c0d30((byte_conflict *)event->options);
    (**(code **)(DAT_102e15a4 + 0x84))(entity->attachment,uVar1,uVar2,uVar3);
  }
  else if (event->event == 0x138c) {
    (*DAT_102e1554)(event->options,0x3f800000,entity->attachment);
  }
  return;
}

/* 1007b820  FUN_1007b820  (1851 bytes)
 * float10 FUN_1007b820(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5)
 */
float10 __cdecl
FUN_1007b820(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_c0 [3];
  undefined1 local_b4;
  char local_80 [2];
  uint local_7e [15];
  uint *local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  char *local_30 [4];
  char *pcStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  float local_10;
  undefined4 local_c;
  char local_5;
  
  local_5 = 0x43;
  local_38 = 0x3f7851ec;
  uVar12 = 0;
  uVar1 = thunk_FUN_10008500(param_2 + 0x14);
  iVar2 = (*DAT_102e153c)(uVar1,uVar12);
  if (iVar2 == -6) {
    fVar4 = (float10)0.0;
  }
  else {
    iVar2 = (*DAT_102e1568)(0,100);
    local_3c = (**(code **)(DAT_102e15a8 + 0x20))(param_2);
    local_5 = '\0';
    if ((local_3c < 1) || (iVar3 = (*DAT_102e14e8)(), iVar3 < local_3c)) {
      local_40 = (uint *)(**(code **)(DAT_102e15a8 + 0x4c))
                                   (*(undefined4 *)(param_2 + 0x30),param_3,param_4);
      if (local_40 != (uint *)0x0) {
        FUN_100bba20((uint *)local_80,local_40);
        local_40 = (uint *)local_80;
        if ((local_80[0] == '-') || (local_80[0] == '+')) {
          local_40 = local_7e;
        }
        if (((((char)*local_40 == '{') || ((char)*local_40 == '!')) || ((char)*local_40 == '~')) ||
           ((char)*local_40 == ' ')) {
          local_40 = (uint *)((int)local_40 + 1);
        }
        FUN_100bba20(local_c0,local_40);
        local_b4 = 0;
        uVar1 = thunk_FUN_10058b50((byte_conflict *)local_c0);
        local_5 = (char)uVar1;
      }
    }
    else {
      local_5 = 'F';
    }
    if ((local_5 != 'F') && (DAT_10317564 = (*DAT_102e1568)(0,0x7fff), DAT_10317564 < 0x3fff)) {
      switch(DAT_10317564 % 5) {
      case 1:
        FUN_100bba20((uint *)&DAT_103175d0,(uint *)"debris/ric2.wav");
        break;
      case 2:
        FUN_100bba20((uint *)&DAT_103175d0,(uint *)"debris/ric3.wav");
        break;
      case 3:
        FUN_100bba20((uint *)&DAT_103175d0,(uint *)"debris/ric4.wav");
        break;
      case 4:
        FUN_100bba20((uint *)&DAT_103175d0,(uint *)"debris/ric5.wav");
        break;
      default:
        FUN_100bba20((uint *)&DAT_103175d0,(uint *)"debris/ric1.wav");
      }
      lVar5 = __ftol();
      uVar1 = (undefined4)lVar5;
      uVar11 = 0;
      uVar10 = 0x3f7d70a4;
      uVar9 = 0x3f800000;
      puVar7 = &DAT_103175d0;
      uVar6 = 0;
      uVar12 = thunk_FUN_10008500(param_2 + 0x14);
      (**(code **)(DAT_102e15a8 + 4))(0xffffffff,uVar12,uVar6,puVar7,uVar9,uVar10,uVar11,uVar1);
    }
    switch(local_5) {
    case 'D':
      local_c = 0x3f666666;
      local_10 = 0.1;
      local_30[0] = "debris/gravel1.wav";
      local_30[1] = "debris/gravel2.wav";
      local_30[2] = "debris/gravel3.wav";
      local_30[3] = "debris/gravel4.wav";
      local_34 = 4;
      break;
    default:
      local_c = 0x3f666666;
      local_10 = 0.6;
      local_30[0] = "debris/cement.wav";
      local_30[1] = "debris/cement1.wav";
      local_30[2] = "debris/cement2.wav";
      local_30[3] = "debris/cement3.wav";
      pcStack_20 = "debris/cement4.wav";
      pcStack_1c = "debris/cement5.wav";
      pcStack_18 = "debris/cement6.wav";
      local_34 = 7;
      break;
    case 'F':
      return (float10)0.0;
    case 'G':
      local_c = 0x3f666666;
      local_10 = 0.5;
      local_30[0] = "debris/metal1.wav";
      local_30[1] = "debris/metal2.wav";
      local_30[2] = "debris/metal3.wav";
      local_30[3] = "debris/metal4.wav";
      pcStack_20 = "debris/metal5.wav";
      local_34 = 5;
      break;
    case 'M':
      local_c = 0x3f666666;
      local_10 = 0.3;
      local_30[0] = "debris/metal1.wav";
      local_30[1] = "debris/metal2.wav";
      local_30[2] = "debris/metal3.wav";
      local_30[3] = "debris/metal4.wav";
      pcStack_20 = "debris/metal5.wav";
      local_34 = 5;
      break;
    case 'P':
    case 'Y':
      local_c = 0x3f4ccccd;
      local_10 = 0.2;
      local_30[0] = "debris/glass1.wav";
      local_30[1] = "debris/glass2.wav";
      local_30[2] = "debris/glass3.wav";
      local_34 = 3;
      break;
    case 'S':
      local_c = 0x3f666666;
      local_10 = 0.0;
      local_30[0] = "player/pl_slosh1.wav";
      local_30[1] = "player/pl_slosh3.wav";
      local_30[2] = "player/pl_slosh2.wav";
      local_30[3] = "player/pl_slosh4.wav";
      local_34 = 4;
      break;
    case 'T':
      local_c = 0x3f4ccccd;
      local_10 = 0.2;
      local_30[0] = "debris/cement.wav";
      local_30[1] = "debris/cement1.wav";
      local_30[2] = "debris/cement2.wav";
      local_30[3] = "debris/cement3.wav";
      pcStack_20 = "debris/cement4.wav";
      pcStack_1c = "debris/cement5.wav";
      pcStack_18 = "debris/cement6.wav";
      local_34 = 7;
      break;
    case 'V':
      local_c = 0x3f000000;
      local_10 = 0.3;
      local_30[0] = "debris/metal1.wav";
      local_30[1] = "debris/metal2.wav";
      local_30[2] = "debris/metal3.wav";
      local_30[3] = "debris/metal4.wav";
      pcStack_20 = "debris/metal5.wav";
      local_34 = 5;
      break;
    case 'W':
      local_c = 0x3f666666;
      local_10 = 0.2;
      local_30[0] = "debris/wood1.wav";
      local_30[1] = "debris/wood2.wav";
      local_30[2] = "debris/wood3.wav";
      local_34 = 3;
    }
    thunk_FUN_10084240((undefined4 *)(param_2 + 0x14),(undefined4 *)(param_2 + 0x20),param_5,
                       (int)local_5);
    if (0x21 < iVar2) {
      iVar2 = (*DAT_102e1568)(0,0xf);
      iVar2 = (*DAT_102e1568)(0,local_34 + -1,local_c,local_38,0,iVar2 + 0x60);
      pcVar8 = local_30[iVar2];
      uVar12 = 6;
      uVar1 = thunk_FUN_10008500(param_2 + 0x14);
      (**(code **)(DAT_102e15a8 + 4))(0,uVar1,uVar12,pcVar8);
    }
    fVar4 = (float10)local_10;
  }
  return fVar4;
}

