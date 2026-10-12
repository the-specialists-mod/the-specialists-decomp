/* mp.dll - CMultiManager (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10039d40  CMultiManager::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CMultiManager::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CMultiManager_100978d8,(int)param_1,0x100975d8,5);
  return;
}

/* 10039d70  CMultiManager::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CMultiManager::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CMultiManager_100978d8,(int)param_1,0x100975d8,5);
  return;
}

/* 10039da0  CMultiManager::KeyValue  (177 bytes)
 * undefined KeyValue()
 */
void __thiscall CMultiManager::KeyValue(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float10 fVar6;
  char acStack_80 [128];
  
  bVar5 = true;
  puVar2 = (undefined1 *)0x5;
  pcVar3 = *(char **)(param_2 + 4);
  pcVar4 = &DAT_10094d68;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x7c) = (float)fVar6;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  if (*(int *)(param_1 + 0xf0) < 0x10) {
    FUN_100688f0(*(char **)(param_2 + 4),acStack_80);
    iVar1 = (*g_engfuncs.pfnAllocString)(acStack_80);
    puVar2 = *(undefined1 **)(param_1 + 0xf0);
    *(int *)(param_1 + 0xfc + (int)puVar2 * 4) = iVar1;
    fVar6 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x13c + *(int *)(param_1 + 0xf0) * 4) = (float)fVar6;
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}

/* 10039e60  CMultiManager::Spawn  (112 bytes)
 * undefined Spawn()
 */
void __fastcall CMultiManager::Spawn(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(code **)(param_1 + 0x18) = ManagerUse;
  *(code **)(param_1 + 0x10) = ManagerThink;
  do {
    iVar5 = 1;
    bVar3 = false;
    if (*(int *)(param_1 + 0xf0) < 2) {
      return;
    }
    pfVar4 = (float *)(param_1 + 0x140);
    do {
      if (*pfVar4 < pfVar4[-1]) {
        fVar1 = pfVar4[-0x10];
        pfVar4[-0x10] = pfVar4[-0x11];
        fVar2 = pfVar4[-1];
        pfVar4[-1] = *pfVar4;
        *pfVar4 = fVar2;
        pfVar4[-0x11] = fVar1;
        bVar3 = true;
      }
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xf0));
  } while (bVar3);
  return;
}

/* 10039ed0  CMultiManager::HasTarget  (136 bytes)
 * undefined HasTarget()
 */
undefined4 __thiscall CMultiManager::HasTarget(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    piVar6 = (int *)(param_1 + 0xfc);
    do {
      pbVar2 = (byte *)(gpGlobals->pStringBase + *piVar6);
      pbVar5 = (byte *)(gpGlobals->pStringBase + param_2);
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_10039f2c:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_10039f31;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_10039f2c;
        pbVar5 = pbVar5 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10039f31:
      if (iVar3 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xf0));
  }
  return 0;
}

/* 10039f60  CMultiManager::ManagerThink  (222 bytes)
 * void ManagerThink(void)
 */
/* public: void __thiscall CMultiManager::ManagerThink(void) */

void __thiscall CMultiManager::ManagerThink(CMultiManager *this)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  CMultiManager *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0x39f60  61  ?ManagerThink@CMultiManager@@QAEXXZ */
  fVar1 = gpGlobals->time - *(float *)&this->field_0xf8;
  if (*(int *)&this->field_0xf4 < *(int *)&this->field_0xf0) {
    do {
      if (*(float *)(&this->field_0x13c + *(int *)&this->field_0xf4 * 4) < fVar1 ==
          (*(float *)(&this->field_0x13c + *(int *)&this->field_0xf4 * 4) == fVar1)) break;
      uVar6 = 0;
      uVar5 = 3;
      pCVar4 = this;
      uVar2 = FUN_1000c1d0((uint *)&this->field_0xc4);
      FireTargets((int)(gpGlobals->pStringBase +
                       *(int *)(&this->field_0xfc + *(int *)&this->field_0xf4 * 4)),uVar2,pCVar4,
                  uVar5,uVar6);
      iVar3 = *(int *)&this->field_0xf4 + 1;
      *(int *)&this->field_0xf4 = iVar3;
    } while (iVar3 < *(int *)&this->field_0xf0);
  }
  if (*(int *)&this->field_0xf4 < *(int *)&this->field_0xf0) {
    this->pev->nextthink =
         *(float *)(&this->field_0x13c + *(int *)&this->field_0xf4 * 4) +
         *(float *)&this->field_0xf8;
    return;
  }
  *(undefined4 *)&this->field_0x10 = 0;
  if (this->pev->spawnflags < 0) {
    UTIL_Remove((int)this);
    return;
  }
  *(code **)&this->field_0x18 = ManagerUse;
  return;
}

/* 1003a040  CMultiManager::Clone  (118 bytes)
 * undefined Clone(int param_1)
 * called by: CMultiManager::ManagerUse
 */
void __fastcall CMultiManager::Clone(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = GetClassPtr<CMultiManager>(0);
  uVar1 = (*(undefined4 **)(iVar2 + 4))[0x82];
  puVar4 = *(undefined4 **)(param_1 + 4);
  puVar5 = *(undefined4 **)(iVar2 + 4);
  for (iVar3 = 0xa9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x208) = uVar1;
  *(uint *)(*(int *)(iVar2 + 4) + 0x1a0) = *(uint *)(*(int *)(iVar2 + 4) + 0x1a0) | 0x80000000;
  *(undefined4 *)(iVar2 + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  puVar4 = (undefined4 *)(param_1 + 0xfc);
  puVar5 = (undefined4 *)(iVar2 + 0xfc);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x13c);
  puVar5 = (undefined4 *)(iVar2 + 0x13c);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}

/* 1003a0c0  CMultiManager::ManagerUse  (106 bytes)
 * void ManagerUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CMultiManager::ManagerUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CMultiManager::ManagerUse
          (CMultiManager *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  uint uVar1;
  
  while ((uVar1 = this->pev->spawnflags, -1 < (int)uVar1 && ((uVar1 & 1) != 0))) {
    this = (CMultiManager *)Clone((int)this);
  }
  EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)param_1);
  *(undefined4 *)&this->field_0xf4 = 0;
  *(float *)&this->field_0xf8 = gpGlobals->time;
  *(undefined4 *)&this->field_0x18 = 0;
  *(code **)&this->field_0x10 = ManagerThink;
  this->pev->nextthink = gpGlobals->time;
  return;
}

/* 1003cf40  CMultiManager::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CMultiManager::ObjectCaps(void)

{
  return 0;
}

