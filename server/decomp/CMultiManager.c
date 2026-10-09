/* ts_i386.so - CMultiManager (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e6034  CMultiManager::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CMultiManager::Save(CSave &) */

undefined4 __thiscall CMultiManager::Save(CMultiManager *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CMultiManager",(int)this,(int *)m_SaveData,5);
  }
  return uVar2;
}

/* 000e6084  CMultiManager::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CMultiManager::Restore(CRestore &) */

undefined4 __thiscall CMultiManager::Restore(CMultiManager *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CMultiManager",(int)this,(int)m_SaveData,5);
  }
  return uVar2;
}

/* 000e60d4  CMultiManager::KeyValue  (198 bytes)
 * undefined KeyValue(int param_1)
 */
/* CMultiManager::KeyValue(KeyValueData_s *) */

void __thiscall CMultiManager::KeyValue(CMultiManager *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  char local_ac [156];
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"wait");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x8c = (float)lVar2;
  }
  else {
    if (0xf < *(int *)&this->field_0x104) {
      return;
    }
    UTIL_StripToken(*(char **)(param_1 + 4),(int)local_ac);
    iVar1 = (*g_engfuncs.pfnAllocString)(local_ac);
    *(int *)(&this->field_0x110 + *(int *)&this->field_0x104 * 4) = iVar1;
    iVar1 = *(int *)&this->field_0x104;
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)(&this->field_0x150 + iVar1 * 4) = (float)lVar2;
    *(int *)&this->field_0x104 = *(int *)&this->field_0x104 + 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000e619c  CMultiManager::Spawn  (175 bytes)
 * undefined Spawn(void)
 */
/* CMultiManager::Spawn(void) */

void __thiscall CMultiManager::Spawn(CMultiManager *this)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  this->pev->solid = 0;
  *(undefined4 *)&this->field_0x1c = 0xffff0000;
  *(code **)&this->field_0x20 = ManagerUse;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = ManagerThink;
  do {
    bVar3 = false;
    iVar5 = 1;
    if (1 < *(int *)&this->field_0x104) {
      iVar4 = 0x110;
      iVar6 = 0x150;
      do {
        fVar1 = *(float *)(&this->field_0x44 + iVar4);
        if (fVar1 < *(float *)((int)&this->pev + iVar6)) {
          uVar2 = *(undefined4 *)(&this->field_0x4 + iVar4);
          *(undefined4 *)(&this->field_0x4 + iVar4) = *(undefined4 *)((int)&this->pev + iVar4);
          *(undefined4 *)(&this->field_0x44 + iVar4) = *(undefined4 *)(&this->field_0x40 + iVar4);
          *(undefined4 *)((int)&this->pev + iVar4) = uVar2;
          *(float *)(&this->field_0x40 + iVar4) = fVar1;
          bVar3 = true;
        }
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)&this->field_0x104);
    }
  } while (bVar3);
  return;
}

/* 000e624c  CMultiManager::HasTarget  (417 bytes)
 * undefined4 HasTarget(int param_1)
 */
/* CMultiManager::HasTarget(int) */

undefined4 __thiscall CMultiManager::HasTarget(CMultiManager *this,int param_1)

{
  globalvars_t *pgVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  pgVar1 = gpGlobals;
  iVar5 = 0;
  if (*(int *)&this->field_0x104 < 1) {
LAB_000e63e2:
    uVar4 = 0;
  }
  else {
    iVar6 = 0x110;
    uVar2 = *(uint *)&this->field_0x104 & 3;
    if (*(int *)&this->field_0x104 < 1) {
LAB_000e6301:
      iVar3 = strcmp(pgVar1->pStringBase + param_1,
                     pgVar1->pStringBase + *(int *)((int)&this->pev + iVar6));
      if (iVar3 != 0) {
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 1;
        if (iVar5 < *(int *)&this->field_0x104) goto LAB_000e633d;
        goto LAB_000e63e2;
      }
    }
    else {
      if (uVar2 == 0) {
LAB_000e633d:
        piVar7 = (int *)((int)&this->pev + iVar6);
        do {
          iVar6 = strcmp(pgVar1->pStringBase + param_1,pgVar1->pStringBase + *piVar7);
          if (iVar6 == 0) goto LAB_000e63c3;
          iVar6 = strcmp(pgVar1->pStringBase + param_1,pgVar1->pStringBase + piVar7[1]);
          if (iVar6 == 0) goto LAB_000e63c3;
          iVar6 = strcmp(pgVar1->pStringBase + param_1,pgVar1->pStringBase + piVar7[2]);
          if (iVar6 == 0) goto LAB_000e63c3;
          iVar6 = strcmp(pgVar1->pStringBase + param_1,pgVar1->pStringBase + piVar7[3]);
          if (iVar6 == 0) goto LAB_000e63c3;
          piVar7 = piVar7 + 4;
          iVar5 = iVar5 + 4;
        } while (iVar5 < *(int *)&this->field_0x104);
        goto LAB_000e63e2;
      }
      if (uVar2 < 2) goto LAB_000e6301;
      if (uVar2 < 3) {
LAB_000e62d5:
        iVar3 = strcmp(pgVar1->pStringBase + param_1,
                       pgVar1->pStringBase + *(int *)((int)&this->pev + iVar6));
        if (iVar3 != 0) {
          iVar6 = iVar6 + 4;
          iVar5 = iVar5 + 1;
          goto LAB_000e6301;
        }
      }
      else {
        iVar5 = strcmp(gpGlobals->pStringBase + param_1,
                       gpGlobals->pStringBase + *(int *)&this->field_0x110);
        if (iVar5 != 0) {
          iVar6 = 0x114;
          iVar5 = 1;
          goto LAB_000e62d5;
        }
      }
    }
LAB_000e63c3:
    uVar4 = 1;
  }
  return uVar4;
}

/* 000e63f0  CMultiManager::ManagerThink  (280 bytes)
 * undefined ManagerThink(void)
 */
/* CMultiManager::ManagerThink(void) */

void __thiscall CMultiManager::ManagerThink(CMultiManager *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  CMultiManager *pCVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  fVar1 = gpGlobals->time;
  fVar2 = *(float *)&this->field_0x10c;
  if (*(int *)&this->field_0x108 < *(int *)&this->field_0x104) {
    fVar3 = *(float *)(&this->field_0x150 + *(int *)&this->field_0x108 * 4);
    while (fVar3 <= fVar1 - fVar2) {
      uVar9 = 0;
      uVar8 = 3;
      pCVar7 = this;
      uVar5 = _((EHANDLE *)&this->field_0xd4);
      FireTargets((int)(gpGlobals->pStringBase +
                       *(int *)(&this->field_0x110 + *(int *)&this->field_0x108 * 4)),uVar5,pCVar7,
                  uVar8,uVar9);
      iVar4 = *(int *)&this->field_0x108;
      iVar6 = iVar4 + 1;
      *(int *)&this->field_0x108 = iVar6;
      if (*(int *)&this->field_0x104 <= iVar6) break;
      fVar3 = *(float *)(&this->field_0x154 + iVar4 * 4);
    }
  }
  if (*(int *)&this->field_0x108 < *(int *)&this->field_0x104) {
    this->pev->nextthink =
         *(float *)&this->field_0x10c +
         *(float *)(&this->field_0x150 + *(int *)&this->field_0x108 * 4);
  }
  else {
    *(undefined4 *)&this->field_0xc = 0;
    *(undefined4 *)&this->field_0x10 = 0;
    if (this->pev->spawnflags < 0) {
      UTIL_Remove((int *)this);
    }
    else {
      *(undefined4 *)&this->field_0x1c = 0xffff0000;
      *(code **)&this->field_0x20 = ManagerUse;
    }
  }
  return;
}

/* 000e650c  CMultiManager::Clone  (139 bytes)
 * undefined Clone(void)
 */
/* CMultiManager::Clone(void) */

void __thiscall CMultiManager::Clone(CMultiManager *this)

{
  int *piVar1;
  edict_t *peVar2;
  CMultiManager *pCVar3;
  int iVar4;
  entvars_t *peVar5;
  undefined4 *puVar6;
  entvars_t *peVar7;
  undefined4 *puVar8;
  
  pCVar3 = GetClassPtr<CMultiManager>(0);
  peVar2 = pCVar3->pev->pContainingEntity;
  peVar5 = this->pev;
  peVar7 = pCVar3->pev;
  for (iVar4 = 0xa9; iVar4 != 0; iVar4 = iVar4 + -1) {
    peVar7->classname = peVar5->classname;
    peVar5 = (entvars_t *)&peVar5->globalname;
    peVar7 = (entvars_t *)&peVar7->globalname;
  }
  pCVar3->pev->pContainingEntity = peVar2;
  piVar1 = &pCVar3->pev->spawnflags;
  *piVar1 = *piVar1 | 0x80000000;
  *(undefined4 *)&pCVar3->field_0x104 = *(undefined4 *)&this->field_0x104;
  puVar6 = (undefined4 *)&this->field_0x110;
  puVar8 = (undefined4 *)&pCVar3->field_0x110;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = (undefined4 *)&this->field_0x150;
  puVar8 = (undefined4 *)&pCVar3->field_0x150;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  return;
}

/* 000e6598  CMultiManager::ManagerUse  (189 bytes)
 * undefined ManagerUse(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
/* CMultiManager::ManagerUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CMultiManager::ManagerUse
          (CMultiManager *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
          )

{
  CMultiManager *this_00;
  byte bVar1;
  
  bVar1 = 0;
  if (-1 < this->pev->spawnflags) {
    bVar1 = (byte)this->pev->spawnflags & 1;
  }
  if (bVar1 == 0) {
    EHANDLE::operator=((EHANDLE *)&this->field_0xd4,param_1);
    *(undefined4 *)&this->field_0x108 = 0;
    *(float *)&this->field_0x10c = gpGlobals->time;
    *(undefined4 *)&this->field_0x1c = 0;
    *(undefined4 *)&this->field_0x20 = 0;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = ManagerThink;
    this->pev->nextthink = gpGlobals->time;
  }
  else {
    this_00 = (CMultiManager *)Clone(this);
    ManagerUse(this_00,param_1,param_2,param_3,param_4);
  }
  return;
}

/* 000eb5cc  CMultiManager::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CMultiManager::ObjectCaps(void) */

undefined4 CMultiManager::ObjectCaps(void)

{
  return 0;
}

/* 000eb5d4  CMultiManager::IsClone  (16 bytes)
 * uint IsClone(void)
 */
/* CMultiManager::IsClone(void) */

uint __thiscall CMultiManager::IsClone(CMultiManager *this)

{
  return (uint)this->pev->spawnflags >> 0x1f;
}

/* 000eb5e4  CMultiManager::ShouldClone  (39 bytes)
 * bool ShouldClone(void)
 */
/* CMultiManager::ShouldClone(void) */

bool __thiscall CMultiManager::ShouldClone(CMultiManager *this)

{
  if (this->pev->spawnflags < 0) {
    return false;
  }
  return (this->pev->spawnflags & 1) != 0;
}

