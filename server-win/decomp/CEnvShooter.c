/* mp.dll - CEnvShooter (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001c110  CEnvShooter::KeyValue  (280 bytes)
 * undefined KeyValue()
 */
void __thiscall CEnvShooter::KeyValue(CGibShooter *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  CGibShooter *this;
  char *pcVar7;
  bool bVar8;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_shootmodel_1009dfd4;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001c148:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001c14d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001c148;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001c14d:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    param_1->pev->model = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_shootsounds_1009dfc8;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001c1a0:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001c1a5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    this = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001c1a0;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001c1a5:
  if (iVar3 == 0) {
    uVar5 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = 1;
    switch(uVar5) {
    case 0:
      *(undefined4 *)&param_1->field_0x64 = 0;
      return;
    case 1:
      *(undefined4 *)&param_1->field_0x64 = 1;
      return;
    case 2:
      *(undefined4 *)&param_1->field_0x64 = 2;
      return;
    case 3:
      *(undefined4 *)&param_1->field_0x64 = 3;
      return;
    case 4:
      *(undefined4 *)&param_1->field_0x64 = 8;
      return;
    default:
      *(undefined4 *)&param_1->field_0x64 = 9;
      return;
    }
  }
  CGibShooter::KeyValue(param_1,param_2);
  return;
}

/* 1001c240  CEnvShooter::Precache  (50 bytes)
 * undefined Precache()
 */
void __fastcall CEnvShooter::Precache(int param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)
                    (gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  *(int *)(param_1 + 0x68) = iVar1;
  CBreakable::MaterialSoundPrecache(*(undefined4 *)(param_1 + 100));
  return;
}

/* 1001c280  CEnvShooter::CreateGib  (226 bytes)
 * void * CreateGib(int param_1)
 */
void * __fastcall CEnvShooter::CreateGib(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  
  this = (void *)FUN_10015970(0);
  FUN_10013d40(this,gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar2 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x114);
  if (1 < iVar1) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,iVar1 + -1);
  }
  *(int *)(*(int *)((int)this + 4) + 0x114) = iVar2;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x148) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x148);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x14c) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x14c);
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar2 + 0x150) = *(undefined4 *)(iVar1 + 0x150);
  *(undefined4 *)(iVar2 + 0x154) = *(undefined4 *)(iVar1 + 0x154);
  *(undefined4 *)(iVar2 + 0x158) = *(undefined4 *)(iVar1 + 0x158);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x15c) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x15c);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x144) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x144);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x110) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x110);
  return this;
}

