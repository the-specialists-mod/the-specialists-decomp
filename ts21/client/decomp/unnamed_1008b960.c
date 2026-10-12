/* client.dll - unnamed_1008b960 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1008b960  FUN_1008b960  (1548 bytes)
 * undefined FUN_1008b960(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008b960(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  
  if (((((*(float *)(DAT_102e820c + 0xc) == 0.0) &&
        (DAT_10319f84 = DAT_102da420 < 0x28, *(char *)((int)param_1 + 0x7b8) != '\0')) &&
       (*(char *)((int)param_1 + 0x7b8) != '\x19')) &&
      ((*(char *)((int)param_1 + 0x7b8) != '#' && (*(char *)((int)param_1 + 0x7b8) != '\"')))) &&
     ((*(char *)((int)param_1 + 0x7b8) != '\x18' &&
      ((*(char *)((int)param_1 + 0x7b8) != '\x12' || ((bool)DAT_10319f84)))))) {
    iVar1 = thunk_FUN_100b5a50();
    if (iVar1 == 0) {
      DAT_10319eec = DAT_102e1234 / 2;
      DAT_103189d0 = DAT_102e1238 / 2;
    }
    else {
      puVar6 = &DAT_103189d0;
      puVar5 = &DAT_10319eec;
      uVar2 = thunk_FUN_10008500((int)param_1 + 0x38);
      thunk_FUN_10097650(uVar2,puVar5,puVar6);
      DAT_10319f84 = '\0';
    }
    if (DAT_103188c8 == '\x01') {
      DAT_10318a9c = 0x2d;
      DAT_103189b4 = 0x2d;
      DAT_103189bc = 0xc3;
    }
    else if (DAT_103188c8 == '\x02') {
      DAT_10318a9c = 0xc3;
      DAT_103189b4 = 0x2d;
      DAT_103189bc = 0x2d;
    }
    else {
      lVar4 = __ftol();
      DAT_10318a9c = (undefined4)lVar4;
      lVar4 = __ftol();
      DAT_103189bc = (undefined4)lVar4;
      lVar4 = __ftol();
      DAT_103189b4 = (undefined4)lVar4;
    }
    if ((DAT_10319f84 == '\0') || (DAT_103188c8 == '\x01')) {
      if ((*(char *)((int)param_1 + 0x7b8) == '\0') ||
         ((*(char *)((int)param_1 + 0x7b8) == '\x19' || (*(char *)((int)param_1 + 0x7b8) == '\x18'))
         )) {
        _DAT_10318ac4 = 0x16;
      }
      else {
        if ((*(uint *)((int)param_1 + 0x14) & 2) == 0) {
          _DAT_10318ac4 = 0x16;
        }
        else {
          _DAT_10318ac4 = 0xc;
        }
        thunk_FUN_1001d7b0((uint)*(byte *)((int)param_1 + 0x7b8));
        lVar4 = __ftol();
        _DAT_10318ac4 = (int)lVar4;
      }
      if (DAT_103188c8 == '\x01') {
        lVar4 = __ftol();
        uVar2 = (undefined4)lVar4;
        lVar4 = __ftol();
        uVar3 = (undefined4)lVar4;
        lVar4 = __ftol();
        (*DAT_102e1468)(*(undefined4 *)((int)param_1 + 0x154),(int)lVar4,uVar3,uVar2);
        (*DAT_102e1474)(0,DAT_10319eec + -0x20,DAT_103189d0 + -0x20,0);
      }
      else {
        (*DAT_102e1484)(DAT_10319eec - _DAT_10318ac4,DAT_103189d0 + -1,5,2,DAT_10318a9c,DAT_103189bc
                        ,DAT_103189b4,0x4b);
        (*DAT_102e1484)(DAT_10319eec + _DAT_10318ac4,DAT_103189d0 + -1,0xfffffffb,2,DAT_10318a9c,
                        DAT_103189bc,DAT_103189b4,0x4b);
        (*DAT_102e1484)(DAT_10319eec + -1,DAT_103189d0 - _DAT_10318ac4,2,5,DAT_10318a9c,DAT_103189bc
                        ,DAT_103189b4,0x4b);
        (*DAT_102e1484)(DAT_10319eec + -1,DAT_103189d0 + _DAT_10318ac4,2,0xfffffffb,DAT_10318a9c,
                        DAT_103189bc,DAT_103189b4,0x4b);
        iVar1 = (*DAT_102f1660)();
        if ((iVar1 == 0) ||
           (*(float *)(DAT_102e826c + 0xc) < 0.0 != (*(float *)(DAT_102e826c + 0xc) == 0.0))) {
          lVar4 = __ftol();
          uVar2 = (undefined4)lVar4;
          lVar4 = __ftol();
          uVar3 = (undefined4)lVar4;
          lVar4 = __ftol();
          (*DAT_102e1468)(*(undefined4 *)((int)param_1 + 0x14c),(int)lVar4,uVar3,uVar2);
          (*DAT_102e1474)(0,DAT_10319eec + -0x20,DAT_103189d0 + -0x20,0);
        }
        else {
          if (*(float *)(DAT_102e826c + 0xc) <= 1.0) {
            uStack_58 = DAT_103189b4;
          }
          else {
            uStack_58 = 0;
          }
          if (*(float *)(DAT_102e826c + 0xc) <= 1.0) {
            local_5c = DAT_103189bc;
          }
          else {
            local_5c = 0;
          }
          if (*(float *)(DAT_102e826c + 0xc) <= 1.0) {
            uStack_60 = DAT_10318a9c;
          }
          else {
            uStack_60 = 0;
          }
          (*DAT_102e1468)(*(undefined4 *)((int)param_1 + 0x150),uStack_60,local_5c,uStack_58);
          (*DAT_102e1470)(0,DAT_10319eec + -0x20,DAT_103189d0 + -0x20,0);
        }
      }
    }
    if ((*(uint *)((int)param_1 + 0x14) & 2) != 0) {
      lVar4 = __ftol();
      uVar2 = (undefined4)lVar4;
      lVar4 = __ftol();
      uVar3 = (undefined4)lVar4;
      lVar4 = __ftol();
      thunk_FUN_10088620(&DAT_102da3c8,DAT_10319eec + 0x1c,
                         (DAT_103189d0 - DAT_102da430 / 2) - (-(uint)(DAT_10319f84 != '\0') & 8),1,
                         *(int *)((int)param_1 + 0x18),(int)lVar4,uVar3,uVar2);
    }
    if (DAT_10319f84 == '\0') {
      thunk_FUN_1008c1c0(param_1,&DAT_10319eec,&DAT_103189d0);
    }
  }
  return;
}

/* 1008c0f0  FUN_1008c0f0  (83 bytes)
 * undefined4 FUN_1008c0f0(int param_1, int param_2)
 */
undefined4 __cdecl FUN_1008c0f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_48;
  
  if (DAT_102da424 < 2) {
    uVar1 = CONCAT31((int3)((uint)(0x51 - param_1) >> 8),0x51 - param_1 < 0x16);
  }
  else {
    if ((0x51 - param_1 < 0x16) && (param_2 < 1)) {
      local_48 = 1;
    }
    else {
      local_48 = 0;
    }
    uVar1 = CONCAT31((int3)((uint)(0x51 - param_1) >> 8),local_48);
  }
  return uVar1;
}

/* 1008c160  FUN_1008c160  (34 bytes)
 * undefined4 FUN_1008c160(int param_1)
 */
undefined4 __cdecl FUN_1008c160(int param_1)

{
  return CONCAT31((int3)((uint)(0x51 - param_1) >> 8),0x51 - param_1 < 0x2a);
}

/* 1008c190  FUN_1008c190  (34 bytes)
 * undefined4 FUN_1008c190(int param_1)
 */
undefined4 __cdecl FUN_1008c190(int param_1)

{
  return CONCAT31((int3)((uint)(0x51 - param_1) >> 8),0x51 - param_1 < 0x48);
}

/* 1008c1c0  FUN_1008c1c0  (1059 bytes)
 * undefined FUN_1008c1c0(int * param_1, int * param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1008c1c0(void *this,int *param_1,int *param_2)

{
  float *pfVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  
  if (DAT_102da3ec <= *(float *)((int)this + 0x34)) {
    DAT_10318ac8 = 0xc3;
    DAT_10318988 = 0x2d;
    DAT_1031895c = (void *)0x2d;
  }
  else {
    lVar5 = __ftol();
    DAT_10318ac8 = (undefined4)lVar5;
    lVar5 = __ftol();
    DAT_1031895c = (void *)lVar5;
    lVar5 = __ftol();
    DAT_10318988 = (undefined4)lVar5;
  }
  pfVar1 = (float *)thunk_FUN_10008500(&DAT_102da40c);
  _DAT_103189d4 = *pfVar1;
  if (-10.0 <= _DAT_103189d4) {
    if (_DAT_103189d4 <= 10.0) {
      DAT_10318a00 = 1;
    }
    else {
      DAT_10318a00 = 2;
    }
  }
  else {
    DAT_10318a00 = 0;
  }
  for (DAT_10318a3c = 0; DAT_10318a3c < 3; DAT_10318a3c = DAT_10318a3c + 1) {
    if ((DAT_10318a3c == 0) &&
       (uVar2 = thunk_FUN_1008c0f0((uint)DAT_102e0274,(uint)DAT_102e026d), (uVar2 & 0xff) == 0)) {
      (*DAT_102e1468)(*(undefined4 *)((int)this + (uint)DAT_10318a3c * 4 + 0x158),0xc3,0x2d,0x2d);
      (*DAT_102e1474)(0,*param_1 + -0x28,*param_2 + -0x28,0);
    }
    else if ((DAT_10318a3c == 1) &&
            (uVar2 = thunk_FUN_1008c160((uint)DAT_102e0274), (uVar2 & 0xff) == 0)) {
      (*DAT_102e1468)(*(undefined4 *)((int)this + (uint)DAT_10318a3c * 4 + 0x158),0xc3,0x2d,0x2d);
      (*DAT_102e1474)(0,*param_1 + -0x28,*param_2 + -0x28,0);
    }
    else if ((DAT_10318a3c == 2) &&
            (uVar2 = thunk_FUN_1008c190((uint)DAT_102e0274), (uVar2 & 0xff) == 0)) {
      (*DAT_102e1468)(*(undefined4 *)((int)this + (uint)DAT_10318a3c * 4 + 0x158),0xc3,0x2d,0x2d);
      (*DAT_102e1474)(0,*param_1 + -0x28,*param_2 + -0x28,0);
    }
    else {
      lVar5 = __ftol();
      uVar3 = (undefined4)lVar5;
      lVar5 = __ftol();
      uVar4 = (undefined4)lVar5;
      lVar5 = __ftol();
      (*DAT_102e1468)(*(undefined4 *)((int)this + (uint)DAT_10318a3c * 4 + 0x158),(int)lVar5,uVar4,
                      uVar3);
      (*DAT_102e1474)(0,*param_1 + -0x28,*param_2 + -0x28,0);
    }
  }
  _DAT_103189d4 = _DAT_103189d4 * 3.0;
  if (90.0 < _DAT_103189d4) {
    _DAT_103189d4 = 90.0;
  }
  if (_DAT_103189d4 < -90.0) {
    _DAT_103189d4 = -90.0;
  }
  uVar8 = 100;
  uVar6 = 2;
  uVar3 = DAT_10318ac8;
  pvVar7 = DAT_1031895c;
  uVar4 = DAT_10318988;
  FUN_100be334(DAT_1031895c,SUB84((double)((_DAT_103189d4 / 180.0) * 3.1415927),0));
  __ftol();
  FUN_100be284(param_1,SUB84((double)((_DAT_103189d4 / 180.0) * 3.1415927),0));
  lVar5 = __ftol();
  (*DAT_102e1484)((int)lVar5,uVar6,uVar3,pvVar7,uVar4,uVar8);
  return;
}

/* 1008c6f0  FUN_1008c6f0  (1087 bytes)
 * undefined FUN_1008c6f0(int param_1)
 */
void __thiscall FUN_1008c6f0(void *this,int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  float10 fVar4;
  int local_dc;
  int local_98;
  int local_90;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  void *local_8;
  
  local_8 = this;
  if (((DAT_102da978 == 0) || (param_1 < 1)) || (10 < param_1)) {
    cVar2 = thunk_FUN_10052960((undefined1 *)((int)this + 0x934));
    if (cVar2 == '\0') {
      uVar3 = thunk_FUN_100885b0();
      if (((uVar3 & 0xff) == 0) && (cVar2 = thunk_FUN_10088600(), cVar2 == '\0')) {
        if ((*(char *)((int)local_8 + 0x4ae0) == '\0') &&
           ((*(char *)((int)local_8 + 0x4ae1) == '\0' && (*(char *)((int)local_8 + 0x4ae2) == '\0'))
           )) {
          if (param_1 == 10) {
            if (*(char *)((int)local_8 + 0x73c) == '\0') {
              (*DAT_102e14a4)("weapon_0");
            }
            *(undefined1 *)((int)local_8 + 0x73c) = 0;
            *(undefined4 *)((int)local_8 + 0x740) = 1;
            *(undefined4 *)((int)local_8 + 0x744) = 1;
          }
          else if (param_1 < 6) {
            fVar4 = (float10)thunk_FUN_1000cd40("hud_fastswitch");
            if (fVar4 == (float10)0.0) {
              if (*(char *)((int)local_8 + 0x73c) == '\0') {
                *(undefined1 *)((int)local_8 + 0x73c) = 1;
              }
              if (param_1 == *(int *)((int)local_8 + 0x744)) {
                bVar1 = false;
                if (*(int *)((int)local_8 + 0x740) + 1 < 0x11) {
                  local_dc = *(int *)((int)local_8 + 0x740) + 1;
                }
                else {
                  local_dc = 1;
                }
                local_98 = local_dc;
                while ((local_98 < 0x11 && (!bVar1))) {
                  if (*(int *)((int)local_8 +
                              *(int *)((int)local_8 + 0x744) * 8 + local_98 * 0x58 + 0x164) != -1) {
                    *(int *)((int)local_8 + 0x740) = local_98;
                    bVar1 = true;
                  }
                  local_98 = local_98 + 1;
                }
                if (!bVar1) {
                  *(undefined4 *)((int)local_8 + 0x740) = 1;
                  while ((*(int *)((int)local_8 +
                                  param_1 * 8 + *(int *)((int)local_8 + 0x740) * 0x58 + 0x164) == -1
                         && (*(int *)((int)local_8 + 0x740) < 0x11))) {
                    *(int *)((int)local_8 + 0x740) = *(int *)((int)local_8 + 0x740) + 1;
                  }
                }
              }
              else {
                *(undefined4 *)((int)local_8 + 0x740) = 1;
                do {
                  if (*(int *)((int)local_8 +
                              param_1 * 8 + *(int *)((int)local_8 + 0x740) * 0x58 + 0x164) != -1)
                  goto LAB_1008cb1a;
                  *(int *)((int)local_8 + 0x740) = *(int *)((int)local_8 + 0x740) + 1;
                } while (*(int *)((int)local_8 + 0x740) < 0x11);
                *(undefined4 *)((int)local_8 + 0x740) = 0xffffffff;
              }
LAB_1008cb1a:
              *(int *)((int)local_8 + 0x744) = param_1;
            }
            else {
              bVar1 = false;
              if ((param_1 == *(int *)((int)local_8 + 0x744)) || (param_1 != 1)) {
                local_90 = *(int *)((int)local_8 + 0x740) + 1;
              }
              else {
                local_90 = 0;
              }
              *(int *)((int)local_8 + 0x740) = local_90;
              do {
                if (*(int *)((int)local_8 + param_1 * 8 + local_90 * 0x58 + 0x164) == -1) {
                  local_90 = local_90 + 1;
                  if (0x10 < local_90) {
                    local_90 = 0;
                  }
                }
                else {
                  bVar1 = true;
                }
              } while ((!bVar1) && (*(int *)((int)local_8 + 0x740) != local_90));
              *(int *)((int)local_8 + 0x740) = local_90;
              if (-1 < *(int *)((int)local_8 +
                               param_1 * 8 + *(int *)((int)local_8 + 0x740) * 0x58 + 0x164)) {
                FUN_100bb6e0(local_88,(byte_conflict *)"weapon_%i");
                (*DAT_102e14a4)(local_88);
              }
              *(undefined1 *)((int)local_8 + 0x73c) = 0;
            }
          }
        }
        else if ((0 < param_1) && (param_1 < 4)) {
          FUN_100bb6e0(local_48,(byte_conflict *)"cutwire_%i");
          (*DAT_102e14a4)(local_48);
        }
      }
    }
    else {
      thunk_FUN_1006e830((void *)((int)local_8 + 0x934),*(undefined4 *)((int)local_8 + 0x938),
                         param_1);
    }
  }
  else {
    thunk_FUN_10054740(&DAT_102da964,param_1);
  }
  return;
}

/* 1008cc40  FUN_1008cc40  (767 bytes)
 * undefined FUN_1008cc40(char param_1)
 */
void __thiscall FUN_1008cc40(void *this,char param_1)

{
  byte bVar1;
  void *pvVar2;
  undefined *puVar3;
  float10 fVar4;
  undefined1 local_5c [64];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_9;
  void *local_8;
  
  if (*(char *)((int)this + 0x73c) == '\0') {
    *(undefined1 *)((int)this + 0x73c) = 1;
  }
  local_9 = '\0';
  local_8 = this;
  puVar3 = thunk_FUN_1001d7b0((uint)*(byte *)((int)this + 0x7b8));
  *(uint *)((int)local_8 + 0x740) = (uint)(byte)puVar3[0x85];
  puVar3 = thunk_FUN_1001d7b0((uint)*(byte *)((int)local_8 + 0x7b8));
  *(uint *)((int)local_8 + 0x744) = (uint)(byte)puVar3[0x84];
  if ((*(int *)((int)local_8 + 0x744) < 1) || (5 < *(int *)((int)local_8 + 0x744))) {
    *(undefined4 *)((int)local_8 + 0x744) = 1;
  }
  if ((*(int *)((int)local_8 + 0x740) < 0) || (0x10 < *(int *)((int)local_8 + 0x740))) {
    *(undefined4 *)((int)local_8 + 0x740) = 0;
  }
  local_10 = -1;
  if (param_1 == '\0') {
    local_14 = *(int *)((int)local_8 + 0x740) + -1;
    if (local_14 < 0) {
      local_14 = 0x10;
    }
  }
  else {
    local_14 = *(int *)((int)local_8 + 0x740) + 1;
    if (0x10 < local_14) {
      local_14 = 0;
    }
  }
  local_18 = *(int *)((int)local_8 + 0x744);
  do {
    if (0 < *(int *)((int)local_8 + local_18 * 8 + local_14 * 0x58 + 0x164)) {
      puVar3 = thunk_FUN_1001d7b0(*(int *)((int)local_8 + local_18 * 8 + local_14 * 0x58 + 0x164));
      local_1c = (int)*(short *)(puVar3 + 0xc6);
      if (local_1c == -1) {
        local_9 = '\x01';
      }
      else {
        puVar3 = thunk_FUN_1001d7b0(local_1c);
        pvVar2 = local_8;
        bVar1 = puVar3[0x85];
        puVar3 = thunk_FUN_1001d7b0(local_1c);
        local_9 = *(int *)((int)pvVar2 + (uint)(byte)puVar3[0x84] * 8 + (uint)bVar1 * 0x58 + 0x164)
                  < 1;
      }
    }
    if (local_9 == '\0') {
      if (param_1 == '\0') {
        local_14 = local_14 + -1;
        if (local_14 < 0) {
          local_14 = 0x10;
          if (local_10 == -1) {
            local_10 = local_18;
          }
          local_18 = local_18 + -1;
          if (local_18 < 1) {
            local_18 = 5;
          }
        }
      }
      else {
        local_14 = local_14 + 1;
        if (0x10 < local_14) {
          local_14 = 0;
          if (local_10 == -1) {
            local_10 = local_18;
          }
          local_18 = local_18 + 1;
          if (5 < local_18) {
            local_18 = 1;
          }
        }
      }
    }
  } while ((local_9 == '\0') &&
          ((local_18 != local_10 || (local_14 != *(int *)((int)local_8 + 0x740)))));
  *(int *)((int)local_8 + 0x744) = local_18;
  *(int *)((int)local_8 + 0x740) = local_14;
  fVar4 = (float10)thunk_FUN_1000cd40("hud_fastswitch");
  if (fVar4 != (float10)0.0) {
    if (-1 < *(int *)((int)local_8 +
                     *(int *)((int)local_8 + 0x744) * 8 +
                     *(int *)((int)local_8 + 0x740) * 0x58 + 0x164)) {
      FUN_100bb6e0(local_5c,(byte_conflict *)"weapon_%i");
      (*DAT_102e14a4)(local_5c);
    }
    *(undefined1 *)((int)local_8 + 0x73c) = 0;
  }
  return;
}

/* 1008d000  FUN_1008d000  (151 bytes)
 * undefined4 FUN_1008d000(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1008d000(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(float *)((int)this + 0x4ae4) = (float)(int)uVar1;
  if (0.0 <= *(float *)((int)this + 0x4ae4)) {
    if (100.0 < *(float *)((int)this + 0x4ae4)) {
      *(undefined4 *)((int)this + 0x4ae4) = 0x42c80000;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x4ae4) = 0;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1008d0c0  FUN_1008d0c0  (168 bytes)
 * undefined4 FUN_1008d0c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1008d0c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar2 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x78c) = uVar2;
  if (*(char *)((int)this + 0x7b8) != '\0') {
    puVar3 = thunk_FUN_1001d7b0((uint)*(byte *)((int)this + 0x7b8));
    bVar1 = puVar3[0x85];
    puVar3 = thunk_FUN_1001d7b0((uint)*(byte *)((int)this + 0x7b8));
    *(undefined4 *)((int)this + (uint)(byte)puVar3[0x84] * 8 + (uint)bVar1 * 0x58 + 0x168) =
         *(undefined4 *)((int)this + 0x78c);
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1008d1a0  FUN_1008d1a0  (628 bytes)
 * undefined4 FUN_1008d1a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1008d1a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  
  thunk_FUN_10056240(param_3,param_2);
  cVar1 = *(char *)((int)this + 0x7b8);
  uVar4 = thunk_FUN_10056300();
  *(char *)((int)this + 0x7b8) = (char)uVar4;
  uVar4 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x78c) = uVar4;
  iVar5 = thunk_FUN_10056370();
  puVar6 = thunk_FUN_1001d7b0((uint)*(byte *)((int)this + 0x7b8));
  *(int *)((int)this + (uint)(byte)puVar6[8] * 4 + 0x748) = iVar5;
  uVar4 = thunk_FUN_10056300();
  *(char *)((int)this + 0x78a) = (char)uVar4;
  uVar4 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x798) = uVar4;
  if (*(char *)((int)this + 0x7b8) == '\0') {
    *(undefined4 *)((int)this + 0x740) = 0;
    *(undefined4 *)((int)this + 0x744) = 0;
    *(float *)((int)this + 0x4ae4) = (float)*(int *)((int)this + 0x78c);
    if (0.0 <= *(float *)((int)this + 0x4ae4)) {
      if (100.0 < *(float *)((int)this + 0x4ae4)) {
        *(undefined4 *)((int)this + 0x4ae4) = 0x42c80000;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x4ae4) = 0;
    }
    if ((*(float *)(DAT_102e814c + 0xc) == 1.0) && (iVar5 = thunk_FUN_100b5a50(), iVar5 == 0)) {
      thunk_FUN_1008f090();
    }
  }
  else {
    puVar6 = thunk_FUN_1001d7b0((uint)*(byte *)((int)this + 0x7b8));
    if (((byte)puVar6[0x85] < 0x11) &&
       (puVar6 = thunk_FUN_1001d7b0((uint)*(byte *)((int)this + 0x7b8)), (byte)puVar6[0x84] < 0xb))
    {
      bVar2 = *(byte *)((int)this + 0x7b8);
      puVar6 = thunk_FUN_1001d7b0((uint)*(byte *)((int)this + 0x7b8));
      bVar3 = puVar6[0x85];
      puVar6 = thunk_FUN_1001d7b0((uint)*(byte *)((int)this + 0x7b8));
      *(uint *)((int)this + (uint)(byte)puVar6[0x84] * 8 + (uint)bVar3 * 0x58 + 0x164) = (uint)bVar2
      ;
      puVar6 = thunk_FUN_1001d7b0((uint)*(byte *)((int)this + 0x7b8));
      bVar2 = puVar6[0x85];
      puVar6 = thunk_FUN_1001d7b0((uint)*(byte *)((int)this + 0x7b8));
      *(undefined4 *)((int)this + (uint)(byte)puVar6[0x84] * 8 + (uint)bVar2 * 0x58 + 0x168) =
           *(undefined4 *)((int)this + 0x78c);
    }
    if (((*(float *)(DAT_102e814c + 0xc) == 1.0) && (iVar5 = thunk_FUN_100b5a50(), iVar5 != 0)) &&
       (cVar1 == '\0')) {
      thunk_FUN_1008f090();
    }
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1008d4c0  FUN_1008d4c0  (272 bytes)
 * undefined4 FUN_1008d4c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1008d4c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint local_54;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar2 = thunk_FUN_10056300();
  uVar3 = thunk_FUN_10056300();
  puVar4 = thunk_FUN_1001d7b0(uVar2);
  if (((byte)puVar4[0x85] < 0x11) && (puVar4 = thunk_FUN_1001d7b0(uVar2), (byte)puVar4[0x84] < 0xb))
  {
    local_54 = uVar2;
    if (uVar3 == 0) {
      local_54 = 0xffffffff;
    }
    puVar4 = thunk_FUN_1001d7b0(uVar2);
    bVar1 = puVar4[0x85];
    puVar4 = thunk_FUN_1001d7b0(uVar2);
    *(uint *)((int)this + (uint)(byte)puVar4[0x84] * 8 + (uint)bVar1 * 0x58 + 0x164) = local_54;
    puVar4 = thunk_FUN_1001d7b0(uVar2);
    bVar1 = puVar4[0x85];
    puVar4 = thunk_FUN_1001d7b0(uVar2);
    *(undefined4 *)((int)this + (uint)(byte)puVar4[0x84] * 8 + (uint)bVar1 * 0x58 + 0x168) = 1;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1008d620  FUN_1008d620  (97 bytes)
 * undefined4 FUN_1008d620(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1008d620(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_10;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  uVar2 = thunk_FUN_10056300();
  if ((-1 < (int)uVar1) && ((int)uVar1 < 0x21)) {
    local_10 = (undefined1)uVar2;
    (&DAT_10316c64)[uVar1] = local_10;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1008d6a0  FUN_1008d6a0  (110 bytes)
 * undefined4 FUN_1008d6a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1008d6a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(float *)((int)this + 0x34) = (float)(int)uVar1;
  *(float *)((int)this + 0x34) = *(float *)((int)this + 0x34) / 10.0;
  *(float *)((int)this + 0x34) = DAT_102da3ec + *(float *)((int)this + 0x34);
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1008d730  FUN_1008d730  (99 bytes)
 * undefined4 FUN_1008d730(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1008d730(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(char *)((int)this + 0x4ae0) = (char)uVar1;
  uVar1 = thunk_FUN_10056300();
  *(char *)((int)this + 0x4ae1) = (char)uVar1;
  uVar1 = thunk_FUN_10056300();
  *(char *)((int)this + 0x4ae2) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1008d7b0  FUN_1008d7b0  (165 bytes)
 * undefined4 FUN_1008d7b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1008d7b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined *puVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  uint local_48 [16];
  int local_8;
  
  thunk_FUN_10056240(param_3,param_2);
  puVar1 = (uint *)thunk_FUN_10056560();
  FUN_100bba20(local_48,puVar1);
  FUN_100c19a0((char *)local_48,(byte_conflict *)"%i %f %f %f");
  puVar2 = thunk_FUN_1001d7b0(local_4c);
  *(undefined4 *)(puVar2 + 0x28) = local_50;
  puVar2 = thunk_FUN_1001d7b0(local_4c);
  *(undefined4 *)(puVar2 + 0x30) = local_54;
  puVar2 = thunk_FUN_1001d7b0(local_4c);
  *(undefined4 *)(puVar2 + 0x34) = local_58;
  *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) | 1;
  return 1;
}

/* 1008d880  FUN_1008d880  (26 bytes)
 * undefined FUN_1008d880(void * param_1)
 */
void __cdecl FUN_1008d880(void *param_1)

{
  thunk_FUN_1008c6f0(param_1,1);
  return;
}

/* 1008d8a0  FUN_1008d8a0  (26 bytes)
 * undefined FUN_1008d8a0(void * param_1)
 */
void __cdecl FUN_1008d8a0(void *param_1)

{
  thunk_FUN_1008c6f0(param_1,2);
  return;
}

/* 1008d8c0  FUN_1008d8c0  (26 bytes)
 * undefined FUN_1008d8c0(void * param_1)
 */
void __cdecl FUN_1008d8c0(void *param_1)

{
  thunk_FUN_1008c6f0(param_1,3);
  return;
}

/* 1008d8e0  FUN_1008d8e0  (26 bytes)
 * undefined FUN_1008d8e0(void * param_1)
 */
void __cdecl FUN_1008d8e0(void *param_1)

{
  thunk_FUN_1008c6f0(param_1,4);
  return;
}

/* 1008d900  FUN_1008d900  (26 bytes)
 * undefined FUN_1008d900(void * param_1)
 */
void __cdecl FUN_1008d900(void *param_1)

{
  thunk_FUN_1008c6f0(param_1,5);
  return;
}

/* 1008d920  FUN_1008d920  (26 bytes)
 * undefined FUN_1008d920(void * param_1)
 */
void __cdecl FUN_1008d920(void *param_1)

{
  thunk_FUN_1008c6f0(param_1,6);
  return;
}

/* 1008d940  FUN_1008d940  (26 bytes)
 * undefined FUN_1008d940(void * param_1)
 */
void __cdecl FUN_1008d940(void *param_1)

{
  thunk_FUN_1008c6f0(param_1,7);
  return;
}

/* 1008d960  FUN_1008d960  (26 bytes)
 * undefined FUN_1008d960(void * param_1)
 */
void __cdecl FUN_1008d960(void *param_1)

{
  thunk_FUN_1008c6f0(param_1,8);
  return;
}

/* 1008d980  FUN_1008d980  (26 bytes)
 * undefined FUN_1008d980(void * param_1)
 */
void __cdecl FUN_1008d980(void *param_1)

{
  thunk_FUN_1008c6f0(param_1,9);
  return;
}

/* 1008d9a0  FUN_1008d9a0  (26 bytes)
 * undefined FUN_1008d9a0(void * param_1)
 */
void __cdecl FUN_1008d9a0(void *param_1)

{
  thunk_FUN_1008c6f0(param_1,10);
  return;
}

/* 1008d9c0  FUN_1008d9c0  (119 bytes)
 * undefined FUN_1008d9c0(void * param_1)
 */
void __cdecl FUN_1008d9c0(void *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = thunk_FUN_100885b0();
  if ((((uVar2 & 0xff) == 0) && (cVar1 = thunk_FUN_10088600(), cVar1 == '\0')) &&
     (*(float *)((int)param_1 + 0x4af0) <= DAT_102da3ec)) {
    *(float *)((int)param_1 + 0x4af0) = DAT_102da3ec + 0.1;
    thunk_FUN_1008cc40(param_1,'\x01');
  }
  return;
}

/* 1008da60  FUN_1008da60  (119 bytes)
 * undefined FUN_1008da60(void * param_1)
 */
void __cdecl FUN_1008da60(void *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = thunk_FUN_100885b0();
  if ((((uVar2 & 0xff) == 0) && (cVar1 = thunk_FUN_10088600(), cVar1 == '\0')) &&
     (*(float *)((int)param_1 + 0x4af0) <= DAT_102da3ec)) {
    *(float *)((int)param_1 + 0x4af0) = DAT_102da3ec + 0.1;
    thunk_FUN_1008cc40(param_1,'\0');
  }
  return;
}

/* 1008db00  FUN_1008db00  (89 bytes)
 * undefined FUN_1008db00(int param_1)
 */
void __cdecl FUN_1008db00(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = thunk_FUN_100885b0();
  if ((((uVar2 & 0xff) != 0) || (cVar1 = thunk_FUN_10088600(), cVar1 != '\0')) &&
     (*(char *)(param_1 + 0x73c) == '\0')) {
    thunk_FUN_1006b3f0(&DAT_102dc084);
  }
  return;
}

/* 1008db70  FUN_1008db70  (16 bytes)
 * undefined FUN_1008db70(void)
 */
void FUN_1008db70(void)

{
  return;
}

/* 1008db90  FUN_1008db90  (16 bytes)
 * undefined FUN_1008db90(void)
 */
void FUN_1008db90(void)

{
  return;
}

/* 1008dbb0  FUN_1008dbb0  (19 bytes)
 * undefined FUN_1008dbb0(void)
 */
void FUN_1008dbb0(void)

{
  return;
}

/* 1008dbd0  FUN_1008dbd0  (275 bytes)
 * undefined FUN_1008dbd0(void)
 */
void FUN_1008dbd0(void)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  DAT_103189d8 = (int)lVar1;
  lVar1 = __ftol();
  DAT_10318a10 = (int)lVar1;
  lVar1 = __ftol();
  DAT_10318a04 = (int)lVar1;
  thunk_FUN_1008f200(&DAT_10318a88,8,DAT_102e1238 / 2,0x14,0x80);
  thunk_FUN_1008f270(&DAT_10318a88,"Change Team:",0x2d,0xc3,0x2d,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"1 Join Specialists",DAT_103189d8 / 2,DAT_10318a10 / 2,
                     DAT_10318a04 / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"2 Join Mercenaries",DAT_103189d8 / 2,DAT_10318a10 / 2,
                     DAT_10318a04 / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"0 Cancel",100,100,0xcd,0x32);
  return;
}

/* 1008dd30  FUN_1008dd30  (900 bytes)
 * undefined FUN_1008dd30(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008dd30(int param_1)

{
  undefined *puVar1;
  longlong lVar2;
  int local_54;
  int local_50;
  int local_4c;
  
  _DAT_10318a84 = (&DAT_10318ae8)[*(int *)(param_1 + 0x7c0) * 0x20 + *(int *)(param_1 + 0x7bc)];
  lVar2 = __ftol();
  DAT_1031894c = (int)lVar2;
  lVar2 = __ftol();
  DAT_10319f90 = (int)lVar2;
  lVar2 = __ftol();
  DAT_10318a44 = (int)lVar2;
  thunk_FUN_1008f200(&DAT_10318a88,DAT_102e1234 / 2 + -0x80,DAT_102e1238 / 2,0x14,0x80);
  for (DAT_10319f80 = 0; DAT_10319f80 < 6; DAT_10319f80 = DAT_10319f80 + 1) {
    if ((((3 < DAT_10319f80) || (*(char *)(param_1 + 0x7b8) != '\0')) &&
        (((3 < DAT_10319f80 || (*(char *)(param_1 + 0x7b8) == '\0')) ||
         ((((*(uint *)(param_1 + 0x798) & 1 << ((byte)DAT_10319f80 & 0x1f)) == 0 &&
           (puVar1 = thunk_FUN_1001d7b0((uint)*(byte *)(param_1 + 0x7b8)),
           (*(uint *)(puVar1 + 0xdc) & 1 << ((byte)DAT_10319f80 & 0x1f)) == 0)) &&
          (puVar1 = thunk_FUN_1001d7b0((uint)*(byte *)(param_1 + 0x7b8)),
          (*(uint *)(puVar1 + 0xd8) & 1 << ((byte)DAT_10319f80 & 0x1f)) != 0)))))) &&
       ((DAT_10319f80 != 4 || (1 < DAT_102da424)))) {
      switch(DAT_10319f80) {
      case 0:
        FUN_100bb6e0(&DAT_10318964,(byte_conflict *)"%i Silencer  %i");
        DAT_10319f9c = 900;
        break;
      case 1:
        FUN_100bb6e0(&DAT_10318964,(byte_conflict *)"%i Lasersight  %i");
        DAT_10319f9c = 800;
        break;
      case 2:
        FUN_100bb6e0(&DAT_10318964,(byte_conflict *)"%i Flashlight  %i");
        DAT_10319f9c = 500;
        break;
      case 3:
        FUN_100bb6e0(&DAT_10318964,(byte_conflict *)"%i Scope  %i");
        DAT_10319f9c = 0x708;
        break;
      case 4:
        FUN_100bb6e0(&DAT_10318964,(byte_conflict *)"%i Kevlar  %i");
        DAT_10319f9c = 0x76c;
        break;
      case 5:
        FUN_100bb6e0(&DAT_10318964,(byte_conflict *)"%i Stealth Shoes  %i");
        DAT_10319f9c = 700;
      }
      if (DAT_102e0270 < DAT_10319f9c) {
        local_4c = 0x2d;
        local_50 = 0x2d;
        local_54 = 0xc3;
      }
      else {
        local_4c = DAT_10318a44 / 2;
        local_50 = DAT_10319f90 / 2;
        local_54 = DAT_1031894c / 2;
      }
      thunk_FUN_1008f270(&DAT_10318a88,&DAT_10318964,local_54,local_50,local_4c,0x32);
    }
  }
  thunk_FUN_1008f270(&DAT_10318a88,"0 Cancel",DAT_1031894c / 2,DAT_10319f90 / 2,DAT_10318a44 / 2,0);
  return;
}

/* 1008e1c0  FUN_1008e1c0  (1039 bytes)
 * undefined FUN_1008e1c0(int param_1)
 */
void __fastcall FUN_1008e1c0(int param_1)

{
  int iVar1;
  longlong lVar2;
  char *local_4c;
  
  lVar2 = __ftol();
  DAT_10319ee8 = (int)lVar2;
  lVar2 = __ftol();
  DAT_10319fa0 = (int)lVar2;
  lVar2 = __ftol();
  DAT_10318a50 = (int)lVar2;
  thunk_FUN_1008f200(&DAT_10318a88,DAT_102e1234 / 2 + -0x80,DAT_102e1238 / 2,0x14,0x80);
  thunk_FUN_1008f270(&DAT_10318a88,"1 Buy",DAT_10319ee8 / 2,DAT_10319fa0 / 2,DAT_10318a50 / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"2 Reset",DAT_10319ee8 / 2,DAT_10319fa0 / 2,DAT_10318a50 / 2,0x32
                    );
  if (*(char *)(param_1 + 0x931) == '\0') {
    local_4c = "3 Block list";
  }
  else {
    local_4c = "3 Free list";
  }
  thunk_FUN_1008f270(&DAT_10318a88,local_4c,DAT_10319ee8 / 2,DAT_10319fa0 / 2,DAT_10318a50 / 2,0x32)
  ;
  DAT_103189b8 = 0;
  for (DAT_10318ad4 = 0; DAT_10318ad4 < 8; DAT_10318ad4 = DAT_10318ad4 + 1) {
    iVar1 = _strcmp("",(char *)(param_1 + 0x7dc + DAT_10318ad4 * 0x2c));
    if (iVar1 != 0) {
      DAT_103189b8 = DAT_103189b8 + *(int *)(param_1 + 0x7d4 + DAT_10318ad4 * 0x2c);
      if (*(int *)(param_1 + 0x7d8 + DAT_10318ad4 * 0x2c) == 0) {
        thunk_FUN_1001d7b0(*(int *)(param_1 + 2000 + DAT_10318ad4 * 0x2c));
        FUN_100bb6e0(&DAT_10319f14,(byte_conflict *)"%s  %i Credits");
      }
      else {
        DAT_10318a0c = '\0';
        FUN_100bba20((uint *)&DAT_10319f40,(uint *)"");
        if ((*(uint *)(param_1 + 0x7d8 + DAT_10318ad4 * 0x2c) & 1) != 0) {
          FUN_100bba30((uint *)&DAT_10319f40,(uint *)&DAT_10270c28);
          DAT_10318a0c = '\x01';
        }
        if ((*(uint *)(param_1 + 0x7d8 + DAT_10318ad4 * 0x2c) & 2) != 0) {
          if (DAT_10318a0c != '\0') {
            FUN_100bba30((uint *)&DAT_10319f40,(uint *)&DAT_10270c24);
          }
          FUN_100bba30((uint *)&DAT_10319f40,(uint *)"Laser");
          DAT_10318a0c = '\x01';
        }
        if ((*(uint *)(param_1 + 0x7d8 + DAT_10318ad4 * 0x2c) & 4) != 0) {
          if (DAT_10318a0c != '\0') {
            FUN_100bba30((uint *)&DAT_10319f40,(uint *)&DAT_10270c24);
          }
          FUN_100bba30((uint *)&DAT_10319f40,(uint *)"Flash");
          DAT_10318a0c = '\x01';
        }
        if ((*(uint *)(param_1 + 0x7d8 + DAT_10318ad4 * 0x2c) & 8) != 0) {
          if (DAT_10318a0c != '\0') {
            FUN_100bba30((uint *)&DAT_10319f40,(uint *)&DAT_10270c24);
          }
          FUN_100bba30((uint *)&DAT_10319f40,(uint *)"Scope");
        }
        thunk_FUN_1001d7b0(*(int *)(param_1 + 2000 + DAT_10318ad4 * 0x2c));
        FUN_100bb6e0(&DAT_10319f14,(byte_conflict *)"%s (%s)  %i Credits");
      }
      thunk_FUN_1008f270(&DAT_10318a88,&DAT_10319f14,
                         ((DAT_103189b8 <= DAT_102e0270) - 1 & 0x96) + 0x2d,
                         ((DAT_103189b8 <= DAT_102e0270) - 1 & 0xffffff6a) + 0xc3,0x2d,0);
    }
  }
  thunk_FUN_1008f270(&DAT_10318a88,"0 Cancel",DAT_10319ee8 / 2,DAT_10319fa0 / 2,DAT_10318a50 / 2,0);
  return;
}

/* 1008e6e0  FUN_1008e6e0  (712 bytes)
 * undefined FUN_1008e6e0(int param_1)
 */
void __fastcall FUN_1008e6e0(int param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  DAT_10318a48 = (int)lVar1;
  lVar1 = __ftol();
  DAT_10318960 = (int)lVar1;
  lVar1 = __ftol();
  DAT_103189e8 = (int)lVar1;
  thunk_FUN_1008f200(&DAT_10318a88,DAT_102e1234 / 2 + -0x80,DAT_102e1238 / 2,0x14,0x80);
  for (DAT_10318a08 = 0; (DAT_10318a08 < 0x20 && ((&DAT_10318ae8)[DAT_10318a08] != -1));
      DAT_10318a08 = DAT_10318a08 + 1) {
    FUN_100bb6e0(&DAT_10318994,(byte_conflict *)"%i %s");
    thunk_FUN_1008f270(&DAT_10318a88,&DAT_10318994,DAT_10318a48 / 2,DAT_10318960 / 2,
                       DAT_103189e8 / 2,0x32);
  }
  thunk_FUN_1008f270(&DAT_10318a88,"6 Accessories",DAT_10318a48 / 2,DAT_10318960 / 2,
                     DAT_103189e8 / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"7 Last equipment",DAT_10318a48 / 2,DAT_10318960 / 2,
                     DAT_103189e8 / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"8 Full Ammo",DAT_10318a48 / 2,DAT_10318960 / 2,DAT_103189e8 / 2,
                     0x32);
  if (*(char *)(param_1 + 0x7ba) == '\0') {
    thunk_FUN_1008f270(&DAT_10318a88,"0 Cancel",DAT_10318a48 / 2,DAT_10318960 / 2,DAT_103189e8 / 2,0
                      );
  }
  return;
}

/* 1008ea60  FUN_1008ea60  (19 bytes)
 * undefined FUN_1008ea60(void)
 */
void FUN_1008ea60(void)

{
  return;
}

/* 1008ea80  FUN_1008ea80  (151 bytes)
 * undefined4 FUN_1008ea80(uint param_1)
 */
uint __thiscall FUN_1008ea80(void *this,uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint3 uVar3;
  
  if ((*(uint *)((int)this + 0x7c8) & param_1) == 0) {
    puVar2 = thunk_FUN_1001d7b0((&DAT_10318ae8)
                                [*(int *)((int)this + 0x7c0) * 0x20 + *(int *)((int)this + 0x7bc)]);
    if ((*(uint *)(puVar2 + 0xdc) & param_1) == 0) {
      puVar2 = thunk_FUN_1001d7b0((&DAT_10318ae8)
                                  [*(int *)((int)this + 0x7c0) * 0x20 + *(int *)((int)this + 0x7bc)]
                                 );
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

/* 1008eb40  FUN_1008eb40  (21 bytes)
 * undefined FUN_1008eb40(void)
 */
void FUN_1008eb40(void)

{
  return;
}

/* 1008eb60  FUN_1008eb60  (781 bytes)
 * undefined FUN_1008eb60(int param_1)
 */
void __thiscall FUN_1008eb60(void *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  longlong lVar4;
  int local_54;
  int local_50;
  int local_4c;
  
  lVar4 = __ftol();
  DAT_10318944 = (int)lVar4;
  lVar4 = __ftol();
  DAT_103189e4 = (int)lVar4;
  lVar4 = __ftol();
  DAT_10318954 = (int)lVar4;
  DAT_10318a14 = 0x100;
  DAT_10318adc = 0x30;
  DAT_10319f8c = DAT_102e1234 / 2 + -0x80;
  DAT_10318938 = DAT_102e1238 / 2 + -0x30;
  (*DAT_102e1484)(DAT_10319f8c,DAT_10318938,0xff,0x2f,DAT_10318944,DAT_103189e4,DAT_10318954,0x19);
  (*DAT_102e1468)(*(undefined4 *)((int)this + param_1 * 4 + 0x44),DAT_10318944,DAT_103189e4,
                  DAT_10318954);
  (*DAT_102e1474)(0,DAT_10319f8c,DAT_10318938,0);
  thunk_FUN_1001d7b0(param_1);
  FUN_100bb6e0(&DAT_10319ef4,(byte_conflict *)"%i Credits");
  puVar3 = thunk_FUN_1001d7b0(param_1);
  if (DAT_102e0270 < *(int *)(puVar3 + 0xd0)) {
    local_4c = 0x2d;
  }
  else {
    local_4c = DAT_10318954 / 2;
  }
  puVar3 = thunk_FUN_1001d7b0(param_1);
  if (DAT_102e0270 < *(int *)(puVar3 + 0xd0)) {
    local_50 = 0x2d;
  }
  else {
    local_50 = DAT_103189e4 / 2;
  }
  puVar3 = thunk_FUN_1001d7b0(param_1);
  if (DAT_102e0270 < *(int *)(puVar3 + 0xd0)) {
    local_54 = 0xc3;
  }
  else {
    local_54 = DAT_10318944 / 2;
  }
  thunk_FUN_10047f00(DAT_10319f8c + DAT_10318a14 / 2,DAT_10318938,DAT_102e1234,&DAT_10319ef4,
                     local_54,local_50,local_4c);
  thunk_FUN_1001d7b0(param_1);
  FUN_100bb6e0(&DAT_10319ef4,(byte_conflict *)"%i Slots");
  bVar1 = DAT_102e0274;
  puVar3 = thunk_FUN_1001d7b0(param_1);
  bVar2 = DAT_102e0274;
  if (bVar1 < (byte)puVar3[0xca]) {
    local_4c = 0x2d;
  }
  else {
    local_4c = DAT_10318954 / 2;
  }
  puVar3 = thunk_FUN_1001d7b0(param_1);
  bVar1 = DAT_102e0274;
  if (bVar2 < (byte)puVar3[0xca]) {
    local_50 = 0x2d;
  }
  else {
    local_50 = DAT_103189e4 / 2;
  }
  puVar3 = thunk_FUN_1001d7b0(param_1);
  if (bVar1 < (byte)puVar3[0xca]) {
    local_54 = 0xc3;
  }
  else {
    local_54 = DAT_10318944 / 2;
  }
  thunk_FUN_10047f00(DAT_10319f8c + DAT_10318a14 / 2,DAT_10318938 + 0x14,DAT_102e1234,&DAT_10319ef4,
                     local_54,local_50,local_4c);
  return;
}

/* 1008ef30  FUN_1008ef30  (175 bytes)
 * undefined FUN_1008ef30(undefined4 param_1)
 */
void __thiscall FUN_1008ef30(void *this,undefined4 param_1)

{
  *(uint *)((int)this + 0x7c8) = *(uint *)((int)this + 0x7c8) | 1 << ((byte)param_1 & 0x1f);
  switch(param_1) {
  case 0:
    *(int *)((int)this + 0x7cc) = *(int *)((int)this + 0x7cc) + 900;
    break;
  case 1:
    *(int *)((int)this + 0x7cc) = *(int *)((int)this + 0x7cc) + 800;
    break;
  case 2:
    *(int *)((int)this + 0x7cc) = *(int *)((int)this + 0x7cc) + 500;
    break;
  case 3:
    *(int *)((int)this + 0x7cc) = *(int *)((int)this + 0x7cc) + 0x708;
  }
  return;
}

/* 1008f020  FUN_1008f020  (19 bytes)
 * undefined FUN_1008f020(void)
 */
void FUN_1008f020(void)

{
  return;
}

/* 1008f040  FUN_1008f040  (53 bytes)
 * undefined4 FUN_1008f040(undefined4 param_1, uint param_2)
 */
undefined4 __cdecl FUN_1008f040(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((DAT_102da418 & param_2) == 0) {
    uVar1 = 0;
  }
  else {
    DAT_102da418 = DAT_102da418 & ~param_2;
    uVar1 = CONCAT31((int3)(~param_2 >> 8),1);
  }
  return uVar1;
}

/* 1008f090  FUN_1008f090  (192 bytes)
 * undefined FUN_1008f090(void)
 */
void FUN_1008f090(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_10 [12];
  
  thunk_FUN_10007fe0(local_10);
  cVar1 = thunk_FUN_10088600();
  if ((cVar1 == '\0') || (DAT_102e8118 != 0)) {
    uVar2 = thunk_FUN_10008500(local_10);
    (*DAT_102e14e0)(uVar2);
    if (DAT_102e8118 == 0) {
      DAT_102e8118 = 1;
      iVar3 = thunk_FUN_10008500(local_10);
      iVar4 = thunk_FUN_10008500(&DAT_102e80bc);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
      puVar5 = (undefined4 *)thunk_FUN_10008500(local_10);
      puVar6 = (undefined4 *)thunk_FUN_10008500(&DAT_102e80bc);
      *puVar6 = *puVar5;
      iVar3 = thunk_FUN_10008500(&DAT_102e80bc);
      *(undefined4 *)(iVar3 + 8) = 0x41f00000;
    }
    else {
      DAT_102e8118 = 0;
    }
    (*DAT_102e14ec)("cam_command",0);
  }
  return;
}

/* 1008f180  FUN_1008f180  (28 bytes)
 * int FUN_1008f180(void)
 */
int FUN_1008f180(void)

{
  return (uint)(DAT_102e8118 != 0);
}

/* 1008f1b0  FUN_1008f1b0  (58 bytes)
 * undefined FUN_1008f1b0(undefined4 * param_1)
 */
void __fastcall FUN_1008f1b0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

/* 1008f200  FUN_1008f200  (80 bytes)
 * undefined FUN_1008f200(int param_1, int param_2, int param_3, int param_4)
 */
void __thiscall FUN_1008f200(void *this,int param_1,int param_2,int param_3,int param_4)

{
  if (param_1 != -1) {
    *(int *)this = param_1;
  }
  if (param_2 != -1) {
    *(int *)((int)this + 4) = param_2;
  }
  if (param_3 != -1) {
    *(int *)((int)this + 8) = param_3;
  }
  if (param_4 != -1) {
    *(int *)((int)this + 0xc) = param_4;
  }
  return;
}

/* 1008f270  FUN_1008f270  (181 bytes)
 * undefined FUN_1008f270(char * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 */
void __thiscall
FUN_1008f270(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_5 != 0) {
    lVar3 = __ftol();
    (*DAT_102e1484)(*(undefined4 *)this,*(undefined4 *)((int)this + 4),
                    *(int *)((int)this + 0xc) + -1,*(int *)((int)this + 8) + -1,param_2,param_3,
                    param_4,(int)lVar3);
  }
  lVar3 = __ftol();
  uVar1 = (undefined4)lVar3;
  lVar3 = __ftol();
  uVar2 = (undefined4)lVar3;
  lVar3 = __ftol();
  thunk_FUN_10047f00(*(int *)this,*(undefined4 *)((int)this + 4),DAT_102e1234,param_1,(int)lVar3,
                     uVar2,uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + *(int *)((int)this + 8);
  return;
}

/* 1008f360  FUN_1008f360  (209 bytes)
 * undefined FUN_1008f360(int param_1)
 */
void __cdecl FUN_1008f360(int param_1)

{
  undefined4 uVar1;
  
  (**(code **)(DAT_102e15a0 + 0x18))
            (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40));
  uVar1 = thunk_FUN_10008500(param_1);
  (**(code **)(DAT_102e15a0 + 0x1c))(uVar1);
  (**(code **)(DAT_102e15a0 + 0x18))
            (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x44));
  uVar1 = thunk_FUN_10008500(param_1 + 0xc);
  (**(code **)(DAT_102e15a0 + 0x1c))(uVar1);
  (**(code **)(DAT_102e15a0 + 0x18))
            (*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x48));
  uVar1 = thunk_FUN_10008500(param_1 + 0x18);
  (**(code **)(DAT_102e15a0 + 0x1c))(uVar1);
  (**(code **)(DAT_102e15a0 + 0x18))
            (*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x4c));
  uVar1 = thunk_FUN_10008500(param_1 + 0x24);
  (**(code **)(DAT_102e15a0 + 0x1c))(uVar1);
  return;
}

/* 1008f470  FUN_1008f470  (1045 bytes)
 * undefined FUN_1008f470(undefined4 * param_1, void * param_2, undefined4 param_3, float param_4, char param_5)
 */
void __cdecl
FUN_1008f470(undefined4 *param_1,void *param_2,undefined4 param_3,float param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
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
  
  if ((DAT_1031a4c4 & 1) == 0) {
    DAT_1031a4c4 = DAT_1031a4c4 | 1;
    thunk_FUN_10007fe0(&DAT_1031a4a4);
    FUN_100bc490(0x1008f9d0);
  }
  if ((DAT_1031a4c4 & 2) == 0) {
    DAT_1031a4c4 = DAT_1031a4c4 | 2;
    thunk_FUN_10007fe0(&DAT_1031a4cc);
    FUN_100bc490(0x1008f9b0);
  }
  if ((DAT_1031a4c4 & 4) == 0) {
    DAT_1031a4c4 = DAT_1031a4c4 | 4;
    thunk_FUN_10007fe0(&DAT_1031a494);
    FUN_100bc490(0x1008f990);
  }
  if (param_5 == '\0') {
    uVar1 = thunk_FUN_10008500(&DAT_1031a494);
    uVar2 = thunk_FUN_10008500(&DAT_1031a4cc);
    uVar3 = thunk_FUN_10008500(&DAT_1031a4a4);
    uVar4 = thunk_FUN_10008500(param_3);
    (*DAT_102e14b8)(uVar4,uVar3,uVar2,uVar1);
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031a4cc,local_28,param_4);
    puVar9 = local_34;
    pfVar6 = thunk_FUN_1000cb20(&DAT_1031a494,local_10,param_4);
    pvVar7 = thunk_FUN_1000d970(param_2,local_1c,pfVar6);
    puVar8 = thunk_FUN_1000ca70(pvVar7,puVar9,pfVar5);
    *param_1 = *puVar8;
    param_1[1] = puVar8[1];
    param_1[2] = puVar8[2];
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031a4cc,local_58,param_4);
    puVar9 = local_64;
    pfVar6 = thunk_FUN_1000cb20(&DAT_1031a494,local_40,param_4);
    pvVar7 = thunk_FUN_1000d970(param_2,local_4c,pfVar6);
    puVar8 = thunk_FUN_1000d970(pvVar7,puVar9,pfVar5);
    param_1[3] = *puVar8;
    param_1[4] = puVar8[1];
    param_1[5] = puVar8[2];
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031a4cc,local_88,param_4);
    puVar9 = local_94;
    pfVar6 = thunk_FUN_1000cb20(&DAT_1031a494,local_70,param_4);
    pvVar7 = thunk_FUN_1000ca70(param_2,local_7c,pfVar6);
    puVar8 = thunk_FUN_1000d970(pvVar7,puVar9,pfVar5);
    param_1[6] = *puVar8;
    param_1[7] = puVar8[1];
    param_1[8] = puVar8[2];
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031a4cc,local_b8,param_4);
    puVar9 = local_c4;
    pfVar6 = thunk_FUN_1000cb20(&DAT_1031a494,local_a0,param_4);
    pvVar7 = thunk_FUN_1000ca70(param_2,local_ac,pfVar6);
    puVar8 = thunk_FUN_1000ca70(pvVar7,puVar9,pfVar5);
    param_1[9] = *puVar8;
    param_1[10] = puVar8[1];
    param_1[0xb] = puVar8[2];
  }
  else {
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_e8,param_4);
    puVar9 = local_f4;
    pfVar6 = thunk_FUN_1000cb20(&DAT_1031ab74,local_d0,param_4);
    pvVar7 = thunk_FUN_1000d970(param_2,local_dc,pfVar6);
    puVar8 = thunk_FUN_1000ca70(pvVar7,puVar9,pfVar5);
    *param_1 = *puVar8;
    param_1[1] = puVar8[1];
    param_1[2] = puVar8[2];
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_118,param_4);
    puVar9 = local_124;
    pfVar6 = thunk_FUN_1000cb20(&DAT_1031ab74,local_100,param_4);
    pvVar7 = thunk_FUN_1000d970(param_2,local_10c,pfVar6);
    puVar8 = thunk_FUN_1000d970(pvVar7,puVar9,pfVar5);
    param_1[3] = *puVar8;
    param_1[4] = puVar8[1];
    param_1[5] = puVar8[2];
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_148,param_4);
    puVar9 = local_154;
    pfVar6 = thunk_FUN_1000cb20(&DAT_1031ab74,local_130,param_4);
    pvVar7 = thunk_FUN_1000ca70(param_2,local_13c,pfVar6);
    puVar8 = thunk_FUN_1000d970(pvVar7,puVar9,pfVar5);
    param_1[6] = *puVar8;
    param_1[7] = puVar8[1];
    param_1[8] = puVar8[2];
    pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_178,param_4);
    puVar9 = local_184;
    pfVar6 = thunk_FUN_1000cb20(&DAT_1031ab74,local_160,param_4);
    pvVar7 = thunk_FUN_1000ca70(param_2,local_16c,pfVar6);
    puVar8 = thunk_FUN_1000ca70(pvVar7,puVar9,pfVar5);
    param_1[9] = *puVar8;
    param_1[10] = puVar8[1];
    param_1[0xb] = puVar8[2];
  }
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0xe] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0x13] = 0x3f800000;
  return;
}

/* 1008f990  FUN_1008f990  (16 bytes)
 * undefined FUN_1008f990(void)
 */
void FUN_1008f990(void)

{
  return;
}

/* 1008f9b0  FUN_1008f9b0  (16 bytes)
 * undefined FUN_1008f9b0(void)
 */
void FUN_1008f9b0(void)

{
  return;
}

/* 1008f9d0  FUN_1008f9d0  (16 bytes)
 * undefined FUN_1008f9d0(void)
 */
void FUN_1008f9d0(void)

{
  return;
}

/* 1008f9f0  FUN_1008f9f0  (73 bytes)
 * undefined4 * FUN_1008f9f0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1008f9f0(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  _memset(param_1 + 3,0,0xa00);
  return param_1;
}

/* 1008fa50  FUN_1008fa50  (40 bytes)
 * undefined FUN_1008fa50(int param_1)
 */
void __fastcall FUN_1008fa50(int param_1)

{
  FUN_100bbb10(*(void **)(param_1 + 8));
  return;
}

/* 1008fa90  FUN_1008fa90  (399 bytes)
 * undefined FUN_1008fa90(int param_1)
 */
void __thiscall FUN_1008fa90(void *this,int param_1)

{
  int iVar1;
  void *local_68;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5a7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 8) != 0) {
    ExceptionList = &local_10;
    FUN_100bbb10(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0xc0c) = 0;
  *(undefined4 *)((int)this + 0xc10) = 0;
  if (param_1 < 0x100) {
    *(undefined4 *)((int)this + 4) = 0x100;
  }
  else if (param_1 < 0x801) {
    *(int *)((int)this + 4) = param_1;
  }
  else {
    *(undefined4 *)((int)this + 4) = 0x800;
  }
  DAT_1031b81c = *(undefined4 *)((int)this + 4);
  iVar1 = *(int *)((int)this + 4);
  local_68 = operator_new(iVar1 * 0xdc);
  local_8 = 0;
  if (local_68 == (void *)0x0) {
    local_68 = (void *)0x0;
  }
  else {
    thunk_FUN_1000cb80(local_68,0xdc,iVar1,thunk_FUN_1007dbf0);
  }
  local_8 = 0xffffffff;
  *(void **)((int)this + 8) = local_68;
  if (*(int *)((int)this + 8) == 0) {
    thunk_FUN_10060890(&DAT_102da950,(uint *)"ERROR! Cannot initialize Particle system!",1,-1);
  }
  else {
    _memset(*(void **)((int)this + 8),0,*(int *)((int)this + 4) * 0xdc);
    _memset((void *)((int)this + 0xc),0,0xa00);
    _memset((void *)((int)this + 0xa0c),0,0x200);
  }
  ExceptionList = local_10;
  return;
}

/* 1008fc90  FUN_1008fc90  (45 bytes)
 * int FUN_1008fc90(int param_1)
 */
int __thiscall FUN_1008fc90(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)((int)this + param_1 * 0x28 + 0x32);
  }
  return iVar1;
}

/* 1008fcd0  FUN_1008fcd0  (60 bytes)
 * undefined4 FUN_1008fcd0(int param_1)
 */
undefined4 __thiscall FUN_1008fcd0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_102e1568)(0,*(short *)((int)this + param_1 * 0x28 + 0x32) + -1);
  }
  return uVar1;
}

/* 1008fd20  FUN_1008fd20  (316 bytes)
 * int FUN_1008fd20(uint * param_1, undefined2 param_2)
 */
int __thiscall FUN_1008fd20(void *this,uint *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_84 [30];
  int local_c;
  void *local_8;
  
  local_8 = this;
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    uVar2 = FUN_100db540((byte_conflict *)param_1,
                         (byte_conflict *)((int)local_8 + local_c * 0x28 + 0xc));
    if (uVar2 == 0) {
      return local_c;
    }
  }
  local_c = 0;
  while( true ) {
    if (0x1f < local_c) {
      return -1;
    }
    if (*(int *)((int)local_8 + local_c * 0x28 + 0x2c) == 0) break;
    local_c = local_c + 1;
  }
  uVar3 = (*DAT_102e1458)(param_1);
  *(undefined4 *)((int)local_8 + local_c * 0x28 + 0x2c) = uVar3;
  if (*(int *)((int)local_8 + local_c * 0x28 + 0x2c) == 0) {
    FUN_100bb6e0((undefined1 *)local_84,(byte_conflict *)"WARNING! cannot found %s\n");
    thunk_FUN_10060890(&DAT_102da950,local_84,1,-1);
    return -1;
  }
  uVar1 = (*DAT_102e145c)(*(undefined4 *)((int)local_8 + local_c * 0x28 + 0x2c));
  *(undefined2 *)((int)local_8 + local_c * 0x28 + 0x32) = uVar1;
  FUN_100bba20((uint *)((int)local_8 + local_c * 0x28 + 0xc),param_1);
  *(undefined2 *)((int)local_8 + local_c * 0x28 + 0x30) = param_2;
  return local_c;
}

/* 1008feb0  FUN_1008feb0  (69 bytes)
 * undefined2 FUN_1008feb0(short param_1)
 */
undefined2 __thiscall FUN_1008feb0(void *this,short param_1)

{
  bool bVar1;
  float10 fVar2;
  bool local_4c;
  
  fVar2 = (float10)(*DAT_102e1530)();
  bVar1 = fVar2 < (float10)*(float *)((int)this + param_1 * 4 + 0xa0c);
  local_4c = !bVar1;
  return CONCAT11(bVar1,local_4c);
}

/* 1008ff10  FUN_1008ff10  (44 bytes)
 * undefined FUN_1008ff10(short param_1, float param_2)
 */
void __thiscall FUN_1008ff10(void *this,short param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)(*DAT_102e1530)();
  *(float *)((int)this + param_1 * 4 + 0xa0c) = (float)(fVar1 + (float10)param_2);
  return;
}

/* 1008ff50  FUN_1008ff50  (80 bytes)
 * undefined FUN_1008ff50(short param_1)
 */
void __thiscall FUN_1008ff50(void *this,short param_1)

{
  if ((*(int *)((int)this + 8) != 0) &&
     (*(undefined1 *)(param_1 * 0xdc + *(int *)((int)this + 8)) = 0,
     (int)param_1 < *(int *)((int)this + 0xc0c))) {
    *(int *)((int)this + 0xc0c) = (int)param_1;
  }
  return;
}

/* 1008ffc0  FUN_1008ffc0  (530 bytes)
 * int FUN_1008ffc0(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 */
int __thiscall FUN_1008ffc0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) == 0) {
    iVar1 = -1;
  }
  else {
    if (*(short *)(param_1 + 0x2e) < 0) {
      DAT_1031a4b8 = '\0';
    }
    else {
      DAT_1031a4b8 = '\x01' - (*(short *)((int)this + *(short *)(param_1 + 0x2e) * 0x28 + 0x30) != 1
                              );
    }
    if ((DAT_1031a4b8 == '\0') || (iVar1 = (*DAT_102f1660)(), iVar1 != 0)) {
      DAT_1031a4b4 = -1;
      if (*(char *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc0c) * 0xdc) == '\0') {
        DAT_1031a4b4 = *(int *)((int)this + 0xc0c);
      }
      else {
        DAT_1031a4d8 = *(int *)((int)this + 0xc0c);
        while ((DAT_1031a4d8 < *(int *)((int)this + 4) && (DAT_1031a4b4 == -1))) {
          if (*(char *)(*(int *)((int)this + 8) + DAT_1031a4d8 * 0xdc) == '\0') {
            DAT_1031a4b4 = DAT_1031a4d8;
          }
          DAT_1031a4d8 = DAT_1031a4d8 + 1;
        }
      }
      if (DAT_1031a4b4 == -1) {
        iVar1 = -1;
      }
      else {
        FUN_100bc090((undefined4 *)(DAT_1031a4b4 * 0xdc + *(int *)((int)this + 8)),param_1,0xdc);
        uVar4 = 0xc;
        puVar2 = (undefined4 *)
                 thunk_FUN_10008500(*(int *)((int)this + 8) + 0x10 + DAT_1031a4b4 * 0xdc);
        FUN_100bc090((undefined4 *)(*(int *)((int)this + 8) + 4 + DAT_1031a4b4 * 0xdc),puVar2,uVar4)
        ;
        *(undefined4 *)(*(int *)((int)this + 8) + 200 + DAT_1031a4b4 * 0xdc) = 0;
        fVar3 = (float10)(*DAT_102e1530)();
        *(float *)(*(int *)((int)this + 8) + 0x4c + DAT_1031a4b4 * 0xdc) = (float)fVar3;
        *(undefined4 *)(*(int *)((int)this + 8) + 0xd0 + DAT_1031a4b4 * 0xdc) = param_2;
        *(undefined4 *)(*(int *)((int)this + 8) + 0xd4 + DAT_1031a4b4 * 0xdc) = param_3;
        iVar1 = DAT_1031a4b4;
        if (*(int *)((int)this + 0xc10) < DAT_1031a4b4) {
          *(int *)((int)this + 0xc10) = DAT_1031a4b4;
          iVar1 = DAT_1031a4b4;
        }
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}

/* 10090260  FUN_10090260  (104 bytes)
 * int FUN_10090260(int param_1)
 */
int __fastcall FUN_10090260(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_10 = -1;
  }
  else {
    local_10 = -1;
    for (local_c = 0; local_c < *(int *)(param_1 + 4); local_c = local_c + 1) {
      if (*(char *)(*(int *)(param_1 + 8) + local_c * 0xdc) == '\0') {
        local_10 = local_c;
      }
    }
  }
  return local_10;
}

/* 100902f0  FUN_100902f0  (1417 bytes)
 * undefined FUN_100902f0(undefined1 * param_1, undefined4 * param_2, float * param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100902f0(undefined1 *param_1,undefined4 *param_2,float *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *this;
  float *pfVar5;
  undefined1 *puVar6;
  float fVar7;
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  float local_10;
  float local_c;
  
  if ((DAT_1031a4b1 & 1) == 0) {
    DAT_1031a4b1 = DAT_1031a4b1 | 1;
    thunk_FUN_10007fe0(&DAT_1031a488);
    FUN_100bc490(0x100909e0);
  }
  if (param_1[0xba] == '\0') {
    local_c = *param_3 * 10.0;
    pfVar5 = thunk_FUN_1000cb20(param_1 + 0x2c,local_34,local_c);
    puVar1 = thunk_FUN_1000d970(param_1 + 0x10,local_40,pfVar5);
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(undefined4 *)(param_1 + 0x14) = puVar1[1];
    *(undefined4 *)(param_1 + 0x18) = puVar1[2];
    pfVar5 = (float *)thunk_FUN_10008500(param_1 + 0x2c);
    if (-3.3 <= *pfVar5) {
      pfVar5 = (float *)thunk_FUN_10008500(param_1 + 0x2c);
      if (3.3 < *pfVar5) {
        pfVar5 = (float *)thunk_FUN_10008500(param_1 + 0x2c);
        *pfVar5 = *pfVar5 - *param_3 * 3.3 * 10.0;
      }
    }
    else {
      pfVar5 = (float *)thunk_FUN_10008500(param_1 + 0x2c);
      *pfVar5 = *param_3 * 3.3 * 10.0 + *pfVar5;
    }
    iVar2 = thunk_FUN_10008500(param_1 + 0x2c);
    if (-3.3 <= *(float *)(iVar2 + 4)) {
      iVar2 = thunk_FUN_10008500(param_1 + 0x2c);
      if (3.3 < *(float *)(iVar2 + 4)) {
        iVar2 = thunk_FUN_10008500(param_1 + 0x2c);
        *(float *)(iVar2 + 4) = *(float *)(iVar2 + 4) - *param_3 * 3.3 * 10.0;
      }
    }
    else {
      iVar2 = thunk_FUN_10008500(param_1 + 0x2c);
      *(float *)(iVar2 + 4) = *param_3 * 3.3 * 10.0 + *(float *)(iVar2 + 4);
    }
    if (0.0 < *(float *)(param_1 + 0x44)) {
      local_10 = _DAT_1028a350 * 1.0 * 0.001;
      iVar2 = thunk_FUN_10008500(param_1 + 0x2c);
      *(float *)(iVar2 + 8) =
           *(float *)(iVar2 + 8) - local_c * *(float *)(param_1 + 0x44) * local_10;
    }
    iVar2 = thunk_FUN_10008500(param_1 + 0x2c);
    if (*(float *)(iVar2 + 8) <= 3.3) {
      if ((*(float *)(param_1 + 0x44) < 0.0 != (*(float *)(param_1 + 0x44) == 0.0)) &&
         (iVar2 = thunk_FUN_10008500(param_1 + 0x2c), *(float *)(iVar2 + 8) < -3.3)) {
        iVar2 = thunk_FUN_10008500(param_1 + 0x2c);
        *(float *)(iVar2 + 8) = *param_3 * 3.3 * 10.0 + *(float *)(iVar2 + 8);
      }
    }
    else {
      iVar2 = thunk_FUN_10008500(param_1 + 0x2c);
      *(float *)(iVar2 + 8) = *(float *)(iVar2 + 8) - *param_3 * 3.3 * 10.0;
    }
  }
  else if (param_1[0xbb] == '\0') {
    DAT_1031a4dc = (*DAT_102e152c)((byte)param_1[0xba] - 1);
    if (DAT_1031a4dc != 0) {
      puVar1 = thunk_FUN_1000d970((void *)(DAT_1031a4dc + 0xb48),local_28,(float *)(param_1 + 0xbc))
      ;
      *(undefined4 *)(param_1 + 0x10) = *puVar1;
      *(undefined4 *)(param_1 + 0x14) = puVar1[1];
      *(undefined4 *)(param_1 + 0x18) = puVar1[2];
    }
  }
  else {
    DAT_1031a4dc = (*DAT_102e152c)((byte)param_1[0xba] - 1);
    if (DAT_1031a4dc != 0) {
      puVar1 = thunk_FUN_1000d970((void *)(DAT_1031a4dc + 0xb60 + ((byte)param_1[0xbb] - 1) * 0xc),
                                  local_1c,(float *)(param_1 + 0xbc));
      *(undefined4 *)(param_1 + 0x10) = *puVar1;
      *(undefined4 *)(param_1 + 0x14) = puVar1[1];
      *(undefined4 *)(param_1 + 0x18) = puVar1[2];
    }
  }
  if (param_1[1] == '\x03') {
    thunk_FUN_10090a00(param_1);
  }
  if (param_1[1] == '\x04') {
    FUN_100bc090(param_2,(undefined4 *)(param_1 + 100),0x50);
  }
  else if (param_1[0x28] == '\0') {
    thunk_FUN_1008f470(param_2,param_1 + 0x10,param_1 + 0x1c,*(float *)(param_1 + 0xb4),'\x01');
  }
  else if (param_1[0x28] == '\x01') {
    iVar2 = thunk_FUN_10008500(param_1 + 0x1c);
    iVar3 = thunk_FUN_10008500(param_1 + 0x38);
    *(float *)(iVar2 + 8) = *(float *)(iVar3 + 8) * *param_3 * 10.0 + *(float *)(iVar2 + 8);
    puVar1 = (undefined4 *)thunk_FUN_10008500(&DAT_10320fec);
    puVar4 = (undefined4 *)thunk_FUN_10008500(&DAT_1031a488);
    *puVar4 = *puVar1;
    iVar2 = thunk_FUN_10008500(&DAT_10320fec);
    iVar3 = thunk_FUN_10008500(&DAT_1031a488);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar2 + 4);
    iVar2 = thunk_FUN_10008500(param_1 + 0x1c);
    iVar3 = thunk_FUN_10008500(&DAT_1031a488);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
    thunk_FUN_1008f470(param_2,param_1 + 0x10,&DAT_1031a488,*(float *)(param_1 + 0xb4),'\0');
  }
  else {
    fVar7 = 10.0;
    puVar6 = local_58;
    this = thunk_FUN_1000cb20(param_1 + 0x38,local_4c,*param_3);
    pfVar5 = thunk_FUN_1000cb20(this,puVar6,fVar7);
    puVar1 = thunk_FUN_1000d970(param_1 + 0x1c,local_64,pfVar5);
    *(undefined4 *)(param_1 + 0x1c) = *puVar1;
    *(undefined4 *)(param_1 + 0x20) = puVar1[1];
    *(undefined4 *)(param_1 + 0x24) = puVar1[2];
    thunk_FUN_1008f470(param_2,param_1 + 0x10,param_1 + 0x1c,*(float *)(param_1 + 0xb4),'\0');
  }
  return;
}

/* 100909e0  FUN_100909e0  (16 bytes)
 * undefined FUN_100909e0(void)
 */
void FUN_100909e0(void)

{
  return;
}

/* 10090a00  FUN_10090a00  (965 bytes)
 * undefined FUN_10090a00(undefined1 * param_1)
 */
void FUN_10090a00(undefined1 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  void *extraout_ECX;
  float10 fVar14;
  float10 fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 *puVar19;
  undefined4 local_c8;
  uint uStack_c4;
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  float local_5c;
  undefined1 local_58 [16];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [36];
  undefined1 local_14 [16];
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_1000c160((int)local_58);
  if (param_1[0xcc] != '\0') {
    uVar4 = thunk_FUN_100968f0(param_1 + 0x10);
    param_1[0xcc] = (char)uVar4;
  }
  if ((param_1[0xcc] != '\0') &&
     (fVar14 = (float10)(*DAT_102e1530)(), (float10)*(float *)(param_1 + 200) <= fVar14)) {
    if (DAT_102da420 < 0x28) {
      uStack_c4 = 0x3fe00000;
    }
    else {
      uStack_c4 = 0x3ff00000;
    }
    pfVar5 = thunk_FUN_10096e30(local_68);
    pvVar6 = thunk_FUN_1000ca70(param_1 + 0x10,local_74,pfVar5);
    pvVar6 = (void *)thunk_FUN_10008500(pvVar6);
    fVar14 = thunk_FUN_10097fc0(extraout_ECX,pvVar6);
    local_5c = (float)(fVar14 * (float10)(double)((ulonglong)uStack_c4 << 0x20));
    if (512.0 < local_5c) {
      fVar14 = (float10)(*DAT_102e1530)();
      fVar15 = (float10)(*DAT_102e1564)(0x3f000000,0x3f19999a);
      *(float *)(param_1 + 200) = (float)(fVar15 + (float10)(float)fVar14);
    }
    (**(code **)(DAT_102e15a8 + 0x38))(2);
    puVar19 = local_58;
    uVar18 = 0xffffffff;
    uVar16 = 2;
    uVar7 = thunk_FUN_10008500(param_1 + 0x10);
    uVar8 = thunk_FUN_10008500(param_1 + 4);
    (**(code **)(DAT_102e15a8 + 0x3c))(uVar8,uVar7,uVar16,uVar18,puVar19);
    if (local_48 == 0x3f800000) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    }
    else {
      uVar8 = 0;
      uVar7 = thunk_FUN_10008500(param_1 + 4);
      iVar9 = (*DAT_102e153c)(uVar7,uVar8);
      if (iVar9 == -2) {
        uVar8 = 0;
        uVar7 = thunk_FUN_10008500(param_1 + 0x10);
        iVar9 = (*DAT_102e153c)(uVar7,uVar8);
        if (iVar9 != -2) {
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
          return;
        }
        *param_1 = 0;
      }
      *(undefined4 *)(param_1 + 0x10) = local_44;
      *(undefined4 *)(param_1 + 0x14) = local_40;
      *(undefined4 *)(param_1 + 0x18) = local_3c;
      if (local_5c <= 512.0) {
        local_c8 = 0x33333333;
        uStack_c4 = 0x3fd33333;
      }
      else {
        local_c8 = 0;
        uStack_c4 = 0;
      }
      puVar10 = thunk_FUN_1000cb20(param_1 + 0x2c,local_80,
                                   (float)(double)CONCAT44(uStack_c4,local_c8));
      *(undefined4 *)(param_1 + 0x2c) = *puVar10;
      *(undefined4 *)(param_1 + 0x30) = puVar10[1];
      *(undefined4 *)(param_1 + 0x34) = puVar10[2];
      pfVar5 = (float *)thunk_FUN_10008500(param_1 + 0x2c);
      pfVar11 = (float *)thunk_FUN_10008500(local_38);
      fVar17 = *pfVar5;
      fVar1 = *pfVar11;
      iVar9 = thunk_FUN_10008500(param_1 + 0x2c);
      iVar12 = thunk_FUN_10008500(local_38);
      fVar2 = *(float *)(iVar9 + 4);
      fVar3 = *(float *)(iVar12 + 4);
      iVar9 = thunk_FUN_10008500(param_1 + 0x2c);
      iVar12 = thunk_FUN_10008500(local_38);
      local_5c = *(float *)(iVar9 + 8) * *(float *)(iVar12 + 8) + fVar2 * fVar3 + fVar17 * fVar1;
      pfVar5 = (float *)thunk_FUN_10008500(param_1 + 0x2c);
      pfVar11 = (float *)thunk_FUN_10008500(local_38);
      fVar17 = -local_5c + -local_5c;
      pfVar13 = (float *)thunk_FUN_10008500(param_1 + 0x2c);
      thunk_FUN_10098330(pfVar13,fVar17,pfVar11,pfVar5);
      iVar9 = thunk_FUN_10008500(local_38);
      if ((0.9 < *(float *)(iVar9 + 8)) &&
         (iVar9 = thunk_FUN_10008500(param_1 + 0x2c), *(float *)(iVar9 + 8) < 6.6)) {
        puVar10 = (undefined4 *)thunk_FUN_10008500(param_1 + 0x2c);
        *puVar10 = 0;
        iVar9 = thunk_FUN_10008500(param_1 + 0x2c);
        *(undefined4 *)(iVar9 + 4) = 0;
        iVar9 = thunk_FUN_10008500(param_1 + 0x2c);
        *(undefined4 *)(iVar9 + 8) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
        param_1[1] = 0;
        param_1[0x28] = 0;
        iVar9 = thunk_FUN_10008500(param_1 + 0x38);
        *(undefined4 *)(iVar9 + 8) = 0;
      }
      if (*(int *)(param_1 + 0xd4) != 0) {
        (**(code **)(param_1 + 0xd4))(param_1,local_58);
      }
    }
  }
  return;
}

/* 10090ec0  FUN_10090ec0  (281 bytes)
 * undefined FUN_10090ec0(int param_1)
 */
void __fastcall FUN_10090ec0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    DAT_1031a4e4 = 0;
    DAT_1031a4c0 = *(int *)(param_1 + 4) + -1;
    while (DAT_1031a4e4 < DAT_1031a4c0) {
      if (*(char *)(*(int *)(param_1 + 8) + DAT_1031a4e4 * 0xdc) != '\0') {
        DAT_1031a4e4 = DAT_1031a4e4 + 1;
      }
      if (*(char *)(*(int *)(param_1 + 8) + DAT_1031a4c0 * 0xdc) == '\0') {
        DAT_1031a4c0 = DAT_1031a4c0 + -1;
      }
      if ((*(char *)(*(int *)(param_1 + 8) + DAT_1031a4c0 * 0xdc) != '\0') &&
         (*(char *)(*(int *)(param_1 + 8) + DAT_1031a4e4 * 0xdc) == '\0')) {
        FUN_100bc090((undefined4 *)(DAT_1031a4e4 * 0xdc + *(int *)(param_1 + 8)),
                     (undefined4 *)(DAT_1031a4c0 * 0xdc + *(int *)(param_1 + 8)),0xdc);
        *(undefined1 *)(DAT_1031a4c0 * 0xdc + *(int *)(param_1 + 8)) = 0;
      }
    }
  }
  return;
}

/* 10091020  FUN_10091020  (1841 bytes)
 * undefined FUN_10091020(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10091020(void *param_1)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  char local_54;
  float local_4c;
  
  if ((DAT_1031a4b0 & 1) == 0) {
    DAT_1031a4b0 = DAT_1031a4b0 | 1;
    thunk_FUN_1006a030(&DAT_1031a438);
    FUN_100bc490(0x10091990);
  }
  if (*(int *)((int)param_1 + 8) != 0) {
    fVar5 = FUN_10091920();
    _DAT_1031a4a0 = (float)fVar5;
    fVar5 = (float10)(*DAT_102e1530)();
    DAT_1031a4e0 = (float)fVar5;
    DAT_1031a4bc = 0;
    DAT_1031a4c8 = 0;
    while (DAT_1031a4bc <= *(int *)((int)param_1 + 0xc10)) {
      if (*(char *)(*(int *)((int)param_1 + 8) + DAT_1031a4bc * 0xdc) == '\0') {
        if (DAT_1031a4bc < *(int *)((int)param_1 + 0xc0c)) {
          *(int *)((int)param_1 + 0xc0c) = DAT_1031a4bc;
        }
        DAT_1031a4bc = DAT_1031a4bc + 1;
      }
      else {
        if (DAT_1031a4c8 < DAT_1031a4bc) {
          DAT_1031a4c8 = DAT_1031a4bc;
        }
        fVar1 = *(float *)(*(int *)((int)param_1 + 8) + 0x48 + DAT_1031a4bc * 0xdc);
        bVar2 = fVar1 < 0.0 != (fVar1 == 0.0);
        if (-1 < *(short *)(*(int *)((int)param_1 + 8) + 0xb8 + DAT_1031a4bc * 0xdc)) {
          if (bVar2) {
            if (*(float *)(*(int *)((int)param_1 + 8) + 0x60 + DAT_1031a4bc * 0xdc) == 0.0) {
              bVar2 = true;
            }
            else {
              bVar2 = (float)(int)*(short *)((int)param_1 +
                                            *(short *)(*(int *)((int)param_1 + 8) + 0xb8 +
                                                      DAT_1031a4bc * 0xdc) * 0x28 + 0x32) <
                      *(float *)(*(int *)((int)param_1 + 8) + 0x5c + DAT_1031a4bc * 0xdc);
            }
            if (bVar2) {
              bVar2 = true;
              goto LAB_10091220;
            }
          }
          bVar2 = false;
        }
LAB_10091220:
        if (bVar2) {
          if (*(float *)(*(int *)((int)param_1 + 8) + 0x54 + DAT_1031a4bc * 0xdc) == 0.0) {
            bVar2 = true;
          }
          else {
            fVar1 = *(float *)(*(int *)((int)param_1 + 8) + 0x50 + DAT_1031a4bc * 0xdc);
            bVar2 = fVar1 < 0.0 != (fVar1 == 0.0);
          }
          if (!bVar2) goto LAB_1009129f;
          local_54 = '\x01';
        }
        else {
LAB_1009129f:
          local_54 = '\0';
        }
        DAT_1031a430 = local_54;
        if (local_54 == '\0') {
          if ((*(float *)(*(int *)((int)param_1 + 8) + 0x54 + DAT_1031a4bc * 0xdc) != 0.0) &&
             (fVar1 = *(float *)(*(int *)((int)param_1 + 8) + 0x48 + DAT_1031a4bc * 0xdc),
             fVar1 < 0.0 != (fVar1 == 0.0))) {
            if (*(float *)(*(int *)((int)param_1 + 8) + 0x50 + DAT_1031a4bc * 0xdc) -
                _DAT_1031a4a0 * *(float *)(*(int *)((int)param_1 + 8) + 0x54 + DAT_1031a4bc * 0xdc)
                * 100.0 <= 0.0) {
              local_4c = 0.0;
            }
            else {
              local_4c = *(float *)(*(int *)((int)param_1 + 8) + 0x50 + DAT_1031a4bc * 0xdc) -
                         _DAT_1031a4a0 *
                         *(float *)(*(int *)((int)param_1 + 8) + 0x54 + DAT_1031a4bc * 0xdc) * 100.0
              ;
            }
            *(float *)(*(int *)((int)param_1 + 8) + 0x50 + DAT_1031a4bc * 0xdc) = local_4c;
          }
          if (*(float *)(*(int *)((int)param_1 + 8) + 0x58 + DAT_1031a4bc * 0xdc) != 0.0) {
            *(float *)(*(int *)((int)param_1 + 8) + 0xb4 + DAT_1031a4bc * 0xdc) =
                 _DAT_1031a4a0 * *(float *)(*(int *)((int)param_1 + 8) + 0x58 + DAT_1031a4bc * 0xdc)
                 * 100.0 + *(float *)(*(int *)((int)param_1 + 8) + 0xb4 + DAT_1031a4bc * 0xdc);
          }
          *(bool *)(*(int *)((int)param_1 + 8) + 0xcc + DAT_1031a4bc * 0xdc) =
               -1 < *(short *)(*(int *)((int)param_1 + 8) + 0xb8 + DAT_1031a4bc * 0xdc);
          thunk_FUN_100902f0((undefined1 *)(DAT_1031a4bc * 0xdc + *(int *)((int)param_1 + 8)),
                             (undefined4 *)&DAT_1031a438,(float *)&DAT_1031a4a0);
          if (*(int *)(*(int *)((int)param_1 + 8) + 0xd0 + DAT_1031a4bc * 0xdc) != 0) {
            (**(code **)(*(int *)((int)param_1 + 8) + 0xd0 + DAT_1031a4bc * 0xdc))
                      (DAT_1031a4bc * 0xdc + *(int *)((int)param_1 + 8));
          }
          if (*(char *)(*(int *)((int)param_1 + 8) + 0xcc + DAT_1031a4bc * 0xdc) != '\0') {
            lVar6 = __ftol();
            uVar3 = (*DAT_102e1550)(*(undefined4 *)
                                     ((int)param_1 +
                                     *(short *)(*(int *)((int)param_1 + 8) + 0xb8 +
                                               DAT_1031a4bc * 0xdc) * 0x28 + 0x2c),(int)lVar6);
            iVar4 = (**(code **)(DAT_102e15a0 + 0x2c))(uVar3);
            if (iVar4 != 0) {
              (**(code **)(DAT_102e15a0 + 4))
                        ((int)*(short *)((int)param_1 +
                                        *(short *)(*(int *)((int)param_1 + 8) + 0xb8 +
                                                  DAT_1031a4bc * 0xdc) * 0x28 + 0x30));
              (**(code **)(DAT_102e15a0 + 0x28))(1);
              (**(code **)(DAT_102e15a0 + 8))(2);
              (**(code **)(DAT_102e15a0 + 0x10))
                        (*(undefined4 *)(*(int *)((int)param_1 + 8) + 0x50 + DAT_1031a4bc * 0xdc),
                         *(undefined4 *)(*(int *)((int)param_1 + 8) + 0x50 + DAT_1031a4bc * 0xdc),
                         *(undefined4 *)(*(int *)((int)param_1 + 8) + 0x50 + DAT_1031a4bc * 0xdc),
                         0x3f800000);
              thunk_FUN_1008f360(0x1031a438);
              (**(code **)(DAT_102e15a0 + 0xc))();
              (**(code **)(DAT_102e15a0 + 4))(0);
            }
          }
          if ((*(float *)(*(int *)((int)param_1 + 8) + 0x60 + DAT_1031a4bc * 0xdc) != 0.0) &&
             (fVar1 = *(float *)(*(int *)((int)param_1 + 8) + 0x48 + DAT_1031a4bc * 0xdc),
             fVar1 < 0.0 != (fVar1 == 0.0))) {
            *(float *)(*(int *)((int)param_1 + 8) + 0x5c + DAT_1031a4bc * 0xdc) =
                 _DAT_1031a4a0 * *(float *)(*(int *)((int)param_1 + 8) + 0x60 + DAT_1031a4bc * 0xdc)
                 + *(float *)(*(int *)((int)param_1 + 8) + 0x5c + DAT_1031a4bc * 0xdc);
          }
          if (DAT_1031bee4 == 0.0) {
            local_4c = 1.0;
          }
          else {
            local_4c = DAT_1031bee4;
          }
          *(float *)(*(int *)((int)param_1 + 8) + 0x48 + DAT_1031a4bc * 0xdc) =
               *(float *)(*(int *)((int)param_1 + 8) + 0x48 + DAT_1031a4bc * 0xdc) -
               (DAT_1031a4e0 - *(float *)(*(int *)((int)param_1 + 8) + 0x4c + DAT_1031a4bc * 0xdc))
               * local_4c;
          *(float *)(*(int *)((int)param_1 + 8) + 0x4c + DAT_1031a4bc * 0xdc) = DAT_1031a4e0;
        }
        else {
          thunk_FUN_1008ff50(param_1,(short)DAT_1031a4bc);
        }
        DAT_1031a4bc = DAT_1031a4bc + 1;
      }
    }
    *(int *)((int)param_1 + 0xc10) = DAT_1031a4c8;
  }
  return;
}

/* 10091920  FUN_10091920  (82 bytes)
 * float10 FUN_10091920(void)
 * called by: FUN_10091020
 */
float10 FUN_10091920(void)

{
  float10 fVar1;
  
  if (DAT_1031bee4 == 0.0) {
    fVar1 = (float10)DAT_10320fcc;
  }
  else if (0.05 <= DAT_1031bee4) {
    fVar1 = (float10)DAT_10320fcc * (float10)DAT_1031bee4;
  }
  else {
    fVar1 = (float10)0.0;
  }
  return fVar1;
}

/* 10091990  FUN_10091990  (16 bytes)
 * undefined FUN_10091990(void)
 */
void FUN_10091990(void)

{
  return;
}

/* 100919b0  FUN_100919b0  (120 bytes)
 * undefined FUN_100919b0(float * param_1, float param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100919b0(void *this,float *param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = thunk_FUN_10057ff0(this,param_1);
  _DAT_1031a65c = (float)fVar1;
  if ((_DAT_1031a65c != 0.0) && (param_2 < _DAT_1031a65c)) {
    _DAT_1031a594 = param_2 / _DAT_1031a65c;
    *param_1 = _DAT_1031a594 * *param_1;
    param_1[1] = _DAT_1031a594 * param_1[1];
  }
  return;
}

/* 10091a50  FUN_10091a50  (669 bytes)
 * undefined FUN_10091a50(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10091a50(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined1 local_8c [68];
  undefined1 local_48 [68];
  
  if ((-60.0 <= *(float *)(DAT_102eb924 + 0x44)) && (*(float *)(DAT_102eb924 + 0x44) <= 60.0)) {
    DAT_1031a6f0 = *(float *)(DAT_102eb924 + 0x44) < -30.0;
    DAT_1031a584 = *(int *)(DAT_102eb924 + 0xbc);
    *(undefined4 *)(DAT_102eb924 + 0xbc) = 2;
    _DAT_1031a514 = *(float *)(DAT_102eb924 + 0x38);
    _DAT_1031a518 = *(float *)(DAT_102eb924 + 0x3c);
    DAT_1031a51c = *(float *)(DAT_102eb924 + 0x40) + *(float *)(DAT_102eb924 + 0x88) +
                   (float)(-(DAT_1031a6f0 != '\0') & 0x28);
    _DAT_1031a588 = *(float *)(DAT_102eb924 + 0x14) * 64.0 + _DAT_1031a514;
    _DAT_1031a58c = *(float *)(DAT_102eb924 + 0x18) * 64.0 + _DAT_1031a518;
    _DAT_1031a590 = DAT_1031a51c;
    puVar1 = (undefined4 *)
             (**(code **)(DAT_102eb924 + 0x4f580))
                       (local_48,&DAT_1031a514,&DAT_1031a588,0,0xffffffff);
    puVar3 = &DAT_1031a5c0;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    if (_DAT_1031a5d0 == 1.0) {
      DAT_1031a51c = *(float *)(DAT_102eb924 + 0x40) +
                     *(float *)(DAT_102eb924 + 0x4f4fc + DAT_1031a584 * 0xc);
      _DAT_1031a588 = *(float *)(DAT_102eb924 + 0x14) * 32.0 + _DAT_1031a514;
      _DAT_1031a58c = *(float *)(DAT_102eb924 + 0x18) * 32.0 + _DAT_1031a518;
      _DAT_1031a590 = DAT_1031a51c;
      *(undefined4 *)(DAT_102eb924 + 0xbc) = 2;
      puVar1 = (undefined4 *)
               (**(code **)(DAT_102eb924 + 0x4f580))
                         (local_8c,&DAT_1031a514,&DAT_1031a588,0,0xffffffff);
      puVar3 = &DAT_1031a5c0;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      if ((_DAT_1031a5d0 != 1.0) &&
         (fVar4 = thunk_FUN_10057ff0((void *)0x0,(void *)(DAT_102eb924 + 0x5c)),
         fVar4 < (float10)*(float *)(DAT_102eb924 + 500) / (float10)2.0)) {
        *(undefined4 *)(DAT_102eb924 + 0xe0) = 0xffffffff;
        *(float *)(DAT_102eb924 + 100) =
             *(float *)(DAT_102eb924 + 0x10) * 16.0 * 100.0 + *(float *)(DAT_102eb924 + 100);
        thunk_FUN_1005a640();
      }
    }
    *(int *)(DAT_102eb924 + 0xbc) = DAT_1031a584;
    thunk_FUN_1005d710(1);
    thunk_FUN_1005bf30();
  }
  return;
}

/* 10091da0  FUN_10091da0  (550 bytes)
 * undefined FUN_10091da0(void)
 */
void FUN_10091da0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_8c [68];
  undefined1 local_48 [68];
  
  DAT_1031a520 = *(undefined4 *)(DAT_102eb924 + 0x38);
  DAT_1031a524 = *(undefined4 *)(DAT_102eb924 + 0x3c);
  DAT_1031a528 = *(undefined4 *)(DAT_102eb924 + 0x40);
  if (*(int *)(DAT_102eb924 + 0xe0) != -1) {
    for (DAT_1031a510 = 0; DAT_1031a510 < 3; DAT_1031a510 = DAT_1031a510 + 1) {
      (&DAT_1031a520)[DAT_1031a510] =
           (*(float *)(DAT_102eb924 + 0x4f500 + DAT_1031a510 * 4) -
           *(float *)(DAT_102eb924 + 0x4f4f4 + DAT_1031a510 * 4)) +
           (float)(&DAT_1031a520)[DAT_1031a510];
    }
  }
  puVar1 = (undefined4 *)
           (**(code **)(DAT_102eb924 + 0x4f580))(local_48,&DAT_1031a520,&DAT_1031a520,0,0xffffffff);
  puVar3 = &DAT_1031a618;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((*(ushort *)(DAT_102eb924 + 0x45476) & 4) == 0) {
    if (DAT_1031a61c == 0) {
      *(undefined4 *)(DAT_102eb924 + 0xbc) = 0;
      puVar1 = (undefined4 *)
               (**(code **)(DAT_102eb924 + 0x4f580))
                         (local_8c,&DAT_1031a520,&DAT_1031a520,0,0xffffffff);
      puVar3 = &DAT_1031a618;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      if (DAT_1031a61c == 0) {
        *(undefined4 *)(DAT_102eb924 + 0x88) = 0x41e00000;
        *(undefined4 *)(DAT_102eb924 + 0x38) = DAT_1031a520;
        *(undefined4 *)(DAT_102eb924 + 0x3c) = DAT_1031a524;
        *(undefined4 *)(DAT_102eb924 + 0x40) = DAT_1031a528;
        thunk_FUN_1005d710(1);
        thunk_FUN_1005bf30();
        *(uint *)(DAT_102eb924 + 0x208) = *(uint *)(DAT_102eb924 + 0x208) & 0xfffffff7;
      }
      else {
        *(undefined4 *)(DAT_102eb924 + 0xbc) = 1;
      }
    }
    else {
      *(undefined4 *)(DAT_102eb924 + 0xbc) = 1;
      *(uint *)(DAT_102eb924 + 0xb8) = *(uint *)(DAT_102eb924 + 0xb8) | 0x4000;
    }
  }
  else {
    *(undefined4 *)(DAT_102eb924 + 0xbc) = 1;
    *(undefined4 *)(DAT_102eb924 + 0x88) = 0x41800000;
    *(uint *)(DAT_102eb924 + 0x208) = *(uint *)(DAT_102eb924 + 0x208) & 0xfffffff7;
  }
  return;
}

/* 10092050  FUN_10092050  (208 bytes)
 * undefined FUN_10092050(void)
 */
void FUN_10092050(void)

{
  if (*(int *)(DAT_102eb924 + 0xbc) != 1) {
    *(undefined4 *)(DAT_102eb924 + 0xbc) = 1;
    *(uint *)(DAT_102eb924 + 0xb8) = *(uint *)(DAT_102eb924 + 0xb8) | 0x4000;
    if (*(int *)(DAT_102eb924 + 0xe0) != -1) {
      for (DAT_1031a6f8 = 0; DAT_1031a6f8 < 3; DAT_1031a6f8 = DAT_1031a6f8 + 1) {
        *(float *)(DAT_102eb924 + 0x38 + DAT_1031a6f8 * 4) =
             *(float *)(DAT_102eb924 + 0x38 + DAT_1031a6f8 * 4) -
             (*(float *)(DAT_102eb924 + 0x4f500 + DAT_1031a6f8 * 4) -
             *(float *)(DAT_102eb924 + 0x4f4f4 + DAT_1031a6f8 * 4));
      }
      thunk_FUN_1005d710(1);
      thunk_FUN_1005bf30();
    }
  }
  return;
}

/* 10092160  FUN_10092160  (229 bytes)
 * undefined FUN_10092160(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092160(void)

{
  void *pvVar1;
  void *this;
  float10 extraout_ST0;
  
  *(undefined4 *)((int)DAT_102eb924 + 0xe0) = 0xffffffff;
  this = (void *)(*(uint *)((int)DAT_102eb924 + 0x208) & 0x1000);
  if (this != (void *)0x0) {
    _DAT_1031a5a4 = 170.0;
    for (DAT_1031a614 = 0; pvVar1 = DAT_102eb924, DAT_1031a614 < 2; DAT_1031a614 = DAT_1031a614 + 1)
    {
      *(float *)((int)DAT_102eb924 + DAT_1031a614 * 4 + 0x5c) =
           -*(float *)((int)DAT_102eb924 + DAT_1031a614 * 4 + 0x14) * _DAT_1031a5a4;
      this = pvVar1;
    }
    FUN_100bbfe4(this,0,0x40f38800);
    *(float *)((int)DAT_102eb924 + 100) = (float)extraout_ST0;
    *(uint *)((int)DAT_102eb924 + 0x208) = *(uint *)((int)DAT_102eb924 + 0x208) & 0xffffefff;
  }
  thunk_FUN_1005a640();
  thunk_FUN_100919b0((void *)((int)DAT_102eb924 + 0x5c),(void *)((int)DAT_102eb924 + 0x5c),
                     *(float *)((int)DAT_102eb924 + 500) + *(float *)((int)DAT_102eb924 + 500));
  return;
}

/* 10092280  FUN_10092280  (141 bytes)
 * undefined FUN_10092280(void)
 */
void FUN_10092280(void)

{
  void *this;
  float10 extraout_ST0;
  
  *(undefined4 *)(DAT_102eb924 + 0xe0) = 0xffffffff;
  this = (void *)(*(uint *)(DAT_102eb924 + 0x208) & 0x8000);
  if (this != (void *)0x0) {
    FUN_100bbfe4(this,0,0x40f77000);
    *(float *)(DAT_102eb924 + 100) = (float)extraout_ST0;
    *(uint *)(DAT_102eb924 + 0x208) = *(uint *)(DAT_102eb924 + 0x208) & 0xffff7fff;
  }
  thunk_FUN_1005a640();
  thunk_FUN_100919b0((void *)(DAT_102eb924 + 0x5c),(void *)(DAT_102eb924 + 0x5c),
                     *(float *)(DAT_102eb924 + 500) + *(float *)(DAT_102eb924 + 500));
  return;
}

/* 10092330  FUN_10092330  (434 bytes)
 * undefined FUN_10092330(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092330(void)

{
  void *pvVar1;
  void *extraout_ECX;
  void *this;
  float10 extraout_ST0;
  
  if ((*(uint *)((int)DAT_102eb924 + 0x208) & 0x100) == 0) {
    if ((*(uint *)((int)DAT_102eb924 + 0x208) & 0x40) == 0) {
      _DAT_1031a5b8 = 100;
      DAT_1031a530 = 10;
      *(uint *)((int)DAT_102eb924 + 0x208) = *(uint *)((int)DAT_102eb924 + 0x208) & 0xffffff7f;
    }
    else {
      _DAT_1031a5b8 = 0x5a;
      DAT_1031a530 = 0x32;
      *(uint *)((int)DAT_102eb924 + 0x208) = *(uint *)((int)DAT_102eb924 + 0x208) & 0xffffffbf;
    }
  }
  else {
    _DAT_1031a5b8 = 0x5a;
    DAT_1031a530 = 0x19;
    *(uint *)((int)DAT_102eb924 + 0x208) = *(uint *)((int)DAT_102eb924 + 0x208) & 0xfffffeff;
  }
  DAT_1031a608 = *(undefined4 *)((int)DAT_102eb924 + 0x5c);
  DAT_1031a60c = *(undefined4 *)((int)DAT_102eb924 + 0x60);
  _DAT_1031a610 = *(undefined4 *)((int)DAT_102eb924 + 100);
  thunk_FUN_10058070((float *)&DAT_1031a608);
  *(undefined4 *)((int)DAT_102eb924 + 0xe0) = 0xffffffff;
  this = extraout_ECX;
  for (DAT_1031a6fc = 0; pvVar1 = DAT_102eb924, DAT_1031a6fc < 2; DAT_1031a6fc = DAT_1031a6fc + 1) {
    *(float *)((int)DAT_102eb924 + DAT_1031a6fc * 4 + 0x5c) =
         (float)_DAT_1031a5b8 * (float)(&DAT_1031a608)[DAT_1031a6fc] +
         *(float *)((int)DAT_102eb924 + DAT_1031a6fc * 4 + 0x5c);
    this = pvVar1;
  }
  FUN_100bbfe4(this,SUB84((double)(DAT_1031a530 * 0x640),0),
               (uint)((ulonglong)(double)(DAT_1031a530 * 0x640) >> 0x20));
  *(float *)((int)DAT_102eb924 + 100) = (float)extraout_ST0;
  thunk_FUN_1005a640();
  thunk_FUN_100919b0((void *)((int)DAT_102eb924 + 0x5c),(void *)((int)DAT_102eb924 + 0x5c),
                     *(float *)((int)DAT_102eb924 + 500) + *(float *)((int)DAT_102eb924 + 500));
  return;
}

/* 10092550  FUN_10092550  (390 bytes)
 * undefined FUN_10092550(void)
 */
void FUN_10092550(void)

{
  if (((*(ushort *)(DAT_102eb924 + 0x45476) & 2) != 0) && (*(int *)(DAT_102eb924 + 0xe0) == -1)) {
    thunk_FUN_10091a50();
  }
  if ((*(uint *)(DAT_102eb924 + 0x208) & 1) != 0) {
    *(float *)(DAT_102eb924 + 0x45468) = *(float *)(DAT_102eb924 + 0x45468) * 0.1;
    *(float *)(DAT_102eb924 + 0x4546c) = *(float *)(DAT_102eb924 + 0x4546c) * 0.1;
    *(float *)(DAT_102eb924 + 0x45470) = *(float *)(DAT_102eb924 + 0x45470) * 0.1;
  }
  if ((*(uint *)(DAT_102eb924 + 0x208) & 0x20) != 0) {
    *(float *)(DAT_102eb924 + 0x45468) = *(float *)(DAT_102eb924 + 0x45468) * 0.0;
    *(float *)(DAT_102eb924 + 0x4546c) = *(float *)(DAT_102eb924 + 0x4546c) * 0.3;
    *(float *)(DAT_102eb924 + 0x45470) = *(float *)(DAT_102eb924 + 0x45470) * 0.3;
  }
  if ((*(uint *)(DAT_102eb924 + 0x208) & 0x1c0) != 0) {
    thunk_FUN_10092330();
  }
  if ((*(uint *)(DAT_102eb924 + 0x208) & 0x7000) != 0) {
    thunk_FUN_10092160();
  }
  if ((*(uint *)(DAT_102eb924 + 0x208) & 0x8000) != 0) {
    thunk_FUN_10092280();
  }
  if ((*(uint *)(DAT_102eb924 + 0x208) & 4) != 0) {
    thunk_FUN_10092050();
  }
  if ((*(uint *)(DAT_102eb924 + 0x208) & 8) != 0) {
    thunk_FUN_10091da0();
  }
  return;
}

/* 10092740  FUN_10092740  (407 bytes)
 * undefined4 FUN_10092740(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10092740(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_48 [68];
  
  DAT_1031a604 = *(undefined4 *)(DAT_102eb924 + 0xbc);
  _DAT_1031a598 = *(float *)(DAT_102eb924 + 0x5c);
  _DAT_1031a59c = *(float *)(DAT_102eb924 + 0x60);
  _DAT_1031a5a0 = *(undefined4 *)(DAT_102eb924 + 100);
  thunk_FUN_10058070((float *)&DAT_1031a598);
  _DAT_1031a664 = *(float *)(DAT_102eb924 + 0x38);
  _DAT_1031a668 = *(float *)(DAT_102eb924 + 0x3c);
  _DAT_1031a53c = *(undefined4 *)(DAT_102eb924 + 0x40);
  _DAT_1031a534 = _DAT_1031a598 * 128.0 + _DAT_1031a664;
  _DAT_1031a538 = _DAT_1031a59c * 128.0 + _DAT_1031a668;
  DAT_1031a66c = _DAT_1031a53c;
  *(undefined4 *)(DAT_102eb924 + 0xbc) = 1;
  puVar2 = (undefined4 *)
           (**(code **)(DAT_102eb924 + 0x4f580))(local_48,&DAT_1031a664,&DAT_1031a534,0,0xffffffff);
  puVar4 = &DAT_1031a540;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (_DAT_1031a550 != 1.0) {
    _DAT_1031a534 = _DAT_1031a598 * 164.0 + *(float *)(DAT_102eb924 + 0x38);
    _DAT_1031a538 = _DAT_1031a59c * 164.0 + *(float *)(DAT_102eb924 + 0x3c);
    _DAT_1031a53c = *(undefined4 *)(DAT_102eb924 + 0x40);
    DAT_1031a52c = (**(code **)(DAT_102eb924 + 0x4f574))(&DAT_1031a534,0);
    if ((DAT_1031a52c != -2) && (DAT_1031a52c != -6)) {
      return CONCAT31((int3)((uint)DAT_1031a52c >> 8),1);
    }
  }
  uVar1 = DAT_102eb924;
  *(undefined4 *)(DAT_102eb924 + 0xbc) = DAT_1031a604;
  return uVar1 & 0xffffff00;
}

/* 10092940  FUN_10092940  (1421 bytes)
 * undefined FUN_10092940(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092940(void)

{
  void *pvVar1;
  undefined4 uVar2;
  byte_conflict *pbVar3;
  int iVar4;
  void *extraout_ECX;
  void *pvVar5;
  void *extraout_ECX_00;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 uVar6;
  
  if (*(int *)((int)DAT_102eb924 + 0xd0) == 0) {
    if ((((((*(uint *)((int)DAT_102eb924 + 0x208) & 0x20) == 0) &&
          ((*(uint *)((int)DAT_102eb924 + 0x208) & 0x10) == 0)) &&
         ((*(uint *)((int)DAT_102eb924 + 0x208) & 0x10000) == 0)) &&
        (((*(uint *)((int)DAT_102eb924 + 0x208) & 0x20000) == 0 &&
         ((*(uint *)((int)DAT_102eb924 + 0x208) & 0xc00) == 0)))) &&
       ((*(uint *)((int)DAT_102eb924 + 0x208) & 4) == 0)) {
      if (*(float *)((int)DAT_102eb924 + 0xcc) == 0.0) {
        if (*(int *)((int)DAT_102eb924 + 0xe4) < 2) {
          if (*(int *)((int)DAT_102eb924 + 0xe0) == -1) {
            *(uint *)((int)DAT_102eb924 + 200) = *(uint *)((int)DAT_102eb924 + 200) | 2;
          }
          else if ((*(uint *)((int)DAT_102eb924 + 200) & 2) == 0) {
            *(undefined4 *)((int)DAT_102eb924 + 0xe0) = 0xffffffff;
            thunk_FUN_1005e9a0((void *)0x0);
            uVar6 = 0x3f800000;
            uVar2 = thunk_FUN_100596d0(*(undefined1 *)((int)DAT_102eb924 + 0x1f0));
            thunk_FUN_10058c30(uVar2,uVar6);
            pbVar3 = (byte_conflict *)
                     (**(code **)((int)DAT_102eb924 + 0x4f554))
                               ((int)DAT_102eb924 + 0x4f3f0,&DAT_10271c10);
            iVar4 = FUN_100c0d30(pbVar3);
            DAT_1031a5b4 = (uint)(iVar4 == 1);
            if ((*(int *)((int)DAT_102eb924 + 0x90) == 0) &&
               ((*(uint *)((int)DAT_102eb924 + 0xb8) & 0x4000) == 0)) {
              DAT_1031a5b4 = 0;
            }
            else if ((DAT_1031a5b4 == 0) ||
                    (((*(ushort *)((int)DAT_102eb924 + 0x45476) & 4) == 0 ||
                     (*(float *)((int)DAT_102eb924 + 0x8c) <= 0.0)))) {
              DAT_1031a5b4 = 0;
            }
            else {
              DAT_1031a5a8 = *(undefined4 *)((int)DAT_102eb924 + 0x5c);
              DAT_1031a5ac = *(undefined4 *)((int)DAT_102eb924 + 0x60);
              _DAT_1031a5b0 = *(undefined4 *)((int)DAT_102eb924 + 100);
              thunk_FUN_10058070((float *)&DAT_1031a5a8);
              pvVar5 = extraout_ECX;
              for (DAT_1031a6f4 = 0; pvVar1 = DAT_102eb924, DAT_1031a6f4 < 2;
                  DAT_1031a6f4 = DAT_1031a6f4 + 1) {
                *(float *)((int)DAT_102eb924 + DAT_1031a6f4 * 4 + 0x5c) =
                     (float)(&DAT_1031a5a8)[DAT_1031a6f4] * 100.0 +
                     *(float *)((int)DAT_102eb924 + DAT_1031a6f4 * 4 + 0x5c);
                pvVar5 = pvVar1;
              }
              FUN_100bbfe4(pvVar5,0,0x41038800);
              *(float *)((int)DAT_102eb924 + 100) = (float)extraout_ST0;
              *(uint *)((int)DAT_102eb924 + 0x208) = *(uint *)((int)DAT_102eb924 + 0x208) | 0x100000
              ;
            }
            if (DAT_1031a5b4 == 0) {
              pvVar5 = (void *)(*(ushort *)((int)DAT_102eb924 + 0x45476) & 0x600);
              if ((*(ushort *)((int)DAT_102eb924 + 0x45476) & 0x600) != 0) {
                DAT_1031a5a8 = *(undefined4 *)((int)DAT_102eb924 + 0x5c);
                DAT_1031a5ac = *(undefined4 *)((int)DAT_102eb924 + 0x60);
                _DAT_1031a5b0 = *(undefined4 *)((int)DAT_102eb924 + 100);
                thunk_FUN_10058070((float *)&DAT_1031a5a8);
                for (DAT_1031a6f4 = 0; DAT_1031a6f4 < 2; DAT_1031a6f4 = DAT_1031a6f4 + 1) {
                  *(float *)((int)DAT_102eb924 + DAT_1031a6f4 * 4 + 0x5c) =
                       (float)(&DAT_1031a5a8)[DAT_1031a6f4] * 100.0 +
                       *(float *)((int)DAT_102eb924 + DAT_1031a6f4 * 4 + 0x5c);
                }
                thunk_FUN_100919b0(*(void **)((int)DAT_102eb924 + 500),
                                   (float *)((int)DAT_102eb924 + 0x5c),
                                   (float)*(void **)((int)DAT_102eb924 + 500));
                pvVar5 = extraout_ECX_00;
              }
              FUN_100bbfe4(pvVar5,0,0x40eb5800);
              *(float *)((int)DAT_102eb924 + 100) = (float)extraout_ST0_00;
            }
            thunk_FUN_1005a640();
            *(uint *)((int)DAT_102eb924 + 200) = *(uint *)((int)DAT_102eb924 + 200) | 2;
          }
        }
        else {
          *(undefined4 *)((int)DAT_102eb924 + 0xe0) = 0xffffffff;
          if (*(int *)((int)DAT_102eb924 + 0xe8) == -3) {
            *(undefined4 *)((int)DAT_102eb924 + 100) = 0x42c80000;
          }
          else if (*(int *)((int)DAT_102eb924 + 0xe8) == -4) {
            *(undefined4 *)((int)DAT_102eb924 + 100) = 0x42a00000;
          }
          else {
            *(undefined4 *)((int)DAT_102eb924 + 100) = 0x42480000;
          }
          if (*(float *)((int)DAT_102eb924 + 0xac) < 0.0 !=
              (*(float *)((int)DAT_102eb924 + 0xac) == 0.0)) {
            *(undefined4 *)((int)DAT_102eb924 + 0xac) = 0x447a0000;
            uVar2 = (**(code **)((int)DAT_102eb924 + 0x4f588))(0,3);
            switch(uVar2) {
            case 0:
              (**(code **)((int)DAT_102eb924 + 0x4f5b4))
                        (4,"player/pl_wade1.wav",0x3f800000,0x3f4ccccd,0,100);
              break;
            case 1:
              (**(code **)((int)DAT_102eb924 + 0x4f5b4))
                        (4,"player/pl_wade2.wav",0x3f800000,0x3f4ccccd,0,100);
              break;
            case 2:
              (**(code **)((int)DAT_102eb924 + 0x4f5b4))
                        (4,"player/pl_wade3.wav",0x3f800000,0x3f4ccccd,0,100);
              break;
            case 3:
              (**(code **)((int)DAT_102eb924 + 0x4f5b4))
                        (4,"player/pl_wade4.wav",0x3f800000,0x3f4ccccd,0,100);
            }
          }
        }
      }
      else {
        *(float *)((int)DAT_102eb924 + 0xcc) =
             *(float *)((int)DAT_102eb924 + 0xcc) - (float)*(byte *)((int)DAT_102eb924 + 0x4545a);
        if (*(float *)((int)DAT_102eb924 + 0xcc) < 0.0) {
          *(undefined4 *)((int)DAT_102eb924 + 0xcc) = 0;
        }
      }
    }
  }
  else {
    *(uint *)((int)DAT_102eb924 + 200) = *(uint *)((int)DAT_102eb924 + 200) | 2;
  }
  return;
}

/* 10093050  FUN_10093050  (1135 bytes)
 * undefined FUN_10093050(void)
 */
void FUN_10093050(void)

{
  float fVar1;
  float10 extraout_ST0;
  float10 fVar2;
  undefined4 local_64;
  float fStack_60;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_8 = (float)DAT_102eb924[0x1151c] * (float)DAT_102eb924[0x1151c] +
            (float)DAT_102eb924[0x1151b] * (float)DAT_102eb924[0x1151b] +
            (float)DAT_102eb924[0x1151a] * (float)DAT_102eb924[0x1151a];
  FUN_100bbfe4(DAT_102eb924,SUB84((double)local_8,0),(uint)((ulonglong)(double)local_8 >> 0x20));
  local_8 = (float)extraout_ST0;
  local_c = (float)DAT_102eb924[0x7e];
  if (local_c != 0.0) {
    fStack_60 = local_c;
    if ((float)DAT_102eb924[0x7d] <= local_c) {
      fStack_60 = (float)DAT_102eb924[0x7d];
    }
    DAT_102eb924[0x7d] = (int)fStack_60;
  }
  if (((local_8 != 0.0) && ((float)DAT_102eb924[0x7d] < local_8)) &&
     (fVar1 = (float)DAT_102eb924[0x7d] / local_8, 0 < DAT_102eb924[0x7f])) {
    DAT_102eb924[0x1151a] = (int)(fVar1 * (float)DAT_102eb924[0x1151a]);
    DAT_102eb924[0x1151b] = (int)(fVar1 * (float)DAT_102eb924[0x1151b]);
    DAT_102eb924[0x1151c] = (int)(fVar1 * (float)DAT_102eb924[0x1151c]);
  }
  if (((((DAT_102eb924[0x2e] & 0x1000U) != 0) || ((DAT_102eb924[0x2e] & 0x1000000U) != 0)) ||
      ((DAT_102eb924[0x34] != 0 ||
       (((DAT_102eb924[0x82] & 0x10U) != 0 || ((DAT_102eb924[0x82] & 0x10000U) != 0)))))) ||
     ((DAT_102eb924[0x82] & 0xc00U) != 0)) {
    DAT_102eb924[0x1151a] = 0;
    DAT_102eb924[0x1151b] = 0;
    DAT_102eb924[0x1151c] = 0;
  }
  if ((DAT_102eb924[0x82] & 0x80000U) != 0) {
    DAT_102eb924[0x1151a] = (int)((float)DAT_102eb924[0x1151a] * 0.5);
    DAT_102eb924[0x1151b] = (int)((float)DAT_102eb924[0x1151b] * 0.25);
    DAT_102eb924[0x1151c] = (int)((float)DAT_102eb924[0x1151c] * 0.25);
    if ((*(ushort *)((int)DAT_102eb924 + 0x45476) & 2) == 0) {
      DAT_102eb924[0x30] = 0x3f800000;
    }
    else {
      if (0.0 <= (float)DAT_102eb924[0x19]) {
        local_64 = 0x33333333;
        fStack_60 = 1.65;
      }
      else {
        local_64 = 0;
        fStack_60 = 1.8125;
      }
      DAT_102eb924[0x30] = (int)(float)(double)CONCAT44(fStack_60,local_64);
    }
  }
  thunk_FUN_1005f270((float *)(DAT_102eb924 + 0x28));
  if ((DAT_102eb924[0x34] == 0) && ((DAT_102eb924[0x82] & 2U) == 0)) {
    local_18 = (float)DAT_102eb924[0x11517] + (float)DAT_102eb924[0x28];
    local_14 = (float)DAT_102eb924[0x11518] + (float)DAT_102eb924[0x29];
    local_10 = (float)DAT_102eb924[0x11519] + (float)DAT_102eb924[0x2a];
    fVar2 = thunk_FUN_1005f190(&local_18,(float *)(DAT_102eb924 + 0x17),
                               *(float *)(DAT_102eb924[0x13d3c] + 100),
                               *(float *)(DAT_102eb924[0x13d3c] + 0x68));
    DAT_102eb924[0x13] = (int)(float)(fVar2 * (float10)4.0);
    DAT_102eb924[0x11] = (int)local_18;
    DAT_102eb924[0x12] = (int)local_14;
    if ((-1 < *DAT_102eb924) && (*DAT_102eb924 < 0x20)) {
      *(int *)(&DAT_1031a670 + *DAT_102eb924 * 4) = DAT_102eb924[0x12];
    }
  }
  else if ((-1 < *DAT_102eb924) && (*DAT_102eb924 < 0x20)) {
    DAT_102eb924[0x12] = *(int *)(&DAT_1031a670 + *DAT_102eb924 * 4);
  }
  if (DAT_102eb924[0x34] != 0) {
    DAT_102eb924[0x22] = -0x3f000000;
  }
  if (180.0 < (float)DAT_102eb924[0x12]) {
    DAT_102eb924[0x12] = (int)((float)DAT_102eb924[0x12] - 360.0);
  }
  return;
}

/* 100935e0  FUN_100935e0  (1067 bytes)
 * undefined FUN_100935e0(void)
 */
void FUN_100935e0(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  int local_8;
  
  uVar1 = *(ushort *)(DAT_102eb924 + 0x45476);
  uVar3 = *(uint *)(DAT_102eb924 + 200);
  uVar2 = *(ushort *)(DAT_102eb924 + 0x45476);
  if ((*(ushort *)(DAT_102eb924 + 0x45476) & 4) == 0) {
    *(uint *)(DAT_102eb924 + 200) = *(uint *)(DAT_102eb924 + 200) & 0xfffffffb;
  }
  else {
    *(uint *)(DAT_102eb924 + 200) = *(uint *)(DAT_102eb924 + 200) | 4;
  }
  if ((((((*(uint *)(DAT_102eb924 + 0x208) & 4) == 0) &&
        ((*(uint *)(DAT_102eb924 + 0x208) & 8) == 0)) &&
       ((*(uint *)(DAT_102eb924 + 0x208) & 0x20) == 0)) &&
      (((*(uint *)(DAT_102eb924 + 0x208) & 0x10) == 0 &&
       ((*(uint *)(DAT_102eb924 + 0x208) & 0x10000) == 0)))) &&
     (((*(uint *)(DAT_102eb924 + 0x208) & 0x20000) == 0 &&
      ((*(uint *)(DAT_102eb924 + 0x208) & 0xc00) == 0)))) {
    if ((*(int *)(DAT_102eb924 + 0x204) == 0) && (*(int *)(DAT_102eb924 + 0xd0) == 0)) {
      if ((*(uint *)(DAT_102eb924 + 0xb8) & 0x4000) != 0) {
        *(float *)(DAT_102eb924 + 0x45468) = *(float *)(DAT_102eb924 + 0x45468) * 0.333;
        *(float *)(DAT_102eb924 + 0x4546c) = *(float *)(DAT_102eb924 + 0x4546c) * 0.333;
        *(float *)(DAT_102eb924 + 0x45470) = *(float *)(DAT_102eb924 + 0x45470) * 0.333;
      }
      if ((((*(ushort *)(DAT_102eb924 + 0x45476) & 4) != 0) || (*(int *)(DAT_102eb924 + 0x90) != 0))
         || ((*(uint *)(DAT_102eb924 + 0xb8) & 0x4000) != 0)) {
        if ((*(ushort *)(DAT_102eb924 + 0x45476) & 4) == 0) {
          thunk_FUN_1005d810();
        }
        else {
          if ((((uVar3 ^ uVar1) & (uint)uVar2 & 4) != 0) &&
             ((*(uint *)(DAT_102eb924 + 0xb8) & 0x4000) == 0)) {
            *(undefined4 *)(DAT_102eb924 + 0x8c) = 0x447a0000;
            *(undefined4 *)(DAT_102eb924 + 0x90) = 1;
          }
          if (0.0 <= 1.0 - *(float *)(DAT_102eb924 + 0x8c) / 1000.0) {
            fVar4 = 1.0 - *(float *)(DAT_102eb924 + 0x8c) / 1000.0;
          }
          else {
            fVar4 = 0.0;
          }
          if (*(int *)(DAT_102eb924 + 0x90) != 0) {
            fVar5 = *(float *)(DAT_102eb924 + 0x8c) / 1000.0;
            if ((fVar5 < 0.6 == (fVar5 == 0.6)) && (*(int *)(DAT_102eb924 + 0xe0) != -1)) {
              fVar6 = thunk_FUN_1005d6c0(fVar4,2.5);
              *(float *)(DAT_102eb924 + 0x88) = (1.0 - (float)fVar6) * 28.0 + (float)fVar6 * -2.0;
            }
            else {
              *(undefined4 *)(DAT_102eb924 + 0xbc) = 1;
              *(undefined4 *)(DAT_102eb924 + 0x88) = 0x41800000;
              *(uint *)(DAT_102eb924 + 0xb8) = *(uint *)(DAT_102eb924 + 0xb8) | 0x4000;
              *(undefined4 *)(DAT_102eb924 + 0x90) = 0;
              if (*(int *)(DAT_102eb924 + 0xe0) != -1) {
                for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
                  *(float *)(DAT_102eb924 + 0x38 + local_8 * 4) =
                       *(float *)(DAT_102eb924 + 0x38 + local_8 * 4) -
                       (*(float *)(DAT_102eb924 + 0x4f500 + local_8 * 4) -
                       *(float *)(DAT_102eb924 + 0x4f4f4 + local_8 * 4));
                }
                thunk_FUN_1005d710(1);
                thunk_FUN_1005bf30();
              }
            }
          }
        }
      }
    }
    else if ((*(uint *)(DAT_102eb924 + 0xb8) & 0x4000) != 0) {
      thunk_FUN_1005d810();
    }
  }
  return;
}

/* 10093b20  FUN_10093b20  (1610 bytes)
 * undefined FUN_10093b20(void)
 */
void FUN_10093b20(void)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined1 local_198 [68];
  undefined1 local_154 [68];
  undefined1 local_110 [68];
  int local_cc [4];
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_a4;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c [3];
  int local_10;
  int local_c;
  
  local_24 = *(float *)((int)DAT_102eb924 + 0x45468);
  if (local_24 < 0.0) {
    local_24 = local_24 * 0.8;
  }
  local_28 = *(float *)((int)DAT_102eb924 + 0x4546c) / 1.0;
  *(undefined4 *)((int)DAT_102eb924 + 0x1c) = 0;
  *(undefined4 *)((int)DAT_102eb924 + 0x28) = 0;
  thunk_FUN_10058070((float *)((int)DAT_102eb924 + 0x14));
  thunk_FUN_10058070((float *)((int)DAT_102eb924 + 0x20));
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    local_1c[local_10] =
         local_28 * *(float *)((int)DAT_102eb924 + local_10 * 4 + 0x20) +
         local_24 * *(float *)((int)DAT_102eb924 + local_10 * 4 + 0x14);
  }
  local_1c[2] = 0.0;
  local_34 = local_1c[0];
  local_30 = local_1c[1];
  local_2c = 0;
  fVar5 = thunk_FUN_10058070(&local_34);
  local_38 = (float)fVar5;
  if (*(float *)((int)DAT_102eb924 + 500) < local_38) {
    thunk_FUN_10058180(local_1c,*(float *)((int)DAT_102eb924 + 500) / local_38,local_1c);
    local_38 = *(float *)((int)DAT_102eb924 + 500);
  }
  *(undefined4 *)((int)DAT_102eb924 + 100) = 0;
  thunk_FUN_1005aef0(&local_34,local_38,*(float *)(*(int *)((int)DAT_102eb924 + 0x4f4f0) + 0x10));
  *(undefined4 *)((int)DAT_102eb924 + 100) = 0;
  *(float *)((int)DAT_102eb924 + 0x5c) =
       *(float *)((int)DAT_102eb924 + 0x5c) + *(float *)((int)DAT_102eb924 + 0x74);
  *(float *)((int)DAT_102eb924 + 0x60) =
       *(float *)((int)DAT_102eb924 + 0x60) + *(float *)((int)DAT_102eb924 + 0x78);
  pvVar1 = DAT_102eb924;
  *(float *)((int)DAT_102eb924 + 100) =
       *(float *)((int)DAT_102eb924 + 100) + *(float *)((int)DAT_102eb924 + 0x7c);
  fVar5 = thunk_FUN_10057ff0(pvVar1,(void *)((int)DAT_102eb924 + 0x5c));
  local_20 = (float)fVar5;
  if (1.0 <= local_20) {
    local_c = *(int *)((int)DAT_102eb924 + 0xe0);
    local_50 = *(float *)((int)DAT_102eb924 + 0x5c) * *(float *)((int)DAT_102eb924 + 0x10) +
               *(float *)((int)DAT_102eb924 + 0x38);
    local_4c = *(float *)((int)DAT_102eb924 + 0x60) * *(float *)((int)DAT_102eb924 + 0x10) +
               *(float *)((int)DAT_102eb924 + 0x3c);
    local_48 = *(undefined4 *)((int)DAT_102eb924 + 0x40);
    local_44 = local_50;
    local_40 = local_4c;
    local_3c = (float)local_48;
    piVar2 = (int *)(**(code **)((int)DAT_102eb924 + 0x4f580))
                              (local_110,(int)DAT_102eb924 + 0x38,&local_44,0,0xffffffff);
    piVar4 = local_cc;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    if (local_bc == 0x3f800000) {
      *(undefined4 *)((int)DAT_102eb924 + 0x38) = local_b8;
      *(undefined4 *)((int)DAT_102eb924 + 0x3c) = local_b4;
      *(undefined4 *)((int)DAT_102eb924 + 0x40) = local_b0;
    }
    else if (((local_c != -1) || (*(int *)((int)DAT_102eb924 + 0xe4) != 0)) &&
            (*(float *)((int)DAT_102eb924 + 0xcc) == 0.0)) {
      local_5c = *(float *)((int)DAT_102eb924 + 0x38);
      local_58 = *(float *)((int)DAT_102eb924 + 0x3c);
      local_54 = *(undefined4 *)((int)DAT_102eb924 + 0x40);
      local_68 = *(undefined4 *)((int)DAT_102eb924 + 0x5c);
      local_64 = *(undefined4 *)((int)DAT_102eb924 + 0x60);
      local_60 = *(undefined4 *)((int)DAT_102eb924 + 100);
      thunk_FUN_1005a700();
      local_74 = *(float *)((int)DAT_102eb924 + 0x38);
      local_70 = *(float *)((int)DAT_102eb924 + 0x3c);
      local_6c = *(undefined4 *)((int)DAT_102eb924 + 0x40);
      local_80 = *(undefined4 *)((int)DAT_102eb924 + 0x5c);
      local_7c = *(undefined4 *)((int)DAT_102eb924 + 0x60);
      local_78 = *(undefined4 *)((int)DAT_102eb924 + 100);
      *(float *)((int)DAT_102eb924 + 0x38) = local_5c;
      *(float *)((int)DAT_102eb924 + 0x3c) = local_58;
      *(undefined4 *)((int)DAT_102eb924 + 0x40) = local_54;
      *(undefined4 *)((int)DAT_102eb924 + 0x5c) = local_68;
      *(undefined4 *)((int)DAT_102eb924 + 0x60) = local_64;
      *(undefined4 *)((int)DAT_102eb924 + 100) = local_60;
      local_44 = *(float *)((int)DAT_102eb924 + 0x38);
      local_40 = *(float *)((int)DAT_102eb924 + 0x3c);
      local_3c = *(float *)((int)DAT_102eb924 + 0x40) +
                 *(float *)(*(int *)((int)DAT_102eb924 + 0x4f4f0) + 0x30);
      piVar2 = (int *)(**(code **)((int)DAT_102eb924 + 0x4f580))
                                (local_154,(int)DAT_102eb924 + 0x38,&local_44,0,0xffffffff);
      piVar4 = local_cc;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      }
      if ((local_cc[1] == 0) && (local_cc[0] == 0)) {
        *(undefined4 *)((int)DAT_102eb924 + 0x38) = local_b8;
        *(undefined4 *)((int)DAT_102eb924 + 0x3c) = local_b4;
        *(undefined4 *)((int)DAT_102eb924 + 0x40) = local_b0;
      }
      thunk_FUN_1005a700();
      local_44 = *(float *)((int)DAT_102eb924 + 0x38);
      local_40 = *(float *)((int)DAT_102eb924 + 0x3c);
      local_3c = *(float *)((int)DAT_102eb924 + 0x40) -
                 *(float *)(*(int *)((int)DAT_102eb924 + 0x4f4f0) + 0x30);
      piVar2 = (int *)(**(code **)((int)DAT_102eb924 + 0x4f580))
                                (local_198,(int)DAT_102eb924 + 0x38,&local_44,0,0xffffffff);
      piVar4 = local_cc;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      }
      if (0.7 <= local_a4) {
        if ((local_cc[1] == 0) && (local_cc[0] == 0)) {
          *(undefined4 *)((int)DAT_102eb924 + 0x38) = local_b8;
          *(undefined4 *)((int)DAT_102eb924 + 0x3c) = local_b4;
          *(undefined4 *)((int)DAT_102eb924 + 0x40) = local_b0;
        }
        *(undefined4 *)((int)DAT_102eb924 + 0x2c) = *(undefined4 *)((int)DAT_102eb924 + 0x38);
        *(undefined4 *)((int)DAT_102eb924 + 0x30) = *(undefined4 *)((int)DAT_102eb924 + 0x3c);
        *(undefined4 *)((int)DAT_102eb924 + 0x34) = *(undefined4 *)((int)DAT_102eb924 + 0x40);
        if ((local_70 - local_58) * (local_70 - local_58) +
            (local_74 - local_5c) * (local_74 - local_5c) <=
            (*(float *)((int)DAT_102eb924 + 0x30) - local_58) *
            (*(float *)((int)DAT_102eb924 + 0x30) - local_58) +
            (*(float *)((int)DAT_102eb924 + 0x2c) - local_5c) *
            (*(float *)((int)DAT_102eb924 + 0x2c) - local_5c)) {
          *(undefined4 *)((int)DAT_102eb924 + 100) = local_78;
          return;
        }
      }
      *(float *)((int)DAT_102eb924 + 0x38) = local_74;
      *(float *)((int)DAT_102eb924 + 0x3c) = local_70;
      *(undefined4 *)((int)DAT_102eb924 + 0x40) = local_6c;
      *(undefined4 *)((int)DAT_102eb924 + 0x5c) = local_80;
      *(undefined4 *)((int)DAT_102eb924 + 0x60) = local_7c;
      *(undefined4 *)((int)DAT_102eb924 + 100) = local_78;
    }
  }
  else {
    *(undefined4 *)((int)DAT_102eb924 + 0x5c) = 0;
    *(undefined4 *)((int)DAT_102eb924 + 0x60) = 0;
    *(undefined4 *)((int)DAT_102eb924 + 100) = 0;
  }
  return;
}

/* 10094300  FUN_10094300  (2339 bytes)
 * undefined FUN_10094300(void)
 */
void FUN_10094300(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  void *pvVar8;
  undefined1 *puVar9;
  double local_4a0;
  undefined1 local_458 [12];
  undefined1 local_44c [12];
  undefined1 local_440 [12];
  undefined1 local_434 [12];
  undefined1 local_428 [12];
  undefined1 local_41c [12];
  undefined1 local_410 [12];
  undefined1 local_404 [12];
  undefined1 local_3f8 [12];
  undefined1 local_3ec [12];
  undefined1 local_3e0 [12];
  undefined1 local_3d4 [12];
  undefined1 local_3c8 [12];
  undefined1 local_3bc [12];
  undefined1 local_3b0 [12];
  undefined1 local_3a4 [12];
  undefined1 local_398 [12];
  undefined1 local_38c [12];
  undefined1 local_380 [12];
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
  undefined1 local_2fc [12];
  undefined1 local_2f0 [12];
  undefined1 local_2e4 [12];
  undefined1 local_2d8 [12];
  undefined1 local_2cc [12];
  undefined1 local_2c0 [12];
  undefined1 local_2b4 [12];
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
  undefined1 local_80 [12];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  iVar2 = thunk_FUN_100b5a50();
  if ((((iVar2 == 0) && (uVar3 = thunk_FUN_100885b0(), (uVar3 & 0xff) == 0)) &&
      (cVar1 = thunk_FUN_10088600(), cVar1 == '\0')) &&
     ((DAT_102da420 < 0x28 &&
      (local_8 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/quarterscope.spr",2),
      local_8 != -1)))) {
    uVar4 = (*DAT_102e1550)(*(undefined4 *)(&DAT_1031abdc + local_8 * 0x28),0);
    iVar2 = (**(code **)(DAT_102e15a0 + 0x2c))(uVar4);
    if (iVar2 != 0) {
      thunk_FUN_1006a030(&local_58);
      thunk_FUN_10007fe0(&local_68);
      thunk_FUN_10007fe0(&local_74);
      thunk_FUN_10007fe0(local_80);
      (**(code **)(DAT_102e15a0 + 4))(2);
      (**(code **)(DAT_102e15a0 + 0x28))(1);
      (**(code **)(DAT_102e15a0 + 8))(2);
      (**(code **)(DAT_102e15a0 + 0x10))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
      if ((double)DAT_102da420 * 0.1 <= 1.0) {
        local_4a0 = 1.0;
      }
      else {
        local_4a0 = (double)DAT_102da420 * 0.1;
      }
      local_5c = (float)((float10)local_4a0 / (float10)2.0);
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab5c,local_8c,10.0);
      puVar6 = thunk_FUN_1000d970(&DAT_10320680,local_98,pfVar5);
      local_68 = *puVar6;
      local_64 = puVar6[1];
      local_60 = puVar6[2];
      local_28 = 0;
      local_18 = 0;
      local_24 = 0x3f800000;
      local_14 = 0;
      local_20 = 0x3f800000;
      local_10 = 0x3f800000;
      local_1c = 0;
      local_c = 0x3f800000;
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_bc,local_5c);
      puVar9 = local_c8;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_a4,local_5c);
      pvVar8 = thunk_FUN_1000d970(&local_68,local_b0,pfVar7);
      puVar6 = thunk_FUN_1000d970(pvVar8,puVar9,pfVar5);
      local_74 = *puVar6;
      local_70 = puVar6[1];
      local_6c = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_ec,local_5c);
      puVar9 = local_f8;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_d4,local_5c);
      pvVar8 = thunk_FUN_1000d970(&local_74,local_e0,pfVar7);
      puVar6 = thunk_FUN_1000ca70(pvVar8,puVar9,pfVar5);
      local_4c = *puVar6;
      local_48 = puVar6[1];
      local_44 = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_11c,local_5c);
      puVar9 = local_128;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_104,local_5c);
      pvVar8 = thunk_FUN_1000d970(&local_74,local_110,pfVar7);
      puVar6 = thunk_FUN_1000d970(pvVar8,puVar9,pfVar5);
      local_58 = *puVar6;
      local_54 = puVar6[1];
      local_50 = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_14c,local_5c);
      puVar9 = local_158;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_134,local_5c);
      pvVar8 = thunk_FUN_1000ca70(&local_74,local_140,pfVar7);
      puVar6 = thunk_FUN_1000d970(pvVar8,puVar9,pfVar5);
      local_34 = *puVar6;
      local_30 = puVar6[1];
      local_2c = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_17c,local_5c);
      puVar9 = local_188;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_164,local_5c);
      pvVar8 = thunk_FUN_1000ca70(&local_74,local_170,pfVar7);
      puVar6 = thunk_FUN_1000ca70(pvVar8,puVar9,pfVar5);
      local_40 = *puVar6;
      local_3c = puVar6[1];
      local_38 = puVar6[2];
      thunk_FUN_1008f360((int)&local_58);
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_1ac,local_5c);
      puVar9 = local_1b8;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_194,local_5c);
      pvVar8 = thunk_FUN_1000d970(&local_68,local_1a0,pfVar7);
      puVar6 = thunk_FUN_1000ca70(pvVar8,puVar9,pfVar5);
      local_74 = *puVar6;
      local_70 = puVar6[1];
      local_6c = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_1dc,local_5c);
      puVar9 = local_1e8;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_1c4,local_5c);
      pvVar8 = thunk_FUN_1000d970(&local_74,local_1d0,pfVar7);
      puVar6 = thunk_FUN_1000ca70(pvVar8,puVar9,pfVar5);
      local_58 = *puVar6;
      local_54 = puVar6[1];
      local_50 = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_20c,local_5c);
      puVar9 = local_218;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_1f4,local_5c);
      pvVar8 = thunk_FUN_1000d970(&local_74,local_200,pfVar7);
      puVar6 = thunk_FUN_1000d970(pvVar8,puVar9,pfVar5);
      local_4c = *puVar6;
      local_48 = puVar6[1];
      local_44 = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_23c,local_5c);
      puVar9 = local_248;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_224,local_5c);
      pvVar8 = thunk_FUN_1000ca70(&local_74,local_230,pfVar7);
      puVar6 = thunk_FUN_1000d970(pvVar8,puVar9,pfVar5);
      local_40 = *puVar6;
      local_3c = puVar6[1];
      local_38 = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_26c,local_5c);
      puVar9 = local_278;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_254,local_5c);
      pvVar8 = thunk_FUN_1000ca70(&local_74,local_260,pfVar7);
      puVar6 = thunk_FUN_1000ca70(pvVar8,puVar9,pfVar5);
      local_34 = *puVar6;
      local_30 = puVar6[1];
      local_2c = puVar6[2];
      thunk_FUN_1008f360((int)&local_58);
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_29c,local_5c);
      puVar9 = local_2a8;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_284,local_5c);
      pvVar8 = thunk_FUN_1000ca70(&local_68,local_290,pfVar7);
      puVar6 = thunk_FUN_1000d970(pvVar8,puVar9,pfVar5);
      local_74 = *puVar6;
      local_70 = puVar6[1];
      local_6c = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_2cc,local_5c);
      puVar9 = local_2d8;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_2b4,local_5c);
      pvVar8 = thunk_FUN_1000d970(&local_74,local_2c0,pfVar7);
      puVar6 = thunk_FUN_1000ca70(pvVar8,puVar9,pfVar5);
      local_40 = *puVar6;
      local_3c = puVar6[1];
      local_38 = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_2fc,local_5c);
      puVar9 = local_308;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_2e4,local_5c);
      pvVar8 = thunk_FUN_1000d970(&local_74,local_2f0,pfVar7);
      puVar6 = thunk_FUN_1000d970(pvVar8,puVar9,pfVar5);
      local_34 = *puVar6;
      local_30 = puVar6[1];
      local_2c = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_32c,local_5c);
      puVar9 = local_338;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_314,local_5c);
      pvVar8 = thunk_FUN_1000ca70(&local_74,local_320,pfVar7);
      puVar6 = thunk_FUN_1000d970(pvVar8,puVar9,pfVar5);
      local_58 = *puVar6;
      local_54 = puVar6[1];
      local_50 = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_35c,local_5c);
      puVar9 = local_368;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_344,local_5c);
      pvVar8 = thunk_FUN_1000ca70(&local_74,local_350,pfVar7);
      puVar6 = thunk_FUN_1000ca70(pvVar8,puVar9,pfVar5);
      local_4c = *puVar6;
      local_48 = puVar6[1];
      local_44 = puVar6[2];
      thunk_FUN_1008f360((int)&local_58);
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_38c,local_5c);
      puVar9 = local_398;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_374,local_5c);
      pvVar8 = thunk_FUN_1000ca70(&local_68,local_380,pfVar7);
      puVar6 = thunk_FUN_1000ca70(pvVar8,puVar9,pfVar5);
      local_74 = *puVar6;
      local_70 = puVar6[1];
      local_6c = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_3bc,local_5c);
      puVar9 = local_3c8;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_3a4,local_5c);
      pvVar8 = thunk_FUN_1000d970(&local_74,local_3b0,pfVar7);
      puVar6 = thunk_FUN_1000ca70(pvVar8,puVar9,pfVar5);
      local_34 = *puVar6;
      local_30 = puVar6[1];
      local_2c = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_3ec,local_5c);
      puVar9 = local_3f8;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_3d4,local_5c);
      pvVar8 = thunk_FUN_1000d970(&local_74,local_3e0,pfVar7);
      puVar6 = thunk_FUN_1000d970(pvVar8,puVar9,pfVar5);
      local_40 = *puVar6;
      local_3c = puVar6[1];
      local_38 = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_41c,local_5c);
      puVar9 = local_428;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_404,local_5c);
      pvVar8 = thunk_FUN_1000ca70(&local_74,local_410,pfVar7);
      puVar6 = thunk_FUN_1000d970(pvVar8,puVar9,pfVar5);
      local_4c = *puVar6;
      local_48 = puVar6[1];
      local_44 = puVar6[2];
      pfVar5 = thunk_FUN_1000cb20(&DAT_1031ab68,local_44c,local_5c);
      puVar9 = local_458;
      pfVar7 = thunk_FUN_1000cb20(&DAT_1031ab74,local_434,local_5c);
      pvVar8 = thunk_FUN_1000ca70(&local_74,local_440,pfVar7);
      puVar6 = thunk_FUN_1000ca70(pvVar8,puVar9,pfVar5);
      local_58 = *puVar6;
      local_54 = puVar6[1];
      local_50 = puVar6[2];
      thunk_FUN_1008f360((int)&local_58);
      (**(code **)(DAT_102e15a0 + 0xc))();
      (**(code **)(DAT_102e15a0 + 4))(0);
    }
  }
  return;
}

/* 10094e70  FUN_10094e70  (699 bytes)
 * undefined FUN_10094e70(byte.conflict param_1)
 */
void __cdecl FUN_10094e70(byte_conflict param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined *puVar13;
  
  if ((DAT_1031a834 & 1) == 0) {
    DAT_1031a834 = DAT_1031a834 | 1;
    thunk_FUN_10007fe0(&DAT_1031a81c);
    FUN_100bc490(0x10095240);
  }
  if ((DAT_1031a834 & 2) == 0) {
    DAT_1031a834 = DAT_1031a834 | 2;
    thunk_FUN_10007fe0(&DAT_1031a774);
    FUN_100bc490(0x10095220);
  }
  if ((DAT_1031a834 & 4) == 0) {
    DAT_1031a834 = DAT_1031a834 | 4;
    thunk_FUN_1000c160(0x1031a7d8);
    FUN_100bc490(0x10095200);
  }
  if ((DAT_1031a834 & 8) == 0) {
    DAT_1031a834 = DAT_1031a834 | 8;
    thunk_FUN_1006a030(&DAT_1031a890);
    FUN_100bc490(0x100951e0);
  }
  DAT_1031a780 = (*DAT_102e152c)(param_1);
  if ((DAT_1031a780 != 0) && (*(int *)(DAT_1031a780 + 4) != 0)) {
    puVar3 = (undefined4 *)thunk_FUN_10008500(DAT_1031a780 + 0xb48);
    puVar4 = (undefined4 *)thunk_FUN_10008500(&DAT_1031a81c);
    *puVar4 = *puVar3;
    iVar5 = thunk_FUN_10008500(DAT_1031a780 + 0xb48);
    iVar6 = thunk_FUN_10008500(&DAT_1031a81c);
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar5 + 4);
    iVar5 = thunk_FUN_10008500(DAT_1031a780 + 0xb48);
    iVar6 = thunk_FUN_10008500(&DAT_1031a81c);
    *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar5 + 8);
    iVar5 = thunk_FUN_10008500(&DAT_1031a81c);
    *(float *)(iVar5 + 8) = *(float *)(iVar5 + 8) - 8192.0;
    (**(code **)(DAT_102e15a8 + 0x38))(2);
    puVar13 = &DAT_1031a7d8;
    uVar7 = (uint)param_1;
    uVar12 = 2;
    uVar8 = thunk_FUN_10008500(&DAT_1031a81c);
    uVar9 = thunk_FUN_10008500(DAT_1031a780 + 0xb48);
    (**(code **)(DAT_102e15a8 + 0x3c))(uVar9,uVar8,uVar12,uVar7,puVar13);
    pfVar10 = (float *)thunk_FUN_10008500(&DAT_1031a7f8);
    pfVar11 = (float *)thunk_FUN_10008500(&DAT_1031a774);
    thunk_FUN_1007d6c0(pfVar11,pfVar10);
    iVar5 = thunk_FUN_10008500(&DAT_1031a7ec);
    iVar6 = thunk_FUN_10008500(&DAT_1031a7f8);
    fVar1 = *(float *)(iVar6 + 8);
    fVar2 = *(float *)(iVar5 + 8);
    iVar5 = thunk_FUN_10008500(&DAT_1031a81c);
    *(float *)(iVar5 + 8) = fVar1 * 1.0 + fVar2;
    pfVar10 = (float *)thunk_FUN_10008500(&DAT_1031a7ec);
    pfVar11 = (float *)thunk_FUN_10008500(&DAT_1031a7f8);
    fVar1 = *pfVar11;
    fVar2 = *pfVar10;
    pfVar10 = (float *)thunk_FUN_10008500(&DAT_1031a81c);
    *pfVar10 = fVar1 * 1.0 + fVar2;
    iVar5 = thunk_FUN_10008500(&DAT_1031a7ec);
    iVar6 = thunk_FUN_10008500(&DAT_1031a7f8);
    fVar1 = *(float *)(iVar6 + 4);
    fVar2 = *(float *)(iVar5 + 4);
    iVar5 = thunk_FUN_10008500(&DAT_1031a81c);
    *(float *)(iVar5 + 4) = fVar1 * 1.0 + fVar2;
    thunk_FUN_1008f470((undefined4 *)&DAT_1031a890,&DAT_1031a81c,&DAT_1031a774,24.0,'\0');
    thunk_FUN_1008f360(0x1031a890);
  }
  return;
}

/* 100951e0  FUN_100951e0  (16 bytes)
 * undefined FUN_100951e0(void)
 */
void FUN_100951e0(void)

{
  return;
}

/* 10095200  FUN_10095200  (16 bytes)
 * undefined FUN_10095200(void)
 */
void FUN_10095200(void)

{
  return;
}

/* 10095220  FUN_10095220  (16 bytes)
 * undefined FUN_10095220(void)
 */
void FUN_10095220(void)

{
  return;
}

/* 10095240  FUN_10095240  (16 bytes)
 * undefined FUN_10095240(void)
 */
void FUN_10095240(void)

{
  return;
}

/* 10095260  FUN_10095260  (999 bytes)
 * undefined FUN_10095260(void)
 */
void FUN_10095260(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined *puVar14;
  
  if ((DAT_1031a7d0 & 1) == 0) {
    DAT_1031a7d0 = DAT_1031a7d0 | 1;
    thunk_FUN_10007fe0(&DAT_1031a768);
    FUN_100bc490(0x100957a0);
  }
  if ((DAT_1031a7d0 & 2) == 0) {
    DAT_1031a7d0 = DAT_1031a7d0 | 2;
    thunk_FUN_10007fe0(&DAT_1031a828);
    FUN_100bc490(0x10095780);
  }
  if ((DAT_1031a7d0 & 4) == 0) {
    DAT_1031a7d0 = DAT_1031a7d0 | 4;
    thunk_FUN_1000c160(0x1031a788);
    FUN_100bc490(0x10095760);
  }
  if ((DAT_1031a7d0 & 8) == 0) {
    DAT_1031a7d0 = DAT_1031a7d0 | 8;
    thunk_FUN_1006a030(&DAT_1031a838);
    FUN_100bc490(0x10095740);
  }
  if ((*(float *)(DAT_102e8238 + 0xc) != 0.0) &&
     (DAT_1031a8e8 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/ombra.spr",2),
     DAT_1031a8e8 != -1)) {
    uVar4 = (*DAT_102e1550)(*(undefined4 *)(&DAT_1031abdc + DAT_1031a8e8 * 0x28),0);
    iVar5 = (**(code **)(DAT_102e15a0 + 0x2c))(uVar4);
    if (iVar5 != 0) {
      (**(code **)(DAT_102e15a0 + 4))(2);
      (**(code **)(DAT_102e15a0 + 0x28))(1);
      (**(code **)(DAT_102e15a0 + 8))(2);
      (**(code **)(DAT_102e15a0 + 0x10))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
      puVar6 = (undefined4 *)(*DAT_102e1524)();
      DAT_1031a8e0 = *puVar6;
      DAT_1031a7cc = thunk_FUN_100b5a50();
      if (((DAT_1031a7cc == 0) && (cVar3 = thunk_FUN_10088600(), cVar3 == '\0')) &&
         (*(float *)(DAT_102e8238 + 0xc) == 1.0)) {
        puVar6 = (undefined4 *)thunk_FUN_10008500(&DAT_10320680);
        puVar7 = (undefined4 *)thunk_FUN_10008500(&DAT_1031a768);
        *puVar7 = *puVar6;
        iVar5 = thunk_FUN_10008500(&DAT_10320680);
        iVar8 = thunk_FUN_10008500(&DAT_1031a768);
        *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar5 + 4);
        iVar5 = thunk_FUN_10008500(&DAT_10320680);
        iVar8 = thunk_FUN_10008500(&DAT_1031a768);
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar5 + 8);
        iVar5 = thunk_FUN_10008500(&DAT_1031a768);
        *(float *)(iVar5 + 8) = *(float *)(iVar5 + 8) - 8192.0;
        (**(code **)(DAT_102e15a8 + 0x38))(2);
        puVar14 = &DAT_1031a788;
        uVar13 = 2;
        uVar4 = DAT_1031a8e0;
        uVar9 = thunk_FUN_10008500(&DAT_1031a768);
        uVar10 = thunk_FUN_10008500(&DAT_10320680);
        (**(code **)(DAT_102e15a8 + 0x3c))(uVar10,uVar9,uVar13,uVar4,puVar14);
        pfVar11 = (float *)thunk_FUN_10008500(&DAT_1031a7a8);
        pfVar12 = (float *)thunk_FUN_10008500(&DAT_1031a828);
        thunk_FUN_1007d6c0(pfVar12,pfVar11);
        iVar5 = thunk_FUN_10008500(&DAT_1031a79c);
        iVar8 = thunk_FUN_10008500(&DAT_1031a7a8);
        fVar1 = *(float *)(iVar8 + 8);
        fVar2 = *(float *)(iVar5 + 8);
        iVar5 = thunk_FUN_10008500(&DAT_1031a768);
        *(float *)(iVar5 + 8) = fVar1 * 1.0 + fVar2;
        pfVar11 = (float *)thunk_FUN_10008500(&DAT_1031a79c);
        pfVar12 = (float *)thunk_FUN_10008500(&DAT_1031a7a8);
        fVar1 = *pfVar12;
        fVar2 = *pfVar11;
        pfVar11 = (float *)thunk_FUN_10008500(&DAT_1031a768);
        *pfVar11 = fVar1 * 1.0 + fVar2;
        iVar5 = thunk_FUN_10008500(&DAT_1031a79c);
        iVar8 = thunk_FUN_10008500(&DAT_1031a7a8);
        fVar1 = *(float *)(iVar8 + 4);
        fVar2 = *(float *)(iVar5 + 4);
        iVar5 = thunk_FUN_10008500(&DAT_1031a768);
        *(float *)(iVar5 + 4) = fVar1 * 1.0 + fVar2;
        thunk_FUN_1008f470((undefined4 *)&DAT_1031a838,&DAT_1031a768,&DAT_1031a828,24.0,'\0');
        thunk_FUN_1008f360(0x1031a838);
      }
      DAT_1031a888 = (*DAT_102e14e8)();
      for (DAT_1031a8e4 = 0; DAT_1031a8e4 <= DAT_1031a888; DAT_1031a8e4 = DAT_1031a8e4 + 1) {
        cVar3 = thunk_FUN_10097610(DAT_1031a8e4);
        if (cVar3 != '\0') {
          thunk_FUN_10094e70((byte_conflict)DAT_1031a8e4);
        }
      }
      (**(code **)(DAT_102e15a0 + 0xc))();
      (**(code **)(DAT_102e15a0 + 4))(0);
    }
  }
  return;
}

/* 10095740  FUN_10095740  (16 bytes)
 * undefined FUN_10095740(void)
 */
void FUN_10095740(void)

{
  return;
}

/* 10095760  FUN_10095760  (16 bytes)
 * undefined FUN_10095760(void)
 */
void FUN_10095760(void)

{
  return;
}

/* 10095780  FUN_10095780  (16 bytes)
 * undefined FUN_10095780(void)
 */
void FUN_10095780(void)

{
  return;
}

/* 100957a0  FUN_100957a0  (16 bytes)
 * undefined FUN_100957a0(void)
 */
void FUN_100957a0(void)

{
  return;
}

/* 100957c0  FUN_100957c0  (43 bytes)
 * float10 FUN_100957c0(float param_1)
 */
float10 __cdecl FUN_100957c0(float param_1)

{
  float10 fVar1;
  
  if (0.1 <= param_1) {
    fVar1 = (float10)param_1;
  }
  else {
    fVar1 = (float10)0.1;
  }
  return fVar1;
}

/* 10095800  FUN_10095800  (58 bytes)
 * float10 FUN_10095800(float param_1)
 */
float10 __cdecl FUN_10095800(float param_1)

{
  float10 fVar1;
  
  if (param_1 == 0.0) {
    fVar1 = (float10)1.0;
  }
  else {
    fVar1 = thunk_FUN_100957c0(param_1);
    fVar1 = (float10)1.0 / fVar1;
  }
  return fVar1;
}

/* 10095850  FUN_10095850  (707 bytes)
 * undefined FUN_10095850(undefined4 param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 */
void __cdecl
FUN_10095850(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  
  if ((DAT_1031aa40 & 1) == 0) {
    DAT_1031aa40 = DAT_1031aa40 | 1;
    thunk_FUN_10007fe0(&DAT_1031aa50);
    FUN_100bc490(0x10095bf0);
  }
  if ((DAT_1031aa40 & 2) == 0) {
    DAT_1031aa40 = DAT_1031aa40 | 2;
    thunk_FUN_10007fe0(&DAT_1031aa44);
    FUN_100bc490(0x10095bd0);
  }
  puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_1031aa50);
  *puVar2 = *param_2;
  iVar3 = thunk_FUN_10008500(&DAT_1031aa50);
  *(undefined4 *)(iVar3 + 4) = param_2[1];
  iVar3 = thunk_FUN_10008500(&DAT_1031aa50);
  *(undefined4 *)(iVar3 + 8) = param_2[2];
  iVar3 = thunk_FUN_10008500(&DAT_1031aa50);
  *(float *)(iVar3 + 4) = *(float *)(iVar3 + 4) - 90.0;
  if (*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) != 0) {
    *(undefined4 *)(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 4) = 0;
  }
  uVar5 = DAT_1031b814;
  uVar4 = thunk_FUN_10008500(&DAT_1031aa50);
  uVar5 = (**(code **)(DAT_102e15a4 + 0xc0))(param_1,param_3,uVar4,uVar5,param_5,param_6);
  *(undefined4 *)(&DAT_1031a940 + DAT_1031aa5c * 4) = uVar5;
  if (*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) != 0) {
    *(undefined4 *)(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x358) = 0;
    *(undefined4 *)(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x404) = 0;
    *(uint *)(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x404) =
         *(uint *)(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x404) | 4;
    *(uint *)(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x404) =
         *(uint *)(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x404) | 8;
    fVar8 = (float10)(*DAT_102e1564)(0xc2c80000,0x42c80000);
    pfVar6 = (float *)thunk_FUN_10008500(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x68);
    *pfVar6 = (float)fVar8;
    pfVar6 = (float *)thunk_FUN_10008500(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x68);
    pfVar7 = (float *)thunk_FUN_10008500(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x68);
    *pfVar6 = *pfVar6 * *pfVar7;
    pfVar6 = (float *)thunk_FUN_10008500(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x68);
    fVar1 = *pfVar6;
    iVar3 = thunk_FUN_10008500(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x68);
    *(float *)(iVar3 + 4) = -fVar1;
    iVar3 = thunk_FUN_10008500(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x68);
    fVar1 = *(float *)(iVar3 + 4);
    iVar3 = thunk_FUN_10008500(*(int *)(&DAT_1031a940 + DAT_1031aa5c * 4) + 0x68);
    *(float *)(iVar3 + 8) = -fVar1 + -fVar1;
    DAT_1031aa5c = DAT_1031aa5c + 1;
    if (0x3f < DAT_1031aa5c) {
      DAT_1031aa5c = 0;
    }
    if (DAT_1031aa5c < 0) {
      DAT_1031aa5c = 0;
    }
  }
  return;
}

/* 10095bd0  FUN_10095bd0  (16 bytes)
 * undefined FUN_10095bd0(void)
 */
void FUN_10095bd0(void)

{
  return;
}

/* 10095bf0  FUN_10095bf0  (16 bytes)
 * undefined FUN_10095bf0(void)
 */
void FUN_10095bf0(void)

{
  return;
}

/* 10095c10  FUN_10095c10  (21 bytes)
 * undefined FUN_10095c10(void)
 */
void FUN_10095c10(void)

{
  FUN_10095c30();
  return;
}

/* 10095c30  FUN_10095c30  (26 bytes)
 * undefined FUN_10095c30(void)
 * called by: FUN_10095c10
 */
void FUN_10095c30(void)

{
  thunk_FUN_10095c50(0x1031ab5c);
  return;
}

/* 10095c50  FUN_10095c50  (63 bytes)
 * int FUN_10095c50(int param_1)
 */
int __fastcall FUN_10095c50(int param_1)

{
  thunk_FUN_10007fe0(param_1);
  thunk_FUN_10007fe0(param_1 + 0xc);
  thunk_FUN_10007fe0(param_1 + 0x18);
  thunk_FUN_10007fe0(param_1 + 0x24);
  return param_1;
}

/* 10095ca0  FUN_10095ca0  (21 bytes)
 * undefined FUN_10095ca0(void)
 */
void FUN_10095ca0(void)

{
  FUN_10095cc0();
  return;
}

/* 10095cc0  FUN_10095cc0  (38 bytes)
 * undefined FUN_10095cc0(void)
 * called by: FUN_10095ca0
 */
void FUN_10095cc0(void)

{
  thunk_FUN_1000cb80(&DAT_1031b8b0,0xc,0x84,thunk_FUN_10007fe0);
  return;
}

/* 10095cf0  FUN_10095cf0  (26 bytes)
 * undefined FUN_10095cf0(void)
 */
void FUN_10095cf0(void)

{
  FUN_10095d10();
  FUN_10095d30();
  return;
}

/* 10095d10  FUN_10095d10  (26 bytes)
 * undefined FUN_10095d10(void)
 * called by: FUN_10095cf0
 */
void FUN_10095d10(void)

{
  thunk_FUN_1008f9f0((undefined4 *)&DAT_1031abb0);
  return;
}

/* 10095d30  FUN_10095d30  (29 bytes)
 * undefined FUN_10095d30(void)
 * called by: FUN_10095cf0
 */
void FUN_10095d30(void)

{
  FUN_100bc490(0x10095d60);
  return;
}

/* 10095d60  FUN_10095d60  (26 bytes)
 * undefined FUN_10095d60(void)
 */
void FUN_10095d60(void)

{
  thunk_FUN_1008fa50(0x1031abb0);
  return;
}

/* 10095d80  FUN_10095d80  (39 bytes)
 * undefined FUN_10095d80(void)
 */
void FUN_10095d80(void)

{
  thunk_FUN_1008fa90(&DAT_1031abb0,DAT_1031b81c);
  DAT_1031bee0 = 1;
  return;
}

/* 10095db0  FUN_10095db0  (49 bytes)
 * void * FUN_10095db0(void * param_1, int param_2, byte.conflict param_3)
 */
void * __cdecl FUN_10095db0(void *param_1,int param_2,byte_conflict param_3)

{
  thunk_FUN_10015ce0(param_1,(undefined4 *)(&DAT_1031b8b0 + (uint)param_3 * 0xc + param_2 * 0x30));
  return param_1;
}

/* 10095df0  FUN_10095df0  (161 bytes)
 * undefined FUN_10095df0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095df0(void)

{
  int iVar1;
  
  if (DAT_1031bee0 == '\0') {
    thunk_FUN_10097c20();
    thunk_FUN_10095d80();
    thunk_FUN_10068f60();
  }
  else if (*(float *)(DAT_102e81e0 + 0xc) != _DAT_1031b8a4) {
    thunk_FUN_10097c20();
  }
  FUN_10096200();
  FUN_10095ec0();
  iVar1 = (*DAT_102f1660)();
  if (iVar1 != 0) {
    thunk_FUN_10095260();
  }
  thunk_FUN_10073880();
  thunk_FUN_10071bb0();
  FUN_10096260();
  iVar1 = (*DAT_102f1660)();
  if (iVar1 != 0) {
    thunk_FUN_10094300();
  }
  FUN_100962b0();
  if (*(float *)(DAT_102e81e0 + 0xc) == 1.0) {
    thunk_FUN_100977a0();
  }
  thunk_FUN_10068ee0();
  return;
}

/* 10095ec0  FUN_10095ec0  (654 bytes)
 * undefined FUN_10095ec0(void)
 * called by: FUN_10095df0
 */
void FUN_10095ec0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  DAT_1031ab98 = (*DAT_102e14e8)();
  for (DAT_1031ab9c = 0; DAT_1031ab9c <= DAT_1031ab98; DAT_1031ab9c = DAT_1031ab9c + 1) {
    DAT_1031ab58 = (*DAT_102e152c)(DAT_1031ab9c);
    if ((DAT_1031ab58 != 0) && (*(int *)(DAT_1031ab58 + 4) != 0)) {
      puVar1 = (undefined4 *)thunk_FUN_10008500(DAT_1031ab58 + 0xb60);
      puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_1031b8b0 + DAT_1031ab9c * 0x30);
      *puVar2 = *puVar1;
      iVar3 = thunk_FUN_10008500(DAT_1031ab58 + 0xb60);
      iVar4 = thunk_FUN_10008500(&DAT_1031b8b0 + DAT_1031ab9c * 0x30);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
      iVar3 = thunk_FUN_10008500(DAT_1031ab58 + 0xb60);
      iVar4 = thunk_FUN_10008500(&DAT_1031b8b0 + DAT_1031ab9c * 0x30);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
      puVar1 = (undefined4 *)thunk_FUN_10008500(DAT_1031ab58 + 0xb6c);
      puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_1031b8bc + DAT_1031ab9c * 0x30);
      *puVar2 = *puVar1;
      iVar3 = thunk_FUN_10008500(DAT_1031ab58 + 0xb6c);
      iVar4 = thunk_FUN_10008500(&DAT_1031b8bc + DAT_1031ab9c * 0x30);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
      iVar3 = thunk_FUN_10008500(DAT_1031ab58 + 0xb6c);
      iVar4 = thunk_FUN_10008500(&DAT_1031b8bc + DAT_1031ab9c * 0x30);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
      puVar1 = (undefined4 *)thunk_FUN_10008500(DAT_1031ab58 + 0xb78);
      puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_1031b8c8 + DAT_1031ab9c * 0x30);
      *puVar2 = *puVar1;
      iVar3 = thunk_FUN_10008500(DAT_1031ab58 + 0xb78);
      iVar4 = thunk_FUN_10008500(&DAT_1031b8c8 + DAT_1031ab9c * 0x30);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
      iVar3 = thunk_FUN_10008500(DAT_1031ab58 + 0xb78);
      iVar4 = thunk_FUN_10008500(&DAT_1031b8c8 + DAT_1031ab9c * 0x30);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
      puVar1 = (undefined4 *)thunk_FUN_10008500(DAT_1031ab58 + 0xb84);
      puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_1031b8d4 + DAT_1031ab9c * 0x30);
      *puVar2 = *puVar1;
      iVar3 = thunk_FUN_10008500(DAT_1031ab58 + 0xb84);
      iVar4 = thunk_FUN_10008500(&DAT_1031b8d4 + DAT_1031ab9c * 0x30);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
      iVar3 = thunk_FUN_10008500(DAT_1031ab58 + 0xb84);
      iVar4 = thunk_FUN_10008500(&DAT_1031b8d4 + DAT_1031ab9c * 0x30);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
    }
  }
  return;
}

/* 10096200  FUN_10096200  (69 bytes)
 * undefined FUN_10096200(void)
 * called by: FUN_10095df0
 */
void FUN_10096200(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = thunk_FUN_10008500(&DAT_1031ab74);
  uVar2 = thunk_FUN_10008500(&DAT_1031ab68);
  uVar3 = thunk_FUN_10008500(&DAT_1031ab5c);
  uVar4 = thunk_FUN_10008500(&DAT_10320fec);
  (*DAT_102e14b8)(uVar4,uVar3,uVar2,uVar1);
  return;
}

/* 10096260  FUN_10096260  (57 bytes)
 * undefined FUN_10096260(void)
 * called by: FUN_10095df0
 */
void FUN_10096260(void)

{
  if (DAT_1031abb4 == DAT_1031b81c) {
    thunk_FUN_10091020(&DAT_1031abb0);
  }
  else {
    thunk_FUN_1008fa90(&DAT_1031abb0,DAT_1031b81c);
  }
  return;
}

/* 100962b0  FUN_100962b0  (33 bytes)
 * undefined FUN_100962b0(void)
 * called by: FUN_10095df0
 */
void FUN_100962b0(void)

{
  _memset(&DAT_1031ab14,0,0x21);
  return;
}

/* 100962e0  FUN_100962e0  (33 bytes)
 * float10 FUN_100962e0(float param_1)
 */
float10 __cdecl FUN_100962e0(float param_1)

{
  float10 fVar1;
  
  fVar1 = thunk_FUN_10095800(DAT_1031bee4);
  return fVar1 * (float10)param_1;
}

/* 10096310  FUN_10096310  (311 bytes)
 * undefined FUN_10096310(float param_1, float param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10096310(float param_1,float param_2)

{
  float *pfVar1;
  float10 fVar2;
  
  pfVar1 = (float *)thunk_FUN_10008500(&DAT_10320fd0);
  if (-(param_1 * 10.0) <= *pfVar1) {
    _DAT_1031b7d0 = param_2 / 100.0;
    if (2.0 < _DAT_1031b7d0) {
      _DAT_1031b7d0 = 2.0;
    }
    if (_DAT_1031b7d0 < 1.0) {
      _DAT_1031b7d0 = 1.0;
    }
    fVar2 = (float10)(*DAT_102e1530)();
    DAT_1031b7d4 = (float)fVar2;
    _DAT_1031ab48 = DAT_1031b7d4 - _DAT_1031aac4;
    if (0.0 <= _DAT_1031ab48) {
      if (_DAT_1031ab48 < param_1) {
        _DAT_1031ab48 = ((param_1 + param_1) - _DAT_1031ab48) * 0.9;
        pfVar1 = (float *)thunk_FUN_10008500(&DAT_10320fd0);
        *pfVar1 = *pfVar1 - _DAT_1031ab48 * _DAT_1031b7d0;
      }
      _DAT_1031aac4 = DAT_1031b7d4;
    }
    else {
      _DAT_1031aac4 = DAT_1031b7d4;
    }
  }
  return;
}

/* 100964a0  FUN_100964a0  (618 bytes)
 * undefined FUN_100964a0(float param_1, float param_2, undefined4 param_3, undefined4 param_4, float param_5, float param_6)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100964a0(void *this,float param_1,float param_2,undefined4 param_3,undefined4 param_4,
            float param_5,float param_6)

{
  double dVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  void *extraout_ECX;
  float10 extraout_ST0;
  float10 fVar7;
  
  if ((DAT_1031b7c4 & 1) == 0) {
    DAT_1031b7c4 = DAT_1031b7c4 | 1;
    thunk_FUN_10007fe0(&DAT_1031b7f4);
    FUN_100bc490(0x100967b0);
    this = extraout_ECX;
  }
  dVar1 = (double)(param_6 * param_6 + param_5 * param_5);
  FUN_100bbfe4(this,SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  _DAT_1031ab8c = (float)extraout_ST0;
  if (_DAT_1031ab8c == 0.0) {
    param_5 = 0.0;
    param_6 = 1.0;
  }
  else {
    param_5 = param_5 / _DAT_1031ab8c;
    param_6 = param_6 / _DAT_1031ab8c;
  }
  _DAT_1031b7c8 = param_2 / 300.0 + 1.0;
  if (2.0 < _DAT_1031b7c8) {
    _DAT_1031b7c8 = 2.0;
  }
  fVar7 = (float10)(*DAT_102e1530)();
  DAT_1031aabc = (float)fVar7;
  _DAT_1031b7d8 = DAT_1031aabc - _DAT_1031b7cc;
  if (0.0 <= _DAT_1031b7d8) {
    if (param_2 < 10.0) {
      param_1 = param_1 * 0.9;
    }
    if (DAT_1031bee4 != 0.0) {
      _DAT_1031b7d8 = _DAT_1031b7d8 * DAT_1031bee4;
    }
    if (param_1 <= _DAT_1031b7d8) {
      _DAT_1031b7f4 = DAT_1028ffec;
      _DAT_1031b7f8 = DAT_1028fff0;
      _DAT_1031b7fc = DAT_1028fff4;
    }
    else {
      _DAT_1031b7d8 = param_1 - _DAT_1031b7d8;
      pfVar2 = (float *)thunk_FUN_10008500(&DAT_1031b7f4);
      *pfVar2 = _DAT_1031b7d8 * _DAT_1031b7c8 * param_6 * 3.0 + *pfVar2;
      iVar3 = thunk_FUN_10008500(&DAT_1031b7f4);
      *(float *)(iVar3 + 4) = _DAT_1031b7d8 * _DAT_1031b7c8 * param_5 * 3.0 + *(float *)(iVar3 + 4);
      iVar3 = thunk_FUN_10008500(&DAT_1031b7f4);
      *(undefined4 *)(iVar3 + 8) = 0;
      puVar4 = (undefined4 *)thunk_FUN_10008500(&DAT_1031b7f4);
      puVar5 = (undefined4 *)thunk_FUN_10008500(&DAT_10320fd0);
      *puVar5 = *puVar4;
      iVar3 = thunk_FUN_10008500(&DAT_1031b7f4);
      iVar6 = thunk_FUN_10008500(&DAT_10320fd0);
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
    }
  }
  else {
    _DAT_1031b7f4 = DAT_1028ffec;
    _DAT_1031b7f8 = DAT_1028fff0;
    _DAT_1031b7fc = DAT_1028fff4;
  }
  _DAT_1031b7cc = DAT_1031aabc;
  return;
}

/* 100967b0  FUN_100967b0  (16 bytes)
 * undefined FUN_100967b0(void)
 */
void FUN_100967b0(void)

{
  return;
}

/* 100967d0  FUN_100967d0  (228 bytes)
 * undefined4 FUN_100967d0(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100967d0(void *param_1)

{
  float *pfVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *extraout_ECX;
  float10 fVar4;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  pfVar1 = thunk_FUN_10096e30(local_10);
  pvVar2 = thunk_FUN_1000ca70(param_1,local_1c,pfVar1);
  pvVar2 = (void *)thunk_FUN_10008500(pvVar2);
  fVar4 = thunk_FUN_10097fc0(extraout_ECX,pvVar2);
  _DAT_1031aaa4 = (float)fVar4;
  if (DAT_102da420 < 0x50) {
    if ((DAT_102da420 < 0xe) && (_DAT_1031aaa4 < 2048.0)) {
      return 3;
    }
    if ((DAT_102da420 < 0x29) && (_DAT_1031aaa4 < 512.0)) {
      return 2;
    }
  }
  if (_DAT_1031aaa4 <= 256.0) {
    if (_DAT_1031aaa4 <= 128.0) {
      if (_DAT_1031aaa4 <= 64.0) {
        uVar3 = 3;
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

/* 100968f0  FUN_100968f0  (1049 bytes)
 * uint FUN_100968f0(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_100968f0(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined2 extraout_var;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  void *extraout_ECX;
  float10 fVar12;
  float local_8c;
  float local_70;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_1031b8a8 & 1) == 0) {
    DAT_1031b8a8 = DAT_1031b8a8 | 1;
    thunk_FUN_10007fe0(&DAT_1031ab4c);
    FUN_100bc490(0x10096e10);
  }
  pfVar5 = thunk_FUN_10096e30(local_10);
  puVar6 = thunk_FUN_1000ca70(param_1,local_1c,pfVar5);
  _DAT_1031ab4c = *puVar6;
  _DAT_1031ab50 = puVar6[1];
  _DAT_1031ab54 = puVar6[2];
  pvVar7 = (void *)thunk_FUN_10008500(&DAT_1031ab4c);
  fVar12 = thunk_FUN_10097fc0(extraout_ECX,pvVar7);
  _DAT_1031aaac = (float)fVar12;
  if (_DAT_1031aaac < 300.0 == (_DAT_1031aaac == 300.0)) {
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_1031ab4c);
    thunk_FUN_100981d0(pfVar5);
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_1031ab4c);
    pfVar9 = (float *)thunk_FUN_10008500(&DAT_1031ab5c);
    fVar1 = *pfVar5;
    fVar2 = *pfVar9;
    iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
    iVar11 = thunk_FUN_10008500(&DAT_1031ab5c);
    fVar3 = *(float *)(iVar10 + 4);
    fVar4 = *(float *)(iVar11 + 4);
    iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
    iVar11 = thunk_FUN_10008500(&DAT_1031ab5c);
    fVar1 = *(float *)(iVar10 + 8) * *(float *)(iVar11 + 8) + fVar3 * fVar4 + fVar1 * fVar2;
    uVar8 = CONCAT22((short)((uint)iVar11 >> 0x10),
                     (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                     (ushort)(fVar1 == 0.0) << 0xe);
    if (fVar1 >= 0.0) {
      pfVar5 = (float *)thunk_FUN_10008500(&DAT_1031ab4c);
      pfVar9 = (float *)thunk_FUN_10008500(&DAT_1031ab68);
      fVar1 = *pfVar5;
      fVar2 = *pfVar9;
      iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
      iVar11 = thunk_FUN_10008500(&DAT_1031ab68);
      fVar3 = *(float *)(iVar10 + 4);
      fVar4 = *(float *)(iVar11 + 4);
      iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
      iVar11 = thunk_FUN_10008500(&DAT_1031ab68);
      if (*(float *)(iVar10 + 8) * *(float *)(iVar11 + 8) + fVar3 * fVar4 + fVar1 * fVar2 <= 0.0) {
        pfVar5 = (float *)thunk_FUN_10008500(&DAT_1031ab4c);
        pfVar9 = (float *)thunk_FUN_10008500(&DAT_1031ab68);
        fVar1 = *pfVar5;
        fVar2 = *pfVar9;
        iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
        iVar11 = thunk_FUN_10008500(&DAT_1031ab68);
        fVar3 = *(float *)(iVar10 + 4);
        fVar4 = *(float *)(iVar11 + 4);
        iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
        iVar11 = thunk_FUN_10008500(&DAT_1031ab68);
        local_70 = 0.0 - (*(float *)(iVar10 + 8) * *(float *)(iVar11 + 8) +
                         fVar3 * fVar4 + fVar1 * fVar2);
      }
      else {
        pfVar5 = (float *)thunk_FUN_10008500(&DAT_1031ab4c);
        pfVar9 = (float *)thunk_FUN_10008500(&DAT_1031ab68);
        fVar1 = *pfVar5;
        fVar2 = *pfVar9;
        iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
        iVar11 = thunk_FUN_10008500(&DAT_1031ab68);
        fVar3 = *(float *)(iVar10 + 4);
        fVar4 = *(float *)(iVar11 + 4);
        iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
        iVar11 = thunk_FUN_10008500(&DAT_1031ab68);
        local_70 = *(float *)(iVar10 + 8) * *(float *)(iVar11 + 8) + fVar3 * fVar4 + fVar1 * fVar2;
      }
      pfVar5 = (float *)thunk_FUN_10008500(&DAT_1031ab4c);
      pfVar9 = (float *)thunk_FUN_10008500(&DAT_1031ab74);
      fVar1 = *pfVar5;
      fVar2 = *pfVar9;
      iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
      iVar11 = thunk_FUN_10008500(&DAT_1031ab74);
      fVar3 = *(float *)(iVar10 + 4);
      fVar4 = *(float *)(iVar11 + 4);
      iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
      iVar11 = thunk_FUN_10008500(&DAT_1031ab74);
      if (*(float *)(iVar10 + 8) * *(float *)(iVar11 + 8) + fVar3 * fVar4 + fVar1 * fVar2 <= 0.0) {
        pfVar5 = (float *)thunk_FUN_10008500(&DAT_1031ab4c);
        pfVar9 = (float *)thunk_FUN_10008500(&DAT_1031ab74);
        fVar1 = *pfVar5;
        fVar2 = *pfVar9;
        iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
        iVar11 = thunk_FUN_10008500(&DAT_1031ab74);
        fVar3 = *(float *)(iVar10 + 4);
        fVar4 = *(float *)(iVar11 + 4);
        iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
        iVar11 = thunk_FUN_10008500(&DAT_1031ab74);
        local_8c = 0.0 - (*(float *)(iVar10 + 8) * *(float *)(iVar11 + 8) +
                         fVar3 * fVar4 + fVar1 * fVar2);
      }
      else {
        pfVar5 = (float *)thunk_FUN_10008500(&DAT_1031ab4c);
        pfVar9 = (float *)thunk_FUN_10008500(&DAT_1031ab74);
        fVar1 = *pfVar5;
        fVar2 = *pfVar9;
        iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
        iVar11 = thunk_FUN_10008500(&DAT_1031ab74);
        fVar3 = *(float *)(iVar10 + 4);
        fVar4 = *(float *)(iVar11 + 4);
        iVar10 = thunk_FUN_10008500(&DAT_1031ab4c);
        iVar11 = thunk_FUN_10008500(&DAT_1031ab74);
        local_8c = *(float *)(iVar10 + 8) * *(float *)(iVar11 + 8) + fVar3 * fVar4 + fVar1 * fVar2;
      }
      _DAT_1031aaa0 = ((_DAT_1031aaac / 8192.0) * 0.2 + 1.0) * (local_8c * 0.5 + local_70);
      _DAT_1031b7e8 = 0x3f666666;
      if (_DAT_1031aaa0 <= 0.9) {
        uVar8 = CONCAT31((uint3)(_DAT_1031aaa0 < 0.9),1);
      }
      else {
        uVar8 = (uint)(uint3)(_DAT_1031aaa0 < 0.9) << 8;
      }
    }
  }
  else {
    uVar8 = CONCAT31((int3)(CONCAT22(extraout_var,
                                     (ushort)(_DAT_1031aaac < 300.0) << 8 |
                                     (ushort)NAN(_DAT_1031aaac) << 10 |
                                     (ushort)(_DAT_1031aaac == 300.0) << 0xe) >> 8),1);
  }
  return uVar8;
}

/* 10096e10  FUN_10096e10  (16 bytes)
 * undefined FUN_10096e10(void)
 */
void FUN_10096e10(void)

{
  return;
}

/* 10096e30  FUN_10096e30  (62 bytes)
 * void * FUN_10096e30(void * param_1)
 */
void * __cdecl FUN_10096e30(void *param_1)

{
  int iVar1;
  undefined4 *local_4c;
  
  iVar1 = thunk_FUN_100b5a50();
  if (iVar1 == 0) {
    local_4c = (undefined4 *)&DAT_10320680;
  }
  else {
    local_4c = (undefined4 *)&DAT_10320f9c;
  }
  thunk_FUN_10015ce0(param_1,local_4c);
  return param_1;
}

/* 10096e80  FUN_10096e80  (151 bytes)
 * int FUN_10096e80(undefined4 param_1, undefined4 param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_10096e80(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  uint3 uVar5;
  int iVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_1031aac8 & 1) == 0) {
    DAT_1031aac8 = DAT_1031aac8 | 1;
    thunk_FUN_1000c160(0x1031aad0);
    FUN_100bc490(0x10096f40);
  }
  (**(code **)(DAT_102e15a8 + 0x38))(2);
  puVar1 = (undefined4 *)(*DAT_102e1524)(&DAT_1031aad0);
  uVar7 = *puVar1;
  uVar6 = 4;
  uVar2 = thunk_FUN_10008500(param_1);
  uVar3 = thunk_FUN_10008500(param_2);
  (**(code **)(DAT_102e15a8 + 0x3c))(uVar3,uVar2,uVar6,uVar7);
  uVar5 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(_DAT_1031aae0 < 1.0) << 8 | (ushort)NAN(_DAT_1031aae0) << 10 |
                           (ushort)(_DAT_1031aae0 == 1.0) << 0xe) >> 8);
  if (_DAT_1031aae0 == 1.0) {
    iVar4 = CONCAT31(uVar5,1);
  }
  else {
    iVar4 = (uint)uVar5 << 8;
  }
  return iVar4;
}

/* 10096f40  FUN_10096f40  (16 bytes)
 * undefined FUN_10096f40(void)
 */
void FUN_10096f40(void)

{
  return;
}

/* 10096f60  FUN_10096f60  (834 bytes)
 * undefined4 FUN_10096f60(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10096f60(int param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined2 extraout_var;
  void *pvVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined1 *puVar10;
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
  
  if ((DAT_1031aac0 & 1) == 0) {
    DAT_1031aac0 = DAT_1031aac0 | 1;
    thunk_FUN_10007fe0(&DAT_1031ab38);
    FUN_100bc490(0x100973b0);
  }
  iVar2 = thunk_FUN_100b5a50();
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    iVar2 = thunk_FUN_100b5a50();
    if (iVar2 == 0) {
      pfVar4 = thunk_FUN_10096e30(local_10);
      pfVar4 = thunk_FUN_1000ca70((void *)(param_1 + 0xb48),local_1c,pfVar4);
      fVar9 = (float10)thunk_FUN_1001e850(pfVar4);
      fVar1 = (float10)256.0;
      if (fVar9 < fVar1) {
        return CONCAT31((int3)(CONCAT22(extraout_var,
                                        (ushort)(fVar9 < fVar1) << 8 |
                                        (ushort)(NAN(fVar9) || NAN(fVar1)) << 10 |
                                        (ushort)(fVar9 == fVar1) << 0xe) >> 8),1);
      }
    }
    _DAT_1031ab38 = *(undefined4 *)(param_1 + 0xb48);
    _DAT_1031ab3c = *(undefined4 *)(param_1 + 0xb4c);
    _DAT_1031ab40 = *(undefined4 *)(param_1 + 0xb50);
    pvVar5 = thunk_FUN_10096e30(local_28);
    uVar6 = thunk_FUN_10096e80(&DAT_1031ab38,pvVar5);
    if ((uVar6 & 0xff) == 0) {
      pfVar4 = thunk_FUN_10097380(local_4c,32.0,&DAT_1031ab74);
      puVar10 = local_58;
      pfVar7 = thunk_FUN_10097380(local_34,32.0,&DAT_1031ab68);
      pvVar5 = thunk_FUN_1000d970((void *)(param_1 + 0xb48),local_40,pfVar7);
      puVar8 = thunk_FUN_1000d970(pvVar5,puVar10,pfVar4);
      _DAT_1031ab38 = *puVar8;
      _DAT_1031ab3c = puVar8[1];
      _DAT_1031ab40 = puVar8[2];
      pvVar5 = thunk_FUN_10096e30(local_64);
      uVar6 = thunk_FUN_10096e80(&DAT_1031ab38,pvVar5);
      if ((uVar6 & 0xff) == 0) {
        pfVar4 = thunk_FUN_10097380(local_88,32.0,&DAT_1031ab74);
        puVar10 = local_94;
        pfVar7 = thunk_FUN_10097380(local_70,32.0,&DAT_1031ab68);
        pvVar5 = thunk_FUN_1000ca70((void *)(param_1 + 0xb48),local_7c,pfVar7);
        puVar8 = thunk_FUN_1000ca70(pvVar5,puVar10,pfVar4);
        _DAT_1031ab38 = *puVar8;
        _DAT_1031ab3c = puVar8[1];
        _DAT_1031ab40 = puVar8[2];
        pvVar5 = thunk_FUN_10096e30(local_a0);
        uVar6 = thunk_FUN_10096e80(&DAT_1031ab38,pvVar5);
        if ((uVar6 & 0xff) == 0) {
          pfVar4 = thunk_FUN_10097380(local_c4,32.0,&DAT_1031ab74);
          puVar10 = local_d0;
          pfVar7 = thunk_FUN_10097380(local_ac,32.0,&DAT_1031ab68);
          pvVar5 = thunk_FUN_1000d970((void *)(param_1 + 0xb48),local_b8,pfVar7);
          puVar8 = thunk_FUN_1000ca70(pvVar5,puVar10,pfVar4);
          _DAT_1031ab38 = *puVar8;
          _DAT_1031ab3c = puVar8[1];
          _DAT_1031ab40 = puVar8[2];
          pvVar5 = thunk_FUN_10096e30(local_dc);
          uVar6 = thunk_FUN_10096e80(&DAT_1031ab38,pvVar5);
          if ((uVar6 & 0xff) == 0) {
            pfVar4 = thunk_FUN_10097380(local_100,32.0,&DAT_1031ab74);
            puVar10 = local_10c;
            pfVar7 = thunk_FUN_10097380(local_e8,32.0,&DAT_1031ab68);
            pvVar5 = thunk_FUN_1000ca70((void *)(param_1 + 0xb48),local_f4,pfVar7);
            puVar8 = thunk_FUN_1000d970(pvVar5,puVar10,pfVar4);
            _DAT_1031ab38 = *puVar8;
            _DAT_1031ab3c = puVar8[1];
            _DAT_1031ab40 = puVar8[2];
            pvVar5 = thunk_FUN_10096e30(local_118);
            uVar6 = thunk_FUN_10096e80(&DAT_1031ab38,pvVar5);
            if ((uVar6 & 0xff) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* 10097380  FUN_10097380  (35 bytes)
 * void * FUN_10097380(void * param_1, float param_2, void * param_3)
 */
void * __cdecl FUN_10097380(void *param_1,float param_2,void *param_3)

{
  thunk_FUN_1000cb20(param_3,param_1,param_2);
  return param_1;
}

/* 100973b0  FUN_100973b0  (16 bytes)
 * undefined FUN_100973b0(void)
 */
void FUN_100973b0(void)

{
  return;
}

/* 100973d0  FUN_100973d0  (318 bytes)
 * int FUN_100973d0(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_100973d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined2 extraout_var;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint3 uVar10;
  float10 fVar11;
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_1031b7f0 & 1) == 0) {
    DAT_1031b7f0 = DAT_1031b7f0 | 1;
    thunk_FUN_10007fe0(&DAT_1031b7dc);
    FUN_100bc490(0x10097560);
  }
  pfVar5 = thunk_FUN_10096e30(local_10);
  puVar6 = thunk_FUN_1000ca70((void *)(param_1 + 0xb48),local_1c,pfVar5);
  _DAT_1031b7dc = *puVar6;
  _DAT_1031b7e0 = puVar6[1];
  _DAT_1031b7e4 = puVar6[2];
  fVar11 = (float10)thunk_FUN_1001e850((float *)&DAT_1031b7dc);
  _DAT_1031aba8 = (float)fVar11;
  if (_DAT_1031aba8 < 256.0 == (_DAT_1031aba8 == 256.0)) {
    puVar6 = thunk_FUN_100230c0(&DAT_1031b7dc,local_28);
    _DAT_1031b7dc = *puVar6;
    _DAT_1031b7e0 = puVar6[1];
    _DAT_1031b7e4 = puVar6[2];
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_1031b7dc);
    pfVar7 = (float *)thunk_FUN_10008500(&DAT_1031ab5c);
    fVar1 = *pfVar5;
    fVar2 = *pfVar7;
    iVar8 = thunk_FUN_10008500(&DAT_1031b7dc);
    iVar9 = thunk_FUN_10008500(&DAT_1031ab5c);
    fVar3 = *(float *)(iVar8 + 4);
    fVar4 = *(float *)(iVar9 + 4);
    iVar8 = thunk_FUN_10008500(&DAT_1031b7dc);
    iVar9 = thunk_FUN_10008500(&DAT_1031ab5c);
    fVar1 = *(float *)(iVar8 + 8) * *(float *)(iVar9 + 8) + fVar3 * fVar4 + fVar1 * fVar2;
    uVar10 = (uint3)(CONCAT22((short)((uint)iVar9 >> 0x10),
                              (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == 0.0) << 0xe) >> 8);
    if (fVar1 < 0.0) {
      iVar8 = (uint)uVar10 << 8;
    }
    else {
      iVar8 = CONCAT31(uVar10,1);
    }
  }
  else {
    iVar8 = CONCAT31((int3)(CONCAT22(extraout_var,
                                     (ushort)(_DAT_1031aba8 < 256.0) << 8 |
                                     (ushort)NAN(_DAT_1031aba8) << 10 |
                                     (ushort)(_DAT_1031aba8 == 256.0) << 0xe) >> 8),1);
  }
  return iVar8;
}

/* 10097560  FUN_10097560  (16 bytes)
 * undefined FUN_10097560(void)
 */
void FUN_10097560(void)

{
  return;
}

/* 10097580  FUN_10097580  (115 bytes)
 * undefined2 FUN_10097580(void * param_1, int param_2)
 */
undefined2 __cdecl FUN_10097580(void *param_1,int param_2)

{
  float *pfVar1;
  void *pvVar2;
  void *extraout_ECX;
  float10 fVar3;
  float10 fVar4;
  bool local_64;
  int local_60;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if (DAT_102da420 < 0x28) {
    local_60 = param_2 << 1;
  }
  else {
    local_60 = param_2;
  }
  pfVar1 = thunk_FUN_10096e30(local_10);
  pvVar2 = thunk_FUN_1000ca70(param_1,local_1c,pfVar1);
  pvVar2 = (void *)thunk_FUN_10008500(pvVar2);
  fVar3 = thunk_FUN_10097fc0(extraout_ECX,pvVar2);
  fVar4 = (float10)local_60;
  local_64 = fVar4 < fVar3 || (fVar4 == fVar3) != 0;
  return CONCAT11(fVar4 < fVar3 | (byte)((ushort)((ushort)(fVar4 == fVar3) << 0xe) >> 8),local_64);
}

/* 10097610  FUN_10097610  (41 bytes)
 * undefined1 FUN_10097610(int param_1)
 */
undefined1 __cdecl FUN_10097610(int param_1)

{
  undefined1 uVar1;
  
  if ((param_1 < 0) || (0x20 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (&DAT_1031ab14)[param_1];
  }
  return uVar1;
}

/* 10097650  FUN_10097650  (199 bytes)
 * undefined FUN_10097650(undefined4 param_1, undefined4 * param_2, undefined4 * param_3)
 */
void __cdecl FUN_10097650(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((DAT_1031ab94 & 1) == 0) {
    DAT_1031ab94 = DAT_1031ab94 | 1;
    thunk_FUN_10007fe0(&DAT_1031aab0);
    FUN_100bc490(0x10097750);
  }
  uVar1 = thunk_FUN_10008500(&DAT_1031aab0);
  iVar2 = (**(code **)(DAT_102e15a0 + 0x30))(param_1,uVar1);
  if (iVar2 == 0) {
    thunk_FUN_10008500(&DAT_1031aab0);
    lVar3 = __ftol();
    *param_2 = (int)lVar3;
    thunk_FUN_10008500(&DAT_1031aab0);
    lVar3 = __ftol();
    *param_3 = (int)lVar3;
  }
  else {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
  }
  return;
}

/* 10097750  FUN_10097750  (16 bytes)
 * undefined FUN_10097750(void)
 */
void FUN_10097750(void)

{
  return;
}

/* 10097770  FUN_10097770  (34 bytes)
 * undefined FUN_10097770(uint * param_1)
 */
void __cdecl FUN_10097770(uint *param_1)

{
  thunk_FUN_10060890(&DAT_102da950,param_1,1,-1);
  return;
}

/* 100977a0  FUN_100977a0  (921 bytes)
 * undefined FUN_100977a0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100977a0(void)

{
  float10 fVar1;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  
  fVar1 = (float10)(*DAT_102e1530)();
  _DAT_1031aba0 = (float)fVar1;
  if (_DAT_1031b840 <= _DAT_1031aba0) {
    _DAT_1031b840 = _DAT_1031aba0 + 0.1;
    (&DAT_1031b848)[DAT_1031b898] = DAT_10320fcc * 100.0;
    DAT_1031b898 = DAT_1031b898 + 1;
    if (0x13 < DAT_1031b898) {
      DAT_1031b898 = 0;
    }
    if (_DAT_1031b844 <= _DAT_1031aba0) {
      _DAT_1031b844 = _DAT_1031aba0 + 1.0;
      _DAT_1031b89c = 0.0;
      for (DAT_1031aaa8 = 0; DAT_1031aaa8 < 0x14; DAT_1031aaa8 = DAT_1031aaa8 + 1) {
        _DAT_1031b89c = _DAT_1031b89c + (float)(&DAT_1031b848)[DAT_1031aaa8];
      }
      _DAT_1031b89c = _DAT_1031b89c / 20.0;
      if (3.33 <= _DAT_1031b89c) {
        local_4c = 3.33;
      }
      else {
        local_4c = (double)_DAT_1031b89c;
      }
      if (1.11 <= local_4c) {
        if (3.33 <= _DAT_1031b89c) {
          local_5c = 3.33;
        }
        else {
          local_5c = (double)_DAT_1031b89c;
        }
        local_54 = (undefined4)local_5c;
        uStack_50 = local_5c._4_4_;
      }
      else {
        local_54 = 0x5c28f5c3;
        uStack_50 = 0x3ff1c28f;
      }
      _DAT_1031ab44 = ((float)(double)CONCAT44(uStack_50,local_54) - 1.11) / 2.22;
      _DAT_1031b7ec = 1.0 - _DAT_1031ab44;
      if (_DAT_1031b7ec != 0.0) {
        DAT_1031b818 = 0.3 <= _DAT_1031b7ec;
        DAT_1031b819 = !(bool)DAT_1031b818;
        if (_DAT_1031b7ec * 1.0 <= 0.25) {
          DAT_1031b800 = 0.25;
        }
        else {
          DAT_1031b800 = _DAT_1031b7ec * 1.0;
        }
        if (0.3 <= 0.05 / _DAT_1031b7ec) {
          DAT_1031b804 = 0.3;
        }
        else {
          DAT_1031b804 = 0.05 / _DAT_1031b7ec;
        }
        if (0.3 <= 0.05 / _DAT_1031b7ec) {
          DAT_1031b808 = 0.3;
        }
        else {
          DAT_1031b808 = 0.05 / _DAT_1031b7ec;
        }
        if (0.3 <= 0.05 / _DAT_1031b7ec) {
          _DAT_1031b80c = 0.3;
        }
        else {
          _DAT_1031b80c = 0.05 / _DAT_1031b7ec;
        }
        if (_DAT_1031b7ec + _DAT_1031b7ec <= 0.1) {
          _DAT_1031b810 = 0.1;
        }
        else {
          _DAT_1031b810 = _DAT_1031b7ec + _DAT_1031b7ec;
        }
        if (_DAT_1031b7ec * 30.0 <= 2.0) {
          local_4c._4_4_ = 2.0;
        }
        else {
          local_4c._4_4_ = _DAT_1031b7ec * 30.0;
        }
        DAT_1031b814 = local_4c._4_4_;
      }
    }
  }
  return;
}

/* 10097c20  FUN_10097c20  (262 bytes)
 * undefined FUN_10097c20(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097c20(void)

{
  _memset(&DAT_1031b800,0,0xa8);
  if ((*(float *)(DAT_102e81e0 + 0xc) == 2.0) || (*(float *)(DAT_102e81e0 + 0xc) == 1.0)) {
    DAT_1031b819 = 0;
    DAT_1031b81c = 0x1000;
    DAT_1031b800 = 0x3f800000;
    DAT_1031b804 = 0x3d4ccccd;
    DAT_1031b808 = 0x3d4ccccd;
    _DAT_1031b80c = 0x3d4ccccd;
    DAT_1031b818 = 1;
    _DAT_1031b810 = 0x3fc00000;
    DAT_1031b814 = 0x41f00000;
  }
  else {
    DAT_1031b819 = 1;
    DAT_1031b81c = 0x800;
    DAT_1031b800 = 0x3eb33333;
    DAT_1031b804 = 0x3e4ccccd;
    DAT_1031b808 = 0x3e99999a;
    _DAT_1031b80c = 0x3e4ccccd;
    DAT_1031b818 = 0;
    _DAT_1031b810 = 0x3f333333;
    DAT_1031b814 = 0x40a00000;
  }
  _DAT_1031b8a4 = *(undefined4 *)(DAT_102e81e0 + 0xc);
  return;
}

/* 10097d70  FUN_10097d70  (88 bytes)
 * undefined FUN_10097d70(undefined4 param_1)
 */
void __cdecl FUN_10097d70(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_102906d4 != 0) {
    uVar1 = thunk_FUN_10008500(DAT_102906d4 + 0x34);
    uVar2 = thunk_FUN_10008500(DAT_102906d4 + 0x40);
    uVar3 = thunk_FUN_10008500(DAT_102906d4 + 0x28);
    uVar4 = thunk_FUN_10042d10(param_1);
    (*DAT_102e14b8)(uVar4,uVar3,uVar2,uVar1);
  }
  return;
}

/* 10097de0  FUN_10097de0  (319 bytes)
 * undefined FUN_10097de0(float * param_1, float * param_2, float * param_3, float param_4)
 */
void __cdecl FUN_10097de0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  
  *param_3 = *param_1 - *param_2;
  param_3[1] = param_1[1] - param_2[1];
  if (0.01 <= param_3[1] * param_3[1] + *param_3 * *param_3) {
    if (param_4 * 15.0 <= 1.0) {
      fVar1 = param_4 * 15.0;
    }
    else {
      fVar1 = 1.0;
    }
    *param_3 = *param_3 * fVar1;
    if (param_4 * 15.0 <= 1.0) {
      fVar1 = param_4 * 15.0;
    }
    else {
      fVar1 = 1.0;
    }
    param_3[1] = param_3[1] * fVar1;
    *param_2 = *param_2 + *param_3;
    param_2[1] = param_2[1] + param_3[1];
  }
  else {
    param_2[1] = 0.0;
    *param_2 = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    param_3[1] = 0.0;
    *param_3 = 0.0;
  }
  return;
}

/* 10097f70  FUN_10097f70  (21 bytes)
 * undefined FUN_10097f70(void)
 */
void FUN_10097f70(void)

{
  FUN_10097f90();
  return;
}

/* 10097f90  FUN_10097f90  (32 bytes)
 * undefined FUN_10097f90(void)
 * called by: FUN_10097f70
 */
void FUN_10097f90(void)

{
  thunk_FUN_10008000(&DAT_1031c324,0,0,0);
  return;
}

/* 10097fc0  FUN_10097fc0  (96 bytes)
 * float10 FUN_10097fc0(void * param_1, void * param_2)
 */
float10 __thiscall FUN_10097fc0(void *param_1,void *param_2)

{
  float10 extraout_ST0;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0.0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    local_c = *(float *)((int)param_2 + local_8 * 4) * *(float *)((int)param_2 + local_8 * 4) +
              local_c;
    param_1 = param_2;
  }
  FUN_100bbfe4(param_1,SUB84((double)local_c,0),(uint)((ulonglong)(double)local_c >> 0x20));
  return (float10)(float)extraout_ST0;
}

/* 10098040  FUN_10098040  (316 bytes)
 * undefined FUN_10098040(float * param_1, float * param_2)
 */
void __cdecl FUN_10098040(float *param_1,float *param_2)

{
  double dVar1;
  float10 fVar2;
  float10 extraout_ST0;
  float local_10;
  float local_c;
  
  if ((param_1[1] == 0.0) && (*param_1 == 0.0)) {
    local_c = 0.0;
    if (param_1[2] <= 0.0) {
      local_10 = 270.0;
    }
    else {
      local_10 = 90.0;
    }
  }
  else {
    fVar2 = (float10)FUN_100c1560(SUB84((double)param_1[1],0),
                                  (int)((ulonglong)(double)param_1[1] >> 0x20),
                                  SUB84((double)*param_1,0),
                                  (int)((ulonglong)(double)*param_1 >> 0x20));
    local_c = (float)((fVar2 * (float10)180.0) / (float10)3.141592653589793);
    if (local_c < 0.0) {
      local_c = local_c + 360.0;
    }
    dVar1 = (double)(param_1[1] * param_1[1] + *param_1 * *param_1);
    FUN_100bbfe4(param_1,SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    fVar2 = (float10)FUN_100c1560(SUB84((double)param_1[2],0),
                                  (int)((ulonglong)(double)param_1[2] >> 0x20),
                                  SUB84((double)(float)extraout_ST0,0),
                                  (int)((ulonglong)(double)(float)extraout_ST0 >> 0x20));
    local_10 = (float)((fVar2 * (float10)180.0) / (float10)3.141592653589793);
    if (local_10 < 0.0) {
      local_10 = local_10 + 360.0;
    }
  }
  *param_2 = local_10;
  param_2[1] = local_c;
  param_2[2] = 0.0;
  return;
}

/* 100981d0  FUN_100981d0  (151 bytes)
 * float10 FUN_100981d0(float * param_1)
 */
float10 __cdecl FUN_100981d0(float *param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float10 extraout_ST0;
  
  dVar2 = (double)(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  FUN_100bbfe4(param_1,SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  fVar1 = (float)extraout_ST0;
  if (fVar1 != 0.0) {
    fVar3 = 1.0 / fVar1;
    *param_1 = fVar3 * *param_1;
    param_1[1] = fVar3 * param_1[1];
    param_1[2] = fVar3 * param_1[2];
  }
  return (float10)fVar1;
}

/* 10098290  FUN_10098290  (56 bytes)
 * undefined FUN_10098290(float * param_1)
 */
void __cdecl FUN_10098290(float *param_1)

{
  *param_1 = -*param_1;
  param_1[1] = -param_1[1];
  param_1[2] = -param_1[2];
  return;
}

/* 100982e0  FUN_100982e0  (59 bytes)
 * undefined FUN_100982e0(float * param_1, float param_2, float * param_3)
 */
void __cdecl FUN_100982e0(float *param_1,float param_2,float *param_3)

{
  *param_3 = param_2 * *param_1;
  param_3[1] = param_2 * param_1[1];
  param_3[2] = param_2 * param_1[2];
  return;
}

/* 10098330  FUN_10098330  (76 bytes)
 * undefined FUN_10098330(float * param_1, float param_2, float * param_3, float * param_4)
 */
void __cdecl FUN_10098330(float *param_1,float param_2,float *param_3,float *param_4)

{
  *param_4 = param_2 * *param_3 + *param_1;
  param_4[1] = param_2 * param_3[1] + param_1[1];
  param_4[2] = param_2 * param_3[2] + param_1[2];
  return;
}

/* 10098390  FUN_10098390  (86 bytes)
 * undefined FUN_10098390(byte.conflict * param_1)
 */
void __cdecl FUN_10098390(byte_conflict *param_1)

{
  undefined1 local_108 [256];
  undefined4 local_8;
  
  if (DAT_102e1234 < 0x280) {
    local_8 = 0x140;
  }
  else {
    local_8 = 0x280;
  }
  FUN_100bb6e0(local_108,param_1);
  (*DAT_102e1458)(local_108);
  return;
}

/* 10098400  FUN_10098400  (434 bytes)
 * Panel * FUN_10098400(Panel * param_1)
 */
Panel * __fastcall FUN_10098400(Panel *param_1)

{
  Panel *local_4c;
  
  vgui::Panel::Panel(param_1);
  thunk_FUN_10036600((InputSignal *)(param_1 + 0xbc));
  *(undefined4 *)(param_1 + 0xc0) = 0;
  vgui::Label::Label((Label *)(param_1 + 200),"");
  vgui::ImagePanel::ImagePanel((ImagePanel *)(param_1 + 0x198),(Image *)0x0);
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined ***)param_1 = &PTR_setPos_10271cd4;
  *(undefined ***)(param_1 + 0xbc) = &PTR_thunk_FUN_10039270_10271c98;
  param_1[0x260] = (Panel)0x0;
  param_1[0x261] = (Panel)0x0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  param_1[0xc4] = (Panel)0x1;
  (**(code **)(*(int *)(param_1 + 200) + 0x40))(param_1);
  (**(code **)(*(int *)(param_1 + 200) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(*(int *)(param_1 + 200) + 300))(0,0,0,0xff);
  if (param_1 == (Panel *)0x0) {
    local_4c = (Panel *)0x0;
  }
  else {
    local_4c = param_1 + 0xbc;
  }
  (**(code **)(*(int *)(param_1 + 200) + 0x70))(local_4c);
  (**(code **)(*(int *)(param_1 + 0x198) + 0x40))(param_1);
  if (param_1 == (Panel *)0x0) {
    local_4c = (Panel *)0x0;
  }
  else {
    local_4c = param_1 + 0xbc;
  }
  (**(code **)(*(int *)(param_1 + 0x198) + 0x70))(local_4c);
  vgui::Panel::setPaintBackgroundEnabled(param_1,false);
  return param_1;
}

/* 10098620  FUN_10098620  (49 bytes)
 * undefined FUN_10098620(int * param_1)
 */
void __fastcall FUN_10098620(int *param_1)

{
  *param_1 = (int)&PTR_setPos_10271cd4;
  param_1[0x2f] = (int)&PTR_thunk_FUN_10039270_10271c98;
  thunk_FUN_10098730(param_1);
  return;
}

