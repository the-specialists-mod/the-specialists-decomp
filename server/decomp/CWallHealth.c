/* ts_i386.so - CWallHealth (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c8a70  CWallHealth::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CWallHealth::Save(CSave &) */

undefined4 __thiscall CWallHealth::Save(CWallHealth *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CWallHealth",(int)this,(int *)m_SaveData,5);
  }
  return uVar2;
}

/* 000c8ac0  CWallHealth::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CWallHealth::Restore(CRestore &) */

undefined4 __thiscall CWallHealth::Restore(CWallHealth *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CWallHealth",(int)this,(int)m_SaveData,5);
  }
  return uVar2;
}

/* 000c8b34  CWallHealth::KeyValue  (226 bytes)
 * undefined KeyValue(int param_1)
 */
/* CWallHealth::KeyValue(KeyValueData_s *) */

void __thiscall CWallHealth::KeyValue(CWallHealth *this,int param_1)

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

/* 000c8c1c  CWallHealth::Spawn  (166 bytes)
 * undefined Spawn(void)
 */
/* CWallHealth::Spawn(void) */

void __thiscall CWallHealth::Spawn(CWallHealth *this)

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

/* 000c8cc4  CWallHealth::Precache  (66 bytes)
 * undefined Precache(void)
 */
/* CWallHealth::Precache(void) */

void CWallHealth::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)("items/medshot4.wav");
  (*g_engfuncs.pfnPrecacheSound)("items/medshotno1.wav");
  (*g_engfuncs.pfnPrecacheSound)("items/medcharge4.wav");
  return;
}

/* 000c8d08  CWallHealth::Use  (545 bytes)
 * undefined Use(CWallHealth * param_1, int * param_2)
 */
/* CWallHealth::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CWallHealth::Use(CWallHealth *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(param_2[0x18] + 200))(param_2);
    if (iVar1 != 0) {
      if (*(int *)&param_1->field_0x10c < 1) {
        param_1->pev->frame = 1.0;
        Off(param_1);
      }
      if ((*(int *)&param_1->field_0x10c < 1) || (-1 < *(int *)(*param_2 + 0x168))) {
        if (*(float *)&param_1->field_0x114 <= gpGlobals->time) {
          *(float *)&param_1->field_0x114 = gpGlobals->time + 0.62;
          EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,3,"items/medshotno1.wav",0x3f800000,
                         0x3f4ccccd,0,100,0.5);
        }
      }
      else {
        param_1->pev->nextthink = param_1->pev->ltime + 0.25;
        *(undefined4 *)&param_1->field_0xc = 0xffff0000;
        *(code **)&param_1->field_0x10 = Off;
        if (*(float *)&param_1->field_0x104 < gpGlobals->time) {
          if (*(int *)&param_1->field_0x110 == 0) {
            *(undefined4 *)&param_1->field_0x110 = 1;
            EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,3,"items/medshot4.wav",0x3f800000,
                           0x3f4ccccd,0,100,0.5);
            *(float *)&param_1->field_0x114 = gpGlobals->time + 0.56;
          }
          if ((*(int *)&param_1->field_0x110 == 1) &&
             (*(float *)&param_1->field_0x114 <= gpGlobals->time)) {
            *(undefined4 *)&param_1->field_0x110 = 2;
            EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,6,"items/medcharge4.wav",0x3f800000,
                           0x3f4ccccd,0,100,0.5);
          }
          if (*(float *)(*param_2 + 0x160) != *(float *)(*param_2 + 0x1b0)) {
            iVar1 = (**(code **)(param_2[0x18] + 0x5c))
                              (param_2,*(float *)(*param_2 + 0x1b0) - *(float *)(*param_2 + 0x160),0
                              );
            if (iVar1 != 0) {
              *(undefined4 *)&param_1->field_0x10c = 0;
            }
            *(float *)&param_1->field_0x104 = gpGlobals->time + 0.1;
          }
        }
      }
    }
  }
  return;
}

/* 000c8f2c  CWallHealth::Recharge  (114 bytes)
 * undefined Recharge(void)
 */
/* CWallHealth::Recharge(void) */

void __thiscall CWallHealth::Recharge(CWallHealth *this)

{
  EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"items/medshot4.wav",0x3f800000,0x3f4ccccd,0,
                 100,0.5);
  *(undefined4 *)&this->field_0x10c = 1;
  this->pev->frame = 0.0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_DoNothing;
  return;
}

/* 000c8fa0  CWallHealth::Off  (217 bytes)
 * undefined Off(void)
 */
/* CWallHealth::Off(void) */

void __thiscall CWallHealth::Off(CWallHealth *this)

{
  code *pcVar1;
  longdouble lVar2;
  
  if (1 < *(int *)&this->field_0x110) {
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,"items/medcharge4.wav",0,0,0x20,100,0.5);
  }
  *(undefined4 *)&this->field_0x110 = 0;
  if (*(int *)&this->field_0x10c == 0) {
    lVar2 = (longdouble)(**(code **)(*g_pGameRules + 0xb8))(g_pGameRules);
    *(int *)&this->field_0x108 = (int)ROUND(lVar2);
    if (0 < (int)ROUND(lVar2)) {
      this->pev->nextthink = (float)*(int *)&this->field_0x108 + this->pev->ltime;
      pcVar1 = Recharge;
      goto LAB_000c906f;
    }
  }
  pcVar1 = CBaseEntity::SUB_DoNothing;
LAB_000c906f:
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = pcVar1;
  return;
}

/* 000c923c  CWallHealth::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CWallHealth::ObjectCaps(void) */

undefined4 CWallHealth::ObjectCaps(void)

{
  return 0x10;
}

