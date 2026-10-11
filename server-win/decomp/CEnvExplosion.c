/* mp.dll - CEnvExplosion (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001df70  CEnvExplosion::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CEnvExplosion::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CEnvExplosion_1009e104,(int)param_1,0x1009e0b0,2);
  return;
}

/* 1001dfa0  CEnvExplosion::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CEnvExplosion::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CEnvExplosion_1009e104,(int)param_1,&DAT_1009e0b0,2);
  return;
}

/* 1001dfe0  CEnvExplosion::KeyValue  (113 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CEnvExplosion::KeyValue(CEnvExplosion *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  CEnvExplosion *this_00;
  char *pcVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pcVar6 = s_iMagnitude_1009e114;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CEnvExplosion *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1001e01a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1001e01f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CEnvExplosion *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1001e01a;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001e01f:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x150 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1001e060  CEnvExplosion::Spawn  (95 bytes)
 * undefined Spawn()
 */
void __fastcall CEnvExplosion::Spawn(int param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x154) = (int)lVar1;
  return;
}

/* 1001e0c0  CEnvExplosion::Use  (756 bytes)
 * undefined Use()
 */
void __fastcall CEnvExplosion::Use(void *param_1)

{
  float fVar1;
  float10 extraout_ST0;
  int iVar2;
  uint iValue;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float in_stack_ffffffd8;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xb8) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x10c) = 0;
  iVar2 = *(int *)((int)param_1 + 4);
  fStack_50 = *(float *)(iVar2 + 8);
  fStack_4c = *(float *)(iVar2 + 0xc);
  fStack_48 = (*(float *)(iVar2 + 0x10) + 8.0) - 40.0;
  fStack_44 = fStack_50;
  UTIL_TraceLine(&fStack_44,&fStack_50,1,*(undefined4 *)(iVar2 + 0x208),&stack0xffffffc8);
  if (in_stack_ffffffd8 != 1.0) {
    iVar2 = *(int *)((int)param_1 + 4);
    fVar1 = (float)(*(int *)((int)param_1 + 0x150) + -0x18);
    fStack_50 = fStack_14 * fVar1;
    fStack_4c = fStack_20 + fStack_10 * fVar1 * 0.6;
    fStack_48 = fStack_1c + fVar1 * fStack_c * 0.6;
    *(float *)(iVar2 + 8) = fStack_50 * 0.6 + fStack_24;
    *(float *)(iVar2 + 0xc) = fStack_4c;
    *(float *)(iVar2 + 0x10) = fStack_48;
  }
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 0x10) == 0) {
    (*g_engfuncs.pfnRandomFloat)(0.0,1.0);
    if ((float10)0.5 <= extraout_ST0) {
      iVar2 = 0xc;
    }
    else {
      iVar2 = 0xb;
    }
    FUN_100775d0((int)&stack0xffffffd0,iVar2);
  }
  iVar2 = *(int *)((int)param_1 + 4);
  if ((*(byte *)(iVar2 + 0x1a0) & 4) == 0) {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,(float *)(iVar2 + 8),(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(3);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 8));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 0xc));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 0x10));
    (*g_engfuncs.pfnWriteShort)((int)DAT_102eed0c);
    iValue = (uint)*(byte *)((int)param_1 + 0x154);
  }
  else {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,(float *)(iVar2 + 8),(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(3);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 8));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 0xc));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 0x10));
    (*g_engfuncs.pfnWriteShort)((int)DAT_102eed0c);
    iValue = 0;
  }
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteByte)(0xf);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  iVar2 = *(int *)((int)param_1 + 4);
  if ((*(byte *)(iVar2 + 0x1a0) & 1) == 0) {
    fStack_44 = 2.561588e-29;
    FUN_10014980(param_1,iVar2,iVar2,(float)*(int *)((int)param_1 + 0x150),0,0x40);
  }
  *(code **)((int)param_1 + 0x10) = Smoke;
  *(float *)(*(int *)((int)param_1 + 4) + 0x104) = gpGlobals->time + 0.3;
  if (((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 0x20) == 0) &&
     (iVar2 = (*g_engfuncs.pfnRandomLong)(0,3), 0 < iVar2)) {
    do {
      CBaseEntity::Create(0x1009e120,(undefined4 *)(*(int *)((int)param_1 + 4) + 8),
                          (undefined4 *)&stack0x0000002c,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

/* 1001e3c0  CEnvExplosion::Smoke  (147 bytes)
 * void Smoke(void)
 */
/* public: void __thiscall CEnvExplosion::Smoke(void) */

void __thiscall CEnvExplosion::Smoke(CEnvExplosion *this)

{
                    /* 0x1e3c0  102  ?Smoke@CEnvExplosion@@QAEXXZ */
  if ((this->pev->spawnflags & 8) == 0) {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,this->pev->origin,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(5);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[2]);
    (*g_engfuncs.pfnWriteShort)((int)DAT_102eecfa);
    (*g_engfuncs.pfnWriteByte)((uint)(byte)this->field_0x154);
    (*g_engfuncs.pfnWriteByte)(0xc);
    (*g_engfuncs.pfnMessageEnd)();
  }
  if ((this->pev->spawnflags & 2) == 0) {
    UTIL_Remove((int *)this);
  }
  return;
}

