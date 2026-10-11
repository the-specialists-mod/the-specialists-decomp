/* mp.dll - CTSEmitter (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10048730  CTSEmitter::KeyValue  (53 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSEmitter::KeyValue(CTSEmitter *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = CTSSharedEmitter::EmitterKeyValue
                    ((CTSSharedEmitter *)&DAT_100d99d0,(int)&this->field_0x58,
                     *(byte_conflict **)(param_1 + 4),*(byte_conflict **)(param_1 + 8));
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10048930  CTSEmitter::CheckValues  (95 bytes)
 * undefined CheckValues(int param_1)
 * called by: CTSEmitter::Spawn
 */
void __fastcall CTSEmitter::CheckValues(int param_1)

{
  if ((*(float *)(param_1 + 0xd4) <= 0.0) || (*(float *)(param_1 + 0xd8) <= 0.0)) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Emits_per_second_<__0__Should_be_100a3354);
  }
  if ((*(int *)(param_1 + 0xdc) < 1) || (*(int *)(param_1 + 0xe0) < 1)) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Particles_per_emit_<__0__Should_b_100a331c);
  }
  return;
}

/* 10048a00  CTSEmitter::Spawn  (134 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSEmitter::Spawn(int *param_1)

{
  int iVar1;
  
  *(int *)param_1[1] = (int)s_ts_emitter_100a3404 - (int)gpGlobals->pStringBase;
  CheckValues((int)param_1);
  param_1[4] = (int)InitThink;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.01;
  iVar1 = param_1[1];
  param_1[0x17] = *(int *)(iVar1 + 8);
  param_1[0x18] = *(int *)(iVar1 + 0xc);
  param_1[0x19] = *(int *)(iVar1 + 0x10);
  if (param_1[0x15] == -1) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Too_many_emitters__Emitter_limit_100a33d0,0x200);
    UTIL_Remove(param_1);
  }
  UTIL_Remove(param_1);
  return;
}

/* 10048ae0  CTSEmitter::InitThink  (151 bytes)
 * void InitThink(void)
 */
/* public: void __thiscall CTSEmitter::InitThink(void) */

void __thiscall CTSEmitter::InitThink(CTSEmitter *this)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
                    /* 0x48ae0  61  ?InitThink@CTSEmitter@@QAEXXZ */
  puVar1 = &this->field_0x70;
  iVar3 = UTIL_FindEntityByTargetname(0,puVar1);
  if (iVar3 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Particle___s__does_not_exist__100a3440,puVar1);
    UTIL_Remove((int *)this);
    return;
  }
  pcVar5 = s_ts_particle_100a33c4;
  pbVar4 = (byte *)(gpGlobals->pStringBase + **(int **)(iVar3 + 4));
  do {
    bVar2 = *pbVar4;
    bVar6 = bVar2 < (byte)*pcVar5;
    if (bVar2 != *pcVar5) {
LAB_10048b52:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10048b57;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar6 = bVar2 < (byte)pcVar5[1];
    if (bVar2 != pcVar5[1]) goto LAB_10048b52;
    pbVar4 = pbVar4 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar2 != 0);
  iVar3 = 0;
LAB_10048b57:
  if (iVar3 != 0) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s___s__is_definitely_not_a_ts_part_100a3418,puVar1);
    UTIL_Remove((int *)this);
  }
  return;
}

