/* ts_i386.so - CFuncTankLaser (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c41ec  CFuncTankLaser::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CFuncTankLaser::Save(CSave &) */

undefined4 __thiscall CFuncTankLaser::Save(CFuncTankLaser *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CFuncTank::Save((CFuncTank *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CFuncTankLaser",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000c423c  CFuncTankLaser::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CFuncTankLaser::Restore(CRestore &) */

undefined4 __thiscall CFuncTankLaser::Restore(CFuncTankLaser *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CFuncTank::Restore((CFuncTank *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CFuncTankLaser",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000c428c  CFuncTankLaser::Activate  (95 bytes)
 * undefined Activate(void)
 */
/* CFuncTankLaser::Activate(void) */

void __thiscall CFuncTankLaser::Activate(CFuncTankLaser *this)

{
  int iVar1;
  
  iVar1 = GetLaser(this);
  if (iVar1 == 0) {
    UTIL_Remove((int *)this);
    (*g_engfuncs.pfnAlertMessage)(at_error,"Laser tank with no env_laser!\n");
  }
  else {
    CLaser::TurnOff(*(CLaser **)&this->field_0xe4);
  }
  return;
}

/* 000c42ec  CFuncTankLaser::KeyValue  (100 bytes)
 * undefined KeyValue(int param_1)
 */
/* CFuncTankLaser::KeyValue(KeyValueData_s *) */

void __thiscall CFuncTankLaser::KeyValue(CFuncTankLaser *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"laserentity");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->message = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    CFuncTank::KeyValue((CFuncTank *)this,param_1);
  }
  return;
}

/* 000c4354  CFuncTankLaser::GetLaser  (303 bytes)
 * undefined4 GetLaser(void)
 */
/* CFuncTankLaser::GetLaser(void) */

undefined4 __thiscall CFuncTankLaser::GetLaser(CFuncTankLaser *this)

{
  bool bVar1;
  edict_t *pEdict;
  int iVar2;
  void *pvVar3;
  
  if (*(int *)&this->field_0xe4 == 0) {
    pEdict = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,"targetname",gpGlobals->pStringBase + this->pev->message);
    do {
      bVar1 = false;
      if (pEdict == (edict_t *)0x0) {
LAB_000c43ce:
        bVar1 = true;
      }
      else {
        iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
        if (iVar2 == 0) goto LAB_000c43ce;
      }
      if (bVar1) break;
      iVar2 = strcmp(gpGlobals->pStringBase +
                     *(int *)((uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1),"env_laser");
      if (iVar2 == 0) goto code_r0x000c4415;
      pEdict = (*g_engfuncs.pfnFindEntityByString)
                         (pEdict,"targetname",gpGlobals->pStringBase + this->pev->message);
    } while( true );
  }
LAB_000c4478:
  return *(undefined4 *)&this->field_0xe4;
code_r0x000c4415:
  if (pEdict == (edict_t *)0x0) {
    pEdict = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar3 = (void *)0x0;
  if (pEdict != (edict_t *)0x0) {
    pvVar3 = pEdict->pvPrivateData;
  }
  *(void **)&this->field_0xe4 = pvVar3;
  goto LAB_000c4478;
}

/* 000c4488  CFuncTankLaser::Think  (85 bytes)
 * undefined Think(void)
 */
/* CFuncTankLaser::Think(void) */

void __thiscall CFuncTankLaser::Think(CFuncTankLaser *this)

{
  if ((*(int *)&this->field_0xe4 != 0) && (*(float *)&this->field_0xe8 < gpGlobals->time)) {
    CLaser::TurnOff(*(CLaser **)&this->field_0xe4);
  }
  CFuncTank::Think((CFuncTank *)this);
  return;
}

/* 000c44e0  CFuncTankLaser::Fire  (748 bytes)
 * undefined Fire(CFuncTankLaser * param_1, float * param_2, float * param_3)
 */
/* CFuncTankLaser::Fire(Vector const &, Vector const &, entvars_s *) */

void CFuncTankLaser::Fire(CFuncTankLaser *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  uint local_6c;
  undefined1 local_5c [76];
  
  if ((*(float *)&param_1->field_0x98 != 0.0) && (iVar1 = GetLaser(param_1), iVar1 != 0)) {
    UTIL_MakeAimVectors((uint *)param_1->pev->angles);
    local_6c = (uint)ROUND((gpGlobals->time - *(float *)&param_1->field_0x98) *
                           *(float *)&param_1->field_0x9c);
    if (local_6c == 0) {
      return;
    }
    if (0 < (int)local_6c) {
      if ((local_6c & 1) != 0) {
        pfVar2 = param_2;
        pfVar3 = (float *)(**(int **)&param_1->field_0xe4 + 8);
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar3 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 + 1;
        }
        CFuncTank::TankTrace
                  ((CFuncTank *)param_1,param_2,param_3,
                   (float *)(&gTankSpread + *(int *)&param_1->field_0xdc * 3),local_5c);
        *(float *)&param_1->field_0xe8 = gpGlobals->time;
        CLaser::TurnOn(*(CLaser **)&param_1->field_0xe4);
        *(float *)(**(int **)&param_1->field_0xe4 + 0x1e4) = gpGlobals->time - 1.0;
        CLaser::FireAtPoint(*(CLaser **)&param_1->field_0xe4,(int)local_5c);
        *(undefined4 *)(**(int **)&param_1->field_0xe4 + 0x104) = 0;
        local_6c = local_6c - 1;
        if (local_6c == 0) goto LAB_000c47aa;
      }
      do {
        pfVar2 = param_2;
        pfVar3 = (float *)(**(int **)&param_1->field_0xe4 + 8);
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar3 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 + 1;
        }
        CFuncTank::TankTrace
                  ((CFuncTank *)param_1,param_2,param_3,
                   (float *)(&gTankSpread + *(int *)&param_1->field_0xdc * 3),local_5c);
        *(float *)&param_1->field_0xe8 = gpGlobals->time;
        CLaser::TurnOn(*(CLaser **)&param_1->field_0xe4);
        *(float *)(**(int **)&param_1->field_0xe4 + 0x1e4) = gpGlobals->time - 1.0;
        CLaser::FireAtPoint(*(CLaser **)&param_1->field_0xe4,(int)local_5c);
        *(undefined4 *)(**(int **)&param_1->field_0xe4 + 0x104) = 0;
        pfVar2 = param_2;
        pfVar3 = (float *)(**(int **)&param_1->field_0xe4 + 8);
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar3 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 + 1;
        }
        CFuncTank::TankTrace
                  ((CFuncTank *)param_1,param_2,param_3,
                   (float *)(&gTankSpread + *(int *)&param_1->field_0xdc * 3),local_5c);
        *(float *)&param_1->field_0xe8 = gpGlobals->time;
        CLaser::TurnOn(*(CLaser **)&param_1->field_0xe4);
        *(float *)(**(int **)&param_1->field_0xe4 + 0x1e4) = gpGlobals->time - 1.0;
        CLaser::FireAtPoint(*(CLaser **)&param_1->field_0xe4,(int)local_5c);
        *(undefined4 *)(**(int **)&param_1->field_0xe4 + 0x104) = 0;
        local_6c = local_6c - 2;
      } while (local_6c != 0);
    }
  }
LAB_000c47aa:
  CFuncTank::Fire((CBaseEntity *)param_1,param_2);
  return;
}

