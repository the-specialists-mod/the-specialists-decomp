/* ts_i386.so - CRecharge (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c6d38  CRecharge::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CRecharge::Save(CSave &) */

undefined4 __thiscall CRecharge::Save(CRecharge *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CRecharge",(int)this,(int *)m_SaveData,5);
  }
  return uVar2;
}

/* 000c6d88  CRecharge::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CRecharge::Restore(CRestore &) */

undefined4 __thiscall CRecharge::Restore(CRecharge *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CRecharge",(int)this,(int)m_SaveData,5);
  }
  return uVar2;
}

/* 000c6dfc  CRecharge::KeyValue  (226 bytes)
 * undefined KeyValue(int param_1)
 */
/* CRecharge::KeyValue(KeyValueData_s *) */

void __thiscall CRecharge::KeyValue(CRecharge *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"style");
  if ((((iVar1 != 0) && (iVar1 = strcmp(*(char **)(param_1 + 4),"height"), iVar1 != 0)) &&
      (iVar1 = strcmp(*(char **)(param_1 + 4),"value1"), iVar1 != 0)) &&
     ((iVar1 = strcmp(*(char **)(param_1 + 4),"value2"), iVar1 != 0 &&
      (iVar1 = strcmp(*(char **)(param_1 + 4),"value3"), iVar1 != 0)))) {
    iVar1 = strcmp(*(char **)(param_1 + 4),"dmdelay");
    if (iVar1 != 0) {
      CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
      return;
    }
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x108 = uVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000c6ee4  CRecharge::Spawn  (166 bytes)
 * undefined Spawn(void)
 */
/* CRecharge::Spawn(void) */

void __thiscall CRecharge::Spawn(CRecharge *this)

{
  (*this->vtable[10])(this);
  this->pev->solid = 4;
  this->pev->movetype = 7;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  *(undefined4 *)&this->field_0x10c = 1;
  this->pev->frame = 0.0;
  return;
}

/* 000c6f8c  CRecharge::Precache  (66 bytes)
 * undefined Precache(void)
 */
/* CRecharge::Precache(void) */

void CRecharge::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)("items/suitcharge1.wav");
  (*g_engfuncs.pfnPrecacheSound)("items/suitchargeno1.wav");
  (*g_engfuncs.pfnPrecacheSound)("items/suitchargeok1.wav");
  return;
}

/* 000c6fd0  CRecharge::Use  (611 bytes)
 * undefined Use(CRecharge * param_1, CBasePlayer * param_2)
 */
/* CRecharge::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CRecharge::Use(CRecharge *param_1,CBasePlayer *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = strcmp(gpGlobals->pStringBase + param_2->pev->classname,"player");
  if (iVar1 == 0) {
    if (*(int *)&param_1->field_0x10c < 1) {
      param_1->pev->frame = 1.0;
      Off(param_1);
    }
    if ((*(int *)&param_1->field_0x10c < 1) || (-1 < param_2->pev->weapons)) {
      if (*(float *)&param_1->field_0x114 <= gpGlobals->time) {
        *(float *)&param_1->field_0x114 = gpGlobals->time + 0.62;
        EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,3,"items/suitchargeno1.wav",0x3f59999a,
                       0x3f4ccccd,0,100,0.5);
      }
    }
    else {
      param_1->pev->nextthink = param_1->pev->ltime + 0.25;
      *(undefined4 *)&param_1->field_0xc = 0xffff0000;
      *(code **)&param_1->field_0x10 = Off;
      if ((*(float *)&param_1->field_0x104 < gpGlobals->time) && (param_2 != (CBasePlayer *)0x0)) {
        EHANDLE::operator=((EHANDLE *)&param_1->field_0xd4,(int *)param_2);
        iVar1 = EHANDLE::operator->((EHANDLE *)&param_1->field_0xd4);
        iVar1 = (**(code **)(*(int *)(iVar1 + 0x60) + 200))(iVar1);
        if (iVar1 != 0) {
          if (*(int *)&param_1->field_0x110 == 0) {
            *(undefined4 *)&param_1->field_0x110 = 1;
            EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,3,"items/suitchargeok1.wav",
                           0x3f59999a,0x3f4ccccd,0,100,0.5);
            *(float *)&param_1->field_0x114 = gpGlobals->time + 0.56;
          }
          if ((*(int *)&param_1->field_0x110 == 1) &&
             (*(float *)&param_1->field_0x114 <= gpGlobals->time)) {
            *(undefined4 *)&param_1->field_0x110 = 2;
            EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,6,"items/suitcharge1.wav",0x3f59999a
                           ,0x3f4ccccd,0,100,0.5);
          }
          piVar2 = (int *)EHANDLE::operator->((EHANDLE *)&param_1->field_0xd4);
          if (*(float *)(*piVar2 + 0x1bc) < 100.0) {
            *(undefined4 *)&param_1->field_0x10c = 0;
            CBasePlayer::TakeArmor(param_2,100);
          }
          *(float *)&param_1->field_0x104 = gpGlobals->time + 0.1;
        }
      }
    }
  }
  return;
}

/* 000c7234  CRecharge::Recharge  (62 bytes)
 * undefined Recharge(void)
 */
/* CRecharge::Recharge(void) */

void __thiscall CRecharge::Recharge(CRecharge *this)

{
  *(undefined4 *)&this->field_0x10c = 1;
  this->pev->frame = 0.0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_DoNothing;
  return;
}

/* 000c7274  CRecharge::Off  (217 bytes)
 * undefined Off(void)
 */
/* CRecharge::Off(void) */

void __thiscall CRecharge::Off(CRecharge *this)

{
  code *pcVar1;
  longdouble lVar2;
  
  if (1 < *(int *)&this->field_0x110) {
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,"items/suitcharge1.wav",0,0,0x20,100,0.5);
  }
  *(undefined4 *)&this->field_0x110 = 0;
  if (*(int *)&this->field_0x10c == 0) {
    lVar2 = (longdouble)(**(code **)(*g_pGameRules + 0xbc))(g_pGameRules);
    *(int *)&this->field_0x108 = (int)ROUND(lVar2);
    if (0 < (int)ROUND(lVar2)) {
      this->pev->nextthink = (float)*(int *)&this->field_0x108 + this->pev->ltime;
      pcVar1 = Recharge;
      goto LAB_000c7343;
    }
  }
  pcVar1 = CBaseEntity::SUB_DoNothing;
LAB_000c7343:
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = pcVar1;
  return;
}

/* 000c743c  CRecharge::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CRecharge::ObjectCaps(void) */

undefined4 CRecharge::ObjectCaps(void)

{
  return 0x10;
}

