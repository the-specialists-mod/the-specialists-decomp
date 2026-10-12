/* mp.dll - CDecal (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006bd10  CDecal::Spawn  (107 bytes)
 * undefined Spawn()
 */
void __fastcall CDecal::Spawn(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((-1 < *(int *)(iVar1 + 0x110)) &&
     ((gpGlobals->deathmatch == 0.0 || ((*(uint *)(iVar1 + 0x1a0) & 0x800) == 0)))) {
    if (*(int *)(iVar1 + 0x1cc) == 0) {
      *(code **)(param_1 + 0x10) = StaticDecal;
      *(float *)(iVar1 + 0x104) = gpGlobals->time;
      return;
    }
    *(code **)(param_1 + 0x10) = CBaseEntity::SUB_DoNothing;
    *(code **)(param_1 + 0x18) = TriggerDecal;
    return;
  }
  (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(iVar1 + 0x208));
  return;
}

/* 1006bd80  CDecal::TriggerDecal  (298 bytes)
 * void TriggerDecal(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CDecal::TriggerDecal(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CDecal::TriggerDecal
          (CDecal *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
  int iVar1;
  edict_t *in_stack_0000001c;
  int in_stack_00000024;
  
                    /* 0x6bd80  118  ?TriggerDecal@CDecal@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  FUN_10067850();
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0xd);
  (*g_engfuncs.pfnWriteCoord)(this->pev->origin[0]);
  (*g_engfuncs.pfnWriteCoord)(this->pev->origin[1]);
  (*g_engfuncs.pfnWriteCoord)(this->pev->origin[2]);
  (*g_engfuncs.pfnWriteShort)(this->pev->skin);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(in_stack_0000001c);
  (*g_engfuncs.pfnWriteShort)((int)(short)iVar1);
  if ((short)iVar1 != 0) {
    if (in_stack_00000024 != 0) {
      in_stack_00000024 = in_stack_00000024 + 0x80;
    }
    (*g_engfuncs.pfnWriteShort)(*(int *)(in_stack_00000024 + 0xb4));
  }
  (*g_engfuncs.pfnMessageEnd)();
  *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 1006beb0  CDecal::StaticDecal  (205 bytes)
 * void StaticDecal(void)
 */
/* public: void __thiscall CDecal::StaticDecal(void) */

void __thiscall CDecal::StaticDecal(CDecal *this)

{
  int iVar1;
  int modelIndex;
  edict_t *peStack_8;
  
                    /* 0x6beb0  103  ?StaticDecal@CDecal@@QAEXXZ */
  FUN_10067850();
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(peStack_8);
  if ((short)iVar1 == 0) {
    modelIndex = 0;
  }
  else {
    modelIndex = iRam000000b4;
    if (peStack_8 != (edict_t *)0x0) {
      modelIndex = (peStack_8->v).modelindex;
    }
  }
  (*g_engfuncs.pfnStaticDecal)(this->pev->origin,this->pev->skin,(int)(short)iVar1,modelIndex);
  CBaseEntity::SUB_Remove((CBaseEntity *)this);
  return;
}

/* 1006bf80  CDecal::KeyValue  (105 bytes)
 * undefined KeyValue()
 */
void __thiscall CDecal::KeyValue(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 8;
  bVar4 = true;
  pcVar2 = *(char **)(param_2 + 4);
  pcVar3 = s_texture_10092d8c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnDecalIndex)(*(char **)(param_2 + 8));
    *(int *)(*(int *)(param_1 + 4) + 0x110) = iVar1;
    if (*(int *)(*(int *)(param_1 + 4) + 0x110) < 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,s_Can_t_find_decal__s_1009b428,*(undefined4 *)(param_2 + 8));
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}

