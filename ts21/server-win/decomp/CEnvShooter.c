/* mp.dll - CEnvShooter (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10018f40  CEnvShooter::KeyValue  (212 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CEnvShooter::KeyValue(CEnvShooter *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this_00;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 0xb;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_shootmodel_10092edc;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->model = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  this_00 = (void *)0xc;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_shootsounds_10092ed0;
  do {
    if (this_00 == (void *)0x0) break;
    this_00 = (void *)((int)this_00 + -1);
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
    switch(uVar1) {
    case 0:
      *(undefined4 *)&this->field_0x64 = 0;
      return;
    case 1:
      *(undefined4 *)&this->field_0x64 = 1;
      return;
    case 2:
      *(undefined4 *)&this->field_0x64 = 2;
      return;
    case 3:
      *(undefined4 *)&this->field_0x64 = 3;
      return;
    case 4:
      *(undefined4 *)&this->field_0x64 = 8;
      return;
    default:
      *(undefined4 *)&this->field_0x64 = 9;
      return;
    }
  }
  CGibShooter::KeyValue((CGibShooter *)this,param_1);
  return;
}

/* 10019030  CEnvShooter::Precache  (50 bytes)
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

/* 10019070  CEnvShooter::CreateGib  (226 bytes)
 * undefined CreateGib()
 */
void * __fastcall CEnvShooter::CreateGib(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  
  this = (void *)FUN_100135e0(0);
  FUN_100114d0(this,gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
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

