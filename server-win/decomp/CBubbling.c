/* mp.dll - CBubbling (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10018c40  CBubbling::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBubbling::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CBubbling_1009de04,(int)param_1,0x1009dab0,3);
  return;
}

/* 10018c70  CBubbling::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CBubbling::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CBubbling_1009de04,(int)param_1,&DAT_1009dab0,3);
  return;
}

/* 10018ca0  CBubbling::Spawn  (258 bytes)
 * undefined Spawn()
 */
void __fastcall CBubbling::Spawn(int *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x14c) = 0;
  *(undefined4 *)(param_1[1] + 0x148) = 2;
  iVar1 = param_1[1];
  lVar2 = __ftol();
  *(float *)(iVar1 + 0x150) = (float)((int)(uint)lVar2 >> 8);
  *(float *)(param_1[1] + 0x154) = (float)((uint)lVar2 & 0xff);
  uStack_4 = (uint)(*(float *)(param_1[1] + 0x1f8) < 0.0);
  *(float *)(param_1[1] + 0x158) = (float)uStack_4;
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    param_1[4] = (int)FizzThink;
    *(float *)(param_1[1] + 0x104) = gpGlobals->time + 2.0;
    param_1[0x18] = 1;
    return;
  }
  param_1[0x18] = 0;
  return;
}

/* 10018db0  CBubbling::Precache  (22 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CBubbling::Precache(int param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_bubble_spr_1009de10);
  *(int *)(param_1 + 0x5c) = iVar1;
  return;
}

/* 10018dd0  CBubbling::Use  (92 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3)
 */
void __thiscall CBubbling::Use(CBubbling *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = CBaseEntity::ShouldToggle(param_3,*(int *)&this->field_0x60);
  if (iVar1 != 0) {
    *(uint *)&this->field_0x60 = (uint)(*(int *)&this->field_0x60 == 0);
  }
  if (*(int *)&this->field_0x60 != 0) {
    *(code **)&this->field_0x10 = FizzThink;
    this->pev->nextthink = gpGlobals->time + 0.1;
    return;
  }
  *(undefined4 *)&this->field_0x10 = 0;
  this->pev->nextthink = 0.0;
  return;
}

/* 10018e30  CBubbling::KeyValue  (284 bytes)
 * undefined KeyValue()
 */
void __thiscall CBubbling::KeyValue(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  void *this;
  char *pcVar7;
  bool bVar8;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_density_1009de38;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10018e68:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10018e6d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10018e68;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10018e6d:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_frequency_1009de2c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10018eb9:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10018ebe;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10018eb9;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10018ebe:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_current_1009de24;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10018f0a:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10018f0f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10018f0a;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10018f0f:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)((int)param_1 + 4) + 0x1f8) = (float)iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 10018f50  CBubbling::FizzThink  (176 bytes)
 * void FizzThink(void)
 */
/* public: void __thiscall CBubbling::FizzThink(void) */

void __thiscall CBubbling::FizzThink(CBubbling *this)

{
  float *pOrigin;
  int iVar1;
  undefined4 uStack0000000c;
  float local_c [3];
  
                    /* 0x18f50  54  ?FizzThink@CBubbling@@QAEXXZ */
  pOrigin = (float *)VecBModelOrigin(local_c,(int)this->pev);
  (*g_engfuncs.pfnMessageBegin)(5,0x17,pOrigin,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x69);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteShort)((int)(short)iVar1);
  (*g_engfuncs.pfnWriteShort)((int)*(short *)&this->field_0x5c);
  (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x54);
  uStack0000000c = 0x10018fb1;
  (*g_engfuncs.pfnMessageEnd)();
  if (0x13 < *(int *)&this->field_0x58) {
    this->pev->nextthink = gpGlobals->time + 0.5;
    return;
  }
  this->pev->nextthink = (gpGlobals->time + 2.5) - (float)*(int *)&this->field_0x58 * 0.1;
  return;
}

