/* client.dll - unnamed_100b53c0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100b53c0  FUN_100b53c0  (100 bytes)
 * Button * FUN_100b53c0(uint * param_1, int param_2, int param_3, int param_4, int param_5)
 */
Button * __thiscall
FUN_100b53c0(void *this,uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  vgui::Button::Button(this,(char *)param_1,param_2,param_3,param_4,param_5);
  vgui::InputSignal::InputSignal((InputSignal *)((int)this + 0xf0));
  *(undefined ***)this = &PTR_setPos_10278754;
  *(undefined ***)((int)this + 0xf0) = &PTR_thunk_FUN_100b55a0_10278718;
  thunk_FUN_100b5860(this,param_1);
  return this;
}

/* 100b5440  FUN_100b5440  (69 bytes)
 * undefined FUN_100b5440(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
void __thiscall
FUN_100b5440(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0xf4) = param_1;
  *(undefined4 *)((int)this + 0xf8) = param_2;
  *(undefined4 *)((int)this + 0xfc) = param_3;
  *(undefined4 *)((int)this + 0x100) = param_4;
  return;
}

/* 100b54a0  FUN_100b54a0  (204 bytes)
 * undefined FUN_100b54a0(int param_1)
 * called by: thunk_FUN_100b54a0
 */
void __fastcall FUN_100b54a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong lVar5;
  
  lVar5 = __ftol();
  (*DAT_102e1484)(0,0,*(int *)(param_1 + 0xc) + -1,*(int *)(param_1 + 0x10) + -1,
                  *(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8),
                  *(undefined4 *)(param_1 + 0xfc),(int)lVar5);
  lVar5 = __ftol();
  uVar1 = (undefined4)lVar5;
  lVar5 = __ftol();
  uVar2 = (undefined4)lVar5;
  lVar5 = __ftol();
  uVar3 = (undefined4)lVar5;
  pcVar4 = (char *)thunk_FUN_100b58e0(param_1);
  thunk_FUN_10047f00(0,0,DAT_102e1234,pcVar4,uVar3,uVar2,uVar1);
  return;
}

/* 100b55a0  FUN_100b55a0  (21 bytes)
 * undefined FUN_100b55a0(void)
 * called by: thunk_FUN_100b55a0
 */
void FUN_100b55a0(void)

{
  return;
}

/* 100b55c0  FUN_100b55c0  (35 bytes)
 * undefined FUN_100b55c0(int param_1)
 * called by: thunk_FUN_100b55c0
 */
void __fastcall FUN_100b55c0(int param_1)

{
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x10);
  return;
}

/* 100b55f0  FUN_100b55f0  (39 bytes)
 * undefined FUN_100b55f0(int param_1)
 * called by: thunk_FUN_100b55f0
 */
void __fastcall FUN_100b55f0(int param_1)

{
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / 2.0;
  return;
}

/* 100b5620  FUN_100b5620  (21 bytes)
 * undefined FUN_100b5620(void)
 * called by: thunk_FUN_100b5620
 */
void FUN_100b5620(void)

{
  return;
}

/* 100b5640  FUN_100b5640  (21 bytes)
 * undefined FUN_100b5640(void)
 * called by: thunk_FUN_100b5640
 */
void FUN_100b5640(void)

{
  return;
}

/* 100b5660  FUN_100b5660  (21 bytes)
 * undefined FUN_100b5660(void)
 * called by: thunk_FUN_100b5660
 */
void FUN_100b5660(void)

{
  return;
}

/* 100b5680  FUN_100b5680  (21 bytes)
 * undefined FUN_100b5680(void)
 * called by: thunk_FUN_100b5680
 */
void FUN_100b5680(void)

{
  return;
}

/* 100b56a0  FUN_100b56a0  (21 bytes)
 * undefined FUN_100b56a0(void)
 * called by: thunk_FUN_100b56a0
 */
void FUN_100b56a0(void)

{
  return;
}

/* 100b56c0  FUN_100b56c0  (21 bytes)
 * undefined FUN_100b56c0(void)
 * called by: thunk_FUN_100b56c0
 */
void FUN_100b56c0(void)

{
  return;
}

/* 100b56e0  FUN_100b56e0  (21 bytes)
 * undefined FUN_100b56e0(void)
 * called by: thunk_FUN_100b56e0
 */
void FUN_100b56e0(void)

{
  return;
}

/* 100b5700  FUN_100b5700  (21 bytes)
 * undefined FUN_100b5700(void)
 * called by: thunk_FUN_100b5700
 */
void FUN_100b5700(void)

{
  return;
}

/* 100b5720  FUN_100b5720  (21 bytes)
 * undefined FUN_100b5720(void)
 * called by: thunk_FUN_100b5720
 */
void FUN_100b5720(void)

{
  return;
}

/* 100b5740  FUN_100b5740  (21 bytes)
 * undefined FUN_100b5740(void)
 * called by: thunk_FUN_100b5740
 */
void FUN_100b5740(void)

{
  return;
}

/* 100b5760  FUN_100b5760  (21 bytes)
 * undefined FUN_100b5760(void)
 * called by: thunk_FUN_100b5760
 */
void FUN_100b5760(void)

{
  return;
}

/* 100b5780  FUN_100b5780  (21 bytes)
 * undefined FUN_100b5780(void)
 * called by: thunk_FUN_100b5780
 */
void FUN_100b5780(void)

{
  return;
}

/* 100b57a0  FUN_100b57a0  (21 bytes)
 * undefined FUN_100b57a0(void)
 * called by: thunk_FUN_100b57a0
 */
void FUN_100b57a0(void)

{
  return;
}

/* 100b57c0  FUN_100b57c0  (21 bytes)
 * undefined FUN_100b57c0(void)
 * called by: thunk_FUN_100b57c0
 */
void FUN_100b57c0(void)

{
  return;
}

/* 100b57e0  FUN_100b57e0  (21 bytes)
 * undefined FUN_100b57e0(void)
 * called by: thunk_FUN_100b57e0
 */
void FUN_100b57e0(void)

{
  return;
}

/* 100b5800  FUN_100b5800  (21 bytes)
 * undefined FUN_100b5800(void)
 * called by: thunk_FUN_100b5800
 */
void FUN_100b5800(void)

{
  return;
}

/* 100b5820  FUN_100b5820  (21 bytes)
 * undefined FUN_100b5820(void)
 * called by: thunk_FUN_100b5820
 */
void FUN_100b5820(void)

{
  return;
}

/* 100b5840  FUN_100b5840  (21 bytes)
 * undefined FUN_100b5840(void)
 * called by: thunk_FUN_100b5840
 */
void FUN_100b5840(void)

{
  return;
}

/* 100b5860  FUN_100b5860  (43 bytes)
 * undefined FUN_100b5860(uint * param_1)
 */
void __thiscall FUN_100b5860(void *this,uint *param_1)

{
  FUN_100bba20((uint *)((int)this + 0x104),param_1);
  return;
}

/* 100b58a0  FUN_100b58a0  (45 bytes)
 * undefined FUN_100b58a0(undefined4 param_1, undefined4 param_2)
 */
void __thiscall FUN_100b58a0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x144) = param_1;
  *(undefined4 *)((int)this + 0x148) = param_2;
  return;
}

/* 100b58e0  FUN_100b58e0  (27 bytes)
 * int FUN_100b58e0(int param_1)
 */
int __fastcall FUN_100b58e0(int param_1)

{
  return param_1 + 0x104;
}

/* 100b5910  FUN_100b5910  (19 bytes)
 * undefined FUN_100b5910(void)
 * called by: thunk_FUN_100b5910
 */
void FUN_100b5910(void)

{
  return;
}

/* 100b5930  FUN_100b5930  (21 bytes)
 * undefined FUN_100b5930(void)
 */
void FUN_100b5930(void)

{
  FUN_100b5950();
  return;
}

/* 100b5950  FUN_100b5950  (46 bytes)
 * undefined FUN_100b5950(void)
 * called by: FUN_100b5930
 */
void FUN_100b5950(void)

{
  thunk_FUN_10007fe0(&DAT_10320680);
  thunk_FUN_10007fe0(&DAT_10320fec);
  thunk_FUN_10007fe0(&DAT_1032070c);
  return;
}

/* 100b5990  FUN_100b5990  (21 bytes)
 * undefined FUN_100b5990(void)
 */
void FUN_100b5990(void)

{
  FUN_100b59b0();
  return;
}

/* 100b59b0  FUN_100b59b0  (26 bytes)
 * undefined FUN_100b59b0(void)
 * called by: FUN_100b5990
 */
void FUN_100b59b0(void)

{
  thunk_FUN_10007fe0(&DAT_10320f9c);
  return;
}

/* 100b59d0  FUN_100b59d0  (21 bytes)
 * undefined FUN_100b59d0(void)
 */
void FUN_100b59d0(void)

{
  FUN_100b59f0();
  return;
}

/* 100b59f0  FUN_100b59f0  (26 bytes)
 * undefined FUN_100b59f0(void)
 * called by: FUN_100b59d0
 */
void FUN_100b59f0(void)

{
  thunk_FUN_10007fe0(&DAT_1032073c);
  return;
}

/* 100b5a10  FUN_100b5a10  (21 bytes)
 * undefined FUN_100b5a10(void)
 */
void FUN_100b5a10(void)

{
  FUN_100b5a30();
  return;
}

/* 100b5a30  FUN_100b5a30  (26 bytes)
 * undefined FUN_100b5a30(void)
 * called by: FUN_100b5a10
 */
void FUN_100b5a30(void)

{
  thunk_FUN_10007fe0(&DAT_10320f8c);
  return;
}

/* 100b5a50  FUN_100b5a50  (21 bytes)
 * undefined FUN_100b5a50(void)
 */
void FUN_100b5a50(void)

{
  CL_IsThirdPerson();
  return;
}

/* 100b5a70  FUN_100b5a70  (21 bytes)
 * undefined FUN_100b5a70(void)
 */
void FUN_100b5a70(void)

{
  FUN_100b5a90();
  return;
}

/* 100b5a90  FUN_100b5a90  (26 bytes)
 * undefined FUN_100b5a90(void)
 * called by: FUN_100b5a70
 */
void FUN_100b5a90(void)

{
  thunk_FUN_10007fe0(&DAT_10320fd0);
  return;
}

/* 100b5ab0  FUN_100b5ab0  (21 bytes)
 * undefined FUN_100b5ab0(void)
 */
void FUN_100b5ab0(void)

{
  FUN_100b5ad0();
  return;
}

/* 100b5ad0  FUN_100b5ad0  (26 bytes)
 * undefined FUN_100b5ad0(void)
 * called by: FUN_100b5ab0
 */
void FUN_100b5ad0(void)

{
  thunk_FUN_10007fe0(&DAT_1032183c);
  return;
}

/* 100b5af0  FUN_100b5af0  (21 bytes)
 * undefined FUN_100b5af0(void)
 */
void FUN_100b5af0(void)

{
  FUN_100b5b10();
  return;
}

/* 100b5b10  FUN_100b5b10  (26 bytes)
 * undefined FUN_100b5b10(void)
 * called by: FUN_100b5af0
 */
void FUN_100b5b10(void)

{
  thunk_FUN_10007fe0(&DAT_10321018);
  return;
}

/* 100b5b30  FUN_100b5b30  (21 bytes)
 * undefined FUN_100b5b30(void)
 */
void FUN_100b5b30(void)

{
  FUN_100b5b50();
  return;
}

/* 100b5b50  FUN_100b5b50  (26 bytes)
 * undefined FUN_100b5b50(void)
 * called by: FUN_100b5b30
 */
void FUN_100b5b50(void)

{
  thunk_FUN_10007fe0(&DAT_103206f0);
  return;
}

/* 100b5b70  FUN_100b5b70  (218 bytes)
 * undefined FUN_100b5b70(int param_1, int param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b5b70(int param_1,int param_2)

{
  undefined4 local_4c;
  undefined4 local_48;
  
  DAT_10320754 = _DAT_10320fa8 - *(float *)(param_1 + 8);
  DAT_10320690 = (_DAT_10320fa8 - *(float *)(param_1 + 8)) * 0.2 * *(float *)(param_2 + 0x3c) *
                 100.0;
  local_48 = DAT_10320690;
  if (DAT_10320690 <= 0.0) {
    local_48 = 0.0 - DAT_10320690;
  }
  local_4c = DAT_10320754;
  if (DAT_10320754 <= 0.0) {
    local_4c = 0.0 - DAT_10320754;
  }
  if (local_4c < local_48) {
    DAT_10320690 = DAT_10320754;
  }
  *(float *)(param_1 + 8) = _DAT_10320fa8 - DAT_10320690;
  _DAT_10320fa8 = (float)*(undefined4 *)(param_1 + 8);
  return;
}

/* 100b5c80  FUN_100b5c80  (1010 bytes)
 * float10 FUN_100b5c80(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100b5c80(void *param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  void *extraout_ECX;
  void *pvVar6;
  void *this;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  int local_c;
  int local_8;
  
  iVar5 = CL_IsThirdPerson();
  if (iVar5 == 0) {
    if ((*(int *)((int)param_1 + 0x4c) == 0) && ((DAT_10321004 == 0 || ((DAT_10321004 & 8) != 0))))
    {
      if ((*(int *)((int)param_1 + 0x50) == 0) ||
         ((*(float *)((int)param_1 + 0x40) == _DAT_1032068c ||
          (*(float *)((int)param_1 + 0x78) == 0.0)))) {
        if (0.01 < (float)DAT_10320ff8) {
          DAT_10320ff8 = (void *)((float)DAT_10320ff8 / 2.0);
        }
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          fVar1 = *(float *)((int)param_1 + local_8 * 4 + 0x18);
          fVar3 = (float)DAT_10320ff8 * 0.5;
          iVar5 = thunk_FUN_10008500(&DAT_10320f8c);
          *(float *)(iVar5 + local_8 * 4) = (0.75 - fVar3) * fVar1;
        }
        fVar1 = (float)DAT_10320ff8 * 0.65;
        iVar5 = thunk_FUN_10008500(&DAT_10320f8c);
        *(float *)(iVar5 + 8) = 0.5 - fVar1;
        iVar5 = thunk_FUN_10008500(&DAT_10320f8c);
        thunk_FUN_100b5b70(iVar5,(int)param_1);
        fVar7 = (float10)(float)DAT_10320ff8;
      }
      else {
        if (DAT_1031bee4 == 0.0) {
          _DAT_10320fe8 = 1.0;
        }
        else {
          _DAT_10320fe8 = DAT_1031bee4;
        }
        _DAT_1032068c = *(float *)((int)param_1 + 0x40);
        _DAT_1032186c =
             *(float *)((int)param_1 + 0x3c) * 3.5 * 100.0 * _DAT_10320fe8 + _DAT_1032186c;
        if (360.0 < _DAT_1032186c) {
          _DAT_1032186c = 0.0;
        }
        if ((float)_DAT_10321834 <= (float)DAT_10320ff8) {
          dVar2 = (double)(*(float *)((int)param_1 + 0x5c) * *(float *)((int)param_1 + 0x5c) +
                          *(float *)((int)param_1 + 0x58) * *(float *)((int)param_1 + 0x58));
          FUN_100bbfe4(param_1,SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
          DAT_10320ff8 = (void *)(float)(extraout_ST0_00 * (float10)0.01);
          _DAT_10321834 = DAT_10320ff8;
          pvVar6 = DAT_10320ff8;
        }
        else {
          dVar2 = (double)(*(float *)((int)param_1 + 0x5c) * *(float *)((int)param_1 + 0x5c) +
                          *(float *)((int)param_1 + 0x58) * *(float *)((int)param_1 + 0x58));
          FUN_100bbfe4(param_1,SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
          DAT_10320ff8 = (void *)(float)((extraout_ST0 * (float10)0.01 +
                                         (float10)(float)DAT_10320ff8) * (float10)0.5);
          pvVar6 = extraout_ECX;
        }
        pvVar4 = DAT_10320ff8;
        FUN_100be334(pvVar6,SUB84((double)(_DAT_1032186c * 0.017453292 + _DAT_1032186c * 0.017453292
                                          ),0));
        pvVar6 = DAT_10320ff8;
        _DAT_103206dc = (float)(extraout_ST0_01 * (float10)(float)pvVar4);
        FUN_100be334(this,SUB84((double)(_DAT_1032186c * 0.017453292 * 1.0),0));
        _DAT_10320f60 = (float)(extraout_ST0_02 * (float10)(float)pvVar6);
        for (local_c = 0; local_c < 3; local_c = local_c + 1) {
          iVar5 = thunk_FUN_10008500(&DAT_1032073c);
          *(undefined4 *)(iVar5 + local_c * 4) = 0x100b5f84;
          if (local_c == 2) {
            iVar5 = thunk_FUN_10008500(&DAT_1032073c);
            *(float *)(iVar5 + 8) = *(float *)(iVar5 + 8) * 1.6;
          }
          iVar5 = thunk_FUN_10008500(&DAT_10320f8c);
          *(undefined4 *)(iVar5 + local_c * 4) = 0x100b6014;
        }
        iVar5 = thunk_FUN_10008500(&DAT_10320f8c);
        *(float *)(iVar5 + 8) = (0.5 - (float)DAT_10320ff8 * 0.65) + *(float *)(iVar5 + 8);
        iVar5 = thunk_FUN_10008500(&DAT_10320f8c);
        thunk_FUN_100b5b70(iVar5,(int)param_1);
        fVar7 = (float10)(float)DAT_10320ff8;
      }
    }
    else {
      fVar7 = (float10)0.0;
    }
  }
  else {
    fVar7 = (float10)0.0;
  }
  return fVar7;
}

/* 100b6170  FUN_100b6170  (309 bytes)
 * float10 FUN_100b6170(void)
 */
float10 FUN_100b6170(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float in_stack_0000001c;
  float in_stack_00000020;
  float local_78;
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [16];
  float local_c;
  
  thunk_FUN_10007fe0(local_1c);
  thunk_FUN_10007fe0(local_28);
  thunk_FUN_10007fe0(local_34);
  uVar5 = thunk_FUN_10008500(local_34);
  uVar6 = thunk_FUN_10008500(local_28);
  uVar7 = thunk_FUN_10008500(local_1c);
  uVar8 = thunk_FUN_10008500(&stack0x00000004);
  (*DAT_102e14b8)(uVar8,uVar7,uVar6,uVar5);
  pfVar9 = (float *)thunk_FUN_10008500(&stack0x00000010);
  pfVar10 = (float *)thunk_FUN_10008500(local_28);
  fVar1 = *pfVar9;
  fVar2 = *pfVar10;
  iVar11 = thunk_FUN_10008500(&stack0x00000010);
  iVar12 = thunk_FUN_10008500(local_28);
  fVar3 = *(float *)(iVar11 + 4);
  fVar4 = *(float *)(iVar12 + 4);
  iVar11 = thunk_FUN_10008500(&stack0x00000010);
  iVar12 = thunk_FUN_10008500(local_28);
  fVar1 = *(float *)(iVar11 + 8) * *(float *)(iVar12 + 8) + fVar3 * fVar4 + fVar1 * fVar2;
  if (0.0 <= fVar1) {
    local_78 = 1.4013e-45;
  }
  else {
    local_78 = -NAN;
  }
  fVar2 = local_78;
  local_78 = fVar1;
  if (fVar1 <= 0.0) {
    local_78 = 0.0 - fVar1;
  }
  if (in_stack_00000020 <= local_78 / 100.0) {
    local_c = in_stack_0000001c;
  }
  else {
    local_c = ((local_78 / 100.0) * in_stack_0000001c) / in_stack_00000020;
  }
  return (float10)local_c * (float10)(int)fVar2;
}

/* 100b6300  FUN_100b6300  (99 bytes)
 * undefined FUN_100b6300(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6300(void)

{
  float10 fVar1;
  
  fVar1 = (float10)(*DAT_102e1530)();
  if ((fVar1 != (float10)_DAT_10320fc0) && ((DAT_10320fb4 != 0 || (_DAT_10320fb0 == 0.0)))) {
    _DAT_10320fb0 = *(float *)(DAT_10321014 + 0xc);
    DAT_10320fb4 = 0;
    _DAT_10320fb8 = 0;
  }
  return;
}

/* 100b6380  FUN_100b6380  (48 bytes)
 * undefined FUN_100b6380(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6380(void)

{
  float10 fVar1;
  
  fVar1 = (float10)(*DAT_102e1530)();
  _DAT_10320fc0 = (double)fVar1;
  DAT_10320fb4 = 1;
  _DAT_10320fb0 = 0;
  return;
}

/* 100b63c0  FUN_100b63c0  (473 bytes)
 * undefined FUN_100b63c0(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b63c0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 local_c;
  
  iVar2 = (*DAT_102e1520)();
  if ((((iVar2 == 0) && (*(int *)(param_1 + 0x50) != 0)) && (*(int *)(param_1 + 0xbc) == 0)) &&
     (*(int *)(param_1 + 0x4c) == 0)) {
    if (DAT_10320fb4 == 0) {
      fVar1 = *(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x80);
      if (fVar1 == 0.0) {
        _DAT_10320fb0 = 0.0;
      }
      else {
        local_c = _DAT_10320fb0 * *(float *)(param_1 + 0x3c);
        _DAT_10320fb0 = *(float *)(param_1 + 0x3c) * *(float *)(DAT_10321014 + 0xc) + _DAT_10320fb0;
        if (fVar1 <= 0.0) {
          if (fVar1 < 0.0) {
            if (-fVar1 < local_c) {
              _DAT_10320fb0 = 0.0;
              local_c = -fVar1;
            }
            *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) - local_c;
          }
        }
        else {
          if (fVar1 < local_c) {
            _DAT_10320fb0 = 0.0;
            local_c = fVar1;
          }
          *(float *)(param_1 + 0x80) = local_c + *(float *)(param_1 + 0x80);
        }
      }
    }
    else {
      if (*(float *)(*(int *)(param_1 + 200) + 0x10) <= 0.0) {
        local_50 = 0.0 - *(float *)(*(int *)(param_1 + 200) + 0x10);
      }
      else {
        local_50 = *(float *)(*(int *)(param_1 + 200) + 0x10);
      }
      if (*(float *)(DAT_102e81a4 + 0xc) <= local_50) {
        _DAT_10320fb8 = _DAT_10320fb8 + *(float *)(param_1 + 0x3c);
      }
      else {
        _DAT_10320fb8 = 0.0;
      }
      if (*(float *)(DAT_10320f74 + 0xc) < _DAT_10320fb8) {
        thunk_FUN_100b6300();
      }
    }
  }
  else {
    _DAT_10320fb8 = 0.0;
    _DAT_10320fb0 = 0.0;
  }
  return;
}

/* 100b6610  FUN_100b6610  (423 bytes)
 * undefined FUN_100b6610(int param_1, float * param_2)
 */
void __cdecl FUN_100b6610(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar3 = (*DAT_102e1528)();
  if (iVar3 != 0) {
    iVar4 = thunk_FUN_10008500(iVar3 + 0xb54);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0xc);
    fVar2 = *param_2;
    pfVar5 = (float *)thunk_FUN_10008500(iVar3 + 0xb54);
    *pfVar5 = -fVar1 + fVar2;
    iVar4 = thunk_FUN_10008500(iVar3 + 0xb54);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x14);
    pfVar5 = (float *)thunk_FUN_10008500(iVar3 + 0xb54);
    pfVar6 = (float *)thunk_FUN_10008500(&DAT_10320fd0);
    *pfVar5 = *pfVar5 - *pfVar6 * 1.25;
    iVar4 = thunk_FUN_10008500(iVar3 + 0xb54);
    iVar7 = thunk_FUN_10008500(&DAT_10320fd0);
    *(float *)(iVar4 + 4) = *(float *)(iVar7 + 4) * 1.25 + *(float *)(iVar4 + 4);
    puVar8 = (undefined4 *)thunk_FUN_10008500(iVar3 + 0xb54);
    puVar9 = (undefined4 *)thunk_FUN_10008500(iVar3 + 0x2cc);
    *puVar9 = *puVar8;
    iVar4 = thunk_FUN_10008500(iVar3 + 0xb54);
    iVar7 = thunk_FUN_10008500(iVar3 + 0x2cc);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar4 + 4);
    iVar4 = thunk_FUN_10008500(iVar3 + 0xb54);
    iVar7 = thunk_FUN_10008500(iVar3 + 0x2cc);
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar4 + 8);
    puVar8 = (undefined4 *)thunk_FUN_10008500(iVar3 + 0xb54);
    puVar9 = (undefined4 *)thunk_FUN_10008500(iVar3 + 0xb28);
    *puVar9 = *puVar8;
    iVar4 = thunk_FUN_10008500(iVar3 + 0xb54);
    iVar7 = thunk_FUN_10008500(iVar3 + 0xb28);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar4 + 4);
    iVar4 = thunk_FUN_10008500(iVar3 + 0xb54);
    iVar3 = thunk_FUN_10008500(iVar3 + 0xb28);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar4 + 8);
  }
  return;
}

/* 100b6820  FUN_100b6820  (184 bytes)
 * undefined FUN_100b6820(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100b6820(void *this,void *param_1)

{
  float fVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  fVar1 = DAT_10320f80;
  FUN_100be334(this,SUB84((double)(_DAT_1028b284 * *(float *)((int)param_1 + 0x40)),0));
  *(float *)((int)param_1 + 0x14) =
       (float)(extraout_ST0 * (float10)fVar1 * (float10)_DAT_1028b2c0 +
              (float10)*(float *)((int)param_1 + 0x14));
  fVar1 = DAT_10320f80;
  FUN_100be334(param_1,SUB84((double)(_DAT_1028b298 * *(float *)((int)param_1 + 0x40)),0));
  *(float *)((int)param_1 + 0xc) =
       (float)(extraout_ST0_00 * (float10)fVar1 * (float10)_DAT_1028b2d4 +
              (float10)*(float *)((int)param_1 + 0xc));
  fVar1 = DAT_10320f80;
  FUN_100be334(param_1,SUB84((double)(_DAT_1028b270 * *(float *)((int)param_1 + 0x40)),0));
  *(float *)((int)param_1 + 0x10) =
       (float)(extraout_ST0_01 * (float10)fVar1 * (float10)_DAT_1028b2ac +
              (float10)*(float *)((int)param_1 + 0x10));
  return;
}

/* 100b6910  FUN_100b6910  (240 bytes)
 * undefined FUN_100b6910(int param_1, int param_2)
 */
void __cdecl FUN_100b6910(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined1 auStack_74 [12];
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_64 = *(undefined4 *)(param_2 + 0xb0);
  uStack_68 = 0x100b6929;
  iVar1 = (*DAT_102e152c)();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x260) < 1) {
      if ((*(uint *)(param_1 + 0x26c) & 0x10) == 0) {
        DAT_10320f88 = 0x3f000000;
      }
      else {
        DAT_10320f88 = 0x41f00000;
      }
      DAT_10321838 = 0x41200000;
      uStack_64 = 0x41200000;
      uStack_68 = DAT_10320f88;
      uStack_7c = 0x100b69a3;
      thunk_FUN_10015740(auStack_74,(undefined4 *)(param_2 + 0x58));
      thunk_FUN_10015ce0(auStack_80,(undefined4 *)(iVar1 + 0xb54));
      fVar2 = thunk_FUN_100b6170();
      *(float *)(param_2 + 0x14) = (float)fVar2 + *(float *)(param_2 + 0x14);
      if ((*(int *)(param_2 + 0x8c) < 1) && (*(float *)(param_2 + 0x78) != 0.0)) {
        *(undefined4 *)(param_2 + 0x14) = 0x42a00000;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
  }
  return;
}

/* 100b6a40  FUN_100b6a40  (244 bytes)
 * undefined FUN_100b6a40(undefined4 * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b6a40(undefined4 *param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = (*DAT_102e1524)();
  local_c = (*DAT_102e1528)();
  *param_1 = param_1[0x19];
  param_1[1] = param_1[0x1a];
  param_1[2] = param_1[0x1b];
  param_1[3] = param_1[0x20];
  param_1[4] = param_1[0x21];
  param_1[5] = param_1[0x22];
  *(undefined4 *)(local_c + 0xb94) = 0;
  local_10 = DAT_10320f80;
  DAT_10320f80 = 0x3f800000;
  thunk_FUN_100b6820(param_1,param_1);
  DAT_10320f80 = local_10;
  thunk_FUN_10015740(&local_1c,param_1);
  _DAT_10320680 = local_1c;
  _DAT_10320684 = local_18;
  _DAT_10320688 = local_14;
  thunk_FUN_10015740(&local_28,param_1 + 3);
  DAT_10320fec = local_28;
  DAT_10320ff0 = local_24;
  DAT_10320ff4 = local_20;
  return;
}

/* 100b6b80  FUN_100b6b80  (218 bytes)
 * undefined FUN_100b6b80(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b6b80(int param_1)

{
  undefined4 local_4c;
  undefined4 local_48;
  
  DAT_1032100c = _DAT_103206fc - *(float *)(param_1 + 8);
  DAT_10320f84 = (_DAT_103206fc - *(float *)(param_1 + 8)) * 0.1 * *(float *)(param_1 + 0x3c) *
                 100.0;
  local_48 = DAT_10320f84;
  if (DAT_10320f84 <= 0.0) {
    local_48 = 0.0 - DAT_10320f84;
  }
  local_4c = DAT_1032100c;
  if (DAT_1032100c <= 0.0) {
    local_4c = 0.0 - DAT_1032100c;
  }
  if (local_4c < local_48) {
    DAT_10320f84 = DAT_1032100c;
  }
  *(float *)(param_1 + 8) = _DAT_103206fc - DAT_10320f84;
  _DAT_103206fc = (float)*(undefined4 *)(param_1 + 8);
  return;
}

/* 100b6c90  FUN_100b6c90  (8216 bytes)
 * undefined FUN_100b6c90(float * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b6c90(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float *pfVar14;
  void *extraout_ECX;
  void *this;
  void *this_00;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  float10 fVar15;
  float10 extraout_ST0;
  longlong lVar16;
  undefined8 uVar17;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [12];
  float local_114 [3];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  float local_e0;
  undefined1 local_dc [12];
  double local_d0;
  double local_c8;
  undefined1 local_c0 [12];
  float local_b4;
  int local_b0;
  uint local_ac;
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  double local_80;
  double local_78;
  float local_70;
  int local_6c;
  uint local_68;
  int local_64;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  float local_24;
  float local_20;
  undefined1 local_1c [12];
  int local_10;
  int local_c;
  int local_8;
  
  thunk_FUN_10007fe0(local_1c);
  thunk_FUN_10007fe0(local_30);
  thunk_FUN_10007fe0(local_3c);
  thunk_FUN_10007fe0(local_48);
  thunk_FUN_10007fe0(local_54);
  thunk_FUN_10007fe0(local_60);
  thunk_FUN_100b63c0((int)param_1);
  local_8 = (*DAT_102e1524)();
  local_c = (*DAT_102e1528)();
  fVar15 = thunk_FUN_100b5c80(param_1);
  local_20 = (float)fVar15;
  if (DAT_10321010 != 0) {
    *param_1 = DAT_10320f68;
    param_1[1] = DAT_10320f6c;
    param_1[2] = DAT_10320f70;
    param_1[0x19] = DAT_10320f68;
    param_1[0x1a] = DAT_10320f6c;
    param_1[0x1b] = DAT_10320f70;
  }
  *param_1 = param_1[0x19];
  param_1[1] = param_1[0x1a];
  param_1[2] = param_1[0x1b];
  *param_1 = *param_1 + param_1[0x1c];
  param_1[1] = param_1[1] + param_1[0x1d];
  param_1[2] = param_1[2] + param_1[0x1e];
  thunk_FUN_100b6b80((int)param_1);
  pfVar5 = (float *)thunk_FUN_10008500(&DAT_1032073c);
  *param_1 = *param_1 + *pfVar5;
  iVar6 = thunk_FUN_10008500(&DAT_1032073c);
  param_1[1] = param_1[1] + *(float *)(iVar6 + 4);
  iVar6 = thunk_FUN_10008500(&DAT_1032073c);
  param_1[2] = param_1[2] + *(float *)(iVar6 + 8);
  if (DAT_10320fe0 != 0) {
    param_1[0x20] = DAT_10320730;
    param_1[0x21] = DAT_10320734;
    param_1[0x22] = DAT_10320738;
  }
  fVar3 = param_1[0x20] - _DAT_10320748;
  pfVar5 = (float *)thunk_FUN_10008500(local_30);
  *pfVar5 = fVar3;
  fVar3 = param_1[0x21] - _DAT_1032074c;
  iVar6 = thunk_FUN_10008500(local_30);
  *(float *)(iVar6 + 4) = fVar3;
  fVar3 = param_1[0x22] - _DAT_10320750;
  iVar6 = thunk_FUN_10008500(local_30);
  *(float *)(iVar6 + 8) = fVar3;
  pvVar7 = (void *)thunk_FUN_10008500(local_30);
  fVar15 = thunk_FUN_10097fc0(extraout_ECX,pvVar7);
  if (fVar15 != (float10)0.0) {
    *(float *)(&DAT_10321428 + (DAT_1032182c & 0x3f) * 0xc) = param_1[0x20];
    *(float *)(&DAT_1032142c + (DAT_1032182c & 0x3f) * 0xc) = param_1[0x21];
    *(float *)(&DAT_10321430 + (DAT_1032182c & 0x3f) * 0xc) = param_1[0x22];
    *(float *)(&DAT_10321728 + (DAT_1032182c & 0x3f) * 4) = param_1[0x10];
    DAT_1032182c = DAT_1032182c + 1;
    _DAT_10320748 = param_1[0x20];
    _DAT_1032074c = param_1[0x21];
    _DAT_10320750 = param_1[0x22];
  }
  if (((DAT_102e81b4 != 0) && (*(float *)(DAT_102e81b4 + 0xc) != 0.0)) && ((DAT_10321004 & 2) != 0))
  {
    if (*(float *)(DAT_102e81b4 + 0xc) < 0.0) {
      (*DAT_102e14ec)();
    }
    local_70 = param_1[0x10] - *(float *)(DAT_102e81b4 + 0xc);
    local_6c = 1;
    while ((local_6c < 0x3f &&
           (local_68 = (DAT_1032182c - 1) - local_6c,
           *(float *)(&DAT_10321728 + (local_68 & 0x3f) * 4) < local_70 ==
           (*(float *)(&DAT_10321728 + (local_68 & 0x3f) * 4) == local_70)))) {
      local_6c = local_6c + 1;
    }
    if ((local_6c < 0x3f) && (*(float *)(&DAT_10321728 + (local_68 & 0x3f) * 4) != 0.0)) {
      local_78 = (double)(*(float *)(&DAT_10321728 + (local_68 + 1 & 0x3f) * 4) -
                         *(float *)(&DAT_10321728 + (local_68 & 0x3f) * 4));
      if (0.0 < local_78) {
        local_80 = (double)((local_70 - *(float *)(&DAT_10321728 + (local_68 & 0x3f) * 4)) /
                           (*(float *)(&DAT_10321728 + (local_68 + 1 & 0x3f) * 4) -
                           *(float *)(&DAT_10321728 + (local_68 & 0x3f) * 4)));
        if (1.0 < local_80) {
          local_80 = 1.0;
        }
        thunk_FUN_10057ab0((int)(&DAT_10321428 + (local_68 & 0x3f) * 0xc),
                           (int)(&DAT_10321428 + (local_68 + 1 & 0x3f) * 0xc),(int)(param_1 + 0x20),
                           (float)local_80);
        DAT_10320730 = param_1[0x20];
        DAT_10320734 = param_1[0x21];
        DAT_10320738 = param_1[0x22];
      }
    }
  }
  thunk_FUN_10097de0((float *)&DAT_1032183c,(float *)&DAT_10321018,(float *)&DAT_103206f0,
                     param_1[0xf]);
  param_1[0x20] = _DAT_103206f0 + param_1[0x20];
  param_1[0x21] = _DAT_103206f4 + param_1[0x21];
  param_1[0x22] = _DAT_103206f8 + param_1[0x22];
  puVar8 = (undefined4 *)thunk_FUN_10008500(&DAT_103206f0);
  *puVar8 = 0;
  iVar6 = thunk_FUN_10008500(&DAT_103206f0);
  *(undefined4 *)(iVar6 + 4) = 0;
  iVar6 = thunk_FUN_10008500(&DAT_103206f0);
  *(undefined4 *)(iVar6 + 8) = 0;
  param_1[3] = param_1[0x20];
  param_1[4] = param_1[0x21];
  param_1[5] = param_1[0x22];
  (*DAT_102e1534)();
  (*DAT_102e1538)(param_1,param_1 + 3,0x3f800000);
  *param_1 = *param_1 + 0.03125;
  param_1[1] = param_1[1] + 0.03125;
  param_1[2] = param_1[2] + 0.03125;
  local_24 = 0.0;
  if (1 < (int)param_1[0x15]) {
    thunk_FUN_10007fe0(local_9c);
    lVar16 = __ftol();
    local_8c = (int)lVar16;
    if (param_1[0x30] == 0.0) {
      local_90 = 0;
    }
    else {
      local_90 = (*DAT_102e1540)(param_1 + 0x19);
      if ((((-1 < local_90) && (local_90 < (int)param_1[0x2e])) &&
          (local_64 = (*DAT_102e152c)(local_90), local_64 != 0)) &&
         (*(int *)(local_64 + 0xb94) != 0)) {
        lVar16 = __ftol();
        local_8c = (int)lVar16;
      }
    }
    pfVar5 = (float *)thunk_FUN_10008500(local_9c);
    *pfVar5 = *param_1;
    iVar6 = thunk_FUN_10008500(local_9c);
    *(float *)(iVar6 + 4) = param_1[1];
    iVar6 = thunk_FUN_10008500(local_9c);
    *(float *)(iVar6 + 8) = param_1[2];
    if (param_1[0x15] == 2.8026e-45) {
      iVar6 = thunk_FUN_10008500(local_9c);
      *(float *)(iVar6 + 8) = *(float *)(iVar6 + 8) - (float)local_8c;
      for (local_84 = 0; local_84 < local_8c; local_84 = local_84 + 1) {
        thunk_FUN_10008500(local_9c);
        local_88 = (*DAT_102e153c)();
        if (-3 < local_88) break;
        iVar6 = thunk_FUN_10008500(local_9c);
        *(float *)(iVar6 + 8) = *(float *)(iVar6 + 8) + 1.0;
      }
      iVar6 = thunk_FUN_10008500(local_9c);
      local_24 = ((float)local_8c + *(float *)(iVar6 + 8)) - param_1[2];
    }
    else {
      iVar6 = thunk_FUN_10008500(local_9c);
      *(float *)(iVar6 + 8) = (float)local_8c + *(float *)(iVar6 + 8);
      for (local_84 = 0; local_84 < local_8c; local_84 = local_84 + 1) {
        thunk_FUN_10008500(local_9c);
        local_88 = (*DAT_102e153c)();
        if (local_88 < -2) break;
        iVar6 = thunk_FUN_10008500(local_9c);
        *(float *)(iVar6 + 8) = *(float *)(iVar6 + 8) - 1.0;
      }
      iVar6 = thunk_FUN_10008500(local_9c);
      local_24 = (*(float *)(iVar6 + 8) - (float)local_8c) - param_1[2];
    }
  }
  param_1[2] = local_24 + param_1[2];
  thunk_FUN_100b6910(local_8,(int)param_1);
  thunk_FUN_100b6820(this,param_1);
  pfVar5 = (float *)thunk_FUN_10008500(local_1c);
  *pfVar5 = param_1[0x20];
  iVar6 = thunk_FUN_10008500(local_1c);
  *(float *)(iVar6 + 4) = param_1[0x21];
  iVar6 = thunk_FUN_10008500(local_1c);
  *(float *)(iVar6 + 8) = param_1[0x22];
  pfVar5 = param_1 + 0xc;
  uVar17 = CONCAT44(param_1 + 9,param_1 + 6);
  uVar9 = thunk_FUN_10008500(local_1c);
  (*DAT_102e14b8)(uVar9,uVar17,pfVar5);
  iVar6 = CL_IsThirdPerson();
  if (iVar6 != 0) {
    if ((DAT_10321008 & 1) == 0) {
      DAT_10321008 = DAT_10321008 | 1;
      thunk_FUN_10007fe0(&DAT_10321860);
      FUN_100bc490(0x100b94f0);
    }
    if ((28.0 <= param_1[0x1e]) || (param_1[0x1e] == 0.0)) {
      local_170._0_1_ = '\0';
    }
    else {
      local_170._0_1_ = '\x01';
    }
    DAT_10321848 = local_170._0_1_;
    iVar6 = thunk_FUN_10008500(&DAT_10321860);
    *(undefined4 *)(iVar6 + 8) = 0;
    iVar6 = thunk_FUN_10008500(&DAT_10321860);
    *(undefined4 *)(iVar6 + 4) = 0;
    puVar8 = (undefined4 *)thunk_FUN_10008500(&DAT_10321860);
    *puVar8 = 0;
    CL_CameraOffset((float *)&DAT_10321860);
    puVar8 = (undefined4 *)thunk_FUN_10008500(&DAT_10321860);
    puVar10 = (undefined4 *)thunk_FUN_10008500(local_3c);
    *puVar10 = *puVar8;
    iVar6 = thunk_FUN_10008500(&DAT_10321860);
    iVar11 = thunk_FUN_10008500(local_3c);
    *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar6 + 4);
    iVar6 = thunk_FUN_10008500(&DAT_10321860);
    iVar11 = thunk_FUN_10008500(local_3c);
    *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar6 + 8);
    iVar6 = thunk_FUN_10008500(local_3c);
    *(undefined4 *)(iVar6 + 8) = 0;
    uVar9 = thunk_FUN_10008500(local_60);
    uVar12 = thunk_FUN_10008500(local_54);
    uVar13 = thunk_FUN_10008500(local_48);
    uVar17 = CONCAT44(uVar12,uVar13);
    uVar12 = thunk_FUN_10008500(local_3c);
    (*DAT_102e14b8)(uVar12,uVar17,uVar9);
    if (*(float *)(DAT_102e8298 + 0xc) <= -24.0) {
      local_170 = -24.0;
    }
    else {
      local_170 = *(float *)(DAT_102e8298 + 0xc);
    }
    if (128.0 <= local_170) {
      local_178 = 128.0;
    }
    else {
      if (*(float *)(DAT_102e8298 + 0xc) <= -24.0) {
        local_174 = -24.0;
      }
      else {
        local_174 = *(float *)(DAT_102e8298 + 0xc);
      }
      local_178 = local_174;
    }
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_10321860);
    *pfVar5 = -local_178;
    if (*(float *)(DAT_102e81fc + 0xc) <= -24.0) {
      local_170 = -24.0;
    }
    else {
      local_170 = *(float *)(DAT_102e81fc + 0xc);
    }
    if (24.0 <= local_170) {
      local_178 = 24.0;
    }
    else {
      if (*(float *)(DAT_102e81fc + 0xc) <= -24.0) {
        local_174 = -24.0;
      }
      else {
        local_174 = *(float *)(DAT_102e81fc + 0xc);
      }
      local_178 = local_174;
    }
    iVar6 = thunk_FUN_10008500(&DAT_10321860);
    *(float *)(iVar6 + 4) = local_178;
    if (*(float *)(DAT_102e82e4 + 0xc) <= -24.0) {
      local_170 = -24.0;
    }
    else {
      local_170 = *(float *)(DAT_102e82e4 + 0xc);
    }
    if (24.0 <= local_170) {
      local_178 = 24.0;
    }
    else {
      if (*(float *)(DAT_102e82e4 + 0xc) <= -24.0) {
        local_174 = -24.0;
      }
      else {
        local_174 = *(float *)(DAT_102e82e4 + 0xc);
      }
      local_178 = local_174;
    }
    iVar6 = thunk_FUN_10008500(&DAT_10321860);
    *(float *)(iVar6 + 8) = local_178;
    if ((DAT_10321848 == '\0') ||
       (iVar6 = thunk_FUN_10008500(&DAT_10321860), 32.0 <= *(float *)(iVar6 + 8))) {
      if (DAT_10320fc8 < 1) {
        DAT_10320fc8 = 0;
      }
      else {
        lVar16 = __ftol();
        DAT_10320fc8 = (int)lVar16;
      }
    }
    else {
      fVar3 = (float)DAT_10320fc8;
      iVar6 = thunk_FUN_10008500(&DAT_10321860);
      if (32.0 - *(float *)(iVar6 + 8) <= fVar3) {
        thunk_FUN_10008500(&DAT_10321860);
        lVar16 = __ftol();
        DAT_10320fc8 = (int)lVar16;
      }
      else {
        lVar16 = __ftol();
        DAT_10320fc8 = (int)lVar16;
      }
    }
    if ((int)param_1[0x23] < 1) {
      fVar3 = (float)DAT_10320f7c;
      pfVar5 = (float *)thunk_FUN_10008500(&DAT_10321860);
      if (fVar3 <= -180.0 - *pfVar5) {
        thunk_FUN_10008500(&DAT_10321860);
        lVar16 = __ftol();
        DAT_10320f7c = (int)lVar16;
      }
      else {
        lVar16 = __ftol();
        DAT_10320f7c = (int)lVar16;
      }
    }
    else if (((*(uint *)(local_8 + 0x26c) & 0xb0c30) == 0) ||
            (pfVar5 = (float *)thunk_FUN_10008500(&DAT_10321860), *pfVar5 <= -128.0)) {
      if (DAT_10320f7c < 0) {
        lVar16 = __ftol();
        DAT_10320f7c = (int)lVar16;
      }
      else {
        DAT_10320f7c = 0;
      }
    }
    else {
      fVar3 = (float)DAT_10320f7c;
      pfVar5 = (float *)thunk_FUN_10008500(&DAT_10321860);
      if (fVar3 <= -92.0 - *pfVar5) {
        thunk_FUN_10008500(&DAT_10321860);
        lVar16 = __ftol();
        DAT_10320f7c = (int)lVar16;
      }
      else {
        lVar16 = __ftol();
        DAT_10320f7c = (int)lVar16;
      }
    }
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_10321860);
    *pfVar5 = (float)DAT_10320f7c + *pfVar5;
    if (0 < (int)param_1[0x23]) {
      iVar6 = thunk_FUN_10008500(&DAT_10321860);
      *(float *)(iVar6 + 8) = (float)DAT_10320fc8 + *(float *)(iVar6 + 8);
    }
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_10321860);
    if (*pfVar5 == 0.0) {
      pfVar5 = (float *)thunk_FUN_10008500(local_3c);
      FUN_100be334(this_00,SUB84((double)((*pfVar5 * 3.1415927) / 180.0),0));
      _DAT_10320f64 = (float)extraout_ST0;
      if (_DAT_10320f64 < 0.0) {
        _DAT_10320f64 = 0.0;
      }
      pfVar5 = (float *)thunk_FUN_10008500(local_8 + 0xb48);
      *param_1 = *pfVar5 + param_1[0x1c];
      iVar6 = thunk_FUN_10008500(local_8 + 0xb48);
      param_1[1] = *(float *)(iVar6 + 4) + param_1[0x1d];
      iVar6 = thunk_FUN_10008500(local_8 + 0xb48);
      param_1[2] = *(float *)(iVar6 + 8) + param_1[0x1e] +
                   (float)(byte)((-(DAT_10321848 != '\0') & 7U) + 1);
      for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
        if (DAT_10321848 != '\0') {
          iVar6 = thunk_FUN_10008500(local_48);
          param_1[local_10] =
               (1.0 - _DAT_10320f64) * *(float *)(iVar6 + local_10 * 4) * 8.0 + param_1[local_10];
        }
        iVar6 = thunk_FUN_10008500(local_60);
        fVar3 = _DAT_10320f64 * *(float *)(iVar6 + local_10 * 4);
        iVar6 = thunk_FUN_10008500(local_48);
        param_1[local_10] =
             _DAT_10320f64 * *(float *)(iVar6 + local_10 * 4) * 4.0 + fVar3 * 18.0 +
             param_1[local_10];
      }
      thunk_FUN_100b6b80((int)param_1);
    }
    else {
      for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
        iVar6 = thunk_FUN_10008500(local_60);
        iVar11 = thunk_FUN_10008500(&DAT_10321860);
        fVar3 = *(float *)(iVar6 + local_10 * 4);
        fVar4 = *(float *)(iVar11 + 8);
        iVar6 = thunk_FUN_10008500(local_48);
        pfVar5 = (float *)thunk_FUN_10008500(&DAT_10321860);
        fVar1 = *(float *)(iVar6 + local_10 * 4);
        fVar2 = *pfVar5;
        iVar6 = thunk_FUN_10008500(local_54);
        iVar11 = thunk_FUN_10008500(&DAT_10321860);
        param_1[local_10] =
             *(float *)(iVar6 + local_10 * 4) * *(float *)(iVar11 + 4) +
             fVar1 * fVar2 + fVar3 * fVar4 + param_1[local_10];
      }
      if ((DAT_10321008 & 2) == 0) {
        DAT_10321008 = DAT_10321008 | 2;
        thunk_FUN_1000c160(0x10320698);
        FUN_100bc490(0x100b94d0);
      }
      if ((DAT_10321008 & 4) == 0) {
        DAT_10321008 = DAT_10321008 | 4;
        thunk_FUN_10007fe0(&DAT_103206e4);
        FUN_100bc490(0x100b94b0);
      }
      _DAT_103206e4 = *(undefined4 *)(local_8 + 0xb48);
      _DAT_103206e8 = *(undefined4 *)(local_8 + 0xb4c);
      _DAT_103206ec = *(undefined4 *)(local_8 + 0xb50);
      iVar6 = thunk_FUN_10008500(&DAT_103206e4);
      iVar11 = thunk_FUN_10008500(&DAT_10321860);
      *(float *)(iVar6 + 8) = *(float *)(iVar11 + 8) + 28.0 + *(float *)(iVar6 + 8);
      uVar9 = thunk_FUN_10008500(&DAT_103206e4);
      iVar6 = (*DAT_102e153c)(uVar9);
      if (iVar6 == -2) {
        _DAT_103206e4 = *(undefined4 *)(local_8 + 0xb48);
        _DAT_103206e8 = *(undefined4 *)(local_8 + 0xb4c);
        _DAT_103206ec = *(undefined4 *)(local_8 + 0xb50);
      }
      puVar8 = (undefined4 *)(*DAT_102e1544)(&DAT_103206e4,param_1,0,2);
      puVar10 = &DAT_10320698;
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      if (_DAT_103206a8 != 1.0) {
        for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
          iVar6 = thunk_FUN_10008500(&DAT_103206ac);
          iVar11 = thunk_FUN_10008500(&DAT_103206b8);
          param_1[local_10] =
               *(float *)(iVar11 + local_10 * 4) * 4.0 + *(float *)(iVar6 + local_10 * 4);
        }
        param_1[2] = param_1[2] + 1.0;
      }
    }
    if (local_8 != 0) {
      iVar6 = thunk_FUN_10008500(local_8 + 0xb48);
      DAT_10321830 = _DAT_103206e0 - *(float *)(iVar6 + 8);
      iVar6 = thunk_FUN_10008500(local_8 + 0xb48);
      DAT_10320f98 = (_DAT_103206e0 - *(float *)(iVar6 + 8)) * 0.16 * param_1[0xf] * 100.0;
      local_170 = DAT_10320f98;
      if (DAT_10320f98 <= 0.0) {
        local_170 = 0.0 - DAT_10320f98;
      }
      if (DAT_10321830 <= 0.0) {
        local_174 = 0.0 - DAT_10321830;
      }
      else {
        local_174 = DAT_10321830;
      }
      if (local_174 < local_170) {
        DAT_10320f98 = DAT_10321830;
      }
      fVar3 = _DAT_103206e0 - DAT_10320f98;
      iVar6 = thunk_FUN_10008500(local_8 + 0xb48);
      *(float *)(iVar6 + 8) = fVar3;
      iVar6 = thunk_FUN_10008500(local_8 + 0xb48);
      _DAT_103206e0 = *(float *)(iVar6 + 8);
    }
  }
  if (local_c != 0) {
    pfVar5 = (float *)thunk_FUN_10008500(local_c + 0xb54);
    *pfVar5 = param_1[0x20];
    iVar6 = thunk_FUN_10008500(local_c + 0xb54);
    *(float *)(iVar6 + 4) = param_1[0x21];
    iVar6 = thunk_FUN_10008500(local_c + 0xb54);
    *(float *)(iVar6 + 8) = param_1[0x22];
    thunk_FUN_100b6610((int)param_1,&local_20);
    pfVar5 = (float *)thunk_FUN_10008500(local_c + 0xb48);
    *pfVar5 = *param_1;
    iVar6 = thunk_FUN_10008500(local_c + 0xb48);
    *(float *)(iVar6 + 4) = param_1[1];
    iVar6 = thunk_FUN_10008500(local_c + 0xb48);
    *(float *)(iVar6 + 8) = param_1[2];
    uVar13 = 0x3f666666;
    uVar9 = thunk_FUN_10008500(local_c + 0xb54);
    uVar12 = thunk_FUN_10008500(local_c + 0xb48);
    (*DAT_102e1538)(uVar12,uVar9,uVar13);
    pfVar5 = (float *)thunk_FUN_10008500(local_c + 0xb48);
    pfVar14 = (float *)thunk_FUN_10008500(&DAT_10320f8c);
    fVar3 = *pfVar5;
    fVar4 = *pfVar14;
    pfVar5 = (float *)thunk_FUN_10008500(local_c + 0xb48);
    *pfVar5 = fVar3 + fVar4;
    iVar6 = thunk_FUN_10008500(local_c + 0xb48);
    iVar11 = thunk_FUN_10008500(&DAT_10320f8c);
    fVar3 = *(float *)(iVar6 + 4);
    fVar4 = *(float *)(iVar11 + 4);
    iVar6 = thunk_FUN_10008500(local_c + 0xb48);
    *(float *)(iVar6 + 4) = fVar3 + fVar4;
    iVar6 = thunk_FUN_10008500(local_c + 0xb48);
    iVar11 = thunk_FUN_10008500(&DAT_10320f8c);
    fVar3 = *(float *)(iVar6 + 8);
    fVar4 = *(float *)(iVar11 + 8);
    iVar6 = thunk_FUN_10008500(local_c + 0xb48);
    *(float *)(iVar6 + 8) = fVar3 + fVar4;
    iVar6 = thunk_FUN_10008500(local_c + 0xb48);
    *(float *)(iVar6 + 8) = *(float *)(iVar6 + 8) - 1.0;
    if (param_1[0x27] == 110.0) {
      iVar6 = thunk_FUN_10008500(local_c + 0xb48);
      *(float *)(iVar6 + 8) = *(float *)(iVar6 + 8) + 1.0;
    }
    else if (param_1[0x27] == 100.0) {
      iVar6 = thunk_FUN_10008500(local_c + 0xb48);
      *(float *)(iVar6 + 8) = *(float *)(iVar6 + 8) + 2.0;
    }
    else if (param_1[0x27] == 90.0) {
      iVar6 = thunk_FUN_10008500(local_c + 0xb48);
      *(float *)(iVar6 + 8) = *(float *)(iVar6 + 8) + 1.0;
    }
    else if (param_1[0x27] == 80.0) {
      iVar6 = thunk_FUN_10008500(local_c + 0xb48);
      *(float *)(iVar6 + 8) = *(float *)(iVar6 + 8) + 0.5;
    }
  }
  param_1[3] = param_1[3] + param_1[0x28];
  param_1[4] = param_1[4] + param_1[0x29];
  param_1[5] = param_1[5] + param_1[0x2a];
  param_1[3] = _DAT_10320fd0 + param_1[3];
  param_1[4] = _DAT_10320fd4 + param_1[4];
  param_1[5] = _DAT_10320fd8 + param_1[5];
  thunk_FUN_100ba730(param_1[0xf],(float *)&DAT_10320fd0);
  thunk_FUN_10007fe0(local_a8);
  fVar3 = param_1[0x19] - _DAT_10320718;
  pfVar5 = (float *)thunk_FUN_10008500(local_a8);
  *pfVar5 = fVar3;
  fVar3 = param_1[0x1a] - _DAT_1032071c;
  iVar6 = thunk_FUN_10008500(local_a8);
  *(float *)(iVar6 + 4) = fVar3;
  fVar3 = param_1[0x1b] - _DAT_10320720;
  iVar6 = thunk_FUN_10008500(local_a8);
  *(float *)(iVar6 + 8) = fVar3;
  pvVar7 = (void *)thunk_FUN_10008500(local_a8);
  fVar15 = thunk_FUN_10097fc0(extraout_ECX_00,pvVar7);
  if (fVar15 != (float10)0.0) {
    *(float *)(&DAT_10321028 + (DAT_10321828 & 0x3f) * 0xc) = param_1[0x19];
    *(float *)(&DAT_1032102c + (DAT_10321828 & 0x3f) * 0xc) = param_1[0x1a];
    *(float *)(&DAT_10321030 + (DAT_10321828 & 0x3f) * 0xc) = param_1[0x1b];
    *(float *)(&DAT_10321328 + (DAT_10321828 & 0x3f) * 4) = param_1[0x10];
    DAT_10321828 = DAT_10321828 + 1;
    _DAT_10320718 = param_1[0x19];
    _DAT_1032071c = param_1[0x1a];
    _DAT_10320720 = param_1[0x1b];
  }
  if (((DAT_102e81b4 != 0) && (*(float *)(DAT_102e81b4 + 0xc) != 0.0)) &&
     (((DAT_10321004 & 4) != 0 || ((param_1[0x31] != 0.0 && (1 < (int)param_1[0x2b])))))) {
    if (*(float *)(DAT_102e81b4 + 0xc) < 0.0) {
      (*DAT_102e14ec)();
    }
    local_b4 = param_1[0x10] - *(float *)(DAT_102e81b4 + 0xc);
    local_b0 = 1;
    while ((local_b0 < 0x3f &&
           (local_ac = (DAT_10321828 - 1) - local_b0,
           *(float *)(&DAT_10321328 + (local_ac & 0x3f) * 4) < local_b4 ==
           (*(float *)(&DAT_10321328 + (local_ac & 0x3f) * 4) == local_b4)))) {
      local_b0 = local_b0 + 1;
    }
    if ((local_b0 < 0x3f) && (*(float *)(&DAT_10321328 + (local_ac & 0x3f) * 4) != 0.0)) {
      thunk_FUN_10007fe0(local_c0);
      thunk_FUN_10007fe0(local_dc);
      local_d0 = (double)(*(float *)(&DAT_10321328 + (local_ac + 1 & 0x3f) * 4) -
                         *(float *)(&DAT_10321328 + (local_ac & 0x3f) * 4));
      if (0.0 < local_d0) {
        local_c8 = (double)((local_b4 - *(float *)(&DAT_10321328 + (local_ac & 0x3f) * 4)) /
                           (*(float *)(&DAT_10321328 + (local_ac + 1 & 0x3f) * 4) -
                           *(float *)(&DAT_10321328 + (local_ac & 0x3f) * 4)));
        if (1.0 < local_c8) {
          local_c8 = 1.0;
        }
        fVar3 = *(float *)(&DAT_10321028 + (local_ac + 1 & 0x3f) * 0xc);
        fVar4 = *(float *)(&DAT_10321028 + (local_ac & 0x3f) * 0xc);
        pfVar5 = (float *)thunk_FUN_10008500(local_c0);
        *pfVar5 = fVar3 - fVar4;
        fVar3 = *(float *)(&DAT_1032102c + (local_ac + 1 & 0x3f) * 0xc);
        fVar4 = *(float *)(&DAT_1032102c + (local_ac & 0x3f) * 0xc);
        iVar6 = thunk_FUN_10008500(local_c0);
        *(float *)(iVar6 + 4) = fVar3 - fVar4;
        fVar3 = *(float *)(&DAT_10321030 + (local_ac + 1 & 0x3f) * 0xc);
        fVar4 = *(float *)(&DAT_10321030 + (local_ac & 0x3f) * 0xc);
        iVar6 = thunk_FUN_10008500(local_c0);
        *(float *)(iVar6 + 8) = fVar3 - fVar4;
        pfVar5 = (float *)thunk_FUN_10008500(local_dc);
        pfVar14 = (float *)thunk_FUN_10008500(local_c0);
        thunk_FUN_10098330((float *)(&DAT_10321028 + (local_ac & 0x3f) * 0xc),(float)local_c8,
                           pfVar14,pfVar5);
        pvVar7 = (void *)thunk_FUN_10008500(local_c0);
        fVar15 = thunk_FUN_10097fc0(extraout_ECX_01,pvVar7);
        if (fVar15 < (float10)64.0) {
          pfVar5 = (float *)thunk_FUN_10008500(local_dc);
          fVar3 = *pfVar5;
          fVar4 = param_1[0x19];
          pfVar5 = (float *)thunk_FUN_10008500(local_c0);
          *pfVar5 = fVar3 - fVar4;
          iVar6 = thunk_FUN_10008500(local_dc);
          fVar3 = *(float *)(iVar6 + 4);
          fVar4 = param_1[0x1a];
          iVar6 = thunk_FUN_10008500(local_c0);
          *(float *)(iVar6 + 4) = fVar3 - fVar4;
          iVar6 = thunk_FUN_10008500(local_dc);
          fVar3 = *(float *)(iVar6 + 8);
          fVar4 = param_1[0x1b];
          iVar6 = thunk_FUN_10008500(local_c0);
          *(float *)(iVar6 + 8) = fVar3 - fVar4;
          pfVar5 = (float *)thunk_FUN_10008500(local_c0);
          param_1[0x19] = param_1[0x19] + *pfVar5;
          iVar6 = thunk_FUN_10008500(local_c0);
          param_1[0x1a] = param_1[0x1a] + *(float *)(iVar6 + 4);
          iVar6 = thunk_FUN_10008500(local_c0);
          param_1[0x1b] = param_1[0x1b] + *(float *)(iVar6 + 8);
          pfVar5 = (float *)thunk_FUN_10008500(local_c0);
          *param_1 = *param_1 + *pfVar5;
          iVar6 = thunk_FUN_10008500(local_c0);
          param_1[1] = param_1[1] + *(float *)(iVar6 + 4);
          iVar6 = thunk_FUN_10008500(local_c0);
          param_1[2] = param_1[2] + *(float *)(iVar6 + 8);
          pfVar5 = (float *)thunk_FUN_10008500(local_c + 0xb48);
          pfVar14 = (float *)thunk_FUN_10008500(local_c0);
          fVar3 = *pfVar5;
          fVar4 = *pfVar14;
          pfVar5 = (float *)thunk_FUN_10008500(local_c + 0xb48);
          *pfVar5 = fVar3 + fVar4;
          iVar6 = thunk_FUN_10008500(local_c + 0xb48);
          iVar11 = thunk_FUN_10008500(local_c0);
          fVar3 = *(float *)(iVar6 + 4);
          fVar4 = *(float *)(iVar11 + 4);
          iVar6 = thunk_FUN_10008500(local_c + 0xb48);
          *(float *)(iVar6 + 4) = fVar3 + fVar4;
          iVar6 = thunk_FUN_10008500(local_c + 0xb48);
          iVar11 = thunk_FUN_10008500(local_c0);
          fVar3 = *(float *)(iVar6 + 8);
          fVar4 = *(float *)(iVar11 + 8);
          iVar6 = thunk_FUN_10008500(local_c + 0xb48);
          *(float *)(iVar6 + 8) = fVar3 + fVar4;
          DAT_10320f68 = param_1[0x19];
          DAT_10320f6c = param_1[0x1a];
          DAT_10320f70 = param_1[0x1b];
        }
      }
    }
  }
  thunk_FUN_10015740(&local_f0,param_1 + 3);
  DAT_10320fec = local_f0;
  DAT_10320ff0 = local_ec;
  DAT_10320ff4 = local_e8;
  iVar6 = CL_IsThirdPerson();
  if (iVar6 != 0) {
    pfVar5 = (float *)thunk_FUN_10008500(local_3c);
    param_1[3] = *pfVar5;
    iVar6 = thunk_FUN_10008500(local_3c);
    param_1[4] = *(float *)(iVar6 + 4);
    iVar6 = thunk_FUN_10008500(local_3c);
    param_1[5] = *(float *)(iVar6 + 8);
    pfVar5 = (float *)thunk_FUN_10008500(local_3c);
    local_e0 = *pfVar5;
    if (local_e0 <= 180.0) {
      if (local_e0 < -180.0) {
        local_e0 = local_e0 + 360.0;
      }
    }
    else {
      local_e0 = local_e0 - 360.0;
    }
    local_e0 = local_e0 / -3.0;
    pfVar5 = (float *)thunk_FUN_10008500(local_8 + 0xb54);
    *pfVar5 = local_e0;
    pfVar5 = (float *)thunk_FUN_10008500(local_8 + 0x2cc);
    *pfVar5 = local_e0;
    pfVar5 = (float *)thunk_FUN_10008500(local_8 + 0x178);
    *pfVar5 = local_e0;
    pfVar5 = (float *)thunk_FUN_10008500(local_8 + 0xb28);
    *pfVar5 = local_e0;
  }
  if (((int)param_1[0x2b] < (int)param_1[0x2c]) &&
     (local_e4 = (*DAT_102e152c)(param_1[0x2c]), local_e4 != 0)) {
    pfVar5 = (float *)thunk_FUN_10008500(local_e4 + 0xb48);
    *param_1 = *pfVar5;
    iVar6 = thunk_FUN_10008500(local_e4 + 0xb48);
    param_1[1] = *(float *)(iVar6 + 4);
    iVar6 = thunk_FUN_10008500(local_e4 + 0xb48);
    param_1[2] = *(float *)(iVar6 + 8);
    pfVar5 = (float *)thunk_FUN_10008500(local_e4 + 0xb54);
    param_1[3] = *pfVar5;
    iVar6 = thunk_FUN_10008500(local_e4 + 0xb54);
    param_1[4] = *(float *)(iVar6 + 4);
    iVar6 = thunk_FUN_10008500(local_e4 + 0xb54);
    param_1[5] = *(float *)(iVar6 + 8);
    thunk_FUN_10015740(&local_fc,param_1 + 3);
    DAT_10320fec = local_fc;
    DAT_10320ff0 = local_f8;
    DAT_10320ff4 = local_f4;
  }
  _DAT_10320f78 = param_1[0x10];
  thunk_FUN_10015740(&local_108,param_1);
  _DAT_10320680 = local_108;
  _DAT_10320684 = local_104;
  _DAT_10320688 = local_100;
  iVar6 = CL_IsThirdPerson();
  if (iVar6 == 0) {
    if (DAT_102da420 < 0x28) {
      DAT_10320fe4 = 0;
    }
    else {
      DAT_10320fe4 = local_c;
    }
  }
  else {
    DAT_10320fe4 = 0;
    thunk_FUN_10015740(local_114,param_1 + 0x1c);
    puVar8 = thunk_FUN_1000d970((void *)(local_8 + 0xb48),local_120,local_114);
    _DAT_10320f9c = *puVar8;
    _DAT_10320fa0 = puVar8[1];
    _DAT_10320fa4 = puVar8[2];
  }
  thunk_FUN_10015740(&local_12c,param_1 + 3);
  DAT_1032070c = local_12c;
  DAT_10320710 = local_128;
  DAT_10320714 = local_124;
  return;
}

/* 100b94b0  FUN_100b94b0  (16 bytes)
 * undefined FUN_100b94b0(void)
 */
void FUN_100b94b0(void)

{
  return;
}

/* 100b94d0  FUN_100b94d0  (16 bytes)
 * undefined FUN_100b94d0(void)
 */
void FUN_100b94d0(void)

{
  return;
}

/* 100b94f0  FUN_100b94f0  (16 bytes)
 * undefined FUN_100b94f0(void)
 */
void FUN_100b94f0(void)

{
  return;
}

/* 100b9510  FUN_100b9510  (316 bytes)
 * undefined FUN_100b9510(int param_1, undefined4 * param_2, float * param_3)
 */
void __cdecl FUN_100b9510(int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  
  iVar1 = (*DAT_102e152c)(param_1);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) &&
     (*(int *)(&DAT_1031f3e0 + param_1 * 0x14) != 0)) {
    puVar2 = (undefined4 *)thunk_FUN_10008500(iVar1 + 0xb48);
    *param_2 = *puVar2;
    iVar3 = thunk_FUN_10008500(iVar1 + 0xb48);
    param_2[1] = *(undefined4 *)(iVar3 + 4);
    iVar3 = thunk_FUN_10008500(iVar1 + 0xb48);
    param_2[2] = *(undefined4 *)(iVar3 + 8);
    pfVar4 = (float *)thunk_FUN_10008500(iVar1 + 0xb54);
    *param_3 = *pfVar4;
    iVar3 = thunk_FUN_10008500(iVar1 + 0xb54);
    param_3[1] = *(float *)(iVar3 + 4);
    iVar3 = thunk_FUN_10008500(iVar1 + 0xb54);
    param_3[2] = *(float *)(iVar3 + 8);
    *param_3 = *param_3 * -3.1415927;
    if (*(short *)(iVar1 + 0x2ea) == 0) {
      param_3[2] = 80.0;
      param_2[2] = (float)param_2[2] + -8.0;
    }
    else if (*(int *)(iVar1 + 0x378) == 1) {
      param_2[2] = (float)param_2[2] + 16.0;
    }
    else {
      param_2[2] = (float)param_2[2] + 28.0;
    }
  }
  return;
}

/* 100b96a0  FUN_100b96a0  (3288 bytes)
 * undefined FUN_100b96a0(float * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b96a0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  float10 fVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94 [12];
  double local_88;
  double local_80;
  undefined1 local_78 [12];
  float local_6c;
  int local_68;
  uint local_64;
  double local_60;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  float local_40;
  double local_3c;
  float local_34;
  int local_30;
  uint local_2c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  thunk_FUN_10007fe0(&local_1c);
  thunk_FUN_10007fe0(local_28);
  local_8 = (*DAT_102e1524)();
  local_10 = (*DAT_102e152c)(DAT_10320640);
  local_c = (*DAT_102e1528)();
  *param_1 = param_1[0x19];
  param_1[1] = param_1[0x1a];
  param_1[2] = param_1[0x1b];
  if (DAT_10321010 == 0) {
    DAT_10320f68 = *param_1;
    DAT_10320f6c = param_1[1];
    DAT_10320f70 = param_1[2];
  }
  else {
    *param_1 = DAT_10320f68;
    param_1[1] = DAT_10320f6c;
    param_1[2] = DAT_10320f70;
  }
  param_1[3] = param_1[0x20];
  param_1[4] = param_1[0x21];
  param_1[5] = param_1[0x22];
  if (DAT_10320fe0 == 0) {
    DAT_10320730 = param_1[3];
    DAT_10320734 = param_1[4];
    DAT_10320738 = param_1[5];
  }
  else {
    param_1[3] = DAT_10320730;
    param_1[4] = DAT_10320734;
    param_1[5] = DAT_10320738;
  }
  if (param_1[0x38] == 0.0) {
    fVar1 = param_1[3] - _DAT_10320700;
    pfVar3 = (float *)thunk_FUN_10008500(local_28);
    *pfVar3 = fVar1;
    fVar1 = param_1[4] - _DAT_10320704;
    iVar4 = thunk_FUN_10008500(local_28);
    *(float *)(iVar4 + 4) = fVar1;
    fVar1 = param_1[5] - _DAT_10320708;
    iVar4 = thunk_FUN_10008500(local_28);
    *(float *)(iVar4 + 8) = fVar1;
    pvVar5 = (void *)thunk_FUN_10008500(local_28);
    fVar11 = thunk_FUN_10097fc0(extraout_ECX,pvVar5);
    if (fVar11 != (float10)0.0) {
      *(float *)(&DAT_10320b58 + (DAT_10320f5c & 0x3f) * 0xc) = param_1[3];
      *(float *)(&DAT_10320b5c + (DAT_10320f5c & 0x3f) * 0xc) = param_1[4];
      *(float *)(&DAT_10320b60 + (DAT_10320f5c & 0x3f) * 0xc) = param_1[5];
      *(float *)(&DAT_10320e58 + (DAT_10320f5c & 0x3f) * 4) = param_1[0x10];
      DAT_10320f5c = DAT_10320f5c + 1;
      _DAT_10320700 = param_1[3];
      _DAT_10320704 = param_1[4];
      _DAT_10320708 = param_1[5];
    }
    if (((DAT_102e81b4 != 0) && (*(float *)(DAT_102e81b4 + 0xc) != 0.0)) &&
       ((DAT_10321004 & 2) != 0)) {
      local_34 = param_1[0x10] - *(float *)(DAT_102e81b4 + 0xc);
      local_30 = 1;
      while ((local_30 < 0x3f &&
             (local_2c = (DAT_10320f5c - 1) - local_30,
             *(float *)(&DAT_10320e58 + (local_2c & 0x3f) * 4) < local_34 ==
             (*(float *)(&DAT_10320e58 + (local_2c & 0x3f) * 4) == local_34)))) {
        local_30 = local_30 + 1;
      }
      if ((local_30 < 0x3f) && (*(float *)(&DAT_10320e58 + (local_2c & 0x3f) * 4) != 0.0)) {
        thunk_FUN_10007fe0(local_4c);
        thunk_FUN_10007fe0(local_58);
        uVar14 = 0;
        uVar13 = 0;
        uVar6 = thunk_FUN_10008500(local_4c);
        (*DAT_102e14b8)(&DAT_10320b58 + (local_2c & 0x3f) * 0xc,uVar6,uVar13,uVar14);
        uVar14 = 0;
        uVar13 = 0;
        uVar6 = thunk_FUN_10008500(local_58);
        (*DAT_102e14b8)(&DAT_10320b58 + (local_2c + 1 & 0x3f) * 0xc,uVar6,uVar13,uVar14);
        pfVar3 = (float *)thunk_FUN_10008500(local_58);
        pfVar7 = (float *)thunk_FUN_10008500(local_4c);
        fVar11 = thunk_FUN_10057ba0(extraout_ECX_00,pfVar7,pfVar3);
        local_40 = (float)fVar11;
        local_3c = (double)(*(float *)(&DAT_10320e58 + (local_2c + 1 & 0x3f) * 4) -
                           *(float *)(&DAT_10320e58 + (local_2c & 0x3f) * 4));
        if ((0.0 < local_3c) && (local_40 < 22.5)) {
          local_60 = (double)((local_34 - *(float *)(&DAT_10320e58 + (local_2c & 0x3f) * 4)) /
                             (*(float *)(&DAT_10320e58 + (local_2c + 1 & 0x3f) * 4) -
                             *(float *)(&DAT_10320e58 + (local_2c & 0x3f) * 4)));
          if (1.0 < local_60) {
            local_60 = 1.0;
          }
          thunk_FUN_10057ab0((int)(&DAT_10320b58 + (local_2c & 0x3f) * 0xc),
                             (int)(&DAT_10320b58 + (local_2c + 1 & 0x3f) * 0xc),0x10320730,
                             (float)local_60);
          param_1[3] = DAT_10320730;
          param_1[4] = DAT_10320734;
          param_1[5] = DAT_10320738;
        }
      }
    }
    fVar1 = *param_1 - _DAT_10320724;
    pfVar3 = (float *)thunk_FUN_10008500(local_28);
    *pfVar3 = fVar1;
    fVar1 = param_1[1] - _DAT_10320728;
    iVar4 = thunk_FUN_10008500(local_28);
    *(float *)(iVar4 + 4) = fVar1;
    fVar1 = param_1[2] - _DAT_1032072c;
    iVar4 = thunk_FUN_10008500(local_28);
    *(float *)(iVar4 + 8) = fVar1;
    pvVar5 = (void *)thunk_FUN_10008500(local_28);
    fVar11 = thunk_FUN_10097fc0(extraout_ECX_01,pvVar5);
    if (fVar11 != (float10)0.0) {
      *(float *)(&DAT_10320758 + (DAT_10320f58 & 0x3f) * 0xc) = *param_1;
      *(float *)(&DAT_1032075c + (DAT_10320f58 & 0x3f) * 0xc) = param_1[1];
      *(float *)(&DAT_10320760 + (DAT_10320f58 & 0x3f) * 0xc) = param_1[2];
      *(float *)(&DAT_10320a58 + (DAT_10320f58 & 0x3f) * 4) = param_1[0x10];
      DAT_10320f58 = DAT_10320f58 + 1;
      _DAT_10320724 = *param_1;
      _DAT_10320728 = param_1[1];
      _DAT_1032072c = param_1[2];
    }
    if (((DAT_102e81b4 != 0) && (*(float *)(DAT_102e81b4 + 0xc) != 0.0)) &&
       ((DAT_10321004 & 4) != 0)) {
      local_6c = param_1[0x10] - *(float *)(DAT_102e81b4 + 0xc);
      local_68 = 1;
      while ((local_68 < 0x3f &&
             (local_64 = (DAT_10320f58 - 1) - local_68,
             *(float *)(&DAT_10320a58 + (local_64 & 0x3f) * 4) < local_6c ==
             (*(float *)(&DAT_10320a58 + (local_64 & 0x3f) * 4) == local_6c)))) {
        local_68 = local_68 + 1;
      }
      if ((local_68 < 0x3f) && (*(float *)(&DAT_10320a58 + (local_64 & 0x3f) * 4) != 0.0)) {
        thunk_FUN_10007fe0(local_78);
        thunk_FUN_10007fe0(local_94);
        local_88 = (double)(*(float *)(&DAT_10320a58 + (local_64 + 1 & 0x3f) * 4) -
                           *(float *)(&DAT_10320a58 + (local_64 & 0x3f) * 4));
        if (0.0 < local_88) {
          local_80 = (double)((local_6c - *(float *)(&DAT_10320a58 + (local_64 & 0x3f) * 4)) /
                             (*(float *)(&DAT_10320a58 + (local_64 + 1 & 0x3f) * 4) -
                             *(float *)(&DAT_10320a58 + (local_64 & 0x3f) * 4)));
          if (1.0 < local_80) {
            local_80 = 1.0;
          }
          fVar1 = *(float *)(&DAT_10320758 + (local_64 + 1 & 0x3f) * 0xc);
          fVar2 = *(float *)(&DAT_10320758 + (local_64 & 0x3f) * 0xc);
          pfVar3 = (float *)thunk_FUN_10008500(local_78);
          *pfVar3 = fVar1 - fVar2;
          fVar1 = *(float *)(&DAT_1032075c + (local_64 + 1 & 0x3f) * 0xc);
          fVar2 = *(float *)(&DAT_1032075c + (local_64 & 0x3f) * 0xc);
          iVar4 = thunk_FUN_10008500(local_78);
          *(float *)(iVar4 + 4) = fVar1 - fVar2;
          fVar1 = *(float *)(&DAT_10320760 + (local_64 + 1 & 0x3f) * 0xc);
          fVar2 = *(float *)(&DAT_10320760 + (local_64 & 0x3f) * 0xc);
          iVar4 = thunk_FUN_10008500(local_78);
          *(float *)(iVar4 + 8) = fVar1 - fVar2;
          pfVar3 = (float *)thunk_FUN_10008500(local_94);
          pfVar7 = (float *)thunk_FUN_10008500(local_78);
          thunk_FUN_10098330((float *)(&DAT_10320758 + (local_64 & 0x3f) * 0xc),(float)local_80,
                             pfVar7,pfVar3);
          pvVar5 = (void *)thunk_FUN_10008500(local_78);
          fVar11 = thunk_FUN_10097fc0(extraout_ECX_02,pvVar5);
          if (fVar11 < (float10)64.0) {
            pfVar3 = (float *)thunk_FUN_10008500(local_94);
            fVar1 = *pfVar3;
            fVar2 = param_1[0x19];
            pfVar3 = (float *)thunk_FUN_10008500(local_78);
            *pfVar3 = fVar1 - fVar2;
            iVar4 = thunk_FUN_10008500(local_94);
            fVar1 = *(float *)(iVar4 + 4);
            fVar2 = param_1[0x1a];
            iVar4 = thunk_FUN_10008500(local_78);
            *(float *)(iVar4 + 4) = fVar1 - fVar2;
            iVar4 = thunk_FUN_10008500(local_94);
            fVar1 = *(float *)(iVar4 + 8);
            fVar2 = param_1[0x1b];
            iVar4 = thunk_FUN_10008500(local_78);
            *(float *)(iVar4 + 8) = fVar1 - fVar2;
            pfVar3 = (float *)thunk_FUN_10008500(local_78);
            *param_1 = *param_1 + *pfVar3;
            iVar4 = thunk_FUN_10008500(local_78);
            param_1[1] = param_1[1] + *(float *)(iVar4 + 4);
            iVar4 = thunk_FUN_10008500(local_78);
            param_1[2] = param_1[2] + *(float *)(iVar4 + 8);
            DAT_10320f68 = *param_1;
            DAT_10320f6c = param_1[1];
            DAT_10320f70 = param_1[2];
          }
        }
      }
    }
  }
  _DAT_10320ffc = param_1[0x10];
  *(undefined4 *)(local_c + 0xb94) = 0;
  if (param_1[0x38] == 0.0) {
    if (DAT_102daab4 == 4) {
      thunk_FUN_100b9510(DAT_102db3f0,param_1,param_1 + 3);
    }
    else if (DAT_102daab4 == 5) {
      param_1[0x39] = 1.4013e-45;
      thunk_FUN_10015740(&local_a0,param_1 + 0x20);
      local_1c = local_a0;
      local_18 = local_9c;
      local_14 = local_98;
      pfVar3 = (float *)thunk_FUN_10008500(&local_1c);
      fVar1 = *pfVar3;
      pfVar3 = (float *)thunk_FUN_10008500(&local_1c);
      *pfVar3 = (fVar1 / 90.0) * 38.75 + 51.25;
      puVar8 = (undefined4 *)thunk_FUN_10008500(&local_1c);
      puVar9 = (undefined4 *)thunk_FUN_10008500(&DAT_102db404);
      *puVar9 = *puVar8;
      iVar4 = thunk_FUN_10008500(&local_1c);
      iVar10 = thunk_FUN_10008500(&DAT_102db404);
      *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar4 + 4);
      iVar4 = thunk_FUN_10008500(&local_1c);
      iVar10 = thunk_FUN_10008500(&DAT_102db404);
      *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar4 + 8);
      thunk_FUN_1004c990(param_1);
      pfVar3 = (float *)thunk_FUN_10008500(&local_1c);
      param_1[3] = *pfVar3;
      iVar4 = thunk_FUN_10008500(&local_1c);
      param_1[4] = *(float *)(iVar4 + 4);
      iVar4 = thunk_FUN_10008500(&local_1c);
      param_1[5] = *(float *)(iVar4 + 8);
    }
    else {
      param_1[0x39] = 0.0;
    }
    if (DAT_102daab8 != 0) {
      param_1[0x38] = 1.4013e-45;
    }
    _DAT_102daabc = 0;
  }
  else {
    lVar12 = __ftol();
    param_1[0x34] = (float)lVar12;
    lVar12 = __ftol();
    param_1[0x35] = (float)lVar12;
    lVar12 = __ftol();
    param_1[0x36] = (float)lVar12;
    lVar12 = __ftol();
    param_1[0x37] = (float)lVar12;
    param_1[0x38] = 0.0;
    param_1[0x39] = 0.0;
    if (DAT_102daab8 == 2) {
      thunk_FUN_100b9510(DAT_102db3f0,param_1,param_1 + 3);
    }
    else if (DAT_102daab8 == 3) {
      param_1[0x39] = 1.4013e-45;
      thunk_FUN_10015740(&local_ac,param_1 + 0x20);
      local_1c = local_ac;
      local_18 = local_a8;
      local_14 = local_a4;
      pfVar3 = (float *)thunk_FUN_10008500(&local_1c);
      fVar1 = *pfVar3;
      pfVar3 = (float *)thunk_FUN_10008500(&local_1c);
      *pfVar3 = (fVar1 / 90.0) * 38.75 + 51.25;
      puVar8 = (undefined4 *)thunk_FUN_10008500(&local_1c);
      puVar9 = (undefined4 *)thunk_FUN_10008500(&DAT_102db404);
      *puVar9 = *puVar8;
      iVar4 = thunk_FUN_10008500(&local_1c);
      iVar10 = thunk_FUN_10008500(&DAT_102db404);
      *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar4 + 4);
      iVar4 = thunk_FUN_10008500(&local_1c);
      iVar10 = thunk_FUN_10008500(&DAT_102db404);
      *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar4 + 8);
      thunk_FUN_1004c990(param_1);
      pfVar3 = (float *)thunk_FUN_10008500(&local_1c);
      param_1[3] = *pfVar3;
      iVar4 = thunk_FUN_10008500(&local_1c);
      param_1[4] = *(float *)(iVar4 + 4);
      iVar4 = thunk_FUN_10008500(&local_1c);
      param_1[5] = *(float *)(iVar4 + 8);
    }
    _DAT_102daabc = 1;
  }
  thunk_FUN_10015740(&local_b8,param_1 + 3);
  DAT_10320fec = local_b8;
  DAT_10320ff0 = local_b4;
  DAT_10320ff4 = local_b0;
  thunk_FUN_10015740(&local_c4,param_1);
  _DAT_10320680 = local_c4;
  _DAT_10320684 = local_c0;
  _DAT_10320688 = local_bc;
  return;
}

/* 100ba6b0  FUN_100ba6b0  (95 bytes)
 * void FUN_100ba6b0(ref_params_t * pparams)
 */
void __cdecl FUN_100ba6b0(ref_params_t *pparams)

{
  DAT_10320fcc = pparams->frametime;
  if (pparams->intermission == 0) {
    if (pparams->spectator == 0) {
      if (pparams->paused == 0) {
        thunk_FUN_100b6c90(pparams->vieworg);
      }
    }
    else {
      thunk_FUN_100b96a0(pparams->vieworg);
    }
  }
  else {
    thunk_FUN_100b6a40(pparams->vieworg);
  }
  return;
}

/* 100ba730  FUN_100ba730  (168 bytes)
 * undefined FUN_100ba730(float param_1, float * param_2)
 */
void __cdecl FUN_100ba730(float param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = thunk_FUN_100981d0(param_2);
  fVar1 = DAT_1031bee4;
  if (DAT_1031bee4 == 0.0) {
    fVar1 = 1.0;
  }
  fVar1 = (float)fVar2 - ((float)fVar2 * 0.5 + 10.0) * param_1 * fVar1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  thunk_FUN_100982e0(param_2,fVar1,param_2);
  return;
}

/* 100ba810  FUN_100ba810  (35 bytes)
 * undefined FUN_100ba810(int param_1, undefined4 param_2)
 */
void __cdecl FUN_100ba810(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_10008500(&DAT_10320fd0);
  *(undefined4 *)(iVar1 + param_1 * 4) = param_2;
  return;
}

/* 100ba840  FUN_100ba840  (269 bytes)
 * undefined FUN_100ba840(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba840(void)

{
  (*DAT_102e149c)("centerview",thunk_FUN_100b6300);
  _DAT_10321850 = (*DAT_102e1490)("scr_ofsx",&DAT_1026d374,0);
  _DAT_10321858 = (*DAT_102e1490)("scr_ofsy",&DAT_1026d374,0);
  _DAT_10321854 = (*DAT_102e1490)("scr_ofsz",&DAT_1026d374,0);
  DAT_10320f74 = (*DAT_102e1490)("v_centermove",&DAT_102700b4,0);
  DAT_10321014 = (*DAT_102e1490)("v_centerspeed",&DAT_10278b8c,0);
  _DAT_10320fdc = (*DAT_102e1490)("cl_bobcycle",&DAT_1026fafc,0);
  _DAT_1032184c = (*DAT_102e1490)("cl_bob",&DAT_10278b64,0);
  _DAT_1032185c = (*DAT_102e1490)("cl_bobup",&DAT_10278a7c,0);
  DAT_10321000 = (*DAT_102e1490)("cl_waterdist",&DAT_10278b4c,0);
  return;
}

/* 100bb6e0  FUN_100bb6e0  (250 bytes)
 * int FUN_100bb6e0(undefined1 * param_1, byte.conflict * param_2)
 * called by: FUN_10007350, FUN_1002c670, FUN_1002cb30, FUN_1002d160, FUN_1002de50, FUN_1002e370, FUN_1002e960, FUN_1002f2e0, FUN_10036240, FUN_10037dc0, FUN_100384a0, FUN_10039080, ... (70 total)
 */
int __cdecl FUN_100bb6e0(undefined1 *param_1,byte_conflict *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278be4,0x5d,0,(byte_conflict *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte_conflict *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278be4,0x5e,0,(byte_conflict *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  iVar2 = FUN_100c2330((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_100c20b0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}

/* 100bb7e0  FUN_100bb7e0  (33 bytes)
 * undefined FUN_100bb7e0(void)
 * called by: FUN_100bbc20
 */
void FUN_100bb7e0(void)

{
  FUN_100bb820();
  DAT_10321c18 = __ms_p5_mp_test_fdiv();
  __setdefaultprecision();
  return;
}

/* 100bb810  FUN_100bb810  (5 bytes)
 * undefined FUN_100bb810(void)
 */
void FUN_100bb810(void)

{
  return;
}

/* 100bb820  FUN_100bb820  (65 bytes)
 * undefined FUN_100bb820(void)
 * called by: FUN_100bb7e0
 */
void FUN_100bb820(void)

{
  PTR___fptrap_1028b684 = __cfltcvt;
  PTR___fptrap_1028b688 = __cropzeros;
  PTR___fptrap_1028b68c = __fassign;
  PTR___fptrap_1028b690 = FUN_100c3a50;
  PTR___fptrap_1028b694 = __positive;
  PTR___fptrap_1028b698 = __cfltcvt;
  return;
}

/* 100bb870  FUN_100bb870  (28 bytes)
 * undefined4 FUN_100bb870(undefined4 param_1)
 */
undefined4 __cdecl FUN_100bb870(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10321c14;
  DAT_10321c14 = param_1;
  return uVar1;
}

/* 100bb890  FUN_100bb890  (64 bytes)
 * undefined FUN_100bb890(undefined4 * param_1)
 * called by: FUN_100bb8d0
 */
void __fastcall FUN_100bb890(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_100c4260(0x1b);
  if (param_1[1] != 0) {
    FUN_100c4340((undefined *)param_1[1]);
  }
  FUN_100c4300(0x1b);
  return;
}

/* 100bb8d0  FUN_100bb8d0  (46 bytes)
 * undefined4 * FUN_100bb8d0(uint param_1)
 */
undefined4 * __thiscall FUN_100bb8d0(void *this,uint param_1)

{
  FUN_100bb890(this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 100bb990  FUN_100bb990  (17 bytes)
 * int FUN_100bb990(int param_1)
 */
int __fastcall FUN_100bb990(int param_1)

{
  return param_1 + 8;
}

/* 100bb9b0  FUN_100bb9b0  (25 bytes)
 * undefined4 * FUN_100bb9b0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_100bb9b0(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  return param_1;
}

/* 100bb9d0  FUN_100bb9d0  (16 bytes)
 * undefined4 FUN_100bb9d0(undefined4 param_1)
 */
undefined4 __fastcall FUN_100bb9d0(undefined4 param_1)

{
  return param_1;
}

/* 100bba10  FUN_100bba10  (15 bytes)
 * undefined FUN_100bba10(void)
 */
void FUN_100bba10(void)

{
  __amsg_exit(0x19);
  return;
}

/* 100bba20  FUN_100bba20  (7 bytes)
 * uint * FUN_100bba20(uint * param_1, uint * param_2)
 * called by: FUN_1000dc60, FUN_1001a4b0, FUN_1001a8e0, FUN_1001ad00, FUN_1001b0f0, FUN_1001b500, FUN_1001b9e0, FUN_1001bdb0, FUN_1001c200, FUN_1001c5d0, FUN_1001ca00, FUN_1001cde0, ... (106 total)
 */
uint * __cdecl FUN_100bba20(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_100bbb08;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100bbb08:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}

/* 100bba30  FUN_100bba30  (224 bytes)
 * uint * FUN_100bba30(uint * param_1, uint * param_2)
 * called by: FUN_1002c670, FUN_1002f2e0, FUN_10037dc0, FUN_10060b10, FUN_1006b830, FUN_1006c780, FUN_1006ff20, FUN_1008e1c0, FUN_100af6c0, FUN_100b3eb0, FUN_100bd710, FUN_100c32e0, ... (15 total)
 */
uint * __cdecl FUN_100bba30(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100bba4c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100bba7f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x100bba9b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100bba4c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x100bba9b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x100bba9b;
    }
  }
LAB_100bba7f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x100bba9b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100bbb08:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_100bbb08;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}

/* 100bbb10  FUN_100bbb10  (161 bytes)
 * undefined FUN_100bbb10(void * param_1)
 * called by: FUN_1000dfb0, FUN_1000e590, FUN_1000eb70, FUN_1000f150, FUN_1000f730, FUN_1000fd10, FUN_100102f0, FUN_100108d0, FUN_10010eb0, FUN_10011490, FUN_10011a70, FUN_10012050, ... (261 total)
 */
void __cdecl FUN_100bbb10(void *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_100c4260(9);
    if (((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
        && ((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((int)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_100c32e0(2,0x10278c08,0x2f,0,
                              (byte_conflict *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1
        )))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    __free_dbg(param_1,*(int *)((int)param_1 + -0xc));
    FUN_100c4300(9);
  }
  return;
}

/* 100bbc20  FUN_100bbc20  (56 bytes)
 * undefined FUN_100bbc20(void)
 * called by: FUN_100c1e30
 */
void FUN_100bbc20(void)

{
  if (PTR_FUN_1028b2fc != (undefined *)0x0) {
    (*(code *)PTR_FUN_1028b2fc)();
  }
  __initterm((int *)&DAT_1028838c,(int *)&DAT_102886a4);
  __initterm((int *)&DAT_10288000,(int *)&DAT_10288288);
  return;
}

/* 100bbc60  FUN_100bbc60  (21 bytes)
 * undefined FUN_100bbc60(UINT param_1)
 * called by: FUN_1000dfb0, FUN_1000e590, FUN_1000eb70, FUN_1000f150, FUN_1000f730, FUN_1000fd10, FUN_100102f0, FUN_100108d0, FUN_10010eb0, FUN_10011490, FUN_10011a70, FUN_10012050, ... (19 total)
 */
void __cdecl FUN_100bbc60(UINT param_1)

{
  FUN_100bbce0(param_1,0,0);
  return;
}

/* 100bbca0  FUN_100bbca0  (19 bytes)
 * undefined FUN_100bbca0(void)
 * called by: FUN_100c1e30
 */
void FUN_100bbca0(void)

{
  FUN_100bbce0(0,0,1);
  return;
}

/* 100bbcc0  FUN_100bbcc0  (19 bytes)
 * undefined FUN_100bbcc0(void)
 */
void FUN_100bbcc0(void)

{
  FUN_100bbce0(0,1,1);
  return;
}

/* 100bbce0  FUN_100bbce0  (227 bytes)
 * undefined FUN_100bbce0(UINT param_1, int param_2, int param_3)
 * called by: FUN_100bbc60, FUN_100bbca0, FUN_100bbcc0, __exit
 */
void __cdecl FUN_100bbce0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  FUN_100bbdd0();
  if (DAT_10321c5c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10321c58 = 1;
  DAT_10321c54 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_103237c8 != (int *)0x0) {
      local_8 = DAT_103237c4;
      while (local_8 = local_8 + -1, DAT_103237c8 <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_102887a8,(int *)&DAT_102889b0);
  }
  __initterm((int *)&DAT_10288ab4,(int *)&DAT_10288cbc);
  if ((DAT_10321c60 == 0) && (uVar1 = FUN_100bfcf0(-1), (uVar1 & 0x20) != 0)) {
    DAT_10321c60 = 1;
    FUN_100c07a0();
  }
  if (param_3 == 0) {
    DAT_10321c5c = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100bbde0();
  return;
}

/* 100bbdd0  FUN_100bbdd0  (15 bytes)
 * undefined FUN_100bbdd0(void)
 * called by: FUN_100bbce0, FUN_100bc3d0
 */
void FUN_100bbdd0(void)

{
  FUN_100c4260(0xd);
  return;
}

/* 100bbde0  FUN_100bbde0  (15 bytes)
 * undefined FUN_100bbde0(void)
 * called by: FUN_100bbce0, FUN_100bc3d0
 */
void FUN_100bbde0(void)

{
  FUN_100c4300(0xd);
  return;
}

/* 100bbe40  FUN_100bbe40  (243 bytes)
 * int FUN_100bbe40(undefined1 * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: FUN_10017020, FUN_1003f900
 */
int __cdecl FUN_100bbe40(undefined1 *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278c3c,0x5a,0,(byte_conflict *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte_conflict *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278c3c,0x5b,0,(byte_conflict *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  iVar2 = FUN_100c2330((int *)&local_24,param_2,param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_100c20b0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}

/* 100bbfd0  FUN_100bbfd0  (20 bytes)
 * undefined FUN_100bbfd0(void)
 */
void FUN_100bbfd0(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_100c4748(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_100bbfed(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}

/* 100bbfe4  FUN_100bbfe4  (9 bytes)
 * uint FUN_100bbfe4(uint param_1, uint param_2)
 * called by: FUN_1001d830, FUN_1001e850, FUN_10025970, FUN_1004c3b0, FUN_10051130, FUN_10057ff0, FUN_10058070, FUN_10058320, FUN_1005b080, FUN_10066300, FUN_1007d6c0, FUN_10092160, ... (21 total)
 */
uint __thiscall FUN_100bbfe4(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_100c46ec();
      goto LAB_100bc06b;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x100bc05c:
    if (uVar1 == 0) {
LAB_100bc00e:
      if (DAT_10321c14 != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_1028b320,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_100c46d5();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_100bc00e;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x100bc05c;
  }
  uVar2 = 1;
LAB_100bc06b:
  if (DAT_10321c14 != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_1028b320,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

/* 100bbfed  FUN_100bbfed  (157 bytes)
 * uint FUN_100bbfed(uint param_1, uint param_2)
 * called by: FUN_100bbfd0
 */
uint __cdecl FUN_100bbfed(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_100c46ec();
      goto LAB_100bc06b;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x100bc05c:
    if (uVar1 == 0) {
LAB_100bc00e:
      if (DAT_10321c14 != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_1028b320,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_100c46d5();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_100bc00e;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x100bc05c;
  }
  uVar2 = 1;
LAB_100bc06b:
  if (DAT_10321c14 != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_1028b320,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

/* 100bc090  FUN_100bc090  (664 bytes)
 * undefined4 * FUN_100bc090(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * called by: FUN_1001f1b0, FUN_1002dc40, FUN_1002f2e0, FUN_10030f60, FUN_10036050, FUN_1003e770, FUN_10040c90, FUN_10040f70, FUN_100413e0, FUN_10043740, FUN_10044190, FUN_1004e060, ... (33 total)
 */
undefined4 * __cdecl FUN_100bc090(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_100bc247_caseD_2;
        case 3:
          goto switchD_100bc247_caseD_3;
        }
        goto switchD_100bc247_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100bc247_caseD_0;
      case 1:
        goto switchD_100bc247_caseD_1;
      case 2:
        goto switchD_100bc247_caseD_2;
      case 3:
        goto switchD_100bc247_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100bc247_caseD_2;
            case 3:
              goto switchD_100bc247_caseD_3;
            }
            goto switchD_100bc247_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100bc247_caseD_2;
            case 3:
              goto switchD_100bc247_caseD_3;
            }
            goto switchD_100bc247_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100bc247_caseD_2;
            case 3:
              goto switchD_100bc247_caseD_3;
            }
            goto switchD_100bc247_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_100bc247_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100bc247_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100bc247_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100bc247_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_100bc0c5_caseD_2;
      case 3:
        goto switchD_100bc0c5_caseD_3;
      }
      goto switchD_100bc0c5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100bc0c5_caseD_0;
    case 1:
      goto switchD_100bc0c5_caseD_1;
    case 2:
      goto switchD_100bc0c5_caseD_2;
    case 3:
      goto switchD_100bc0c5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100bc0c5_caseD_2;
          case 3:
            goto switchD_100bc0c5_caseD_3;
          }
          goto switchD_100bc0c5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100bc0c5_caseD_2;
          case 3:
            goto switchD_100bc0c5_caseD_3;
          }
          goto switchD_100bc0c5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100bc0c5_caseD_2;
          case 3:
            goto switchD_100bc0c5_caseD_3;
          }
          goto switchD_100bc0c5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_100bc0c5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100bc0c5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100bc0c5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100bc0c5_caseD_0:
  return param_1;
}

/* 100bc3d0  FUN_100bc3d0  (179 bytes)
 * int FUN_100bc3d0(int param_1)
 * called by: FUN_100bc490
 */
int __cdecl FUN_100bc3d0(int param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int unaff_retaddr;
  undefined4 uStack00000018;
  
  FUN_100bbdd0();
  uVar1 = FUN_100bf600((int)DAT_103237c8,2);
  if (uVar1 < (uint)((int)DAT_103237c4 + (4 - (int)DAT_103237c8))) {
    uVar1 = 0x68;
    iVar2 = FUN_100bf600((int)DAT_103237c8,2);
    pvVar3 = (void *)FID_conflict___realloc_dbg
                               (DAT_103237c8,iVar2 + 0x10,uVar1,unaff_retaddr,param_1);
    if (pvVar3 == (void *)0x0) {
      uStack00000018 = 0x100bc436;
      FUN_100bbde0();
      return 0;
    }
    DAT_103237c4 = (int *)((int)pvVar3 + ((int)DAT_103237c4 - (int)DAT_103237c8 >> 2) * 4);
    DAT_103237c8 = pvVar3;
  }
  *DAT_103237c4 = param_1;
  DAT_103237c4 = DAT_103237c4 + 1;
  FUN_100bbde0();
  return param_1;
}

/* 100bc490  FUN_100bc490  (24 bytes)
 * int FUN_100bc490(int param_1)
 * called by: FUN_10020900, FUN_10020cc0, FUN_100213a0, FUN_10021c40, FUN_10024890, FUN_10036150, FUN_100397b0, FUN_1003e530, FUN_100435c0, FUN_100453a0, FUN_10051130, FUN_10068fc0, ... (60 total)
 */
int __cdecl FUN_100bc490(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100bc3d0(param_1);
  return (iVar1 != 0) - 1;
}

/* 100bc4b0  FUN_100bc4b0  (77 bytes)
 * undefined FUN_100bc4b0(void)
 */
void FUN_100bc4b0(void)

{
  DAT_103237c8 = (undefined4 *)__malloc_dbg(0x80,2,0x10278c48,0xb6);
  if (DAT_103237c8 == (undefined4 *)0x0) {
    __amsg_exit(0x18);
  }
  *DAT_103237c8 = 0;
  DAT_103237c4 = DAT_103237c8;
  return;
}

/* 100bc500  FUN_100bc500  (45 bytes)
 * undefined FUN_100bc500(undefined * UNRECOVERED_JUMPTABLE)
 * called by: CatchIt
 */
void FUN_100bc500(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x100bc52b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 100bc550  FUN_100bc550  (7 bytes)
 * undefined FUN_100bc550(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_100c5150
 */
void FUN_100bc550(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100bc555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 100bc560  FUN_100bc560  (7 bytes)
 * undefined FUN_100bc560(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_100c5150
 */
void FUN_100bc560(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100bc565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 100bc570  FUN_100bc570  (86 bytes)
 * undefined FUN_100bc570(PVOID param_1, PEXCEPTION_RECORD param_2)
 * called by: CatchIt, FUN_100bc7c0
 */
void FUN_100bc570(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x100bc59c,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}

/* 100bc640  FUN_100bc640  (104 bytes)
 * undefined4 FUN_100bc640(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * called by: FUN_100c4fb0
 */
undefined4 __cdecl
FUN_100bc640(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = FUN_100bc6b0;
  local_10 = param_2;
  local_c = param_1;
  local_8 = param_4 + 1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}

/* 100bc6b0  FUN_100bc6b0  (57 bytes)
 * undefined FUN_100bc6b0(EHExceptionRecord * param_1, EHRegistrationNode * param_2, _CONTEXT * param_3)
 */
void __cdecl FUN_100bc6b0(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3)

{
  FUN_100c4850(param_1,*(EHRegistrationNode **)(param_2 + 0xc),param_3,(void *)0x0,
               *(_s_FuncInfo **)(param_2 + 8),*(int *)(param_2 + 0x10),param_2,'\0');
  return;
}

/* 100bc6f0  FUN_100bc6f0  (204 bytes)
 * undefined4 FUN_100bc6f0(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_100c4be0
 */
undefined4 __cdecl
FUN_100bc6f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_100bc7c0;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x100bc78c;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_100c55e0();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}

/* 100bc7c0  FUN_100bc7c0  (124 bytes)
 * undefined4 FUN_100bc7c0(PEXCEPTION_RECORD param_1, PVOID param_2, _CONTEXT * param_3)
 */
undefined4 __cdecl FUN_100bc7c0(PEXCEPTION_RECORD param_1,PVOID param_2,_CONTEXT *param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_100c4850((EHExceptionRecord *)param_1,*(EHRegistrationNode **)((int)param_2 + 0xc),param_3,
               (void *)0x0,*(_s_FuncInfo **)((int)param_2 + 8),*(int *)((int)param_2 + 0x10),
               *(EHRegistrationNode **)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_100bc570(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x100bc834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}

/* 100bc850  FUN_100bc850  (130 bytes)
 * int FUN_100bc850(int param_1, int param_2, int param_3, uint * param_4, uint * param_5)
 * called by: FUN_100c4940, FUN_100c4be0
 */
int __cdecl FUN_100bc850(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar5 = uVar6;
  uVar4 = uVar6;
  while (uVar3 = uVar5, -1 < param_2) {
    if (uVar6 == 0xffffffff) {
      FUN_100c5860();
    }
    uVar6 = uVar6 - 1;
    iVar1 = iVar2 + uVar6 * 0x14;
    if (((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) ||
       (uVar5 = uVar3, uVar6 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar5 = uVar6;
      uVar4 = uVar3;
    }
  }
  uVar6 = uVar6 + 1;
  *param_4 = uVar6;
  *param_5 = uVar4;
  if ((*(uint *)(param_1 + 0xc) < uVar4) || (uVar4 < uVar6)) {
    FUN_100c5860();
  }
  return iVar2 + uVar6 * 0x14;
}

/* 100bc900  FUN_100bc900  (34 bytes)
 * undefined FUN_100bc900()
 */
undefined4 FUN_100bc900(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 4) & 6) != 0) {
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}

/* 100bc9b6  FUN_100bc9b6  (24 bytes)
 * undefined FUN_100bc9b6(void)
 * called by: FUN_100c9368, __local_unwind2
 */
void FUN_100bc9b6(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1028b338 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1028b334 = in_EAX;
  DAT_1028b33c = unaff_EBP;
  return;
}

/* 100bc9d0  FUN_100bc9d0  (130 bytes)
 * undefined4 FUN_100bc9d0(undefined * * param_1)
 * called by: FUN_10035a30, FUN_10035c60, FUN_1003f900, FUN_1006b090, FUN_1006b210, FUN_100d2d90
 */
undefined4 __cdecl FUN_100bc9d0(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278c54,0x3a,0,(byte_conflict *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uint)param_1[3] & 0x40) == 0) {
    FUN_100c5a40(param_1);
    local_8 = FUN_100bca60((int *)param_1);
    FUN_100c5ab0(param_1);
  }
  else {
    param_1[3] = (undefined *)0x0;
  }
  return local_8;
}

/* 100bca60  FUN_100bca60  (190 bytes)
 * undefined4 FUN_100bca60(int * param_1)
 * called by: FUN_100bc9d0
 */
undefined4 __cdecl FUN_100bca60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278c54,0x77,0,(byte_conflict *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_1[3] & 0x83U) != 0) {
    local_8 = FUN_100c5d90(param_1);
    FUN_100c5c50(param_1);
    iVar2 = FUN_100c5b20(param_1[4]);
    if (iVar2 < 0) {
      local_8 = 0xffffffff;
    }
    else if (param_1[7] != 0) {
      __free_dbg((void *)param_1[7],2);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return local_8;
}

/* 100bcb20  FUN_100bcb20  (98 bytes)
 * int FUN_100bcb20(undefined * * param_1)
 * called by: FUN_10035a30
 */
int __cdecl FUN_100bcb20(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278c7c,0x32,0,(byte_conflict *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_100c5a40(param_1);
  iVar2 = FUN_100bcb90((uint *)param_1);
  FUN_100c5ab0(param_1);
  return iVar2;
}

/* 100bcb90  FUN_100bcb90  (666 bytes)
 * int FUN_100bcb90(uint * param_1)
 * called by: FUN_100bcb20, FUN_100bcea0
 */
int __cdecl FUN_100bcb90(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  char *pcVar6;
  DWORD local_20;
  int local_1c;
  uint local_14;
  char *local_8;
  
  if ((param_1 == (uint *)0x0) &&
     (iVar3 = FUN_100c32e0(2,0x10278c7c,99,0,(byte_conflict *)"str != NULL"), iVar3 == 1)) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  uVar1 = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_20 = FUN_100c6430(uVar1,0,1);
  if ((int)local_20 < 0) {
    local_1c = -1;
  }
  else if ((param_1[3] & 0x108) == 0) {
    local_1c = local_20 - param_1[1];
  }
  else {
    local_1c = *param_1 - param_1[2];
    iVar3 = (int)uVar1 >> 5;
    if ((param_1[3] & 3) == 0) {
      if ((param_1[3] & 0x80) == 0) {
        puVar4 = (undefined4 *)FUN_100c6040();
        *puVar4 = 0x16;
        return -1;
      }
    }
    else if (((int)*(char *)((&DAT_10322300)[iVar3] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80U) != 0) {
      for (local_8 = (char *)param_1[2]; local_8 < (char *)*param_1; local_8 = local_8 + 1) {
        if (*local_8 == '\n') {
          local_1c = local_1c + 1;
        }
      }
    }
    if (local_20 != 0) {
      if ((param_1[3] & 1) != 0) {
        if (param_1[1] == 0) {
          local_1c = 0;
        }
        else {
          local_14 = param_1[1] + (*param_1 - param_1[2]);
          if (((int)*(char *)((&DAT_10322300)[iVar3] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80U) != 0) {
            DVar5 = FUN_100c6430(uVar1,0,2);
            if (DVar5 == local_20) {
              pcVar6 = (char *)(param_1[2] + local_14);
              for (local_8 = (char *)param_1[2]; local_8 < pcVar6; local_8 = local_8 + 1) {
                if (*local_8 == '\n') {
                  local_14 = local_14 + 1;
                }
              }
              if ((param_1[3] & 0x2000) != 0) {
                local_14 = local_14 + 1;
              }
            }
            else {
              FUN_100c6430(uVar1,local_20,0);
              if (((local_14 < 0x201) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
                local_14 = 0x200;
              }
              else {
                local_14 = param_1[6];
              }
              if ((*(byte *)((&DAT_10322300)[iVar3] + 4 + (uVar1 & 0x1f) * 0x24) & 4) != 0) {
                local_14 = local_14 + 1;
              }
            }
          }
          local_20 = local_20 - local_14;
        }
      }
      local_1c = local_20 + local_1c;
    }
  }
  return local_1c;
}

/* 100bce30  FUN_100bce30  (106 bytes)
 * int FUN_100bce30(undefined * * param_1, int param_2, DWORD param_3)
 * called by: FUN_10035a30, FUN_1006b090, FUN_1006b210
 */
int __cdecl FUN_100bce30(undefined **param_1,int param_2,DWORD param_3)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278c84,0x65,0,(byte_conflict *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_100c5a40(param_1);
  iVar2 = FUN_100bcea0((uint *)param_1,param_2,param_3);
  FUN_100c5ab0(param_1);
  return iVar2;
}

/* 100bcea0  FUN_100bcea0  (295 bytes)
 * int FUN_100bcea0(uint * param_1, int param_2, DWORD param_3)
 * called by: FUN_100bce30
 */
int __cdecl FUN_100bcea0(uint *param_1,int param_2,DWORD param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  
  if ((param_1 == (uint *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278c84,0x92,0,(byte_conflict *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (((param_1[3] & 0x83) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    puVar3 = (undefined4 *)FUN_100c6040();
    *puVar3 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_100bcb90(param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_100c5d90((int *)param_1);
    if ((param_1[3] & 0x80) == 0) {
      if ((((param_1[3] & 1) != 0) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = param_1[3] & 0xfffffffc;
    }
    DVar4 = FUN_100c6430(param_1[4],param_2,param_3);
    iVar2 = (DVar4 != 0xffffffff) - 1;
  }
  return iVar2;
}

/* 100bcfd0  FUN_100bcfd0  (62 bytes)
 * uint FUN_100bcfd0(char * param_1, uint param_2, uint param_3, undefined * * param_4)
 * called by: FUN_10035a30, FUN_1006b090
 */
uint __cdecl FUN_100bcfd0(char *param_1,uint param_2,uint param_3,undefined **param_4)

{
  uint uVar1;
  
  FUN_100c5a40(param_4);
  uVar1 = FUN_100bd010(param_1,param_2,param_3,(int *)param_4);
  FUN_100c5ab0(param_4);
  return uVar1;
}

/* 100bd010  FUN_100bd010  (463 bytes)
 * uint FUN_100bd010(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: FUN_100bcfd0
 */
uint __cdecl FUN_100bd010(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  DWORD local_28;
  uint local_24;
  uint local_20;
  uint local_10;
  char *local_c;
  char local_8;
  
  local_c = param_1;
  uVar3 = param_2 * param_3;
  if (uVar3 == 0) {
    param_3 = 0;
  }
  else {
    local_10 = uVar3;
    if ((param_4[3] & 0x10cU) == 0) {
      local_20 = 0x1000;
    }
    else {
      local_20 = param_4[6];
    }
    while (local_10 != 0) {
      if (((param_4[3] & 0x10cU) == 0) || (param_4[1] == 0)) {
        if (local_10 < local_20) {
          uVar2 = FUN_100c6580(param_4);
          if (uVar2 == 0xffffffff) {
            return (uVar3 - local_10) / param_2;
          }
          local_8 = (char)uVar2;
          *local_c = local_8;
          local_c = local_c + 1;
          local_10 = local_10 - 1;
          local_20 = param_4[6];
        }
        else {
          if (local_20 == 0) {
            local_28 = local_10;
          }
          else {
            local_28 = local_10 - local_10 % local_20;
          }
          iVar1 = FUN_100c6770(param_4[4],local_c,local_28);
          if (iVar1 == 0) {
            param_4[3] = param_4[3] | 0x10;
            return (uVar3 - local_10) / param_2;
          }
          if (iVar1 == -1) {
            param_4[3] = param_4[3] | 0x20;
            return (uVar3 - local_10) / param_2;
          }
          local_10 = local_10 - iVar1;
          local_c = local_c + iVar1;
        }
      }
      else {
        if (local_10 < (uint)param_4[1]) {
          local_24 = local_10;
        }
        else {
          local_24 = param_4[1];
        }
        FUN_100bc090((undefined4 *)local_c,(undefined4 *)*param_4,local_24);
        local_10 = local_10 - local_24;
        param_4[1] = param_4[1] - local_24;
        *param_4 = *param_4 + local_24;
        local_c = local_c + local_24;
      }
    }
  }
  return param_3;
}

/* 100bd1e0  FUN_100bd1e0  (252 bytes)
 * undefined4 * FUN_100bd1e0(LPCSTR param_1, char * param_2, undefined4 param_3)
 * called by: FUN_100bd2e0
 */
undefined4 * __cdecl FUN_100bd1e0(LPCSTR param_1,char *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  
  if ((param_1 == (LPCSTR)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278cc4,0x35,0,(byte_conflict *)"file != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((*param_1 == '\0') &&
     (iVar2 = FUN_100c32e0(2,0x10278cc4,0x36,0,(byte_conflict *)"*file != _T(\'\\0\')"), iVar2 == 1)
     ) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((param_2 == (char *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278cc4,0x37,0,(byte_conflict *)"mode != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((*param_2 == '\0') &&
     (iVar2 = FUN_100c32e0(2,0x10278cc4,0x38,0,(byte_conflict *)"*mode != _T(\'\\0\')"), iVar2 == 1)
     ) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  ppuVar4 = (undefined **)FUN_100c6fe0();
  if (ppuVar4 == (undefined **)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_100c6c50(param_1,param_2,param_3,ppuVar4);
    FUN_100c5ab0(ppuVar4);
  }
  return puVar3;
}

/* 100bd2e0  FUN_100bd2e0  (23 bytes)
 * undefined FUN_100bd2e0(LPCSTR param_1, char * param_2)
 * called by: FUN_10035a30, FUN_10035c60, FUN_1003f900, FUN_1006b090, FUN_1006b210
 */
void __cdecl FUN_100bd2e0(LPCSTR param_1,char *param_2)

{
  FUN_100bd1e0(param_1,param_2,0x40);
  return;
}

/* 100bd300  FUN_100bd300  (249 bytes)
 * int FUN_100bd300(undefined1 * param_1, int param_2, byte.conflict * param_3)
 * called by: FUN_10035a30, FUN_10035c60, FUN_10037980, FUN_10037dc0, FUN_100c32e0, FUN_100c3670
 */
int __cdecl FUN_100bd300(undefined1 *param_1,int param_2,byte_conflict *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278be4,0x5d,0,(byte_conflict *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte_conflict *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278be4,0x5e,0,(byte_conflict *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_100c2330((int *)&local_24,param_3,(undefined4 *)&stack0x00000010);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_100c20b0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}

/* 100bd400  FUN_100bd400  (62 bytes)
 * uint FUN_100bd400(char * param_1, uint param_2, uint param_3, undefined * * param_4)
 * called by: FUN_10035c60, FUN_1006b210
 */
uint __cdecl FUN_100bd400(char *param_1,uint param_2,uint param_3,undefined **param_4)

{
  uint uVar1;
  
  FUN_100c5a40(param_4);
  uVar1 = FUN_100bd440(param_1,param_2,param_3,(int *)param_4);
  FUN_100c5ab0(param_4);
  return uVar1;
}

/* 100bd440  FUN_100bd440  (537 bytes)
 * uint FUN_100bd440(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: FUN_100bd400
 */
uint __cdecl FUN_100bd440(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_10;
  char *local_c;
  
  local_c = param_1;
  uVar3 = param_2 * param_3;
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    local_10 = uVar3;
    if ((param_4[3] & 0x10cU) == 0) {
      local_20 = 0x1000;
    }
    else {
      local_20 = param_4[6];
    }
    do {
      while( true ) {
        while( true ) {
          if (local_10 == 0) {
            return param_3;
          }
          if (((param_4[3] & 0x108U) == 0) || (param_4[1] == 0)) break;
          if (local_10 < (uint)param_4[1]) {
            local_24 = local_10;
          }
          else {
            local_24 = param_4[1];
          }
          FUN_100bc090((undefined4 *)*param_4,(undefined4 *)local_c,local_24);
          local_10 = local_10 - local_24;
          param_4[1] = param_4[1] - local_24;
          *param_4 = *param_4 + local_24;
          local_c = local_c + local_24;
        }
        if (local_20 <= local_10) break;
        uVar2 = FUN_100c20b0((int)*local_c,param_4);
        if (uVar2 == 0xffffffff) {
          return (uVar3 - local_10) / param_2;
        }
        local_c = local_c + 1;
        local_10 = local_10 - 1;
        if (param_4[6] < 1) {
          local_2c = 1;
        }
        else {
          local_2c = param_4[6];
        }
        local_20 = local_2c;
      }
      if (((param_4[3] & 0x108U) != 0) && (iVar1 = FUN_100c5d90(param_4), iVar1 != 0)) {
        return (uVar3 - local_10) / param_2;
      }
      if (local_20 == 0) {
        local_28 = local_10;
      }
      else {
        local_28 = local_10 - local_10 % local_20;
      }
      uVar2 = FUN_100c7160(param_4[4],local_c,local_28);
      if (uVar2 == 0xffffffff) {
        param_4[3] = param_4[3] | 0x20;
        return (uVar3 - local_10) / param_2;
      }
      local_10 = local_10 - uVar2;
      local_c = local_c + uVar2;
    } while (local_28 <= uVar2);
    param_4[3] = param_4[3] | 0x20;
    uVar3 = (uVar3 - local_10) / param_2;
  }
  return uVar3;
}

/* 100bd710  FUN_100bd710  (892 bytes)
 * undefined FUN_100bd710(uint * param_1, uint * param_2, int param_3)
 * called by: FUN_10036a40, FUN_100395c0, FUN_10039670, FUN_100396d0, FUN_10058b50, FUN_100601a0, FUN_100602f0, FUN_1009ea90, FUN_1009eb30, FUN_1009ebd0, FUN_1009ec50, FUN_1009ecd0, ... (15 total)
 */
void __cdecl FUN_100bd710(uint *param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  DWORD DVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  uint local_328 [65];
  uint *local_224;
  uint local_220 [135];
  
  if ((DAT_10321ca0 == 1) || ((DAT_10321ca0 == 0 && (DAT_10321ca4 == 1)))) {
    if ((DAT_1028b7f4 & 0x10c) == 0) {
      FUN_100c7dd0((undefined **)&DAT_1028b7e8,(undefined **)0x0,4,(undefined *)0x0);
    }
    FUN_100bdbb0((undefined **)&DAT_1028b7e8,
                 (byte_conflict *)s_Assertion_failed___s__file__s__l_1028b340);
    FUN_100c5cf0((undefined **)&DAT_1028b7e8);
  }
  else {
    FUN_100bba20(local_220,(uint *)"Assertion failed!");
    FUN_100bba30(local_220,(uint *)PTR_DAT_1028b370);
    FUN_100bba30(local_220,(uint *)"Program: ");
    DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_328,0x104);
    if (DVar2 == 0) {
      FUN_100bba20(local_328,(uint *)"<program name unknown>");
    }
    local_224 = local_328;
    sVar3 = _strlen((char *)local_328);
    if (0x3c < sVar3 + 0xb) {
      sVar3 = _strlen((char *)local_328);
      local_224 = (uint *)((int)local_224 + (sVar3 - 0x31));
      _strncpy((char *)local_224,PTR_DAT_1028b368,3);
    }
    FUN_100bba30(local_220,local_224);
    FUN_100bba30(local_220,(uint *)PTR_DAT_1028b36c);
    FUN_100bba30(local_220,(uint *)"File: ");
    sVar3 = _strlen((char *)param_2);
    if (sVar3 + 8 < 0x3d) {
      FUN_100bba30(local_220,param_2);
    }
    else {
      _strncat((char *)local_220,(char *)param_2,0x31);
      FUN_100bba30(local_220,(uint *)PTR_DAT_1028b368);
    }
    FUN_100bba30(local_220,(uint *)PTR_DAT_1028b36c);
    FUN_100bba30(local_220,(uint *)"Line: ");
    iVar5 = 10;
    sVar3 = _strlen((char *)local_220);
    __itoa(param_3,(char *)((int)local_220 + sVar3),iVar5);
    FUN_100bba30(local_220,(uint *)PTR_DAT_1028b370);
    FUN_100bba30(local_220,(uint *)"Expression: ");
    sVar3 = _strlen((char *)local_220);
    sVar4 = _strlen((char *)param_1);
    if (sVar3 + 0xb0 + sVar4 < 0x21d) {
      FUN_100bba30(local_220,param_1);
    }
    else {
      sVar3 = _strlen((char *)local_220);
      _strncat((char *)local_220,(char *)param_1,0x21c - (sVar3 + 0xb3));
      FUN_100bba30(local_220,(uint *)PTR_DAT_1028b368);
    }
    FUN_100bba30(local_220,(uint *)PTR_DAT_1028b370);
    FUN_100bba30(local_220,
                 (uint *)
                 "For information on how your program can cause an assertion\nfailure, see the Visual C++ documentation on asserts"
                );
    FUN_100bba30(local_220,(uint *)PTR_DAT_1028b370);
    FUN_100bba30(local_220,(uint *)"(Press Retry to debug the application - JIT must be enabled)");
    iVar5 = FUN_100c7a20(local_220,"Microsoft Visual C++ Runtime Library",0x12012);
    if (iVar5 == 3) {
      FUN_100c7760(0x16);
                    /* WARNING: Subroutine does not return */
      __exit(3);
    }
    if (iVar5 == 4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (iVar5 == 5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

/* 100bda90  FUN_100bda90  (120 bytes)
 * float10 FUN_100bda90(byte.conflict * param_1)
 * called by: FUN_10036e60, FUN_10048e00, FUN_1004a3d0, FUN_1004ba60
 */
float10 __cdecl FUN_100bda90(byte_conflict *param_1)

{
  uint *puVar1;
  uint local_20;
  uint local_1c [6];
  
  while( true ) {
    if (DAT_1028b63c < 2) {
      local_20 = *(ushort *)(PTR_DAT_1028b430 + (uint)*param_1 * 2) & 8;
    }
    else {
      local_20 = FUN_100c1760((uint)*param_1,8);
    }
    if (local_20 == 0) break;
    param_1 = param_1 + 1;
  }
  _strlen((char *)param_1);
  puVar1 = FUN_100c7f40(local_1c,param_1);
  return (float10)*(double *)(puVar1 + 4);
}

/* 100bdb10  FUN_100bdb10  (47 bytes)
 * undefined FUN_100bdb10(void)
 * called by: FUN_10036e60, FUN_10040c90, FUN_1004fae0, FUN_100c32e0, FUN_100c3670, FUN_100ccb40, FUN_100cdf30, FUN_100ce290, FUN_100d90c0, FUN_100db2d0, FUN_100db970, FUN_100dbb10, ... (13 total)
 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_100bdb10(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}

/* 100bdb40  FUN_100bdb40  (10 bytes)
 * undefined FUN_100bdb40(uint param_1, int param_2, uint param_3, int param_4)
 * called by: FUN_10038220
 */
void FUN_100bdb40(uint param_1,int param_2,uint param_3,int param_4)

{
  __ctrandisp2(param_1,param_2,param_3,param_4);
  return;
}

/* 100bdb54  FUN_100bdb54  (30 bytes)
 * undefined FUN_100bdb54()
 */
float10 FUN_100bdb54(void)

{
  ushort in_FPUStatusWord;
  float10 in_ST0;
  float10 in_ST1;
  float10 extraout_ST1;
  
  do {
    if (DAT_10321c18 == 1) {
      in_ST1 = FUN_100c8c7c();
      in_ST0 = extraout_ST1;
    }
    else {
      in_ST1 = in_ST1 - (float10)(unkint10)(in_ST1 / in_ST0) * in_ST0;
    }
  } while ((in_FPUStatusWord & 0x400) != 0);
  return in_ST1;
}

/* 100bdb80  FUN_100bdb80  (33 bytes)
 * int FUN_100bdb80(int param_1)
 * called by: FUN_1003bce0, FUN_1003bd50, FUN_1003bf90, FUN_1004e190, FUN_1004e300, FUN_10052980, FUN_100538d0, FUN_10062e70
 */
int __cdecl FUN_100bdb80(int param_1)

{
  undefined4 local_8;
  
  if (param_1 < 0) {
    local_8 = -param_1;
  }
  else {
    local_8 = param_1;
  }
  return local_8;
}

/* 100bdbb0  FUN_100bdbb0  (193 bytes)
 * int FUN_100bdbb0(undefined * * param_1, byte.conflict * param_2)
 * called by: FUN_1003f900, FUN_100bd710
 */
int __cdecl FUN_100bdbb0(undefined **param_1,byte_conflict *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278e14,0x38,0,(byte_conflict *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte_conflict *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278e14,0x39,0,(byte_conflict *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_100c5a40(param_1);
  iVar2 = FUN_100c9000(param_1);
  iVar3 = FUN_100c2330((int *)param_1,param_2,(undefined4 *)&stack0x0000000c);
  FUN_100c9160(iVar2,(int *)param_1);
  FUN_100c5ab0(param_1);
  return iVar3;
}

/* 100bdc80  FUN_100bdc80  (664 bytes)
 * undefined4 * FUN_100bdc80(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * called by: FUN_1003ff80, FUN_10040540, FUN_10060490, FUN_100af6c0, FUN_100c5150, FUN_100ca060, FUN_100cb470, FUN_100d25c0, FUN_100db2d0, __shift
 */
undefined4 * __cdecl FUN_100bdc80(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_100bde37_caseD_2;
        case 3:
          goto switchD_100bde37_caseD_3;
        }
        goto switchD_100bde37_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100bde37_caseD_0;
      case 1:
        goto switchD_100bde37_caseD_1;
      case 2:
        goto switchD_100bde37_caseD_2;
      case 3:
        goto switchD_100bde37_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100bde37_caseD_2;
            case 3:
              goto switchD_100bde37_caseD_3;
            }
            goto switchD_100bde37_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100bde37_caseD_2;
            case 3:
              goto switchD_100bde37_caseD_3;
            }
            goto switchD_100bde37_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100bde37_caseD_2;
            case 3:
              goto switchD_100bde37_caseD_3;
            }
            goto switchD_100bde37_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_100bde37_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100bde37_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100bde37_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100bde37_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_100bdcb5_caseD_2;
      case 3:
        goto switchD_100bdcb5_caseD_3;
      }
      goto switchD_100bdcb5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100bdcb5_caseD_0;
    case 1:
      goto switchD_100bdcb5_caseD_1;
    case 2:
      goto switchD_100bdcb5_caseD_2;
    case 3:
      goto switchD_100bdcb5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100bdcb5_caseD_2;
          case 3:
            goto switchD_100bdcb5_caseD_3;
          }
          goto switchD_100bdcb5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100bdcb5_caseD_2;
          case 3:
            goto switchD_100bdcb5_caseD_3;
          }
          goto switchD_100bdcb5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100bdcb5_caseD_2;
          case 3:
            goto switchD_100bdcb5_caseD_3;
          }
          goto switchD_100bdcb5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_100bdcb5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100bdcb5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100bdcb5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100bdcb5_caseD_0:
  return param_1;
}

/* 100be270  FUN_100be270  (20 bytes)
 * undefined FUN_100be270(void)
 */
void FUN_100be270(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_100c4748(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_100be28d(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}

/* 100be284  FUN_100be284  (9 bytes)
 * uint FUN_100be284(int param_1)
 * called by: FUN_100418a0, FUN_100572b0, FUN_100574a0, FUN_10057660, FUN_10057830, FUN_10061ee0, FUN_10062550, FUN_1007e490, FUN_1008c1c0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_100be284(void *this,int param_1)

{
  uint uVar1;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_100c46ec();
    }
    if (DAT_10321c14 == 0) {
      __startOneArgErrorHandling
                (&DAT_1028b3d0,0x12,in_FPUControlWord,unaff_retaddr,param_1,in_stack_00000008);
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fcos(extraout_ST0);
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_1027993a) * _DAT_1027993a;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_10321c14 == 0) {
      uVar1 = __math_exit(&DAT_1028b3d0,0x12,unaff_retaddr,param_1,in_stack_00000008);
      return uVar1;
    }
  }
  return uVar1;
}

/* 100be28d  FUN_100be28d  (145 bytes)
 * uint FUN_100be28d(int param_1, undefined4 param_2)
 * called by: FUN_100be270
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_100be28d(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_100c46ec();
    }
    if (DAT_10321c14 == 0) {
      __startOneArgErrorHandling(&DAT_1028b3d0,0x12,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fcos(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_1027993a) * _DAT_1027993a;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_10321c14 == 0) {
      uVar1 = __math_exit(&DAT_1028b3d0,0x12,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}

/* 100be320  FUN_100be320  (20 bytes)
 * undefined FUN_100be320(void)
 */
void FUN_100be320(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_100c4748(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_100be33d(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}

/* 100be334  FUN_100be334  (9 bytes)
 * uint FUN_100be334(int param_1)
 * called by: FUN_100418a0, FUN_10044e10, FUN_100572b0, FUN_100574a0, FUN_10057660, FUN_10057830, FUN_10061ee0, FUN_10062550, FUN_100626c0, FUN_10069540, FUN_1007e4c0, FUN_1008c1c0, ... (15 total)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_100be334(void *this,int param_1)

{
  uint uVar1;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_100c46ec();
    }
    if (DAT_10321c14 == 0) {
      __startOneArgErrorHandling
                (&DAT_1028b3e0,0x1e,in_FPUControlWord,unaff_retaddr,param_1,in_stack_00000008);
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fsin(extraout_ST0);
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_1027993a) * _DAT_1027993a;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_10321c14 == 0) {
      uVar1 = __math_exit(&DAT_1028b3e0,0x1e,unaff_retaddr,param_1,in_stack_00000008);
      return uVar1;
    }
  }
  return uVar1;
}

/* 100be33d  FUN_100be33d  (145 bytes)
 * uint FUN_100be33d(int param_1, undefined4 param_2)
 * called by: FUN_100be320
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_100be33d(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_100c46ec();
    }
    if (DAT_10321c14 == 0) {
      __startOneArgErrorHandling(&DAT_1028b3e0,0x1e,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fsin(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_1027993a) * _DAT_1027993a;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_10321c14 == 0) {
      uVar1 = __math_exit(&DAT_1028b3e0,0x1e,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}

/* 100be3d0  FUN_100be3d0  (16 bytes)
 * undefined FUN_100be3d0(DWORD param_1)
 * called by: FUN_100437d0
 */
void __cdecl FUN_100be3d0(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100c55e0();
  pDVar1[5] = param_1;
  return;
}

/* 100be420  FUN_100be420  (385 bytes)
 * int FUN_100be420(int * param_1)
 * called by: FUN_100437d0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_100be420(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  int local_dc;
  _TIME_ZONE_INFORMATION local_d4;
  _SYSTEMTIME local_28;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_28);
  GetSystemTime(&local_14);
  if (((((uint)local_14.wMinute == _DAT_10321c78 >> 0x10) && (local_14.wHour == DAT_10321c78)) &&
      (local_14.wDay == DAT_10321c76)) &&
     ((local_14.wMonth == DAT_10321c72 && (local_14.wYear == DAT_10321c70)))) {
    local_dc = DAT_10321c68;
  }
  else {
    DVar1 = GetTimeZoneInformation(&local_d4);
    if (DVar1 == 0xffffffff) {
      local_dc = -1;
    }
    else if (((DVar1 == 2) && ((local_d4.DaylightDate._2_4_ & 0xffff) != 0)) &&
            (local_d4.DaylightBias != 0)) {
      local_dc = 1;
    }
    else {
      local_dc = 0;
    }
    _DAT_10321c70 = CONCAT22(local_14.wMonth,local_14.wYear);
    _DAT_10321c74 = CONCAT22(local_14.wDay,local_14.wDayOfWeek);
    _DAT_10321c78 = CONCAT22(local_14.wMinute,local_14.wHour);
    _DAT_10321c7c = CONCAT22(local_14.wMilliseconds,local_14.wSecond);
  }
  DAT_10321c68 = local_dc;
  iVar2 = FUN_100c9200((uint)local_28.wYear,(uint)local_28.wMonth,(uint)local_28.wDay,
                       (uint)local_28.wHour,(uint)local_28.wMinute,(uint)local_28.wSecond,local_dc);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return iVar2;
}

/* 100be630  FUN_100be630  (93 bytes)
 * undefined FUN_100be630(uint param_1, undefined4 param_2, uint param_3, int param_4, undefined4 param_5)
 * called by: __malloc_dbg, __nh_malloc, _malloc
 */
void FUN_100be630(uint param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10278e48;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_100c4260(9);
  local_8 = 0;
  FUN_100be6f0(param_1,param_3,param_4,param_5);
  local_8 = 0xffffffff;
  FUN_100be68d();
  FUN_100be698();
  return;
}

/* 100be68d  FUN_100be68d  (11 bytes)
 * undefined FUN_100be68d(void)
 * called by: FUN_100be630
 */
void FUN_100be68d(void)

{
  FUN_100c4300(9);
  return;
}

/* 100be698  FUN_100be698  (56 bytes)
 * undefined4 FUN_100be698(void)
 * called by: FUN_100be630
 */
undefined4 FUN_100be698(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  if ((*(int *)(unaff_EBP + -0x1c) == 0) && (*(int *)(unaff_EBP + 0xc) != 0)) {
    iVar2 = __callnewh(*(size_t *)(unaff_EBP + 8));
    if (iVar2 != 0) {
      FUN_100c4260(9);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puVar1 = FUN_100be6f0(*(uint *)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10),
                            *(int *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18));
      *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_100be68d();
      uVar3 = FUN_100be698();
      return uVar3;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(unaff_EBP + -0x1c);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar3;
}

/* 100be6d0  FUN_100be6d0  (23 bytes)
 * undefined FUN_100be6d0(uint param_1)
 */
void __cdecl FUN_100be6d0(uint param_1)

{
  FUN_100be6f0(param_1,1,0,0);
  return;
}

/* 100be6f0  FUN_100be6f0  (787 bytes)
 * undefined4 * FUN_100be6f0(uint param_1, uint param_2, int param_3, undefined4 param_4)
 * called by: FUN_100be630, FUN_100be6d0
 */
undefined4 * __cdecl FUN_100be6f0(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  bVar2 = false;
  if ((((DAT_1028b3e4 & 4) != 0) && (iVar4 = FUN_100bf940(), iVar4 == 0)) &&
     (iVar4 = FUN_100c32e0(2,0x10278f08,0x14c,0,(byte_conflict *)"_CrtCheckMemory()"), iVar4 == 1))
  {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  iVar4 = DAT_1028b3e8;
  if (DAT_1028b3e8 == DAT_1028b3ec) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  iVar6 = (*(code *)PTR_FUN_1028bd20)(1,0,param_1,param_2,DAT_1028b3e8,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == 0) {
      iVar4 = FUN_100c32e0(0,0,0,0,"%s");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    else {
      iVar4 = FUN_100c32e0(0,0,0,0,(byte_conflict *)
                                   "Client hook allocation failure at file %hs line %d.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (((param_2 & 0xffff) != 2) && ((DAT_1028b3e4 & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < 0xffffffe1) && (param_1 + 0x24 < 0xffffffe1)) {
      if (((((param_2 & 0xffff) != 4) && (param_2 != 1)) && ((param_2 & 0xffff) != 2)) &&
         ((param_2 != 3 && (iVar6 = FUN_100c32e0(1,0,0,0,"%s"), iVar6 == 1)))) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
      puVar5 = (undefined4 *)__heap_alloc_base(param_1 + 0x24);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        DAT_1028b3e8 = DAT_1028b3e8 + 1;
        if (bVar2) {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0xfedcbabc;
          puVar5[4] = param_1;
          puVar5[5] = 3;
          puVar5[6] = 0;
        }
        else {
          DAT_10321c84 = DAT_10321c84 + param_1;
          DAT_10321c8c = DAT_10321c8c + param_1;
          if (DAT_10321c90 < DAT_10321c8c) {
            DAT_10321c90 = DAT_10321c8c;
          }
          puVar3 = puVar5;
          if (DAT_10321c88 != (undefined4 *)0x0) {
            DAT_10321c88[1] = puVar5;
            puVar3 = DAT_10321c80;
          }
          DAT_10321c80 = puVar3;
          *puVar5 = DAT_10321c88;
          puVar5[1] = 0;
          puVar5[2] = param_3;
          puVar5[3] = param_4;
          puVar5[4] = param_1;
          puVar5[5] = param_2;
          puVar5[6] = iVar4;
          DAT_10321c88 = puVar5;
        }
        _memset(puVar5 + 7,(uint)DAT_1028b3f0,4);
        _memset((void *)((int)puVar5 + param_1 + 0x20),(uint)DAT_1028b3f0,4);
        _memset(puVar5 + 8,(uint)DAT_1028b3f2,param_1);
        puVar5 = puVar5 + 8;
      }
    }
    else {
      iVar4 = FUN_100c32e0(1,0,0,0,(byte_conflict *)"Invalid allocation size: %u bytes.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
      puVar5 = (undefined4 *)0x0;
    }
  }
  return puVar5;
}

/* 100beb33  FUN_100beb33  (11 bytes)
 * undefined FUN_100beb33(void)
 * called by: FID_conflict:__realloc_dbg
 */
void FUN_100beb33(void)

{
  FUN_100c4300(9);
  return;
}

/* 100beb3e  FUN_100beb3e  (20 bytes)
 * undefined4 FUN_100beb3e(void)
 * called by: FID_conflict:__realloc_dbg
 */
undefined4 FUN_100beb3e(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

/* 100beb60  FUN_100beb60  (1297 bytes)
 * int * FUN_100beb60(void * param_1, uint param_2, uint param_3, int param_4, int param_5, int param_6)
 * called by: FID_conflict:__realloc_dbg
 */
int * __cdecl
FUN_100beb60(void *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  BOOL BVar6;
  bool bVar7;
  int *local_10;
  
  if (param_1 == (void *)0x0) {
    piVar2 = (int *)__malloc_dbg(param_2,param_3,param_4,param_5);
  }
  else if ((param_6 == 0) || (param_2 != 0)) {
    if (((DAT_1028b3e4 & 4) != 0) &&
       ((iVar3 = FUN_100bf940(), iVar3 == 0 &&
        (iVar3 = FUN_100c32e0(2,0x10278f08,0x246,0,(byte_conflict *)"_CrtCheckMemory()"), iVar3 == 1
        )))) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar3 = DAT_1028b3e8;
    if (DAT_1028b3e8 == DAT_1028b3ec) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar5 = (*(code *)PTR_FUN_1028bd20)(2,param_1,param_2,param_3,DAT_1028b3e8,param_4,param_5);
    if (iVar5 == 0) {
      if (param_4 == 0) {
        iVar3 = FUN_100c32e0(0,0,0,0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        iVar3 = FUN_100c32e0(0,0,0,0,(byte_conflict *)
                                     "Client hook re-allocation failure at file %hs line %d.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      piVar2 = (int *)0x0;
    }
    else if (param_2 < 0xffffffdc) {
      if ((((param_3 != 1) && ((param_3 & 0xffff) != 4)) && ((param_3 & 0xffff) != 2)) &&
         (iVar5 = FUN_100c32e0(1,0,0,0,"%s"), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      BVar6 = FUN_100bfe20((int)param_1);
      if ((BVar6 == 0) &&
         (iVar5 = FUN_100c32e0(2,0x10278f08,0x26e,0,
                               (byte_conflict *)"_CrtIsValidHeapPointer(pUserData)"), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar4 = (int *)((int)param_1 + -0x20);
      bVar7 = *(int *)((int)param_1 + -0xc) == 3;
      if (bVar7) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar5 = FUN_100c32e0(2,0x10278f08,0x278,0,
                                    (byte_conflict *)
                                    "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ"
                                   ), iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        if (((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2) && ((param_3 & 0xffff) == 1)) {
          param_3 = 2;
        }
        if (((*(uint *)((int)param_1 + -0xc) & 0xffff) != (param_3 & 0xffff)) &&
           (iVar5 = FUN_100c32e0(2,0x10278f08,0x27f,0,
                                 (byte_conflict *)
                                 "_BLOCK_TYPE(pOldBlock->nBlockUse)==_BLOCK_TYPE(nBlockUse)"),
           iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      if (param_6 == 0) {
        local_10 = (int *)FUN_100c9620((undefined *)piVar4,param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_10 = (int *)FUN_100c9830(piVar4,param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      DAT_1028b3e8 = DAT_1028b3e8 + 1;
      if (!bVar7) {
        DAT_10321c84 = (DAT_10321c84 - local_10[4]) + param_2;
        DAT_10321c8c = (DAT_10321c8c - local_10[4]) + param_2;
        if (DAT_10321c90 < DAT_10321c8c) {
          DAT_10321c90 = DAT_10321c8c;
        }
      }
      piVar2 = local_10 + 8;
      if ((uint)local_10[4] < param_2) {
        _memset((void *)((int)piVar2 + local_10[4]),(uint)DAT_1028b3f2,param_2 - local_10[4]);
      }
      _memset((void *)((int)piVar2 + param_2),(uint)DAT_1028b3f0,4);
      if (!bVar7) {
        local_10[2] = param_4;
        local_10[3] = param_5;
        local_10[6] = iVar3;
      }
      local_10[4] = param_2;
      if (((param_6 == 0) && (local_10 != piVar4)) &&
         (iVar3 = FUN_100c32e0(2,0x10278f08,0x2b5,0,
                               (byte_conflict *)"fRealloc || (!fRealloc && pNewBlock == pOldBlock)")
         , iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      if ((local_10 != piVar4) && (!bVar7)) {
        if (*local_10 == 0) {
          if ((DAT_10321c80 != piVar4) &&
             (iVar3 = FUN_100c32e0(2,0x10278f08,0x2c4,0,(byte_conflict *)"_pLastBlock == pOldBlock")
             , iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10321c80 = (int *)local_10[1];
        }
        else {
          *(int *)(*local_10 + 4) = local_10[1];
        }
        if (local_10[1] == 0) {
          if ((DAT_10321c88 != piVar4) &&
             (iVar3 = FUN_100c32e0(2,0x10278f08,0x2cf,0,(byte_conflict *)"_pFirstBlock == pOldBlock"
                                  ), iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10321c88 = (int *)*local_10;
        }
        else {
          *(int *)local_10[1] = *local_10;
        }
        if (DAT_10321c88 == (int *)0x0) {
          DAT_10321c80 = local_10;
        }
        else {
          DAT_10321c88[1] = (int)local_10;
        }
        *local_10 = (int)DAT_10321c88;
        local_10[1] = 0;
        DAT_10321c88 = local_10;
      }
    }
    else {
      iVar3 = FUN_100c32e0(1,0,0,0,(byte_conflict *)"Allocation too large or negative: %u bytes.\n")
      ;
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    __free_dbg(param_1,param_3);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}

/* 100bf113  FUN_100bf113  (11 bytes)
 * undefined FUN_100bf113(void)
 * called by: FID_conflict:__realloc_dbg
 */
void FUN_100bf113(void)

{
  FUN_100c4300(9);
  return;
}

/* 100bf11e  FUN_100bf11e  (20 bytes)
 * undefined4 FUN_100bf11e(void)
 * called by: FID_conflict:__realloc_dbg
 */
undefined4 FUN_100bf11e(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

/* 100bf140  FUN_100bf140  (19 bytes)
 * undefined FUN_100bf140(void * param_1)
 * called by: FUN_10045d50, FUN_10046320, FUN_1004ff20, FUN_100547d0, FUN_100b4de0
 */
void __cdecl FUN_100bf140(void *param_1)

{
  __free_dbg(param_1,1);
  return;
}

/* 100bf160  FUN_100bf160  (19 bytes)
 * undefined FUN_100bf160(void * param_1)
 */
void __cdecl FUN_100bf160(void *param_1)

{
  FUN_100bf1f0(param_1,1);
  return;
}

/* 100bf1d2  FUN_100bf1d2  (11 bytes)
 * undefined FUN_100bf1d2(void)
 * called by: __free_dbg
 */
void FUN_100bf1d2(void)

{
  FUN_100c4300(9);
  return;
}

/* 100bf1dd  FUN_100bf1dd  (17 bytes)
 * undefined FUN_100bf1dd(void)
 * called by: __free_dbg
 */
void FUN_100bf1dd(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100bf1f0  FUN_100bf1f0  (1004 bytes)
 * undefined FUN_100bf1f0(void * param_1, int param_2)
 * called by: FUN_100bf160, __free_dbg
 */
void __cdecl FUN_100bf1f0(void *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int *_Dst;
  
  if ((((DAT_1028b3e4 & 4) != 0) && (iVar2 = FUN_100bf940(), iVar2 == 0)) &&
     (iVar2 = FUN_100c32e0(2,0x10278f08,0x402,0,(byte_conflict *)"_CrtCheckMemory()"), iVar2 == 1))
  {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (void *)0x0) {
    iVar2 = (*(code *)PTR_FUN_1028bd20)(3,param_1,0,param_2,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_100c32e0(0,0,0,0,"%s");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      BVar3 = FUN_100bfe20((int)param_1);
      if ((BVar3 == 0) &&
         (iVar2 = FUN_100c32e0(2,0x10278f08,0x414,0,
                               (byte_conflict *)"_CrtIsValidHeapPointer(pUserData)"), iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = (int *)((int)param_1 + -0x20);
      if ((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
         && (((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2 &&
             ((*(int *)((int)param_1 + -0xc) != 3 &&
              (iVar2 = FUN_100c32e0(2,0x10278f08,0x41a,0,
                                    (byte_conflict *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
              iVar2 == 1)))))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((DAT_1028b3e4 & 4) == 0) {
        iVar2 = FUN_100bf8b0((char *)((int)param_1 + -4),DAT_1028b3f0,4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_100c32e0(1,0,0,0,(byte_conflict *)
                                         "DAMAGE: before %hs block (#%d) at 0x%08X.\n"), iVar2 == 1)
           ) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar2 = FUN_100bf8b0((char *)((int)param_1 + *(int *)((int)param_1 + -0x10)),DAT_1028b3f0,4)
        ;
        if ((iVar2 == 0) &&
           (iVar2 = FUN_100c32e0(1,0,0,0,(byte_conflict *)
                                         "DAMAGE: after %hs block (#%d) at 0x%08X.\n"), iVar2 == 1))
        {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((int)param_1 + -0xc) == 3) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar2 = FUN_100c32e0(2,0x10278f08,0x42f,0,
                                    (byte_conflict *)
                                    "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ"),
              iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _memset(_Dst,(uint)DAT_1028b3f1,*(int *)((int)param_1 + -0x10) + 0x24);
        FUN_100c4340((undefined *)_Dst);
      }
      else {
        if ((*(int *)((int)param_1 + -0xc) == 2) && (param_2 == 1)) {
          param_2 = 2;
        }
        if ((*(int *)((int)param_1 + -0xc) != param_2) &&
           (iVar2 = FUN_100c32e0(2,0x10278f08,0x43c,0,
                                 (byte_conflict *)"pHead->nBlockUse == nBlockUse"), iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_10321c8c = DAT_10321c8c - *(int *)((int)param_1 + -0x10);
        if ((DAT_1028b3e4 & 2) == 0) {
          if (*_Dst == 0) {
            if ((DAT_10321c80 != _Dst) &&
               (iVar2 = FUN_100c32e0(2,0x10278f08,1099,0,(byte_conflict *)"_pLastBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10321c80 = *(int **)((int)param_1 + -0x1c);
          }
          else {
            *(undefined4 *)(*_Dst + 4) = *(undefined4 *)((int)param_1 + -0x1c);
          }
          if (*(int *)((int)param_1 + -0x1c) == 0) {
            if ((DAT_10321c88 != _Dst) &&
               (iVar2 = FUN_100c32e0(2,0x10278f08,0x455,0,(byte_conflict *)"_pFirstBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10321c88 = (int *)*_Dst;
          }
          else {
            **(int **)((int)param_1 + -0x1c) = *_Dst;
          }
          _memset(_Dst,(uint)DAT_1028b3f1,*(int *)((int)param_1 + -0x10) + 0x24);
          FUN_100c4340((undefined *)_Dst);
        }
        else {
          *(undefined4 *)((int)param_1 + -0xc) = 0;
          _memset(param_1,(uint)DAT_1028b3f1,*(size_t *)((int)param_1 + -0x10));
        }
      }
    }
  }
  return;
}

