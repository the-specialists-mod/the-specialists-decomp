/* ts_i386.so - CEnvSound (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000dfb94  CEnvSound::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CEnvSound::Save(CSave &) */

undefined4 __thiscall CEnvSound::Save(CEnvSound *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CEnvSound",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000dfbe4  CEnvSound::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CEnvSound::Restore(CRestore &) */

undefined4 __thiscall CEnvSound::Restore(CEnvSound *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CEnvSound",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000dfc34  CEnvSound::KeyValue  (139 bytes)
 * undefined KeyValue(int param_1)
 */
/* CEnvSound::KeyValue(KeyValueData_s *) */

void __thiscall CEnvSound::KeyValue(CEnvSound *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"radius");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x64 = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  iVar1 = strcmp(*(char **)(param_1 + 4),"roomtype");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x68 = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}

/* 000dfe34  CEnvSound::Think  (583 bytes)
 * undefined Think(void)
 */
/* CEnvSound::Think(void) */

void __thiscall CEnvSound::Think(CEnvSound *this)

{
  bool bVar1;
  float fVar2;
  edict_t *pEdict;
  int iVar3;
  CBasePlayer *pCVar4;
  entvars_t *peVar5;
  undefined2 in_FPUControlWord;
  float local_20 [2];
  short local_16;
  undefined2 local_14;
  undefined2 uStack_12;
  
  pEdict = (*g_engfuncs.pfnFindClientInPVS)(this->pev->pContainingEntity);
  bVar1 = false;
  if ((pEdict == (edict_t *)0x0) ||
     (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar3 == 0)) {
    bVar1 = true;
  }
  if (!bVar1) {
    pCVar4 = GetClassPtr<CBasePlayer>((uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1);
    bVar1 = false;
    if ((*(edict_t **)&pCVar4->field_0x81c == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)&pCVar4->field_0x81c), iVar3 == 0))
    {
      bVar1 = true;
    }
    if ((bVar1) || (*(edict_t **)&pCVar4->field_0x81c != this->pev->pContainingEntity)) {
      iVar3 = FEnvSoundInRange((uint)this->pev,(uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1,
                               local_20);
      if ((iVar3 != 0) &&
         ((local_20[0] < *(float *)&pCVar4->field_0x824 || (*(float *)&pCVar4->field_0x824 == 0.0)))
         ) {
        *(edict_t **)&pCVar4->field_0x81c = this->pev->pContainingEntity;
        *(undefined4 *)&pCVar4->field_0x820 = *(undefined4 *)&this->field_0x68;
        *(float *)&pCVar4->field_0x824 = local_20[0];
        (*g_engfuncs.pfnMessageBegin)(1,0x25,(float *)0x0,pEdict);
        _local_14 = CONCAT22(uStack_12,in_FPUControlWord);
        local_16 = (short)ROUND(*(float *)&this->field_0x68);
        (*g_engfuncs.pfnWriteShort)((int)local_16);
        (*g_engfuncs.pfnMessageEnd)();
      }
LAB_000e0049:
      peVar5 = this->pev;
      fVar2 = 0.25;
      goto LAB_000e0071;
    }
    if ((*(float *)&pCVar4->field_0x820 != 0.0) && (*(float *)&pCVar4->field_0x824 != 0.0)) {
      iVar3 = FEnvSoundInRange((uint)this->pev,(uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1,
                               local_20);
      if (iVar3 != 0) {
        *(float *)&pCVar4->field_0x824 = local_20[0];
        goto LAB_000e0049;
      }
      *(undefined4 *)&pCVar4->field_0x824 = 0;
      *(undefined4 *)&pCVar4->field_0x820 = 0;
    }
  }
  peVar5 = this->pev;
  fVar2 = 0.75;
LAB_000e0071:
  peVar5->nextthink = fVar2 + gpGlobals->time;
  return;
}

/* 000e0084  CEnvSound::Spawn  (67 bytes)
 * undefined Spawn(void)
 */
/* CEnvSound::Spawn(void) */

void __thiscall CEnvSound::Spawn(CEnvSound *this)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,0.5);
  this->pev->nextthink = (float)(lVar1 + (longdouble)gpGlobals->time);
  return;
}

