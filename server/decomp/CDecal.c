/* ts_i386.so - CDecal (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f375c  CDecal::Spawn  (188 bytes)
 * undefined Spawn(void)
 */
/* CDecal::Spawn(void) */

void __thiscall CDecal::Spawn(CDecal *this)

{
  if ((this->pev->skin < 0) ||
     ((gpGlobals->deathmatch != 0.0 && ((this->pev->spawnflags & 0x800) != 0)))) {
    (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  }
  else if (this->pev->targetname == 0) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = StaticDecal;
    this->pev->nextthink = gpGlobals->time;
  }
  else {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = CBaseEntity::SUB_DoNothing;
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = TriggerDecal;
  }
  return;
}

/* 000f381c  CDecal::TriggerDecal  (427 bytes)
 * undefined TriggerDecal(int * param_1)
 */
/* CDecal::TriggerDecal(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CDecal::TriggerDecal(int *param_1)

{
  int iVar1;
  int iVar2;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [48];
  edict_t *local_2c;
  
  iVar2 = *param_1;
  local_7c = 0x40a00000;
  local_6c = *(float *)(iVar2 + 8) + 5.0;
  local_68 = *(float *)(iVar2 + 0xc) + 5.0;
  local_64 = *(float *)(iVar2 + 0x10) + 5.0;
  iVar1 = *param_1;
  local_8c = *(float *)(iVar1 + 8) - 5.0;
  local_88 = *(float *)(iVar1 + 0xc) - 5.0;
  local_84 = *(float *)(iVar1 + 0x10) - 5.0;
  local_78 = local_7c;
  local_74 = local_7c;
  UTIL_TraceLine(&local_8c,&local_6c,1,*(undefined4 *)(iVar2 + 0x208),local_5c);
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0xd);
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*param_1 + 8));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*param_1 + 0xc));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*param_1 + 0x10));
  (*g_engfuncs.pfnWriteShort)(*(int *)(*param_1 + 0x110));
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(local_2c);
  (*g_engfuncs.pfnWriteShort)((int)(short)iVar2);
  if ((short)iVar2 != 0) {
    (*g_engfuncs.pfnWriteShort)
              (*(int *)(((uint)&local_2c->v & (local_2c == (edict_t *)0x0) - 1) + 0xb4));
  }
  (*g_engfuncs.pfnMessageEnd)();
  param_1[3] = -0x10000;
  param_1[4] = (int)CBaseEntity::SUB_Remove;
  *(float *)(*param_1 + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 000f39c8  CDecal::StaticDecal  (300 bytes)
 * undefined StaticDecal(void)
 */
/* CDecal::StaticDecal(void) */

void __thiscall CDecal::StaticDecal(CDecal *this)

{
  entvars_t *peVar1;
  entvars_t *peVar2;
  int iVar3;
  int modelIndex;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [48];
  edict_t *local_2c;
  
  peVar1 = this->pev;
  local_7c = 0x40a00000;
  local_6c = peVar1->origin[0] + 5.0;
  local_68 = peVar1->origin[1] + 5.0;
  local_64 = peVar1->origin[2] + 5.0;
  peVar2 = this->pev;
  local_8c = peVar2->origin[0] - 5.0;
  local_88 = peVar2->origin[1] - 5.0;
  local_84 = peVar2->origin[2] - 5.0;
  local_78 = local_7c;
  local_74 = local_7c;
  UTIL_TraceLine(&local_8c,&local_6c,1,peVar1->pContainingEntity,local_5c);
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(local_2c);
  if ((short)iVar3 == 0) {
    modelIndex = 0;
  }
  else {
    modelIndex = *(int *)(((uint)&local_2c->v & (local_2c == (edict_t *)0x0) - 1) + 0xb4);
  }
  (*g_engfuncs.pfnStaticDecal)(this->pev->origin,this->pev->skin,(int)(short)iVar3,modelIndex);
  CBaseEntity::SUB_Remove((CBaseEntity *)this);
  return;
}

/* 000f3af8  CDecal::KeyValue  (135 bytes)
 * undefined KeyValue(int param_1)
 */
/* CDecal::KeyValue(KeyValueData_s *) */

void __thiscall CDecal::KeyValue(CDecal *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"texture");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnDecalIndex)(*(char **)(param_1 + 8));
    this->pev->skin = iVar1;
    if (this->pev->skin < 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,"Can\'t find decal %s\n",*(undefined4 *)(param_1 + 8));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

