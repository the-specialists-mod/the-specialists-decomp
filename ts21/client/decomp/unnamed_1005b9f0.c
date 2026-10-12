/* client.dll - unnamed_1005b9f0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005b9f0  FUN_1005b9f0  (398 bytes)
 * undefined FUN_1005b9f0(void)
 */
void FUN_1005b9f0(void)

{
  float10 fVar1;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14 [3];
  int local_8;
  
  local_18 = *(float *)(DAT_102eb924 + 0x45468);
  local_1c = *(float *)(DAT_102eb924 + 0x4546c);
  *(undefined4 *)(DAT_102eb924 + 0x1c) = 0;
  *(undefined4 *)(DAT_102eb924 + 0x28) = 0;
  thunk_FUN_10058070((float *)(DAT_102eb924 + 0x14));
  thunk_FUN_10058070((float *)(DAT_102eb924 + 0x20));
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    local_14[local_8] =
         local_1c * *(float *)(DAT_102eb924 + 0x20 + local_8 * 4) +
         local_18 * *(float *)(DAT_102eb924 + 0x14 + local_8 * 4);
  }
  local_14[2] = 0.0;
  local_28 = local_14[0];
  local_24 = local_14[1];
  local_20 = 0;
  fVar1 = thunk_FUN_10058070(&local_28);
  local_2c = (float)fVar1;
  if (*(float *)(DAT_102eb924 + 500) < local_2c) {
    thunk_FUN_10058180(local_14,*(float *)(DAT_102eb924 + 500) / local_2c,local_14);
    local_2c = *(float *)(DAT_102eb924 + 500);
  }
  thunk_FUN_1005b380(&local_28,local_2c,*(float *)(*(int *)(DAT_102eb924 + 0x4f4f0) + 0x14));
  *(float *)(DAT_102eb924 + 0x5c) =
       *(float *)(DAT_102eb924 + 0x5c) + *(float *)(DAT_102eb924 + 0x74);
  *(float *)(DAT_102eb924 + 0x60) =
       *(float *)(DAT_102eb924 + 0x60) + *(float *)(DAT_102eb924 + 0x78);
  *(float *)(DAT_102eb924 + 100) = *(float *)(DAT_102eb924 + 100) + *(float *)(DAT_102eb924 + 0x7c);
  thunk_FUN_1005a700();
  return;
}

/* 1005bbf0  FUN_1005bbf0  (35 bytes)
 * bool FUN_1005bbf0(void)
 */
bool FUN_1005bbf0(void)

{
  return 1 < *(int *)(DAT_102eb924 + 0xe4);
}

/* 1005bc20  FUN_1005bc20  (620 bytes)
 * bool FUN_1005bc20(void)
 */
bool FUN_1005bc20(void)

{
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = (*(float *)(DAT_102eb924 + 0x4f4f4 + *(int *)(DAT_102eb924 + 0xbc) * 0xc) +
             *(float *)(DAT_102eb924 + 0x4f524 + *(int *)(DAT_102eb924 + 0xbc) * 0xc)) * 0.5 +
             *(float *)(DAT_102eb924 + 0x38);
  local_c = (*(float *)(DAT_102eb924 + 0x4f4f8 + *(int *)(DAT_102eb924 + 0xbc) * 0xc) +
            *(float *)(DAT_102eb924 + 0x4f528 + *(int *)(DAT_102eb924 + 0xbc) * 0xc)) * 0.5 +
            *(float *)(DAT_102eb924 + 0x3c);
  local_8 = *(float *)(DAT_102eb924 + 0x40) +
            *(float *)(DAT_102eb924 + 0x4f4fc + *(int *)(DAT_102eb924 + 0xbc) * 0xc) + 1.0;
  *(undefined4 *)(DAT_102eb924 + 0xe4) = 0;
  *(undefined4 *)(DAT_102eb924 + 0xe8) = 0xffffffff;
  local_14 = (**(code **)(DAT_102eb924 + 0x4f574))(&local_10,&local_18);
  if ((local_14 < -2) && (-0xf < local_14)) {
    *(int *)(DAT_102eb924 + 0xe8) = local_14;
    *(undefined4 *)(DAT_102eb924 + 0xe4) = 1;
    local_8 = (*(float *)(DAT_102eb924 + 0x4f4fc + *(int *)(DAT_102eb924 + 0xbc) * 0xc) +
              *(float *)(DAT_102eb924 + 0x4f52c + *(int *)(DAT_102eb924 + 0xbc) * 0xc)) * 0.5 +
              *(float *)(DAT_102eb924 + 0x40);
    local_14 = (**(code **)(DAT_102eb924 + 0x4f574))(&local_10,0);
    if ((local_14 < -2) && (-0xf < local_14)) {
      *(undefined4 *)(DAT_102eb924 + 0xe4) = 2;
      local_8 = *(float *)(DAT_102eb924 + 0x40) + *(float *)(DAT_102eb924 + 0x88);
      local_14 = (**(code **)(DAT_102eb924 + 0x4f574))(&local_10,0);
      if ((local_14 < -2) && (-0xf < local_14)) {
        *(undefined4 *)(DAT_102eb924 + 0xe4) = 3;
      }
    }
    if ((local_18 < -8) && (-0xf < local_18)) {
      thunk_FUN_10057db0((float *)(DAT_102eb924 + 0x74),(float)*(int *)(DAT_102eb924 + 0xe4) * 50.0,
                         (float *)(&DAT_1028a2e8 + (-9 - local_18) * 0xc),
                         (float *)(DAT_102eb924 + 0x74));
    }
  }
  return 1 < *(int *)(DAT_102eb924 + 0xe4);
}

/* 1005bf30  FUN_1005bf30  (330 bytes)
 * undefined FUN_1005bf30(void)
 */
void FUN_1005bf30(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_12c [12];
  undefined4 uStack_fc;
  undefined1 *puStack_f8;
  int iStack_f4;
  undefined4 *puStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 local_98 [68];
  int local_54 [5];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_2c;
  int local_24;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  iStack_e8 = 0x1005bf41;
  thunk_FUN_1005bc20();
  local_10 = *(undefined4 *)(DAT_102eb924 + 0x38);
  local_c = *(undefined4 *)(DAT_102eb924 + 0x3c);
  local_8 = *(float *)(DAT_102eb924 + 0x40) - 2.0;
  if (*(float *)(DAT_102eb924 + 100) <= 180.0) {
    iStack_e8 = 0xffffffff;
    uStack_ec = 0;
    puStack_f0 = &local_10;
    iStack_f4 = DAT_102eb924 + 0x38;
    puStack_f8 = local_98;
    uStack_fc = 0x1005bfb7;
    piVar1 = (int *)(**(code **)(DAT_102eb924 + 0x4f580))();
    piVar3 = local_54;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    if (0.7 <= local_2c) {
      *(int *)(DAT_102eb924 + 0xe0) = local_24;
    }
    else {
      *(undefined4 *)(DAT_102eb924 + 0xe0) = 0xffffffff;
    }
    if ((((*(int *)(DAT_102eb924 + 0xe0) != -1) &&
         (*(undefined4 *)(DAT_102eb924 + 0xcc) = 0, *(int *)(DAT_102eb924 + 0xe4) < 2)) &&
        (local_54[1] == 0)) && (local_54[0] == 0)) {
      *(undefined4 *)(DAT_102eb924 + 0x38) = local_40;
      *(undefined4 *)(DAT_102eb924 + 0x3c) = local_3c;
      *(undefined4 *)(DAT_102eb924 + 0x40) = local_38;
    }
    if (0 < local_24) {
      iStack_e8 = DAT_102eb924 + 0x5c;
      piVar1 = local_54;
      piVar3 = aiStack_12c;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = *piVar1;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 1;
      }
      thunk_FUN_1005a120();
    }
  }
  else {
    *(undefined4 *)(DAT_102eb924 + 0xe0) = 0xffffffff;
  }
  return;
}

/* 1005c0d0  FUN_1005c0d0  (160 bytes)
 * int FUN_1005c0d0(int param_1, int param_2, undefined4 * param_3)
 */
int __cdecl FUN_1005c0d0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_102e9c10 + param_1 * 8 + param_2 * 4);
  *(int *)(&DAT_102e9c10 + param_1 * 8 + param_2 * 4) =
       *(int *)(&DAT_102e9c10 + param_1 * 8 + param_2 * 4) + 1;
  *param_3 = *(undefined4 *)(&DAT_102e9888 + (iVar1 % 0x36) * 0xc);
  param_3[1] = *(undefined4 *)(&DAT_102e988c + (iVar1 % 0x36) * 0xc);
  param_3[2] = *(undefined4 *)(&DAT_102e9890 + (iVar1 % 0x36) * 0xc);
  return iVar1 % 0x36;
}

/* 1005c1a0  FUN_1005c1a0  (36 bytes)
 * undefined FUN_1005c1a0(int param_1, int param_2)
 */
void __cdecl FUN_1005c1a0(int param_1,int param_2)

{
  *(undefined4 *)(&DAT_102e9c10 + param_1 * 8 + param_2 * 4) = 0;
  return;
}

/* 1005c1d0  FUN_1005c1d0  (1065 bytes)
 * undefined4 FUN_1005c1d0(void)
 */
undefined4 FUN_1005c1d0(void)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  float local_8c;
  float local_88;
  float local_84;
  int local_80;
  undefined1 local_7c [68];
  int local_38;
  float local_34;
  uint local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_2c = (*(code *)DAT_102eb924[0x13d57])(DAT_102eb924 + 0xe,local_7c);
  if (local_2c == -1) {
    thunk_FUN_1005c1a0(*DAT_102eb924,DAT_102eb924[1]);
    uVar1 = 0;
  }
  else {
    local_10 = (float)DAT_102eb924[0xe];
    local_c = (float)DAT_102eb924[0xf];
    local_8 = (float)DAT_102eb924[0x10];
    if ((DAT_102eb924[1] == 0) && ((local_2c == 0 || (DAT_102eb924[local_2c * 0x38 + 0xa0] != 0))))
    {
      local_80 = 0;
      thunk_FUN_1005c1a0(*DAT_102eb924,DAT_102eb924[1]);
      do {
        local_38 = thunk_FUN_1005c0d0(*DAT_102eb924,DAT_102eb924[1],&local_1c);
        local_28 = local_10 + local_1c;
        local_24 = local_c + local_18;
        local_20 = local_8 + local_14;
        iVar2 = (*(code *)DAT_102eb924[0x13d57])(&local_28,local_7c);
        if (iVar2 == -1) {
          thunk_FUN_1005c1a0(*DAT_102eb924,DAT_102eb924[1]);
          DAT_102eb924[0xe] = (int)local_28;
          DAT_102eb924[0xf] = (int)local_24;
          DAT_102eb924[0x10] = (int)local_20;
          return 0;
        }
        local_80 = local_80 + 1;
      } while (local_80 < 0x36);
    }
    local_30 = (uint)(DAT_102eb924[1] == 0);
    fVar3 = (float10)(*(code *)DAT_102eb924[0x13d5b])();
    local_34 = (float)fVar3;
    if (local_34 - 0.05 < *(float *)(&DAT_102e9b10 + *DAT_102eb924 * 8 + local_30 * 4) ==
        (local_34 - 0.05 == *(float *)(&DAT_102e9b10 + *DAT_102eb924 * 8 + local_30 * 4))) {
      *(float *)(&DAT_102e9b10 + *DAT_102eb924 * 8 + local_30 * 4) = local_34;
      (*(code *)DAT_102eb924[0x13d5c])(local_2c,local_7c);
      local_38 = thunk_FUN_1005c0d0(*DAT_102eb924,DAT_102eb924[1],&local_1c);
      local_28 = local_10 + local_1c;
      local_24 = local_c + local_18;
      local_20 = local_8 + local_14;
      local_2c = (*(code *)DAT_102eb924[0x13d57])(&local_28,0);
      if (local_2c == -1) {
        thunk_FUN_1005c1a0(*DAT_102eb924,DAT_102eb924[1]);
        if (0x1a < local_38) {
          DAT_102eb924[0xe] = (int)local_28;
          DAT_102eb924[0xf] = (int)local_24;
          DAT_102eb924[0x10] = (int)local_20;
        }
        uVar1 = 0;
      }
      else {
        if (((*(ushort *)((int)DAT_102eb924 + 0x45476) & 7) != 0) &&
           (DAT_102eb924[local_2c * 0x38 + 0x9c] != 0)) {
          for (local_8c = 0.0; local_8c < 72.0 != (local_8c == 72.0); local_8c = local_8c + 18.0) {
            for (local_84 = -8.0; local_84 < 8.0 != (local_84 == 8.0); local_84 = local_84 + 8.0) {
              for (local_88 = -8.0; local_88 < 8.0 != (local_88 == 8.0); local_88 = local_88 + 8.0)
              {
                local_28 = local_10 + local_84;
                local_24 = local_c + local_88;
                local_20 = local_8 + local_8c;
                iVar2 = (*(code *)DAT_102eb924[0x13d57])(&local_28,0);
                if (iVar2 == -1) {
                  DAT_102eb924[0xe] = (int)local_28;
                  DAT_102eb924[0xf] = (int)local_24;
                  DAT_102eb924[0x10] = (int)local_20;
                  return 0;
                }
              }
            }
          }
        }
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

/* 1005c710  FUN_1005c710  (216 bytes)
 * undefined FUN_1005c710(void * param_1, int param_2, float * param_3, float * param_4)
 */
void __cdecl FUN_1005c710(void *param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [3];
  
  iVar1 = DAT_102eb924 + 0x250 + param_2 * 0xe0;
  thunk_FUN_100572b0(param_1,param_1,local_10,(float *)0x0,(float *)0x0);
  local_28 = *(float *)(iVar1 + 0x24);
  local_24 = *(float *)(iVar1 + 0x28);
  local_20 = *(float *)(iVar1 + 0x2c) + 35.0;
  thunk_FUN_10057db0(param_3,90.0,local_10,&local_1c);
  local_1c = local_28 - local_1c;
  local_18 = local_24 - local_18;
  local_14 = local_20 - local_14;
  iVar1 = (**(code **)(DAT_102eb924 + 0x4f584))(&local_28,&local_1c,0,2,param_2);
  thunk_FUN_10057db0((float *)(iVar1 + 0x14),4.0,(float *)(iVar1 + 0x20),param_4);
  return;
}

/* 1005c820  FUN_1005c820  (2985 bytes)
 * undefined FUN_1005c820(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1005c820(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float local_10c;
  int local_c8;
  int local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c [4];
  float local_8c;
  float local_58 [3];
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_34 [3];
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (*(int *)(DAT_102eb924 + 0x4f5b0) != 0) {
    DAT_10321004 = 1;
  }
  if ((*(int *)(DAT_102eb924 + 0x1fc) == 3) || (*(int *)(DAT_102eb924 + 0x200) == 0)) {
    if (DAT_10321fd4 == 0) {
      fVar4 = thunk_FUN_10057ff0(param_1,(void *)(DAT_102eb924 + 0x5c));
      local_8 = (float)fVar4;
      if (1.0 <= local_8) {
        local_10 = *(float *)(*(int *)(DAT_102eb924 + 0x4f4f0) + 0x1c) * 1.5;
        local_10c = local_8;
        if (local_8 < *(float *)(*(int *)(DAT_102eb924 + 0x4f4f0) + 4)) {
          local_10c = *(float *)(*(int *)(DAT_102eb924 + 0x4f4f0) + 4);
        }
        local_14 = local_10c;
        local_c = local_10c * local_10 * *(float *)(DAT_102eb924 + 0x10) + 0.0;
        local_18 = local_8 - local_c;
        if (local_18 < 0.0) {
          local_18 = 0.0;
        }
        local_18 = local_18 / local_8;
        thunk_FUN_10058180((float *)(DAT_102eb924 + 0x5c),local_18,(float *)(DAT_102eb924 + 0x5c));
      }
      else {
        *(float *)(DAT_102eb924 + 0x5c) = DAT_102e9874;
        *(undefined4 *)(DAT_102eb924 + 0x60) = DAT_102e9878;
        *(undefined4 *)(DAT_102eb924 + 100) = DAT_102e987c;
      }
      local_38 = *(float *)(DAT_102eb924 + 0x45468);
      local_48[3] = *(float *)(DAT_102eb924 + 0x4546c);
      thunk_FUN_10058070((float *)(DAT_102eb924 + 0x14));
      thunk_FUN_10058070((float *)(DAT_102eb924 + 0x20));
      for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
        local_34[local_28] =
             local_48[3] * *(float *)(DAT_102eb924 + 0x20 + local_28 * 4) +
             local_38 * *(float *)(DAT_102eb924 + 0x14 + local_28 * 4);
      }
      local_48[2] = local_34[2] + *(float *)(DAT_102eb924 + 0x45470);
      local_48[0] = local_34[0];
      local_48[1] = local_34[1];
      local_34[2] = local_48[2];
      fVar4 = thunk_FUN_10058070(local_48);
      local_4c = (float)fVar4;
      if (*(float *)(*(int *)(DAT_102eb924 + 0x4f4f0) + 0xc) < local_4c) {
        thunk_FUN_10058180(local_34,*(float *)(*(int *)(DAT_102eb924 + 0x4f4f0) + 0xc) / local_4c,
                           local_34);
        local_4c = *(float *)(*(int *)(DAT_102eb924 + 0x4f4f0) + 0xc);
      }
      local_1c = local_48[2] * *(float *)(DAT_102eb924 + 100) +
                 local_48[1] * *(float *)(DAT_102eb924 + 0x60) +
                 local_48[0] * *(float *)(DAT_102eb924 + 0x5c);
      local_20 = local_4c - local_1c;
      if (local_20 < 0.0 == (local_20 == 0.0)) {
        local_24 = *(float *)(*(int *)(DAT_102eb924 + 0x4f4f0) + 0x10) *
                   *(float *)(DAT_102eb924 + 0x10) * local_4c;
        if (local_20 < local_24) {
          local_24 = local_20;
        }
        for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
          *(float *)(DAT_102eb924 + 0x5c + local_28 * 4) =
               local_24 * local_48[local_28] + *(float *)(DAT_102eb924 + 0x5c + local_28 * 4);
        }
        thunk_FUN_10057db0((float *)(DAT_102eb924 + 0x38),*(float *)(DAT_102eb924 + 0x10),
                           (float *)(DAT_102eb924 + 0x5c),(float *)(DAT_102eb924 + 0x38));
      }
    }
    else {
      *(undefined4 *)(DAT_102eb924 + 0x38) = DAT_10321ff0;
      *(undefined4 *)(DAT_102eb924 + 0x3c) = DAT_10321ff4;
      *(undefined4 *)(DAT_102eb924 + 0x40) = DAT_10321ff8;
      *(undefined4 *)(DAT_102eb924 + 0x44) = DAT_10321fe0;
      *(undefined4 *)(DAT_102eb924 + 0x48) = DAT_10321fe4;
      *(undefined4 *)(DAT_102eb924 + 0x4c) = DAT_10321fe8;
      *(float *)(DAT_102eb924 + 0x5c) = DAT_102e9874;
      *(undefined4 *)(DAT_102eb924 + 0x60) = DAT_102e9878;
      *(undefined4 *)(DAT_102eb924 + 100) = DAT_102e987c;
      DAT_10321fd4 = 0;
    }
  }
  else {
    local_c8 = 0;
    for (local_c4 = 0;
        (local_c4 < *(int *)(DAT_102eb924 + 0x24c) &&
        (*(int *)(DAT_102eb924 + 0x2a0 + local_c4 * 0xe0) != *(int *)(DAT_102eb924 + 0x200)));
        local_c4 = local_c4 + 1) {
    }
    if (local_c4 == *(int *)(DAT_102eb924 + 0x24c)) {
      if (*(int *)(DAT_102eb924 + 0x4f5b0) != 0) {
        *(undefined4 *)(DAT_102eb924 + 0x38) = DAT_10320f68;
        *(undefined4 *)(DAT_102eb924 + 0x3c) = DAT_10320f6c;
        *(undefined4 *)(DAT_102eb924 + 0x40) = DAT_10320f70;
        *(float *)(DAT_102eb924 + 0x44) = DAT_10320730;
        *(float *)(DAT_102eb924 + 0x48) = DAT_10320734;
        *(float *)(DAT_102eb924 + 0x4c) = DAT_10320738;
        *(float *)(DAT_102eb924 + 0x5c) = DAT_102e9874;
        *(undefined4 *)(DAT_102eb924 + 0x60) = DAT_102e9878;
        *(undefined4 *)(DAT_102eb924 + 100) = DAT_102e987c;
        DAT_10320fe0 = 1;
        DAT_10321010 = 1;
      }
    }
    else {
      local_c0 = DAT_102e9874;
      local_bc = DAT_102e9878;
      local_b8 = DAT_102e987c;
      if ((*(int *)(DAT_102eb924 + 0x1fc) == 4) && (*(int *)(DAT_102eb924 + 0x204) != 0)) {
        for (local_c8 = 0;
            (local_c8 < *(int *)(DAT_102eb924 + 0x24c) &&
            (*(int *)(DAT_102eb924 + 0x2a0 + local_c8 * 0xe0) != *(int *)(DAT_102eb924 + 0x204)));
            local_c8 = local_c8 + 1) {
        }
        if (local_c8 == *(int *)(DAT_102eb924 + 0x24c)) {
          local_c8 = -1;
        }
      }
      if (*(int *)(DAT_102eb924 + 0x1fc) == 1) {
        local_a4 = *(float *)(DAT_102eb924 + 0x2a8 + local_c4 * 0xe0);
        local_a0 = *(float *)(DAT_102eb924 + 0x2ac + local_c4 * 0xe0);
        local_a8 = -*(float *)(DAT_102eb924 + 0x2a4 + local_c4 * 0xe0) + 10.0;
        if (*(int *)(DAT_102eb924 + 0x4f5b0) != 0) {
          DAT_10321004 = DAT_10321004 | 6;
        }
      }
      else if (*(int *)(DAT_102eb924 + 0x1fc) == 5) {
        local_a4 = *(float *)(DAT_102eb924 + 0x2a8 + local_c4 * 0xe0);
        local_a0 = *(float *)(DAT_102eb924 + 0x2ac + local_c4 * 0xe0);
        local_a8 = *(float *)(DAT_102eb924 + 0x2a4 + local_c4 * 0xe0) * -2.0;
        if (*(int *)(DAT_102eb924 + 0x4f5b0) != 0) {
          DAT_10321004 = DAT_10321004 | 0xe;
        }
      }
      else if (*(int *)(DAT_102eb924 + 0x1fc) == 4) {
        if (local_c8 < 1) {
          if (local_c8 == -1) {
            local_a8 = DAT_10320730;
            local_a4 = DAT_10320734;
            local_a0 = DAT_10320738;
          }
          else {
            local_a8 = *(float *)(DAT_102eb924 + 0x2a4 + local_c4 * 0xe0);
            local_a0 = *(float *)(DAT_102eb924 + 0x2ac + local_c4 * 0xe0);
            local_a4 = *(float *)(DAT_102eb924 + 0x2a8 + local_c4 * 0xe0) * -0.5;
          }
        }
        else {
          local_a8 = *(float *)(DAT_102eb924 + 0x274 + local_c8 * 0xe0) -
                     *(float *)(DAT_102eb924 + 0x274 + local_c4 * 0xe0);
          local_a4 = *(float *)(DAT_102eb924 + 0x278 + local_c8 * 0xe0) -
                     *(float *)(DAT_102eb924 + 0x278 + local_c4 * 0xe0);
          local_a0 = *(float *)(DAT_102eb924 + 0x27c + local_c8 * 0xe0) -
                     *(float *)(DAT_102eb924 + 0x27c + local_c4 * 0xe0);
          thunk_FUN_10058320(&local_a8,&local_a8);
          if ((DAT_10321fd8 & 0x20) == 0) {
            local_a8 = -local_a8 + 12.5;
          }
          else {
            local_a8 = -local_a8 - 12.5;
          }
          if ((DAT_10321fd8 & 0x10) == 0) {
            local_a4 = local_a4 - 22.5;
          }
          else {
            local_a4 = local_a4 + 22.5;
          }
          thunk_FUN_1005c710(&local_a8,local_c4,&local_c0,local_58);
          puVar1 = (undefined4 *)
                   (**(code **)(DAT_102eb924 + 0x4f584))
                             (local_58,DAT_102eb924 + 0x274 + local_c8 * 0xe0,1,2,0xffffffff);
          puVar3 = local_9c;
          for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar1;
            puVar1 = puVar1 + 1;
            puVar3 = puVar3 + 1;
          }
          if (local_8c != 1.0) {
            if ((DAT_10321fd8 & 0x10) == 0) {
              local_a4 = local_a4 + 45.0;
            }
            else {
              local_a4 = local_a4 - 45.0;
            }
          }
        }
        if (*(int *)(DAT_102eb924 + 0x4f5b0) != 0) {
          DAT_10321004 = DAT_10321004 | 6;
          thunk_FUN_10057ab0(0x102e9d10,(int)&local_a8,(int)&local_a8,0.1);
          _DAT_102e9d10 = local_a8;
          _DAT_102e9d14 = local_a4;
          _DAT_102e9d18 = local_a0;
        }
      }
      else {
        local_a8 = *(float *)(DAT_102eb924 + 0x44);
        local_a4 = *(float *)(DAT_102eb924 + 0x48);
        local_a0 = *(float *)(DAT_102eb924 + 0x4c);
      }
      if (*(int *)(DAT_102eb924 + 0x1fc) == 5) {
        local_b4 = *(float *)(DAT_102eb924 + 0x274 + local_c4 * 0xe0);
        local_b0 = *(undefined4 *)(DAT_102eb924 + 0x278 + local_c4 * 0xe0);
        local_ac = *(undefined4 *)(DAT_102eb924 + 0x27c + local_c4 * 0xe0);
      }
      else {
        thunk_FUN_1005c710(&local_a8,local_c4,&local_c0,&local_b4);
      }
      *(float *)(DAT_102eb924 + 0x38) = local_b4;
      *(undefined4 *)(DAT_102eb924 + 0x3c) = local_b0;
      *(undefined4 *)(DAT_102eb924 + 0x40) = local_ac;
      *(float *)(DAT_102eb924 + 0x44) = local_a8;
      *(float *)(DAT_102eb924 + 0x48) = local_a4;
      *(float *)(DAT_102eb924 + 0x4c) = local_a0;
      *(float *)(DAT_102eb924 + 0x5c) = DAT_102e9874;
      *(undefined4 *)(DAT_102eb924 + 0x60) = DAT_102e9878;
      *(undefined4 *)(DAT_102eb924 + 100) = DAT_102e987c;
      if (*(int *)(DAT_102eb924 + 0x4f5b0) != 0) {
        DAT_10320730 = *(float *)(DAT_102eb924 + 0x44);
        DAT_10320734 = *(float *)(DAT_102eb924 + 0x48);
        DAT_10320738 = *(float *)(DAT_102eb924 + 0x4c);
        DAT_10320fe0 = 1;
        DAT_10320f68 = *(undefined4 *)(DAT_102eb924 + 0x38);
        DAT_10320f6c = *(undefined4 *)(DAT_102eb924 + 0x3c);
        DAT_10320f70 = *(undefined4 *)(DAT_102eb924 + 0x40);
        DAT_10321010 = 1;
      }
    }
  }
  return;
}

/* 1005d6c0  FUN_1005d6c0  (57 bytes)
 * float10 FUN_1005d6c0(float param_1, float param_2)
 */
float10 __cdecl FUN_1005d6c0(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 * param_1;
  return (float10)3.0 * (float10)(fVar1 * fVar1) -
         (float10)2.0 * (float10)(fVar1 * fVar1) * (float10)fVar1;
}

/* 1005d710  FUN_1005d710  (205 bytes)
 * undefined FUN_1005d710(int param_1)
 */
void __cdecl FUN_1005d710(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_c;
  
  iVar4 = (**(code **)(DAT_102eb924 + 0x4f55c))(DAT_102eb924 + 0x38,0);
  if (iVar4 != -1) {
    uVar1 = *(undefined4 *)(DAT_102eb924 + 0x38);
    uVar2 = *(undefined4 *)(DAT_102eb924 + 0x3c);
    uVar3 = *(undefined4 *)(DAT_102eb924 + 0x40);
    for (local_c = 0; local_c < 0x24; local_c = local_c + 1) {
      *(float *)(DAT_102eb924 + 0x40) = (float)param_1 + *(float *)(DAT_102eb924 + 0x40);
      iVar4 = (**(code **)(DAT_102eb924 + 0x4f55c))(DAT_102eb924 + 0x38,0);
      if (iVar4 == -1) {
        return;
      }
    }
    *(undefined4 *)(DAT_102eb924 + 0x38) = uVar1;
    *(undefined4 *)(DAT_102eb924 + 0x3c) = uVar2;
    *(undefined4 *)(DAT_102eb924 + 0x40) = uVar3;
  }
  return;
}

/* 1005d810  FUN_1005d810  (385 bytes)
 * undefined FUN_1005d810(void)
 */
void FUN_1005d810(void)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  undefined1 local_e0 [68];
  undefined1 local_9c [68];
  float local_58 [4];
  int local_48;
  int local_8;
  
  local_58[0] = *(float *)(DAT_102eb924 + 0x38);
  local_58[1] = (float)*(undefined4 *)(DAT_102eb924 + 0x3c);
  local_58[2] = (float)*(undefined4 *)(DAT_102eb924 + 0x40);
  if (*(int *)(DAT_102eb924 + 0xe0) != -1) {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      local_58[local_8] =
           (*(float *)(DAT_102eb924 + 0x4f500 + local_8 * 4) -
           *(float *)(DAT_102eb924 + 0x4f4f4 + local_8 * 4)) + local_58[local_8];
    }
  }
  pfVar1 = (float *)(**(code **)(DAT_102eb924 + 0x4f580))(local_9c,local_58,local_58,0,0xffffffff);
  pfVar3 = local_58 + 3;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar3 = pfVar3 + 1;
  }
  if (local_48 == 0) {
    *(undefined4 *)(DAT_102eb924 + 0xbc) = 0;
    pfVar1 = (float *)(**(code **)(DAT_102eb924 + 0x4f580))(local_e0,local_58,local_58,0,0xffffffff)
    ;
    pfVar3 = local_58 + 3;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar3 = pfVar3 + 1;
    }
    if (local_48 == 0) {
      *(uint *)(DAT_102eb924 + 0xb8) = *(uint *)(DAT_102eb924 + 0xb8) & 0xffffbfff;
      *(undefined4 *)(DAT_102eb924 + 0x90) = 0;
      *(undefined4 *)(DAT_102eb924 + 0x88) = 0x41e00000;
      *(undefined4 *)(DAT_102eb924 + 0x8c) = 0;
      *(float *)(DAT_102eb924 + 0x38) = local_58[0];
      *(float *)(DAT_102eb924 + 0x3c) = local_58[1];
      *(float *)(DAT_102eb924 + 0x40) = local_58[2];
      thunk_FUN_1005bf30();
    }
    else {
      *(undefined4 *)(DAT_102eb924 + 0xbc) = 1;
    }
  }
  return;
}

/* 1005da00  FUN_1005da00  (1031 bytes)
 * undefined FUN_1005da00(int param_1)
 */
void __cdecl FUN_1005da00(int param_1)

{
  float fVar1;
  int iVar2;
  float local_cc [4];
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [3];
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [3];
  float local_84 [3];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  uint local_4c;
  undefined1 local_48 [16];
  float local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_10;
  float local_c;
  float local_8;
  
  if (*(int *)(DAT_102eb924 + 0xdc) != 8) {
    (**(code **)(DAT_102eb924 + 0x4f594))(*(undefined4 *)(param_1 + 0x30),&local_64,&local_70);
    local_10 = local_64 + local_70;
    local_c = local_60 + local_6c;
    local_8 = local_5c + local_68;
    thunk_FUN_10058180(&local_10,0.5,&local_10);
    *(undefined4 *)(DAT_102eb924 + 0xdc) = 5;
    local_58 = *(undefined4 *)(DAT_102eb924 + 0x38);
    local_54 = *(undefined4 *)(DAT_102eb924 + 0x3c);
    local_50 = (*(float *)(DAT_102eb924 + 0x4f4fc + *(int *)(DAT_102eb924 + 0xbc) * 0xc) - 1.0) +
               *(float *)(DAT_102eb924 + 0x40);
    iVar2 = (**(code **)(DAT_102eb924 + 0x4f574))(&local_58,0);
    local_4c = (uint)(iVar2 == -2);
    *(undefined4 *)(DAT_102eb924 + 0xc0) = 0;
    (**(code **)(DAT_102eb924 + 0x4f59c))(param_1,DAT_102eb924 + 0x38,&local_10,local_48);
    if (local_38 != 1.0) {
      local_74 = 0.0;
      local_78 = 0.0;
      thunk_FUN_100572b0(local_84,(float *)(DAT_102eb924 + 0x44),local_84,local_90,(float *)0x0);
      if ((*(ushort *)(DAT_102eb924 + 0x45476) & 0x10) != 0) {
        local_74 = local_74 - 200.0;
      }
      if ((*(ushort *)(DAT_102eb924 + 0x45476) & 8) != 0) {
        local_74 = local_74 + 200.0;
      }
      if ((*(ushort *)(DAT_102eb924 + 0x45476) & 0x200) != 0) {
        local_78 = local_78 - 200.0;
      }
      if ((*(ushort *)(DAT_102eb924 + 0x45476) & 0x400) != 0) {
        local_78 = local_78 + 200.0;
      }
      if ((*(ushort *)(DAT_102eb924 + 0x45476) & 2) == 0) {
        if ((local_74 == 0.0) && (local_78 == 0.0)) {
          *(undefined4 *)(DAT_102eb924 + 0x5c) = 0;
          *(undefined4 *)(DAT_102eb924 + 0x60) = 0;
          *(undefined4 *)(DAT_102eb924 + 100) = 0;
        }
        else {
          thunk_FUN_10058180(local_84,local_74,&local_9c);
          thunk_FUN_10057db0(&local_9c,local_78,local_90,&local_9c);
          local_cc[0] = 0.0;
          local_cc[1] = 0.0;
          local_cc[2] = 1.0;
          thunk_FUN_10057f60(local_cc,&local_28,local_a8);
          thunk_FUN_10058070(local_a8);
          fVar1 = local_94 * local_20 + local_98 * local_24 + local_9c * local_28;
          thunk_FUN_10058180(&local_28,fVar1,&local_b4);
          local_cc[3] = local_9c - local_b4;
          local_bc = local_98 - local_b0;
          local_b8 = local_94 - local_ac;
          thunk_FUN_10057f60(&local_28,local_a8,local_cc);
          thunk_FUN_10057db0(local_cc + 3,-fVar1,local_cc,(float *)(DAT_102eb924 + 0x5c));
          if ((local_4c != 0) && (0.0 < fVar1)) {
            thunk_FUN_10057db0((float *)(DAT_102eb924 + 0x5c),200.0,&local_28,
                               (float *)(DAT_102eb924 + 0x5c));
          }
        }
      }
      else {
        *(undefined4 *)(DAT_102eb924 + 0xdc) = 3;
        thunk_FUN_10058180(&local_28,270.0,(float *)(DAT_102eb924 + 0x5c));
      }
    }
  }
  return;
}

/* 1005df10  FUN_1005df10  (252 bytes)
 * int FUN_1005df10(void)
 */
int FUN_1005df10(void)

{
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  do {
    if (*(int *)(DAT_102eb924 + 0x20f50) <= local_8) {
      return 0;
    }
    local_c = DAT_102eb924 + 0x20f54 + local_8 * 0xe0;
    if (((*(int *)(local_c + 0x30) != 0) &&
        (iVar1 = (**(code **)(DAT_102eb924 + 0x4f590))(*(undefined4 *)(local_c + 0x30)), iVar1 == 0)
        ) && (*(int *)(local_c + 100) == -0x10)) {
      local_10 = (**(code **)(DAT_102eb924 + 0x4f598))(local_c,&local_20);
      local_14 = *(undefined4 *)(local_10 + 8);
      local_20 = *(float *)(DAT_102eb924 + 0x38) - local_20;
      local_1c = *(float *)(DAT_102eb924 + 0x3c) - local_1c;
      local_18 = *(float *)(DAT_102eb924 + 0x40) - local_18;
      iVar1 = (**(code **)(DAT_102eb924 + 0x4f57c))(local_10,local_14,&local_20);
      if (iVar1 != -1) {
        return local_c;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

/* 1005e050  FUN_1005e050  (241 bytes)
 * undefined FUN_1005e050(void)
 */
void FUN_1005e050(void)

{
  if (10000.0 < *(float *)(DAT_102eb924 + 0xcc)) {
    *(undefined4 *)(DAT_102eb924 + 0xcc) = 0x461c4000;
  }
  if (*(float *)(DAT_102eb924 + 0xcc) != 0.0) {
    *(float *)(DAT_102eb924 + 0xcc) =
         *(float *)(DAT_102eb924 + 0xcc) - (float)*(byte *)(DAT_102eb924 + 0x4545a);
    if ((*(float *)(DAT_102eb924 + 0xcc) < 0.0) || (*(int *)(DAT_102eb924 + 0xe4) == 0)) {
      *(undefined4 *)(DAT_102eb924 + 0xcc) = 0;
      *(uint *)(DAT_102eb924 + 0xb8) = *(uint *)(DAT_102eb924 + 0xb8) & 0xfffff7ff;
    }
    *(undefined4 *)(DAT_102eb924 + 0x5c) = *(undefined4 *)(DAT_102eb924 + 0x68);
    *(undefined4 *)(DAT_102eb924 + 0x60) = *(undefined4 *)(DAT_102eb924 + 0x6c);
  }
  return;
}

/* 1005e180  FUN_1005e180  (156 bytes)
 * undefined FUN_1005e180(void)
 */
void FUN_1005e180(void)

{
  undefined4 local_8;
  
  if (*(float *)(DAT_102eb924 + 0xc0) == 0.0) {
    local_8 = 1.0;
  }
  else {
    local_8 = *(float *)(DAT_102eb924 + 0xc0);
  }
  *(float *)(DAT_102eb924 + 100) =
       *(float *)(DAT_102eb924 + 100) -
       local_8 * **(float **)(DAT_102eb924 + 0x4f4f0) * *(float *)(DAT_102eb924 + 0x10);
  *(float *)(DAT_102eb924 + 100) =
       *(float *)(DAT_102eb924 + 0x7c) * *(float *)(DAT_102eb924 + 0x10) +
       *(float *)(DAT_102eb924 + 100);
  *(undefined4 *)(DAT_102eb924 + 0x7c) = 0;
  thunk_FUN_1005a240();
  return;
}

/* 1005e250  FUN_1005e250  (223 bytes)
 * int * FUN_1005e250(int * param_1, float * param_2)
 */
int * __cdecl FUN_1005e250(int *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_12c [12];
  undefined4 uStack_fc;
  undefined1 *puStack_f8;
  int iStack_f4;
  float *pfStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 local_98 [68];
  float local_54;
  float local_50;
  float local_4c;
  int local_48 [4];
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_54 = *(float *)(DAT_102eb924 + 0x38) + *param_2;
  local_50 = *(float *)(DAT_102eb924 + 0x3c) + param_2[1];
  local_4c = *(float *)(DAT_102eb924 + 0x40) + param_2[2];
  iStack_e8 = 0xffffffff;
  uStack_ec = 0;
  pfStack_f0 = &local_54;
  iStack_f4 = DAT_102eb924 + 0x38;
  puStack_f8 = local_98;
  uStack_fc = 0x1005e2b2;
  piVar1 = (int *)(**(code **)(DAT_102eb924 + 0x4f580))();
  piVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  *(undefined4 *)(DAT_102eb924 + 0x38) = local_34;
  *(undefined4 *)(DAT_102eb924 + 0x3c) = local_30;
  *(undefined4 *)(DAT_102eb924 + 0x40) = local_2c;
  if ((local_38 < 1.0) && (local_48[0] == 0)) {
    iStack_e8 = DAT_102eb924 + 0x5c;
    piVar1 = local_48;
    piVar3 = aiStack_12c;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    thunk_FUN_1005a120();
  }
  piVar1 = local_48;
  piVar3 = param_1;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  return param_1;
}

/* 1005e370  FUN_1005e370  (1021 bytes)
 * undefined FUN_1005e370(void)
 */
void FUN_1005e370(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_f0 [17];
  int local_ac [17];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [3];
  int local_48 [4];
  float local_38;
  float local_28 [2];
  float local_20;
  undefined4 local_18;
  
  thunk_FUN_1005bc20();
  if (0.0 < *(float *)(DAT_102eb924 + 100)) {
    *(undefined4 *)(DAT_102eb924 + 0xe0) = 0xffffffff;
  }
  if (((*(int *)(DAT_102eb924 + 0xe0) == -1) ||
      (iVar1 = thunk_FUN_10057d50(DAT_102eb924 + 0x74,0x102e9874), iVar1 == 0)) ||
     (iVar1 = thunk_FUN_10057d50(DAT_102eb924 + 0x5c,0x102e9874), iVar1 == 0)) {
    thunk_FUN_1005a240();
    if (((*(int *)(DAT_102eb924 + 0xdc) != 5) && (*(int *)(DAT_102eb924 + 0xdc) != 0xb)) &&
       (*(int *)(DAT_102eb924 + 0xdc) != 9)) {
      thunk_FUN_1005e180();
    }
    *(float *)(DAT_102eb924 + 0x5c) =
         *(float *)(DAT_102eb924 + 0x5c) + *(float *)(DAT_102eb924 + 0x74);
    *(float *)(DAT_102eb924 + 0x60) =
         *(float *)(DAT_102eb924 + 0x60) + *(float *)(DAT_102eb924 + 0x78);
    *(float *)(DAT_102eb924 + 100) =
         *(float *)(DAT_102eb924 + 100) + *(float *)(DAT_102eb924 + 0x7c);
    thunk_FUN_1005a240();
    thunk_FUN_10058180((float *)(DAT_102eb924 + 0x5c),*(float *)(DAT_102eb924 + 0x10),local_54);
    *(float *)(DAT_102eb924 + 0x5c) =
         *(float *)(DAT_102eb924 + 0x5c) - *(float *)(DAT_102eb924 + 0x74);
    *(float *)(DAT_102eb924 + 0x60) =
         *(float *)(DAT_102eb924 + 0x60) - *(float *)(DAT_102eb924 + 0x78);
    *(float *)(DAT_102eb924 + 100) =
         *(float *)(DAT_102eb924 + 100) - *(float *)(DAT_102eb924 + 0x7c);
    piVar2 = thunk_FUN_1005e250(local_ac,local_54);
    piVar3 = local_48;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    thunk_FUN_1005a240();
    if (local_48[0] == 0) {
      if (local_38 == 1.0) {
        thunk_FUN_1005bc20();
      }
      else {
        if (*(int *)(DAT_102eb924 + 0xdc) == 10) {
          local_58 = 2.0 - *(float *)(DAT_102eb924 + 0xc4);
        }
        else if (*(int *)(DAT_102eb924 + 0xdc) == 0xb) {
          local_58 = 2.0;
        }
        else {
          local_58 = 1.0;
        }
        thunk_FUN_1005a410((float *)(DAT_102eb924 + 0x5c),local_28,DAT_102eb924 + 0x5c,local_58);
        if (0.7 < local_20) {
          local_68 = 0.0;
          local_64 = 0.0;
          local_60 = 0.0;
          if (*(float *)(DAT_102eb924 + 100) <
              **(float **)(DAT_102eb924 + 0x4f4f0) * *(float *)(DAT_102eb924 + 0x10)) {
            *(undefined4 *)(DAT_102eb924 + 0xe0) = local_18;
            *(undefined4 *)(DAT_102eb924 + 100) = 0;
          }
          local_5c = *(float *)(DAT_102eb924 + 100) * *(float *)(DAT_102eb924 + 100) +
                     *(float *)(DAT_102eb924 + 0x60) * *(float *)(DAT_102eb924 + 0x60) +
                     *(float *)(DAT_102eb924 + 0x5c) * *(float *)(DAT_102eb924 + 0x5c);
          if ((local_5c < 900.0) ||
             ((*(int *)(DAT_102eb924 + 0xdc) != 10 && (*(int *)(DAT_102eb924 + 0xdc) != 0xb)))) {
            *(undefined4 *)(DAT_102eb924 + 0xe0) = local_18;
            *(undefined4 *)(DAT_102eb924 + 0x5c) = DAT_102e9874;
            *(undefined4 *)(DAT_102eb924 + 0x60) = DAT_102e9878;
            *(undefined4 *)(DAT_102eb924 + 100) = DAT_102e987c;
          }
          else {
            thunk_FUN_10058180((float *)(DAT_102eb924 + 0x5c),
                               (1.0 - local_38) * *(float *)(DAT_102eb924 + 0x10) * 0.9,local_54);
            piVar2 = thunk_FUN_1005e250(local_f0,local_54);
            piVar3 = local_48;
            for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar3 = *piVar2;
              piVar2 = piVar2 + 1;
              piVar3 = piVar3 + 1;
            }
          }
          *(float *)(DAT_102eb924 + 0x5c) = *(float *)(DAT_102eb924 + 0x5c) - local_68;
          *(float *)(DAT_102eb924 + 0x60) = *(float *)(DAT_102eb924 + 0x60) - local_64;
          *(float *)(DAT_102eb924 + 100) = *(float *)(DAT_102eb924 + 100) - local_60;
        }
        thunk_FUN_1005bc20();
      }
    }
    else {
      *(undefined4 *)(DAT_102eb924 + 0xe0) = local_18;
      *(undefined4 *)(DAT_102eb924 + 0x5c) = DAT_102e9874;
      *(undefined4 *)(DAT_102eb924 + 0x60) = DAT_102e9878;
      *(undefined4 *)(DAT_102eb924 + 100) = DAT_102e987c;
    }
  }
  return;
}

/* 1005e870  FUN_1005e870  (242 bytes)
 * undefined FUN_1005e870(void)
 */
void FUN_1005e870(void)

{
  float fVar1;
  float fVar2;
  float local_14 [3];
  int local_8;
  
  fVar1 = *(float *)(DAT_102eb924 + 0x45468);
  fVar2 = *(float *)(DAT_102eb924 + 0x4546c);
  thunk_FUN_10058070((float *)(DAT_102eb924 + 0x14));
  thunk_FUN_10058070((float *)(DAT_102eb924 + 0x20));
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    local_14[local_8] =
         fVar2 * *(float *)(DAT_102eb924 + 0x20 + local_8 * 4) +
         fVar1 * *(float *)(DAT_102eb924 + 0x14 + local_8 * 4);
  }
  local_14[2] = local_14[2] + *(float *)(DAT_102eb924 + 0x45470);
  thunk_FUN_10057db0((float *)(DAT_102eb924 + 0x38),*(float *)(DAT_102eb924 + 0x10),local_14,
                     (float *)(DAT_102eb924 + 0x38));
  *(undefined4 *)(DAT_102eb924 + 0x5c) = 0;
  *(undefined4 *)(DAT_102eb924 + 0x60) = 0;
  *(undefined4 *)(DAT_102eb924 + 100) = 0;
  return;
}

/* 1005e9a0  FUN_1005e9a0  (135 bytes)
 * undefined FUN_1005e9a0(void * param_1)
 */
void __fastcall FUN_1005e9a0(void *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar2 = *(float *)(DAT_102eb924 + 500) * 1.7;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    fVar3 = thunk_FUN_10057ff0(param_1,(void *)(DAT_102eb924 + 0x5c));
    fVar1 = (float)fVar3;
    if (fVar1 < fVar2 == (fVar1 == fVar2)) {
      thunk_FUN_10058180((float *)(DAT_102eb924 + 0x5c),(fVar2 / fVar1) * 0.65,
                         (float *)(DAT_102eb924 + 0x5c));
    }
  }
  return;
}

/* 1005ea50  FUN_1005ea50  (656 bytes)
 * undefined FUN_1005ea50(void)
 */
void FUN_1005ea50(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined1 local_108 [68];
  undefined1 local_c4 [68];
  int local_80;
  undefined4 local_7c [4];
  float local_6c;
  float local_5c [2];
  float local_54;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c [3];
  float local_10;
  undefined4 local_c;
  float local_8;
  
  if ((*(float *)(DAT_102eb924 + 0xcc) == 0.0) && (-180.0 <= *(float *)(DAT_102eb924 + 100))) {
    local_34 = *(float *)(DAT_102eb924 + 0x5c);
    local_30 = *(float *)(DAT_102eb924 + 0x60);
    local_2c = 0.0;
    fVar4 = thunk_FUN_10058070(&local_34);
    local_38 = (float)fVar4;
    local_28 = *(float *)(DAT_102eb924 + 0x14);
    local_24 = *(float *)(DAT_102eb924 + 0x18);
    local_20 = 0.0;
    thunk_FUN_10058070(&local_28);
    if ((local_38 == 0.0) ||
       (0.0 <= local_2c * local_20 + local_30 * local_24 + local_34 * local_28)) {
      local_10 = *(float *)(DAT_102eb924 + 0x38);
      local_c = *(undefined4 *)(DAT_102eb924 + 0x3c);
      local_8 = *(float *)(DAT_102eb924 + 0x40) + 8.0;
      thunk_FUN_10057db0(&local_10,24.0,&local_28,local_1c);
      local_80 = *(int *)(DAT_102eb924 + 0xbc);
      *(undefined4 *)(DAT_102eb924 + 0xbc) = 2;
      puVar1 = (undefined4 *)
               (**(code **)(DAT_102eb924 + 0x4f580))(local_c4,&local_10,local_1c,0,0xffffffff);
      puVar3 = local_7c;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      if ((local_6c < 1.0) &&
         (fVar4 = FUN_100c1820(SUB84((double)local_54,0),(uint)((ulonglong)(double)local_54 >> 0x20)
                              ), fVar4 < (float10)0.10000000149011612)) {
        local_8 = (*(float *)(DAT_102eb924 + 0x4f52c + local_80 * 0xc) - 8.0) + local_8;
        thunk_FUN_10057db0(&local_10,24.0,&local_28,local_1c);
        thunk_FUN_10057db0((float *)&DAT_102e9874,-50.0,local_5c,(float *)(DAT_102eb924 + 0x68));
        puVar1 = (undefined4 *)
                 (**(code **)(DAT_102eb924 + 0x4f580))(local_108,&local_10,local_1c,0,0xffffffff);
        puVar3 = local_7c;
        for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        if (local_6c == 1.0) {
          *(undefined4 *)(DAT_102eb924 + 0xcc) = 0x44fa0000;
          *(undefined4 *)(DAT_102eb924 + 100) = 0x43610000;
          *(uint *)(DAT_102eb924 + 200) = *(uint *)(DAT_102eb924 + 200) | 2;
          *(uint *)(DAT_102eb924 + 0xb8) = *(uint *)(DAT_102eb924 + 0xb8) | 0x800;
        }
      }
      *(int *)(DAT_102eb924 + 0xbc) = local_80;
    }
  }
  return;
}

/* 1005ed90  FUN_1005ed90  (517 bytes)
 * undefined FUN_1005ed90(void)
 */
void FUN_1005ed90(void)

{
  byte_conflict *pbVar1;
  int iVar2;
  undefined4 uVar3;
  float local_8;
  
  if (((*(int *)(DAT_102eb924 + 0xe0) != -1) && (*(int *)(DAT_102eb924 + 0xd0) == 0)) &&
     (350.0 <= *(float *)(DAT_102eb924 + 0x9c))) {
    local_8 = 0.5;
    if (*(int *)(DAT_102eb924 + 0xe4) < 1) {
      if (*(float *)(DAT_102eb924 + 0x9c) <= 680.0) {
        if (*(float *)(DAT_102eb924 + 0x9c) <= 340.0) {
          if (*(float *)(DAT_102eb924 + 0x9c) < 200.0) {
            local_8 = 0.0;
          }
        }
        else {
          pbVar1 = (byte_conflict *)
                   (**(code **)(DAT_102eb924 + 0x4f554))(DAT_102eb924 + 0x4f3f0,&DAT_10270844);
          iVar2 = FUN_100c0d30(pbVar1);
          if (iVar2 == 1) {
            (**(code **)(DAT_102eb924 + 0x4f5b4))
                      (2,"player/pl_fallpain3.wav",0x3f800000,0x3f4ccccd,0,100);
          }
          local_8 = 0.85;
        }
      }
      else {
        (**(code **)(DAT_102eb924 + 0x4f5b4))
                  (2,"player/pl_fallpain3.wav",0x3f800000,0x3f4ccccd,0,100);
        local_8 = 1.0;
      }
    }
    if (0.0 < local_8) {
      *(undefined4 *)(DAT_102eb924 + 0x94) = 0;
      thunk_FUN_10059920();
      uVar3 = thunk_FUN_100596d0(*(undefined1 *)(DAT_102eb924 + 0x1f0));
      thunk_FUN_10058c30(uVar3,local_8);
      *(float *)(DAT_102eb924 + 0xa8) = *(float *)(DAT_102eb924 + 0x9c) * 0.013;
      if (8.0 < *(float *)(DAT_102eb924 + 0xa0)) {
        *(undefined4 *)(DAT_102eb924 + 0xa0) = 0x41000000;
      }
    }
  }
  if (*(int *)(DAT_102eb924 + 0xe0) != -1) {
    *(undefined4 *)(DAT_102eb924 + 0x9c) = 0;
  }
  return;
}

/* 1005f020  FUN_1005f020  (267 bytes)
 * undefined FUN_1005f020(void)
 */
void FUN_1005f020(void)

{
  undefined4 uVar1;
  
  if (((*(int *)(DAT_102eb924 + 0xec) == 0) && (*(int *)(DAT_102eb924 + 0xe4) != 0)) ||
     ((*(int *)(DAT_102eb924 + 0xec) != 0 && (*(int *)(DAT_102eb924 + 0xe4) == 0)))) {
    uVar1 = (**(code **)(DAT_102eb924 + 0x4f588))(0,3);
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_102eb924 + 0x4f5b4))(4,"player/pl_wade1.wav",0x3f800000,0x3f4ccccd,0,100);
      break;
    case 1:
      (**(code **)(DAT_102eb924 + 0x4f5b4))(4,"player/pl_wade2.wav",0x3f800000,0x3f4ccccd,0,100);
      break;
    case 2:
      (**(code **)(DAT_102eb924 + 0x4f5b4))(4,"player/pl_wade3.wav",0x3f800000,0x3f4ccccd,0,100);
      break;
    case 3:
      (**(code **)(DAT_102eb924 + 0x4f5b4))(4,"player/pl_wade4.wav",0x3f800000,0x3f4ccccd,0,100);
    }
  }
  return;
}

/* 1005f190  FUN_1005f190  (176 bytes)
 * float10 FUN_1005f190(float * param_1, float * param_2, float param_3, float param_4)
 */
float10 __cdecl FUN_1005f190(float *param_1,float *param_2,float param_3,float param_4)

{
  float10 fVar1;
  int local_78;
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  float local_1c [4];
  float local_c;
  float local_8;
  
  thunk_FUN_100572b0(&local_28,param_1,local_1c,&local_28,local_34);
  local_c = local_20 * param_2[2] + local_24 * param_2[1] + local_28 * *param_2;
  if (0.0 <= local_c) {
    local_78 = 1;
  }
  else {
    local_78 = -1;
  }
  local_8 = (float)local_78;
  fVar1 = FUN_100c1820(SUB84((double)local_c,0),(uint)((ulonglong)(double)local_c >> 0x20));
  if (param_4 <= (float)fVar1) {
    local_c = param_3;
  }
  else {
    local_c = ((float)fVar1 * param_3) / param_4;
  }
  return (float10)local_c * (float10)local_8;
}

/* 1005f270  FUN_1005f270  (185 bytes)
 * undefined FUN_1005f270(float * param_1)
 */
void __cdecl FUN_1005f270(float *param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = thunk_FUN_10058070(param_1);
  if (*(float *)(DAT_102eb924 + 0x20c) == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(DAT_102eb924 + 0x20c);
  }
  fVar1 = (float)fVar2 - ((float)fVar2 * 0.5 + 10.0) * *(float *)(DAT_102eb924 + 0x10) * fVar1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  thunk_FUN_10058180(param_1,fVar1,param_1);
  return;
}

/* 1005f360  FUN_1005f360  (312 bytes)
 * undefined FUN_1005f360(void)
 */
void FUN_1005f360(void)

{
  if ((0 < *(int *)(DAT_102eb924 + 0x94)) &&
     (*(uint *)(DAT_102eb924 + 0x94) =
           *(int *)(DAT_102eb924 + 0x94) - (uint)*(byte *)(DAT_102eb924 + 0x4545a),
     *(int *)(DAT_102eb924 + 0x94) < 0)) {
    *(undefined4 *)(DAT_102eb924 + 0x94) = 0;
  }
  if (0.0 < *(float *)(DAT_102eb924 + 0x8c)) {
    *(float *)(DAT_102eb924 + 0x8c) =
         *(float *)(DAT_102eb924 + 0x8c) - (float)*(byte *)(DAT_102eb924 + 0x4545a);
    if (*(float *)(DAT_102eb924 + 0x8c) < 0.0) {
      *(undefined4 *)(DAT_102eb924 + 0x8c) = 0;
    }
  }
  if (0.0 < *(float *)(DAT_102eb924 + 0xac)) {
    *(float *)(DAT_102eb924 + 0xac) =
         *(float *)(DAT_102eb924 + 0xac) - (float)*(byte *)(DAT_102eb924 + 0x4545a);
    if (*(float *)(DAT_102eb924 + 0xac) < 0.0) {
      *(undefined4 *)(DAT_102eb924 + 0xac) = 0;
    }
  }
  return;
}

/* 1005f4f0  FUN_1005f4f0  (1509 bytes)
 * undefined FUN_1005f4f0(undefined4 param_1)
 */
void __cdecl FUN_1005f4f0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  void *extraout_ECX;
  float local_4c;
  int local_8;
  
  local_8 = 0;
  *(undefined4 *)(DAT_102eb924 + 4) = param_1;
  thunk_FUN_10093050();
  *(undefined4 *)(DAT_102eb924 + 0x4548c) = 0;
  *(float *)(DAT_102eb924 + 0x10) = (float)*(byte *)(DAT_102eb924 + 0x4545a) * 0.001;
  if (*(float *)(DAT_102eb924 + 0x20c) != 0.0) {
    if (0.1 <= *(float *)(DAT_102eb924 + 0x20c)) {
      local_4c = *(float *)(DAT_102eb924 + 0x20c);
    }
    else {
      local_4c = 0.0;
    }
    *(float *)(DAT_102eb924 + 0x10) = local_4c * *(float *)(DAT_102eb924 + 0x10);
  }
  thunk_FUN_1005f360();
  thunk_FUN_100572b0((void *)(DAT_102eb924 + 0x20),(float *)(DAT_102eb924 + 0x44),
                     (float *)(DAT_102eb924 + 0x14),(void *)(DAT_102eb924 + 0x20),
                     (float *)(DAT_102eb924 + 0x2c));
  if (*(int *)(DAT_102eb924 + 0x4f5b0) != 0) {
    DAT_10321004 = 0;
    DAT_10320fe0 = 0;
    DAT_10321010 = 0;
  }
  if ((*(int *)(DAT_102eb924 + 0xd8) == 0) && (*(int *)(DAT_102eb924 + 0x1fc) < 1)) {
    if (((*(int *)(DAT_102eb924 + 0xdc) == 8) || (*(int *)(DAT_102eb924 + 0xdc) == 0)) ||
       (iVar2 = thunk_FUN_1005c1d0(), iVar2 == 0)) {
      thunk_FUN_1005bf30();
      *(undefined4 *)(DAT_102eb924 + 0xec) = *(undefined4 *)(DAT_102eb924 + 0xe4);
      if (*(int *)(DAT_102eb924 + 0xe0) == -1) {
        *(float *)(DAT_102eb924 + 0x9c) = -*(float *)(DAT_102eb924 + 100);
      }
      DAT_102eb92c = 0;
      if (((*(int *)(DAT_102eb924 + 0xd0) == 0) &&
          ((*(uint *)(DAT_102eb924 + 0xb8) & 0x1000000) == 0)) &&
         (local_8 = thunk_FUN_1005df10(), local_8 != 0)) {
        DAT_102eb92c = 1;
      }
      thunk_FUN_10092550();
      thunk_FUN_10059920();
      thunk_FUN_100935e0();
      if ((*(int *)(DAT_102eb924 + 0xd0) == 0) &&
         ((*(uint *)(DAT_102eb924 + 0xb8) & 0x1000000) == 0)) {
        if (local_8 == 0) {
          if ((*(int *)(DAT_102eb924 + 0xdc) != 3) && (*(int *)(DAT_102eb924 + 0xdc) != 8)) {
            *(undefined4 *)(DAT_102eb924 + 0xdc) = 3;
          }
        }
        else {
          thunk_FUN_1005da00(local_8);
        }
      }
      switch(*(undefined4 *)(DAT_102eb924 + 0xdc)) {
      case 0:
        break;
      default:
        (**(code **)(DAT_102eb924 + 0x4f564))
                  ("Bogus pmove player movetype %i on (%i) 0=cl 1=sv\n",
                   *(undefined4 *)(DAT_102eb924 + 0xdc),*(undefined4 *)(DAT_102eb924 + 4));
        break;
      case 3:
        bVar1 = thunk_FUN_1005bbf0();
        if (CONCAT31(extraout_var,bVar1) == 0) {
          thunk_FUN_1005a550();
        }
        if (*(float *)(DAT_102eb924 + 0xcc) == 0.0) {
          if (*(int *)(DAT_102eb924 + 0xe4) < 2) {
            if ((*(ushort *)(DAT_102eb924 + 0x45476) & 2) == 0) {
              *(uint *)(DAT_102eb924 + 200) = *(uint *)(DAT_102eb924 + 200) & 0xfffffffd;
            }
            else if (local_8 == 0) {
              thunk_FUN_10092940();
            }
            if (*(int *)(DAT_102eb924 + 0xe0) != -1) {
              *(undefined4 *)(DAT_102eb924 + 100) = 0;
              thunk_FUN_1005b080();
            }
            thunk_FUN_1005a240();
            if (*(int *)(DAT_102eb924 + 0xe0) == -1) {
              thunk_FUN_1005b9f0();
            }
            else {
              thunk_FUN_10093b20();
            }
            thunk_FUN_1005bf30();
            *(float *)(DAT_102eb924 + 0x5c) =
                 *(float *)(DAT_102eb924 + 0x5c) - *(float *)(DAT_102eb924 + 0x74);
            *(float *)(DAT_102eb924 + 0x60) =
                 *(float *)(DAT_102eb924 + 0x60) - *(float *)(DAT_102eb924 + 0x78);
            *(float *)(DAT_102eb924 + 100) =
                 *(float *)(DAT_102eb924 + 100) - *(float *)(DAT_102eb924 + 0x7c);
            thunk_FUN_1005a240();
            bVar1 = thunk_FUN_1005bbf0();
            if (CONCAT31(extraout_var_00,bVar1) == 0) {
              thunk_FUN_1005a640();
            }
            if (*(int *)(DAT_102eb924 + 0xe0) != -1) {
              *(undefined4 *)(DAT_102eb924 + 100) = 0;
            }
            thunk_FUN_1005ed90();
          }
          else {
            if (*(int *)(DAT_102eb924 + 0xe4) == 2) {
              thunk_FUN_1005ea50();
            }
            if ((*(float *)(DAT_102eb924 + 100) < 0.0) && (*(float *)(DAT_102eb924 + 0xcc) != 0.0))
            {
              *(undefined4 *)(DAT_102eb924 + 0xcc) = 0;
            }
            if ((*(ushort *)(DAT_102eb924 + 0x45476) & 2) == 0) {
              *(uint *)(DAT_102eb924 + 200) = *(uint *)(DAT_102eb924 + 200) & 0xfffffffd;
            }
            else {
              thunk_FUN_10092940();
            }
            thunk_FUN_1005b4f0();
            *(float *)(DAT_102eb924 + 0x5c) =
                 *(float *)(DAT_102eb924 + 0x5c) - *(float *)(DAT_102eb924 + 0x74);
            *(float *)(DAT_102eb924 + 0x60) =
                 *(float *)(DAT_102eb924 + 0x60) - *(float *)(DAT_102eb924 + 0x78);
            *(float *)(DAT_102eb924 + 100) =
                 *(float *)(DAT_102eb924 + 100) - *(float *)(DAT_102eb924 + 0x7c);
            thunk_FUN_1005bf30();
          }
          thunk_FUN_1005f020();
        }
        else {
          thunk_FUN_1005e050();
          thunk_FUN_1005a700();
          thunk_FUN_1005bc20();
        }
        break;
      case 5:
        thunk_FUN_1005bc20();
        if ((*(ushort *)(DAT_102eb924 + 0x45476) & 2) == 0) {
          *(uint *)(DAT_102eb924 + 200) = *(uint *)(DAT_102eb924 + 200) & 0xfffffffd;
        }
        else if (local_8 == 0) {
          thunk_FUN_10092940();
        }
        *(float *)(DAT_102eb924 + 0x5c) =
             *(float *)(DAT_102eb924 + 0x5c) + *(float *)(DAT_102eb924 + 0x74);
        *(float *)(DAT_102eb924 + 0x60) =
             *(float *)(DAT_102eb924 + 0x60) + *(float *)(DAT_102eb924 + 0x78);
        *(float *)(DAT_102eb924 + 100) =
             *(float *)(DAT_102eb924 + 100) + *(float *)(DAT_102eb924 + 0x7c);
        thunk_FUN_1005a700();
        *(float *)(DAT_102eb924 + 0x5c) =
             *(float *)(DAT_102eb924 + 0x5c) - *(float *)(DAT_102eb924 + 0x74);
        *(float *)(DAT_102eb924 + 0x60) =
             *(float *)(DAT_102eb924 + 0x60) - *(float *)(DAT_102eb924 + 0x78);
        *(float *)(DAT_102eb924 + 100) =
             *(float *)(DAT_102eb924 + 100) - *(float *)(DAT_102eb924 + 0x7c);
        break;
      case 6:
      case 10:
        thunk_FUN_1005e370();
        break;
      case 8:
        thunk_FUN_1005e870();
      }
    }
  }
  else {
    thunk_FUN_1005c820(extraout_ECX);
    thunk_FUN_1005bf30();
  }
  return;
}

/* 1005fc80  FUN_1005fc80  (1050 bytes)
 * undefined FUN_1005fc80(void)
 */
void FUN_1005fc80(void)

{
  int iVar1;
  int local_24 [5];
  float local_10;
  float local_c;
  float local_8;
  
  _memset(&DAT_102e9888,0,0x288);
  local_24[4] = 0;
  for (local_10 = -0.125; local_10 < 0.125 != (local_10 == 0.125); local_10 = local_10 + 0.125) {
    *(undefined4 *)(&DAT_102e9888 + local_24[4] * 0xc) = 0;
    *(undefined4 *)(&DAT_102e988c + local_24[4] * 0xc) = 0;
    *(float *)(&DAT_102e9890 + local_24[4] * 0xc) = local_10;
    local_24[4] = local_24[4] + 1;
  }
  for (local_c = -0.125; local_c < 0.125 != (local_c == 0.125); local_c = local_c + 0.125) {
    *(undefined4 *)(&DAT_102e9888 + local_24[4] * 0xc) = 0;
    *(float *)(&DAT_102e988c + local_24[4] * 0xc) = local_c;
    *(undefined4 *)(&DAT_102e9890 + local_24[4] * 0xc) = 0;
    local_24[4] = local_24[4] + 1;
  }
  for (local_8 = -0.125; local_8 < 0.125 != (local_8 == 0.125); local_8 = local_8 + 0.125) {
    *(float *)(&DAT_102e9888 + local_24[4] * 0xc) = local_8;
    *(undefined4 *)(&DAT_102e988c + local_24[4] * 0xc) = 0;
    *(undefined4 *)(&DAT_102e9890 + local_24[4] * 0xc) = 0;
    local_24[4] = local_24[4] + 1;
  }
  for (local_8 = -0.125; local_8 < 0.125 != (local_8 == 0.125); local_8 = local_8 + 0.25) {
    for (local_c = -0.125; local_c < 0.125 != (local_c == 0.125); local_c = local_c + 0.25) {
      for (local_10 = -0.125; local_10 < 0.125 != (local_10 == 0.125); local_10 = local_10 + 0.25) {
        *(float *)(&DAT_102e9888 + local_24[4] * 0xc) = local_8;
        *(float *)(&DAT_102e988c + local_24[4] * 0xc) = local_c;
        *(float *)(&DAT_102e9890 + local_24[4] * 0xc) = local_10;
        local_24[4] = local_24[4] + 1;
      }
    }
  }
  local_24[0] = 0;
  local_24[1] = 0x3f800000;
  local_24[2] = 0x40c00000;
  for (local_24[3] = 0; local_24[3] < 3; local_24[3] = local_24[3] + 1) {
    iVar1 = local_24[local_24[3]];
    *(undefined4 *)(&DAT_102e9888 + local_24[4] * 0xc) = 0;
    *(undefined4 *)(&DAT_102e988c + local_24[4] * 0xc) = 0;
    *(int *)(&DAT_102e9890 + local_24[4] * 0xc) = iVar1;
    local_24[4] = local_24[4] + 1;
  }
  for (local_c = -2.0; local_c < 2.0 != (local_c == 2.0); local_c = local_c + 2.0) {
    *(undefined4 *)(&DAT_102e9888 + local_24[4] * 0xc) = 0;
    *(float *)(&DAT_102e988c + local_24[4] * 0xc) = local_c;
    *(undefined4 *)(&DAT_102e9890 + local_24[4] * 0xc) = 0;
    local_24[4] = local_24[4] + 1;
  }
  for (local_8 = -2.0; local_8 < 2.0 != (local_8 == 2.0); local_8 = local_8 + 2.0) {
    *(float *)(&DAT_102e9888 + local_24[4] * 0xc) = local_8;
    *(undefined4 *)(&DAT_102e988c + local_24[4] * 0xc) = 0;
    *(undefined4 *)(&DAT_102e9890 + local_24[4] * 0xc) = 0;
    local_24[4] = local_24[4] + 1;
  }
  for (local_24[3] = 0; local_24[3] < 3; local_24[3] = local_24[3] + 1) {
    iVar1 = local_24[local_24[3]];
    for (local_8 = -2.0; local_8 < 2.0 != (local_8 == 2.0); local_8 = local_8 + 2.0) {
      for (local_c = -2.0; local_c < 2.0 != (local_c == 2.0); local_c = local_c + 2.0) {
        *(float *)(&DAT_102e9888 + local_24[4] * 0xc) = local_8;
        *(float *)(&DAT_102e988c + local_24[4] * 0xc) = local_c;
        *(int *)(&DAT_102e9890 + local_24[4] * 0xc) = iVar1;
        local_24[4] = local_24[4] + 1;
      }
    }
  }
  return;
}

/* 100601a0  FUN_100601a0  (188 bytes)
 * undefined FUN_100601a0(int param_1, int param_2)
 */
void __cdecl FUN_100601a0(int param_1,int param_2)

{
  if (DAT_102eb920 == 0) {
    FUN_100bd710((uint *)"pm_shared_initialized",
                 (uint *)
                 "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\pm_shared\\pm_shared.c"
                 ,DAT_1028a344 + 1);
  }
  DAT_102eb924 = param_1;
  thunk_FUN_1005f4f0((uint)(param_2 != 0));
  if (*(int *)(DAT_102eb924 + 0xe0) == -1) {
    *(uint *)(DAT_102eb924 + 0xb8) = *(uint *)(DAT_102eb924 + 0xb8) & 0xfffffdff;
  }
  else {
    *(uint *)(DAT_102eb924 + 0xb8) = *(uint *)(DAT_102eb924 + 0xb8) | 0x200;
  }
  if ((*(int *)(DAT_102eb924 + 8) == 0) && (*(int *)(DAT_102eb924 + 0xdc) == 3)) {
    *(undefined4 *)(DAT_102eb924 + 0xc4) = 0x3f800000;
  }
  return;
}

/* 10060290  FUN_10060290  (65 bytes)
 * undefined4 FUN_10060290(int param_1)
 */
undefined4 __cdecl FUN_10060290(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)(DAT_102eb924 + 0x24754) < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_102eb924 + 0x247a8 + param_1 * 0xe0);
  }
  return uVar1;
}

/* 100602f0  FUN_100602f0  (82 bytes)
 * undefined FUN_100602f0(undefined4 param_1)
 */
void __cdecl FUN_100602f0(undefined4 param_1)

{
  if (DAT_102eb920 != 0) {
    FUN_100bd710((uint *)"!pm_shared_initialized",
                 (uint *)
                 "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\pm_shared\\pm_shared.c"
                 ,DAT_1028a348 + 1);
  }
  DAT_102eb924 = param_1;
  thunk_FUN_1005fc80();
  thunk_FUN_10058610();
  DAT_102eb920 = 1;
  return;
}

/* 10060360  FUN_10060360  (38 bytes)
 * undefined FUN_10060360(undefined4 param_1, int param_2, undefined4 param_3)
 * called by: thunk_FUN_10060360
 */
void __cdecl FUN_10060360(undefined4 param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10060830(&DAT_102da950,param_1,param_2,param_3);
  return;
}

/* 10060390  FUN_10060390  (103 bytes)
 * undefined4 FUN_10060390(int * param_1)
 * called by: thunk_FUN_10060390
 */
undefined4 __fastcall FUN_10060390(int *param_1)

{
  thunk_FUN_10046ec0(&DAT_102da3c8,(int)param_1);
  (*DAT_102e14a0)("SayText",thunk_FUN_10060360);
  (**(code **)(*param_1 + 0x18))();
  thunk_FUN_1003d2e0("hud_saytext_time",&DAT_1026e1e4,0);
  param_1[4] = param_1[4] | 2;
  return 1;
}

/* 10060410  FUN_10060410  (73 bytes)
 * undefined FUN_10060410(void)
 * called by: thunk_FUN_10060410
 */
void FUN_10060410(void)

{
  _memset(&DAT_102ebfc8,0,0x600);
  _memset(&DAT_102ec620,0,0x18);
  _memset(&DAT_102ec608,0,0x18);
  return;
}

/* 10060470  FUN_10060470  (24 bytes)
 * undefined4 FUN_10060470(void)
 * called by: thunk_FUN_10060470
 */
undefined4 FUN_10060470(void)

{
  return 1;
}

/* 10060490  FUN_10060490  (140 bytes)
 * int FUN_10060490(void)
 */
int FUN_10060490(void)

{
  int iVar1;
  
  thunk_FUN_10040c60(&DAT_102ebfc8);
  DAT_102ec4c8 = 0;
  FUN_100bdc80((undefined4 *)&DAT_102ebfc8,(undefined4 *)&DAT_102ec0c8,0x500);
  FUN_100bdc80((undefined4 *)&DAT_102ec620,(undefined4 *)&DAT_102ec624,0x14);
  FUN_100bdc80((undefined4 *)&DAT_102ec608,(undefined4 *)&DAT_102ec60c,0x14);
  DAT_102ec3c8 = 0;
  if (DAT_102ebfc8 == ' ') {
    DAT_102ebfc8 = '\x02';
    iVar1 = thunk_FUN_10060490();
    iVar1 = iVar1 + 1;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

/* 10060540  FUN_10060540  (602 bytes)
 * undefined4 FUN_10060540(float param_1)
 * called by: thunk_FUN_10060540
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10060540(void *this,float param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float local_58;
  int local_10;
  int local_c;
  
  local_c = DAT_102ec63c;
  if ((DAT_102e15e0 == 0) || (uVar1 = thunk_FUN_100b00d0(DAT_102e15e0), (uVar1 & 0xff) != 0)) {
    if (param_1 + _DAT_1028a34c <= DAT_102ec638) {
      local_58 = param_1 + _DAT_1028a34c;
    }
    else {
      local_58 = DAT_102ec638;
    }
    if (param_1 + _DAT_1028a34c <= local_58) {
      local_58 = param_1 + _DAT_1028a34c;
    }
    DAT_102ec638 = local_58;
    if (local_58 < param_1 != (local_58 == param_1)) {
      if (DAT_102ebfc8 == '\0') {
        *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
      }
      else {
        DAT_102ec638 = param_1 + _DAT_1028a34c;
        thunk_FUN_10060490();
      }
    }
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if ((&DAT_102ebfc8)[local_10 * 0x100] != '\0') {
        if (((&DAT_102ebfc8)[local_10 * 0x100] == '\x02') &&
           (*(int *)(&DAT_102ec620 + local_10 * 4) != 0)) {
          if (*(int *)(&DAT_102ec608 + local_10 * 4) < 0x40) {
            local_58 = *(float *)(&DAT_102ec608 + local_10 * 4);
          }
          else {
            local_58 = 8.96831e-44;
          }
          _strncpy(&DAT_102ec5c8,&DAT_102ebfc8 + local_10 * 0x100,(size_t)local_58);
          if (*(int *)(&DAT_102ec608 + local_10 * 4) < 0x3f) {
            local_58 = *(float *)(&DAT_102ec608 + local_10 * 4);
          }
          else {
            local_58 = 8.82818e-44;
          }
          (&DAT_102ec5c8)[(int)local_58] = 0;
          (*DAT_102e14c8)(**(undefined4 **)(&DAT_102ec620 + local_10 * 4),
                          *(undefined4 *)(*(int *)(&DAT_102ec620 + local_10 * 4) + 4),
                          *(undefined4 *)(*(int *)(&DAT_102ec620 + local_10 * 4) + 8));
          uVar2 = thunk_FUN_10040bd0(10,local_c,&DAT_102ec5c8);
          thunk_FUN_10040bd0(uVar2,local_c,
                             &DAT_102ebfc8 +
                             *(int *)(&DAT_102ec608 + local_10 * 4) + local_10 * 0x100);
        }
        else {
          thunk_FUN_10040bd0(10,local_c,&DAT_102ebfc8 + local_10 * 0x100);
        }
      }
      local_c = local_c + DAT_102ec640;
    }
  }
  return 1;
}

/* 10060830  FUN_10060830  (75 bytes)
 * undefined4 FUN_10060830(undefined4 param_1, int param_2, undefined4 param_3)
 */
undefined4 __thiscall FUN_10060830(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  iVar3 = param_2 + -1;
  puVar2 = (uint *)thunk_FUN_10056560();
  thunk_FUN_10060890(this,puVar2,iVar3,uVar1);
  return 1;
}

/* 10060890  FUN_10060890  (512 bytes)
 * undefined FUN_10060890(uint * param_1, int param_2, int param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10060890(void *this,uint *param_1,int param_2,int param_3)

{
  char *_Str;
  uint uVar1;
  uint *puVar2;
  size_t sVar3;
  undefined *puVar4;
  float10 fVar5;
  size_t local_58;
  int local_c;
  
  if ((DAT_102e15e0 == 0) || (uVar1 = thunk_FUN_100b00d0(DAT_102e15e0), (uVar1 & 0xff) != 0)) {
    for (local_c = 0; (local_c < 5 && ((&DAT_102ebfc8)[local_c * 0x100] != '\0'));
        local_c = local_c + 1) {
    }
    if (local_c == 5) {
      thunk_FUN_10060490();
      local_c = 4;
    }
    *(undefined4 *)(&DAT_102ec608 + local_c * 4) = 0;
    *(undefined4 *)(&DAT_102ec620 + local_c * 4) = 0;
    if (((char)*param_1 == '\x02') && (0 < param_3)) {
      (*DAT_102e14ac)(param_3,&DAT_1031f3e0 + param_3 * 0x14);
      _Str = *(char **)(&DAT_1031f3e0 + param_3 * 0x14);
      if ((_Str != (char *)0x0) && (puVar2 = FUN_100c1920(param_1,_Str), puVar2 != (uint *)0x0)) {
        sVar3 = _strlen(_Str);
        *(size_t *)(&DAT_102ec608 + local_c * 4) = (int)puVar2 + (sVar3 - (int)param_1);
        puVar4 = thunk_FUN_1003fe10(param_3);
        *(undefined **)(&DAT_102ec620 + local_c * 4) = puVar4;
      }
    }
    if (param_2 + -1 < 0x100) {
      local_58 = 0xff;
    }
    else {
      local_58 = param_2 - 1;
    }
    _strncpy(&DAT_102ebfc8 + local_c * 0x100,(char *)param_1,local_58);
    thunk_FUN_10060b10(local_c);
    if (local_c == 0) {
      fVar5 = (float10)thunk_FUN_1000cd40("hud_saytext_time");
      _DAT_1028a34c = (float)fVar5;
      DAT_102ec638 = DAT_102da3ec + _DAT_1028a34c;
    }
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    thunk_FUN_1003d310("misc/talk.wav",0x3f800000);
    if (DAT_102e1238 < 0x1e0) {
      DAT_102ec63c = DAT_102e1238 + -0x2d;
    }
    else {
      DAT_102ec63c = DAT_102e1238 + -0x3c;
    }
    DAT_102ec63c = DAT_102ec63c + DAT_102ec640 * -6;
  }
  else {
    thunk_FUN_10040c60(param_1);
  }
  return;
}

/* 10060b10  FUN_10060b10  (651 bytes)
 * undefined FUN_10060b10(int param_1)
 */
void FUN_10060b10(int param_1)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int local_24;
  char local_1e [2];
  uint *local_1c;
  uint *local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  local_c[0] = 0;
  thunk_FUN_10040c30(&DAT_102ebfc8 + param_1 * 0x100,local_c,&DAT_102ec640);
  if (DAT_102e1234 + -0x28 < local_c[0] + 10) {
    local_10 = 10;
    local_14 = 0;
    local_18 = (uint *)0x0;
    for (local_1c = (uint *)(&DAT_102ebfc8 + param_1 * 0x100); (char)*local_1c != '\0';
        local_1c = (uint *)((int)local_1c + 1)) {
      if (((char)*local_1c == '/') && (*(char *)((int)local_1c + 1) == '(')) {
        for (local_1c = (uint *)((int)local_1c + 2);
            ((char)*local_1c != '\0' && ((char)*local_1c != ')'));
            local_1c = (uint *)((int)local_1c + 1)) {
        }
        if ((char)*local_1c != '\0') {
          local_1c = (uint *)((int)local_1c + 1);
        }
        if ((char)*local_1c == '\0') {
          return;
        }
      }
      local_1e[1] = 0;
      if (((char)*local_1c == ' ') && (local_1c != (uint *)(&DAT_102ebfc8 + param_1 * 0x100))) {
        local_18 = local_1c;
      }
      local_1e[0] = (char)*local_1c;
      thunk_FUN_10040c30(local_1e,&local_14,&DAT_102ec640);
      local_10 = local_10 + local_14;
      if (DAT_102e1234 + -0x28 < local_10) {
        if (local_18 == (uint *)0x0) {
          local_18 = (uint *)((int)local_1c + -1);
        }
        local_1c = local_18;
        while( true ) {
          for (local_24 = 0; (local_24 < 5 && ((&DAT_102ebfc8)[local_24 * 0x100] != '\0'));
              local_24 = local_24 + 1) {
          }
          if (local_24 != 5) break;
          iVar1 = thunk_FUN_10060490();
          local_18 = local_18 + iVar1 * -0x40;
        }
        if ((char)*local_18 == ' ') {
          sVar2 = _strlen(&DAT_102ebfc8 + local_24 * 0x100);
          sVar3 = _strlen((char *)local_18);
          if ((int)(sVar2 - sVar3) < 0x101) {
            FUN_100bba30((uint *)(&DAT_102ebfc8 + local_24 * 0x100),local_18);
          }
        }
        else {
          sVar2 = _strlen(&DAT_102ebfc8 + local_24 * 0x100);
          sVar3 = _strlen((char *)local_18);
          if ((sVar2 - sVar3) - 2 < 0x100) {
            FUN_100bba30((uint *)(&DAT_102ebfc8 + local_24 * 0x100),(uint *)&DAT_10270908);
            FUN_100bba30((uint *)(&DAT_102ebfc8 + local_24 * 0x100),local_18);
          }
        }
        *(undefined1 *)local_18 = 0;
        thunk_FUN_10060b10(local_24);
        return;
      }
    }
  }
  return;
}

/* 10060e40  FUN_10060e40  (38 bytes)
 * undefined FUN_10060e40(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10060e40
 */
void __cdecl FUN_10060e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10061070(&DAT_102da9c8,param_1,param_2,param_3);
  return;
}

/* 10060e70  FUN_10060e70  (68 bytes)
 * undefined4 FUN_10060e70(int * param_1)
 * called by: thunk_FUN_10060e70
 */
undefined4 __fastcall FUN_10060e70(int *param_1)

{
  (*DAT_102e14a0)("StatusIcon",thunk_FUN_10060e40);
  thunk_FUN_10046ec0(&DAT_102da3c8,(int)param_1);
  (**(code **)(*param_1 + 0x14))();
  return 1;
}

/* 10060ed0  FUN_10060ed0  (24 bytes)
 * undefined4 FUN_10060ed0(void)
 * called by: thunk_FUN_10060ed0
 */
undefined4 FUN_10060ed0(void)

{
  return 1;
}

/* 10060ef0  FUN_10060ef0  (56 bytes)
 * undefined FUN_10060ef0(int param_1)
 * called by: thunk_FUN_10060ef0
 */
void __fastcall FUN_10060ef0(int param_1)

{
  _memset((void *)(param_1 + 0x14),0,0xc0);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}

/* 10060f40  FUN_10060f40  (240 bytes)
 * undefined4 FUN_10060f40(int param_1)
 * called by: thunk_FUN_10060f40
 */
undefined4 __fastcall FUN_10060f40(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = DAT_102e1238 / 2;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x2c + local_14 * 0x30) != 0) {
      local_10 = local_10 -
                 ((*(int *)(param_1 + 0x3c + local_14 * 0x30) -
                  *(int *)(param_1 + 0x38 + local_14 * 0x30)) + 5);
      (*DAT_102e1468)(*(undefined4 *)(param_1 + 0x2c + local_14 * 0x30),
                      *(undefined1 *)(param_1 + 0x40 + local_14 * 0x30),
                      *(undefined1 *)(param_1 + 0x41 + local_14 * 0x30),
                      *(undefined1 *)(param_1 + 0x42 + local_14 * 0x30));
      (*DAT_102e1474)(0,5,local_10,param_1 + 0x30 + local_14 * 0x30);
    }
  }
  return 1;
}

/* 10061070  FUN_10061070  (141 bytes)
 * undefined4 FUN_10061070(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10061070(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_14;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  puVar2 = (uint *)thunk_FUN_10056560();
  if (uVar1 == 0) {
    thunk_FUN_10061320(this,(byte_conflict *)puVar2);
  }
  else {
    uVar1 = thunk_FUN_10056300();
    uVar3 = thunk_FUN_10056300();
    uVar4 = thunk_FUN_10056300();
    local_1c = (undefined1)uVar4;
    local_18 = (undefined1)uVar3;
    local_14 = (undefined1)uVar1;
    thunk_FUN_10061120(this,puVar2,local_14,local_18,local_1c);
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  }
  return 1;
}

/* 10061120  FUN_10061120  (403 bytes)
 * undefined FUN_10061120(uint * param_1, undefined1 param_2, undefined1 param_3, undefined1 param_4)
 */
void __thiscall
FUN_10061120(void *this,uint *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_c;
  
  local_c = 0;
  while ((local_c < 4 &&
         (uVar1 = FUN_100db540((byte_conflict *)((int)this + local_c * 0x30 + 0x14),
                               (byte_conflict *)param_1), uVar1 != 0))) {
    local_c = local_c + 1;
  }
  if (local_c == 4) {
    local_c = 0;
    while ((local_c < 4 && (*(int *)((int)this + local_c * 0x30 + 0x2c) != 0))) {
      local_c = local_c + 1;
    }
  }
  if (local_c == 4) {
    local_c = 0;
  }
  iVar2 = thunk_FUN_10046590(&DAT_102da3c8,(char *)param_1);
  uVar3 = thunk_FUN_1003d1d0(&DAT_102da3c8,iVar2);
  *(undefined4 *)((int)this + local_c * 0x30 + 0x2c) = uVar3;
  puVar4 = (undefined4 *)thunk_FUN_1003d220(&DAT_102da3c8,iVar2);
  puVar6 = (undefined4 *)((int)this + local_c * 0x30 + 0x30);
  *puVar6 = *puVar4;
  puVar6[1] = puVar4[1];
  puVar6[2] = puVar4[2];
  puVar6[3] = puVar4[3];
  *(undefined1 *)((int)this + local_c * 0x30 + 0x40) = param_2;
  *(undefined1 *)((int)this + local_c * 0x30 + 0x41) = param_3;
  *(undefined1 *)((int)this + local_c * 0x30 + 0x42) = param_4;
  FUN_100bba20((uint *)((int)this + local_c * 0x30 + 0x14),param_1);
  puVar5 = FUN_100c1920((uint *)((int)this + local_c * 0x30 + 0x14),"grenade");
  if (puVar5 != (uint *)0x0) {
    puVar6 = (undefined4 *)(*DAT_102e1524)();
    uVar12 = 100;
    uVar11 = 0;
    uVar10 = 0x3f4ccccd;
    uVar9 = 0x3f800000;
    pcVar8 = "weapons/timer.wav";
    uVar7 = 6;
    uVar3 = thunk_FUN_10008500(puVar6 + 0x2d2);
    (**(code **)(DAT_102e15a8 + 4))(*puVar6,uVar3,uVar7,pcVar8,uVar9,uVar10,uVar11,uVar12);
  }
  return;
}

/* 10061320  FUN_10061320  (105 bytes)
 * undefined FUN_10061320(byte.conflict * param_1)
 */
void __thiscall FUN_10061320(void *this,byte_conflict *param_1)

{
  uint uVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (3 < local_c) {
      return;
    }
    uVar1 = FUN_100db540((byte_conflict *)((int)this + local_c * 0x30 + 0x14),param_1);
    if (uVar1 == 0) break;
    local_c = local_c + 1;
  }
  _memset((void *)((int)this + local_c * 0x30 + 0x14),0,0x30);
  return;
}

/* 100613b0  FUN_100613b0  (38 bytes)
 * undefined FUN_100613b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_100613b0
 */
void __cdecl FUN_100613b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10061d80(&DAT_102da6f8,param_1,param_2,param_3);
  return;
}

/* 100613e0  FUN_100613e0  (38 bytes)
 * undefined FUN_100613e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_100613e0
 */
void __cdecl FUN_100613e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10061e60(&DAT_102da6f8,param_1,param_2,param_3);
  return;
}

/* 10061410  FUN_10061410  (107 bytes)
 * undefined4 FUN_10061410(int * param_1)
 * called by: thunk_FUN_10061410
 */
undefined4 __fastcall FUN_10061410(int *param_1)

{
  thunk_FUN_10046ec0(&DAT_102da3c8,(int)param_1);
  (*DAT_102e14a0)("StatusText",thunk_FUN_100613b0);
  (*DAT_102e14a0)("StatusValue",thunk_FUN_100613e0);
  (**(code **)(*param_1 + 0x14))();
  thunk_FUN_1003d2e0("hud_centerid",&DAT_1026d374,1);
  return 1;
}

/* 100614a0  FUN_100614a0  (24 bytes)
 * undefined4 FUN_100614a0(void)
 * called by: thunk_FUN_100614a0
 */
undefined4 FUN_100614a0(void)

{
  return 1;
}

/* 100614c0  FUN_100614c0  (158 bytes)
 * undefined FUN_100614c0(int param_1)
 * called by: thunk_FUN_100614c0
 */
void __fastcall FUN_100614c0(int param_1)

{
  int local_c;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined1 *)(param_1 + 0x14 + local_c * 0x80) = 0;
  }
  _memset((void *)(param_1 + 0x214),0,0x20);
  *(undefined4 *)(param_1 + 0x214) = 1;
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined **)(param_1 + 0x238 + local_c * 4) = &DAT_10289f9c;
  }
  return;
}

/* 10061590  FUN_10061590  (1086 bytes)
 * undefined FUN_10061590(int param_1)
 */
void FUN_10061590(int param_1)

{
  undefined *puVar1;
  uint *local_c8;
  uint local_c4 [8];
  int local_a4;
  byte_conflict local_9d;
  int local_9c;
  byte_conflict *local_98;
  byte_conflict *local_94;
  byte_conflict *local_90;
  byte_conflict *local_8c;
  byte_conflict local_88 [128];
  int local_8;
  
  _memset(local_88,0,0x80);
  thunk_FUN_10068580((char *)(local_8 + 0x14 + param_1 * 0x80),(char *)local_88,0x80);
  _memset((void *)(local_8 + 0x114 + param_1 * 0x80),0,0x80);
  local_94 = local_88;
  local_98 = (byte_conflict *)(local_8 + 0x114 + param_1 * 0x80);
  local_90 = local_98;
  local_8c = local_94;
  while( true ) {
    if (*local_8c == '\0') {
      return;
    }
    for (; *local_8c == '\n'; local_8c = local_8c + 1) {
    }
    if (0x7f < (int)local_8c - (int)local_94) break;
    if (0x7f < (int)local_90 - (int)local_98) {
      return;
    }
    local_9c = FUN_100c0d30(local_8c);
    if (((local_9c < 0) || (7 < local_9c)) || (*(int *)(local_8 + 0x214 + local_9c * 4) == 0)) {
      for (; (*local_8c != '\0' && (*local_8c != '\n')); local_8c = local_8c + 1) {
      }
    }
    else {
      for (; ('/' < (char)*local_8c && ((char)*local_8c < ':')); local_8c = local_8c + 1) {
      }
      if ((*local_8c != '\n') && (*local_8c != '\0')) {
        while ((*local_8c != '\n' && (*local_8c != '\0'))) {
          if (*local_8c == '%') {
            local_9d = local_8c[1];
            if (local_9d == '%') {
              *local_90 = '%';
              local_90 = local_90 + 1;
              local_8c = local_8c + 2;
            }
            else {
              local_8c = local_8c + 2;
              local_9c = FUN_100c0d30(local_8c);
              for (; ('/' < (char)*local_8c && ((char)*local_8c < ':')); local_8c = local_8c + 1) {
              }
              if ((-1 < local_9c) && (local_9c < 8)) {
                local_a4 = *(int *)(local_8 + 0x214 + local_9c * 4);
                if (local_9d == 'i') {
                  FUN_100bb6e0((undefined1 *)local_c4,"%d");
                }
                else if (local_9d == 'p') {
                  (*DAT_102e14ac)(local_a4,&DAT_1031f3e0 + local_a4 * 0x14);
                  if (*(int *)(&DAT_1031f3e0 + local_a4 * 0x14) == 0) {
                    FUN_100bba20(local_c4,(uint *)"******");
                  }
                  else {
                    _strncpy((char *)local_c4,*(char **)(&DAT_1031f3e0 + local_a4 * 0x14),0x20);
                    puVar1 = thunk_FUN_1003fe10(local_a4);
                    *(undefined **)(local_8 + 0x238 + param_1 * 4) = puVar1;
                  }
                }
                else {
                  local_c4[0]._0_1_ = 0;
                }
                local_c8 = local_c4;
                for (; ((byte_conflict)*local_c8 != '\0' && ((int)local_90 - (int)local_98 < 0x80));
                    local_90 = local_90 + 1) {
                  *local_90 = (byte_conflict)*local_c8;
                  local_c8 = (uint *)((int)local_c8 + 1);
                }
              }
            }
          }
          else {
            *local_90 = *local_8c;
            local_90 = local_90 + 1;
            local_8c = local_8c + 1;
          }
        }
      }
    }
  }
  return;
}

/* 10061ae0  FUN_10061ae0  (536 bytes)
 * undefined4 FUN_10061ae0(int param_1)
 * called by: thunk_FUN_10061ae0
 */
undefined4 __fastcall FUN_10061ae0(int param_1)

{
  float10 fVar1;
  longlong lVar2;
  int local_70;
  int local_6c;
  int local_68;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1;
  if (*(int *)(param_1 + 0x234) != 0) {
    for (local_c = 0; local_c < 2; local_c = local_c + 1) {
      *(undefined **)(local_8 + 0x238 + local_c * 4) = &DAT_10289f9c;
      thunk_FUN_10061590(local_c);
    }
    *(undefined4 *)(local_8 + 0x234) = 0;
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    thunk_FUN_10040c30(local_8 + 0x114 + local_10 * 0x80,&local_18,&local_14);
    if (DAT_102e1238 < 0x1e0) {
      local_1c = DAT_102e1238 + -0x2d;
    }
    else {
      local_1c = DAT_102e1238 + -0x37;
    }
    local_20 = 5;
    local_24 = local_1c - local_14 * local_10;
    if (local_10 == 1) {
      fVar1 = (float10)thunk_FUN_1000cd40("hud_centerid");
      if (fVar1 != (float10)0.0) {
        if (DAT_102e1234 - local_18 < 2) {
          local_68 = 2;
        }
        else {
          local_68 = DAT_102e1234 - local_18;
        }
        if (local_68 / 2 < 0) {
          local_6c = 0;
        }
        else {
          if (DAT_102e1234 - local_18 < 2) {
            local_70 = 2;
          }
          else {
            local_70 = DAT_102e1234 - local_18;
          }
          local_6c = local_70 / 2;
        }
        local_20 = local_6c;
        thunk_FUN_1000cd40("hud_centerid");
        lVar2 = __ftol();
        local_24 = (int)lVar2;
      }
    }
    if (*(int *)(local_8 + 0x238 + local_10 * 4) != 0) {
      (*DAT_102e14c8)(**(undefined4 **)(local_8 + 0x238 + local_10 * 4),
                      *(undefined4 *)(*(int *)(local_8 + 0x238 + local_10 * 4) + 4),
                      *(undefined4 *)(*(int *)(local_8 + 0x238 + local_10 * 4) + 8));
    }
    thunk_FUN_10040bd0(local_20,local_24,local_8 + 0x114 + local_10 * 0x80);
  }
  return 1;
}

/* 10061d80  FUN_10061d80  (174 bytes)
 * undefined4 FUN_10061d80(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10061d80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char *_Source;
  size_t _Count;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  if ((-1 < (int)uVar1) && ((int)uVar1 < 2)) {
    _Count = 0x80;
    _Source = thunk_FUN_10056560();
    _strncpy((char *)((int)this + uVar1 * 0x80 + 0x14),_Source,_Count);
    *(undefined1 *)((int)this + uVar1 * 0x80 + 0x93) = 0;
    if (this == (void *)0xffffffec) {
      uRamfffffffc = uRamfffffffc & 0xfffffffe;
    }
    else {
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    }
    *(undefined4 *)((int)this + 0x234) = 1;
  }
  return 1;
}

/* 10061e60  FUN_10061e60  (100 bytes)
 * undefined4 FUN_10061e60(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10061e60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  if ((0 < (int)uVar1) && ((int)uVar1 < 8)) {
    iVar2 = thunk_FUN_10056370();
    *(int *)((int)this + uVar1 * 4 + 0x214) = iVar2;
    *(undefined4 *)((int)this + 0x234) = 1;
  }
  return 1;
}

/* 10061ee0  FUN_10061ee0  (370 bytes)
 * undefined FUN_10061ee0(float * param_1, float * param_2)
 */
void __thiscall FUN_10061ee0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  
  fVar1 = param_1[1];
  FUN_100be334(this,SUB84((double)(fVar1 * 0.017453292),0));
  fVar2 = (float)extraout_ST0;
  FUN_100be284(this_00,SUB84((double)(fVar1 * 0.017453292),0));
  fVar1 = (float)extraout_ST0_00;
  fVar3 = *param_1;
  FUN_100be334(this_01,SUB84((double)(fVar3 * 0.017453292),0));
  fVar4 = (float)extraout_ST0_01;
  FUN_100be284(this_02,SUB84((double)(fVar3 * 0.017453292),0));
  fVar3 = (float)extraout_ST0_02;
  fVar5 = param_1[2];
  FUN_100be334(this_03,SUB84((double)(fVar5 * 0.017453292),0));
  fVar6 = (float)extraout_ST0_03;
  FUN_100be284(this_04,SUB84((double)(fVar5 * 0.017453292),0));
  fVar5 = (float)extraout_ST0_04;
  *param_2 = fVar3 * fVar1;
  param_2[4] = fVar3 * fVar2;
  param_2[8] = -fVar4;
  param_2[1] = -fVar2 * fVar5 + fVar6 * fVar4 * fVar1;
  param_2[5] = fVar5 * fVar1 + fVar6 * fVar4 * fVar2;
  param_2[9] = fVar6 * fVar3;
  param_2[2] = -fVar2 * -fVar6 + fVar5 * fVar4 * fVar1;
  param_2[6] = -fVar6 * fVar1 + fVar5 * fVar4 * fVar2;
  param_2[10] = fVar5 * fVar3;
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  return;
}

/* 100620b0  FUN_100620b0  (76 bytes)
 * undefined4 FUN_100620b0(int param_1, int param_2)
 */
undefined4 __cdecl FUN_100620b0(int param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 1;
    }
    if (*(float *)(param_1 + local_8 * 4) != *(float *)(param_2 + local_8 * 4)) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

/* 10062110  FUN_10062110  (107 bytes)
 * undefined FUN_10062110(float * param_1, float * param_2, float * param_3)
 */
void __cdecl FUN_10062110(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_1[1] * param_2[2] - param_1[2] * param_2[1];
  param_3[1] = param_1[2] * *param_2 - *param_1 * param_2[2];
  param_3[2] = *param_1 * param_2[1] - param_1[1] * *param_2;
  return;
}

/* 100621a0  FUN_100621a0  (167 bytes)
 * undefined FUN_100621a0(float * param_1, float * param_2, float * param_3)
 */
void __cdecl FUN_100621a0(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_1[2] * param_2[2] + param_1[1] * param_2[1] + *param_1 * *param_2 + param_2[3];
  param_3[1] = param_1[2] * param_2[6] + param_1[1] * param_2[5] + *param_1 * param_2[4] +
               param_2[7];
  param_3[2] = param_1[2] * param_2[10] + param_1[1] * param_2[9] + *param_1 * param_2[8] +
               param_2[0xb];
  return;
}

/* 10062270  FUN_10062270  (578 bytes)
 * undefined FUN_10062270(float * param_1, float * param_2, float * param_3)
 */
void __cdecl FUN_10062270(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_1[2] * param_2[8] + param_1[1] * param_2[4] + *param_1 * *param_2;
  param_3[1] = param_1[2] * param_2[9] + param_1[1] * param_2[5] + *param_1 * param_2[1];
  param_3[2] = param_1[2] * param_2[10] + param_1[1] * param_2[6] + *param_1 * param_2[2];
  param_3[3] = param_1[2] * param_2[0xb] + param_1[1] * param_2[7] + *param_1 * param_2[3] +
               param_1[3];
  param_3[4] = param_1[6] * param_2[8] + param_1[5] * param_2[4] + param_1[4] * *param_2;
  param_3[5] = param_1[6] * param_2[9] + param_1[5] * param_2[5] + param_1[4] * param_2[1];
  param_3[6] = param_1[6] * param_2[10] + param_1[5] * param_2[6] + param_1[4] * param_2[2];
  param_3[7] = param_1[6] * param_2[0xb] + param_1[5] * param_2[7] + param_1[4] * param_2[3] +
               param_1[7];
  param_3[8] = param_1[10] * param_2[8] + param_1[9] * param_2[4] + param_1[8] * *param_2;
  param_3[9] = param_1[10] * param_2[9] + param_1[9] * param_2[5] + param_1[8] * param_2[1];
  param_3[10] = param_1[10] * param_2[10] + param_1[9] * param_2[6] + param_1[8] * param_2[2];
  param_3[0xb] = param_1[10] * param_2[0xb] + param_1[9] * param_2[7] + param_1[8] * param_2[3] +
                 param_1[0xb];
  return;
}

/* 10062550  FUN_10062550  (283 bytes)
 * undefined FUN_10062550(float * param_1, float * param_2)
 */
void __thiscall FUN_10062550(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  
  fVar1 = param_1[2];
  FUN_100be334(this,SUB84((double)(fVar1 * 0.5),0));
  fVar2 = (float)extraout_ST0;
  FUN_100be284(this_00,SUB84((double)(fVar1 * 0.5),0));
  fVar1 = (float)extraout_ST0_00;
  fVar3 = param_1[1];
  FUN_100be334(this_01,SUB84((double)(fVar3 * 0.5),0));
  fVar4 = (float)extraout_ST0_01;
  FUN_100be284(this_02,SUB84((double)(fVar3 * 0.5),0));
  fVar3 = (float)extraout_ST0_02;
  fVar5 = *param_1;
  FUN_100be334(this_03,SUB84((double)(fVar5 * 0.5),0));
  fVar6 = (float)extraout_ST0_03;
  FUN_100be284(this_04,SUB84((double)(fVar5 * 0.5),0));
  fVar5 = (float)extraout_ST0_04;
  *param_2 = fVar6 * fVar3 * fVar1 - fVar5 * fVar4 * fVar2;
  param_2[1] = fVar6 * fVar3 * fVar2 + fVar5 * fVar4 * fVar1;
  param_2[2] = fVar5 * fVar3 * fVar2 - fVar6 * fVar4 * fVar1;
  param_2[3] = fVar6 * fVar4 * fVar2 + fVar5 * fVar3 * fVar1;
  return;
}

/* 100626c0  FUN_100626c0  (665 bytes)
 * undefined FUN_100626c0(float * param_1, float * param_2, float param_3, float * param_4)
 */
void __cdecl FUN_100626c0(float *param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_8;
  
  local_20 = 0.0;
  local_24 = 0.0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    local_20 = (param_1[local_8] - param_2[local_8]) * (param_1[local_8] - param_2[local_8]) +
               local_20;
    local_24 = (param_1[local_8] + param_2[local_8]) * (param_1[local_8] + param_2[local_8]) +
               local_24;
  }
  if (local_24 < local_20) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      param_2[local_8] = -param_2[local_8];
    }
  }
  fVar1 = param_1[3] * param_2[3] +
          param_1[2] * param_2[2] + param_1[1] * param_2[1] + *param_1 * *param_2;
  if (fVar1 + 1.0 <= 1e-06) {
    *param_4 = -param_2[1];
    param_4[1] = *param_2;
    param_4[2] = -param_2[3];
    param_4[3] = param_2[2];
    FUN_100be334(param_2,SUB84((double)((1.0 - param_3) * 1.5707964),0));
    FUN_100be334(this_02,SUB84((double)(param_3 * 1.5707964),0));
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      param_4[local_8] =
           (float)extraout_ST0_04 * param_4[local_8] + (float)extraout_ST0_03 * param_1[local_8];
    }
  }
  else {
    if (1.0 - fVar1 <= 1e-06) {
      local_18 = 1.0 - param_3;
      local_1c = param_3;
    }
    else {
      FUN_100c14a4(param_2,SUB84((double)fVar1,0),(uint)((ulonglong)(double)fVar1 >> 0x20));
      fVar1 = (float)extraout_ST0;
      FUN_100be334(this,SUB84((double)fVar1,0));
      FUN_100be334(this_00,SUB84((double)((1.0 - param_3) * fVar1),0));
      local_18 = (float)(extraout_ST0_01 / (float10)(float)extraout_ST0_00);
      FUN_100be334(this_01,SUB84((double)(param_3 * fVar1),0));
      local_1c = (float)(extraout_ST0_02 / (float10)(float)extraout_ST0_00);
    }
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      param_4[local_8] = local_1c * param_2[local_8] + local_18 * param_1[local_8];
    }
  }
  return;
}

/* 10062a00  FUN_10062a00  (347 bytes)
 * undefined FUN_10062a00(float * param_1, float * param_2)
 */
void __cdecl FUN_10062a00(float *param_1,float *param_2)

{
  *param_2 = (1.0 - (param_1[1] + param_1[1]) * param_1[1]) - (param_1[2] + param_1[2]) * param_1[2]
  ;
  param_2[4] = (param_1[3] + param_1[3]) * param_1[2] + (*param_1 + *param_1) * param_1[1];
  param_2[8] = (*param_1 + *param_1) * param_1[2] - (param_1[3] + param_1[3]) * param_1[1];
  param_2[1] = (*param_1 + *param_1) * param_1[1] - (param_1[3] + param_1[3]) * param_1[2];
  param_2[5] = (1.0 - (*param_1 + *param_1) * *param_1) - (param_1[2] + param_1[2]) * param_1[2];
  param_2[9] = (param_1[3] + param_1[3]) * *param_1 + (param_1[1] + param_1[1]) * param_1[2];
  param_2[2] = (param_1[3] + param_1[3]) * param_1[1] + (*param_1 + *param_1) * param_1[2];
  param_2[6] = (param_1[1] + param_1[1]) * param_1[2] - (param_1[3] + param_1[3]) * *param_1;
  param_2[10] = (1.0 - (*param_1 + *param_1) * *param_1) - (param_1[1] + param_1[1]) * param_1[1];
  return;
}

/* 10062bc0  FUN_10062bc0  (34 bytes)
 * undefined FUN_10062bc0(undefined4 * param_1, undefined4 * param_2)
 */
void __cdecl FUN_10062bc0(undefined4 *param_1,undefined4 *param_2)

{
  FUN_100bc090(param_2,param_1,0x30);
  return;
}

/* 10062bf0  FUN_10062bf0  (179 bytes)
 * undefined FUN_10062bf0(int param_1)
 */
void __fastcall FUN_10062bf0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_102f15ec)("cl_himodels");
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = (*DAT_102f15ec)("developer");
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = (*DAT_102f15ec)("r_drawentities");
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = (*DAT_102f15f4)();
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  (*DAT_102f15f8)(param_1 + 0x4098,param_1 + 0x409c);
  uVar1 = (*DAT_102f1600)();
  *(undefined4 *)(param_1 + 0x40a8) = uVar1;
  uVar1 = (*DAT_102f1604)();
  *(undefined4 *)(param_1 + 0x40ac) = uVar1;
  uVar1 = (*DAT_102f1608)();
  *(undefined4 *)(param_1 + 0x40a4) = uVar1;
  uVar1 = (*DAT_102f160c)();
  *(undefined4 *)(param_1 + 0x40a0) = uVar1;
  return;
}

/* 10062cd0  FUN_10062cd0  (229 bytes)
 * undefined4 * FUN_10062cd0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_10062cd0(undefined4 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10062df0_102709cc;
  param_1[6] = 1;
  param_1[7] = 1;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x16] = 0;
  param_1[0x1026] = 0;
  param_1[0x1027] = 0;
  param_1[0x1028] = 0;
  param_1[0x1029] = 0;
  param_1[0x102a] = 0;
  param_1[0x102b] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return param_1;
}

/* 10062df0  FUN_10062df0  (54 bytes)
 * undefined4 * FUN_10062df0(uint param_1)
 * called by: thunk_FUN_10062df0
 */
undefined4 * __thiscall FUN_10062df0(void *this,uint param_1)

{
  thunk_FUN_10062e40(this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 10062e40  FUN_10062e40  (28 bytes)
 * undefined FUN_10062e40(undefined4 * param_1)
 */
void __fastcall FUN_10062e40(undefined4 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10062df0_102709cc;
  return;
}

/* 10062e70  FUN_10062e70  (699 bytes)
 * undefined FUN_10062e70(float param_1, int param_2, int param_3, int param_4, byte.conflict param_5)
 * called by: thunk_FUN_10062e70
 */
/* WARNING: Removing unreachable block (ram,0x10062f2b) */
/* WARNING: Removing unreachable block (ram,0x10062f4e) */

void __thiscall
FUN_10062e70(void *this,float param_1,int param_2,int param_3,int param_4,byte_conflict param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_14;
  int local_10;
  
  iVar2 = *(int *)((int)this + 0x44) + *(int *)(*(int *)((int)this + 0x44) + 0x98);
  for (local_10 = 0; local_10 < *(int *)(*(int *)((int)this + 0x44) + 0x94); local_10 = local_10 + 1
      ) {
    iVar1 = *(int *)(iVar2 + 0x14 + local_10 * 0x18);
    if (iVar1 < 4) {
      if ((*(uint *)(iVar2 + 4 + local_10 * 0x18) & 0x8000) == 0) {
        local_14 = ((1.0 - param_1) * (float)*(byte *)(param_4 + iVar1) +
                   (float)*(byte *)(param_3 + iVar1) * param_1) / 255.0;
        if (local_14 < 0.0) {
          local_14 = 0.0;
        }
        if (1.0 < local_14) {
          local_14 = 1.0;
        }
        local_14 = local_14 * *(float *)(iVar2 + 0xc + local_10 * 0x18) +
                   (1.0 - local_14) * *(float *)(iVar2 + 8 + local_10 * 0x18);
      }
      else {
        iVar3 = FUN_100bdb80((uint)*(byte *)(param_3 + iVar1) - (uint)*(byte *)(param_4 + iVar1));
        if (iVar3 < 0x81) {
          local_14 = ((1.0 - param_1) * (float)*(byte *)(param_4 + iVar1) +
                     (float)*(byte *)(param_3 + iVar1) * param_1) * 1.40625 +
                     *(float *)(iVar2 + 8 + local_10 * 0x18);
        }
        else {
          local_14 = (((1.0 - param_1) * (float)(byte)(*(char *)(param_4 + local_10) + 0x80) +
                      (float)(byte)(*(char *)(param_3 + local_10) + 0x80) * param_1) - 128.0) *
                     1.40625 + *(float *)(iVar2 + 8 + local_10 * 0x18);
        }
      }
    }
    else {
      local_14 = (float)param_5 / 64.0;
      if (1.0 < local_14) {
        local_14 = 1.0;
      }
      local_14 = local_14 * *(float *)(iVar2 + 0xc + local_10 * 0x18) +
                 (1.0 - local_14) * *(float *)(iVar2 + 8 + local_10 * 0x18);
    }
    switch(*(uint *)(iVar2 + 4 + local_10 * 0x18) & 0x7fff) {
    case 1:
    case 2:
    case 4:
      *(float *)(param_2 + local_10 * 4) = local_14;
      break;
    case 8:
    case 0x10:
    case 0x20:
      *(float *)(param_2 + local_10 * 4) = local_14 * 0.017453292;
    }
  }
  return;
}

/* 10063210  FUN_10063210  (1034 bytes)
 * undefined FUN_10063210(int param_1, float param_2, int param_3, int param_4, int param_5, float * param_6)
 * called by: thunk_FUN_10063210
 */
void FUN_10063210(int param_1,float param_2,int param_3,int param_4,int param_5,float *param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  void *this;
  void *this_00;
  void *this_01;
  byte *local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  float local_30 [4];
  float local_20 [4];
  int local_10;
  int local_c;
  
  thunk_FUN_10007fe0(local_3c);
  thunk_FUN_10007fe0(local_48);
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    if (*(short *)(param_4 + 6 + local_c * 2) == 0) {
      iVar6 = thunk_FUN_10008500(local_3c);
      puVar1 = (undefined4 *)(iVar6 + local_c * 4);
      *puVar1 = *(undefined4 *)(param_3 + 0x4c + local_c * 4);
      iVar6 = thunk_FUN_10008500(local_48);
      *(undefined4 *)(iVar6 + local_c * 4) = *puVar1;
    }
    else {
      local_4c = (byte *)(param_4 + (uint)*(ushort *)(param_4 + 6 + local_c * 2));
      local_10 = param_1;
      if (local_4c[1] < *local_4c) {
        local_10 = 0;
      }
      while ((int)(uint)local_4c[1] <= local_10) {
        local_10 = local_10 - (uint)local_4c[1];
        local_4c = local_4c + (uint)*local_4c * 2 + 2;
        if (local_4c[1] < *local_4c) {
          local_10 = 0;
        }
      }
      if (local_10 < (int)(uint)*local_4c) {
        sVar5 = *(short *)(local_4c + local_10 * 2 + 2);
        iVar6 = thunk_FUN_10008500(local_3c);
        *(float *)(iVar6 + local_c * 4) = (float)(int)sVar5;
        if (local_10 + 1 < (int)(uint)*local_4c) {
          sVar5 = *(short *)(local_4c + local_10 * 2 + 4);
          iVar6 = thunk_FUN_10008500(local_48);
          *(float *)(iVar6 + local_c * 4) = (float)(int)sVar5;
        }
        else if (local_10 + 1 < (int)(uint)local_4c[1]) {
          iVar6 = thunk_FUN_10008500(local_3c);
          iVar7 = thunk_FUN_10008500(local_48);
          *(undefined4 *)(iVar7 + local_c * 4) = *(undefined4 *)(iVar6 + local_c * 4);
        }
        else {
          sVar5 = *(short *)(local_4c + (uint)*local_4c * 2 + 4);
          iVar6 = thunk_FUN_10008500(local_48);
          *(float *)(iVar6 + local_c * 4) = (float)(int)sVar5;
        }
      }
      else {
        sVar5 = *(short *)(local_4c + (uint)*local_4c * 2);
        iVar6 = thunk_FUN_10008500(local_3c);
        *(float *)(iVar6 + local_c * 4) = (float)(int)sVar5;
        if (local_10 + 1 < (int)(uint)local_4c[1]) {
          iVar6 = thunk_FUN_10008500(local_3c);
          iVar7 = thunk_FUN_10008500(local_48);
          *(undefined4 *)(iVar7 + local_c * 4) = *(undefined4 *)(iVar6 + local_c * 4);
        }
        else {
          sVar5 = *(short *)(local_4c + (uint)*local_4c * 2 + 4);
          iVar6 = thunk_FUN_10008500(local_48);
          *(float *)(iVar6 + local_c * 4) = (float)(int)sVar5;
        }
      }
      iVar6 = thunk_FUN_10008500(local_3c);
      fVar2 = *(float *)(iVar6 + local_c * 4);
      fVar3 = *(float *)(param_3 + 100 + local_c * 4);
      fVar4 = *(float *)(param_3 + 0x4c + local_c * 4);
      iVar6 = thunk_FUN_10008500(local_3c);
      *(float *)(iVar6 + local_c * 4) = fVar2 * fVar3 + fVar4;
      iVar6 = thunk_FUN_10008500(local_48);
      fVar2 = *(float *)(iVar6 + local_c * 4);
      fVar3 = *(float *)(param_3 + 100 + local_c * 4);
      fVar4 = *(float *)(param_3 + 0x4c + local_c * 4);
      iVar6 = thunk_FUN_10008500(local_48);
      *(float *)(iVar6 + local_c * 4) = fVar2 * fVar3 + fVar4;
    }
    if (*(int *)(param_3 + 0x34 + local_c * 4) != -1) {
      iVar6 = thunk_FUN_10008500(local_3c);
      pfVar9 = (float *)(iVar6 + local_c * 4);
      *pfVar9 = *pfVar9 + *(float *)(param_5 + *(int *)(param_3 + 0x34 + local_c * 4) * 4);
      iVar6 = thunk_FUN_10008500(local_48);
      pfVar9 = (float *)(iVar6 + local_c * 4);
      *pfVar9 = *pfVar9 + *(float *)(param_5 + *(int *)(param_3 + 0x34 + local_c * 4) * 4);
    }
  }
  iVar6 = thunk_FUN_10008500(local_48);
  iVar7 = thunk_FUN_10008500(local_3c);
  iVar6 = thunk_FUN_100620b0(iVar7,iVar6);
  if (iVar6 == 0) {
    pfVar9 = local_20;
    pfVar8 = (float *)thunk_FUN_10008500(local_3c);
    thunk_FUN_10062550(this,pfVar8,pfVar9);
    pfVar9 = local_30;
    pfVar8 = (float *)thunk_FUN_10008500(local_48);
    thunk_FUN_10062550(this_00,pfVar8,pfVar9);
    thunk_FUN_100626c0(local_20,local_30,param_2,param_6);
  }
  else {
    pfVar9 = (float *)thunk_FUN_10008500(local_3c);
    thunk_FUN_10062550(this_01,pfVar9,param_6);
  }
  return;
}

/* 10063720  FUN_10063720  (588 bytes)
 * undefined FUN_10063720(int param_1, float param_2, int param_3, int param_4, int param_5, int param_6)
 * called by: thunk_FUN_10063720
 */
void FUN_10063720(int param_1,float param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *local_14;
  int local_10;
  int local_c;
  
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    *(undefined4 *)(param_6 + local_c * 4) = *(undefined4 *)(param_3 + 0x40 + local_c * 4);
    if (*(short *)(param_4 + local_c * 2) != 0) {
      local_14 = (byte *)(param_4 + (uint)*(ushort *)(param_4 + local_c * 2));
      local_10 = param_1;
      if (local_14[1] < *local_14) {
        local_10 = 0;
      }
      while ((int)(uint)local_14[1] <= local_10) {
        local_10 = local_10 - (uint)local_14[1];
        local_14 = local_14 + (uint)*local_14 * 2 + 2;
        if (local_14[1] < *local_14) {
          local_10 = 0;
        }
      }
      if (local_10 < (int)(uint)*local_14) {
        if (local_10 + 1 < (int)(uint)*local_14) {
          *(float *)(param_6 + local_c * 4) =
               ((float)(int)*(short *)(local_14 + local_10 * 2 + 4) * param_2 +
               (1.0 - param_2) * (float)(int)*(short *)(local_14 + local_10 * 2 + 2)) *
               *(float *)(param_3 + 0x58 + local_c * 4) + *(float *)(param_6 + local_c * 4);
        }
        else {
          *(float *)(param_6 + local_c * 4) =
               (float)(int)*(short *)(local_14 + local_10 * 2 + 2) *
               *(float *)(param_3 + 0x58 + local_c * 4) + *(float *)(param_6 + local_c * 4);
        }
      }
      else if (local_10 + 1 < (int)(uint)local_14[1]) {
        *(float *)(param_6 + local_c * 4) =
             (float)(int)*(short *)(local_14 + (uint)*local_14 * 2) *
             *(float *)(param_3 + 0x58 + local_c * 4) + *(float *)(param_6 + local_c * 4);
      }
      else {
        *(float *)(param_6 + local_c * 4) =
             ((float)(int)*(short *)(local_14 + (uint)*local_14 * 2 + 4) * param_2 +
             (1.0 - param_2) * (float)(int)*(short *)(local_14 + (uint)*local_14 * 2)) *
             *(float *)(param_3 + 0x58 + local_c * 4) + *(float *)(param_6 + local_c * 4);
      }
    }
    if ((*(int *)(param_3 + 0x28 + local_c * 4) != -1) && (param_5 != 0)) {
      *(float *)(param_6 + local_c * 4) =
           *(float *)(param_6 + local_c * 4) +
           *(float *)(param_5 + *(int *)(param_3 + 0x28 + local_c * 4) * 4);
    }
  }
  return;
}

/* 10063a00  FUN_10063a00  (368 bytes)
 * undefined FUN_10063a00(int param_1, int param_2, int param_3, int param_4, float param_5)
 * called by: thunk_FUN_10063a00
 */
void __thiscall
FUN_10063a00(void *this,int param_1,int param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  void *local_8;
  
  if (0.0 <= param_5) {
    if (1.0 < param_5) {
      param_5 = 1.0;
    }
  }
  else {
    param_5 = 0.0;
  }
  fVar1 = 1.0 - param_5;
  local_8 = this;
  for (local_c = 0; local_c < *(int *)(*(int *)((int)local_8 + 0x44) + 0x8c); local_c = local_c + 1)
  {
    thunk_FUN_100626c0((float *)(param_1 + local_c * 0x10),(float *)(param_3 + local_c * 0x10),
                       param_5,&local_1c);
    *(float *)(param_1 + local_c * 0x10) = local_1c;
    *(undefined4 *)(param_1 + 4 + local_c * 0x10) = local_18;
    *(undefined4 *)(param_1 + 8 + local_c * 0x10) = local_14;
    *(undefined4 *)(param_1 + 0xc + local_c * 0x10) = local_10;
    *(float *)(param_2 + local_c * 0xc) =
         param_5 * *(float *)(param_4 + local_c * 0xc) + fVar1 * *(float *)(param_2 + local_c * 0xc)
    ;
    *(float *)(param_2 + 4 + local_c * 0xc) =
         param_5 * *(float *)(param_4 + 4 + local_c * 0xc) +
         fVar1 * *(float *)(param_2 + 4 + local_c * 0xc);
    *(float *)(param_2 + 8 + local_c * 0xc) =
         param_5 * *(float *)(param_4 + 8 + local_c * 0xc) +
         fVar1 * *(float *)(param_2 + 8 + local_c * 0xc);
  }
  return;
}

/* 10063bd0  FUN_10063bd0  (234 bytes)
 * int FUN_10063bd0(int param_1, int param_2)
 * called by: thunk_FUN_10063bd0
 */
int __thiscall FUN_10063bd0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  iVar1 = *(int *)((int)this + 0x44) + *(int *)(*(int *)((int)this + 0x44) + 0xb0) +
          *(int *)(param_2 + 0x9c) * 0x68;
  if (*(int *)(param_2 + 0x9c) == 0) {
    iVar1 = *(int *)((int)this + 0x44) + *(int *)(iVar1 + 100) + *(int *)(param_2 + 0x7c);
  }
  else {
    local_10 = *(int *)(param_1 + 0x7c);
    if (local_10 == 0) {
      local_10 = (*DAT_102f15c0)(0x10,4);
      *(int *)(param_1 + 0x7c) = local_10;
    }
    iVar2 = (*DAT_102f15c4)(local_10 + *(int *)(param_2 + 0x9c) * 4);
    if (iVar2 == 0) {
      (*DAT_102e14fc)("loading %s\n",iVar1 + 0x20);
      (*DAT_102f15c8)(iVar1 + 0x20,local_10 + *(int *)(param_2 + 0x9c) * 4);
    }
    iVar1 = *(int *)(local_10 + *(int *)(param_2 + 0x9c) * 4) + *(int *)(param_2 + 0x7c);
  }
  return iVar1;
}

/* 10063d00  FUN_10063d00  (262 bytes)
 * undefined FUN_10063d00(int param_1, int * param_2, float * param_3)
 * called by: thunk_FUN_10063d00
 */
void FUN_10063d00(int param_1,int *param_2,float *param_3)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  *param_2 = (int)lVar1;
  if (*(float *)(param_1 + 0x88) <= (float)*param_2) {
    if ((float)*param_2 <= *(float *)(param_1 + 0x90)) {
      if (0.1 <= *(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x88)) {
        lVar1 = __ftol();
        *param_2 = (int)lVar1;
      }
      else {
        *param_2 = 0x7f;
      }
      *param_3 = 0.0;
    }
    else {
      *param_3 = *param_3 - *(float *)(param_1 + 0x90) / 3.0;
      *param_2 = 0xff;
    }
  }
  else {
    *param_3 = *param_3 - *(float *)(param_1 + 0x88) / 3.0;
    *param_2 = 0;
  }
  return;
}

/* 10063e50  FUN_10063e50  (1389 bytes)
 * undefined FUN_10063e50(int param_1)
 * called by: thunk_FUN_10063e50
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10063e50(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  void *this;
  float local_2c;
  float local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  int local_c;
  int local_8;
  
  thunk_FUN_10007fe0(local_18);
  thunk_FUN_10007fe0(local_24);
  puVar2 = (undefined4 *)thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb48);
  puVar3 = (undefined4 *)thunk_FUN_10008500(local_24);
  *puVar3 = *puVar2;
  iVar4 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb48);
  iVar5 = thunk_FUN_10008500(local_24);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 4);
  iVar4 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb48);
  iVar5 = thunk_FUN_10008500(local_24);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar4 + 8);
  iVar4 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0x2cc);
  iVar5 = thunk_FUN_10008500(local_18);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar4 + 8);
  puVar2 = (undefined4 *)thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0x2cc);
  puVar3 = (undefined4 *)thunk_FUN_10008500(local_18);
  *puVar3 = *puVar2;
  iVar4 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0x2cc);
  iVar5 = thunk_FUN_10008500(local_18);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 4);
  if (*(int *)(*(int *)(local_8 + 0x30) + 0x308) == 4) {
    local_28 = 0.0;
    if (((float)*(double *)(local_8 + 8) < *(float *)(*(int *)(local_8 + 0x30) + 0x30c) + 1.0) &&
       (*(float *)(*(int *)(local_8 + 0x30) + 0x30c) != *(float *)(*(int *)(local_8 + 0x30) + 0xb10)
       )) {
      local_28 = ((float)*(double *)(local_8 + 8) - *(float *)(*(int *)(local_8 + 0x30) + 0x30c)) /
                 (*(float *)(*(int *)(local_8 + 0x30) + 0x30c) -
                 *(float *)(*(int *)(local_8 + 0x30) + 0xb10));
    }
    if (*(int *)(local_8 + 0x18) == 0) {
      local_28 = 0.0;
    }
    else {
      local_28 = local_28 - 1.0;
    }
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      iVar4 = thunk_FUN_10008500(local_24);
      pfVar6 = (float *)(iVar4 + local_c * 4);
      iVar4 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb48);
      iVar5 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb1c);
      *pfVar6 = (*(float *)(iVar4 + local_c * 4) - *(float *)(iVar5 + local_c * 4)) * local_28 +
                *pfVar6;
    }
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      iVar4 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb54);
      local_2c = *(float *)(iVar4 + local_c * 4);
      iVar4 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb28);
      local_2c = local_2c - *(float *)(iVar4 + local_c * 4);
      if (local_2c <= 180.0) {
        if (local_2c < -180.0) {
          local_2c = local_2c + 360.0;
        }
      }
      else {
        local_2c = local_2c - 360.0;
      }
      iVar4 = thunk_FUN_10008500(local_18);
      pfVar6 = (float *)(iVar4 + local_c * 4);
      *pfVar6 = local_2c * local_28 + *pfVar6;
    }
  }
  else if (*(int *)(*(int *)(local_8 + 0x30) + 0x308) != 0) {
    puVar2 = (undefined4 *)thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb54);
    puVar3 = (undefined4 *)thunk_FUN_10008500(local_18);
    *puVar3 = *puVar2;
    iVar4 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb54);
    iVar5 = thunk_FUN_10008500(local_18);
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 4);
    iVar4 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb54);
    iVar5 = thunk_FUN_10008500(local_18);
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar4 + 8);
  }
  pfVar6 = (float *)thunk_FUN_10008500(local_18);
  fVar1 = *pfVar6;
  pfVar6 = (float *)thunk_FUN_10008500(local_18);
  *pfVar6 = -fVar1;
  pfVar6 = *(float **)(local_8 + 0x40a0);
  pfVar7 = (float *)thunk_FUN_10008500(local_18);
  thunk_FUN_10061ee0(this,pfVar7,pfVar6);
  iVar4 = (*DAT_102f1660)();
  if (iVar4 == 0) {
    _DAT_102ee990 = *(undefined4 *)(local_8 + 0x4074);
    _DAT_102ee994 = *(undefined4 *)(local_8 + 0x4078);
    _DAT_102ee998 = *(undefined4 *)(local_8 + 0x407c);
    _DAT_102ee9a0 = *(undefined4 *)(local_8 + 0x4068);
    _DAT_102ee9a4 = *(undefined4 *)(local_8 + 0x406c);
    _DAT_102ee9a8 = *(undefined4 *)(local_8 + 0x4070);
    thunk_FUN_10098290((float *)&DAT_102ee9a0);
    _DAT_102ee9b0 = *(undefined4 *)(local_8 + 0x4080);
    _DAT_102ee9b4 = *(undefined4 *)(local_8 + 0x4084);
    _DAT_102ee9b8 = *(undefined4 *)(local_8 + 0x4088);
    pfVar6 = (float *)thunk_FUN_10008500(local_24);
    *(float *)(*(int *)(local_8 + 0x40a0) + 0xc) = *pfVar6 - *(float *)(local_8 + 0x408c);
    iVar4 = thunk_FUN_10008500(local_24);
    *(float *)(*(int *)(local_8 + 0x40a0) + 0x1c) =
         *(float *)(iVar4 + 4) - *(float *)(local_8 + 0x4090);
    iVar4 = thunk_FUN_10008500(local_24);
    *(float *)(*(int *)(local_8 + 0x40a0) + 0x2c) =
         *(float *)(iVar4 + 8) - *(float *)(local_8 + 0x4094);
    thunk_FUN_10062270((float *)&DAT_102ee990,*(float **)(local_8 + 0x40a0),
                       *(float **)(local_8 + 0x40a4));
    if (param_1 != 0) {
      for (local_c = 0; local_c < 4; local_c = local_c + 1) {
        *(float *)(*(int *)(local_8 + 0x40a4) + local_c * 4) =
             *(float *)(local_8 + 0x4060) * 4.656613e-10 *
             *(float *)(*(int *)(local_8 + 0x40a4) + local_c * 4);
        *(float *)(*(int *)(local_8 + 0x40a4) + 0x10 + local_c * 4) =
             *(float *)(local_8 + 0x4064) * 4.656613e-10 *
             *(float *)(*(int *)(local_8 + 0x40a4) + 0x10 + local_c * 4);
        *(float *)(*(int *)(local_8 + 0x40a4) + 0x20 + local_c * 4) =
             *(float *)(*(int *)(local_8 + 0x40a4) + 0x20 + local_c * 4) * 4.656613e-10;
      }
    }
  }
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_24);
  *(undefined4 *)(*(int *)(local_8 + 0x40a0) + 0xc) = *puVar2;
  iVar4 = thunk_FUN_10008500(local_24);
  *(undefined4 *)(*(int *)(local_8 + 0x40a0) + 0x1c) = *(undefined4 *)(iVar4 + 4);
  iVar4 = thunk_FUN_10008500(local_24);
  *(undefined4 *)(*(int *)(local_8 + 0x40a0) + 0x2c) = *(undefined4 *)(iVar4 + 8);
  return;
}

/* 10064520  FUN_10064520  (129 bytes)
 * float10 FUN_10064520(int param_1)
 * called by: thunk_FUN_10064520
 */
float10 __fastcall FUN_10064520(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 local_c;
  
  local_c = 1.0;
  if (((*(int *)(param_1 + 0x18) != 0) &&
      (fVar1 = *(float *)(*(int *)(param_1 + 0x30) + 0x30c),
      fVar2 = *(float *)(*(int *)(param_1 + 0x30) + 0xb10) + 0.01, fVar2 < fVar1 != (fVar2 == fVar1)
      )) && (local_c = ((float)*(double *)(param_1 + 8) -
                       *(float *)(*(int *)(param_1 + 0x30) + 0x30c)) / 0.1, 2.0 < local_c)) {
    local_c = 2.0;
  }
  return (float10)local_c;
}

/* 100645d0  FUN_100645d0  (671 bytes)
 * undefined FUN_100645d0(int param_1, int param_2, int param_3, int param_4, float param_5)
 * called by: thunk_FUN_100645d0
 */
void FUN_100645d0(int param_1,int param_2,int param_3,int param_4,float param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  undefined1 local_38 [32];
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (param_5 <= (float)(*(int *)(param_3 + 0x38) + -1)) {
    if (param_5 < -0.01) {
      param_5 = -0.01;
    }
  }
  else {
    param_5 = 0.0;
  }
  lVar5 = __ftol();
  local_10 = (int)lVar5;
  fVar4 = (float10)(**(code **)(*local_8 + 0x28))();
  local_18 = param_5 - (float)local_10;
  local_14 = local_8[0x11] + *(int *)(local_8[0x11] + 0x90);
  (**(code **)(*local_8 + 0x38))
            ((float)fVar4,local_38,local_8[0xc] + 0x318,local_8[0xc] + 0xb3c,
             *(undefined1 *)(local_8[0xc] + 0xb08));
  for (local_c = 0; local_c < *(int *)(local_8[0x11] + 0x8c); local_c = local_c + 1) {
    (**(code **)(*local_8 + 0x3c))
              (local_10,local_18,local_14,param_4,local_38,param_2 + local_c * 0x10);
    (**(code **)(*local_8 + 0x40))
              (local_10,local_18,local_14,param_4,local_38,param_1 + local_c * 0xc);
    local_14 = local_14 + 0x70;
    param_4 = param_4 + 0xc;
  }
  if ((*(uint *)(param_3 + 0x44) & 1) != 0) {
    *(undefined4 *)(param_1 + *(int *)(param_3 + 0x48) * 0xc) = 0;
  }
  if ((*(uint *)(param_3 + 0x44) & 2) != 0) {
    *(undefined4 *)(param_1 + 4 + *(int *)(param_3 + 0x48) * 0xc) = 0;
  }
  if ((*(uint *)(param_3 + 0x44) & 4) != 0) {
    *(undefined4 *)(param_1 + 8 + *(int *)(param_3 + 0x48) * 0xc) = 0;
  }
  lVar5 = __ftol();
  local_18 = ((1.0 - (param_5 - (float)(int)lVar5)) / (float)*(int *)(param_3 + 0x38)) * 0.0 *
             *(float *)(local_8[0xc] + 0x310);
  if ((*(uint *)(param_3 + 0x44) & 0x40) != 0) {
    iVar1 = *(int *)(param_3 + 0x48);
    pfVar2 = (float *)thunk_FUN_10008500(param_3 + 0x4c);
    *(float *)(param_1 + *(int *)(param_3 + 0x48) * 0xc) =
         local_18 * *pfVar2 + *(float *)(param_1 + iVar1 * 0xc);
  }
  if ((*(uint *)(param_3 + 0x44) & 0x80) != 0) {
    iVar1 = *(int *)(param_3 + 0x48);
    iVar3 = thunk_FUN_10008500(param_3 + 0x4c);
    *(float *)(param_1 + 4 + *(int *)(param_3 + 0x48) * 0xc) =
         local_18 * *(float *)(iVar3 + 4) + *(float *)(param_1 + 4 + iVar1 * 0xc);
  }
  if ((*(uint *)(param_3 + 0x44) & 0x100) != 0) {
    iVar1 = *(int *)(param_3 + 0x48);
    iVar3 = thunk_FUN_10008500(param_3 + 0x4c);
    *(float *)(param_1 + 8 + *(int *)(param_3 + 0x48) * 0xc) =
         local_18 * *(float *)(iVar3 + 8) + *(float *)(param_1 + 8 + iVar1 * 0xc);
  }
  return;
}

/* 10064920  FUN_10064920  (375 bytes)
 * undefined FUN_10064920(int param_1, int param_2)
 * called by: thunk_FUN_10064920
 */
void __thiscall FUN_10064920(void *this,int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float local_18;
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0x304);
  if (0xe < iVar1) {
    if (iVar1 < 0x11) {
      iVar1 = (*DAT_102e1568)(0,0x31);
      if (iVar1 == 0) {
        local_c = (*DAT_102e1568)(0,1);
        if (local_c == 1) {
          local_c = 2;
        }
        pfVar2 = (float *)(param_2 + local_c * 0x10);
        fVar3 = (float10)(*DAT_102e1564)(0x3f800000,0x3fbdf3b6);
        thunk_FUN_100982e0((float *)(param_2 + local_c * 0x10),(float)fVar3,pfVar2);
      }
      else {
        iVar1 = (*DAT_102e1568)(0,0x31);
        if (iVar1 == 0) {
          (*DAT_102e1568)(0,1);
          fVar3 = (float10)(*DAT_102e1564)(0xc1200000,0x41200000);
          iVar1 = (*DAT_102e1568)(0,2);
          pfVar2 = (float *)(param_2 + 0xc + iVar1 * 0x10);
          *pfVar2 = (float)fVar3 + *pfVar2;
        }
      }
    }
    else if (iVar1 == 0x12) {
      local_18 = ((float)*(double *)((int)this + 8) - *(float *)(param_1 + 0x30c)) * 10.0 + 1.0;
      if (2.0 < local_18) {
        local_18 = 2.0;
      }
      *(float *)(param_2 + 4) = local_18 * *(float *)(param_2 + 4);
      *(float *)(param_2 + 0x14) = local_18 * *(float *)(param_2 + 0x14);
      *(float *)(param_2 + 0x24) = local_18 * *(float *)(param_2 + 0x24);
    }
  }
  return;
}

/* 10064b00  FUN_10064b00  (379 bytes)
 * undefined FUN_10064b00(int param_1)
 * called by: thunk_FUN_10064b00
 */
void FUN_10064b00(int param_1)

{
  if (((*(uint *)(param_1 + 0x24) & 1) != 0) && (1 < *(int *)(param_1 + 0x38))) {
    __ftol();
  }
  return;
}

/* 10064ce0  FUN_10064ce0  (2294 bytes)
 * undefined FUN_10064ce0(int * param_1)
 * called by: thunk_FUN_10064ce0
 */
void __fastcall FUN_10064ce0(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_50 [3];
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  double local_14;
  int local_c;
  int *local_8;
  
  if (*(int *)(param_1[0x11] + 0xa4) <= *(int *)(param_1[0xc] + 0x2dc)) {
    *(undefined4 *)(param_1[0xc] + 0x2dc) = 0;
  }
  local_1c = param_1[0x11] + *(int *)(param_1[0x11] + 0xa8) + *(int *)(param_1[0xc] + 0x2dc) * 0xb0;
  local_8 = param_1;
  fVar3 = (float10)(**(code **)(*param_1 + 0x2c))(local_1c);
  local_14 = (double)fVar3;
  local_20 = (**(code **)(*local_8 + 0x10))(local_8[0xd],local_1c);
  (**(code **)(*local_8 + 0x44))(&DAT_102ed590,&DAT_102ef7c0,local_1c,local_20,(float)local_14);
  if (1 < *(int *)(local_1c + 0x78)) {
    local_20 = local_20 + *(int *)(local_8[0x11] + 0x8c) * 0xc;
    (**(code **)(*local_8 + 0x44))(&DAT_102f1670,&DAT_102effc0,local_1c,local_20,(float)local_14);
    fVar3 = (float10)(**(code **)(*local_8 + 0x28))();
    fVar1 = (float)fVar3;
    (**(code **)(*local_8 + 0x34))
              (&DAT_102ef7c0,&DAT_102ed590,&DAT_102effc0,&DAT_102f1670,
               ((1.0 - fVar1) * (float)*(byte *)(local_8[0xc] + 0xb40) +
               (float)*(byte *)(local_8[0xc] + 0x31c) * fVar1) / 255.0);
    if (*(int *)(local_1c + 0x78) == 4) {
      local_20 = local_20 + *(int *)(local_8[0x11] + 0x8c) * 0xc;
      (**(code **)(*local_8 + 0x44))(&DAT_102ef1c0,&DAT_102ee9c0,local_1c,local_20,(float)local_14);
      local_20 = local_20 + *(int *)(local_8[0x11] + 0x8c) * 0xc;
      (**(code **)(*local_8 + 0x44))(&DAT_102ee390,&DAT_102f0dc0,local_1c,local_20,(float)local_14);
      (**(code **)(*local_8 + 0x34))
                (&DAT_102ee9c0,&DAT_102ef1c0,&DAT_102f0dc0,&DAT_102ee390,
                 ((1.0 - fVar1) * (float)*(byte *)(local_8[0xc] + 0xb40) +
                 (float)*(byte *)(local_8[0xc] + 0x31c) * fVar1) / 255.0);
      (**(code **)(*local_8 + 0x34))
                (&DAT_102ef7c0,&DAT_102ed590,&DAT_102ee9c0,&DAT_102ef1c0,
                 ((1.0 - fVar1) * (float)*(byte *)(local_8[0xc] + 0xb41) +
                 (float)*(byte *)(local_8[0xc] + 0x31d) * fVar1) / 255.0);
    }
  }
  if ((((local_8[6] == 0) || (*(float *)(local_8[0xc] + 0xb14) == 0.0)) ||
      (*(float *)(local_8[0xc] + 0xb14) + 0.2 <= (float)*(double *)(local_8 + 2))) ||
     (*(int *)(local_8[0x11] + 0xa4) <= *(int *)(local_8[0xc] + 0xb34))) {
    *(float *)(local_8[0xc] + 0xb38) = (float)local_14;
  }
  else {
    local_1c = local_8[0x11] + *(int *)(local_8[0x11] + 0xa8) +
               *(int *)(local_8[0xc] + 0xb34) * 0xb0;
    local_20 = (**(code **)(*local_8 + 0x10))(local_8[0xd],local_1c);
    (**(code **)(*local_8 + 0x44))
              (&DAT_102ec790,&DAT_102edb90,local_1c,local_20,*(undefined4 *)(local_8[0xc] + 0xb38));
    if (1 < *(int *)(local_1c + 0x78)) {
      local_20 = local_20 + *(int *)(local_8[0x11] + 0x8c) * 0xc;
      (**(code **)(*local_8 + 0x44))
                (&DAT_102f1670,&DAT_102effc0,local_1c,local_20,*(undefined4 *)(local_8[0xc] + 0xb38)
                );
      (**(code **)(*local_8 + 0x34))
                (&DAT_102edb90,&DAT_102ec790,&DAT_102effc0,&DAT_102f1670,
                 (float)*(byte *)(local_8[0xc] + 0xb18) / 255.0);
      if (*(int *)(local_1c + 0x78) == 4) {
        local_20 = local_20 + *(int *)(local_8[0x11] + 0x8c) * 0xc;
        (**(code **)(*local_8 + 0x44))
                  (&DAT_102ef1c0,&DAT_102ee9c0,local_1c,local_20,
                   *(undefined4 *)(local_8[0xc] + 0xb38));
        local_20 = local_20 + *(int *)(local_8[0x11] + 0x8c) * 0xc;
        (**(code **)(*local_8 + 0x44))
                  (&DAT_102ee390,&DAT_102f0dc0,local_1c,local_20,
                   *(undefined4 *)(local_8[0xc] + 0xb38));
        (**(code **)(*local_8 + 0x34))
                  (&DAT_102ee9c0,&DAT_102ef1c0,&DAT_102f0dc0,&DAT_102ee390,
                   (float)*(byte *)(local_8[0xc] + 0xb18) / 255.0);
        (**(code **)(*local_8 + 0x34))
                  (&DAT_102edb90,&DAT_102ec790,&DAT_102ee9c0,&DAT_102ef1c0,
                   (float)*(byte *)(local_8[0xc] + 0xb19) / 255.0);
      }
    }
    (**(code **)(*local_8 + 0x34))
              (&DAT_102ef7c0,&DAT_102ed590,&DAT_102edb90,&DAT_102ec790,
               1.0 - ((float)*(double *)(local_8 + 2) - *(float *)(local_8[0xc] + 0xb14)) / 0.2);
  }
  local_18 = local_8[0x11] + *(int *)(local_8[0x11] + 0x90);
  if ((local_8[0xe] != 0) && (*(int *)(local_8[0xe] + 0x17c) != 0)) {
    local_1c = local_8[0x11] + *(int *)(local_8[0x11] + 0xa8) +
               *(int *)(local_8[0xe] + 0x17c) * 0xb0;
    local_20 = (**(code **)(*local_8 + 0x10))(local_8[0xd],local_1c);
    (**(code **)(*local_8 + 0x44))
              (&DAT_102f1670,&DAT_102effc0,local_1c,local_20,*(undefined4 *)(local_8[0xe] + 0x180));
    local_c = 0;
    while (((local_c < *(int *)(local_8[0x11] + 0x8c) &&
            (iVar2 = _strcmp((char *)(local_18 + local_c * 0x70),"Bip01 Dorso"), iVar2 != 0)) &&
           (iVar2 = _strcmp((char *)(local_18 + local_c * 0x70),"Bip01 Spine"), iVar2 != 0))) {
      FUN_100bc090((undefined4 *)(&DAT_102ed590 + local_c * 0xc),
                   (undefined4 *)(&DAT_102f1670 + local_c * 0xc),0xc);
      FUN_100bc090((undefined4 *)(&DAT_102ef7c0 + local_c * 0x10),
                   (undefined4 *)(&DAT_102effc0 + local_c * 0x10),0x10);
      local_c = local_c + 1;
    }
  }
  for (local_c = 0; local_c < *(int *)(local_8[0x11] + 0x8c); local_c = local_c + 1) {
    thunk_FUN_10062a00((float *)(&DAT_102ef7c0 + local_c * 0x10),local_50);
    local_44 = *(undefined4 *)(&DAT_102ed590 + local_c * 0xc);
    local_34 = *(undefined4 *)(&DAT_102ed594 + local_c * 0xc);
    local_24 = *(undefined4 *)(&DAT_102ed598 + local_c * 0xc);
    if (*(int *)(local_18 + 0x20 + local_c * 0x70) == -1) {
      iVar2 = (*DAT_102f1660)();
      if (iVar2 == 0) {
        thunk_FUN_10062270((float *)local_8[0x1029],local_50,
                           (float *)(local_c * 0x30 + local_8[0x102a]));
        thunk_FUN_10062270((float *)local_8[0x1028],local_50,
                           (float *)(local_c * 0x30 + local_8[0x102b]));
      }
      else {
        thunk_FUN_10062270((float *)local_8[0x1028],local_50,
                           (float *)(local_c * 0x30 + local_8[0x102a]));
        thunk_FUN_10062270((float *)local_8[0x1028],local_50,
                           (float *)(local_c * 0x30 + local_8[0x102b]));
      }
      (**(code **)(*local_8 + 0x30))(local_8[0xc],local_c * 0x30 + local_8[0x102a]);
    }
    else {
      thunk_FUN_10062270((float *)(*(int *)(local_18 + 0x20 + local_c * 0x70) * 0x30 +
                                  local_8[0x102a]),local_50,
                         (float *)(local_c * 0x30 + local_8[0x102a]));
      thunk_FUN_10062270((float *)(*(int *)(local_18 + 0x20 + local_c * 0x70) * 0x30 +
                                  local_8[0x102b]),local_50,
                         (float *)(local_c * 0x30 + local_8[0x102b]));
    }
  }
  return;
}

/* 10065820  FUN_10065820  (214 bytes)
 * undefined FUN_10065820(int param_1)
 * called by: thunk_FUN_10065820
 */
void __fastcall FUN_10065820(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(*(int *)(param_1 + 0x44) + 0x90);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x8c);
  for (local_c = 0; local_c < *(int *)(*(int *)(param_1 + 0x44) + 0x8c); local_c = local_c + 1) {
    FUN_100bba20((uint *)(param_1 + 0x60 + local_c * 0x20),(uint *)(iVar1 + iVar2 + local_c * 0x70))
    ;
    thunk_FUN_10062bc0((undefined4 *)(local_c * 0x30 + *(int *)(param_1 + 0x40a8)),
                       (undefined4 *)(param_1 + 0x1060 + local_c * 0x30));
    thunk_FUN_10062bc0((undefined4 *)(local_c * 0x30 + *(int *)(param_1 + 0x40ac)),
                       (undefined4 *)(param_1 + 0x2860 + local_c * 0x30));
  }
  return;
}

/* 10065930  FUN_10065930  (845 bytes)
 * undefined FUN_10065930(undefined4 param_1)
 * called by: thunk_FUN_10065930
 */
void __thiscall FUN_10065930(void *this,undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float local_58 [3];
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  double local_18;
  int local_10;
  int local_c;
  int *local_8;
  
  local_1c = 1;
  if (*(int *)(*(int *)((int)this + 0x44) + 0xa4) <= *(int *)(*(int *)((int)this + 0x30) + 0x2dc)) {
    *(undefined4 *)(*(int *)((int)this + 0x30) + 0x2dc) = 0;
  }
  local_24 = *(int *)((int)this + 0x44) + *(int *)(*(int *)((int)this + 0x44) + 0xa8) +
             *(int *)(*(int *)((int)this + 0x30) + 0x2dc) * 0xb0;
  local_8 = this;
  fVar3 = (float10)(**(code **)(*(int *)this + 0x2c))(local_24);
  local_18 = (double)fVar3;
  local_28 = (**(code **)(*local_8 + 0x10))(param_1,local_24);
  (**(code **)(*local_8 + 0x44))(&DAT_102f07c0,&DAT_102ecd90,local_24,local_28,(float)local_18);
  local_20 = local_8[0x11] + *(int *)(local_8[0x11] + 0x90);
  local_c = 0;
  do {
    if (*(int *)(local_8[0x11] + 0x8c) <= local_c) {
      return;
    }
    for (local_10 = 0; local_10 < local_8[0x17]; local_10 = local_10 + 1) {
      uVar1 = FUN_100db540((byte_conflict *)(local_20 + local_c * 0x70),
                           (byte_conflict *)(local_8 + local_10 * 8 + 0x18));
      if (uVar1 == 0) {
        thunk_FUN_10062bc0(local_8 + local_10 * 0xc + 0x418,
                           (undefined4 *)(local_c * 0x30 + local_8[0x102a]));
        thunk_FUN_10062bc0(local_8 + local_10 * 0xc + 0xa18,
                           (undefined4 *)(local_c * 0x30 + local_8[0x102b]));
        break;
      }
    }
    if (local_8[0x17] <= local_10) {
      thunk_FUN_10062a00((float *)(&DAT_102ecd90 + local_c * 0x10),local_58);
      local_4c = *(undefined4 *)(&DAT_102f07c0 + local_c * 0xc);
      local_3c = *(undefined4 *)(&DAT_102f07c4 + local_c * 0xc);
      local_2c = *(undefined4 *)(&DAT_102f07c8 + local_c * 0xc);
      if (*(int *)(local_20 + 0x20 + local_c * 0x70) == -1) {
        iVar2 = (*DAT_102f1660)();
        if (iVar2 == 0) {
          thunk_FUN_10062270((float *)local_8[0x1029],local_58,
                             (float *)(local_c * 0x30 + local_8[0x102a]));
          thunk_FUN_10062270((float *)local_8[0x1028],local_58,
                             (float *)(local_c * 0x30 + local_8[0x102b]));
        }
        else {
          thunk_FUN_10062270((float *)local_8[0x1028],local_58,
                             (float *)(local_c * 0x30 + local_8[0x102a]));
          thunk_FUN_10062270((float *)local_8[0x1028],local_58,
                             (float *)(local_c * 0x30 + local_8[0x102b]));
        }
        (**(code **)(*local_8 + 0x30))(local_8[0xc],local_c * 0x30 + local_8[0x102a]);
      }
      else {
        thunk_FUN_10062270((float *)(*(int *)(local_20 + 0x20 + local_c * 0x70) * 0x30 +
                                    local_8[0x102a]),local_58,
                           (float *)(local_c * 0x30 + local_8[0x102a]));
        thunk_FUN_10062270((float *)(*(int *)(local_20 + 0x20 + local_c * 0x70) * 0x30 +
                                    local_8[0x102b]),local_58,
                           (float *)(local_c * 0x30 + local_8[0x102b]));
      }
    }
    local_c = local_c + 1;
  } while( true );
}

/* 10065d50  FUN_10065d50  (1118 bytes)
 * undefined4 FUN_10065d50(uint param_1)
 */
undefined4 FUN_10065d50(uint param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint local_180 [4];
  undefined1 local_170 [12];
  undefined1 local_164 [60];
  undefined4 local_128;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_2c [12];
  undefined1 local_20 [20];
  undefined4 local_c;
  int *local_8;
  
  thunk_FUN_100662d0((int)local_20);
  thunk_FUN_10007fe0(local_2c);
  iVar2 = (*DAT_102f15d8)();
  local_8[0xc] = iVar2;
  (*DAT_102f15e8)(local_8 + 8,local_8 + 2,local_8 + 4);
  (*DAT_102f15f0)(local_8 + 0x1023,local_8 + 0x101a,local_8 + 0x101d,local_8 + 0x1020);
  (*DAT_102f15fc)(local_8 + 0x1018,local_8 + 0x1019);
  if (*(int *)(local_8[0xc] + 0x304) == 0x11) {
    thunk_FUN_100366f0((int)local_180);
    if ((*(char *)(local_8[0xc] + 0x300) != '\0') &&
       (bVar1 = *(byte *)(local_8[0xc] + 0x300), iVar2 = (*DAT_102e14e8)(),
       (int)(uint)bVar1 <= iVar2)) {
      puVar3 = (uint *)(*DAT_102f15e0)(*(byte *)(local_8[0xc] + 0x300) - 1);
      puVar8 = local_180;
      for (iVar2 = 0x55; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar8 = puVar8 + 1;
      }
      local_180[1] = (uint)*(byte *)(local_8[0xc] + 0x300);
      local_cc = 0;
      local_c8 = 0;
      local_128 = 0;
      puVar4 = (undefined4 *)thunk_FUN_10008500(local_8[0xc] + 0x2cc);
      puVar5 = (undefined4 *)thunk_FUN_10008500(local_164);
      *puVar5 = *puVar4;
      iVar2 = thunk_FUN_10008500(local_8[0xc] + 0x2cc);
      iVar6 = thunk_FUN_10008500(local_164);
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar2 + 4);
      iVar2 = thunk_FUN_10008500(local_8[0xc] + 0x2cc);
      iVar6 = thunk_FUN_10008500(local_164);
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar2 + 8);
      puVar4 = (undefined4 *)thunk_FUN_10008500(local_8[0xc] + 0x2c0);
      puVar5 = (undefined4 *)thunk_FUN_10008500(local_170);
      *puVar5 = *puVar4;
      iVar2 = thunk_FUN_10008500(local_8[0xc] + 0x2c0);
      iVar6 = thunk_FUN_10008500(local_170);
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar2 + 4);
      iVar2 = thunk_FUN_10008500(local_8[0xc] + 0x2c0);
      iVar6 = thunk_FUN_10008500(local_170);
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar2 + 8);
      iVar2 = local_8[6];
      local_8[6] = 0;
      uVar7 = (**(code **)(*local_8 + 0xc))(param_1,local_180);
      local_8[6] = iVar2;
      return uVar7;
    }
    return 0;
  }
  local_8[0xd] = *(int *)(local_8[0xc] + 0xb94);
  iVar2 = (*DAT_102f15d0)(local_8[0xd]);
  local_8[0x11] = iVar2;
  (*DAT_102f164c)(local_8[0x11]);
  (*DAT_102f1650)(local_8[0xd]);
  (**(code **)(*local_8 + 0x14))(0);
  if ((param_1 & 1) != 0) {
    iVar2 = (*DAT_102f1614)();
    if (iVar2 == 0) {
      return 0;
    }
    *(int *)local_8[0x1027] = *(int *)local_8[0x1027] + 1;
    *(int *)local_8[0x1026] = *(int *)local_8[0x1026] + 1;
    if (*(int *)(local_8[0x11] + 0xcc) == 0) {
      return 1;
    }
  }
  if (*(int *)(local_8[0xc] + 0x308) == 0xc) {
    (**(code **)(*local_8 + 0x24))(local_8[0xd]);
  }
  else {
    (**(code **)(*local_8 + 0x18))();
  }
  (**(code **)(*local_8 + 0x20))();
  if ((param_1 & 2) != 0) {
    (**(code **)(*local_8 + 0x1c))();
    (*DAT_102f1640)();
    if (0 < *(int *)local_8[0xc]) {
      iVar2 = (*DAT_102e152c)(*(undefined4 *)local_8[0xc]);
      FUN_100bc090((undefined4 *)(iVar2 + 0xb60),(undefined4 *)(local_8[0xc] + 0xb60),0x30);
    }
  }
  if ((param_1 & 1) != 0) {
    local_c = thunk_FUN_10008500(local_2c);
    (*DAT_102f1618)(local_8[0xc],local_20);
    (*DAT_102f161c)(local_20);
    (*DAT_102f1620)(local_20);
    local_8[0x14] = *(uint *)(local_8[0xc] + 0x2e4) & 0xff;
    local_8[0x15] = (int)(*(uint *)(local_8[0xc] + 0x2e4) & 0xff00) >> 8;
    (*DAT_102f1638)(local_8[0x14],local_8[0x15]);
    (**(code **)(*local_8 + 0x48))();
  }
  return 1;
}

/* 100662d0  FUN_100662d0  (33 bytes)
 * int FUN_100662d0(int param_1)
 */
int __fastcall FUN_100662d0(int param_1)

{
  thunk_FUN_10007fe0(param_1 + 8);
  return param_1;
}

/* 10066300  FUN_10066300  (1294 bytes)
 * undefined FUN_10066300(int param_1)
 * called by: thunk_FUN_10066300
 */
void FUN_10066300(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *this;
  void *this_00;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar9;
  longlong lVar10;
  double dVar11;
  float local_20;
  float local_1c;
  undefined1 local_18 [12];
  float local_c;
  int local_8;
  
  thunk_FUN_10007fe0(local_18);
  local_c = (float)((float10)*(double *)(local_8 + 8) - (float10)*(double *)(local_8 + 0x10));
  if (0.0 <= local_c) {
    if (1.0 < local_c) {
      local_c = 1.0;
    }
  }
  else {
    local_c = 0.0;
  }
  if ((local_c == 0.0) || (*(int *)(*(int *)(local_8 + 0x38) + 0x178) == *(int *)(local_8 + 0x20)))
  {
    *(undefined4 *)(local_8 + 0x40) = 0;
  }
  else {
    if (*(int *)(local_8 + 0x1c) == 0) {
      puVar7 = (undefined4 *)thunk_FUN_10008500(param_1 + 0x70);
      puVar8 = (undefined4 *)thunk_FUN_10008500(local_18);
      *puVar8 = *puVar7;
      iVar5 = thunk_FUN_10008500(param_1 + 0x70);
      iVar6 = thunk_FUN_10008500(local_18);
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar5 + 4);
      iVar5 = thunk_FUN_10008500(param_1 + 0x70);
      iVar6 = thunk_FUN_10008500(local_18);
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar5 + 8);
      pfVar3 = (float *)thunk_FUN_10008500(local_18);
      pfVar4 = (float *)thunk_FUN_10008500(local_18);
      fVar1 = *pfVar3;
      fVar2 = *pfVar4;
      iVar5 = thunk_FUN_10008500(local_18);
      iVar6 = thunk_FUN_10008500(local_18);
      dVar11 = (double)(*(float *)(iVar5 + 4) * *(float *)(iVar6 + 4) + fVar1 * fVar2);
      FUN_100bbfe4(this_00,SUB84(dVar11,0),(uint)((ulonglong)dVar11 >> 0x20));
      *(float *)(local_8 + 0x40) = (float)(extraout_ST0_00 * (float10)local_c);
      local_1c = *(float *)(local_8 + 0x40);
    }
    else {
      pfVar3 = (float *)thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb48);
      pfVar4 = (float *)thunk_FUN_10008500(*(int *)(local_8 + 0x38) + 0x188);
      fVar1 = *pfVar3;
      fVar2 = *pfVar4;
      pfVar3 = (float *)thunk_FUN_10008500(local_18);
      *pfVar3 = fVar1 - fVar2;
      iVar5 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb48);
      iVar6 = thunk_FUN_10008500(*(int *)(local_8 + 0x38) + 0x188);
      fVar1 = *(float *)(iVar5 + 4);
      fVar2 = *(float *)(iVar6 + 4);
      iVar5 = thunk_FUN_10008500(local_18);
      *(float *)(iVar5 + 4) = fVar1 - fVar2;
      iVar5 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb48);
      iVar6 = thunk_FUN_10008500(*(int *)(local_8 + 0x38) + 0x188);
      fVar1 = *(float *)(iVar5 + 8);
      fVar2 = *(float *)(iVar6 + 8);
      iVar5 = thunk_FUN_10008500(local_18);
      *(float *)(iVar5 + 8) = fVar1 - fVar2;
      puVar7 = (undefined4 *)thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb48);
      puVar8 = (undefined4 *)thunk_FUN_10008500(*(int *)(local_8 + 0x38) + 0x188);
      *puVar8 = *puVar7;
      iVar5 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb48);
      iVar6 = thunk_FUN_10008500(*(int *)(local_8 + 0x38) + 0x188);
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar5 + 4);
      iVar5 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb48);
      iVar6 = thunk_FUN_10008500(*(int *)(local_8 + 0x38) + 0x188);
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar5 + 8);
      pfVar3 = (float *)thunk_FUN_10008500(local_18);
      pfVar4 = (float *)thunk_FUN_10008500(local_18);
      fVar1 = *pfVar3;
      fVar2 = *pfVar4;
      iVar5 = thunk_FUN_10008500(local_18);
      iVar6 = thunk_FUN_10008500(local_18);
      dVar11 = (double)(*(float *)(iVar5 + 4) * *(float *)(iVar6 + 4) + fVar1 * fVar2);
      FUN_100bbfe4(this,SUB84(dVar11,0),(uint)((ulonglong)dVar11 >> 0x20));
      *(float *)(local_8 + 0x40) = (float)extraout_ST0;
      local_1c = *(float *)(local_8 + 0x40) / local_c;
      if ((local_c < 0.0 != (local_c == 0.0)) || (*(float *)(local_8 + 0x40) / local_c < 5.0)) {
        *(undefined4 *)(local_8 + 0x40) = 0;
        puVar7 = (undefined4 *)thunk_FUN_10008500(local_18);
        *puVar7 = 0;
        iVar5 = thunk_FUN_10008500(local_18);
        *(undefined4 *)(iVar5 + 4) = 0;
      }
    }
    iVar5 = thunk_FUN_10008500(local_18);
    if ((*(float *)(iVar5 + 4) == 0.0) &&
       (pfVar3 = (float *)thunk_FUN_10008500(local_18), *pfVar3 == 0.0)) {
      iVar5 = thunk_FUN_10008500(*(int *)(local_8 + 0x30) + 0xb54);
      fVar1 = *(float *)(iVar5 + 4);
      fVar2 = *(float *)(*(int *)(local_8 + 0x38) + 0x184);
      lVar10 = __ftol();
      local_20 = (fVar1 - fVar2) - (float)((int)lVar10 * 0x168);
      if (180.0 < local_20) {
        local_20 = local_20 - 360.0;
      }
      if (local_20 < -180.0) {
        local_20 = local_20 + 360.0;
      }
      fVar1 = local_c;
      if (local_c < 0.25) {
        fVar1 = local_c * 4.0;
      }
      local_20 = fVar1 * local_20;
      *(float *)(*(int *)(local_8 + 0x38) + 0x184) =
           local_20 + *(float *)(*(int *)(local_8 + 0x38) + 0x184);
      iVar5 = *(int *)(local_8 + 0x38);
      lVar10 = __ftol();
      *(float *)(*(int *)(local_8 + 0x38) + 0x184) =
           *(float *)(iVar5 + 0x184) - (float)((int)lVar10 * 0x168);
      *(undefined4 *)(local_8 + 0x40) = 0;
    }
    else {
      pfVar3 = (float *)thunk_FUN_10008500(local_18);
      dVar11 = (double)*pfVar3;
      iVar5 = thunk_FUN_10008500(local_18);
      fVar9 = (float10)FUN_100c1560(SUB84((double)*(float *)(iVar5 + 4),0),
                                    (int)((ulonglong)(double)*(float *)(iVar5 + 4) >> 0x20),
                                    SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20));
      *(float *)(*(int *)(local_8 + 0x38) + 0x184) =
           (float)((fVar9 * (float10)180.0) / (float10)3.141592653589793);
      if (180.0 < *(float *)(*(int *)(local_8 + 0x38) + 0x184)) {
        *(undefined4 *)(*(int *)(local_8 + 0x38) + 0x184) = 0x43340000;
      }
      if (*(float *)(*(int *)(local_8 + 0x38) + 0x184) < -180.0) {
        *(undefined4 *)(*(int *)(local_8 + 0x38) + 0x184) = 0xc3340000;
      }
    }
    if (local_1c < 180.0) {
      *(float *)(local_8 + 0x40) = *(float *)(local_8 + 0x40) * 0.75;
    }
  }
  return;
}

/* 10066960  FUN_10066960  (1226 bytes)
 * undefined FUN_10066960(int param_1)
 * called by: thunk_FUN_10066960
 */
void __thiscall FUN_10066960(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float local_18;
  undefined1 local_14 [4];
  float local_10;
  int local_c;
  int *local_8;
  
  local_c = *(int *)((int)this + 0x44) + *(int *)(*(int *)((int)this + 0x44) + 0xa8) +
            *(int *)(*(int *)((int)this + 0x30) + 0x2dc) * 0xb0;
  local_8 = this;
  uVar3 = thunk_FUN_10008500(*(int *)((int)this + 0x30) + 0xb54);
  (**(code **)(*local_8 + 0x58))(local_c,local_14,uVar3);
  puVar4 = (undefined4 *)thunk_FUN_10008500(local_8[0xc] + 0xb54);
  puVar5 = (undefined4 *)thunk_FUN_10008500(local_8[0xc] + 0xb28);
  *puVar5 = *puVar4;
  *(undefined1 *)(local_8[0xc] + 0x31c) = local_14[0];
  *(undefined1 *)(local_8[0xc] + 0xb40) = *(undefined1 *)(local_8[0xc] + 0x31c);
  *(undefined1 *)(local_8[0xc] + 0xb18) = *(undefined1 *)(local_8[0xc] + 0x31c);
  local_10 = (float)((float10)*(double *)(local_8 + 2) - (float10)*(double *)(local_8 + 4));
  if (0.0 <= local_10) {
    if (1.0 < local_10) {
      local_10 = 1.0;
    }
  }
  else {
    local_10 = 0.0;
  }
  (**(code **)(*local_8 + 0x5c))(param_1);
  iVar6 = thunk_FUN_10008500(local_8[0xc] + 0xb54);
  fVar1 = *(float *)(iVar6 + 4);
  fVar2 = *(float *)(local_8[0xe] + 0x184);
  lVar9 = __ftol();
  local_18 = (fVar1 - fVar2) - (float)((int)lVar9 * 0x168);
  if (local_18 < -180.0) {
    local_18 = local_18 + 360.0;
  }
  if (180.0 < local_18) {
    local_18 = local_18 - 360.0;
  }
  if (local_18 <= 120.0) {
    if (local_18 < -120.0) {
      *(float *)(local_8[0xe] + 0x184) = *(float *)(local_8[0xe] + 0x184) + 180.0;
      local_8[0x10] = (int)-(float)local_8[0x10];
    }
  }
  else {
    *(float *)(local_8[0xe] + 0x184) = *(float *)(local_8[0xe] + 0x184) - 180.0;
    local_8[0x10] = (int)-(float)local_8[0x10];
  }
  lVar9 = __ftol();
  *(char *)(local_8[0xc] + 0x318) = (char)lVar9;
  lVar9 = __ftol();
  *(char *)(local_8[0xc] + 0x319) = (char)lVar9;
  lVar9 = __ftol();
  *(char *)(local_8[0xc] + 0x31a) = (char)lVar9;
  lVar9 = __ftol();
  *(char *)(local_8[0xc] + 0x31b) = (char)lVar9;
  *(undefined1 *)(local_8[0xc] + 0xb3c) = *(undefined1 *)(local_8[0xc] + 0x318);
  *(undefined1 *)(local_8[0xc] + 0xb3d) = *(undefined1 *)(local_8[0xc] + 0x319);
  *(undefined1 *)(local_8[0xc] + 0xb3e) = *(undefined1 *)(local_8[0xc] + 0x31a);
  *(undefined1 *)(local_8[0xc] + 0xb3f) = *(undefined1 *)(local_8[0xc] + 0x31b);
  iVar6 = local_8[0xe];
  iVar7 = thunk_FUN_10008500(local_8[0xc] + 0xb54);
  *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar6 + 0x184);
  iVar6 = thunk_FUN_10008500(local_8[0xc] + 0xb54);
  if (*(float *)(iVar6 + 4) < 0.0) {
    iVar6 = thunk_FUN_10008500(local_8[0xc] + 0xb54);
    *(float *)(iVar6 + 4) = *(float *)(iVar6 + 4) + 360.0;
  }
  iVar6 = thunk_FUN_10008500(local_8[0xc] + 0xb54);
  iVar7 = thunk_FUN_10008500(local_8[0xc] + 0xb28);
  *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar6 + 4);
  local_c = local_8[0x11] + *(int *)(local_8[0x11] + 0xa8) + *(int *)(param_1 + 0xb8) * 0xb0;
  pfVar8 = (float *)thunk_FUN_10008500(local_c + 0x4c);
  if (*pfVar8 <= 0.0) {
    *(float *)(local_8[0xe] + 0x180) =
         local_10 * *(float *)(local_c + 0x20) * *(float *)(local_8[0xc] + 0x310) +
         *(float *)(local_8[0xe] + 0x180);
  }
  else {
    iVar6 = local_8[0xe];
    pfVar8 = (float *)thunk_FUN_10008500(local_c + 0x4c);
    *(float *)(local_8[0xe] + 0x180) =
         ((float)local_8[0x10] / *pfVar8) * (float)*(int *)(local_c + 0x38) +
         *(float *)(iVar6 + 0x180);
  }
  iVar6 = local_8[0xe];
  lVar9 = __ftol();
  *(float *)(local_8[0xe] + 0x180) =
       *(float *)(iVar6 + 0x180) - (float)((int)lVar9 * *(int *)(local_c + 0x38));
  if (*(float *)(local_8[0xe] + 0x180) < 0.0) {
    *(float *)(local_8[0xe] + 0x180) =
         (float)*(int *)(local_c + 0x38) + *(float *)(local_8[0xe] + 0x180);
  }
  return;
}

/* 10066f60  FUN_10066f60  (1522 bytes)
 * undefined4 FUN_10066f60(uint param_1, int param_2)
 */
undefined4 FUN_10066f60(uint param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_bf4 [750];
  int local_3c;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [20];
  undefined4 local_c;
  int *local_8;
  
  thunk_FUN_100662d0((int)local_20);
  thunk_FUN_10007fe0(local_2c);
  iVar1 = (*DAT_102f15d8)();
  local_8[0xc] = iVar1;
  (*DAT_102f15e8)(local_8 + 8,local_8 + 2,local_8 + 4);
  (*DAT_102f15f0)(local_8 + 0x1023,local_8 + 0x101a,local_8 + 0x101d,local_8 + 0x1020);
  (*DAT_102f15fc)(local_8 + 0x1018,local_8 + 0x1019);
  local_8[0xf] = *(int *)(param_2 + 4) + -1;
  if ((local_8[0xf] < 0) || (iVar1 = (*DAT_102e14e8)(), iVar1 <= local_8[0xf])) {
    return 0;
  }
  if ((DAT_10320638 == 5) && (DAT_10320640 == *(int *)(param_2 + 4))) {
    return 0;
  }
  iVar1 = (*DAT_102f163c)(local_8[0xf]);
  local_8[0xd] = iVar1;
  if (local_8[0xd] == 0) {
    return 0;
  }
  iVar1 = (*DAT_102f15d0)(local_8[0xd]);
  local_8[0x11] = iVar1;
  (*DAT_102f164c)(local_8[0x11]);
  (*DAT_102f1650)(local_8[0xd]);
  if (*(int *)(param_2 + 0xb8) == 0) {
    *(undefined1 *)(local_8[0xc] + 0x318) = 0x7f;
    *(undefined1 *)(local_8[0xc] + 0x319) = 0x7f;
    *(undefined1 *)(local_8[0xc] + 0x31a) = 0x7f;
    *(undefined1 *)(local_8[0xc] + 0x31b) = 0x7f;
    *(undefined1 *)(local_8[0xc] + 0xb3c) = *(undefined1 *)(local_8[0xc] + 0x318);
    *(undefined1 *)(local_8[0xc] + 0xb3d) = *(undefined1 *)(local_8[0xc] + 0x319);
    *(undefined1 *)(local_8[0xc] + 0xb3e) = *(undefined1 *)(local_8[0xc] + 0x31a);
    *(undefined1 *)(local_8[0xc] + 0xb3f) = *(undefined1 *)(local_8[0xc] + 0x31b);
    iVar1 = (*DAT_102f15dc)(local_8[0xf]);
    local_8[0xe] = iVar1;
    *(undefined4 *)(local_8[0xe] + 0x17c) = 0;
    (**(code **)(*local_8 + 0x14))(0);
  }
  else {
    thunk_FUN_10007fe0(local_38);
    iVar1 = (*DAT_102f15dc)(local_8[0xf]);
    local_8[0xe] = iVar1;
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_8[0xc] + 0xb54);
    puVar3 = (undefined4 *)thunk_FUN_10008500(local_38);
    *puVar3 = *puVar2;
    iVar1 = thunk_FUN_10008500(local_8[0xc] + 0xb54);
    iVar4 = thunk_FUN_10008500(local_38);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar1 + 4);
    iVar1 = thunk_FUN_10008500(local_8[0xc] + 0xb54);
    iVar4 = thunk_FUN_10008500(local_38);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 8);
    (**(code **)(*local_8 + 0x60))(param_2);
    *(undefined4 *)(local_8[0xe] + 0x17c) = *(undefined4 *)(param_2 + 0xb8);
    local_8[0xe] = 0;
    (**(code **)(*local_8 + 0x14))(0);
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_38);
    puVar3 = (undefined4 *)thunk_FUN_10008500(local_8[0xc] + 0xb54);
    *puVar3 = *puVar2;
    iVar1 = thunk_FUN_10008500(local_38);
    iVar4 = thunk_FUN_10008500(local_8[0xc] + 0xb54);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar1 + 4);
    iVar1 = thunk_FUN_10008500(local_38);
    iVar4 = thunk_FUN_10008500(local_8[0xc] + 0xb54);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 8);
  }
  if ((param_1 & 1) != 0) {
    iVar1 = (*DAT_102f1614)();
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)local_8[0x1027] = *(int *)local_8[0x1027] + 1;
    *(int *)local_8[0x1026] = *(int *)local_8[0x1026] + 1;
    if (*(int *)(local_8[0x11] + 0xcc) == 0) {
      return 1;
    }
  }
  iVar1 = (*DAT_102f15dc)(local_8[0xf]);
  local_8[0xe] = iVar1;
  (**(code **)(*local_8 + 0x18))();
  (**(code **)(*local_8 + 0x20))();
  *(int *)(local_8[0xe] + 0x178) = local_8[8];
  local_8[0xe] = 0;
  if ((param_1 & 2) != 0) {
    (**(code **)(*local_8 + 0x1c))();
    (*DAT_102f1640)();
    if (0 < *(int *)local_8[0xc]) {
      local_3c = (*DAT_102e152c)(*(undefined4 *)local_8[0xc]);
      FUN_100bc090((undefined4 *)(local_3c + 0xb60),(undefined4 *)(local_8[0xc] + 0xb60),0x30);
    }
  }
  if ((param_1 & 1) != 0) {
    local_c = thunk_FUN_10008500(local_2c);
    (*DAT_102f1618)(local_8[0xc],local_20);
    (*DAT_102f161c)(local_20);
    (*DAT_102f1620)(local_20);
    iVar1 = (*DAT_102f15dc)(local_8[0xf]);
    local_8[0xe] = iVar1;
    local_8[0x14] = *(int *)(local_8[0xe] + 0x170);
    if (local_8[0x14] < 0) {
      local_8[0x14] = 0;
    }
    if (0x168 < local_8[0x14]) {
      local_8[0x14] = 0x168;
    }
    local_8[0x15] = *(int *)(local_8[0xe] + 0x174);
    if (local_8[0x15] < 0) {
      local_8[0x15] = 0;
    }
    if (0x168 < local_8[0x15]) {
      local_8[0x15] = 0x168;
    }
    (*DAT_102f1638)(local_8[0x14],local_8[0x15]);
    (**(code **)(*local_8 + 0x48))();
    local_8[0xe] = 0;
    if (*(int *)(param_2 + 0xb4) != 0) {
      thunk_FUN_100676d0(local_bf4,(undefined4 *)local_8[0xc]);
      uVar5 = (*DAT_102f15d4)(*(undefined4 *)(param_2 + 0xb4));
      iVar1 = (*DAT_102f15d0)(uVar5);
      local_8[0x11] = iVar1;
      (*DAT_102f164c)(local_8[0x11]);
      (**(code **)(*local_8 + 0x24))(uVar5);
      (*DAT_102f1620)(local_20);
      (**(code **)(*local_8 + 0x48))();
      (**(code **)(*local_8 + 0x1c))();
      puVar2 = local_bf4;
      puVar3 = (undefined4 *)local_8[0xc];
      for (iVar1 = 0x2ee; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return 1;
}

/* 100676d0  FUN_100676d0  (540 bytes)
 * undefined4 * FUN_100676d0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_100676d0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *local_20;
  void *local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  int local_c;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  thunk_FUN_10067980((void *)((int)this + 8),param_1 + 2);
  thunk_FUN_10067980((void *)((int)this + 0x15c),param_1 + 0x57);
  thunk_FUN_10067980((void *)((int)this + 0x2b0),param_1 + 0xac);
  *(undefined4 *)((int)this + 0x404) = param_1[0x101];
  local_c = 0x40;
  local_10 = (void *)((int)this + 0x408);
  local_14 = param_1 + 0x102;
  do {
    thunk_FUN_10067eb0(local_10,local_14);
    local_10 = (void *)((int)local_10 + 0x1c);
    local_14 = local_14 + 7;
    local_c = local_c + -1;
  } while (local_c != 0);
  uVar1 = param_1[0x2c3];
  *(undefined4 *)((int)this + 0xb08) = param_1[0x2c2];
  *(undefined4 *)((int)this + 0xb0c) = uVar1;
  thunk_FUN_10067f10((void *)((int)this + 0xb10),param_1 + 0x2c4);
  *(undefined4 *)((int)this + 0xb44) = param_1[0x2d1];
  thunk_FUN_10015ce0((void *)((int)this + 0xb48),param_1 + 0x2d2);
  thunk_FUN_10015ce0((void *)((int)this + 0xb54),param_1 + 0x2d5);
  local_18 = 4;
  local_1c = (void *)((int)this + 0xb60);
  local_20 = param_1 + 0x2d8;
  do {
    thunk_FUN_10015ce0(local_1c,local_20);
    local_1c = (void *)((int)local_1c + 0xc);
    local_20 = local_20 + 3;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  *(undefined4 *)((int)this + 0xb90) = param_1[0x2e4];
  *(undefined4 *)((int)this + 0xb94) = param_1[0x2e5];
  *(undefined4 *)((int)this + 0xb98) = param_1[0x2e6];
  *(undefined4 *)((int)this + 0xb9c) = param_1[0x2e7];
  *(undefined4 *)((int)this + 0xba0) = param_1[0x2e8];
  *(undefined4 *)((int)this + 0xba4) = param_1[0x2e9];
  *(undefined4 *)((int)this + 0xba8) = param_1[0x2ea];
  *(undefined4 *)((int)this + 0xbac) = param_1[0x2eb];
  *(undefined4 *)((int)this + 0xbb0) = param_1[0x2ec];
  *(undefined4 *)((int)this + 0xbb4) = param_1[0x2ed];
  return this;
}

/* 10067980  FUN_10067980  (1056 bytes)
 * undefined4 * FUN_10067980(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10067980(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  thunk_FUN_10015ce0((void *)((int)this + 0x10),param_1 + 4);
  thunk_FUN_10015ce0((void *)((int)this + 0x1c),param_1 + 7);
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined2 *)((int)this + 0x38) = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)((int)this + 0x3a) = *(undefined2 *)((int)param_1 + 0x3a);
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined1 *)((int)this + 0x44) = *(undefined1 *)(param_1 + 0x11);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined2 *)((int)this + 0x50) = *(undefined2 *)(param_1 + 0x14);
  *(undefined1 *)((int)this + 0x52) = *(undefined1 *)((int)param_1 + 0x52);
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  thunk_FUN_10015ce0((void *)((int)this + 0x70),param_1 + 0x1c);
  thunk_FUN_10015ce0((void *)((int)this + 0x7c),param_1 + 0x1f);
  thunk_FUN_10015ce0((void *)((int)this + 0x88),param_1 + 0x22);
  *(undefined4 *)((int)this + 0x94) = param_1[0x25];
  *(undefined4 *)((int)this + 0x98) = param_1[0x26];
  *(undefined4 *)((int)this + 0x9c) = param_1[0x27];
  *(undefined4 *)((int)this + 0xa0) = param_1[0x28];
  *(undefined4 *)((int)this + 0xa4) = param_1[0x29];
  *(undefined4 *)((int)this + 0xa8) = param_1[0x2a];
  *(undefined4 *)((int)this + 0xac) = param_1[0x2b];
  *(undefined4 *)((int)this + 0xb0) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  *(undefined4 *)((int)this + 0xb8) = param_1[0x2e];
  thunk_FUN_10015ce0((void *)((int)this + 0xbc),param_1 + 0x2f);
  *(undefined4 *)((int)this + 200) = param_1[0x32];
  *(undefined4 *)((int)this + 0xcc) = param_1[0x33];
  *(undefined4 *)((int)this + 0xd0) = param_1[0x34];
  *(undefined4 *)((int)this + 0xd4) = param_1[0x35];
  *(undefined4 *)((int)this + 0xd8) = param_1[0x36];
  *(undefined4 *)((int)this + 0xdc) = param_1[0x37];
  *(undefined4 *)((int)this + 0xe0) = param_1[0x38];
  thunk_FUN_10015ce0((void *)((int)this + 0xe4),param_1 + 0x39);
  thunk_FUN_10015ce0((void *)((int)this + 0xf0),param_1 + 0x3c);
  *(undefined4 *)((int)this + 0xfc) = param_1[0x3f];
  *(undefined4 *)((int)this + 0x100) = param_1[0x40];
  *(undefined4 *)((int)this + 0x104) = param_1[0x41];
  *(undefined4 *)((int)this + 0x108) = param_1[0x42];
  *(undefined4 *)((int)this + 0x10c) = param_1[0x43];
  *(undefined4 *)((int)this + 0x110) = param_1[0x44];
  *(undefined4 *)((int)this + 0x114) = param_1[0x45];
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  *(undefined4 *)((int)this + 0x11c) = param_1[0x47];
  *(undefined4 *)((int)this + 0x120) = param_1[0x48];
  thunk_FUN_10015ce0((void *)((int)this + 0x124),param_1 + 0x49);
  thunk_FUN_10015ce0((void *)((int)this + 0x130),param_1 + 0x4c);
  thunk_FUN_10015ce0((void *)((int)this + 0x13c),param_1 + 0x4f);
  thunk_FUN_10015ce0((void *)((int)this + 0x148),param_1 + 0x52);
  return this;
}

/* 10067eb0  FUN_10067eb0  (70 bytes)
 * undefined4 * FUN_10067eb0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10067eb0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  thunk_FUN_10015ce0((void *)((int)this + 4),param_1 + 1);
  thunk_FUN_10015ce0((void *)((int)this + 0x10),param_1 + 4);
  return this;
}

/* 10067f10  FUN_10067f10  (146 bytes)
 * undefined4 * FUN_10067f10(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10067f10(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 2);
  thunk_FUN_10015ce0((void *)((int)this + 0xc),param_1 + 3);
  thunk_FUN_10015ce0((void *)((int)this + 0x18),param_1 + 6);
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_1 + 0xc);
  return this;
}

/* 10067fd0  FUN_10067fd0  (204 bytes)
 * undefined FUN_10067fd0(int param_1)
 * called by: thunk_FUN_10067fd0
 */
void __fastcall FUN_10067fd0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int local_c;
  
  if (4 < *(int *)(*(int *)(param_1 + 0x44) + 0xd4)) {
    (*DAT_102e14fc)("Too many attachments on %s\n",*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xb94)
                   );
    FUN_100bbc60(0xffffffff);
  }
  iVar1 = *(int *)(param_1 + 0x44) + *(int *)(*(int *)(param_1 + 0x44) + 0xd8);
  for (local_c = 0; local_c < *(int *)(*(int *)(param_1 + 0x44) + 0xd4); local_c = local_c + 1) {
    pfVar2 = (float *)thunk_FUN_10008500(*(int *)(param_1 + 0x30) + 0xb60 + local_c * 0xc);
    pfVar4 = (float *)(*(int *)(iVar1 + 0x24 + local_c * 0x58) * 0x30 + *(int *)(param_1 + 0x40ac));
    pfVar3 = (float *)thunk_FUN_10008500(iVar1 + 0x28 + local_c * 0x58);
    thunk_FUN_100621a0(pfVar3,pfVar4,pfVar2);
  }
  return;
}

/* 100680d0  FUN_100680d0  (200 bytes)
 * undefined FUN_100680d0(int * param_1)
 * called by: thunk_FUN_100680d0
 */
void __fastcall FUN_100680d0(int *param_1)

{
  int iVar1;
  
  (*DAT_102f165c)();
  (*DAT_102f1648)(0);
  if (*(int *)(param_1[0xc] + 0x304) == 0x13) {
    *(undefined4 *)(param_1[0xc] + 0x304) = 0;
    (**(code **)(*param_1 + 0x4c))();
    iVar1 = (*DAT_102f1660)();
    if (iVar1 == 0) {
      (**(code **)(DAT_102e15a0 + 4))(5);
    }
    (*DAT_102f1648)(2);
    (**(code **)(DAT_102e15a0 + 0x2c))(param_1[0x16],0);
    *(undefined4 *)(param_1[0xc] + 0x304) = 0x13;
    (**(code **)(*param_1 + 0x4c))();
    iVar1 = (*DAT_102f1660)();
    if (iVar1 == 0) {
      (**(code **)(DAT_102e15a0 + 4))(0);
    }
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
  }
  return;
}

/* 100681d0  FUN_100681d0  (248 bytes)
 * undefined FUN_100681d0(int param_1)
 * called by: thunk_FUN_100681d0
 */
void __fastcall FUN_100681d0(int param_1)

{
  undefined4 local_c;
  
  (*DAT_102f1654)(0);
  if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == 2.0) {
    (*DAT_102f1630)();
  }
  else if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == 3.0) {
    (*DAT_102f1628)();
  }
  else {
    for (local_c = 0; local_c < *(int *)(*(int *)(param_1 + 0x44) + 0xcc); local_c = local_c + 1) {
      (*DAT_102f1610)(local_c,param_1 + 0x48,param_1 + 0x4c);
      (*DAT_102f1624)();
    }
  }
  if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == 4.0) {
    (**(code **)(DAT_102e15a0 + 4))(5);
    (*DAT_102f1628)();
    (**(code **)(DAT_102e15a0 + 4))(0);
  }
  if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == 5.0) {
    (*DAT_102f162c)();
  }
  (*DAT_102f1658)();
  return;
}

/* 10068310  FUN_10068310  (309 bytes)
 * undefined FUN_10068310(int param_1)
 * called by: thunk_FUN_10068310
 */
void __fastcall FUN_10068310(int param_1)

{
  int iVar1;
  undefined4 local_54;
  undefined4 local_c;
  
  iVar1 = (*DAT_102f1644)();
  if (iVar1 == 0) {
    local_54 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x2f8);
  }
  else {
    local_54 = 5;
  }
  (*DAT_102f1654)(local_54);
  if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == 2.0) {
    (*DAT_102f1630)();
  }
  else if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == 3.0) {
    (*DAT_102f1628)();
  }
  else {
    for (local_c = 0; local_c < *(int *)(*(int *)(param_1 + 0x44) + 0xcc); local_c = local_c + 1) {
      (*DAT_102f1610)(local_c,param_1 + 0x48,param_1 + 0x4c);
      if (*(int *)(param_1 + 0x18) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xb90) = 0;
      }
      (*DAT_102f1668)(local_54);
      (*DAT_102f1624)();
      (*DAT_102f1664)();
    }
  }
  if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == 4.0) {
    (**(code **)(DAT_102e15a0 + 4))(5);
    (*DAT_102f1628)();
    (**(code **)(DAT_102e15a0 + 4))(0);
  }
  (*DAT_102f1658)();
  return;
}

/* 100684a0  FUN_100684a0  (53 bytes)
 * undefined FUN_100684a0(int * param_1)
 * called by: thunk_FUN_100684a0
 */
void __fastcall FUN_100684a0(int *param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_102f1660)();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x50))();
  }
  else {
    (**(code **)(*param_1 + 0x54))();
  }
  return;
}

/* 100684f0  FUN_100684f0  (38 bytes)
 * undefined FUN_100684f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_100684f0
 */
void __cdecl FUN_100684f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_100688f0(param_1,param_2,param_3);
  return;
}

/* 10068520  FUN_10068520  (68 bytes)
 * undefined4 FUN_10068520(int * param_1)
 * called by: thunk_FUN_10068520
 */
undefined4 __fastcall FUN_10068520(int *param_1)

{
  (*DAT_102e14a0)("TextMsg",thunk_FUN_100684f0);
  thunk_FUN_10046ec0(&DAT_102da3c8,(int)param_1);
  (**(code **)(*param_1 + 0x14))();
  return 1;
}

/* 10068580  FUN_10068580  (363 bytes)
 * char * FUN_10068580(char * param_1, char * param_2, int param_3)
 */
char * __cdecl FUN_10068580(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char *local_1c;
  char *local_10;
  char *local_c;
  char *local_8;
  
  local_8 = param_2;
  local_c = param_1;
  for (; (pcVar1 = local_c, *local_c != '\0' && (0 < param_3)); param_3 = param_3 + -1) {
    if (*local_c == '#') {
      local_10 = &DAT_102f2d70;
      while (((local_c = local_c + 1, '@' < *local_c && (*local_c < '{')) ||
             (('/' < *local_c && (*local_c < ':'))))) {
        *local_10 = *local_c;
        local_10 = local_10 + 1;
      }
      *local_10 = '\0';
      iVar2 = thunk_FUN_10056210(&DAT_102f2d70);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x28) == 0)) {
        *local_8 = *pcVar1;
        local_8 = local_8 + 1;
        local_c = pcVar1 + 1;
      }
      else {
        for (local_1c = *(char **)(iVar2 + 0x28); *local_1c != '\0'; local_1c = local_1c + 1) {
          *local_8 = *local_1c;
          local_8 = local_8 + 1;
        }
        *local_8 = '\0';
      }
    }
    else {
      *local_8 = *local_c;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      *local_8 = '\0';
    }
  }
  param_2[param_3 + -1] = '\0';
  return param_2;
}

/* 10068750  FUN_10068750  (43 bytes)
 * undefined * FUN_10068750(char * param_1)
 */
undefined * __cdecl FUN_10068750(char *param_1)

{
  thunk_FUN_10068580(param_1,&DAT_102f3170,0x400);
  return &DAT_102f3170;
}

/* 10068790  FUN_10068790  (120 bytes)
 * char * FUN_10068790(char * param_1, int * param_2)
 */
char * FUN_10068790(char *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1 == (char *)0x0) {
    param_1 = "";
  }
  else if (((*param_1 == '#') &&
           (piVar1 = (int *)thunk_FUN_10056210(param_1 + 1), piVar1 != (int *)0x0)) &&
          (piVar1[10] != 0)) {
    if ((param_2 != (int *)0x0) && (*piVar1 < 0)) {
      *param_2 = -*piVar1;
    }
    param_1 = (char *)piVar1[10];
  }
  return param_1;
}

/* 10068830  FUN_10068830  (71 bytes)
 * undefined FUN_10068830(char * param_1)
 */
void __cdecl FUN_10068830(char *param_1)

{
  size_t sVar1;
  int iVar2;
  
  sVar1 = _strlen(param_1);
  iVar2 = sVar1 - 1;
  if ((param_1[iVar2] == '\n') || (param_1[iVar2] == '\r')) {
    param_1[iVar2] = '\0';
  }
  return;
}

/* 10068890  FUN_10068890  (65 bytes)
 * char * FUN_10068890(char * param_1)
 */
char * __cdecl FUN_10068890(char *param_1)

{
  char *local_8;
  
  for (local_8 = param_1; *local_8 != '\0'; local_8 = local_8 + 1) {
    if (*local_8 == '\r') {
      *local_8 = '\n';
    }
  }
  return param_1;
}

/* 100688f0  FUN_100688f0  (615 bytes)
 * undefined4 FUN_100688f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_100688f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint local_c [2];
  
  thunk_FUN_10056240(param_3,param_2);
  local_c[0] = thunk_FUN_10056300();
  puVar2 = local_c;
  pcVar1 = thunk_FUN_10056560();
  puVar2 = (uint *)thunk_FUN_10068790(pcVar1,(int *)puVar2);
  puVar2 = FUN_100bba20((uint *)&DAT_102f2e70,puVar2);
  piVar6 = (int *)0x0;
  pcVar1 = thunk_FUN_10056560();
  puVar3 = (uint *)thunk_FUN_10068790(pcVar1,piVar6);
  puVar3 = FUN_100bba20((uint *)&DAT_102f2ef0,puVar3);
  thunk_FUN_10068830((char *)puVar3);
  piVar6 = (int *)0x0;
  pcVar1 = thunk_FUN_10056560();
  puVar3 = (uint *)thunk_FUN_10068790(pcVar1,piVar6);
  puVar3 = FUN_100bba20((uint *)&DAT_102f2f70,puVar3);
  thunk_FUN_10068830((char *)puVar3);
  piVar6 = (int *)0x0;
  pcVar1 = thunk_FUN_10056560();
  puVar3 = (uint *)thunk_FUN_10068790(pcVar1,piVar6);
  puVar3 = FUN_100bba20((uint *)&DAT_102f2ff0,puVar3);
  thunk_FUN_10068830((char *)puVar3);
  piVar6 = (int *)0x0;
  pcVar1 = thunk_FUN_10056560();
  puVar3 = (uint *)thunk_FUN_10068790(pcVar1,piVar6);
  puVar3 = FUN_100bba20((uint *)&DAT_102f3070,puVar3);
  thunk_FUN_10068830((char *)puVar3);
  if ((DAT_102e15e0 == 0) || (uVar4 = thunk_FUN_100b00d0(DAT_102e15e0), (uVar4 & 0xff) != 0)) {
    switch(local_c[0]) {
    case 1:
      DAT_102f30f0 = 1;
      FUN_100bb6e0(&DAT_102f30f1,(byte_conflict *)puVar2);
      pcVar1 = thunk_FUN_10068890(&DAT_102f30f0);
      thunk_FUN_10040c60(pcVar1);
      break;
    case 2:
      FUN_100bb6e0(&DAT_102f30f0,(byte_conflict *)puVar2);
      pcVar1 = thunk_FUN_10068890(&DAT_102f30f0);
      thunk_FUN_10040c60(pcVar1);
      break;
    case 3:
      FUN_100bb6e0(&DAT_102f30f0,(byte_conflict *)puVar2);
      iVar7 = -1;
      iVar5 = 0x80;
      puVar2 = (uint *)thunk_FUN_10068890(&DAT_102f30f0);
      thunk_FUN_10060890(&DAT_102da950,puVar2,iVar5,iVar7);
      break;
    case 4:
      FUN_100bb6e0(&DAT_102f30f0,(byte_conflict *)puVar2);
      pcVar1 = thunk_FUN_10068890(&DAT_102f30f0);
      thunk_FUN_10068c10(pcVar1);
    }
  }
  return 1;
}

/* 10068c10  FUN_10068c10  (29 bytes)
 * undefined FUN_10068c10(undefined4 param_1)
 */
void __cdecl FUN_10068c10(undefined4 param_1)

{
  (*DAT_102e14d4)(param_1);
  return;
}

/* 10068c40  FUN_10068c40  (38 bytes)
 * undefined FUN_10068c40(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10068c40
 */
void __cdecl FUN_10068c40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10068e20(&DAT_102da5b4,param_1,param_2,param_3);
  return;
}

/* 10068c70  FUN_10068c70  (77 bytes)
 * undefined4 FUN_10068c70(int param_1)
 * called by: thunk_FUN_10068c70
 */
undefined4 __fastcall FUN_10068c70(int param_1)

{
  (*DAT_102e14a0)("Train",thunk_FUN_10068c40);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  thunk_FUN_10046ec0(&DAT_102da3c8,param_1);
  return 1;
}

/* 10068cd0  FUN_10068cd0  (34 bytes)
 * undefined4 FUN_10068cd0(int param_1)
 * called by: thunk_FUN_10068cd0
 */
undefined4 __fastcall FUN_10068cd0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

/* 10068d00  FUN_10068d00  (229 bytes)
 * undefined4 FUN_10068d00(int param_1)
 * called by: thunk_FUN_10068d00
 */
undefined4 __fastcall FUN_10068d00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_8 = param_1;
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = thunk_FUN_10098390((byte_conflict *)"sprites/%d_train.spr");
    *(undefined4 *)(local_8 + 0x14) = uVar1;
  }
  if (*(int *)(local_8 + 0x18) != 0) {
    thunk_FUN_1003d340(&local_c,&local_10,&local_14,0xffa000);
    (*DAT_102e1468)(*(undefined4 *)(local_8 + 0x14),local_c,local_10,local_14);
    iVar2 = thunk_FUN_10045300(*(undefined4 *)(local_8 + 0x14),0);
    iVar4 = (DAT_102e1238 - iVar2) - DAT_102da430;
    iVar2 = DAT_102e1234 / 3;
    iVar3 = thunk_FUN_10045330(*(undefined4 *)(local_8 + 0x14),0);
    (*DAT_102e1474)(*(int *)(local_8 + 0x18) + -1,iVar2 + ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)
                    ,iVar4,0);
  }
  return 1;
}

/* 10068e20  FUN_10068e20  (94 bytes)
 * undefined4 FUN_10068e20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10068e20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(uint *)((int)this + 0x18) = uVar1;
  if (*(int *)((int)this + 0x18) == 0) {
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
  }
  else {
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  }
  return 1;
}

/* 10068ea0  FUN_10068ea0  (26 bytes)
 * void FUN_10068ea0(void)
 */
void FUN_10068ea0(void)

{
  thunk_FUN_1004dd10(0x102daaa0);
  return;
}

/* 10068ec0  FUN_10068ec0  (21 bytes)
 * void FUN_10068ec0(void)
 */
void FUN_10068ec0(void)

{
  thunk_FUN_10095df0();
  return;
}

/* 10068ee0  FUN_10068ee0  (35 bytes)
 * undefined FUN_10068ee0(void)
 */
void FUN_10068ee0(void)

{
  if (DAT_102f9310 != 0) {
    thunk_FUN_1006a070();
  }
  return;
}

/* 10068f10  FUN_10068f10  (56 bytes)
 * undefined FUN_10068f10(void)
 */
void FUN_10068f10(void)

{
  if (DAT_10310a5c == '\0') {
    thunk_FUN_10069160(0x102f3710);
  }
  if (DAT_102f9310 != 0) {
    thunk_FUN_10069450(0x102f3710);
  }
  return;
}

/* 10068f60  FUN_10068f60  (26 bytes)
 * undefined FUN_10068f60(void)
 */
void FUN_10068f60(void)

{
  thunk_FUN_10069100(&DAT_102f3710);
  return;
}

/* 10068f80  FUN_10068f80  (26 bytes)
 * undefined FUN_10068f80(void)
 */
void FUN_10068f80(void)

{
  FUN_10068fa0();
  FUN_10068fc0();
  return;
}

/* 10068fa0  FUN_10068fa0  (26 bytes)
 * undefined FUN_10068fa0(void)
 * called by: FUN_10068f80
 */
void FUN_10068fa0(void)

{
  thunk_FUN_10069010(&DAT_102f3710);
  return;
}

/* 10068fc0  FUN_10068fc0  (29 bytes)
 * undefined FUN_10068fc0(void)
 * called by: FUN_10068f80
 */
void FUN_10068fc0(void)

{
  FUN_100bc490(0x10068ff0);
  return;
}

/* 10068ff0  FUN_10068ff0  (26 bytes)
 * undefined FUN_10068ff0(void)
 */
void FUN_10068ff0(void)

{
  thunk_FUN_100690d0(&DAT_102f3710);
  return;
}

/* 10069010  FUN_10069010  (77 bytes)
 * void * FUN_10069010(void * param_1)
 */
void * __fastcall FUN_10069010(void *param_1)

{
  thunk_FUN_1000cb80(param_1,0x5c,0x100,thunk_FUN_10069070);
  thunk_FUN_1000cb80((int)param_1 + 0x5c08,3000,0x20,thunk_FUN_10036630);
  thunk_FUN_10069100(param_1);
  return param_1;
}

/* 10069070  FUN_10069070  (77 bytes)
 * int FUN_10069070(int param_1)
 * called by: thunk_FUN_10069070
 */
int __fastcall FUN_10069070(int param_1)

{
  thunk_FUN_10007fe0(param_1 + 4);
  thunk_FUN_10007fe0(param_1 + 0x10);
  thunk_FUN_10007fe0(param_1 + 0x1c);
  thunk_FUN_10007fe0(param_1 + 0x28);
  thunk_FUN_10007fe0(param_1 + 0x34);
  return param_1;
}

/* 100690d0  FUN_100690d0  (27 bytes)
 * undefined FUN_100690d0(void * param_1)
 */
void __fastcall FUN_100690d0(void *param_1)

{
  thunk_FUN_10069100(param_1);
  return;
}

/* 10069100  FUN_10069100  (74 bytes)
 * undefined FUN_10069100(void * param_1)
 */
void __fastcall FUN_10069100(void *param_1)

{
  _memset(param_1,0,0x5c00);
  *(undefined4 *)((int)param_1 + 0x5c00) = 0;
  *(undefined4 *)((int)param_1 + 0x5c04) = 0;
  *(undefined1 *)((int)param_1 + 0x1d34c) = 0;
  return;
}

/* 10069160  FUN_10069160  (591 bytes)
 * undefined FUN_10069160(int param_1)
 */
void __fastcall FUN_10069160(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_10;
  
  *(undefined1 *)(param_1 + 0x1d34c) = 1;
  _memset((void *)(param_1 + 0x5c08),0,96000);
  _memset((void *)(param_1 + 0x1d30c),0,0x20);
  uVar2 = (*DAT_102e1548)("models/bullet.mdl",param_1 + 0x1d32c);
  *(undefined4 *)(param_1 + 0x1d30c) = uVar2;
  uVar2 = (*DAT_102e1548)("models/long_bullet.mdl",param_1 + 0x1d330);
  *(undefined4 *)(param_1 + 0x1d310) = uVar2;
  uVar2 = (*DAT_102e1548)("models/pellet.mdl",param_1 + 0x1d334);
  *(undefined4 *)(param_1 + 0x1d314) = uVar2;
  if (((*(int *)(param_1 + 0x1d30c) == 0) || (*(int *)(param_1 + 0x1d310) == 0)) ||
     (*(int *)(param_1 + 0x1d314) == 0)) {
    *(undefined4 *)(param_1 + 0x1d30c) = 0;
    *(undefined4 *)(param_1 + 0x1d310) = 0;
    *(undefined4 *)(param_1 + 0x1d314) = 0;
    *(undefined1 *)(param_1 + 0x1d34d) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x1d34d) = 1;
    for (local_10 = 1; local_10 < 0x20; local_10 = local_10 + 1) {
      iVar1 = param_1 + 0x5c08 + local_10 * 3000;
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 0xb94) = *(undefined4 *)(param_1 + 0x1d30c);
      *(undefined4 *)(iVar1 + 0x2d8) = *(undefined4 *)(param_1 + 0x1d32c);
      puVar3 = (undefined4 *)thunk_FUN_10008500(iVar1 + 0xb48);
      *puVar3 = 0;
      iVar4 = thunk_FUN_10008500(iVar1 + 0xb48);
      *(undefined4 *)(iVar4 + 4) = 0;
      iVar4 = thunk_FUN_10008500(iVar1 + 0xb48);
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xb60) = *(undefined4 *)(iVar1 + 0xb48);
      *(undefined4 *)(iVar1 + 0xb64) = *(undefined4 *)(iVar1 + 0xb4c);
      *(undefined4 *)(iVar1 + 0xb68) = *(undefined4 *)(iVar1 + 0xb50);
      *(undefined4 *)(iVar1 + 0xb6c) = *(undefined4 *)(iVar1 + 0xb48);
      *(undefined4 *)(iVar1 + 0xb70) = *(undefined4 *)(iVar1 + 0xb4c);
      *(undefined4 *)(iVar1 + 0xb74) = *(undefined4 *)(iVar1 + 0xb50);
      *(undefined4 *)(iVar1 + 0xb78) = *(undefined4 *)(iVar1 + 0xb48);
      *(undefined4 *)(iVar1 + 0xb7c) = *(undefined4 *)(iVar1 + 0xb4c);
      *(undefined4 *)(iVar1 + 0xb80) = *(undefined4 *)(iVar1 + 0xb50);
      *(undefined4 *)(iVar1 + 0xb84) = *(undefined4 *)(iVar1 + 0xb48);
      *(undefined4 *)(iVar1 + 0xb88) = *(undefined4 *)(iVar1 + 0xb4c);
      *(undefined4 *)(iVar1 + 0xb8c) = *(undefined4 *)(iVar1 + 0xb50);
      *(undefined4 *)(iVar1 + 0x3c0) = 0;
    }
    *(undefined4 *)(param_1 + 0x1d308) = 1;
  }
  return;
}

/* 10069450  FUN_10069450  (180 bytes)
 * undefined FUN_10069450(int param_1)
 */
void __fastcall FUN_10069450(int param_1)

{
  undefined4 local_50;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x1d34d) != '\0') {
    for (local_c = 1; local_c < *(int *)(param_1 + 0x1d308); local_c = local_c + 1) {
      if (DAT_1031b819 == '\0') {
        local_50 = thunk_FUN_100967d0((void *)(param_1 + 0x6750 + local_c * 3000));
      }
      else {
        local_50 = 0;
      }
      *(undefined4 *)(param_1 + 0x5f1c + local_c * 3000) = local_50;
      (*DAT_102e154c)(0,param_1 + 0x5c08 + local_c * 3000);
    }
  }
  return;
}

/* 10069540  FUN_10069540  (2139 bytes)
 * undefined FUN_10069540(int param_1, int param_2)
 */
void FUN_10069540(int param_1,int param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 uVar9;
  undefined1 *puVar10;
  float fVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  float fVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 *puVar18;
  float fVar19;
  double local_14c;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined8 local_12c;
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64 [3];
  undefined1 local_58 [80];
  void *local_8;
  
  thunk_FUN_1006a030(local_58);
  thunk_FUN_10007fe0(local_64);
  if ((-1 < param_2) &&
     (uVar1 = thunk_FUN_100968f0((void *)((int)local_8 + param_1 * 0x5c + 0x28)),
     (uVar1 & 0xff) != 0)) {
    if (((DAT_1031bef4 != '\0') || (DAT_1031bee4 < 0.1 != (DAT_1031bee4 == 0.1))) &&
       ((*(char *)((int)local_8 + 0x1d34d) != '\0' && (*(int *)((int)local_8 + 0x1d308) < 0x20)))) {
      switch(*(undefined4 *)((int)local_8 + param_1 * 0x5c + 0x44)) {
      case 3:
        *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1d308) * 3000 + 0x679c) =
             *(undefined4 *)((int)local_8 + 0x1d314);
        *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1d308) * 3000 + 0x5ee0) =
             *(undefined4 *)((int)local_8 + 0x1d334);
        break;
      case 4:
      case 6:
      case 8:
        *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1d308) * 3000 + 0x679c) =
             *(undefined4 *)((int)local_8 + 0x1d310);
        *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1d308) * 3000 + 0x5ee0) =
             *(undefined4 *)((int)local_8 + 0x1d330);
        break;
      default:
        *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1d308) * 3000 + 0x679c) =
             *(undefined4 *)((int)local_8 + 0x1d30c);
        *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1d308) * 3000 + 0x5ee0) =
             *(undefined4 *)((int)local_8 + 0x1d32c);
      }
      puVar12 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x28);
      puVar6 = (undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1d308) * 3000 + 0x6750);
      *puVar6 = *puVar12;
      puVar6[1] = puVar12[1];
      puVar6[2] = puVar12[2];
      pfVar2 = (float *)thunk_FUN_10008500((int)local_8 + param_1 * 0x5c + 0x1c);
      pfVar3 = (float *)thunk_FUN_10008500((int)local_8 +
                                           *(int *)((int)local_8 + 0x1d308) * 3000 + 0x5ed4);
      thunk_FUN_1007d6c0(pfVar3,pfVar2);
      pfVar2 = (float *)thunk_FUN_10008500((int)local_8 +
                                           *(int *)((int)local_8 + 0x1d308) * 3000 + 0x5ed4);
      fVar14 = *pfVar2;
      pfVar2 = (float *)thunk_FUN_10008500((int)local_8 +
                                           *(int *)((int)local_8 + 0x1d308) * 3000 + 0x5ed4);
      *pfVar2 = -fVar14;
      *(int *)((int)local_8 + 0x1d308) = *(int *)((int)local_8 + 0x1d308) + 1;
    }
    if (DAT_1031bee4 == 0.0) {
      local_12c._4_4_ = 1.0;
    }
    else {
      local_12c._4_4_ = DAT_1031bee4 / 1.0;
    }
    local_68 = local_12c._4_4_;
    if (DAT_1031bef4 != '\0') {
      local_68 = local_12c._4_4_ / 5.0;
    }
    fVar19 = 10.0;
    puVar18 = local_ac;
    puVar15 = local_a0;
    puVar13 = local_94;
    fVar11 = 0.25;
    puVar10 = local_88;
    fVar14 = local_68;
    fVar17 = DAT_10320fcc;
    puVar4 = thunk_FUN_1001d7f0(*(int *)((int)local_8 + param_1 * 0x5c + 0x44));
    pvVar5 = thunk_FUN_1000cb20((void *)((int)local_8 + param_1 * 0x5c + 0x1c),local_7c,
                                (float)*(int *)(puVar4 + 0x24));
    uVar9 = 0x1006987a;
    pvVar5 = thunk_FUN_10069fd0(pvVar5,puVar10,fVar11);
    pvVar5 = thunk_FUN_1000cb20(pvVar5,puVar13,fVar14);
    pvVar5 = thunk_FUN_1000cb20(pvVar5,puVar15,fVar17);
    pfVar2 = thunk_FUN_1000cb20(pvVar5,puVar18,fVar19);
    puVar6 = thunk_FUN_1000d970((void *)((int)local_8 + param_1 * 0x5c + 0x28),local_b8,pfVar2);
    puVar12 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x28);
    *puVar12 = *puVar6;
    puVar12[1] = puVar6[1];
    puVar12[2] = puVar6[2];
    fVar7 = (float10)(*DAT_102e1530)();
    if ((float10)*(float *)((int)local_8 + param_1 * 0x5c + 0x4c) < fVar7) {
      if (*(int *)((int)local_8 + param_1 * 0x5c + 0x44) == 3) {
        if (*(float *)(DAT_102e829c + 0xc) < 0.0 == (*(float *)(DAT_102e829c + 0xc) == 0.0)) {
          puVar12 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x34);
          uVar9 = 0x10069d48;
          thunk_FUN_10015ce0(&stack0xfffffe94,puVar12);
          thunk_FUN_10015ce0(&stack0xfffffe88,(undefined4 *)((int)local_8 + param_1 * 0x5c + 0x28));
          thunk_FUN_1007d8b0(puVar10,uVar9,puVar12);
        }
      }
      else {
        if (*(float *)(DAT_102e829c + 0xc) < 1.0 == (*(float *)(DAT_102e829c + 0xc) == 1.0)) {
          fVar7 = (float10)(*DAT_102e1530)();
          fVar8 = thunk_FUN_100962e0(0.003);
          *(float *)((int)local_8 + param_1 * 0x5c + 0x4c) = (float)(fVar8 + (float10)(float)fVar7);
        }
        else {
          fVar7 = (float10)(*DAT_102e1530)();
          fVar8 = thunk_FUN_100962e0(0.01);
          *(float *)((int)local_8 + param_1 * 0x5c + 0x4c) = (float)(fVar8 + (float10)(float)fVar7);
        }
        FUN_100be334(local_8,SUB84((double)(*(float *)((int)local_8 + param_1 * 0x5c + 0x58) *
                                            0.017453292 * 1.0),0));
        local_70 = (float)(extraout_ST0 + (float10)1.5);
        if (DAT_1031bee4 == 0.0) {
          local_134 = 0;
          uStack_130 = 0x3ff00000;
        }
        else {
          if (DAT_1031bee4 <= 0.1) {
            local_12c = 0.1;
          }
          else {
            local_12c = (double)DAT_1031bee4;
          }
          local_134 = (undefined4)local_12c;
          uStack_130 = local_12c._4_4_;
        }
        if ((double)CONCAT44(uStack_130,local_134) * 90.0 <= 22.5) {
          local_14c = 22.5;
        }
        else {
          if (DAT_1031bee4 == 0.0) {
            local_144 = 0;
            uStack_140 = 0x3ff00000;
          }
          else {
            if (DAT_1031bee4 <= 0.1) {
              local_13c = 0.1;
            }
            else {
              local_13c = (double)DAT_1031bee4;
            }
            local_144 = (undefined4)local_13c;
            uStack_140 = local_13c._4_4_;
          }
          local_14c = (double)CONCAT44(uStack_140,local_144) * 90.0;
        }
        *(float *)((int)local_8 + param_1 * 0x5c + 0x58) =
             *(float *)((int)local_8 + param_1 * 0x5c + 0x58) + (float)local_14c;
        if (360.0 < *(float *)((int)local_8 + param_1 * 0x5c + 0x58)) {
          *(float *)((int)local_8 + param_1 * 0x5c + 0x58) =
               *(float *)((int)local_8 + param_1 * 0x5c + 0x58) - 360.0;
        }
        FUN_100be334(local_8,SUB84((double)(*(float *)((int)local_8 + param_1 * 0x5c + 0x58) *
                                            0.017453292 * 1.0),0));
        local_6c = (float)(extraout_ST0_00 + (float10)1.5);
        if (*(float *)(DAT_102e829c + 0xc) < 0.0 == (*(float *)(DAT_102e829c + 0xc) == 0.0)) {
          if ((*(float *)(DAT_102e829c + 0xc) < 1.0 == (*(float *)(DAT_102e829c + 0xc) == 1.0)) &&
             (DAT_1031bef4 != '\0')) {
            if (*(float *)(DAT_102e829c + 0xc) < 2.0 == (*(float *)(DAT_102e829c + 0xc) == 2.0)) {
              pfVar2 = (float *)thunk_FUN_10008500((int)local_8 + param_1 * 0x5c + 0x1c);
              pfVar3 = (float *)thunk_FUN_10008500(local_64);
              thunk_FUN_1007d6c0(pfVar3,pfVar2);
              pfVar2 = (float *)thunk_FUN_10008500(local_64);
              fVar14 = *pfVar2;
              pfVar2 = (float *)thunk_FUN_10008500(local_64);
              *pfVar2 = -fVar14;
              thunk_FUN_10015ce0(&stack0xfffffe9c,local_64);
              puVar12 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x28);
              uVar16 = 0x10069ced;
              thunk_FUN_10015ce0(&stack0xfffffe90,puVar12);
              thunk_FUN_10015ce0(&stack0xfffffe84,
                                 (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x34));
              thunk_FUN_1007de30(uVar9,uVar16,puVar12);
            }
            else {
              puVar12 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x34);
              uVar9 = 0x10069c18;
              thunk_FUN_10015ce0(&stack0xfffffe9c,puVar12);
              thunk_FUN_10015ce0(&stack0xfffffe90,
                                 (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x28));
              thunk_FUN_1007d8b0(puVar13,uVar9,puVar12);
              puVar12 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x1c);
              uVar16 = 0x10069c54;
              thunk_FUN_10015ce0(&stack0xfffffea0,puVar12);
              thunk_FUN_10015ce0(&stack0xfffffe94,
                                 (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x28));
              thunk_FUN_1007dc70(uVar9,uVar16,puVar12);
            }
          }
          else {
            puVar12 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x34);
            uVar9 = 0x10069bb8;
            thunk_FUN_10015ce0(&stack0xfffffe9c,puVar12);
            thunk_FUN_10015ce0(&stack0xfffffe90,(undefined4 *)((int)local_8 + param_1 * 0x5c + 0x28)
                              );
            thunk_FUN_1007d8b0(puVar13,uVar9,puVar12);
          }
        }
      }
      puVar12 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x28);
      puVar6 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x34);
      *puVar6 = *puVar12;
      puVar6[1] = puVar12[1];
      puVar6[2] = puVar12[2];
    }
  }
  return;
}

/* 10069fd0  FUN_10069fd0  (70 bytes)
 * void * FUN_10069fd0(void * param_1, float param_2)
 */
void * __thiscall FUN_10069fd0(void *this,void *param_1,float param_2)

{
  thunk_FUN_1000cae0(param_1,*(float *)this / param_2,*(float *)((int)this + 4) / param_2,
                     *(float *)((int)this + 8) / param_2);
  return param_1;
}

/* 1006a030  FUN_1006a030  (40 bytes)
 * undefined4 FUN_1006a030(undefined4 param_1)
 */
undefined4 __fastcall FUN_1006a030(undefined4 param_1)

{
  thunk_FUN_1000cb80(param_1,0xc,4,thunk_FUN_10007fe0);
  return param_1;
}

/* 1006a070  FUN_1006a070  (260 bytes)
 * undefined FUN_1006a070(void)
 */
void FUN_1006a070(void)

{
  float10 fVar1;
  int local_58;
  undefined1 local_54 [68];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  thunk_FUN_1000c160((int)local_54);
  local_c = 0;
  local_10 = 0;
  *(undefined4 *)(local_8 + 0x5c00) = 0;
  *(undefined4 *)(local_8 + 0x1d308) = 1;
  for (local_58 = 0; local_58 < 0x100; local_58 = local_58 + 1) {
    if (*(int *)(local_8 + local_58 * 0x5c) != 0) {
      fVar1 = (float10)(*DAT_102e1530)();
      if ((float10)*(float *)(local_8 + 0x50 + local_58 * 0x5c) < fVar1) {
        thunk_FUN_1006a3f0(local_58,(int)local_54);
        fVar1 = (float10)(*DAT_102e1530)();
        *(float *)(local_8 + 0x50 + local_58 * 0x5c) = (float)(fVar1 + (float10)0.1);
      }
      if (DAT_1031bee4 != 0.0) {
        thunk_FUN_10069540(local_58,local_c);
      }
      *(int *)(local_8 + 0x5c00) = *(int *)(local_8 + 0x5c00) + 1;
    }
  }
  return;
}

/* 1006a1c0  FUN_1006a1c0  (390 bytes)
 * undefined FUN_1006a1c0(undefined4 param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 param_6)
 */
void __thiscall
FUN_1006a1c0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int local_10;
  int local_c;
  
  local_10 = -1;
  local_c = 0;
  do {
    if (0xff < local_c) {
LAB_1006a207:
      if (local_10 != -1) {
        *(undefined4 *)((int)this + local_10 * 0x5c) = param_1;
        puVar1 = (undefined4 *)((int)this + local_10 * 0x5c + 0x1c);
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
        *(undefined4 *)((int)this + local_10 * 0x5c + 0x40) = *param_4;
        *(undefined4 *)((int)this + local_10 * 0x5c + 0x44) = *param_5;
        puVar1 = (undefined4 *)((int)this + local_10 * 0x5c + 0x10);
        *puVar1 = *param_2;
        puVar1[1] = param_2[1];
        puVar1[2] = param_2[2];
        puVar1 = (undefined4 *)((int)this + local_10 * 0x5c + 4);
        *puVar1 = *param_2;
        puVar1[1] = param_2[1];
        puVar1[2] = param_2[2];
        puVar1 = (undefined4 *)((int)this + local_10 * 0x5c + 0x28);
        *puVar1 = *param_2;
        puVar1[1] = param_2[1];
        puVar1[2] = param_2[2];
        puVar1 = (undefined4 *)((int)this + local_10 * 0x5c + 0x34);
        *puVar1 = *param_2;
        puVar1[1] = param_2[1];
        puVar1[2] = param_2[2];
        *(undefined4 *)((int)this + local_10 * 0x5c + 0x4c) = 0;
        *(undefined4 *)((int)this + local_10 * 0x5c + 0x54) = param_6;
        *(undefined4 *)((int)this + local_10 * 0x5c + 0x50) = 0;
        *(undefined4 *)((int)this + local_10 * 0x5c + 0x58) = 0;
        *(int *)((int)this + 0x5c00) = *(int *)((int)this + 0x5c00) + 1;
      }
      return;
    }
    if (*(int *)((int)this + local_c * 0x5c) == 0) {
      local_10 = local_c;
      goto LAB_1006a207;
    }
    local_c = local_c + 1;
  } while( true );
}

/* 1006a3b0  FUN_1006a3b0  (45 bytes)
 * undefined FUN_1006a3b0(int param_1)
 */
void __thiscall FUN_1006a3b0(void *this,int param_1)

{
  _memset((void *)((int)this + param_1 * 0x5c),0,0x5c);
  return;
}

/* 1006a3f0  FUN_1006a3f0  (1327 bytes)
 * undefined FUN_1006a3f0(int param_1, int param_2)
 */
void FUN_1006a3f0(int param_1,int param_2)

{
  void *pvVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  longlong lVar9;
  undefined1 *puVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  float fVar15;
  float local_fc;
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
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_25;
  float local_24;
  float local_20;
  float local_1c;
  undefined *local_18;
  float local_14;
  float local_10;
  float local_c;
  void *local_8;
  
  thunk_FUN_10007fe0(&local_24);
  local_18 = thunk_FUN_1001d7f0(*(int *)((int)local_8 + param_1 * 0x5c + 0x44));
  if (DAT_1031bee4 == 0.0) {
    local_fc = 1.0;
  }
  else {
    local_fc = DAT_1031bee4 / 1.0;
  }
  local_14 = local_fc;
  if (DAT_1031bef4 != '\0') {
    local_14 = local_fc / 5.0;
  }
  puVar13 = local_64;
  fVar11 = 0.25;
  puVar10 = local_58;
  fVar15 = local_14;
  pvVar1 = thunk_FUN_1000cb20((void *)((int)local_8 + param_1 * 0x5c + 0x1c),local_4c,
                              (float)*(int *)(local_18 + 0x24));
  pvVar1 = thunk_FUN_10069fd0(pvVar1,puVar10,fVar11);
  pfVar2 = thunk_FUN_1000cb20(pvVar1,puVar13,fVar15);
  local_24 = *pfVar2;
  local_20 = pfVar2[1];
  local_1c = pfVar2[2];
  (**(code **)(DAT_102e15a8 + 0x28))(0,1);
  (**(code **)(DAT_102e15a8 + 0x2c))();
  (**(code **)(DAT_102e15a8 + 0x34))(*(int *)((int)local_8 + param_1 * 0x5c) + -1);
  (**(code **)(DAT_102e15a8 + 0x38))(2);
  uVar14 = 0xffffffff;
  uVar12 = 2;
  iVar6 = param_2;
  pvVar1 = thunk_FUN_1000d970((void *)((int)local_8 + param_1 * 0x5c + 4),local_70,&local_24);
  uVar3 = thunk_FUN_10008500(pvVar1);
  uVar4 = thunk_FUN_10008500((int)local_8 + param_1 * 0x5c + 4);
  (**(code **)(DAT_102e15a8 + 0x3c))(uVar4,uVar3,uVar12,uVar14,iVar6);
  local_25 = '\0';
  if (*(float *)(param_2 + 0x10) == 1.0) {
    puVar7 = thunk_FUN_1000d970((void *)((int)local_8 + param_1 * 0x5c + 4),local_b8,&local_24);
    puVar5 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 4);
    *puVar5 = *puVar7;
    puVar5[1] = puVar7[1];
    puVar5[2] = puVar7[2];
  }
  else {
    local_25 = '\x01';
    puVar5 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 4);
    *puVar5 = *(undefined4 *)(param_2 + 0x14);
    puVar5[1] = *(undefined4 *)(param_2 + 0x18);
    puVar5[2] = *(undefined4 *)(param_2 + 0x1c);
    if (*(int *)((int)local_8 + param_1 * 0x5c + 0x54) == 2) {
      pfVar2 = thunk_FUN_1000ca70((void *)((int)local_8 + param_1 * 0x5c + 0x10),local_7c,
                                  (float *)((int)local_8 + param_1 * 0x5c + 4));
      fVar8 = (float10)thunk_FUN_1001e850(pfVar2);
      local_10 = (float)(fVar8 / (float10)300.0);
      lVar9 = __ftol();
      fVar8 = thunk_FUN_1001d920((int)lVar9);
      local_c = (float)fVar8 * *(float *)((int)local_8 + param_1 * 0x5c + 0x40);
    }
    else {
      pfVar2 = thunk_FUN_1000ca70((void *)((int)local_8 + param_1 * 0x5c + 0x10),local_88,
                                  (float *)((int)local_8 + param_1 * 0x5c + 4));
      fVar8 = (float10)thunk_FUN_1001e850(pfVar2);
      local_10 = (float)(fVar8 / ((float10)*(int *)(local_18 + 0x20) / (float10)0.1));
      lVar9 = __ftol();
      fVar8 = thunk_FUN_1001d920((int)lVar9);
      local_c = (float)*(int *)(local_18 + 0x1c) * *(float *)((int)local_8 + param_1 * 0x5c + 0x40)
                * (float)fVar8;
    }
    iVar6 = *(int *)((int)local_8 + param_1 * 0x5c + 0x54);
    pvVar1 = thunk_FUN_1000d970((void *)((int)local_8 + param_1 * 0x5c + 4),local_94,&local_24);
    uVar3 = thunk_FUN_10008500(pvVar1);
    uVar4 = thunk_FUN_10008500((int)local_8 + param_1 * 0x5c + 4);
    thunk_FUN_1007b820(*(undefined4 *)((int)local_8 + param_1 * 0x5c),param_2,uVar4,uVar3,iVar6);
    thunk_FUN_100075f0(param_2);
    local_c = local_c * *(float *)(local_18 + 0x18);
    if (((*(int *)((int)local_8 + param_1 * 0x5c + 0x54) != 2) &&
        (*(int *)((int)local_8 + param_1 * 0x5c + 0x54) != 1)) && (5.0 < local_c)) {
      thunk_FUN_10007fe0(&local_34);
      if (48.0 <= local_c) {
        local_fc = 48.0;
      }
      else {
        local_fc = local_c;
      }
      pfVar2 = thunk_FUN_1000cb20((void *)((int)local_8 + param_1 * 0x5c + 0x1c),local_a0,local_fc);
      puVar5 = thunk_FUN_1000d970((void *)(param_2 + 0x14),local_ac,pfVar2);
      local_34 = *puVar5;
      local_30 = puVar5[1];
      local_2c = puVar5[2];
      uVar4 = 0;
      uVar3 = thunk_FUN_10008500(&local_34);
      iVar6 = (*DAT_102e153c)(uVar3,uVar4);
      if (iVar6 != -2) {
        thunk_FUN_10007fe0(&local_40);
        puVar5 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 4);
        *puVar5 = local_34;
        puVar5[1] = local_30;
        puVar5[2] = local_2c;
        puVar5 = (undefined4 *)((int)local_8 + param_1 * 0x5c + 0x10);
        *puVar5 = local_34;
        puVar5[1] = local_30;
        puVar5[2] = local_2c;
        *(float *)((int)local_8 + param_1 * 0x5c + 0x40) = local_c;
        *(undefined4 *)((int)local_8 + param_1 * 0x5c + 0x54) = 2;
        local_40 = *(undefined4 *)(param_2 + 0x14);
        local_3c = *(undefined4 *)(param_2 + 0x18);
        local_38 = *(undefined4 *)(param_2 + 0x1c);
        (**(code **)(DAT_102e15a8 + 0x38))(2);
        uVar14 = 0xffffffff;
        uVar12 = 0;
        iVar6 = param_2;
        uVar3 = thunk_FUN_10008500(param_2 + 0x14);
        uVar4 = thunk_FUN_10008500(&local_34);
        (**(code **)(DAT_102e15a8 + 0x3c))(uVar4,uVar3,uVar12,uVar14,iVar6);
        if (*(float *)(param_2 + 0x10) != 1.0) {
          iVar6 = 2;
          uVar3 = thunk_FUN_10008500(&local_40);
          uVar4 = thunk_FUN_10008500(&local_34);
          thunk_FUN_1007b820(*(undefined4 *)((int)local_8 + param_1 * 0x5c),param_2,uVar4,uVar3,
                             iVar6);
          thunk_FUN_100075f0(param_2);
        }
        local_25 = '\0';
      }
    }
  }
  (**(code **)(DAT_102e15a8 + 0x30))();
  if (local_25 != '\0') {
    thunk_FUN_1006a3b0(local_8,param_1);
  }
  return;
}

/* 1006aa70  FUN_1006aa70  (1252 bytes)
 * undefined FUN_1006aa70(undefined1 * param_1)
 */
void __fastcall FUN_1006aa70(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x4180] = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  _memset(param_1 + 0x14,0,0x408);
  _memset(param_1 + 0x41c,0,0x408);
  _memset(param_1 + 0x824,0,0x2448);
  thunk_FUN_1006b090((int)param_1);
  param_1[0x4178] = 1;
  *(undefined4 *)(param_1 + 0x4184) = 0;
  *(undefined4 *)(param_1 + 0x418c) = 0;
  _memset(param_1 + 0x2d6c,-1,0x1000);
  *(undefined4 *)(param_1 + 0x2d6c) = 1;
  *(undefined4 *)(param_1 + 0x2dec) = 9;
  *(undefined4 *)(param_1 + 0x2e6c) = 0xc;
  *(undefined4 *)(param_1 + 0x2eec) = 0xe;
  *(undefined4 *)(param_1 + 0x2f6c) = 8;
  *(undefined4 *)(param_1 + 0x2fec) = 0x15;
  *(undefined4 *)(param_1 + 0x306c) = 0x16;
  *(undefined4 *)(param_1 + 0x30ec) = 0x1c;
  *(undefined4 *)(param_1 + 0x316c) = 0x1f;
  *(undefined4 *)(param_1 + 0x2d70) = 3;
  *(undefined4 *)(param_1 + 0x2df0) = 6;
  *(undefined4 *)(param_1 + 0x2e70) = 7;
  *(undefined4 *)(param_1 + 0x2ef0) = 0x11;
  *(undefined4 *)(param_1 + 0x2f70) = 0x13;
  *(undefined4 *)(param_1 + 0x2ff0) = 0x17;
  *(undefined4 *)(param_1 + 0x2d74) = 5;
  *(undefined4 *)(param_1 + 0x2df4) = 0xd;
  *(undefined4 *)(param_1 + 0x2e74) = 0xf;
  *(undefined4 *)(param_1 + 0x2ef4) = 0x1b;
  *(undefined4 *)(param_1 + 0x2f74) = 0x12;
  *(undefined4 *)(param_1 + 0x2d78) = 4;
  *(undefined4 *)(param_1 + 0x2df8) = 0xb;
  *(undefined4 *)(param_1 + 0x2e78) = 0x14;
  *(undefined4 *)(param_1 + 0x2ef8) = 0x1a;
  *(undefined4 *)(param_1 + 0x2f78) = 0x21;
  *(undefined4 *)(param_1 + 0x2d7c) = 0x18;
  *(undefined4 *)(param_1 + 0x2dfc) = 0x19;
  *(undefined4 *)(param_1 + 0x2e7c) = 0x20;
  *(undefined4 *)(param_1 + 0x2efc) = 0x22;
  *(undefined4 *)(param_1 + 0x2f7c) = 0x23;
  _memset(param_1 + 0x3d6c,0,0x400);
  FUN_100bba20((uint *)(param_1 + 0x3d6c),(uint *)"Handguns");
  FUN_100bba20((uint *)(param_1 + 0x3d8c),(uint *)&DAT_10270bac);
  FUN_100bba20((uint *)(param_1 + 0x3dac),(uint *)"Rifles");
  FUN_100bba20((uint *)(param_1 + 0x3dcc),(uint *)"Shotguns");
  FUN_100bba20((uint *)(param_1 + 0x3dec),(uint *)0x10270b84);
  return;
}

/* 1006b090  FUN_1006b090  (299 bytes)
 * undefined FUN_1006b090(int param_1)
 */
void __fastcall FUN_1006b090(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_418;
  char local_414 [1032];
  undefined **local_c;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x2c6c) = 0;
  local_8 = param_1;
  (*DAT_102e1574)();
  FUN_100bb6e0((undefined1 *)(local_8 + 0x2c6c),(byte_conflict *)"%s\\tsbuylist.tsa");
  local_c = (undefined **)FUN_100bd2e0((LPCSTR)(local_8 + 0x2c6c),"rb");
  if (local_c == (undefined **)0x0) {
    local_c = (undefined **)FUN_100bd2e0((LPCSTR)(local_8 + 0x2c6c),"wb");
    if (local_c == (undefined **)0x0) {
      *(undefined1 *)(local_8 + 0x2c6c) = 0;
    }
  }
  else {
    iVar1 = FUN_100bce30(local_c,0,0);
    if (iVar1 == 0) {
      local_418 = 0;
      while (uVar2 = FUN_100bcfd0(local_414,0x408,1,local_c), uVar2 != 0) {
        if (local_418 < 9) {
          iVar1 = local_418 * 0x408;
          local_418 = local_418 + 1;
          FUN_100bc090((undefined4 *)(local_8 + 0x824 + iVar1),(undefined4 *)local_414,0x408);
        }
      }
    }
  }
  if (local_c != (undefined **)0x0) {
    FUN_100bc9d0(local_c);
  }
  return;
}

/* 1006b210  FUN_1006b210  (174 bytes)
 * undefined FUN_1006b210(int param_1)
 */
void __fastcall FUN_1006b210(int param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int local_10;
  
  if (*(char *)(param_1 + 0x2c6c) != '\0') {
    ppuVar1 = (undefined **)FUN_100bd2e0((LPCSTR)(param_1 + 0x2c6c),"wb");
    if ((ppuVar1 != (undefined **)0x0) && (iVar2 = FUN_100bce30(ppuVar1,0,0), iVar2 == 0)) {
      for (local_10 = 0; local_10 < 9; local_10 = local_10 + 1) {
        FUN_100bd400((char *)(param_1 + 0x824 + local_10 * 0x408),0x408,1,ppuVar1);
      }
    }
    if (ppuVar1 != (undefined **)0x0) {
      FUN_100bc9d0(ppuVar1);
    }
  }
  return;
}

/* 1006b2f0  FUN_1006b2f0  (47 bytes)
 * undefined1 FUN_1006b2f0(void)
 */
undefined1 FUN_1006b2f0(void)

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

/* 1006b330  FUN_1006b330  (77 bytes)
 * undefined4 FUN_1006b330(int param_1)
 */
undefined4 FUN_1006b330(int param_1)

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

/* 1006b390  FUN_1006b390  (48 bytes)
 * undefined4 FUN_1006b390(void)
 */
undefined4 FUN_1006b390(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = thunk_FUN_1006b2f0();
  uVar2 = DAT_102e0270;
  if (cVar1 == '\0') {
    uVar2 = 30000;
  }
  return uVar2;
}

/* 1006b3d0  FUN_1006b3d0  (24 bytes)
 * undefined4 FUN_1006b3d0(void)
 */
undefined4 FUN_1006b3d0(void)

{
  return 0x51;
}

/* 1006b3f0  FUN_1006b3f0  (214 bytes)
 * undefined FUN_1006b3f0(char * param_1)
 */
void __fastcall FUN_1006b3f0(char *param_1)

{
  float10 fVar1;
  
  if (*param_1 == '\0') {
    param_1[0x417c] = '\0';
    param_1[0x417d] = '\0';
    param_1[0x417e] = '\0';
    param_1[0x417f] = '\0';
    *param_1 = '\x01';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[0x4178] = '\0';
    FUN_100bc090((undefined4 *)(param_1 + 0x14),(undefined4 *)(param_1 + 0x41c),0x408);
    if (param_1[0x4180] != '\0') {
      param_1[0x4180] = '\0';
      fVar1 = (float10)(*DAT_102e1564)(0x3f000000,0x3f800000);
      thunk_FUN_10070860(param_1,(float)fVar1);
    }
    thunk_FUN_1006fcb0(param_1);
    DAT_1031bf00 = 0;
    DAT_1031bef8 = DAT_102e1234 / 2;
    DAT_1031befc = DAT_102e1238 / 2;
    thunk_FUN_100b0cd0(DAT_102e15e0);
  }
  return;
}

/* 1006b500  FUN_1006b500  (35 bytes)
 * undefined FUN_1006b500(undefined1 * param_1)
 */
void __fastcall FUN_1006b500(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  return;
}

/* 1006b530  FUN_1006b530  (96 bytes)
 * undefined FUN_1006b530(undefined1 * param_1)
 */
void __fastcall FUN_1006b530(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x417c) = 0;
  DAT_1031bf00 = 0;
  thunk_FUN_100b0cd0(DAT_102e15e0);
  return;
}

/* 1006b5b0  FUN_1006b5b0  (162 bytes)
 * undefined FUN_1006b5b0(void * param_1)
 */
void __fastcall FUN_1006b5b0(void *param_1)

{
  if (*(int *)((int)param_1 + 4) == 8) {
    thunk_FUN_1006b6a0((int)param_1);
  }
  else {
    thunk_FUN_1006b9a0((int)param_1);
    switch(*(undefined4 *)((int)param_1 + 4)) {
    case 1:
      thunk_FUN_1006cde0((int)param_1);
      break;
    case 2:
      thunk_FUN_1006d070(param_1);
      break;
    case 3:
      thunk_FUN_1006d470(param_1);
      break;
    case 4:
      thunk_FUN_1006db50((int)param_1);
      break;
    case 5:
      thunk_FUN_1006c780((int)param_1);
      break;
    case 6:
      thunk_FUN_1006c540(param_1,'\x01');
      break;
    case 7:
      thunk_FUN_1006c540(param_1,'\0');
      break;
    default:
      thunk_FUN_1006ca30((int)param_1);
    }
  }
  return;
}

/* 1006b6a0  FUN_1006b6a0  (311 bytes)
 * undefined FUN_1006b6a0(int param_1)
 */
void __fastcall FUN_1006b6a0(int param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  *(int *)(param_1 + 0x416c) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x4170) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x4174) = (int)lVar1;
  thunk_FUN_1008f200(&DAT_10318a88,8,DAT_102e1238 / 2,0x14,0x80);
  thunk_FUN_1008f270(&DAT_10318a88,"Change Team:",0x2d,0xc3,0x2d,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"1 Join Specialists",*(int *)(param_1 + 0x416c) / 2,
                     *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"2 Join Mercenaries",*(int *)(param_1 + 0x416c) / 2,
                     *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
  thunk_FUN_1008f270(&DAT_10318a88,"0 Cancel",100,100,0xcd,0x32);
  return;
}

/* 1006b830  FUN_1006b830  (287 bytes)
 * undefined FUN_1006b830(uint * param_1, uint param_2)
 */
void __cdecl FUN_1006b830(uint *param_1,uint param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    DAT_1031685c = '\0';
    FUN_100bba20(param_1,(uint *)&DAT_10270c2c);
    if ((param_2 & 1) != 0) {
      FUN_100bba30(param_1,(uint *)&DAT_10270c28);
      DAT_1031685c = '\x01';
    }
    if ((param_2 & 2) != 0) {
      if (DAT_1031685c != '\0') {
        FUN_100bba30(param_1,(uint *)&DAT_10270c24);
      }
      FUN_100bba30(param_1,(uint *)&DAT_10270c20);
      DAT_1031685c = '\x01';
    }
    if ((param_2 & 4) != 0) {
      if (DAT_1031685c != '\0') {
        FUN_100bba30(param_1,(uint *)&DAT_10270c24);
      }
      FUN_100bba30(param_1,(uint *)&DAT_10270c1c);
      DAT_1031685c = '\x01';
    }
    if ((param_2 & 8) != 0) {
      if (DAT_1031685c != '\0') {
        FUN_100bba30(param_1,(uint *)&DAT_10270c24);
      }
      FUN_100bba30(param_1,(uint *)&DAT_10270c18);
    }
    FUN_100bba30(param_1,(uint *)&DAT_10270c14);
  }
  return;
}

/* 1006b9a0  FUN_1006b9a0  (2381 bytes)
 * undefined FUN_1006b9a0(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006b9a0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  int local_54;
  int local_50;
  int local_4c;
  
  lVar5 = __ftol();
  *(int *)(param_1 + 0x416c) = (int)lVar5;
  lVar5 = __ftol();
  *(int *)(param_1 + 0x4170) = (int)lVar5;
  lVar5 = __ftol();
  *(int *)(param_1 + 0x4174) = (int)lVar5;
  (*DAT_102e1484)(8,8,0x280,0x13,*(int *)(param_1 + 0x416c) / 2,*(int *)(param_1 + 0x4170) / 2,
                  *(int *)(param_1 + 0x4174) / 2,0x32);
  cVar1 = thunk_FUN_1006b2f0();
  if (cVar1 == '\0') {
    FUN_100bb6e0(&DAT_1031680c,(byte_conflict *)"(Total: %i)");
  }
  else {
    thunk_FUN_1006b390();
    FUN_100bb6e0(&DAT_1031680c,(byte_conflict *)"Remain Cash : %i (Total: %i)");
  }
  iVar2 = thunk_FUN_1006b390();
  if (iVar2 == *(int *)(param_1 + 0x414) || iVar2 - *(int *)(param_1 + 0x414) < 0) {
    local_4c = 0x2d;
  }
  else {
    local_4c = *(int *)(param_1 + 0x4174) / 2;
  }
  iVar2 = thunk_FUN_1006b390();
  if (iVar2 == *(int *)(param_1 + 0x414) || iVar2 - *(int *)(param_1 + 0x414) < 0) {
    local_50 = 0x2d;
  }
  else {
    local_50 = *(int *)(param_1 + 0x4170) / 2;
  }
  iVar2 = thunk_FUN_1006b390();
  if (iVar2 == *(int *)(param_1 + 0x414) || iVar2 - *(int *)(param_1 + 0x414) < 0) {
    local_54 = 0xc3;
  }
  else {
    local_54 = *(int *)(param_1 + 0x416c) / 2;
  }
  thunk_FUN_10047f00(8,8,DAT_102e1234,&DAT_1031680c,local_54,local_50,local_4c);
  thunk_FUN_1006b3d0();
  FUN_100bb6e0(&DAT_1031680c,(byte_conflict *)"Free Slots : %i");
  iVar2 = thunk_FUN_1006b3d0();
  if (iVar2 == *(int *)(param_1 + 0x418) || iVar2 - *(int *)(param_1 + 0x418) < 0) {
    local_4c = 0x2d;
  }
  else {
    local_4c = *(int *)(param_1 + 0x4174) / 2;
  }
  iVar2 = thunk_FUN_1006b3d0();
  if (iVar2 == *(int *)(param_1 + 0x418) || iVar2 - *(int *)(param_1 + 0x418) < 0) {
    local_50 = 0x2d;
  }
  else {
    local_50 = *(int *)(param_1 + 0x4170) / 2;
  }
  iVar2 = thunk_FUN_1006b3d0();
  if (iVar2 == *(int *)(param_1 + 0x418) || iVar2 - *(int *)(param_1 + 0x418) < 0) {
    local_54 = 0xc3;
  }
  else {
    local_54 = *(int *)(param_1 + 0x416c) / 2;
  }
  thunk_FUN_10047f00(0x108,8,DAT_102e1234,&DAT_1031680c,local_54,local_50,local_4c);
  for (DAT_10316944 = 1; (int)DAT_10316944 < 6; DAT_10316944 = DAT_10316944 + 1) {
    DAT_10316858 = (DAT_10316944 - 1) * 0x80 + 8;
    DAT_10316918 = 0x1c;
    _DAT_10316834 = 0x80;
    _DAT_10316884 = 0x30;
    (*DAT_102e1484)(DAT_10316858,0x1c,0x80,0x14,*(int *)(param_1 + 0x416c) / 2,
                    *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
    thunk_FUN_10088620(&DAT_102da3c8,DAT_10316858,DAT_10316918,2,DAT_10316944,
                       *(int *)(param_1 + 0x416c) / 2,*(int *)(param_1 + 0x4170) / 2,
                       *(int *)(param_1 + 0x4174) / 2);
    DAT_10316918 = DAT_10316918 + 0x14;
    for (DAT_103168bc = 0; DAT_103168bc < 0x10; DAT_103168bc = DAT_103168bc + 1) {
      if ((*(int *)(param_1 + 0x98 + DAT_103168bc * 0x38) == 0) ||
         (*(char *)(param_1 + 0x94 + DAT_103168bc * 0x38) == '\0')) {
        if (*(int *)(param_1 + 0x98 + DAT_103168bc * 0x38) != 0) {
          DAT_10316804 = thunk_FUN_1001d7b0(*(int *)(param_1 + 0x98 + DAT_103168bc * 0x38));
          if ((byte)DAT_10316804[0x84] == DAT_10316944) {
            uVar3 = thunk_FUN_1006b330(*(int *)(param_1 + 0x98 + DAT_103168bc * 0x38));
            DAT_1031682c = '\x01' - ((uVar3 & 0xff) != 0);
            if (DAT_1031682c == '\0') {
              local_4c = 0x2d;
              local_50 = 0x2d;
              local_54 = 0xc3;
            }
            else {
              local_4c = *(undefined4 *)(param_1 + 0x4174);
              local_50 = *(undefined4 *)(param_1 + 0x4170);
              local_54 = *(undefined4 *)(param_1 + 0x416c);
            }
            (*DAT_102e1468)(*(undefined4 *)
                             (&DAT_102db794 + *(int *)(param_1 + 0x98 + DAT_103168bc * 0x38) * 4),
                            local_54,local_50,local_4c);
            (*DAT_102e1474)(0,DAT_10316858,DAT_10316918,0);
            if (*(int *)(param_1 + 200 + DAT_103168bc * 0x38) == 0) {
              if (DAT_10316804[8] != '\0') {
                thunk_FUN_10088620(&DAT_102da3c8,DAT_10316858,DAT_10316918 + 5,5,
                                   *(int *)(param_1 + 0x14 + (uint)(byte)DAT_10316804[8] * 8),
                                   *(undefined4 *)(param_1 + 0x416c),
                                   *(undefined4 *)(param_1 + 0x4170),
                                   *(undefined4 *)(param_1 + 0x4174));
              }
            }
            else {
              thunk_FUN_10088620(&DAT_102da3c8,DAT_10316858,DAT_10316918 + 5,2,
                                 *(int *)(param_1 + 200 + DAT_103168bc * 0x38),
                                 *(undefined4 *)(param_1 + 0x416c),*(undefined4 *)(param_1 + 0x4170)
                                 ,*(undefined4 *)(param_1 + 0x4174));
            }
            if ((*(int *)(param_1 + 0x9c + DAT_103168bc * 0x38) != 0) &&
               (thunk_FUN_1006b830((uint *)&DAT_1031680c,
                                   *(uint *)(param_1 + 0x9c + DAT_103168bc * 0x38)),
               DAT_1031680c != '\0')) {
              thunk_FUN_10047f00(DAT_10316858,DAT_10316918 + 0x14,DAT_102e1234,&DAT_1031680c,
                                 *(int *)(param_1 + 0x416c) / 2,*(int *)(param_1 + 0x4170) / 2,
                                 *(int *)(param_1 + 0x4174) / 2);
            }
            DAT_10316918 = DAT_10316918 + _DAT_10316884;
          }
          if ((*(char *)(param_1 + 0xc4 + DAT_103168bc * 0x38) != '\0') &&
             (puVar4 = thunk_FUN_1001d7b0((int)*(short *)(DAT_10316804 + 0xc6)),
             (byte)puVar4[0x84] == DAT_10316944)) {
            uVar3 = thunk_FUN_1006b330((int)*(short *)(DAT_10316804 + 0xc6));
            DAT_1031682c = '\x01' - ((uVar3 & 0xff) != 0);
            if (DAT_1031682c == '\0') {
              local_4c = 0x2d;
              local_50 = 0x2d;
              local_54 = 0xc3;
            }
            else {
              local_4c = *(undefined4 *)(param_1 + 0x4174);
              local_50 = *(undefined4 *)(param_1 + 0x4170);
              local_54 = *(undefined4 *)(param_1 + 0x416c);
            }
            (*DAT_102e1468)(*(undefined4 *)(&DAT_102db794 + *(short *)(DAT_10316804 + 0xc6) * 4),
                            local_54,local_50,local_4c);
            (*DAT_102e1474)(0,DAT_10316858,DAT_10316918,0);
            thunk_FUN_10088620(&DAT_102da3c8,DAT_10316858,DAT_10316918 + 5,5,
                               *(int *)(param_1 + 0x14 + (uint)(byte)DAT_10316804[8] * 8),
                               *(undefined4 *)(param_1 + 0x416c),*(undefined4 *)(param_1 + 0x4170),
                               *(undefined4 *)(param_1 + 0x4174));
            if ((*(int *)(param_1 + 0x9c + DAT_103168bc * 0x38) != 0) &&
               (thunk_FUN_1006b830((uint *)&DAT_1031680c,
                                   *(uint *)(param_1 + 0x9c + DAT_103168bc * 0x38)),
               DAT_1031680c != '\0')) {
              thunk_FUN_10047f00(DAT_10316858,DAT_10316918 + 0x14,DAT_102e1234,&DAT_1031680c,
                                 *(int *)(param_1 + 0x416c) / 2,*(int *)(param_1 + 0x4170) / 2,
                                 *(int *)(param_1 + 0x4174) / 2);
            }
            DAT_10316918 = DAT_10316918 + _DAT_10316884;
          }
        }
      }
      else if (DAT_10316944 == 1) {
        if ((*(uint *)(param_1 + 0x98 + DAT_103168bc * 0x38) & 0x10) == 0) {
          if ((*(uint *)(param_1 + 0x98 + DAT_103168bc * 0x38) & 0x20) != 0) {
            FUN_100bba20((uint *)&DAT_1031680c,(uint *)"Stealth Shoes");
          }
        }
        else {
          FUN_100bba20((uint *)&DAT_1031680c,(uint *)"Kevlar");
        }
        thunk_FUN_10047f00(DAT_10316858,DAT_10316918 + 5,DAT_102e1234,&DAT_1031680c,
                           *(int *)(param_1 + 0x416c) / 2,*(int *)(param_1 + 0x4170) / 2,
                           *(int *)(param_1 + 0x4174) / 2);
        DAT_10316918 = DAT_10316918 + _DAT_10316884;
      }
    }
  }
  return;
}

/* 1006c540  FUN_1006c540  (459 bytes)
 * undefined FUN_1006c540(char param_1)
 */
void __thiscall FUN_1006c540(void *this,char param_1)

{
  int iVar1;
  longlong lVar2;
  char *local_50;
  int local_c;
  
  lVar2 = __ftol();
  *(int *)((int)this + 0x416c) = (int)lVar2;
  lVar2 = __ftol();
  *(int *)((int)this + 0x4170) = (int)lVar2;
  lVar2 = __ftol();
  *(int *)((int)this + 0x4174) = (int)lVar2;
  thunk_FUN_1008f200(&DAT_10318a88,0x88,DAT_102e1238 / 2,0x14,0x80);
  if (param_1 == '\0') {
    local_50 = "Load Equipment";
  }
  else {
    local_50 = "Save Equipment";
  }
  thunk_FUN_1008f270(&DAT_10318a88,local_50,0x2d,0xc3,0x2d,0x32);
  for (local_c = 0; local_c < 9; local_c = local_c + 1) {
    if (*(int *)((int)this + local_c * 0x408 + 0xc24) < 1) {
      FUN_100bb6e0(&DAT_103168f0,(byte_conflict *)"Slot #%i (Empty)");
    }
    else {
      FUN_100bb6e0(&DAT_103168f0,(byte_conflict *)"Slot #%i (Available)");
    }
    iVar1 = thunk_FUN_1006b390();
    if ((iVar1 < *(int *)((int)this + local_c * 0x408 + 0xc24)) && (param_1 == '\0')) {
      thunk_FUN_1008f270(&DAT_10318a88,&DAT_103168f0,0xc3,0x2d,0x2d,0x32);
    }
    else {
      thunk_FUN_1008f270(&DAT_10318a88,&DAT_103168f0,*(int *)((int)this + 0x416c) / 2,
                         *(int *)((int)this + 0x4170) / 2,*(int *)((int)this + 0x4174) / 2,0x32);
    }
  }
  thunk_FUN_1008f270(&DAT_10318a88,"0 Go Back",100,100,0xcd,0x32);
  thunk_FUN_1006ca30((int)this);
  return;
}

/* 1006c780  FUN_1006c780  (551 bytes)
 * undefined FUN_1006c780(int param_1)
 */
void __fastcall FUN_1006c780(int param_1)

{
  longlong lVar1;
  int local_c;
  
  lVar1 = __ftol();
  *(int *)(param_1 + 0x416c) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x4170) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x4174) = (int)lVar1;
  thunk_FUN_1008f200(&DAT_10318a88,0x88,DAT_102e1238 / 2,0x14,0x80);
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    if (*(int *)(param_1 + 0x98 + local_c * 0x38) != 0) {
      if (*(char *)(param_1 + 0x94 + local_c * 0x38) == '\0') {
        DAT_103168ec = thunk_FUN_1001d7b0(*(int *)(param_1 + 0x98 + local_c * 0x38));
        FUN_100bb6e0(&DAT_10316838,(byte_conflict *)"%i %s");
        thunk_FUN_1008f270(&DAT_10318a88,&DAT_10316838,*(int *)(param_1 + 0x416c) / 2,
                           *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
      }
      else {
        FUN_100bb6e0(&DAT_10316838,"%i ");
        if ((*(uint *)(param_1 + 0x98 + local_c * 0x38) & 0x10) == 0) {
          if ((*(uint *)(param_1 + 0x98 + local_c * 0x38) & 0x20) != 0) {
            FUN_100bba30((uint *)&DAT_10316838,(uint *)"Stealth Shoes");
          }
        }
        else {
          FUN_100bba30((uint *)&DAT_10316838,(uint *)"Kevlar");
        }
        thunk_FUN_1008f270(&DAT_10318a88,&DAT_10316838,*(int *)(param_1 + 0x416c) / 2,
                           *(int *)(param_1 + 0x4170) / 2,*(int *)(param_1 + 0x4174) / 2,0x32);
      }
    }
  }
  thunk_FUN_1008f270(&DAT_10318a88,"0 Go Back",100,100,0xcd,0x32);
  thunk_FUN_1006ca30(param_1);
  return;
}

