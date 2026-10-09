/* ts_i386.so - global_000cec9c (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cec9c  CBaseMonster_type_info_function  (70 bytes)
 * undefined4 * CBaseMonster_type_info_function(void)
 */
/* CBaseMonster type_info function */

undefined4 * CBaseMonster_type_info_function(void)

{
  if (CBaseMonster_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CBaseMonster_type_info_node,"12CBaseMonster",&CBaseToggle_type_info_node);
  }
  return &CBaseMonster_type_info_node;
}

/* 000d0168  DestroyMapCycle  (96 bytes)
 * undefined DestroyMapCycle(int * param_1)
 */
/* DestroyMapCycle(mapcycle_s *) */

void DestroyMapCycle(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar1;
    while (puVar3 != puVar1) {
      puVar2 = (undefined4 *)*puVar3;
      __builtin_delete(puVar3);
      puVar3 = puVar2;
    }
    __builtin_delete((void *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

/* 000d01c8  COM_Parse  (258 bytes)
 * char * COM_Parse(char * param_1)
 */
/* COM_Parse(char *) */

char * COM_Parse(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  com_token = 0;
  if (param_1 != (char *)0x0) {
    while( true ) {
      while (cVar2 = *param_1, ' ' < cVar2) {
        if ((cVar2 != '/') || (param_1[1] != '/')) {
          if (cVar2 == '\"') {
            pcVar1 = param_1 + 1;
            while( true ) {
              cVar2 = *pcVar1;
              pcVar1 = pcVar1 + 1;
              if ((cVar2 == '\"') || (cVar2 == '\0')) break;
              (&com_token)[iVar3] = cVar2;
              iVar3 = iVar3 + 1;
            }
            (&com_token)[iVar3] = 0;
            return pcVar1;
          }
          if ((((cVar2 == '{') || (cVar2 == '}')) || (cVar2 == ')')) ||
             (((cVar2 == '(' || (cVar2 == '\'')) || (cVar2 == ',')))) {
            com_token = cVar2;
            DAT_00191321 = 0;
            return param_1 + 1;
          }
          goto LAB_000d02a0;
        }
        if (*param_1 != '\0') {
          cVar2 = *param_1;
          while ((cVar2 != '\n' && (param_1 = param_1 + 1, *param_1 != '\0'))) {
            cVar2 = *param_1;
          }
        }
      }
      if (cVar2 == '\0') break;
      param_1 = param_1 + 1;
    }
  }
  return (char *)0x0;
LAB_000d02a0:
  iVar4 = iVar3;
  (&com_token)[iVar4] = cVar2;
  param_1 = param_1 + 1;
  cVar2 = *param_1;
  if ((cVar2 == '{') || (cVar2 == '}')) {
LAB_000d02cb:
    (&DAT_00191321)[iVar4] = 0;
    return param_1;
  }
  if ((cVar2 == ')') ||
     ((((cVar2 == '(' || (cVar2 == '\'')) || (cVar2 == ',')) || (iVar3 = iVar4 + 1, cVar2 < '!'))))
  goto LAB_000d02cb;
  goto LAB_000d02a0;
}

/* 000d02d8  COM_TokenWaiting  (79 bytes)
 * undefined4 COM_TokenWaiting(char * param_1)
 */
/* COM_TokenWaiting(char *) */

undefined4 COM_TokenWaiting(char *param_1)

{
  char cVar1;
  
  if (*param_1 != '\0') {
    cVar1 = *param_1;
    while (cVar1 != '\n') {
      if ((*(ushort *)(__ctype_b + *param_1 * 2) & 0x2008) != 0x2000) {
        return 1;
      }
      param_1 = param_1 + 1;
      if (*param_1 == '\0') {
        return 0;
      }
      cVar1 = *param_1;
    }
  }
  return 0;
}

/* 000d032c  ReloadMapCycleFile  (782 bytes)
 * undefined4 ReloadMapCycleFile(undefined4 param_1, int * param_2)
 */
/* ReloadMapCycleFile(char *, mapcycle_s *) */

undefined4 ReloadMapCycleFile(char *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  byte_conflict *buffer;
  byte_conflict *pbVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *local_44c;
  int local_440;
  char local_43c [32];
  char local_41c [1036];
  
  buffer = (*g_engfuncs.pfnLoadFileForMe)(param_1,&local_440);
  local_44c = (int *)0x0;
  if ((buffer != (byte_conflict *)0x0) && (local_440 != 0)) {
    pbVar3 = buffer;
LAB_000d0390:
    bVar2 = false;
    pcVar5 = local_41c;
    for (iVar9 = 0x100; iVar9 != 0; iVar9 = iVar9 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    }
    pbVar3 = (byte_conflict *)COM_Parse((char *)pbVar3);
    iVar9 = -1;
    pcVar5 = &com_token;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (iVar9 != -2) {
      strcpy(local_43c,&com_token);
      iVar9 = COM_TokenWaiting((char *)pbVar3);
      if (iVar9 != 0) {
        pbVar3 = (byte_conflict *)COM_Parse((char *)pbVar3);
        iVar9 = -1;
        pcVar5 = &com_token;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (iVar9 != -2) {
          bVar2 = true;
          strcpy(local_41c,&com_token);
        }
      }
      iVar9 = (*g_engfuncs.pfnIsMapValid)(local_43c);
      if (iVar9 == 0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,"Skipping %s from mapcycle, not a valid map\n",local_43c);
      }
      else {
        piVar4 = (int *)__builtin_new(0x42c);
        strcpy((char *)(piVar4 + 1),local_43c);
        piVar4[9] = 0;
        piVar4[10] = 0;
        piVar10 = piVar4 + 0xb;
        for (iVar9 = 0x100; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
        if (bVar2) {
          pcVar5 = (*g_engfuncs.pfnInfoKeyValue)(local_41c,"minplayers");
          if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
            uVar6 = __strtol_internal(pcVar5,0,10,0);
            uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & uVar6;
            piVar4[9] = uVar6;
            uVar7 = gpGlobals->maxClients;
            if ((int)uVar6 < gpGlobals->maxClients) {
              uVar7 = uVar6;
            }
            piVar4[9] = uVar7;
          }
          pcVar5 = (*g_engfuncs.pfnInfoKeyValue)(local_41c,"maxplayers");
          if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
            uVar6 = __strtol_internal(pcVar5,0,10,0);
            uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & uVar6;
            piVar4[10] = uVar6;
            uVar7 = gpGlobals->maxClients;
            if ((int)uVar6 < gpGlobals->maxClients) {
              uVar7 = uVar6;
            }
            piVar4[10] = uVar7;
          }
          (*g_engfuncs.pfnInfo_RemoveKey)(local_41c,"minplayers");
          (*g_engfuncs.pfnInfo_RemoveKey)(local_41c,"maxplayers");
          strcpy((char *)(piVar4 + 0xb),local_41c);
        }
        *piVar4 = *param_2;
        *param_2 = (int)piVar4;
      }
      goto LAB_000d0390;
    }
    (*g_engfuncs.pfnFreeFile)(buffer);
  }
  piVar10 = (int *)*param_2;
  while (piVar4 = piVar10, piVar4 != (int *)0x0) {
    piVar10 = (int *)*piVar4;
    *piVar4 = (int)local_44c;
    local_44c = piVar4;
  }
  *param_2 = (int)local_44c;
  uVar8 = 0;
  if (local_44c != (int *)0x0) {
    iVar9 = *local_44c;
    while (iVar9 != 0) {
      local_44c = (int *)*local_44c;
      iVar9 = *local_44c;
    }
    iVar9 = *param_2;
    *local_44c = iVar9;
    param_2[1] = iVar9;
    uVar8 = 1;
  }
  return uVar8;
}

/* 000d0640  CountPlayers  (87 bytes)
 * int CountPlayers(void)
 */
/* CountPlayers(void) */

int CountPlayers(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      iVar1 = UTIL_PlayerByIndex(iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  return iVar3;
}

/* 000d0698  ExtractCommandString  (236 bytes)
 * undefined ExtractCommandString(char * param_1, char * param_2)
 */
/* ExtractCommandString(char *, char *) */

void ExtractCommandString(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_41c [512];
  char local_21c [524];
  
  if (*param_1 != '\\') goto LAB_000d06bc;
  do {
    param_1 = param_1 + 1;
LAB_000d06bc:
    pcVar3 = local_21c;
    cVar1 = *param_1;
    while (cVar1 != '\\') {
      if (*param_1 == '\0') {
        return;
      }
      *pcVar3 = *param_1;
      param_1 = param_1 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *param_1;
    }
    *pcVar3 = '\0';
    pcVar3 = local_41c;
    while ((param_1 = param_1 + 1, *param_1 != '\\' && (*param_1 != '\0'))) {
      if (*param_1 == '\0') {
        return;
      }
      *pcVar3 = *param_1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar3 = '\0';
    strcat(param_2,local_21c);
    iVar2 = -1;
    pcVar3 = local_41c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      strcat(param_2," ");
      strcat(param_2,local_41c);
    }
    strcat(param_2,"\n");
    if (*param_1 == '\0') {
      return;
    }
  } while( true );
}

/* 000d0ca4  __static_initialization_and_destruction_0  (136 bytes)
 * undefined __static_initialization_and_destruction_0(int param_1, int param_2)
 * called by: global.constructors.keyed.to.g_flIntermissionStartTime, global.destructors.keyed.to.g_flIntermissionStartTime
 */
void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_2 == 0xffff) && (param_1 == 1)) {
    CVoiceGameMgr::CVoiceGameMgr((CVoiceGameMgr *)g_VoiceGameMgr);
    g_GameMgrHelper = CMultiplayGameMgrHelper_virtual_table;
  }
  if ((param_2 == 0xffff) && (param_1 == 0)) {
    g_GameMgrHelper = IVoiceGameMgrHelper_virtual_table;
    CVoiceGameMgr::~CVoiceGameMgr((CVoiceGameMgr *)g_VoiceGameMgr,2);
  }
  return;
}

/* 000d0d2c  global.constructors.keyed.to.g_flIntermissionStartTime  (19 bytes)
 * undefined global.constructors.keyed.to.g_flIntermissionStartTime(void)
 */
/* global constructors keyed to g_flIntermissionStartTime */

void global_constructors_keyed_to_g_flIntermissionStartTime(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

/* 000d0d40  global.destructors.keyed.to.g_flIntermissionStartTime  (19 bytes)
 * undefined global.destructors.keyed.to.g_flIntermissionStartTime(void)
 */
/* global destructors keyed to g_flIntermissionStartTime */

void global_destructors_keyed_to_g_flIntermissionStartTime(void)

{
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

/* 000d0d54  CHalfLifeMultiplay_type_info_function  (70 bytes)
 * undefined4 * CHalfLifeMultiplay_type_info_function(void)
 */
/* CHalfLifeMultiplay type_info function */

undefined4 * CHalfLifeMultiplay_type_info_function(void)

{
  if (CHalfLifeMultiplay_type_info_node == 0) {
    CGameRules_type_info_function();
    __rtti_si(&CHalfLifeMultiplay_type_info_node,"18CHalfLifeMultiplay",&CGameRules_type_info_node);
  }
  return &CHalfLifeMultiplay_type_info_node;
}

/* 000d0dd0  IVoiceGameMgrHelper_type_info_function  (57 bytes)
 * undefined4 * IVoiceGameMgrHelper_type_info_function(void)
 */
/* IVoiceGameMgrHelper type_info function */

undefined4 * IVoiceGameMgrHelper_type_info_function(void)

{
  if (IVoiceGameMgrHelper_type_info_node == 0) {
    __rtti_user(&IVoiceGameMgrHelper_type_info_node,"19IVoiceGameMgrHelper");
  }
  return &IVoiceGameMgrHelper_type_info_node;
}

/* 000d0e88  CMultiplayGameMgrHelper_type_info_function  (70 bytes)
 * undefined4 * CMultiplayGameMgrHelper_type_info_function(void)
 */
/* CMultiplayGameMgrHelper type_info function */

undefined4 * CMultiplayGameMgrHelper_type_info_function(void)

{
  if (CMultiplayGameMgrHelper_type_info_node == 0) {
    IVoiceGameMgrHelper_type_info_function();
    __rtti_si(&CMultiplayGameMgrHelper_type_info_node,"23CMultiplayGameMgrHelper",
              &IVoiceGameMgrHelper_type_info_node);
  }
  return &CMultiplayGameMgrHelper_type_info_node;
}

/* 000d0f7c  path_corner  (33 bytes)
 * undefined path_corner(uint param_1)
 */
void path_corner(uint param_1)

{
  GetClassPtr<CPathCorner>(param_1);
  return;
}

/* 000d1144  path_track  (33 bytes)
 * undefined path_track(uint param_1)
 */
void path_track(uint param_1)

{
  GetClassPtr<CPathTrack>(param_1);
  return;
}

/* 000d1c98  GetClassPtr<CPathCorner>  (140 bytes)
 * CPathCorner * GetClassPtr<CPathCorner>(uint param_1)
 */
/* CPathCorner * GetClassPtr<CPathCorner>(CPathCorner *) */

CPathCorner * GetClassPtr<CPathCorner>(uint param_1)

{
  edict_t *peVar1;
  CPathCorner *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CPathCorner *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CPathCorner *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CPathCorner_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d1d24  GetClassPtr<CPathTrack>  (140 bytes)
 * CPathTrack * GetClassPtr<CPathTrack>(uint param_1)
 */
/* CPathTrack * GetClassPtr<CPathTrack>(CPathTrack *) */

CPathTrack * GetClassPtr<CPathTrack>(uint param_1)

{
  edict_t *peVar1;
  CPathTrack *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CPathTrack *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CPathTrack *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x78);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CPathTrack_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d1db0  CPathTrack_type_info_function  (70 bytes)
 * undefined4 * CPathTrack_type_info_function(void)
 */
/* CPathTrack type_info function */

undefined4 * CPathTrack_type_info_function(void)

{
  if (CPathTrack_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CPathTrack_type_info_node,"10CPathTrack",&CPointEntity_type_info_node);
  }
  return &CPathTrack_type_info_node;
}

/* 000d1df8  CPathCorner_type_info_function  (70 bytes)
 * undefined4 * CPathCorner_type_info_function(void)
 */
/* CPathCorner type_info function */

undefined4 * CPathCorner_type_info_function(void)

{
  if (CPathCorner_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CPathCorner_type_info_node,"11CPathCorner",&CPointEntity_type_info_node);
  }
  return &CPathCorner_type_info_node;
}

/* 000d2468  func_plat  (33 bytes)
 * undefined func_plat(uint param_1)
 */
void func_plat(uint param_1)

{
  GetClassPtr<CFuncPlat>(param_1);
  return;
}

/* 000d2824  PlatSpawnInsideTrigger  (52 bytes)
 * undefined PlatSpawnInsideTrigger(uint param_1)
 * called by: CFuncPlat::Precache
 */
/* PlatSpawnInsideTrigger(entvars_s *) */

void PlatSpawnInsideTrigger(uint param_1)

{
  CFuncPlat *pCVar1;
  CPlatTrigger *this;
  
  pCVar1 = GetClassPtr<CFuncPlat>(param_1);
  this = GetClassPtr<CPlatTrigger>(0);
  CPlatTrigger::SpawnInsideTrigger(this,(int *)pCVar1);
  return;
}

/* 000d2f4c  func_platrot  (33 bytes)
 * undefined func_platrot(uint param_1)
 */
void func_platrot(uint param_1)

{
  GetClassPtr<CFuncPlatRot>(param_1);
  return;
}

/* 000d3350  func_train  (33 bytes)
 * undefined func_train(uint param_1)
 */
void func_train(uint param_1)

{
  GetClassPtr<CFuncTrain>(param_1);
  return;
}

/* 000d3f8c  func_tracktrain  (33 bytes)
 * undefined func_tracktrain(uint param_1)
 */
void func_tracktrain(uint param_1)

{
  GetClassPtr<CFuncTrackTrain>(param_1);
  return;
}

/* 000d4584  Fix  (82 bytes)
 * undefined Fix(float param_1)
 * called by: FixupAngles
 */
/* Fix(float) */

void Fix(float param_1)

{
  for (; param_1 < 0.0; param_1 = param_1 + 360.0) {
  }
  for (; 360.0 < param_1; param_1 = param_1 - 360.0) {
  }
  return;
}

/* 000d45dc  FixupAngles  (50 bytes)
 * undefined FixupAngles(float * param_1)
 * called by: CFuncTrackTrain::Next
 */
/* FixupAngles(Vector &) */

void FixupAngles(float *param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)Fix(*param_1);
  *param_1 = (float)lVar1;
  lVar1 = (longdouble)Fix(param_1[1]);
  param_1[1] = (float)lVar1;
  lVar1 = (longdouble)Fix(param_1[2]);
  param_1[2] = (float)lVar1;
  return;
}

/* 000d5ab0  func_traincontrols  (33 bytes)
 * undefined func_traincontrols(uint param_1)
 */
void func_traincontrols(uint param_1)

{
  GetClassPtr<CFuncTrainControls>(param_1);
  return;
}

/* 000d5cc0  func_trackchange  (33 bytes)
 * undefined func_trackchange(uint param_1)
 */
void func_trackchange(uint param_1)

{
  GetClassPtr<CFuncTrackChange>(param_1);
  return;
}

/* 000d6b3c  func_trackautochange  (33 bytes)
 * undefined func_trackautochange(uint param_1)
 */
void func_trackautochange(uint param_1)

{
  GetClassPtr<CFuncTrackAuto>(param_1);
  return;
}

/* 000d6d84  func_guntarget  (33 bytes)
 * undefined func_guntarget(uint param_1)
 */
void func_guntarget(uint param_1)

{
  GetClassPtr<CGunTarget>(param_1);
  return;
}

/* 000d73d8  GetClassPtr<CFuncPlat>  (170 bytes)
 * CFuncPlat * GetClassPtr<CFuncPlat>(uint param_1)
 */
/* CFuncPlat * GetClassPtr<CFuncPlat>(CFuncPlat *) */

CFuncPlat * GetClassPtr<CFuncPlat>(uint param_1)

{
  edict_t *peVar1;
  CFuncPlat *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncPlat *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncPlat *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x114)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBasePlatTrain_virtual_table;
    pCVar2->vtable = (void **)CFuncPlat_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d7484  GetClassPtr<CPlatTrigger>  (131 bytes)
 * CPlatTrigger * GetClassPtr<CPlatTrigger>(uint param_1)
 */
/* CPlatTrigger * GetClassPtr<CPlatTrigger>(CPlatTrigger *) */

CPlatTrigger * GetClassPtr<CPlatTrigger>(uint param_1)

{
  edict_t *peVar1;
  CPlatTrigger *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CPlatTrigger *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CPlatTrigger *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPlatTrigger_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d7508  GetClassPtr<CFuncPlatRot>  (179 bytes)
 * CFuncPlatRot * GetClassPtr<CFuncPlatRot>(uint param_1)
 */
/* CFuncPlatRot * GetClassPtr<CFuncPlatRot>(CFuncPlatRot *) */

CFuncPlatRot * GetClassPtr<CFuncPlatRot>(uint param_1)

{
  edict_t *peVar1;
  CFuncPlatRot *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncPlatRot *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncPlatRot *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,300);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBasePlatTrain_virtual_table;
    pCVar2->vtable = (void **)CFuncPlat_virtual_table;
    pCVar2->vtable = (void **)CFuncPlatRot_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d75bc  GetClassPtr<CFuncTrain>  (170 bytes)
 * CFuncTrain * GetClassPtr<CFuncTrain>(uint param_1)
 */
/* CFuncTrain * GetClassPtr<CFuncTrain>(CFuncTrain *) */

CFuncTrain * GetClassPtr<CFuncTrain>(uint param_1)

{
  edict_t *peVar1;
  CFuncTrain *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncTrain *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncTrain *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x118)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBasePlatTrain_virtual_table;
    pCVar2->vtable = (void **)CFuncTrain_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d7668  GetClassPtr<CFuncTrackTrain>  (134 bytes)
 * CFuncTrackTrain * GetClassPtr<CFuncTrackTrain>(uint param_1)
 */
/* CFuncTrackTrain * GetClassPtr<CFuncTrackTrain>(CFuncTrackTrain *) */

CFuncTrackTrain * GetClassPtr<CFuncTrackTrain>(uint param_1)

{
  edict_t *peVar1;
  CFuncTrackTrain *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncTrackTrain *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncTrackTrain *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xac);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncTrackTrain_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d76f0  GetClassPtr<CFuncTrainControls>  (131 bytes)
 * CFuncTrainControls * GetClassPtr<CFuncTrainControls>(uint param_1)
 */
/* CFuncTrainControls * GetClassPtr<CFuncTrainControls>(CFuncTrainControls *) */

CFuncTrainControls * GetClassPtr<CFuncTrainControls>(uint param_1)

{
  edict_t *peVar1;
  CFuncTrainControls *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncTrainControls *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncTrainControls *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncTrainControls_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d7774  GetClassPtr<CFuncTrackChange>  (188 bytes)
 * CFuncTrackChange * GetClassPtr<CFuncTrackChange>(uint param_1)
 */
/* CFuncTrackChange * GetClassPtr<CFuncTrackChange>(CFuncTrackChange *) */

CFuncTrackChange * GetClassPtr<CFuncTrackChange>(uint param_1)

{
  edict_t *peVar1;
  CFuncTrackChange *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncTrackChange *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncTrackChange *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x150)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBasePlatTrain_virtual_table;
    pCVar2->vtable = (void **)CFuncPlat_virtual_table;
    pCVar2->vtable = (void **)CFuncPlatRot_virtual_table;
    pCVar2->vtable = (void **)CFuncTrackChange_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d7830  GetClassPtr<CFuncTrackAuto>  (197 bytes)
 * CFuncTrackAuto * GetClassPtr<CFuncTrackAuto>(uint param_1)
 */
/* CFuncTrackAuto * GetClassPtr<CFuncTrackAuto>(CFuncTrackAuto *) */

CFuncTrackAuto * GetClassPtr<CFuncTrackAuto>(uint param_1)

{
  edict_t *peVar1;
  CFuncTrackAuto *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncTrackAuto *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncTrackAuto *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x150)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBasePlatTrain_virtual_table;
    pCVar2->vtable = (void **)CFuncPlat_virtual_table;
    pCVar2->vtable = (void **)CFuncPlatRot_virtual_table;
    pCVar2->vtable = (void **)CFuncTrackChange_virtual_table;
    pCVar2->vtable = (void **)CFuncTrackAuto_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d78f8  GetClassPtr<CGunTarget>  (170 bytes)
 * CGunTarget * GetClassPtr<CGunTarget>(uint param_1)
 */
/* CGunTarget * GetClassPtr<CGunTarget>(CGunTarget *) */

CGunTarget * GetClassPtr<CGunTarget>(uint param_1)

{
  edict_t *peVar1;
  CGunTarget *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGunTarget *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGunTarget *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x168)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseMonster_virtual_table;
    pCVar2->vtable = (void **)CGunTarget_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000d79a4  CFuncTrackTrain_type_info_function  (70 bytes)
 * undefined4 * CFuncTrackTrain_type_info_function(void)
 */
/* CFuncTrackTrain type_info function */

undefined4 * CFuncTrackTrain_type_info_function(void)

{
  if (CFuncTrackTrain_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CFuncTrackTrain_type_info_node,"15CFuncTrackTrain",&CBaseEntity_type_info_node);
  }
  return &CFuncTrackTrain_type_info_node;
}

/* 000d7a40  CBasePlatTrain_type_info_function  (70 bytes)
 * undefined4 * CBasePlatTrain_type_info_function(void)
 */
/* CBasePlatTrain type_info function */

undefined4 * CBasePlatTrain_type_info_function(void)

{
  if (CBasePlatTrain_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CBasePlatTrain_type_info_node,"14CBasePlatTrain",&CBaseToggle_type_info_node);
  }
  return &CBasePlatTrain_type_info_node;
}

/* 000d7aa8  CFuncPlat_type_info_function  (70 bytes)
 * undefined4 * CFuncPlat_type_info_function(void)
 */
/* CFuncPlat type_info function */

undefined4 * CFuncPlat_type_info_function(void)

{
  if (CFuncPlat_type_info_node == 0) {
    CBasePlatTrain_type_info_function();
    __rtti_si(&CFuncPlat_type_info_node,"9CFuncPlat",&CBasePlatTrain_type_info_node);
  }
  return &CFuncPlat_type_info_node;
}

/* 000d7b38  CPlatTrigger_type_info_function  (70 bytes)
 * undefined4 * CPlatTrigger_type_info_function(void)
 */
/* CPlatTrigger type_info function */

undefined4 * CPlatTrigger_type_info_function(void)

{
  if (CPlatTrigger_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CPlatTrigger_type_info_node,"12CPlatTrigger",&CBaseEntity_type_info_node);
  }
  return &CPlatTrigger_type_info_node;
}

/* 000d7b88  CFuncPlatRot_type_info_function  (70 bytes)
 * undefined4 * CFuncPlatRot_type_info_function(void)
 */
/* CFuncPlatRot type_info function */

undefined4 * CFuncPlatRot_type_info_function(void)

{
  if (CFuncPlatRot_type_info_node == 0) {
    CFuncPlat_type_info_function();
    __rtti_si(&CFuncPlatRot_type_info_node,"12CFuncPlatRot",&CFuncPlat_type_info_node);
  }
  return &CFuncPlatRot_type_info_node;
}

/* 000d7bd0  CFuncTrain_type_info_function  (70 bytes)
 * undefined4 * CFuncTrain_type_info_function(void)
 */
/* CFuncTrain type_info function */

undefined4 * CFuncTrain_type_info_function(void)

{
  if (CFuncTrain_type_info_node == 0) {
    CBasePlatTrain_type_info_function();
    __rtti_si(&CFuncTrain_type_info_node,"10CFuncTrain",&CBasePlatTrain_type_info_node);
  }
  return &CFuncTrain_type_info_node;
}

/* 000d7c18  CFuncTrainControls_type_info_function  (70 bytes)
 * undefined4 * CFuncTrainControls_type_info_function(void)
 */
/* CFuncTrainControls type_info function */

undefined4 * CFuncTrainControls_type_info_function(void)

{
  if (CFuncTrainControls_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CFuncTrainControls_type_info_node,"18CFuncTrainControls",&CBaseEntity_type_info_node)
    ;
  }
  return &CFuncTrainControls_type_info_node;
}

/* 000d7c68  CFuncTrackChange_type_info_function  (70 bytes)
 * undefined4 * CFuncTrackChange_type_info_function(void)
 */
/* CFuncTrackChange type_info function */

undefined4 * CFuncTrackChange_type_info_function(void)

{
  if (CFuncTrackChange_type_info_node == 0) {
    CFuncPlatRot_type_info_function();
    __rtti_si(&CFuncTrackChange_type_info_node,"16CFuncTrackChange",&CFuncPlatRot_type_info_node);
  }
  return &CFuncTrackChange_type_info_node;
}

/* 000d7ce4  CFuncTrackAuto_type_info_function  (70 bytes)
 * undefined4 * CFuncTrackAuto_type_info_function(void)
 */
/* CFuncTrackAuto type_info function */

undefined4 * CFuncTrackAuto_type_info_function(void)

{
  if (CFuncTrackAuto_type_info_node == 0) {
    CFuncTrackChange_type_info_function();
    __rtti_si(&CFuncTrackAuto_type_info_node,"14CFuncTrackAuto",&CFuncTrackChange_type_info_node);
  }
  return &CFuncTrackAuto_type_info_node;
}

/* 000d7d2c  CGunTarget_type_info_function  (70 bytes)
 * undefined4 * CGunTarget_type_info_function(void)
 */
/* CGunTarget type_info function */

undefined4 * CGunTarget_type_info_function(void)

{
  if (CGunTarget_type_info_node == 0) {
    CBaseMonster_type_info_function();
    __rtti_si(&CGunTarget_type_info_node,"10CGunTarget",&CBaseMonster_type_info_node);
  }
  return &CGunTarget_type_info_node;
}

/* 000d7db0  LinkUserMessages  (1701 bytes)
 * undefined LinkUserMessages(void)
 */
/* LinkUserMessages(void) */

void LinkUserMessages(void)

{
  if (gmsgSelAmmo == 0) {
    gmsgSelAmmo = (*g_engfuncs.pfnRegUserMsg)("SelAmmo",4);
    gmsgCurWeapon = (*g_engfuncs.pfnRegUserMsg)("CurWeapon",3);
    gmsgGeigerRange = (*g_engfuncs.pfnRegUserMsg)("Geiger",1);
    gmsgHealth = (*g_engfuncs.pfnRegUserMsg)("Health",1);
    gmsgDamage = (*g_engfuncs.pfnRegUserMsg)("Damage",0xc);
    gmsgBattery = (*g_engfuncs.pfnRegUserMsg)("Battery",2);
    gmsgTrain = (*g_engfuncs.pfnRegUserMsg)("Train",1);
    gmsgHudText = (*g_engfuncs.pfnRegUserMsg)("HudText",-1);
    gmsgSayText = (*g_engfuncs.pfnRegUserMsg)("SayText",-1);
    gmsgTextMsg = (*g_engfuncs.pfnRegUserMsg)("TextMsg",-1);
    gmsgWeaponList = (*g_engfuncs.pfnRegUserMsg)("WeaponList",-1);
    gmsgResetHUD = (*g_engfuncs.pfnRegUserMsg)("ResetHUD",1);
    gmsgInitHUD = (*g_engfuncs.pfnRegUserMsg)("InitHUD",0);
    gmsgShowGameTitle = (*g_engfuncs.pfnRegUserMsg)("GameTitle",1);
    gmsgDeathMsg = (*g_engfuncs.pfnRegUserMsg)("DeathMsg",-1);
    gmsgScoreInfo = (*g_engfuncs.pfnRegUserMsg)("ScoreInfo",9);
    gmsgTeamInfo = (*g_engfuncs.pfnRegUserMsg)("TeamInfo",-1);
    gmsgTeamScore = (*g_engfuncs.pfnRegUserMsg)("TeamScore",-1);
    gmsgGameMode = (*g_engfuncs.pfnRegUserMsg)("GameMode",1);
    gmsgMOTD = (*g_engfuncs.pfnRegUserMsg)("MOTD",-1);
    gmsgServerName = (*g_engfuncs.pfnRegUserMsg)("ServerName",-1);
    gmsgAmmoPickup = (*g_engfuncs.pfnRegUserMsg)("AmmoPickup",2);
    gmsgWeapPickup = (*g_engfuncs.pfnRegUserMsg)("WeapPickup",1);
    gmsgItemPickup = (*g_engfuncs.pfnRegUserMsg)("ItemPickup",-1);
    gmsgHideWeapon = (*g_engfuncs.pfnRegUserMsg)("HideWeapon",1);
    gmsgSetFOV = (*g_engfuncs.pfnRegUserMsg)("SetFOV",1);
    gmsgShowMenu = (*g_engfuncs.pfnRegUserMsg)("ShowMenu",-1);
    gmsgShake = (*g_engfuncs.pfnRegUserMsg)("ScreenShake",6);
    gmsgFade = (*g_engfuncs.pfnRegUserMsg)("ScreenFade",10);
    gmsgTSFade = (*g_engfuncs.pfnRegUserMsg)("TSFade",-1);
    gmsgAmmoX = (*g_engfuncs.pfnRegUserMsg)("AmmoX",2);
    gmsgTeamNames = (*g_engfuncs.pfnRegUserMsg)("TeamNames",-1);
    gmsgVGUIMenu = (*g_engfuncs.pfnRegUserMsg)("VGUIMenu",1);
    gmsgWeaponInfo = (*g_engfuncs.pfnRegUserMsg)("WeaponInfo",6);
    gmsgClipInfo = (*g_engfuncs.pfnRegUserMsg)("ClipInfo",1);
    gmsgTSWeaponStatus = (*g_engfuncs.pfnRegUserMsg)("WStatus",3);
    gmsgTSActiveItems = (*g_engfuncs.pfnRegUserMsg)("ActItems",2);
    gmsgKFuPower = (*g_engfuncs.pfnRegUserMsg)("KFuPower",1);
    gmsgTSHealth = (*g_engfuncs.pfnRegUserMsg)("TSHealth",1);
    gmsgTSArmor = (*g_engfuncs.pfnRegUserMsg)("TSArmor",1);
    gmsgTSState = (*g_engfuncs.pfnRegUserMsg)("TSState",1);
    gmsgTSCash = (*g_engfuncs.pfnRegUserMsg)("TSCash",2);
    gmsgTSSpace = (*g_engfuncs.pfnRegUserMsg)("TSSpace",1);
    gmsgTSNextStunt = (*g_engfuncs.pfnRegUserMsg)("NextStunt",1);
    gmsgTSPowerUp = (*g_engfuncs.pfnRegUserMsg)("PwUp",3);
    gmsgTSPowerUpTime = (*g_engfuncs.pfnRegUserMsg)("PwUpTime",1);
    gmsgTSRoundTime = (*g_engfuncs.pfnRegUserMsg)("RoundTime",2);
    gmsgTSObjective = (*g_engfuncs.pfnRegUserMsg)("Objective",-1);
    gmsgTSShowObjective = (*g_engfuncs.pfnRegUserMsg)("ShowObj",2);
    gmsgTSWires = (*g_engfuncs.pfnRegUserMsg)("Wires",3);
    gmsgTSServerSetting = (*g_engfuncs.pfnRegUserMsg)("SrvSett",3);
    gmsgTSPlayerAward = (*g_engfuncs.pfnRegUserMsg)("TSPAward",2);
    gmsgTSBulletTime = (*g_engfuncs.pfnRegUserMsg)("TSBTime",1);
    gmsgTSVoiceMessage = (*g_engfuncs.pfnRegUserMsg)("TSHVoice",1);
    gmsgTSHaveFlag = (*g_engfuncs.pfnRegUserMsg)("TSFlag",4);
    gmsgTSCustomWeaponParams = (*g_engfuncs.pfnRegUserMsg)("CustomWP",-1);
    gmsgSpectator = (*g_engfuncs.pfnRegUserMsg)("Spectator",2);
    gmsgTSMotionBlur = (*g_engfuncs.pfnRegUserMsg)("TSMBlur",2);
    gmsgTSMessage = (*g_engfuncs.pfnRegUserMsg)("TSMessage",-1);
    gmsgTSSlowAmt = (*g_engfuncs.pfnRegUserMsg)("TSSlowMo",2);
    gmsgTSTakeDamage = (*g_engfuncs.pfnRegUserMsg)("PTakeDam",0xd);
    gmsgTSCreateDebris = (*g_engfuncs.pfnRegUserMsg)("TSFrags",-1);
    gmsgTSPlayerInfo = (*g_engfuncs.pfnRegUserMsg)("PlInfo",3);
    gmsgTSParticleSystem = (*g_engfuncs.pfnRegUserMsg)("TSPSys",-1);
  }
  return;
}

/* 000d8458  player  (33 bytes)
 * undefined player(uint param_1)
 */
void player(uint param_1)

{
  GetClassPtr<CBasePlayer>(param_1);
  return;
}

/* 000d8518  VecVelocityForDamage  (321 bytes)
 * float * VecVelocityForDamage(float * param_1, float param_2)
 */
/* VecVelocityForDamage(float) */

float * VecVelocityForDamage(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  longdouble lVar7;
  float local_3c [4];
  float local_2c;
  float local_28;
  float local_24;
  
  lVar7 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
  fVar1 = (float)lVar7;
  lVar7 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
  fVar2 = (float)lVar7;
  lVar7 = (longdouble)(*g_engfuncs.pfnRandomFloat)(200.0,300.0);
  local_2c = fVar1;
  local_28 = fVar2;
  local_24 = (float)lVar7;
  if (param_2 <= -50.0) {
    if (param_2 <= -200.0) {
      fVar3 = 10.0;
    }
    else {
      fVar3 = 2.0;
    }
    pfVar6 = &local_2c;
    pfVar5 = local_3c;
    local_3c[0] = fVar3 * fVar1;
    local_3c[1] = fVar3 * fVar2;
    local_3c[2] = fVar3 * local_24;
    iVar4 = 3;
  }
  else {
    local_3c[0] = fVar1 * 0.7;
    local_3c[1] = fVar2 * 0.7;
    local_3c[2] = local_24 * 0.7;
    iVar4 = 3;
    pfVar5 = local_3c;
    pfVar6 = &local_2c;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  *param_1 = local_2c;
  param_1[1] = local_28;
  param_1[2] = local_24;
  return param_1;
}

/* 000d8660  TrainSpeed  (86 bytes)
 * int TrainSpeed(int param_1, int param_2)
 */
/* TrainSpeed(int, int) */

int TrainSpeed(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 5;
  if (((-1 < param_1) && (iVar1 = 1, param_1 != 0)) &&
     (iVar1 = 2, 0.33 <= (double)param_1 / (double)param_2)) {
    iVar1 = 4 - (uint)((double)param_1 / (double)param_2 < 0.66);
  }
  return iVar1;
}

/* 000d9dac  FixPlayerCrouchStuck  (100 bytes)
 * undefined FixPlayerCrouchStuck(int param_1)
 */
/* FixPlayerCrouchStuck(edict_s *) */

void FixPlayerCrouchStuck(int param_1)

{
  int iVar1;
  undefined1 local_5c [4];
  int local_58;
  
  iVar1 = 0;
  while( true ) {
    if (0x11 < iVar1) {
      return;
    }
    UTIL_TraceHull(param_1 + 0x88,param_1 + 0x88,0,3,param_1,local_5c);
    if (local_58 == 0) break;
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) + 1.0;
    iVar1 = iVar1 + 1;
  }
  return;
}

/* 000da88c  IsSpawnPointValid  (123 bytes)
 * undefined4 IsSpawnPointValid(int * param_1, int * param_2)
 */
/* IsSpawnPointValid(CBaseEntity *, CBaseEntity *) */

undefined4 IsSpawnPointValid(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0xda898;
  piVar2 = (int *)0x0;
  iVar1 = (**(code **)(param_2[0x18] + 0x6c))(param_2,param_1);
  if (iVar1 != 0) {
    do {
      uVar3 = 0x43000000;
      iVar1 = *param_2 + 8;
      piVar2 = (int *)UTIL_FindEntityInSphere(piVar2,iVar1,0x43000000);
      if (piVar2 == (int *)0x0) {
        return 1;
      }
      iVar1 = (**(code **)(piVar2[0x18] + 200))(piVar2,iVar1,uVar3,uVar4);
    } while ((iVar1 == 0) || (piVar2 == param_1));
  }
  return 0;
}

/* 000db5f4  FindEntityForward  (395 bytes)
 * undefined4 FindEntityForward(int * param_1)
 */
/* FindEntityForward(CBaseEntity *) */

undefined4 FindEntityForward(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  float local_9c;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [16];
  float local_4c;
  edict_t *local_2c;
  
  UTIL_MakeVectors(*param_1 + 0x74);
  iVar3 = *param_1;
  local_7c = *(float *)(iVar3 + 8) + *(float *)(iVar3 + 0x174);
  local_78 = *(float *)(iVar3 + 0xc) + *(float *)(iVar3 + 0x178);
  local_74 = *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x17c);
  local_8c = gpGlobals->v_forward[0] * 8192.0;
  local_88 = gpGlobals->v_forward[1] * 8192.0;
  local_84 = gpGlobals->v_forward[2] * 8192.0;
  local_6c = local_7c + local_8c;
  local_68 = local_78 + local_88;
  local_64 = local_74 + local_84;
  iVar1 = *param_1;
  local_9c = *(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x174);
  local_98 = *(float *)(iVar1 + 0xc) + *(float *)(iVar1 + 0x178);
  local_94 = *(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x17c);
  UTIL_TraceLine(&local_9c,&local_6c,0,*(undefined4 *)(iVar3 + 0x208),local_5c);
  if (local_4c != 1.0) {
    bVar2 = false;
    if ((local_2c == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(local_2c), iVar3 == 0)) {
      bVar2 = true;
    }
    if (!bVar2) {
      if (local_2c == (edict_t *)0x0) {
        local_2c = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      if (local_2c == (edict_t *)0x0) {
        return 0;
      }
      return local_2c->pvPrivateData;
    }
  }
  return 0;
}

/* 000dda78  monster_hevsuit_dead  (33 bytes)
 * undefined monster_hevsuit_dead(uint param_1)
 */
void monster_hevsuit_dead(uint param_1)

{
  GetClassPtr<CDeadHEV>(param_1);
  return;
}

/* 000ddb8c  player_weaponstrip  (33 bytes)
 * undefined player_weaponstrip(uint param_1)
 */
void player_weaponstrip(uint param_1)

{
  GetClassPtr<CStripWeapons>(param_1);
  return;
}

/* 000ddc48  player_loadsaved  (33 bytes)
 * undefined player_loadsaved(uint param_1)
 */
void player_loadsaved(uint param_1)

{
  GetClassPtr<CRevertSaved>(param_1);
  return;
}

/* 000de150  info_intermission  (33 bytes)
 * undefined info_intermission(uint param_1)
 */
void info_intermission(uint param_1)

{
  GetClassPtr<CInfoIntermission>(param_1);
  return;
}

/* 000de174  GetClassPtr<CSprayCan>  (131 bytes)
 * CSprayCan * GetClassPtr<CSprayCan>(uint param_1)
 */
/* CSprayCan * GetClassPtr<CSprayCan>(CSprayCan *) */

CSprayCan * GetClassPtr<CSprayCan>(uint param_1)

{
  edict_t *peVar1;
  CSprayCan *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CSprayCan *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CSprayCan *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CSprayCan_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000de1f8  GetClassPtr<CBloodSplat>  (131 bytes)
 * CBloodSplat * GetClassPtr<CBloodSplat>(uint param_1)
 */
/* CBloodSplat * GetClassPtr<CBloodSplat>(CBloodSplat *) */

CBloodSplat * GetClassPtr<CBloodSplat>(uint param_1)

{
  edict_t *peVar1;
  CBloodSplat *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBloodSplat *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBloodSplat *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBloodSplat_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000de27c  GetClassPtr<CDeadHEV>  (170 bytes)
 * CDeadHEV * GetClassPtr<CDeadHEV>(uint param_1)
 */
/* CDeadHEV * GetClassPtr<CDeadHEV>(CDeadHEV *) */

CDeadHEV * GetClassPtr<CDeadHEV>(uint param_1)

{
  edict_t *peVar1;
  CDeadHEV *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CDeadHEV *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CDeadHEV *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x168)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseMonster_virtual_table;
    pCVar2->vtable = (void **)CDeadHEV_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000de328  GetClassPtr<CStripWeapons>  (140 bytes)
 * CStripWeapons * GetClassPtr<CStripWeapons>(uint param_1)
 */
/* CStripWeapons * GetClassPtr<CStripWeapons>(CStripWeapons *) */

CStripWeapons * GetClassPtr<CStripWeapons>(uint param_1)

{
  edict_t *peVar1;
  CStripWeapons *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CStripWeapons *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CStripWeapons *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CStripWeapons_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000de3b4  GetClassPtr<CRevertSaved>  (140 bytes)
 * CRevertSaved * GetClassPtr<CRevertSaved>(uint param_1)
 */
/* CRevertSaved * GetClassPtr<CRevertSaved>(CRevertSaved *) */

CRevertSaved * GetClassPtr<CRevertSaved>(uint param_1)

{
  edict_t *peVar1;
  CRevertSaved *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CRevertSaved *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CRevertSaved *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CRevertSaved_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000de440  GetClassPtr<CInfoIntermission>  (140 bytes)
 * CInfoIntermission * GetClassPtr<CInfoIntermission>(uint param_1)
 */
/* CInfoIntermission * GetClassPtr<CInfoIntermission>(CInfoIntermission *) */

CInfoIntermission * GetClassPtr<CInfoIntermission>(uint param_1)

{
  edict_t *peVar1;
  CInfoIntermission *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CInfoIntermission *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CInfoIntermission *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CInfoIntermission_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000de4cc  CSprayCan_type_info_function  (70 bytes)
 * undefined4 * CSprayCan_type_info_function(void)
 */
/* CSprayCan type_info function */

undefined4 * CSprayCan_type_info_function(void)

{
  if (CSprayCan_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CSprayCan_type_info_node,"9CSprayCan",&CBaseEntity_type_info_node);
  }
  return &CSprayCan_type_info_node;
}

/* 000de51c  CBloodSplat_type_info_function  (70 bytes)
 * undefined4 * CBloodSplat_type_info_function(void)
 */
/* CBloodSplat type_info function */

undefined4 * CBloodSplat_type_info_function(void)

{
  if (CBloodSplat_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CBloodSplat_type_info_node,"11CBloodSplat",&CBaseEntity_type_info_node);
  }
  return &CBloodSplat_type_info_node;
}

/* 000de564  CDeadHEV_type_info_function  (70 bytes)
 * undefined4 * CDeadHEV_type_info_function(void)
 */
/* CDeadHEV type_info function */

undefined4 * CDeadHEV_type_info_function(void)

{
  if (CDeadHEV_type_info_node == 0) {
    CBaseMonster_type_info_function();
    __rtti_si(&CDeadHEV_type_info_node,"8CDeadHEV",&CBaseMonster_type_info_node);
  }
  return &CDeadHEV_type_info_node;
}

/* 000de5b4  CStripWeapons_type_info_function  (70 bytes)
 * undefined4 * CStripWeapons_type_info_function(void)
 */
/* CStripWeapons type_info function */

undefined4 * CStripWeapons_type_info_function(void)

{
  if (CStripWeapons_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CStripWeapons_type_info_node,"13CStripWeapons",&CPointEntity_type_info_node);
  }
  return &CStripWeapons_type_info_node;
}

/* 000de5fc  CRevertSaved_type_info_function  (70 bytes)
 * undefined4 * CRevertSaved_type_info_function(void)
 */
/* CRevertSaved type_info function */

undefined4 * CRevertSaved_type_info_function(void)

{
  if (CRevertSaved_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CRevertSaved_type_info_node,"12CRevertSaved",&CPointEntity_type_info_node);
  }
  return &CRevertSaved_type_info_node;
}

/* 000de6b4  CInfoIntermission_type_info_function  (70 bytes)
 * undefined4 * CInfoIntermission_type_info_function(void)
 */
/* CInfoIntermission type_info function */

undefined4 * CInfoIntermission_type_info_function(void)

{
  if (CInfoIntermission_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CInfoIntermission_type_info_node,"17CInfoIntermission",&CPointEntity_type_info_node);
  }
  return &CInfoIntermission_type_info_node;
}

/* 000de96c  CHalfLifeRules_type_info_function  (70 bytes)
 * undefined4 * CHalfLifeRules_type_info_function(void)
 */
/* CHalfLifeRules type_info function */

undefined4 * CHalfLifeRules_type_info_function(void)

{
  if (CHalfLifeRules_type_info_node == 0) {
    CGameRules_type_info_function();
    __rtti_si(&CHalfLifeRules_type_info_node,"14CHalfLifeRules",&CGameRules_type_info_node);
  }
  return &CHalfLifeRules_type_info_node;
}

/* 000de9cc  GetSkillCvar  (131 bytes)
 * longdouble GetSkillCvar(undefined4 param_1)
 */
/* GetSkillCvar(char *) */

longdouble GetSkillCvar(undefined4 param_1)

{
  longdouble extraout_ST0;
  char local_5c [76];
  
  sprintf(local_5c,"%s%d",param_1,gSkillData);
  (*g_engfuncs.pfnCVarGetFloat)(local_5c);
  if (extraout_ST0 <= (longdouble)0.0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"\n\n** GetSkillCVar Got a zero for %s **\n\n",local_5c);
  }
  return (longdouble)(float)extraout_ST0;
}

/* 000dea50  ambient_generic  (33 bytes)
 * undefined ambient_generic(uint param_1)
 */
void ambient_generic(uint param_1)

{
  GetClassPtr<CAmbientGeneric>(param_1);
  return;
}

/* 000dfb70  env_sound  (33 bytes)
 * undefined env_sound(uint param_1)
 */
void env_sound(uint param_1)

{
  GetClassPtr<CEnvSound>(param_1);
  return;
}

/* 000dfcc0  FEnvSoundInRange  (368 bytes)
 * undefined4 FEnvSoundInRange(uint param_1, int param_2, float * param_3)
 */
/* FEnvSoundInRange(entvars_s *, entvars_s *, float *) */

undefined4 FEnvSoundInRange(uint param_1,int param_2,float *param_3)

{
  float fVar1;
  CEnvSound *pCVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_9c [4];
  undefined1 local_8c [8];
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_4c [4];
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  pCVar2 = GetClassPtr<CEnvSound>(param_1);
  local_2c = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x174);
  local_28 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x178);
  local_24 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x17c);
  local_3c = *(float *)(param_2 + 8) + *(float *)(param_2 + 0x174);
  local_38 = *(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x178);
  local_34 = *(float *)(param_2 + 0x10) + *(float *)(param_2 + 0x17c);
  UTIL_TraceLine(&local_2c,&local_3c,1,*(undefined4 *)(param_1 + 0x208),local_8c);
  if (((local_84 == 0) || (local_80 == 0)) && (local_7c == 1.0)) {
    local_9c[0] = local_78 - local_2c;
    local_9c[1] = local_74 - local_28;
    local_9c[2] = local_70 - local_24;
    pfVar4 = local_9c;
    pfVar5 = local_4c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    fVar1 = SQRT(local_4c[2] * local_4c[2] + local_4c[1] * local_4c[1] + local_4c[0] * local_4c[0]);
    if (fVar1 <= *(float *)&pCVar2->field_0x64) {
      if (param_3 != (float *)0x0) {
        *param_3 = fVar1;
      }
      return 1;
    }
  }
  return 0;
}

/* 000e00c8  USENTENCEG_InitLRU  (263 bytes)
 * undefined USENTENCEG_InitLRU(undefined1 * param_1, uint param_2)
 */
/* USENTENCEG_InitLRU(unsigned char *, int) */

void USENTENCEG_InitLRU(undefined1 *param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (fSentencesInit == 0) {
    return;
  }
  if (0x20 < (int)param_2) {
    param_2 = 0x20;
  }
  iVar5 = 0;
  if ((int)param_2 < 1) goto LAB_000e0160;
  uVar2 = param_2 & 3;
  if ((int)param_2 < 1) {
LAB_000e0133:
    param_1[iVar5] = (char)iVar5;
    iVar5 = iVar5 + 1;
    if ((int)param_2 <= iVar5) goto LAB_000e0160;
  }
  else if (uVar2 != 0) {
    if (1 < uVar2) {
      if (2 < uVar2) {
        *param_1 = 0;
      }
      uVar6 = (uint)(2 < uVar2);
      param_1[uVar6] = 2 < uVar2;
      iVar5 = uVar6 + 1;
    }
    goto LAB_000e0133;
  }
  do {
    param_1[iVar5] = (char)iVar5;
    param_1[iVar5 + 1] = (char)(iVar5 + 1);
    param_1[iVar5 + 2] = (char)(iVar5 + 2);
    param_1[iVar5 + 3] = (char)(iVar5 + 3);
    iVar5 = iVar5 + 4;
  } while (iVar5 < (int)param_2);
LAB_000e0160:
  iVar5 = 0;
  if (0 < (int)(param_2 * 4)) {
    do {
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,param_2 - 1);
      iVar4 = (*g_engfuncs.pfnRandomLong)(0,param_2 - 1);
      uVar1 = param_1[iVar3];
      param_1[iVar3] = param_1[iVar4];
      param_1[iVar4] = uVar1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(param_2 * 4));
  }
  return;
}

/* 000e01d0  USENTENCEG_PickSequential  (198 bytes)
 * uint USENTENCEG_PickSequential(int param_1, char * param_2, int param_3, int param_4)
 */
/* USENTENCEG_PickSequential(int, char *, int, int) */

uint USENTENCEG_PickSequential(int param_1,char *param_2,int param_3,int param_4)

{
  byte bVar1;
  char local_1c [12];
  
  if (fSentencesInit != 0) {
    if (param_1 < 0) {
      return 0xffffffff;
    }
    bVar1 = *(byte *)(&DAT_00197a90 + param_1 * 0xd);
    if (bVar1 != 0) {
      if ((int)(uint)bVar1 <= param_3) {
        param_3 = bVar1 - 1;
      }
      param_2[0] = '!';
      param_2[1] = '\0';
      strcat(param_2,(char *)(&rgsentenceg + param_1 * 0xd));
      sprintf(local_1c,"%d",param_3);
      strcat(param_2,local_1c);
      if ((int)(uint)bVar1 <= param_3) {
        if (param_4 != 0) {
          return 0;
        }
        return (uint)bVar1;
      }
      return param_3 + 1;
    }
  }
  return 0xffffffff;
}

/* 000e0298  USENTENCEG_Pick  (278 bytes)
 * uint USENTENCEG_Pick(int param_1, char * param_2)
 */
/* USENTENCEG_Pick(int, char *) */

uint USENTENCEG_Pick(int param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  uint unaff_EBP;
  char local_1c [12];
  
  bVar4 = false;
  if ((fSentencesInit == 0) || (param_1 < 0)) {
    return 0xffffffff;
  }
  bVar2 = *(byte *)(&DAT_00197a90 + param_1 * 0xd);
  pbVar1 = &DAT_00197a94 + param_1 * 0x34;
  do {
    bVar5 = 0;
    if (bVar2 != 0) {
      if (*pbVar1 == 0xff) {
        do {
          bVar5 = bVar5 + 1;
          if (bVar2 <= bVar5) goto LAB_000e0339;
        } while (pbVar1[bVar5] == 0xff);
        bVar3 = pbVar1[bVar5];
        pbVar1[bVar5] = 0xff;
      }
      else {
        bVar3 = *pbVar1;
        *pbVar1 = 0xff;
      }
      unaff_EBP = (uint)bVar3;
      bVar4 = true;
    }
LAB_000e0339:
    if (bVar4) {
      param_2[0] = '!';
      param_2[1] = '\0';
      strcat(param_2,(char *)(&rgsentenceg + param_1 * 0xd));
      sprintf(local_1c,"%d",unaff_EBP & 0xff);
      strcat(param_2,local_1c);
      return unaff_EBP & 0xff;
    }
    USENTENCEG_InitLRU(pbVar1,(uint)bVar2);
  } while( true );
}

/* 000e03b8  SENTENCEG_GetIndex  (126 bytes)
 * int SENTENCEG_GetIndex(char * param_1)
 */
/* SENTENCEG_GetIndex(char const *) */

int SENTENCEG_GetIndex(char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((fSentencesInit != 0) && (param_1 != (char *)0x0)) && (iVar3 = 0, DAT_00197a90 != 0)) {
    iVar4 = 0;
    iVar5 = 0x10;
    do {
      iVar2 = strcmp(param_1,(char *)((int)&rgsentenceg + iVar4));
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar4 = iVar4 + 0x34;
      iVar3 = iVar3 + 1;
      piVar1 = (int *)(&DAT_00197ab4 + iVar5);
      iVar5 = iVar5 + 0x34;
    } while (*piVar1 != 0);
  }
  return -1;
}

/* 000e0438  SENTENCEG_PlayRndI  (111 bytes)
 * uint SENTENCEG_PlayRndI(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6)
 */
/* SENTENCEG_PlayRndI(edict_s *, int, float, float, int, int) */

uint SENTENCEG_PlayRndI(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,int param_6)

{
  uint uVar1;
  char local_4c [64];
  
  if (fSentencesInit == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_4c[0] = '\0';
    uVar1 = USENTENCEG_Pick(param_2,local_4c);
    if (0 < (int)uVar1) {
      EMIT_SOUND_DYN(param_1,2,local_4c,param_3,param_4,param_5,param_6,0.5);
    }
  }
  return uVar1;
}

/* 000e04a8  SENTENCEG_PlayRndSz  (169 bytes)
 * uint SENTENCEG_PlayRndSz(int param_1, char * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6)
 */
/* SENTENCEG_PlayRndSz(edict_s *, char const *, float, float, int, int) */

uint SENTENCEG_PlayRndSz(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  char local_4c [64];
  
  if (fSentencesInit == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_4c[0] = '\0';
    iVar2 = SENTENCEG_GetIndex(param_2);
    if (iVar2 < 0) {
      (*g_engfuncs.pfnAlertMessage)(at_console,"No such sentence group %s\n",param_2);
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = USENTENCEG_Pick(iVar2,local_4c);
      if ((-1 < (int)uVar1) && (local_4c[0] != '\0')) {
        EMIT_SOUND_DYN(param_1,2,local_4c,param_3,param_4,param_5,param_6,0.5);
      }
    }
  }
  return uVar1;
}

/* 000e0554  SENTENCEG_PlaySequentialSz  (138 bytes)
 * uint SENTENCEG_PlaySequentialSz(int param_1, char * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7, int param_8)
 */
/* SENTENCEG_PlaySequentialSz(edict_s *, char const *, float, float, int, int, int, int) */

uint SENTENCEG_PlaySequentialSz
               (int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               int param_6,int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  char local_4c [64];
  
  if (fSentencesInit != 0) {
    local_4c[0] = '\0';
    iVar1 = SENTENCEG_GetIndex(param_2);
    if (-1 < iVar1) {
      uVar2 = USENTENCEG_PickSequential(iVar1,local_4c,param_7,param_8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (local_4c[0] == '\0') {
        return uVar2;
      }
      EMIT_SOUND_DYN(param_1,2,local_4c,param_3,param_4,param_5,param_6,0.5);
      return uVar2;
    }
  }
  return 0xffffffff;
}

/* 000e05e0  SENTENCEG_Stop  (155 bytes)
 * undefined SENTENCEG_Stop(int param_1, int param_2, int param_3)
 */
/* SENTENCEG_Stop(edict_s *, int, int) */

void SENTENCEG_Stop(int param_1,int param_2,int param_3)

{
  char local_54 [8];
  char local_4c [64];
  
  if (((fSentencesInit != 0) && (-1 < param_2)) && (-1 < param_3)) {
    local_4c[0] = '!';
    local_4c[1] = '\0';
    strcat(local_4c,(char *)(&rgsentenceg + param_2 * 0xd));
    sprintf(local_54,"%d",param_3);
    strcat(local_4c,local_54);
    EMIT_SOUND_DYN(param_1,2,local_4c,0,0,0x20,100,0.5);
  }
  return;
}

/* 000e067c  SENTENCEG_Init  (862 bytes)
 * undefined SENTENCEG_Init(void)
 */
/* SENTENCEG_Init(void) */

void SENTENCEG_Init(void)

{
  char cVar1;
  byte_conflict *buffer;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  char *__src;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_284;
  int local_280;
  int local_27c;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  char local_25c [63];
  char cStack_21d;
  undefined4 local_21c;
  
  if (fSentencesInit == 0) {
    memset(gszallsentencenames,0,0x6000);
    gcallsentences = 0;
    puVar9 = &rgsentenceg;
    for (iVar5 = 0xa28; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    puVar9 = &local_21c;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    pcVar3 = local_25c;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    local_26c = -1;
    local_264 = 0;
    buffer = (*g_engfuncs.pfnLoadFileForMe)("sound/sentences.txt",&local_260);
    if (buffer != (byte_conflict *)0x0) {
      local_280 = -0x24;
      local_284 = -0x34;
LAB_000e0924:
      pvVar4 = memfgets((int)buffer,local_260,&local_264,&local_21c,0x1ff);
      if (pvVar4 != (void *)0x0) {
        local_268 = 0;
        cVar1 = (char)local_21c;
        while (cVar1 == ' ') {
          cVar1 = *(char *)((int)&local_21c + local_268 + 1);
          local_268 = local_268 + 1;
        }
        if (((*(char *)((int)&local_21c + local_268) != '\0') &&
            (*(char *)((int)&local_21c + local_268) != '/')) &&
           (iVar5 = local_268,
           (*(byte *)(__ctype_b + 1 + *(char *)((int)&local_21c + local_268) * 2) & 4) != 0)) {
          for (; (*(char *)((int)&local_21c + iVar5) != '\0' &&
                 (*(char *)((int)&local_21c + iVar5) != ' ')); iVar5 = iVar5 + 1) {
          }
          if (*(char *)((int)&local_21c + iVar5) != '\0') {
            if (gcallsentences < 0x601) {
              *(undefined1 *)((int)&local_21c + iVar5) = 0;
              __src = (char *)((int)&local_21c + local_268);
              uVar6 = 0xffffffff;
              pcVar3 = __src;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar1 != '\0');
              if (0xf < ~uVar6 - 1) {
                (*g_engfuncs.pfnAlertMessage)
                          (at_warning,"Sentence %s longer than %d letters\n",__src,0xf);
              }
              iVar2 = gcallsentences * 0x10;
              gcallsentences = gcallsentences + 1;
              strcpy(gszallsentencenames + iVar2,__src);
              if ((iVar5 + -1 <= local_268) ||
                 (iVar2 = iVar5 + -1, (*(byte *)(__ctype_b + 1 + (&cStack_21d)[iVar5] * 2) & 8) == 0
                 )) goto LAB_000e0924;
              do {
                iVar5 = iVar2;
                iVar2 = iVar5 + -1;
                if (iVar2 <= local_268) break;
              } while ((*(byte *)(__ctype_b + 1 + (&cStack_21d)[iVar5] * 2) & 8) != 0);
              if (iVar2 <= local_268) goto LAB_000e0924;
              *(undefined1 *)((int)&local_21c + iVar5) = 0;
              iVar5 = strcmp(local_25c,(char *)((int)&local_21c + local_268));
              if (iVar5 == 0) {
                if (-1 < local_26c) {
                  *(int *)((int)&rgsentenceg + local_280) =
                       *(int *)((int)&rgsentenceg + local_280) + 1;
                }
                goto LAB_000e0924;
              }
              local_26c = local_26c + 1;
              if (local_26c < 200) {
                strcpy(&DAT_00197ab4 + local_284,(char *)((int)&local_21c + local_268));
                *(undefined4 *)(&DAT_00197ab4 + local_280) = 1;
                strcpy(local_25c,(char *)((int)&local_21c + local_268));
                local_284 = local_284 + 0x34;
                local_280 = local_280 + 0x34;
                goto LAB_000e0924;
              }
              pcVar3 = "Too many sentence groups in sentences.txt!\n";
            }
            else {
              pcVar3 = "Too many sentences in sentences.txt!\n";
            }
            (*g_engfuncs.pfnAlertMessage)(at_error,pcVar3);
            goto LAB_000e0951;
          }
        }
        goto LAB_000e0924;
      }
LAB_000e0951:
      (*g_engfuncs.pfnFreeFile)(buffer);
      fSentencesInit = 1;
      puVar9 = &rgsentenceg;
      if (DAT_00197a90 != 0) {
        puVar7 = &DAT_00197a94;
        local_27c = 0;
        puVar8 = puVar9;
        while( true ) {
          USENTENCEG_InitLRU(puVar7,puVar9[4]);
          if (puVar8[0x11] == 0) break;
          USENTENCEG_InitLRU(puVar7 + 0x34,puVar9[0x11]);
          puVar7 = puVar7 + 0x68;
          puVar9 = puVar9 + 0x1a;
          local_27c = local_27c + 2;
          if (puVar8[0x1e] == 0) {
            return;
          }
          puVar8 = puVar8 + 0x1a;
          if (199 < local_27c) {
            return;
          }
        }
      }
    }
  }
  return;
}

/* 000e09e0  SENTENCEG_Lookup  (168 bytes)
 * int SENTENCEG_Lookup(int param_1, char * param_2)
 */
/* SENTENCEG_Lookup(char const *, char *) */

int SENTENCEG_Lookup(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_1c [12];
  
  iVar3 = 0;
  if (0 < gcallsentences) {
    iVar2 = 0;
    do {
      iVar1 = strcasecmp(gszallsentencenames + iVar2,(char *)(param_1 + 1));
      if (iVar1 == 0) {
        if (param_2 == (char *)0x0) {
          return iVar3;
        }
        param_2[0] = '!';
        param_2[1] = '\0';
        sprintf(local_1c,"%d",iVar3);
        strcat(param_2,local_1c);
        return iVar3;
      }
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + 1;
    } while (iVar3 < gcallsentences);
  }
  return -1;
}

/* 000e0a8c  EMIT_SOUND_DYN  (285 bytes)
 * undefined EMIT_SOUND_DYN(int param_1, undefined4 param_2, char * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int param_7, float param_8)
 */
/* EMIT_SOUND_DYN(edict_s *, int, char const *, float, float, int, int, float) */

void EMIT_SOUND_DYN(int param_1,int param_2,char *param_3,float param_4,float param_5,int param_6,
                   int param_7,float param_8)

{
  float fVar1;
  int iVar2;
  char *sample;
  char local_3c [44];
  
  fVar1 = 1.0 - param_8;
  if (*(float *)(param_1 + 0x2d4) != 0.0) {
    param_8 = param_8 * *(float *)(param_1 + 0x2d4);
  }
  sample = param_3;
  if ((param_3 != (char *)0x0) && (*param_3 == '!')) {
    sample = local_3c;
    iVar2 = SENTENCEG_Lookup((int)param_3,sample);
    if (iVar2 < 0) {
      (*g_engfuncs.pfnAlertMessage)(at_aiconsole,"Unable to find %s in sentences.txt\n",param_3);
      return;
    }
  }
  (*g_engfuncs.pfnEmitSound)
            ((edict_t *)param_1,param_2,sample,param_4,param_5,param_6,
             (int)ROUND((param_8 + fVar1) * (float)param_7));
  return;
}

/* 000e0bb0  EMIT_SOUND_SUIT  (147 bytes)
 * undefined EMIT_SOUND_SUIT(int param_1, char * param_2)
 */
/* EMIT_SOUND_SUIT(edict_s *, char const *) */

void EMIT_SOUND_SUIT(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  longdouble lVar3;
  
  iVar2 = 100;
  lVar3 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("suitvolume");
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
  if (iVar1 != 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,6);
    iVar2 = iVar2 + 0x62;
  }
  if (0.05 < (float)lVar3) {
    EMIT_SOUND_DYN(param_1,6,param_2,(float)lVar3,0x3f4ccccd,0,iVar2,0.5);
  }
  return;
}

/* 000e0c44  EMIT_GROUPID_SUIT  (143 bytes)
 * undefined EMIT_GROUPID_SUIT(int param_1, int param_2)
 */
/* EMIT_GROUPID_SUIT(edict_s *, int) */

void EMIT_GROUPID_SUIT(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longdouble lVar3;
  
  iVar2 = 100;
  lVar3 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("suitvolume");
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
  if (iVar1 != 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,6);
    iVar2 = iVar2 + 0x62;
  }
  if (0.05 < (float)lVar3) {
    SENTENCEG_PlayRndI(param_1,param_2,(float)lVar3,0x3f4ccccd,0,iVar2);
  }
  return;
}

/* 000e0cd4  EMIT_GROUPNAME_SUIT  (143 bytes)
 * undefined EMIT_GROUPNAME_SUIT(int param_1, char * param_2)
 */
/* EMIT_GROUPNAME_SUIT(edict_s *, char const *) */

void EMIT_GROUPNAME_SUIT(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  longdouble lVar3;
  
  iVar2 = 100;
  lVar3 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("suitvolume");
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
  if (iVar1 != 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,6);
    iVar2 = iVar2 + 0x62;
  }
  if (0.05 < (float)lVar3) {
    SENTENCEG_PlayRndSz(param_1,param_2,(float)lVar3,0x3f4ccccd,0,iVar2);
  }
  return;
}

/* 000e0d64  memfgets  (173 bytes)
 * void * memfgets(int param_1, int param_2, int * param_3, void * param_4, int param_5)
 * called by: SENTENCEG_Init, TEXTURETYPE_LoadMapMaterials, TEXTURETYPE_LoadStandardMaterials
 */
/* memfgets(unsigned char *, int, int &, char *, int) */

void * memfgets(int param_1,int param_2,int *param_3,void *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  
  if (((param_1 != 0) && (param_4 != (void *)0x0)) && (*param_3 < param_2)) {
    iVar2 = *param_3;
    if (param_5 + -1 < param_2 - iVar2) {
      param_2 = iVar2 + -1 + param_5;
    }
    bVar1 = false;
    if (iVar2 < param_2) {
      do {
        if (*(char *)(iVar2 + param_1) == '\n') {
          bVar1 = true;
        }
        iVar2 = iVar2 + 1;
      } while ((iVar2 < param_2) && (!bVar1));
    }
    if (iVar2 != *param_3) {
      __n = iVar2 - *param_3;
      memcpy(param_4,(void *)(*param_3 + param_1),__n);
      if ((int)__n < param_5) {
        *(undefined1 *)(__n + (int)param_4) = 0;
      }
      *param_3 = iVar2;
      return param_4;
    }
  }
  return (void *)0x0;
}

/* 000e0e14  TEXTURETYPE_LoadStandardMaterials  (500 bytes)
 * undefined4 TEXTURETYPE_LoadStandardMaterials(void)
 */
/* TEXTURETYPE_LoadStandardMaterials(void) */

undefined4 TEXTURETYPE_LoadStandardMaterials(void)

{
  char cVar1;
  byte_conflict *buffer;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int local_224;
  int local_220;
  char local_21c [524];
  
  local_224 = 0;
  pcVar6 = local_21c;
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  buffer = (*g_engfuncs.pfnLoadFileForMe)("sound/materials.txt",&local_220);
  if (buffer == (byte_conflict *)0x0) {
    uVar3 = 0;
  }
  else {
    while ((pvVar2 = memfgets((int)buffer,local_220,&local_224,local_21c,0x1ff),
           pvVar2 != (void *)0x0 && (gcTextures < 0x400))) {
      iVar5 = 0;
      iVar4 = iVar5;
      cVar1 = local_21c[0];
      if (local_21c[0] != '\0') {
        while ((iVar4 = iVar5, (*(byte *)(__ctype_b + 1 + cVar1 * 2) & 0x20) != 0 &&
               (iVar4 = iVar5 + 1, local_21c[iVar5 + 1] != '\0'))) {
          iVar7 = iVar5 + 1;
          iVar5 = iVar4;
          cVar1 = local_21c[iVar7];
        }
      }
      if ((local_21c[iVar4] != '\0') && (local_21c[iVar4] != '/')) {
        cVar1 = local_21c[iVar4];
        iVar5 = (int)cVar1;
        if ((*(byte *)(__ctype_b + 1 + iVar5 * 2) & 4) != 0) {
          if (iVar5 + 0x80U < 0x180) {
            cVar1 = (char)*(undefined4 *)(__ctype_toupper + iVar5 * 4);
          }
          (&grgchTextureType)[gcTextures] = cVar1;
          iVar5 = iVar4 + 1;
          if (local_21c[iVar4 + 1] != '\0') {
            cVar1 = local_21c[iVar4 + 1];
            iVar4 = iVar4 + 1;
            while ((iVar5 = iVar4, (*(byte *)(__ctype_b + 1 + cVar1 * 2) & 0x20) != 0 &&
                   (iVar5 = iVar4 + 1, local_21c[iVar4 + 1] != '\0'))) {
              cVar1 = local_21c[iVar4 + 1];
              iVar4 = iVar5;
            }
          }
          if (local_21c[iVar5] != '\0') {
            cVar1 = local_21c[iVar5];
            iVar4 = iVar5;
            while ((iVar7 = iVar4, (*(byte *)(__ctype_b + 1 + cVar1 * 2) & 0x20) == 0 &&
                   (iVar7 = iVar4 + 1, local_21c[iVar4 + 1] != '\0'))) {
              cVar1 = local_21c[iVar4 + 1];
              iVar4 = iVar7;
            }
            if (local_21c[iVar7] != '\0') {
              iVar4 = iVar5 + 0xf;
              if (iVar7 < iVar5 + 0xf) {
                iVar4 = iVar7;
              }
              local_21c[iVar4] = '\0';
              iVar4 = gcTextures * 0x10;
              gcTextures = gcTextures + 1;
              strcpy(grgszTextureName + iVar4,local_21c + iVar5);
            }
          }
        }
      }
    }
    uVar3 = (*g_engfuncs.pfnFreeFile)(buffer);
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar3;
}

/* 000e1014  TEXTURETYPE_LoadMapMaterials  (556 bytes)
 * undefined4 TEXTURETYPE_LoadMapMaterials(void)
 */
/* TEXTURETYPE_LoadMapMaterials(void) */

undefined4 TEXTURETYPE_LoadMapMaterials(void)

{
  char cVar1;
  byte_conflict *buffer;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int local_294;
  int local_290;
  char local_28c [112];
  char local_21c [524];
  
  local_294 = 0;
  pcVar6 = local_21c;
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  sprintf(local_28c,"sound/%s_materials.txt",gpGlobals->pStringBase + gpGlobals->mapname);
  buffer = (*g_engfuncs.pfnLoadFileForMe)(local_28c,&local_290);
  if (buffer == (byte_conflict *)0x0) {
    uVar3 = 0;
  }
  else {
    while ((pvVar2 = memfgets((int)buffer,local_290,&local_294,local_21c,0x1ff),
           pvVar2 != (void *)0x0 && (gcTextures < 0x400))) {
      iVar7 = 0;
      iVar4 = iVar7;
      cVar1 = local_21c[0];
      if (local_21c[0] != '\0') {
        while ((iVar4 = iVar7, (*(byte *)(__ctype_b + 1 + cVar1 * 2) & 0x20) != 0 &&
               (iVar4 = iVar7 + 1, local_21c[iVar7 + 1] != '\0'))) {
          iVar5 = iVar7 + 1;
          iVar7 = iVar4;
          cVar1 = local_21c[iVar5];
        }
      }
      if ((local_21c[iVar4] != '\0') && (local_21c[iVar4] != '/')) {
        cVar1 = local_21c[iVar4];
        iVar7 = (int)cVar1;
        if ((*(byte *)(__ctype_b + 1 + iVar7 * 2) & 4) != 0) {
          if (iVar7 + 0x80U < 0x180) {
            cVar1 = (char)*(undefined4 *)(__ctype_toupper + iVar7 * 4);
          }
          (&grgchTextureType)[gcTextures] = cVar1;
          iVar7 = iVar4 + 1;
          if (local_21c[iVar4 + 1] != '\0') {
            cVar1 = local_21c[iVar4 + 1];
            iVar4 = iVar4 + 1;
            while ((iVar7 = iVar4, (*(byte *)(__ctype_b + 1 + cVar1 * 2) & 0x20) != 0 &&
                   (iVar7 = iVar4 + 1, local_21c[iVar4 + 1] != '\0'))) {
              cVar1 = local_21c[iVar4 + 1];
              iVar4 = iVar7;
            }
          }
          if (local_21c[iVar7] != '\0') {
            cVar1 = local_21c[iVar7];
            iVar4 = iVar7;
            while ((iVar5 = iVar4, (*(byte *)(__ctype_b + 1 + cVar1 * 2) & 0x20) == 0 &&
                   (iVar5 = iVar4 + 1, local_21c[iVar4 + 1] != '\0'))) {
              cVar1 = local_21c[iVar4 + 1];
              iVar4 = iVar5;
            }
            if (local_21c[iVar5] != '\0') {
              iVar4 = iVar7 + 0xf;
              if (iVar5 < iVar7 + 0xf) {
                iVar4 = iVar5;
              }
              local_21c[iVar4] = '\0';
              iVar4 = gcTextures * 0x10;
              gcTextures = gcTextures + 1;
              strcpy(grgszTextureName + iVar4,local_21c + iVar7);
            }
          }
        }
      }
    }
    uVar3 = (*g_engfuncs.pfnFreeFile)(buffer);
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar3;
}

/* 000e1244  TEXTURETYPE_Init  (128 bytes)
 * undefined TEXTURETYPE_Init(void)
 */
/* TEXTURETYPE_Init(void) */

void TEXTURETYPE_Init(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (fTextureTypeInit == 0) {
    memset(grgszTextureName,0,0x4000);
    memset(&grgchTextureType,0,0x400);
    gcTextures = 0;
    uVar1 = TEXTURETYPE_LoadStandardMaterials();
    uVar2 = TEXTURETYPE_LoadMapMaterials();
    fTextureTypeInit = (uint)((char)uVar1 != '\0' || (char)uVar2 != '\0');
  }
  return;
}

/* 000e12c4  TEXTURETYPE_Find  (106 bytes)
 * undefined4 TEXTURETYPE_Find(char * param_1)
 */
/* TEXTURETYPE_Find(char *) */

undefined4 TEXTURETYPE_Find(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < gcTextures) {
    iVar3 = 0;
    do {
      iVar1 = strncasecmp(param_1,grgszTextureName + iVar3,0xf);
      if (iVar1 == 0) {
        return CONCAT31(0x19e3,(&grgchTextureType)[iVar2]);
      }
      iVar3 = iVar3 + 0x10;
      iVar2 = iVar2 + 1;
    } while (iVar2 < gcTextures);
  }
  return 0x11f843;
}

/* 000e1330  TEXTURETYPE_PlaySound  (1305 bytes)
 * longdouble TEXTURETYPE_PlaySound(int param_1, undefined4 * param_2, undefined4 * param_3, int param_4)
 */
/* TEXTURETYPE_PlaySound(TraceResult *, Vector, Vector, int) */

longdouble TEXTURETYPE_PlaySound(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  edict_t *peVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  longdouble lVar7;
  undefined4 uVar8;
  float local_a0;
  int local_9c;
  float local_98;
  char local_91;
  char *local_8c [4];
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_5c [15];
  undefined1 local_4d;
  
  local_a0 = 0.8;
  peVar1 = *(edict_t **)(param_1 + 0x30);
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  piVar5 = (int *)0x0;
  if (peVar1 != (edict_t *)0x0) {
    piVar5 = peVar1->pvPrivateData;
  }
  local_91 = '\0';
  if (((piVar5 == (int *)0x0) || (iVar2 = (**(code **)(piVar5[0x18] + 0x4c))(piVar5), iVar2 == 0))
     || (iVar2 = (**(code **)(piVar5[0x18] + 0x4c))(piVar5), iVar2 == 1)) {
    local_6c = (float)*param_2;
    local_68 = param_2[1];
    local_64 = param_2[2];
    local_7c = (float)*param_3;
    local_78 = param_3[1];
    local_74 = param_3[2];
    if (piVar5 == (int *)0x0) {
      peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      pcVar3 = (*g_engfuncs.pfnTraceTexture)(peVar1,&local_6c,&local_7c);
    }
    else {
      pcVar3 = (*g_engfuncs.pfnTraceTexture)(*(edict_t **)(*piVar5 + 0x208),&local_6c,&local_7c);
    }
    if (pcVar3 != (char *)0x0) {
      if ((*pcVar3 == '-') || (*pcVar3 == '+')) {
        pcVar3 = pcVar3 + 2;
      }
      if (((*pcVar3 == '{') || (*pcVar3 == '!')) || ((*pcVar3 == '~' || (*pcVar3 == ' ')))) {
        pcVar3 = pcVar3 + 1;
      }
      strcpy(local_5c,pcVar3);
      local_4d = 0;
      uVar8 = TEXTURETYPE_Find(local_5c);
      local_91 = (char)uVar8;
    }
  }
  else {
    local_91 = 'F';
  }
  switch(local_91) {
  default:
    fVar6 = 0.9;
    local_98 = 0.6;
    local_8c[0] = "player/pl_step1.wav";
    local_8c[1] = "player/pl_step2.wav";
    break;
  case 'D':
    fVar6 = 0.9;
    local_98 = 0.1;
    local_8c[0] = "player/pl_dirt1.wav";
    local_8c[1] = "player/pl_dirt2.wav";
    local_8c[2] = "player/pl_dirt3.wav";
    goto LAB_000e16ae;
  case 'F':
    if (param_4 == 5) {
      local_98 = 0.0;
      goto LAB_000e18b6;
    }
    fVar6 = 1.0;
    local_98 = 0.2;
    local_8c[0] = "weapons/bullet_hit1.wav";
    local_8c[1] = "weapons/bullet_hit2.wav";
    local_a0 = fVar6;
    break;
  case 'G':
    fVar6 = 0.9;
    local_98 = 0.5;
    local_8c[0] = "player/pl_grate1.wav";
    local_8c[1] = "player/pl_grate4.wav";
    break;
  case 'M':
    fVar6 = 0.9;
    local_98 = 0.3;
    local_8c[0] = "player/pl_metal1.wav";
    local_8c[1] = "player/pl_metal2.wav";
    break;
  case 'P':
  case 'Y':
    fVar6 = 0.8;
    local_98 = 0.2;
    local_8c[0] = "debris/glass1.wav";
    local_8c[1] = "debris/glass2.wav";
    local_8c[2] = "debris/glass3.wav";
    goto LAB_000e16ae;
  case 'S':
    fVar6 = 0.9;
    local_98 = 0.0;
    local_8c[0] = "player/pl_slosh1.wav";
    local_8c[1] = "player/pl_slosh3.wav";
    local_8c[2] = "player/pl_slosh2.wav";
    local_8c[3] = "player/pl_slosh4.wav";
    goto LAB_000e1644;
  case 'T':
    fVar6 = 0.8;
    local_98 = 0.2;
    local_8c[0] = "player/pl_tile1.wav";
    local_8c[1] = "player/pl_tile3.wav";
    local_8c[2] = "player/pl_tile2.wav";
    local_8c[3] = "player/pl_tile4.wav";
LAB_000e1644:
    local_9c = 4;
    goto LAB_000e1704;
  case 'V':
    fVar6 = 0.5;
    local_98 = 0.3;
    local_8c[0] = "player/pl_duct1.wav";
    local_8c[1] = "player/pl_duct1.wav";
    break;
  case 'W':
    fVar6 = 0.9;
    local_98 = 0.2;
    local_8c[0] = "debris/wood1.wav";
    local_8c[1] = "debris/wood2.wav";
    local_8c[2] = "debris/wood3.wav";
LAB_000e16ae:
    local_9c = 3;
    goto LAB_000e1704;
  }
  local_9c = 2;
LAB_000e1704:
  if ((piVar5 == (int *)0x0) ||
     (iVar2 = strcmp(gpGlobals->pStringBase + *(int *)*piVar5,"func_breakable"), iVar2 != 0)) {
    if ((local_91 == 'P') &&
       ((*(float *)(param_1 + 0x10) != 1.0 && (iVar2 = (*g_engfuncs.pfnRandomLong)(0,1), iVar2 != 0)
        ))) {
      UTIL_Sparks((undefined4 *)(param_1 + 0x14));
      lVar7 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.7,1.0);
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar2 == 0) {
        peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        pcVar3 = "buttons/spark5.wav";
      }
      else {
        if (iVar2 != 1) goto LAB_000e1855;
        peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        pcVar3 = "buttons/spark6.wav";
      }
      UTIL_EmitAmbientSound
                (peVar1,(undefined4 *)(param_1 + 0x14),pcVar3,(float)lVar7,0x3f4ccccd,0,100);
    }
  }
  else {
    fVar6 = fVar6 * 0.6666667;
    local_98 = local_98 * 0.5;
  }
LAB_000e1855:
  peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,0xf);
  iVar2 = iVar2 + 0x60;
  uVar8 = 0;
  iVar4 = (*g_engfuncs.pfnRandomLong)(0,local_9c + -1);
  UTIL_EmitAmbientSound
            (peVar1,(undefined4 *)(param_1 + 0x14),local_8c[iVar4],fVar6,local_a0,uVar8,iVar2);
LAB_000e18b6:
  return (longdouble)local_98;
}

/* 000e18c4  speaker  (33 bytes)
 * undefined speaker(uint param_1)
 */
void speaker(uint param_1)

{
  GetClassPtr<CSpeaker>(param_1);
  return;
}

/* 000e1de8  GetClassPtr<CAmbientGeneric>  (134 bytes)
 * CAmbientGeneric * GetClassPtr<CAmbientGeneric>(uint param_1)
 */
/* CAmbientGeneric * GetClassPtr<CAmbientGeneric>(CAmbientGeneric *) */

CAmbientGeneric * GetClassPtr<CAmbientGeneric>(uint param_1)

{
  edict_t *peVar1;
  CAmbientGeneric *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CAmbientGeneric *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CAmbientGeneric *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xd4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CAmbientGeneric_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000e1e70  GetClassPtr<CEnvSound>  (140 bytes)
 * CEnvSound * GetClassPtr<CEnvSound>(uint param_1)
 */
/* CEnvSound * GetClassPtr<CEnvSound>(CEnvSound *) */

CEnvSound * GetClassPtr<CEnvSound>(uint param_1)

{
  edict_t *peVar1;
  CEnvSound *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CEnvSound *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CEnvSound *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CEnvSound_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000e1efc  GetClassPtr<CSpeaker>  (131 bytes)
 * CSpeaker * GetClassPtr<CSpeaker>(uint param_1)
 */
/* CSpeaker * GetClassPtr<CSpeaker>(CSpeaker *) */

CSpeaker * GetClassPtr<CSpeaker>(uint param_1)

{
  edict_t *peVar1;
  CSpeaker *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CSpeaker *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CSpeaker *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CSpeaker_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000e1f80  CAmbientGeneric_type_info_function  (70 bytes)
 * undefined4 * CAmbientGeneric_type_info_function(void)
 */
/* CAmbientGeneric type_info function */

undefined4 * CAmbientGeneric_type_info_function(void)

{
  if (CAmbientGeneric_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CAmbientGeneric_type_info_node,"15CAmbientGeneric",&CBaseEntity_type_info_node);
  }
  return &CAmbientGeneric_type_info_node;
}

/* 000e1fd0  CEnvSound_type_info_function  (70 bytes)
 * undefined4 * CEnvSound_type_info_function(void)
 */
/* CEnvSound type_info function */

undefined4 * CEnvSound_type_info_function(void)

{
  if (CEnvSound_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CEnvSound_type_info_node,"9CEnvSound",&CPointEntity_type_info_node);
  }
  return &CEnvSound_type_info_node;
}

/* 000e2018  CSpeaker_type_info_function  (70 bytes)
 * undefined4 * CSpeaker_type_info_function(void)
 */
/* CSpeaker type_info function */

undefined4 * CSpeaker_type_info_function(void)

{
  if (CSpeaker_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CSpeaker_type_info_node,"8CSpeaker",&CBaseEntity_type_info_node);
  }
  return &CSpeaker_type_info_node;
}

/* 000e2068  soundent  (33 bytes)
 * undefined soundent(uint param_1)
 */
void soundent(uint param_1)

{
  GetClassPtr<CSoundEnt>(param_1);
  return;
}

/* 000e2724  GetClassPtr<CSoundEnt>  (154 bytes)
 * CSoundEnt * GetClassPtr<CSoundEnt>(uint param_1)
 */
/* CSoundEnt * GetClassPtr<CSoundEnt>(CSoundEnt *) */

CSoundEnt * GetClassPtr<CSoundEnt>(uint param_1)

{
  edict_t *peVar1;
  CSoundEnt *pCVar2;
  int iVar3;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CSoundEnt *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CSoundEnt *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x874)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CSoundEnt_virtual_table;
    iVar3 = 0x3f;
    do {
      iVar3 = iVar3 + -0x10;
    } while (iVar3 != -1);
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000e27c0  CSoundEnt_type_info_function  (70 bytes)
 * undefined4 * CSoundEnt_type_info_function(void)
 */
/* CSoundEnt type_info function */

undefined4 * CSoundEnt_type_info_function(void)

{
  if (CSoundEnt_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CSoundEnt_type_info_node,"9CSoundEnt",&CBaseEntity_type_info_node);
  }
  return &CSoundEnt_type_info_node;
}

/* 000e2a0c  CBaseSpectator_type_info_function  (70 bytes)
 * undefined4 * CBaseSpectator_type_info_function(void)
 */
/* CBaseSpectator type_info function */

undefined4 * CBaseSpectator_type_info_function(void)

{
  if (CBaseSpectator_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CBaseSpectator_type_info_node,"14CBaseSpectator",&CBaseEntity_type_info_node);
  }
  return &CBaseSpectator_type_info_node;
}

/* 000e2a98  info_null  (33 bytes)
 * undefined info_null(uint param_1)
 */
void info_null(uint param_1)

{
  GetClassPtr<CNullEntity>(param_1);
  return;
}

/* 000e2abc  info_player_deathmatch  (33 bytes)
 * undefined info_player_deathmatch(uint param_1)
 */
void info_player_deathmatch(uint param_1)

{
  GetClassPtr<CBaseDMStart>(param_1);
  return;
}

/* 000e2ae0  info_player_team1  (33 bytes)
 * undefined info_player_team1(uint param_1)
 */
void info_player_team1(uint param_1)

{
  GetClassPtr<CBaseDMStart>(param_1);
  return;
}

/* 000e2b04  info_player_team2  (33 bytes)
 * undefined info_player_team2(uint param_1)
 */
void info_player_team2(uint param_1)

{
  GetClassPtr<CBaseDMStart>(param_1);
  return;
}

/* 000e2b28  info_player_team3  (33 bytes)
 * undefined info_player_team3(uint param_1)
 */
void info_player_team3(uint param_1)

{
  GetClassPtr<CBaseDMStart>(param_1);
  return;
}

/* 000e2b4c  info_player_team4  (33 bytes)
 * undefined info_player_team4(uint param_1)
 */
void info_player_team4(uint param_1)

{
  GetClassPtr<CBaseDMStart>(param_1);
  return;
}

/* 000e2b70  info_player_start  (33 bytes)
 * undefined info_player_start(uint param_1)
 */
void info_player_start(uint param_1)

{
  GetClassPtr<CBaseDMStart>(param_1);
  return;
}

/* 000e2b94  info_landmark  (33 bytes)
 * undefined info_landmark(uint param_1)
 */
void info_landmark(uint param_1)

{
  GetClassPtr<CPointEntity>(param_1);
  return;
}

/* 000e2f50  FireTargets  (256 bytes)
 * undefined FireTargets(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 */
/* FireTargets(char const *, CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void FireTargets(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  edict_t *peVar3;
  int *piVar4;
  edict_t *pEdictStartSearchAfter;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  if (param_1 != 0) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,"Firing: (%s)\n",param_1);
LAB_000e2f94:
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)(pEdictStartSearchAfter,"targetname",(char *)param_1);
    bVar1 = false;
    if (pEdictStartSearchAfter == (edict_t *)0x0) {
LAB_000e2fc5:
      bVar1 = true;
    }
    else {
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar2 == 0) goto LAB_000e2fc5;
    }
    if (!bVar1) {
      peVar3 = pEdictStartSearchAfter;
      if (pEdictStartSearchAfter == (edict_t *)0x0) {
        peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      piVar4 = (int *)0x0;
      if (peVar3 != (edict_t *)0x0) {
        piVar4 = peVar3->pvPrivateData;
      }
      if ((piVar4 != (int *)0x0) && ((*(byte *)(*piVar4 + 0x1a7) & 0x40) == 0)) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_aiconsole,"Found: %s, firing (%s)\n",gpGlobals->pStringBase + *(int *)*piVar4,
                   param_1);
        (**(code **)(piVar4[0x18] + 0xe0))(piVar4,param_2,param_3,param_4,param_5);
      }
      goto LAB_000e2f94;
    }
  }
  return;
}

/* 000e3050  DelayedUse  (33 bytes)
 * undefined DelayedUse(uint param_1)
 */
void DelayedUse(uint param_1)

{
  GetClassPtr<CBaseDelay>(param_1);
  return;
}

/* 000e32d8  SetMovedir  (319 bytes)
 * undefined SetMovedir(int param_1)
 */
/* SetMovedir(entvars_s *) */

void SetMovedir(int param_1)

{
  bool bVar1;
  int iVar2;
  vec_t *pvVar3;
  undefined4 *puVar4;
  vec_t *pvVar5;
  undefined4 *puVar6;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar4 = &local_4c;
  local_2c = 0;
  local_28 = 0xbf800000;
  local_24 = 0;
  bVar1 = false;
  if (((*(float *)(param_1 + 0x50) == 0.0) && (*(float *)(param_1 + 0x54) == -1.0)) &&
     (*(float *)(param_1 + 0x58) == 0.0)) {
    bVar1 = true;
  }
  if (bVar1) {
    puVar4 = &local_3c;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0x3f800000;
  }
  else {
    local_3c = 0;
    local_38 = 0xc0000000;
    local_34 = 0;
    bVar1 = false;
    if (((*(float *)(param_1 + 0x50) == 0.0) && (*(float *)(param_1 + 0x54) == -2.0)) &&
       (*(float *)(param_1 + 0x58) == 0.0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      UTIL_MakeVectors(param_1 + 0x50);
      pvVar3 = gpGlobals->v_forward;
      pvVar5 = (vec_t *)(param_1 + 0x44);
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pvVar5 = *pvVar3;
        pvVar3 = pvVar3 + 1;
        pvVar5 = pvVar5 + 1;
      }
      goto LAB_000e3401;
    }
    local_4c = 0;
    local_48 = 0;
    local_44 = 0xbf800000;
  }
  puVar6 = (undefined4 *)(param_1 + 0x44);
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_000e3401:
  puVar4 = &g_vecZero;
  puVar6 = (undefined4 *)(param_1 + 0x50);
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}

/* 000e3ae8  FEntIsVisible  (199 bytes)
 * bool FEntIsVisible(int param_1, int param_2)
 */
/* FEntIsVisible(entvars_s *, entvars_s *) */

bool FEntIsVisible(int param_1,int param_2)

{
  bool bVar1;
  undefined1 auStack_6c [8];
  int local_64;
  int local_60;
  float local_5c;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x174);
  local_18 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x178);
  local_14 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x17c);
  local_2c = *(float *)(param_2 + 8) + *(float *)(param_2 + 0x174);
  local_28 = *(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x178);
  local_24 = *(float *)(param_2 + 0x10) + *(float *)(param_2 + 0x17c);
  UTIL_TraceLine(&local_1c,&local_2c,1,*(undefined4 *)(param_1 + 0x208),auStack_6c);
  if ((local_64 == 0) || (bVar1 = false, local_60 == 0)) {
    bVar1 = local_5c == 1.0;
  }
  return bVar1;
}

/* 000e3bb0  GetClassPtr<CNullEntity>  (131 bytes)
 * CNullEntity * GetClassPtr<CNullEntity>(uint param_1)
 */
/* CNullEntity * GetClassPtr<CNullEntity>(CNullEntity *) */

CNullEntity * GetClassPtr<CNullEntity>(uint param_1)

{
  edict_t *peVar1;
  CNullEntity *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CNullEntity *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CNullEntity *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CNullEntity_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000e3c34  GetClassPtr<CBaseDMStart>  (140 bytes)
 * CBaseDMStart * GetClassPtr<CBaseDMStart>(uint param_1)
 */
/* CBaseDMStart * GetClassPtr<CBaseDMStart>(CBaseDMStart *) */

CBaseDMStart * GetClassPtr<CBaseDMStart>(uint param_1)

{
  edict_t *peVar1;
  CBaseDMStart *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBaseDMStart *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBaseDMStart *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDMStart_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000e3cc0  CPointEntity_type_info_function  (70 bytes)
 * undefined4 * CPointEntity_type_info_function(void)
 */
/* CPointEntity type_info function */

undefined4 * CPointEntity_type_info_function(void)

{
  if (CPointEntity_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CPointEntity_type_info_node,"12CPointEntity",&CBaseEntity_type_info_node);
  }
  return &CPointEntity_type_info_node;
}

/* 000e3d10  CBaseDelay_type_info_function  (70 bytes)
 * undefined4 * CBaseDelay_type_info_function(void)
 */
/* CBaseDelay type_info function */

undefined4 * CBaseDelay_type_info_function(void)

{
  if (CBaseDelay_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CBaseDelay_type_info_node,"10CBaseDelay",&CBaseEntity_type_info_node);
  }
  return &CBaseDelay_type_info_node;
}

/* 000e3d58  CBaseToggle_type_info_function  (70 bytes)
 * undefined4 * CBaseToggle_type_info_function(void)
 */
/* CBaseToggle type_info function */

undefined4 * CBaseToggle_type_info_function(void)

{
  if (CBaseToggle_type_info_node == 0) {
    CBaseAnimating_type_info_function();
    __rtti_si(&CBaseToggle_type_info_node,"11CBaseToggle",&CBaseAnimating_type_info_node);
  }
  return &CBaseToggle_type_info_node;
}

/* 000e3db8  CNullEntity_type_info_function  (70 bytes)
 * undefined4 * CNullEntity_type_info_function(void)
 */
/* CNullEntity type_info function */

undefined4 * CNullEntity_type_info_function(void)

{
  if (CNullEntity_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CNullEntity_type_info_node,"11CNullEntity",&CBaseEntity_type_info_node);
  }
  return &CNullEntity_type_info_node;
}

/* 000e3e00  CBaseDMStart_type_info_function  (70 bytes)
 * undefined4 * CBaseDMStart_type_info_function(void)
 */
/* CBaseDMStart type_info function */

undefined4 * CBaseDMStart_type_info_function(void)

{
  if (CBaseDMStart_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CBaseDMStart_type_info_node,"12CBaseDMStart",&CPointEntity_type_info_node);
  }
  return &CBaseDMStart_type_info_node;
}

/* 000e5a40  CHalfLifeTeamplay_type_info_function  (70 bytes)
 * undefined4 * CHalfLifeTeamplay_type_info_function(void)
 */
/* CHalfLifeTeamplay type_info function */

undefined4 * CHalfLifeTeamplay_type_info_function(void)

{
  if (CHalfLifeTeamplay_type_info_node == 0) {
    CHalfLifeMultiplay_type_info_function();
    __rtti_si(&CHalfLifeTeamplay_type_info_node,"17CHalfLifeTeamplay",
              &CHalfLifeMultiplay_type_info_node);
  }
  return &CHalfLifeTeamplay_type_info_node;
}

/* 000e5a88  func_friction  (33 bytes)
 * undefined func_friction(uint param_1)
 */
void func_friction(uint param_1)

{
  GetClassPtr<CFrictionModifier>(param_1);
  return;
}

/* 000e5c4c  trigger_auto  (33 bytes)
 * undefined trigger_auto(uint param_1)
 */
void trigger_auto(uint param_1)

{
  GetClassPtr<CAutoTrigger>(param_1);
  return;
}

/* 000e5e7c  trigger_relay  (33 bytes)
 * undefined trigger_relay(uint param_1)
 */
void trigger_relay(uint param_1)

{
  GetClassPtr<CTriggerRelay>(param_1);
  return;
}

/* 000e6010  multi_manager  (33 bytes)
 * undefined multi_manager(uint param_1)
 */
void multi_manager(uint param_1)

{
  GetClassPtr<CMultiManager>(param_1);
  return;
}

/* 000e6658  env_render  (33 bytes)
 * undefined env_render(uint param_1)
 */
void env_render(uint param_1)

{
  GetClassPtr<CRenderFxManager>(param_1);
  return;
}

/* 000e67c8  trigger  (33 bytes)
 * undefined trigger(uint param_1)
 */
void trigger(uint param_1)

{
  GetClassPtr<CBaseTrigger>(param_1);
  return;
}

/* 000e69c4  trigger_hurt  (33 bytes)
 * undefined trigger_hurt(uint param_1)
 */
void trigger_hurt(uint param_1)

{
  GetClassPtr<CTriggerHurt>(param_1);
  return;
}

/* 000e69e8  trigger_monsterjump  (33 bytes)
 * undefined trigger_monsterjump(uint param_1)
 */
void trigger_monsterjump(uint param_1)

{
  GetClassPtr<CTriggerMonsterJump>(param_1);
  return;
}

/* 000e6b8c  trigger_cdaudio  (33 bytes)
 * undefined trigger_cdaudio(uint param_1)
 */
void trigger_cdaudio(uint param_1)

{
  GetClassPtr<CTriggerCDAudio>(param_1);
  return;
}

/* 000e6c34  PlayCDTrack  (156 bytes)
 * undefined PlayCDTrack(int param_1)
 */
/* PlayCDTrack(int) */

void PlayCDTrack(int param_1)

{
  edict_t *pEdict;
  char local_5c [76];
  
  pEdict = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  if (pEdict != (edict_t *)0x0) {
    if (param_1 + 1U < 0x20) {
      if (param_1 == -1) {
        (*g_engfuncs.pfnClientCommand)(pEdict,"cd pause\n");
      }
      else {
        sprintf(local_5c,"cd play %3d\n",param_1);
        (*g_engfuncs.pfnClientCommand)(pEdict,local_5c);
      }
    }
    else {
      (*g_engfuncs.pfnAlertMessage)(at_console,"TriggerCDAudio - Track %d out of range\n");
    }
  }
  return;
}

/* 000e6d3c  target_cdaudio  (33 bytes)
 * undefined target_cdaudio(uint param_1)
 */
void target_cdaudio(uint param_1)

{
  GetClassPtr<CTargetCDAudio>(param_1);
  return;
}

/* 000e763c  trigger_multiple  (33 bytes)
 * undefined trigger_multiple(uint param_1)
 */
void trigger_multiple(uint param_1)

{
  GetClassPtr<CTriggerMultiple>(param_1);
  return;
}

/* 000e76b8  trigger_once  (33 bytes)
 * undefined trigger_once(uint param_1)
 */
void trigger_once(uint param_1)

{
  GetClassPtr<CTriggerOnce>(param_1);
  return;
}

/* 000e7b30  trigger_counter  (33 bytes)
 * undefined trigger_counter(uint param_1)
 */
void trigger_counter(uint param_1)

{
  GetClassPtr<CTriggerCounter>(param_1);
  return;
}

/* 000e7b9c  trigger_transition  (33 bytes)
 * undefined trigger_transition(uint param_1)
 */
void trigger_transition(uint param_1)

{
  GetClassPtr<CTriggerVolume>(param_1);
  return;
}

/* 000e7c34  fireanddie  (33 bytes)
 * undefined fireanddie(uint param_1)
 */
void fireanddie(uint param_1)

{
  GetClassPtr<CFireAndDie>(param_1);
  return;
}

/* 000e7cdc  trigger_changelevel  (33 bytes)
 * undefined trigger_changelevel(uint param_1)
 */
void trigger_changelevel(uint param_1)

{
  GetClassPtr<CChangeLevel>(param_1);
  return;
}

/* 000e8634  BuildChangeList  (37 bytes)
 * undefined BuildChangeList(char * param_1, int param_2)
 */
/* BuildChangeList(LEVELLIST *, int) */

void BuildChangeList(char *param_1,int param_2)

{
  CChangeLevel::ChangeList(param_1,param_2);
  return;
}

/* 000e8ca4  NextLevel  (300 bytes)
 * undefined NextLevel(void)
 */
/* NextLevel(void) */

void NextLevel(void)

{
  bool bVar1;
  edict_t *pEdict;
  int iVar2;
  CChangeLevel *pCVar3;
  
  pEdict = (*g_engfuncs.pfnFindEntityByString)((edict_t *)0x0,"classname","trigger_changelevel");
  bVar1 = false;
  if (pEdict != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar2 != 0) goto LAB_000e8cf7;
  }
  bVar1 = true;
LAB_000e8cf7:
  if (bVar1) {
    iVar2 = (*g_engfuncs.pfnAllocString)("start");
    gpGlobals->mapname = iVar2;
    pCVar3 = GetClassPtr<CChangeLevel>(0);
    pCVar3->field_0x104 = 's';
    pCVar3->field_0x105 = 't';
    pCVar3->field_0x106 = 'a';
    pCVar3->field_0x107 = 'r';
    pCVar3->field_0x108 = 't';
    pCVar3->field_0x109 = '\0';
  }
  else {
    pCVar3 = GetClassPtr<CChangeLevel>((uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1);
  }
  strcpy(st_szNextMap,&pCVar3->field_0x104);
  g_fGameOver = 1;
  if (pCVar3->pev->nextthink < gpGlobals->time) {
    *(undefined4 *)&pCVar3->field_0xc = 0xffff0000;
    *(code **)&pCVar3->field_0x10 = CChangeLevel::ExecuteChangeLevel;
    pCVar3->pev->nextthink = gpGlobals->time + 0.1;
  }
  return;
}

/* 000e8dd4  func_ladder  (33 bytes)
 * undefined func_ladder(uint param_1)
 */
void func_ladder(uint param_1)

{
  GetClassPtr<CLadder>(param_1);
  return;
}

/* 000e8efc  trigger_push  (33 bytes)
 * undefined trigger_push(uint param_1)
 */
void trigger_push(uint param_1)

{
  GetClassPtr<CTriggerPush>(param_1);
  return;
}

/* 000e93b4  trigger_teleport  (33 bytes)
 * undefined trigger_teleport(uint param_1)
 */
void trigger_teleport(uint param_1)

{
  GetClassPtr<CTriggerTeleport>(param_1);
  return;
}

