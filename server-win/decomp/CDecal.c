/* mp.dll - CDecal (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007acd0  CDecal::Spawn  (107 bytes)
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

/* 1007ad40  CDecal::TriggerDecal  (330 bytes)
 * void TriggerDecal(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CDecal::TriggerDecal(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CDecal::TriggerDecal
          (CDecal *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
  entvars_t *peVar1;
  int iVar2;
  edict_t *in_stack_0000001c;
  int in_stack_00000024;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_38 [14];
  
                    /* 0x7ad40  125  ?TriggerDecal@CDecal@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  peVar1 = this->pev;
  local_50 = peVar1->origin[0] + 5.0;
  local_4c = peVar1->origin[1] + 5.0;
  local_48 = peVar1->origin[2] + 5.0;
  local_44 = peVar1->origin[0] - 5.0;
  local_40 = peVar1->origin[1] - 5.0;
  UTIL_TraceLine(&local_44,&local_50,1,peVar1->pContainingEntity,local_38);
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0xd);
  (*g_engfuncs.pfnWriteCoord)(this->pev->origin[0]);
  (*g_engfuncs.pfnWriteCoord)(this->pev->origin[1]);
  (*g_engfuncs.pfnWriteCoord)(this->pev->origin[2]);
  (*g_engfuncs.pfnWriteShort)(this->pev->skin);
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(in_stack_0000001c);
  (*g_engfuncs.pfnWriteShort)((int)(short)iVar2);
  if ((short)iVar2 != 0) {
    if (in_stack_00000024 != 0) {
      in_stack_00000024 = in_stack_00000024 + 0x80;
    }
    local_40 = 2.6758374e-29;
    (*g_engfuncs.pfnWriteShort)(*(int *)(in_stack_00000024 + 0xb4));
  }
  local_38[0] = 0x1007ae64;
  (*g_engfuncs.pfnMessageEnd)();
  *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 1007ae90  CDecal::StaticDecal  (237 bytes)
 * void StaticDecal(void)
 */
/* public: void __thiscall CDecal::StaticDecal(void) */

void __thiscall CDecal::StaticDecal(CDecal *this)

{
  entvars_t *peVar1;
  int iVar2;
  int modelIndex;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [48];
  edict_t *local_8;
  
                    /* 0x7ae90  110  ?StaticDecal@CDecal@@QAEXXZ */
  peVar1 = this->pev;
  local_50 = peVar1->origin[0] + 5.0;
  local_4c = peVar1->origin[1] + 5.0;
  local_48 = peVar1->origin[2] + 5.0;
  local_44 = peVar1->origin[0] - 5.0;
  local_40 = peVar1->origin[1] - 5.0;
  local_3c = peVar1->origin[2] - 5.0;
  UTIL_TraceLine(&local_44,&local_50,1,peVar1->pContainingEntity,local_38);
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(local_8);
  if ((short)iVar2 == 0) {
    modelIndex = 0;
  }
  else {
    modelIndex = iRam000000b4;
    if (local_8 != (edict_t *)0x0) {
      modelIndex = (local_8->v).modelindex;
    }
  }
  (*g_engfuncs.pfnStaticDecal)(this->pev->origin,this->pev->skin,(int)(short)iVar2,modelIndex);
  CBaseEntity::SUB_Remove((CBaseEntity *)this);
  return;
}

/* 1007af80  CDecal::KeyValue  (143 bytes)
 * undefined KeyValue()
 */
void __thiscall CDecal::KeyValue(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pbVar2 = *(byte **)(param_2 + 4);
  pcVar4 = s_texture_1009de84;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_1007afba:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_1007afbf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_1007afba;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1007afbf:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnDecalIndex)(*(char **)(param_2 + 8));
    *(int *)(*(int *)(param_1 + 4) + 0x110) = iVar3;
    if (*(int *)(*(int *)(param_1 + 4) + 0x110) < 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,s_Can_t_find_decal__s_100a7b7c,*(undefined4 *)(param_2 + 8));
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}

