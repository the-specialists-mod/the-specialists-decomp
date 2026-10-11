/* mp.dll - CTSWind (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100487b0  CTSWind::KeyValue  (164 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSWind::KeyValue(CTSWind *this,int param_1)

{
  uint uVar1;
  void *this_00;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  float10 fVar2;
  
  uVar1 = FUN_100887b0(this,*(byte_conflict **)(param_1 + 4),&DAT_100a3314);
  if (uVar1 == 0) {
    fVar2 = atof(*(undefined **)(param_1 + 8),*(undefined **)(param_1 + 8));
    *(float *)&this->field_0x54 = (float)fVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  uVar1 = FUN_100887b0(this_00,*(byte_conflict **)(param_1 + 4),(byte_conflict *)s_variance_100a3308
                      );
  if (uVar1 == 0) {
    fVar2 = atof(extraout_ECX,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x58 = (float)fVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  uVar1 = FUN_100887b0(*(void **)(param_1 + 4),*(void **)(param_1 + 4),
                       (byte_conflict *)s_frequency_1009de2c);
  if (uVar1 == 0) {
    fVar2 = atof(extraout_ECX_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x5c = (float)fVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10048a90  CTSWind::Spawn  (56 bytes)
 * undefined Spawn()
 */
void __fastcall CTSWind::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_wind_100a3410 - (int)gpGlobals->pStringBase;
  *(code **)(param_1 + 0x10) = FUN_10048b80;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.01;
  return;
}

