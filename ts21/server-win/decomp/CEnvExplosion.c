/* mp.dll - CEnvExplosion (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001aa70  CEnvExplosion::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CEnvExplosion::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CEnvExplosion_1009300c,(int)param_1,0x10092fb8,2);
  return;
}

/* 1001aaa0  CEnvExplosion::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CEnvExplosion::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CEnvExplosion_1009300c,(int)param_1,0x10092fb8,2);
  return;
}

/* 1001aae0  CEnvExplosion::KeyValue  (75 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CEnvExplosion::KeyValue(CEnvExplosion *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 0xb;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_iMagnitude_1009301c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
    *(undefined4 *)&this->field_0x150 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1001ab30  CEnvExplosion::Spawn  (95 bytes)
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

/* 1001ab90  CEnvExplosion::Use  (706 bytes)
 * undefined Use()
 */
void __fastcall CEnvExplosion::Use(void *param_1)

{
  float fVar1;
  float *pOrigin;
  float10 extraout_ST0;
  int iVar2;
  uint iValue;
  float in_stack_ffffffd8;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xb8) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x10c) = 0;
  FUN_10067850();
  if (in_stack_ffffffd8 != 1.0) {
    iVar2 = *(int *)((int)param_1 + 4);
    fVar1 = (float)(*(int *)((int)param_1 + 0x150) + -0x18);
    *(float *)(iVar2 + 8) = fStack_14 * fVar1 * 0.6 + fStack_24;
    *(float *)(iVar2 + 0xc) = fStack_20 + fStack_10 * fVar1 * 0.6;
    *(float *)(iVar2 + 0x10) = fStack_1c + fStack_c * fVar1 * 0.6;
  }
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 0x10) == 0) {
    (*g_engfuncs.pfnRandomFloat)(0.0,1.0);
    if ((float10)0.5 <= extraout_ST0) {
      iVar2 = 0xc;
    }
    else {
      iVar2 = 0xb;
    }
    FUN_10067ef0((int)&stack0xffffffd0,iVar2);
  }
  pOrigin = (float *)(*(int *)((int)param_1 + 4) + 8);
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 4) == 0) {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,pOrigin,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(3);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 8));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 0xc));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 0x10));
    (*g_engfuncs.pfnWriteShort)((int)DAT_102dfa54);
    iValue = (uint)*(byte *)((int)param_1 + 0x154);
  }
  else {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,pOrigin,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(3);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 8));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 0xc));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)((int)param_1 + 4) + 0x10));
    (*g_engfuncs.pfnWriteShort)((int)DAT_102dfa54);
    iValue = 0;
  }
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteByte)(0xf);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  fVar1 = *(float *)((int)param_1 + 4);
  if ((*(byte *)((int)fVar1 + 0x1a0) & 1) == 0) {
    FUN_10012040(param_1,fVar1,fVar1,(float)*(int *)((int)param_1 + 0x150),0,0x40);
  }
  *(code **)((int)param_1 + 0x10) = Smoke;
  *(float *)(*(int *)((int)param_1 + 4) + 0x104) = gpGlobals->time + 0.3;
  if (((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 0x20) == 0) &&
     (iVar2 = (*g_engfuncs.pfnRandomLong)(0,3), 0 < iVar2)) {
    do {
      CBaseEntity::Create(0x10093028,(undefined4 *)(*(int *)((int)param_1 + 4) + 8),
                          (undefined4 *)&stack0x0000002c,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

/* 1001ae60  CEnvExplosion::Smoke  (147 bytes)
 * void Smoke(void)
 */
/* public: void __thiscall CEnvExplosion::Smoke(void) */

void __thiscall CEnvExplosion::Smoke(CEnvExplosion *this)

{
                    /* 0x1ae60  95  ?Smoke@CEnvExplosion@@QAEXXZ */
  if ((this->pev->spawnflags & 8) == 0) {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,this->pev->origin,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(5);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[2]);
    (*g_engfuncs.pfnWriteShort)((int)DAT_102dfa42);
    (*g_engfuncs.pfnWriteByte)((uint)(byte)this->field_0x154);
    (*g_engfuncs.pfnWriteByte)(0xc);
    (*g_engfuncs.pfnMessageEnd)();
  }
  if ((this->pev->spawnflags & 2) == 0) {
    UTIL_Remove((int)this);
  }
  return;
}

