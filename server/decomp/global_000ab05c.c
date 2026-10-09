/* ts_i386.so - global_000ab05c (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000ab05c  FindGlobalEntity  (201 bytes)
 * undefined4 * FindGlobalEntity(int param_1, int param_2)
 */
/* FindGlobalEntity(int, int) */

undefined4 * FindGlobalEntity(int param_1,int param_2)

{
  globalvars_t *pgVar1;
  edict_t *peVar2;
  int iVar3;
  undefined4 *puVar4;
  
  peVar2 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,"globalname",gpGlobals->pStringBase + param_2);
  if (peVar2 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pgVar1 = gpGlobals;
  puVar4 = (undefined4 *)0x0;
  if (peVar2 != (edict_t *)0x0) {
    puVar4 = peVar2->pvPrivateData;
  }
  if (puVar4 != (undefined4 *)0x0) {
    iVar3 = strcmp(gpGlobals->pStringBase + *(int *)*puVar4,gpGlobals->pStringBase + param_1);
    if (iVar3 != 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,"Global entity found %s, wrong class %s\n",pgVar1->pStringBase + param_2
                 ,pgVar1->pStringBase + *(int *)*puVar4);
      puVar4 = (undefined4 *)0x0;
    }
  }
  return puVar4;
}

/* 000ab128  DispatchRestore  (1008 bytes)
 * int DispatchRestore(edict_t * pent, SAVERESTOREDATA * pSaveData, int globalEntity)
 */
/* DispatchRestore(edict_s *, saverestore_s *, int) */

int DispatchRestore(edict_t *pent,SAVERESTOREDATA *pSaveData,int globalEntity)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  CBaseEntity *this;
  float *pfVar4;
  vec_t *pvVar5;
  vec_t *pvVar6;
  float local_30c [4];
  CSaveRestoreBuffer local_2fc [4];
  undefined4 local_2f8;
  undefined4 local_2f4;
  CSaveRestoreBuffer local_2ec [4];
  undefined4 local_2e8;
  undefined4 local_2e4;
  vec_t local_2dc [4];
  int local_2cc;
  int local_2c8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  
  piVar1 = (int *)0x0;
  if (pent != (edict_t *)0x0) {
    piVar1 = pent->pvPrivateData;
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (pSaveData == (SAVERESTOREDATA *)0x0) {
    return 0;
  }
  CSaveRestoreBuffer::CSaveRestoreBuffer(local_2ec,pSaveData);
  local_2e8 = 0;
  local_2e4 = 1;
  if (globalEntity != 0) {
    CSaveRestoreBuffer::CSaveRestoreBuffer(local_2fc,pSaveData);
    local_2f8 = 0;
    local_2f4 = 0;
    CRestore::ReadEntVars((CRestore *)local_2fc,"ENTVARS",(int)&local_2cc);
    iVar2 = pSaveData->pTable[pSaveData->currentIndex].location;
    pSaveData->size = iVar2;
    pSaveData->pCurrentData = pSaveData->pBaseData + iVar2;
    iVar2 = CGlobalState::EntityFromTable((CGlobalState *)&gGlobalState,local_2c8);
    iVar2 = strcmp(pSaveData->szCurrentMapName,(char *)(iVar2 + 0x40));
    if (iVar2 != 0) {
      CSaveRestoreBuffer::~CSaveRestoreBuffer(local_2fc,0);
      CSaveRestoreBuffer::~CSaveRestoreBuffer(local_2ec,0);
      return 0;
    }
    pvVar5 = pSaveData->vecLandmarkOffset;
    pvVar6 = local_2dc;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar6 = *pvVar5;
      pvVar5 = pvVar5 + 1;
      pvVar6 = pvVar6 + 1;
    }
    piVar1 = FindGlobalEntity(local_2cc,local_2c8);
    if (piVar1 == (int *)0x0) {
      CSaveRestoreBuffer::~CSaveRestoreBuffer(local_2fc,0);
      CSaveRestoreBuffer::~CSaveRestoreBuffer(local_2ec,0);
      return 0;
    }
    local_2e8 = 1;
    iVar2 = *piVar1;
    local_30c[0] = (pSaveData->vecLandmarkOffset[0] - *(float *)(iVar2 + 0xdc)) + local_1f0;
    local_30c[1] = (pSaveData->vecLandmarkOffset[1] - *(float *)(iVar2 + 0xe0)) + local_1ec;
    local_30c[2] = (pSaveData->vecLandmarkOffset[2] - *(float *)(iVar2 + 0xe4)) + local_1e8;
    pfVar4 = local_30c;
    pvVar5 = pSaveData->vecLandmarkOffset;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pvVar5 = pvVar5 + 1;
    }
    pent = *(edict_t **)(*piVar1 + 0x208);
    CGlobalState::EntityUpdate
              ((CGlobalState *)&gGlobalState,*(int *)(*piVar1 + 4),gpGlobals->mapname);
    CSaveRestoreBuffer::~CSaveRestoreBuffer(local_2fc,0);
  }
  uVar3 = (**(code **)(piVar1[0x18] + 0x38))(piVar1);
  if ((uVar3 & 4) == 0) {
    (**(code **)(piVar1[0x18] + 0x34))(piVar1,local_2ec);
    (**(code **)(piVar1[0x18] + 0x28))(piVar1);
  }
  else {
    (**(code **)(piVar1[0x18] + 0x34))(piVar1,local_2ec);
    (**(code **)(piVar1[0x18] + 0x24))(piVar1);
  }
  this = (CBaseEntity *)0x0;
  if (pent != (edict_t *)0x0) {
    this = pent->pvPrivateData;
  }
  if (globalEntity == 0) {
    if ((this != (CBaseEntity *)0x0) && (this->pev->globalname != 0)) {
      iVar2 = CGlobalState::EntityFromTable((CGlobalState *)&gGlobalState,this->pev->globalname);
      if (iVar2 == 0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_error,"Global Entity %s (%s) not in table!!!\n",
                   gpGlobals->pStringBase + this->pev->globalname,
                   gpGlobals->pStringBase + this->pev->classname);
        CGlobalState::EntityAdd
                  ((CGlobalState *)&gGlobalState,this->pev->globalname,gpGlobals->mapname,1);
      }
      else {
        if (*(int *)(iVar2 + 0x60) == 2) {
          CSaveRestoreBuffer::~CSaveRestoreBuffer(local_2ec,0);
          return -1;
        }
        iVar2 = strcmp(gpGlobals->pStringBase + gpGlobals->mapname,(char *)(iVar2 + 0x40));
        if (iVar2 != 0) {
          CBaseEntity::MakeDormant(this);
        }
      }
    }
  }
  else {
    pvVar5 = local_2dc;
    pvVar6 = pSaveData->vecLandmarkOffset;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar6 = *pvVar5;
      pvVar5 = pvVar5 + 1;
      pvVar6 = pvVar6 + 1;
    }
    if (this != (CBaseEntity *)0x0) {
      UTIL_SetOrigin((int)this->pev,this->pev->origin);
      (*this->vtable[0x26])(this);
    }
  }
  CSaveRestoreBuffer::~CSaveRestoreBuffer(local_2ec,0);
  return 0;
}

/* 000ab61c  DispatchObjectCollsionBox  (54 bytes)
 * void DispatchObjectCollsionBox(edict_t * pent)
 */
/* DispatchObjectCollsionBox(edict_s *) */

void DispatchObjectCollsionBox(edict_t *pent)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (pent != (edict_t *)0x0) {
    pvVar1 = pent->pvPrivateData;
  }
  if (pvVar1 == (void *)0x0) {
    SetObjectCollisionBox((int)&pent->v);
  }
  else {
    (**(code **)(*(int *)((int)pvVar1 + 0x60) + 0x48))(pvVar1);
  }
  return;
}

/* 000ab654  SaveWriteFields  (81 bytes)
 * void SaveWriteFields(SAVERESTOREDATA * param_1, char * param_2, void * param_3, TYPEDESCRIPTION * param_4, int param_5)
 */
/* SaveWriteFields(saverestore_s *, char const *, void *, TYPEDESCRIPTION *, int) */

void SaveWriteFields(SAVERESTOREDATA *param_1,char *param_2,void *param_3,TYPEDESCRIPTION *param_4,
                    int param_5)

{
  CSaveRestoreBuffer local_14 [4];
  
  CSaveRestoreBuffer::CSaveRestoreBuffer(local_14,param_1);
  CSave::WriteFields((CSave *)local_14,param_2,(int)param_3,(int *)param_4,param_5);
  CSaveRestoreBuffer::~CSaveRestoreBuffer(local_14,0);
  return;
}

/* 000ab6e8  SaveReadFields  (96 bytes)
 * void SaveReadFields(SAVERESTOREDATA * param_1, char * param_2, void * param_3, TYPEDESCRIPTION * param_4, int param_5)
 */
/* SaveReadFields(saverestore_s *, char const *, void *, TYPEDESCRIPTION *, int) */

void SaveReadFields(SAVERESTOREDATA *param_1,char *param_2,void *param_3,TYPEDESCRIPTION *param_4,
                   int param_5)

{
  CSaveRestoreBuffer aCStack_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  
  CSaveRestoreBuffer::CSaveRestoreBuffer(aCStack_2c,param_1);
  local_28 = 0;
  local_24 = 1;
  CRestore::ReadFields((CRestore *)aCStack_2c,param_2,(int)param_3,(int)param_4,param_5);
  CSaveRestoreBuffer::~CSaveRestoreBuffer(aCStack_2c,0);
  return;
}

/* 000ab788  OnFreeEntPrivateData  (40 bytes)
 * undefined OnFreeEntPrivateData(int param_1)
 */
/* OnFreeEntPrivateData(edict_s *) */

void OnFreeEntPrivateData(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x60) + 0x40))(iVar1);
  }
  return;
}

/* 000ab7b0  GameShutdown  (1 bytes)
 * undefined GameShutdown(void)
 */
/* GameShutdown(void) */

void GameShutdown(void)

{
  return;
}

/* 000ab7b4  ShouldCollide  (79 bytes)
 * undefined4 ShouldCollide(int param_1, int param_2)
 */
/* ShouldCollide(edict_s *, edict_s *) */

undefined4 ShouldCollide(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x7c);
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x7c);
  }
  if ((piVar1 == (int *)0x0) || ((*(byte *)(*piVar1 + 0x1a7) & 0x40) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(piVar1[0x18] + 0x44))(piVar1,uVar2);
  }
  return uVar2;
}

/* 000ab848  *  (50 bytes)
 * undefined4 *(EHANDLE * param_1)
 */
/* EHANDLE::operator CBaseEntity *(void) */

undefined4 _(EHANDLE *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = EHANDLE::Get(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(undefined4 *)(uVar1 + 0x7c);
  }
  return uVar2;
}

/* 000ab8b0  int  (45 bytes)
 * bool int(EHANDLE * param_1)
 */
/* EHANDLE::operator int(void) */

bool int(EHANDLE *param_1)

{
  uint uVar1;
  
  uVar1 = EHANDLE::Get(param_1);
  return uVar1 != 0;
}

/* 000abf9c  SetObjectCollisionBox  (559 bytes)
 * undefined SetObjectCollisionBox(int param_1)
 * called by: CBaseEntity::SetObjectCollisionBox, DispatchObjectCollsionBox
 */
/* SetObjectCollisionBox(entvars_s *) */

void SetObjectCollisionBox(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_3c [11];
  
  if ((*(int *)(param_1 + 0x10c) == 4) &&
     (((*(float *)(param_1 + 0x50) != 0.0 || (*(float *)(param_1 + 0x54) != 0.0)) ||
      (*(float *)(param_1 + 0x58) != 0.0)))) {
    fVar1 = 0.0;
    if (0.0 < ABS(*(float *)(param_1 + 0xdc))) {
      fVar1 = ABS(*(float *)(param_1 + 0xdc));
    }
    if (fVar1 < ABS(*(float *)(param_1 + 0xe8))) {
      fVar1 = ABS(*(float *)(param_1 + 0xe8));
    }
    if (fVar1 < ABS(*(float *)(param_1 + 0xe0))) {
      fVar1 = ABS(*(float *)(param_1 + 0xe0));
    }
    if (fVar1 < ABS(*(float *)(param_1 + 0xec))) {
      fVar1 = ABS(*(float *)(param_1 + 0xec));
    }
    if (fVar1 < ABS(*(float *)(param_1 + 0xe4))) {
      fVar1 = ABS(*(float *)(param_1 + 0xe4));
    }
    if (fVar1 < ABS(*(float *)(param_1 + 0xf0))) {
      fVar1 = ABS(*(float *)(param_1 + 0xf0));
    }
    iVar3 = 0;
    do {
      *(float *)(param_1 + 0xc4 + iVar3 * 4) = *(float *)(param_1 + 8 + iVar3 * 4) - fVar1;
      *(float *)(param_1 + 0xd0 + iVar3 * 4) = fVar1 + *(float *)(param_1 + 8 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  else {
    puVar2 = local_3c;
    puVar4 = (undefined4 *)(param_1 + 0xc4);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar2 = local_3c;
    puVar4 = (undefined4 *)(param_1 + 0xd0);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - 1.0;
  *(float *)(param_1 + 200) = *(float *)(param_1 + 200) - 1.0;
  *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) - 1.0;
  *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xd0) + 1.0;
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xd4) + 1.0;
  *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) + 1.0;
  return;
}

/* 000ac570  CBaseEntity_type_info_function  (57 bytes)
 * undefined4 * CBaseEntity_type_info_function(void)
 */
/* CBaseEntity type_info function */

undefined4 * CBaseEntity_type_info_function(void)

{
  if (CBaseEntity_type_info_node == 0) {
    __rtti_user(&CBaseEntity_type_info_node,"11CBaseEntity");
  }
  return &CBaseEntity_type_info_node;
}

/* 000acc78  set_suicide_frame  (110 bytes)
 * undefined set_suicide_frame(int param_1)
 */
/* set_suicide_frame(entvars_s *) */

void set_suicide_frame(int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(gpGlobals->pStringBase + *(int *)(param_1 + 0xb8),"models/player.mdl");
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x108) = 6;
    *(undefined4 *)(param_1 + 0x170) = 2;
    *(undefined4 *)(param_1 + 0x104) = 0xbf800000;
  }
  return;
}

/* 000acce8  ClientConnect  (99 bytes)
 * qboolean ClientConnect(edict_t * pEntity, char * pszName, char * pszAddress, char[128] szRejectReason)
 */
/* ClientConnect(edict_s *, char const *, char const *, char *) */

qboolean ClientConnect(edict_t *pEntity,char *pszName,char *pszAddress,char szRejectReason [128])

{
  qboolean qVar1;
  CTSPlayerAmount *this;
  
  this = (CTSPlayerAmount *)0x0;
  while( true ) {
    this = (CTSPlayerAmount *)UTIL_FindEntityByClassname((int *)this,"ts_playeramount");
    if (this == (CTSPlayerAmount *)0x0) break;
    CTSPlayerAmount::ClientConnect(this);
  }
  qVar1 = (**(code **)(*g_pGameRules + 0x30))
                    (g_pGameRules,pEntity,pszName,pszAddress,szRejectReason._0_4_);
  return qVar1;
}

/* 000acd4c  ClientDisconnect  (265 bytes)
 * void ClientDisconnect(edict_t * pEntity)
 */
/* ClientDisconnect(edict_s *) */

void ClientDisconnect(edict_t *pEntity)

{
  int iValue;
  CTSPlayerAmount *this;
  char local_11c [268];
  
  this = (CTSPlayerAmount *)0x0;
  while( true ) {
    this = (CTSPlayerAmount *)UTIL_FindEntityByClassname((int *)this,"ts_playeramount");
    if (this == (CTSPlayerAmount *)0x0) break;
    CTSPlayerAmount::ClientDisconnect(this);
  }
  if (g_fGameOver == 0) {
    sprintf(local_11c,"- %s has left the game\n",gpGlobals->pStringBase + (pEntity->v).netname);
    (*g_engfuncs.pfnMessageBegin)(2,gmsgSayText,(float *)0x0,(edict_t *)0x0);
    iValue = (*g_engfuncs.pfnIndexOfEdict)(pEntity);
    (*g_engfuncs.pfnWriteByte)(iValue);
    (*g_engfuncs.pfnWriteString)(local_11c);
    (*g_engfuncs.pfnMessageEnd)();
    (pEntity->v).takedamage = 0.0;
    (pEntity->v).solid = 0;
    UTIL_SetOrigin((int)&pEntity->v,(pEntity->v).origin);
    (**(code **)(*g_pGameRules + 0x38))(g_pGameRules,pEntity);
  }
  return;
}

/* 000ace58  respawn  (107 bytes)
 * undefined respawn(uint param_1)
 */
/* respawn(entvars_s *, int) */

void respawn(uint param_1)

{
  CBasePlayer *pCVar1;
  
  if ((gpGlobals->coop == 0.0) && (gpGlobals->deathmatch == 0.0)) {
    (*g_engfuncs.pfnServerCommand)("reload\n");
  }
  else {
    pCVar1 = GetClassPtr<CBasePlayer>(param_1);
    (*pCVar1->vtable[9])(pCVar1);
  }
  return;
}

/* 000acec8  ClientKill  (122 bytes)
 * void ClientKill(edict_t * pEntity)
 */
/* ClientKill(edict_s *) */

void ClientKill(edict_t *pEntity)

{
  edict_t *peVar1;
  int *piVar2;
  
  peVar1 = (pEntity->v).pContainingEntity;
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  piVar2 = (int *)0x0;
  if (peVar1 != (edict_t *)0x0) {
    piVar2 = peVar1->pvPrivateData;
  }
  if ((*(int *)(*piVar2 + 0x244) == 0) && ((float)piVar2[0x213] <= 0.001)) {
    piVar2[0x213] = (int)(gpGlobals->time + 1.0);
  }
  return;
}

/* 000acf44  ClientPutInServer  (112 bytes)
 * void ClientPutInServer(edict_t * pEntity)
 */
/* ClientPutInServer(edict_s *) */

void ClientPutInServer(edict_t *pEntity)

{
  int *piVar1;
  CBasePlayer *this;
  int local_c;
  
  this = GetClassPtr<CBasePlayer>((uint)&pEntity->v);
  CBasePlayer::SetCustomDecalFrames(this,0xffffffff);
  sscanf((char *)initial_cash._4_4_,"%i",&local_c);
  CBasePlayer::GiveCash(this,local_c);
  (*this->vtable[9])(this);
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x20;
  return;
}

/* 000acfb4  strlwr  (119 bytes)
 * char * strlwr(char * param_1)
 */
/* strlwr(char *) */

char * strlwr(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar2 = -1;
  pcVar5 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = 0;
  if (iVar2 != -2) {
    do {
      cVar1 = param_1[uVar4];
      if ((int)cVar1 + 0x80U < 0x180) {
        cVar1 = (char)*(undefined4 *)(__ctype_tolower + cVar1 * 4);
      }
      param_1[uVar4] = cVar1;
      uVar4 = uVar4 + 1;
      uVar3 = 0xffffffff;
      pcVar5 = param_1;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    } while (uVar4 < ~uVar3 - 1);
  }
  return param_1;
}

/* 000ad02c  Host_Say  (2039 bytes)
 * undefined Host_Say(int param_1, int param_2)
 */
/* Host_Say(edict_s *, int) */

void Host_Say(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  CBasePlayer *pCVar5;
  char *pcVar6;
  CBasePlayer *pCVar7;
  int iVar8;
  undefined1 *puVar9;
  edict_t *peVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  void *pvVar16;
  char *pcVar17;
  int *piVar18;
  undefined2 in_FPUControlWord;
  longdouble extraout_ST0;
  int iVar19;
  int iVar20;
  int iVar21;
  char local_2cc [264];
  int local_1c4;
  undefined4 local_1c0;
  char local_1bc [32];
  char local_19c [256];
  char local_9c [140];
  
  pcVar3 = (*g_engfuncs.pfnCmd_Argv)(0);
  iVar4 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar4 == 0) {
    return;
  }
  pCVar5 = GetClassPtr<CBasePlayer>(param_1 + 0x80);
  if (gpGlobals->time < *(float *)&pCVar5->field_0x7c0) {
    return;
  }
  iVar4 = strcasecmp(pcVar3,"say");
  if ((iVar4 == 0) || (iVar4 = strcasecmp(pcVar3,"say_team"), iVar4 == 0)) {
    iVar4 = (*g_engfuncs.pfnCmd_Argc)();
    if (iVar4 < 2) {
      return;
    }
    pcVar3 = (*g_engfuncs.pfnCmd_Args)();
  }
  else {
    iVar4 = (*g_engfuncs.pfnCmd_Argc)();
    if (iVar4 < 2) {
      pcVar17 = "%s";
    }
    else {
      (*g_engfuncs.pfnCmd_Args)();
      pcVar17 = "%s %s";
    }
    sprintf(local_19c,pcVar17,pcVar3);
    pcVar3 = local_19c;
  }
  pcVar17 = pcVar3;
  if (*pcVar3 == '\"') {
    pcVar17 = pcVar3 + 1;
    uVar14 = 0xffffffff;
    pcVar6 = pcVar17;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar3[~uVar14 - 1] = '\0';
  }
  pcVar3 = pcVar17;
  if ((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) {
    cVar1 = *pcVar17;
    while ((*(ushort *)(__ctype_b + cVar1 * 2) & 0x6000) != 0x4000) {
      pcVar3 = pcVar3 + 1;
      if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) goto LAB_000ad18f;
      cVar1 = *pcVar3;
    }
    pcVar3 = (char *)0x0;
  }
LAB_000ad18f:
  if (pcVar3 != (char *)0x0) {
    return;
  }
  if (param_2 == 0) {
    pcVar6 = gpGlobals->pStringBase + *(int *)(param_1 + 0x250);
    pcVar3 = "%c%s: ";
  }
  else {
    pcVar6 = gpGlobals->pStringBase + *(int *)(param_1 + 0x250);
    pcVar3 = "%c(TEAM) %s: ";
  }
  sprintf(local_9c,pcVar3,2,pcVar6);
  uVar14 = 0xffffffff;
  pcVar3 = local_9c;
  do {
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar15 = 0xffffffff;
  pcVar3 = pcVar17;
  do {
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((int)(0x7f - ~uVar14) < (int)(~uVar15 - 1)) {
    pcVar17[0x7f - ~uVar14] = '\0';
  }
  pcVar6 = strstr(local_9c,"");
  cVar1 = *pcVar17;
  pcVar3 = pcVar17;
  while (cVar1 != '\0') {
    if (*pcVar3 == '%') {
      if (pcVar3[1] == 'a') {
        if (pCVar5->pev->armorvalue == 0.0) {
          strcat(local_9c,"no kevlar");
        }
        else {
          strcat(local_9c,"with kevlar");
        }
      }
      else if (pcVar3[1] == 'h') {
        local_1c0._2_2_ = (undefined2)((uint)local_1c0 >> 0x10);
        local_1c0 = CONCAT22(local_1c0._2_2_,in_FPUControlWord);
        local_1c4 = (int)ROUND(pCVar5->pev->health);
        sprintf(local_1bc,"%d",local_1c4);
        strcat(local_9c,local_1bc);
      }
      else {
        strcat(pcVar6,"%");
        pcVar3 = pcVar3 + -1;
      }
      pcVar3 = pcVar3 + 1;
    }
    else {
      strncat(pcVar6,pcVar3,1);
    }
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  strcat(local_9c,"\n");
  bVar2 = true;
  uVar14 = param_1 + 0x80;
  iVar4 = strncmp(pcVar17,"timeleft",8);
  if (iVar4 == 0) {
    (*g_engfuncs.pfnCVarGetFloat)("mp_timeleft");
    local_1c0 = CONCAT22(local_1c0._2_2_,in_FPUControlWord);
    iVar4 = (int)ROUND(extraout_ST0);
    local_1c4 = iVar4;
    pCVar7 = GetClassPtr<CBasePlayer>(uVar14);
    iVar8 = (*pCVar7->vtable[0x33])(pCVar7);
    if (iVar8 != 0) {
      iVar21 = 0;
      iVar20 = 0;
      iVar19 = 0;
      iVar8 = 0;
      puVar9 = UTIL_VarArgs("Time left: %i:%02i\n",iVar4 / 0x3c,iVar4 % 0x3c);
      ClientPrint(uVar14,3,puVar9,iVar8,iVar19,iVar20,iVar21);
    }
  }
  else {
    iVar4 = strncmp(pcVar17,"vote",4);
    if (iVar4 != 0) goto LAB_000ad4e1;
    local_2cc[0] = '\0';
    pcVar3 = strlwr(pcVar17 + 4);
    strcpy(local_2cc,pcVar3);
    pCVar7 = GetClassPtr<CBasePlayer>(uVar14);
    iVar4 = (*pCVar7->vtable[0x33])(pCVar7);
    if ((iVar4 == 0) ||
       (iVar4 = CTSGameRules::PlayerVote((CTSGameRules *)&TSGameRules,param_1,local_2cc), iVar4 == 0
       )) goto LAB_000ad4e1;
  }
  bVar2 = false;
LAB_000ad4e1:
  if (bVar2) {
    piVar18 = (int *)0x0;
LAB_000ad687:
    piVar18 = (int *)UTIL_FindEntityByClassname(piVar18,"player");
    if (piVar18 != (int *)0x0) {
      bVar2 = false;
      if ((*(edict_t **)(*piVar18 + 0x208) == (edict_t *)0x0) ||
         (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(*piVar18 + 0x208)), iVar4 == 0))
      {
        bVar2 = true;
      }
      if (bVar2) goto LAB_000ad6a4;
      if (((*piVar18 != 0) && (*(int *)(*piVar18 + 0x208) != param_1)) &&
         (iVar4 = (**(code **)(piVar18[0x18] + 0xcc))(piVar18), iVar4 != 0)) {
        if (param_2 != 0) {
          peVar10 = (edict_t *)param_1;
          if (param_1 == 0) {
            peVar10 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
          }
          pvVar16 = (void *)0x0;
          if (peVar10 != (edict_t *)0x0) {
            pvVar16 = peVar10->pvPrivateData;
          }
          iVar4 = (**(code **)(*g_pGameRules + 0xcc))(g_pGameRules,piVar18,pvVar16);
          if (iVar4 != 1) goto LAB_000ad687;
        }
        if ((((1 < (byte)(TSGameRules - 2U)) && (g_lastManStanding == 0)) ||
            ((iVar4 = (*pCVar5->vtable[0x2d])(pCVar5), iVar4 != 0 ||
             (0.0 <= *(float *)&pCVar5->field_0x770)))) ||
           ((iVar4 = (**(code **)(piVar18[0x18] + 0xb4))(piVar18), iVar4 == 0 &&
            ((float)piVar18[0x1dc] < 0.0)))) {
          (*g_engfuncs.pfnMessageBegin)(1,gmsgSayText,(float *)0x0,*(edict_t **)(*piVar18 + 0x208));
          iVar4 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_1);
          (*g_engfuncs.pfnWriteByte)(iVar4);
          (*g_engfuncs.pfnWriteString)(local_9c);
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
      goto LAB_000ad687;
    }
LAB_000ad6a4:
    (*g_engfuncs.pfnMessageBegin)(1,gmsgSayText,(float *)0x0,*(edict_t **)(param_1 + 0x288));
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_1);
    (*g_engfuncs.pfnWriteByte)(iVar4);
    (*g_engfuncs.pfnWriteString)(local_9c);
    (*g_engfuncs.pfnMessageEnd)();
    (*g_engfuncs.pfnServerPrint)(local_9c);
  }
  pcVar3 = "say_team";
  if (param_2 == 0) {
    pcVar3 = "say";
  }
  if (g_teamplay == 0) {
    pcVar11 = (char *)(*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_1);
    pcVar12 = (*g_engfuncs.pfnGetPlayerAuthId)((edict_t *)param_1);
    iVar4 = (*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_1);
    pcVar13 = gpGlobals->pStringBase + *(int *)(param_1 + 0x250);
    pcVar6 = "\"%s<%i><%s><%i>\" %s \"%s\"\n";
  }
  else {
    pcVar6 = "model";
    pcVar11 = (*g_engfuncs.pfnGetInfoKeyBuffer)((edict_t *)param_1);
    pcVar11 = (*g_engfuncs.pfnInfoKeyValue)(pcVar11,pcVar6);
    pcVar12 = (*g_engfuncs.pfnGetPlayerAuthId)((edict_t *)param_1);
    iVar4 = (*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_1);
    pcVar13 = gpGlobals->pStringBase + *(int *)(param_1 + 0x250);
    pcVar6 = "\"%s<%i><%s><%s>\" %s \"%s\"\n";
  }
  UTIL_LogPrintf(pcVar6,pcVar13,iVar4,pcVar12,pcVar11,pcVar3,pcVar17);
  *(float *)&pCVar5->field_0x7c0 = gpGlobals->time + 0.5;
  return;
}

/* 000ad838  ClientCommand  (3506 bytes)
 * void ClientCommand(edict_t * pEntity)
 */
/* ClientCommand(edict_s *) */

void ClientCommand(edict_t *pEntity)

{
  char *pcVar1;
  entvars_t *peVar2;
  int iVar3;
  CBasePlayer *pCVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  CTSGun *pCVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  uint local_110;
  uint local_10c;
  uint local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  uint local_f0;
  char local_ec [127];
  undefined1 local_6d;
  char local_6c [92];
  
  pcVar1 = (*g_engfuncs.pfnCmd_Argv)(0);
  if (pEntity->pvPrivateData == (void *)0x0) {
    return;
  }
  peVar2 = &pEntity->v;
  iVar3 = strcmp(pcVar1,"say");
  if (iVar3 == 0) {
    iVar3 = 0;
LAB_000ad8b8:
    Host_Say((int)pEntity,iVar3);
    return;
  }
  iVar3 = strcmp(pcVar1,"say_team");
  if (iVar3 == 0) {
    iVar3 = 1;
    goto LAB_000ad8b8;
  }
  iVar3 = strcmp(pcVar1,"fov");
  if (iVar3 == 0) {
    if ((g_flWeaponCheat != 0.0) && (iVar3 = (*g_engfuncs.pfnCmd_Argc)(), 1 < iVar3)) {
      pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
      pcVar1 = (*g_engfuncs.pfnCmd_Argv)(1);
      uVar5 = __strtol_internal(pcVar1,0,10,0);
      *(undefined4 *)&pCVar4->field_0x9f0 = uVar5;
      pcVar1 = (*g_engfuncs.pfnCmd_Argv)(1);
      iVar3 = __strtol_internal(pcVar1,0,10,0);
      (pEntity->v).fov = (float)iVar3;
      return;
    }
    pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
    pcVar1 = UTIL_VarArgs("\"fov\" is \"%d\"\n",*(undefined4 *)&pCVar4->field_0x9f0);
    (*g_engfuncs.pfnClientPrintf)(pEntity,print_console,pcVar1);
    return;
  }
  iVar3 = strcmp(pcVar1,"use");
  if (iVar3 == 0) {
    pcVar1 = (*g_engfuncs.pfnCmd_Argv)(1);
    pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
    CBasePlayer::SelectItem(pCVar4,pcVar1);
    return;
  }
  iVar3 = strcmp(pcVar1,"respawn");
  if (iVar3 == 0) {
    pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
    if (pCVar4->pev->iuser1 == 0) {
      return;
    }
    if ((*(float *)&pCVar4->field_0x770 < 0.0) && (*(float *)&pCVar4->field_0x754 < gpGlobals->time)
       ) {
      *(float *)&pCVar4->field_0x754 = gpGlobals->time + 1.0;
      TSHudMessageOne(0xc3,0x2d,0x2d,0x10,0x14,"You have to wait until the next round.",
                      (int)pCVar4->pev);
    }
    if (*(float *)&pCVar4->field_0x770 <= 0.0) {
      return;
    }
    if (gpGlobals->time <= *(float *)&pCVar4->field_0x770) {
      return;
    }
    *(undefined4 *)&pCVar4->field_0x770 = 0;
    CBasePlayer::StopObserver(pCVar4);
    pCVar4->pev->impulse = 0;
    return;
  }
  if (g_flWeaponCheat != 0.0) {
    iVar3 = strcmp(pcVar1,"powerup");
    if ((iVar3 == 0) && (iVar3 = (*g_engfuncs.pfnCmd_Argc)(), 1 < iVar3)) {
      pcVar1 = (*g_engfuncs.pfnCmd_Argv)(1);
      uVar5 = __strtol_internal(pcVar1,0,10,0);
      pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
      if (pCVar4 == (CBasePlayer *)0x0) {
        return;
      }
      iVar3 = (*pCVar4->vtable[0x2d])(pCVar4);
      if (iVar3 == 0) {
        return;
      }
      if (pCVar4->pev->iuser1 != 0) {
        return;
      }
      iVar3 = 1;
      switch(uVar5) {
      case 1:
        iVar3 = 8;
        break;
      case 2:
        CBasePlayer::PickUpWeapon(pCVar4,0x18,(undefined4 *)0x0,0,'\x01','\0');
        return;
      case 3:
        pCVar4->field_0x74e = 1;
        (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,(pEntity->v).pContainingEntity);
        (*g_engfuncs.pfnWriteShort)(4);
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
        pCVar4->field_0x74f = 1;
        (*g_engfuncs.pfnSetPhysicsKeyValue)(pCVar4->pev->pContainingEntity,"mj","1");
        (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,(pEntity->v).pContainingEntity);
        (*g_engfuncs.pfnWriteShort)(0x100);
        iVar3 = 0;
        goto LAB_000ae49c;
      case 4:
        if (*(int *)&pCVar4->field_0xa10 == 0) {
          return;
        }
        iVar3 = *(int *)&pCVar4->field_0xa10;
        if (*(int *)(iVar3 + 0x88) != 0x10) {
          return;
        }
        CTSGun::MultiplyClips(iVar3,(CTSGun *)iVar3);
        return;
      case 5:
        iVar3 = 0x10;
      }
      if (*(int *)&pCVar4->field_0x724 == 0) {
        (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,(pEntity->v).pContainingEntity);
        (*g_engfuncs.pfnWriteShort)(iVar3);
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
        if (*(int *)&pCVar4->field_0x728 == iVar3) {
          *(int *)&pCVar4->field_0x730 = *(int *)&pCVar4->field_0x730 + 5;
        }
        else {
          *(undefined4 *)&pCVar4->field_0x730 = 5;
        }
        *(int *)&pCVar4->field_0x728 = iVar3;
        *(undefined4 *)&pCVar4->field_0x72c = 0;
      }
      return;
    }
    if ((g_flWeaponCheat != 0.0) && (iVar3 = strcmp(pcVar1,"cashala"), iVar3 == 0)) {
      iVar3 = 30000;
      pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
      CBasePlayer::GiveCash(pCVar4,iVar3);
      return;
    }
  }
  pcVar6 = strstr(pcVar1,"weapon_");
  if ((pcVar6 != (char *)0x0) && (pcVar6 == pcVar1)) {
    local_6c[0] = '\0';
    strcpy(local_6c,pcVar1 + 7);
    sscanf(local_6c,"%i",&local_f0);
    pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
    pCVar10 = *(CTSGun **)&pCVar4->field_0xa10;
    if (pCVar10 == (CTSGun *)0x0) {
      return;
    }
    if (*(int *)&pCVar10->field_0x88 != 0x10) {
      return;
    }
    pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
    *(undefined4 *)&pCVar4->field_0xa1c = *(undefined4 *)&pCVar10->field_0xc8;
    uVar17 = local_f0;
LAB_000ae433:
    uVar5 = 1;
    iVar3 = CTSGun::SelectWeapon(pCVar10,uVar17);
    if (iVar3 == 0) {
      return;
    }
    (*pCVar10->vtable[0x4a])(pCVar10,uVar17,uVar5);
    return;
  }
  pcVar6 = strstr(pcVar1,"lasclr_");
  if ((pcVar6 != (char *)0x0) && (pcVar6 == pcVar1)) {
    local_f4 = 0;
    local_6c[0] = '\0';
    strcpy(local_6c,pcVar1 + 7);
    sscanf(local_6c,"%i",&local_f4);
    (*g_engfuncs.pfnMessageBegin)(2,gmsgTSPlayerInfo,(float *)0x0,(edict_t *)0x0);
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)((pEntity->v).pContainingEntity);
    (*g_engfuncs.pfnWriteByte)(iVar3);
    (*g_engfuncs.pfnWriteByte)(0);
    iVar3 = local_f4;
LAB_000ae49c:
    (*g_engfuncs.pfnWriteByte)(iVar3);
    (*g_engfuncs.pfnMessageEnd)();
    return;
  }
  iVar3 = strcmp(pcVar1,"rst_cfg");
  if (iVar3 == 0) {
    pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
    CBasePlayer::ResetArmament(pCVar4);
    return;
  }
  iVar3 = strcmp(pcVar1,"tkw");
  if (iVar3 == 0) {
    uVar17 = 0xadf53;
    iVar3 = (*g_engfuncs.pfnCmd_Argc)();
    iVar11 = 1;
    if (iVar3 < 2) {
      return;
    }
    do {
      pcVar1 = (*g_engfuncs.pfnCmd_Argv)(iVar11);
      strcpy(local_6c,pcVar1);
      sscanf(local_6c,"%i_%i",&local_fc,&local_f8);
      puVar7 = get_weapon_info(local_fc);
      if (*(char *)(puVar7 + 0x37) == '\0') {
        uVar17 = uVar17 & 0xffff0000;
        uVar14 = local_fc;
        iVar9 = local_f8;
        pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
        CBasePlayer::AddItemToArmament(pCVar4,uVar14,iVar9,uVar17);
      }
      else {
        puVar7 = get_weapon_info(local_fc);
        if (local_f8 < (int)puVar7[9]) {
          if (1 < local_f8) goto LAB_000adffb;
LAB_000ae030:
          local_f8 = 1;
        }
        else {
          puVar7 = get_weapon_info(local_fc);
          if ((int)puVar7[9] < 2) goto LAB_000ae030;
LAB_000adffb:
          puVar7 = get_weapon_info(local_fc);
          if ((int)puVar7[9] <= local_f8) {
            puVar7 = get_weapon_info(local_fc);
            local_f8 = puVar7[9];
          }
        }
        if (0 < local_f8) {
          iVar9 = 0;
          do {
            uVar17 = uVar17 & 0xffff0000;
            uVar5 = 0;
            uVar14 = local_fc;
            pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
            CBasePlayer::AddItemToArmament(pCVar4,uVar14,uVar5,uVar17);
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_f8);
        }
      }
      iVar11 = iVar11 + 1;
      if (iVar3 <= iVar11) {
        return;
      }
    } while( true );
  }
  iVar3 = strcmp(pcVar1,"tki");
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnCmd_Argc)();
    iVar11 = 1;
    if (iVar3 < 2) {
      return;
    }
    do {
      pcVar1 = (*g_engfuncs.pfnCmd_Argv)(iVar11);
      strcpy(local_6c,pcVar1);
      sscanf(local_6c,"%i",&local_100);
      uVar13 = 1;
      uVar12 = 0;
      uVar5 = local_100;
      pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
      CBasePlayer::AddItemToArmament(pCVar4,uVar5,uVar12,uVar13);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
    return;
  }
  iVar3 = strcmp(pcVar1,"tka");
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnCmd_Argc)();
    iVar11 = 1;
    if (iVar3 < 2) {
      return;
    }
    do {
      pcVar1 = (*g_engfuncs.pfnCmd_Argv)(iVar11);
      strcpy(local_6c,pcVar1);
      sscanf(local_6c,"%i_%i",&local_108,&local_104);
      uVar17 = local_108;
      uVar5 = local_104;
      pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
      CBasePlayer::AddAmmoToArmament(pCVar4,uVar17,uVar5);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
    return;
  }
  pcVar6 = strstr(pcVar1,"cutwire_");
  if ((pcVar6 != (char *)0x0) && (pcVar6 == pcVar1)) {
    local_6c[0] = '\0';
    strcpy(local_6c,pcVar1 + 8);
    sscanf(local_6c,"%i",&local_10c);
    pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
    CBasePlayer::CutWire(pCVar4,local_10c);
    return;
  }
  pcVar6 = strstr(pcVar1,"drop_");
  if ((pcVar6 == (char *)0x0) || (pcVar6 != pcVar1)) {
    iVar3 = strcmp(pcVar1,"drop");
    if (iVar3 != 0) {
      iVar3 = strcmp(pcVar1,"usepowerup");
      if (iVar3 == 0) {
        pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
        CBasePlayer::UsePowerUp(pCVar4);
        return;
      }
      iVar3 = strcmp(pcVar1,"firemode");
      if (iVar3 == 0) {
        pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
        pCVar10 = *(CTSGun **)&pCVar4->field_0xa10;
        if (pCVar10 == (CTSGun *)0x0) {
          return;
        }
        if (*(int *)&pCVar10->field_0x88 != 0x10) {
          return;
        }
        CTSGun::SwitchFireMode(pCVar10);
        return;
      }
      iVar3 = strcmp(pcVar1,"useitems");
      if (iVar3 == 0) {
        pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
        pCVar10 = *(CTSGun **)&pCVar4->field_0xa10;
        if (pCVar10 == (CTSGun *)0x0) {
          return;
        }
        if (*(int *)&pCVar10->field_0x88 != 0x10) {
          return;
        }
        CTSGun::SwitchItems(pCVar10);
        return;
      }
      iVar3 = strcmp(pcVar1,"lastinv");
      if (iVar3 == 0) {
        pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
        pCVar10 = *(CTSGun **)&pCVar4->field_0xa10;
        if (pCVar10 == (CTSGun *)0x0) {
          return;
        }
        if (*(int *)&pCVar10->field_0x88 != 0x10) {
          return;
        }
        uVar17 = *(uint *)&pCVar4->field_0xa1c;
        if (*(int *)&pCVar10->field_0xc8 == 0) {
          return;
        }
        pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
        *(undefined4 *)&pCVar4->field_0xa1c = *(undefined4 *)&pCVar10->field_0xc8;
        goto LAB_000ae433;
      }
      iVar3 = strcmp(pcVar1,"changeteam");
      if (iVar3 != 0) {
        iVar3 = strcmp(pcVar1,"jointeam");
        if ((iVar3 == 0) && (iVar3 = (*g_engfuncs.pfnCmd_Argc)(), 1 < iVar3)) {
          pcVar1 = (*g_engfuncs.pfnCmd_Argv)(1);
          iVar3 = __strtol_internal(pcVar1,0,10,0);
          uVar5 = (**(code **)(*g_pGameRules + 0xd4))(g_pGameRules,iVar3 + -1);
          iVar3 = *g_pGameRules;
          uVar13 = 0;
          uVar12 = 0;
          pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
          (**(code **)(iVar3 + 0xdc))(g_pGameRules,pCVar4,uVar5,uVar12,uVar13);
          return;
        }
        iVar3 = strcmp(pcVar1,"motd");
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*g_pGameRules + 0x1c))(g_pGameRules);
          if (iVar3 == 0) {
            return;
          }
          CHalfLifeMultiplay::SendMOTDToClient(g_pGameRules,(pEntity->v).pContainingEntity);
          return;
        }
        iVar3 = strcmp(pcVar1,"fullupdate");
        if (iVar3 != 0) {
          iVar3 = *g_pGameRules;
          pcVar6 = pcVar1;
          pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
          iVar3 = (**(code **)(iVar3 + 100))(g_pGameRules,pCVar4,pcVar6);
          if (iVar3 != 0) {
            return;
          }
          strncpy(local_ec,pcVar1,0x7f);
          local_6d = 0;
          iVar16 = 0;
          iVar9 = 0;
          iVar11 = 0;
          iVar3 = 0;
          puVar8 = UTIL_VarArgs("Unknown command: %s\n",local_ec);
          ClientPrint((int)&pEntity->v,2,puVar8,iVar3,iVar11,iVar9,iVar16);
          return;
        }
        pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
        CBasePlayer::ForceClientDllUpdate(pCVar4);
        return;
      }
      (*g_engfuncs.pfnMessageBegin)(1,gmsgVGUIMenu,(float *)0x0,(pEntity->v).pContainingEntity);
      iVar3 = 2;
      goto LAB_000ae49c;
    }
    local_110 = 0xffffffff;
  }
  else {
    local_6c[0] = '\0';
    strcpy(local_6c,pcVar1 + 5);
    sscanf(local_6c,"%i",&local_110);
  }
  fVar15 = 0.0;
  pCVar4 = GetClassPtr<CBasePlayer>((uint)peVar2);
  CBasePlayer::DropWeapon(pCVar4,local_110,fVar15);
  return;
}

/* 000ae638  ClientUserInfoChanged  (687 bytes)
 * void ClientUserInfoChanged(edict_t * pEntity, char * infobuffer)
 */
/* ClientUserInfoChanged(edict_s *, char *) */

void ClientUserInfoChanged(edict_t *pEntity,char *infobuffer)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  CBasePlayer *pCVar7;
  char local_21c [256];
  char local_11c [255];
  undefined1 local_1d;
  
  if (pEntity->pvPrivateData != (void *)0x0) {
    if ((pEntity->v).netname != 0) {
      pcVar3 = gpGlobals->pStringBase;
      iVar2 = (pEntity->v).netname;
      if (pcVar3[iVar2] != '\0') {
        pcVar1 = (*g_engfuncs.pfnInfoKeyValue)(infobuffer,"name");
        iVar2 = strcmp(pcVar3 + iVar2,pcVar1);
        if (iVar2 != 0) {
          pcVar1 = (*g_engfuncs.pfnInfoKeyValue)(infobuffer,"name");
          pcVar3 = local_11c;
          strncpy(pcVar3,pcVar1,0xff);
          local_1d = 0;
          while (local_11c[0] != '\0') {
            if (*pcVar3 == '%') {
              *pcVar3 = ' ';
            }
            pcVar3 = pcVar3 + 1;
            if (pcVar3 == (char *)0x0) break;
            local_11c[0] = *pcVar3;
          }
          iVar2 = (*g_engfuncs.pfnIndexOfEdict)(pEntity);
          (*g_engfuncs.pfnSetClientKeyValue)(iVar2,infobuffer,"name",local_11c);
          pcVar3 = (*g_engfuncs.pfnInfoKeyValue)(infobuffer,"name");
          sprintf(local_21c,"* %s changed name to %s\n",
                  gpGlobals->pStringBase + (pEntity->v).netname,pcVar3);
          (*g_engfuncs.pfnMessageBegin)(2,gmsgSayText,(float *)0x0,(edict_t *)0x0);
          iVar2 = (*g_engfuncs.pfnIndexOfEdict)(pEntity);
          (*g_engfuncs.pfnWriteByte)(iVar2);
          (*g_engfuncs.pfnWriteString)(local_21c);
          (*g_engfuncs.pfnMessageEnd)();
          if (g_teamplay == 0) {
            pcVar1 = (*g_engfuncs.pfnInfoKeyValue)(infobuffer,"name");
            pcVar4 = (char *)(*g_engfuncs.pfnGetPlayerUserId)(pEntity);
            pcVar5 = (*g_engfuncs.pfnGetPlayerAuthId)(pEntity);
            iVar2 = (*g_engfuncs.pfnGetPlayerUserId)(pEntity);
            pcVar6 = gpGlobals->pStringBase + (pEntity->v).netname;
            pcVar3 = "\"%s<%i><%s><%i>\" changed name to \"%s\"\n";
          }
          else {
            pcVar1 = (*g_engfuncs.pfnInfoKeyValue)(infobuffer,"name");
            pcVar4 = (*g_engfuncs.pfnInfoKeyValue)(infobuffer,"model");
            pcVar5 = (*g_engfuncs.pfnGetPlayerAuthId)(pEntity);
            iVar2 = (*g_engfuncs.pfnGetPlayerUserId)(pEntity);
            pcVar6 = gpGlobals->pStringBase + (pEntity->v).netname;
            pcVar3 = "\"%s<%i><%s><%s>\" changed name to \"%s\"\n";
          }
          UTIL_LogPrintf(pcVar3,pcVar6,iVar2,pcVar5,pcVar4,pcVar1);
        }
      }
    }
    iVar2 = *g_pGameRules;
    pCVar7 = GetClassPtr<CBasePlayer>((uint)&pEntity->v);
    (**(code **)(iVar2 + 0x68))(g_pGameRules,pCVar7,infobuffer);
  }
  return;
}

/* 000ae8ec  ServerDeactivate  (57 bytes)
 * void ServerDeactivate(void)
 */
/* ServerDeactivate(void) */

void ServerDeactivate(void)

{
  if (g_serveractive == 1) {
    g_serveractive = 0;
    CTSSharedEmitter::KillAll((CTSSharedEmitter *)CTSSharedEmitter::s_Emitter);
  }
  return;
}

/* 000ae928  ServerActivate  (223 bytes)
 * void ServerActivate(edict_t * pEdictList, int edictCount, int clientMax)
 */
/* ServerActivate(edict_s *, int, int) */

void ServerActivate(edict_t *pEdictList,int edictCount,int clientMax)

{
  edict_t *peVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  g_serveractive = 1;
  iVar3 = 0;
  if (0 < edictCount) {
    iVar4 = 0;
    do {
      if (((*(int *)((int)&pEdictList->free + iVar4) == 0) && (clientMax <= iVar3)) &&
         (*(int *)((int)(pEdictList->v).origin + iVar4 + -0xc) != 0)) {
        peVar1 = (edict_t *)((int)&pEdictList->free + iVar4);
        if (peVar1 == (edict_t *)0x0) {
          peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        piVar2 = (int *)0x0;
        if (peVar1 != (edict_t *)0x0) {
          piVar2 = peVar1->pvPrivateData;
        }
        if ((piVar2 == (int *)0x0) || (*(int *)(*piVar2 + 0x1a4) < 0)) {
          (*g_engfuncs.pfnAlertMessage)
                    (at_console,"Can\'t instance %s\n",
                     gpGlobals->pStringBase + *(int *)((int)(pEdictList->v).origin + iVar4 + -8));
        }
        else {
          (**(code **)(piVar2[0x18] + 0x3c))(piVar2);
        }
      }
      iVar4 = iVar4 + 0x324;
      iVar3 = iVar3 + 1;
    } while (iVar3 < edictCount);
  }
  LinkUserMessages();
  return;
}

/* 000aea0c  PlayerPreThink  (43 bytes)
 * void PlayerPreThink(edict_t * pEntity)
 */
/* PlayerPreThink(edict_s *) */

void PlayerPreThink(edict_t *pEntity)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (pEntity != (edict_t *)0x0) {
    pvVar1 = pEntity->pvPrivateData;
  }
  if (pvVar1 != (void *)0x0) {
    (**(code **)(*(int *)((int)pvVar1 + 0x60) + 0x160))(pvVar1);
  }
  return;
}

/* 000aea38  PlayerPostThink  (43 bytes)
 * void PlayerPostThink(edict_t * pEntity)
 */
/* PlayerPostThink(edict_s *) */

void PlayerPostThink(edict_t *pEntity)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (pEntity != (edict_t *)0x0) {
    pvVar1 = pEntity->pvPrivateData;
  }
  if (pvVar1 != (void *)0x0) {
    (**(code **)(*(int *)((int)pvVar1 + 0x60) + 0x164))(pvVar1);
  }
  return;
}

/* 000aea64  ParmsNewLevel  (1 bytes)
 * void ParmsNewLevel(void)
 */
/* ParmsNewLevel(void) */

void ParmsNewLevel(void)

{
  return;
}

/* 000aea68  ParmsChangeLevel  (61 bytes)
 * void ParmsChangeLevel(void)
 */
/* ParmsChangeLevel(void) */

void ParmsChangeLevel(void)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = gpGlobals->pSaveData;
  if (pvVar1 != (void *)0x0) {
    uVar2 = BuildChangeList((char *)((int)pvVar1 + 0x2c),0x10);
    *(undefined4 *)((int)pvVar1 + 0x24) = uVar2;
  }
  return;
}

/* 000aeaa8  StartFrame  (84 bytes)
 * void StartFrame(void)
 */
/* StartFrame(void) */

void StartFrame(void)

{
  if (g_pGameRules != (int *)0x0) {
    (**(code **)(*g_pGameRules + 0xc))(g_pGameRules);
  }
  if (g_fGameOver == 0) {
    gpGlobals->teamplay = (float)g_teamplay;
    g_ulFrameCount = g_ulFrameCount + 1;
  }
  return;
}

/* 000aeafc  ClientPrecache  (901 bytes)
 * undefined ClientPrecache(void)
 */
/* ClientPrecache(void) */

void ClientPrecache(void)

{
  (*g_engfuncs.pfnPrecacheSound)("player/sprayer.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_fallpain3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_step1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_step2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_step3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_step4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_metal1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_metal2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_metal3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_metal4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_dirt1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_dirt2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_dirt3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_dirt4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_duct1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_duct2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_duct3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_duct4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_grate1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_grate2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_grate3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_grate4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_slosh1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_slosh2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_slosh3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_slosh4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_tile1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_tile2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_tile3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_tile4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_tile5.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_swim1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_swim2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_swim3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_swim4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_ladder1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_ladder2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_ladder3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_ladder4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_wade1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_wade2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_wade3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_wade4.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/wood1.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/wood2.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/wood3.wav");
  (*g_engfuncs.pfnPrecacheSound)("plats/train_use1.wav");
  (*g_engfuncs.pfnPrecacheSound)("buttons/spark5.wav");
  (*g_engfuncs.pfnPrecacheSound)("buttons/spark6.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/glass1.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/glass2.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/glass3.wav");
  (*g_engfuncs.pfnPrecacheSound)("common/bodysplat.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_pain2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_pain4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_pain5.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_pain6.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pl_pain7.wav");
  (*g_engfuncs.pfnPrecacheModel)("models/player.mdl");
  (*g_engfuncs.pfnPrecacheSound)("common/wpn_hudoff.wav");
  (*g_engfuncs.pfnPrecacheSound)("common/wpn_hudon.wav");
  (*g_engfuncs.pfnPrecacheSound)("common/wpn_moveselect.wav");
  (*g_engfuncs.pfnPrecacheSound)("common/wpn_select.wav");
  (*g_engfuncs.pfnPrecacheSound)("common/wpn_denyselect.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/geiger6.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/geiger5.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/geiger4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/geiger3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/geiger2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/geiger1.wav");
  if (giPrecacheGrunt != 0) {
    UTIL_PrecacheOther(0x10bc82);
  }
  return;
}

/* 000aee84  GetGameDescription  (54 bytes)
 * char * GetGameDescription(void)
 */
/* GetGameDescription(void) */

char * GetGameDescription(void)

{
  char *pcVar1;
  
  if (g_pGameRules == (int *)0x0) {
    pcVar1 = "Half-Life";
  }
  else {
    pcVar1 = (char *)(**(code **)(*g_pGameRules + 0x2c))(g_pGameRules);
  }
  return pcVar1;
}

/* 000aeebc  Sys_Error  (49 bytes)
 * void Sys_Error(char * error_string)
 */
/* Sys_Error(char const *) */

void Sys_Error(char *error_string)

{
  (*g_engfuncs.pfnAlertMessage)(at_error,"Sys_Error: %s\n",error_string);
  return;
}

/* 000aeef0  PlayerCustomization  (144 bytes)
 * void PlayerCustomization(edict_t * pEntity, customization_t * pCustom)
 */
/* PlayerCustomization(edict_s *, customization_s *) */

void PlayerCustomization(edict_t *pEntity,customization_t *pCustom)

{
  resourcetype_t rVar1;
  char *szFmt;
  CBasePlayer *this;
  
  this = (CBasePlayer *)0x0;
  if (pEntity != (edict_t *)0x0) {
    this = pEntity->pvPrivateData;
  }
  if (this == (CBasePlayer *)0x0) {
    szFmt = "PlayerCustomization:  Couldn\'t get player!\n";
  }
  else if (pCustom == (customization_t *)0x0) {
    szFmt = "PlayerCustomization:  NULL customization!\n";
  }
  else {
    rVar1 = (pCustom->resource).type;
    if (-1 < (int)rVar1) {
      if ((int)rVar1 < 3) {
        return;
      }
      if (rVar1 == t_decal) {
        CBasePlayer::SetCustomDecalFrames(this,pCustom->nUserData2);
        return;
      }
    }
    szFmt = "PlayerCustomization:  Unknown customization type!\n";
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,szFmt);
  return;
}

/* 000aef88  SpectatorConnect  (53 bytes)
 * void SpectatorConnect(edict_t * pEntity)
 */
/* SpectatorConnect(edict_s *) */

void SpectatorConnect(edict_t *pEntity)

{
  CBaseSpectator *this;
  
  this = (CBaseSpectator *)0x0;
  if (pEntity != (edict_t *)0x0) {
    this = pEntity->pvPrivateData;
  }
  if (this != (CBaseSpectator *)0x0) {
    CBaseSpectator::SpectatorConnect(this);
  }
  return;
}

/* 000aefc0  SpectatorDisconnect  (53 bytes)
 * void SpectatorDisconnect(edict_t * pEntity)
 */
/* SpectatorDisconnect(edict_s *) */

void SpectatorDisconnect(edict_t *pEntity)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (pEntity != (edict_t *)0x0) {
    pvVar1 = pEntity->pvPrivateData;
  }
  if (pvVar1 != (void *)0x0) {
    CBaseSpectator::SpectatorDisconnect();
  }
  return;
}

/* 000aeff8  SpectatorThink  (53 bytes)
 * void SpectatorThink(edict_t * pEntity)
 */
/* SpectatorThink(edict_s *) */

void SpectatorThink(edict_t *pEntity)

{
  CBaseSpectator *this;
  
  this = (CBaseSpectator *)0x0;
  if (pEntity != (edict_t *)0x0) {
    this = pEntity->pvPrivateData;
  }
  if (this != (CBaseSpectator *)0x0) {
    CBaseSpectator::SpectatorThink(this);
  }
  return;
}

/* 000af030  SetupVisibility  (330 bytes)
 * void SetupVisibility(edict_s * pViewEntity, edict_s * pClient, uchar * * pvs, uchar * * pas)
 */
/* SetupVisibility(edict_s *, edict_s *, unsigned char **, unsigned char **) */

void SetupVisibility(edict_s *pViewEntity,edict_s *pClient,uchar **pvs,uchar **pas)

{
  uchar *puVar1;
  int iVar2;
  edict_s *peVar3;
  float *pfVar4;
  float *pfVar5;
  float local_3c [4];
  float local_2c [7];
  
  peVar3 = pClient;
  if (pViewEntity != (edict_s *)0x0) {
    peVar3 = pViewEntity;
  }
  if (((pClient->v).flags & 0x100000) == 0) {
    local_3c[0] = (peVar3->v).origin[0] + (peVar3->v).view_ofs[0];
    local_3c[1] = (peVar3->v).origin[1] + (peVar3->v).view_ofs[1];
    local_3c[2] = (peVar3->v).origin[2] + (peVar3->v).view_ofs[2];
    pfVar4 = local_3c;
    pfVar5 = local_2c;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    if (((peVar3->v).flags & 0x4000) != 0) {
      local_3c[0] = local_2c[0] + 0.0;
      local_3c[1] = local_2c[1] + 0.0;
      local_3c[2] = local_2c[2] + -18.0;
      pfVar4 = local_3c;
      pfVar5 = local_2c;
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
    }
    puVar1 = (*g_engfuncs.pfnSetFatPVS)(local_2c);
    *pvs = puVar1;
    puVar1 = (*g_engfuncs.pfnSetFatPAS)(local_2c);
    *pas = puVar1;
  }
  else {
    *pvs = (uchar *)0x0;
    *pas = (uchar *)0x0;
  }
  return;
}

/* 000af180  AddToFullPack  (1686 bytes)
 * int AddToFullPack(entity_state_s * state, int e, edict_t * ent, edict_t * host, int hostflags, int player, uchar * pSet)
 */
/* AddToFullPack(entity_state_s *, int, edict_s *, edict_s *, int, int, unsigned char *) */

int AddToFullPack(entity_state_s *state,int e,edict_t *ent,edict_t *host,int hostflags,int player,
                 uchar *pSet)

{
  int iVar1;
  edict_t *peVar2;
  void *pvVar3;
  vec_t *pvVar4;
  entity_state_s *peVar5;
  vec_t *pvVar6;
  
  if (((ent->v).effects == 0x80) && (ent != host)) {
    return 0;
  }
  if ((ent->v).modelindex == 0) {
    return 0;
  }
  if (gpGlobals->pStringBase + (ent->v).model == (char *)0x0) {
    return 0;
  }
  if ((((ent->v).flags & 0x4000000) != 0) && (ent != host)) {
    return 0;
  }
  if ((ent != host) && (iVar1 = (*g_engfuncs.pfnCheckVisibility)(ent,pSet), iVar1 == 0)) {
    return 0;
  }
  if (((((ent->v).flags & 0x100) != 0) && ((hostflags & 1U) != 0)) && ((ent->v).owner == host)) {
    return 0;
  }
  if ((host->v).groupinfo != 0) {
    UTIL_SetGroupTrace((host->v).groupinfo,0);
    if ((ent->v).groupinfo != 0) {
      if (g_groupop == 0) {
        if (((ent->v).groupinfo & (host->v).groupinfo) == 0) {
          return 0;
        }
      }
      else if ((g_groupop == 1) && (((ent->v).groupinfo & (host->v).groupinfo) != 0)) {
        return 0;
      }
    }
    UTIL_UnsetGroupTrace();
  }
  peVar5 = state;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    peVar5->entityType = 0;
    peVar5 = (entity_state_s *)&peVar5->number;
  }
  state->number = e;
  state->entityType = 1;
  if (((ent->v).flags & 0x20000000) != 0) {
    state->entityType = 2;
  }
  state->animtime = (float)(int)ROUND((ent->v).animtime * 1000.0) * 0.001;
  pvVar4 = (ent->v).origin;
  pvVar6 = state->origin;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar6 = pvVar6 + 1;
  }
  pvVar4 = (ent->v).angles;
  pvVar6 = state->angles;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar6 = pvVar6 + 1;
  }
  pvVar4 = (ent->v).mins;
  pvVar6 = state->mins;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar6 = pvVar6 + 1;
  }
  pvVar4 = (ent->v).maxs;
  pvVar6 = state->maxs;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar6 = pvVar6 + 1;
  }
  pvVar4 = (ent->v).startpos;
  pvVar6 = state->startpos;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar6 = pvVar6 + 1;
  }
  pvVar4 = (ent->v).endpos;
  pvVar6 = state->endpos;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar6 = pvVar6 + 1;
  }
  state->impacttime = (ent->v).impacttime;
  state->starttime = (ent->v).starttime;
  state->modelindex = (ent->v).modelindex;
  state->frame = (ent->v).frame;
  state->skin = (short)(ent->v).skin;
  state->effects = (ent->v).effects;
  if (((player == 0) && ((ent->v).animtime != 0.0)) &&
     (((ent->v).velocity[0] == 0.0 &&
      (((ent->v).velocity[1] == 0.0 && ((ent->v).velocity[2] == 0.0)))))) {
    state->eflags = state->eflags | 1;
  }
  state->scale = (ent->v).scale;
  state->solid = (short)(ent->v).solid;
  state->colormap = (ent->v).colormap;
  state->movetype = (ent->v).movetype;
  state->sequence = (ent->v).sequence;
  state->framerate = (ent->v).framerate;
  state->body = (ent->v).body;
  state->controller[0] = (ent->v).controller[0];
  state->controller[1] = (ent->v).controller[1];
  state->controller[2] = (ent->v).controller[2];
  state->controller[3] = (ent->v).controller[3];
  state->blending[0] = (ent->v).blending[0];
  state->blending[1] = (ent->v).blending[1];
  iVar1 = strcmp(gpGlobals->pStringBase + *(int *)((uint)&ent->v & (ent == (edict_t *)0x0) - 1),
                 "WorldGun");
  if (iVar1 == 0) {
    peVar2 = ent;
    if (ent == (edict_t *)0x0) {
      peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar3 = (void *)0x0;
    if (peVar2 != (edict_t *)0x0) {
      pvVar3 = peVar2->pvPrivateData;
    }
    if (*(edict_t **)((int)pvVar3 + 0xd0) != host) goto LAB_000af52a;
LAB_000af59c:
    state->renderamt = 2;
    state->renderfx = 0x13;
    (state->rendercolor).r = 'd';
    (state->rendercolor).g = 'd';
    (state->rendercolor).b = 'd';
  }
  else {
LAB_000af52a:
    iVar1 = strcmp(gpGlobals->pStringBase + *(int *)((uint)&ent->v & (ent == (edict_t *)0x0) - 1),
                   "knife");
    if (iVar1 == 0) {
      peVar2 = ent;
      if (ent == (edict_t *)0x0) {
        peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      pvVar3 = (void *)0x0;
      if (peVar2 != (edict_t *)0x0) {
        pvVar3 = peVar2->pvPrivateData;
      }
      if (*(edict_t **)((int)pvVar3 + 0x8c) == host) goto LAB_000af59c;
    }
    state->rendermode = (ent->v).rendermode;
    state->renderamt = (int)ROUND((ent->v).renderamt);
    state->renderfx = (ent->v).renderfx;
    (state->rendercolor).r = (byte_conflict)(short)ROUND((ent->v).rendercolor[0]);
    (state->rendercolor).g = (byte_conflict)(short)ROUND((ent->v).rendercolor[1]);
    (state->rendercolor).b = (byte_conflict)(short)ROUND((ent->v).rendercolor[2]);
  }
  state->aiment = 0;
  if ((ent->v).aiment != (edict_t *)0x0) {
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)((ent->v).aiment);
    state->aiment = iVar1;
  }
  state->owner = 0;
  if ((((ent->v).owner != (edict_t *)0x0) &&
      (iVar1 = (*g_engfuncs.pfnIndexOfEdict)((ent->v).owner), 0 < iVar1)) &&
     (iVar1 <= gpGlobals->maxClients)) {
    state->owner = iVar1;
  }
  if (player == 0) {
    state->iuser4 = (ent->v).iuser4;
    state->playerclass = (ent->v).playerclass;
  }
  else {
    pvVar4 = (ent->v).basevelocity;
    pvVar6 = state->basevelocity;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    pvVar4 = (ent->v).velocity;
    pvVar6 = state->velocity;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    iVar1 = (*g_engfuncs.pfnModelIndex)(gpGlobals->pStringBase + (ent->v).weaponmodel);
    state->weaponmodel = iVar1;
    state->gaitsequence = (ent->v).gaitsequence;
    state->spectator = (ent->v).flags & 0x4000000;
    state->friction = (ent->v).friction;
    state->gravity = (ent->v).gravity;
    state->usehull = (uint)(ent->v).flags >> 0xe & 1;
    state->health = (int)ROUND((ent->v).health);
    state->iuser4 = (ent->v).iuser4;
  }
  return 1;
}

/* 000af81c  CreateBaseline  (474 bytes)
 * void CreateBaseline(int player, int eindex, entity_state_s * baseline, edict_s * entity, int playermodelindex, vec3_t player_mins, vec3_t player_maxs)
 */
/* CreateBaseline(int, int, entity_state_s *, edict_s *, int, Vector, Vector) */

void CreateBaseline(int player,int eindex,entity_state_s *baseline,edict_s *entity,
                   int playermodelindex,vec3_t player_mins,vec3_t player_maxs)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  pvVar2 = (entity->v).origin;
  pvVar3 = baseline->origin;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pvVar2 = (entity->v).angles;
  pvVar3 = baseline->angles;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  baseline->frame = (entity->v).frame;
  baseline->skin = (short)(entity->v).skin;
  baseline->rendermode = (uint)(byte)(entity->v).rendermode;
  baseline->renderamt = (uint)(byte)(short)ROUND((entity->v).renderamt);
  (baseline->rendercolor).r = (byte_conflict)(short)ROUND((entity->v).rendercolor[0]);
  (baseline->rendercolor).g = (byte_conflict)(short)ROUND((entity->v).rendercolor[1]);
  (baseline->rendercolor).b = (byte_conflict)(short)ROUND((entity->v).rendercolor[2]);
  baseline->renderfx = (uint)(byte)(entity->v).renderfx;
  if (player == 0) {
    pvVar2 = (entity->v).mins;
    pvVar3 = baseline->mins;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar3 = *pvVar2;
      pvVar2 = pvVar2 + 1;
      pvVar3 = pvVar3 + 1;
    }
    pvVar2 = (entity->v).maxs;
    pvVar3 = baseline->maxs;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar3 = *pvVar2;
      pvVar2 = pvVar2 + 1;
      pvVar3 = pvVar3 + 1;
    }
    baseline->colormap = 0;
    baseline->modelindex = (entity->v).modelindex;
    baseline->movetype = (entity->v).movetype;
    baseline->scale = (entity->v).scale;
    baseline->solid = (short)(entity->v).solid;
    baseline->framerate = (entity->v).framerate;
    baseline->gravity = (entity->v).gravity;
  }
  else {
    pvVar2 = baseline->mins;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar2 = *(vec_t *)player_mins[0];
      player_mins[0] = (vec_t)((int)player_mins[0] + 4);
      pvVar2 = pvVar2 + 1;
    }
    pvVar2 = baseline->maxs;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar2 = *(vec_t *)player_mins[1];
      player_mins[1] = (vec_t)((int)player_mins[1] + 4);
      pvVar2 = pvVar2 + 1;
    }
    baseline->colormap = eindex;
    baseline->modelindex = playermodelindex;
    baseline->friction = 1.0;
    baseline->movetype = 3;
    baseline->scale = (entity->v).scale;
    baseline->solid = 3;
    baseline->framerate = 1.0;
    baseline->gravity = 1.0;
  }
  return;
}

/* 000af9fc  Entity_FieldInit  (166 bytes)
 * undefined Entity_FieldInit(undefined4 param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Entity_FieldInit(delta_s *) */

void Entity_FieldInit(delta_s *param_1)

{
  _DAT_00116380 = (*g_engfuncs.pfnDeltaFindField)(param_1,entity_field_alias);
  _DAT_001163a4 = (*g_engfuncs.pfnDeltaFindField)(param_1,&DAT_00116384);
  _DAT_001163c8 = (*g_engfuncs.pfnDeltaFindField)(param_1,&DAT_001163a8);
  _DAT_001163ec = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_0__001163cc);
  _DAT_00116410 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_1__001163f0);
  _DAT_00116434 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_2__00116414);
  return;
}

/* 000afaa4  Entity_Encode  (432 bytes)
 * undefined Entity_Encode(undefined4 param_1, int param_2, int param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Entity_Encode(delta_s *, unsigned char const *, unsigned char const *) */

void Entity_Encode(delta_s *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (initialized_1323 == 0) {
    Entity_FieldInit(param_1);
    initialized_1323 = 1;
  }
  iVar1 = (*g_engfuncs.pfnGetCurrentPlayer)();
  if (*(int *)(param_3 + 4) + -1 == iVar1) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116380);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163a4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163c8);
  }
  if ((*(float *)(param_3 + 0xfc) != 0.0) && (*(float *)(param_3 + 0x100) != 0.0)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116380);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163a4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163c8);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163ec);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116410);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116434);
  }
  if ((*(int *)(param_3 + 0x58) == 0xc) && (*(int *)(param_3 + 0x94) != 0)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116380);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163a4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163c8);
  }
  else if (*(int *)(param_3 + 0x94) != *(int *)(param_2 + 0x94)) {
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,_DAT_00116380);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,_DAT_001163a4);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,_DAT_001163c8);
  }
  return;
}

/* 000afc58  Player_FieldInit  (100 bytes)
 * undefined Player_FieldInit(undefined4 param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Player_FieldInit(delta_s *) */

void Player_FieldInit(delta_s *param_1)

{
  _DAT_00116460 = (*g_engfuncs.pfnDeltaFindField)(param_1,player_field_alias);
  _DAT_00116484 = (*g_engfuncs.pfnDeltaFindField)(param_1,&DAT_00116464);
  _DAT_001164a8 = (*g_engfuncs.pfnDeltaFindField)(param_1,&DAT_00116488);
  return;
}

/* 000afcbc  Player_Encode  (291 bytes)
 * undefined Player_Encode(undefined4 param_1, int param_2, int param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Player_Encode(delta_s *, unsigned char const *, unsigned char const *) */

void Player_Encode(delta_s *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (initialized_1330 == 0) {
    Player_FieldInit(param_1);
    initialized_1330 = 1;
  }
  iVar1 = (*g_engfuncs.pfnGetCurrentPlayer)();
  if (*(int *)(param_3 + 4) + -1 == iVar1) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116380);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163a4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163c8);
  }
  if ((*(int *)(param_3 + 0x58) == 0xc) && (*(int *)(param_3 + 0x94) != 0)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116380);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163a4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001163c8);
  }
  else if (*(int *)(param_3 + 0x94) != *(int *)(param_2 + 0x94)) {
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,_DAT_00116380);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,_DAT_001163a4);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,_DAT_001163c8);
  }
  return;
}

/* 000afde0  Custom_Entity_FieldInit  (226 bytes)
 * undefined Custom_Entity_FieldInit(undefined4 param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Custom_Entity_FieldInit(delta_s *) */

void Custom_Entity_FieldInit(delta_s *param_1)

{
  _DAT_001164e0 = (*g_engfuncs.pfnDeltaFindField)(param_1,custom_entity_field_alias);
  _DAT_00116504 = (*g_engfuncs.pfnDeltaFindField)(param_1,&DAT_001164e4);
  _DAT_00116528 = (*g_engfuncs.pfnDeltaFindField)(param_1,&DAT_00116508);
  _DAT_0011654c = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_0__0011652c);
  _DAT_00116570 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_1__00116550);
  _DAT_00116594 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_2__00116574);
  _DAT_001165b8 = (*g_engfuncs.pfnDeltaFindField)(param_1,&DAT_00116598);
  _DAT_001165dc = (*g_engfuncs.pfnDeltaFindField)(param_1,s_sequence_001165bc);
  _DAT_00116600 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_animtime_001165e0);
  return;
}

/* 000afec4  Custom_Encode  (389 bytes)
 * undefined Custom_Encode(undefined4 param_1, int param_2, int param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Custom_Encode(delta_s *, unsigned char const *, unsigned char const *) */

void Custom_Encode(delta_s *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (initialized_1337 == 0) {
    Custom_Entity_FieldInit(param_1);
    initialized_1337 = 1;
  }
  uVar1 = *(uint *)(param_3 + 0x48) & 0xf;
  if (1 < uVar1) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001164e0);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116504);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116528);
  }
  if (uVar1 != 0) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_0011654c);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116570);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116594);
  }
  if (1 < uVar1 - 1) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001165b8);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_001165dc);
  }
  if ((int)ROUND(*(float *)(param_2 + 0x5c)) == (int)ROUND(*(float *)(param_3 + 0x5c))) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,_DAT_00116600);
  }
  return;
}

/* 000b004c  RegisterEncoders  (95 bytes)
 * void RegisterEncoders(void)
 */
/* RegisterEncoders(void) */

void RegisterEncoders(void)

{
  (*g_engfuncs.pfnDeltaAddEncoder)("Entity_Encode",Entity_Encode);
  (*g_engfuncs.pfnDeltaAddEncoder)("Custom_Encode",Custom_Encode);
  (*g_engfuncs.pfnDeltaAddEncoder)("Player_Encode",Player_Encode);
  return;
}

/* 000b00ac  GetWeaponData  (487 bytes)
 * int GetWeaponData(edict_s * player, weapon_data_s * info)
 */
/* GetWeaponData(edict_s *, weapon_data_s *) */

int GetWeaponData(edict_s *player,weapon_data_s *info)

{
  float fVar1;
  edict_t *peVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  weapon_data_s *pwVar7;
  undefined4 *puVar8;
  int local_5c;
  int local_54;
  undefined4 local_4c [8];
  uint local_2c;
  
  peVar2 = (player->v).pContainingEntity;
  if (peVar2 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar6 = (void *)0x0;
  if (peVar2 != (edict_t *)0x0) {
    pvVar6 = peVar2->pvPrivateData;
  }
  pwVar7 = info;
  for (iVar5 = 0x2c0; iVar5 != 0; iVar5 = iVar5 + -1) {
    pwVar7->m_iId = 0;
    pwVar7 = (weapon_data_s *)&pwVar7->m_iClip;
  }
  local_54 = 0;
  local_5c = 0x9f0;
  if (pvVar6 != (void *)0x0) {
    do {
      if (*(int *)((int)pvVar6 + local_5c + 8) != 0) {
        iVar5 = *(int *)((int)pvVar6 + local_5c + 8);
        do {
          piVar3 = (int *)(**(code **)(*(int *)(iVar5 + 0x60) + 0x158))(iVar5);
          if ((piVar3 != (int *)0x0) &&
             (iVar4 = (**(code **)(piVar3[0x18] + 0x198))(piVar3), iVar4 != 0)) {
            puVar8 = local_4c;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            (**(code **)(piVar3[0x18] + 0x120))(piVar3,local_4c);
            if (local_2c < 0x20) {
              pwVar7 = info + local_2c;
              pwVar7->m_iId = local_2c;
              pwVar7->m_iClip = piVar3[0x2d];
              fVar1 = (float)piVar3[0x2a];
              if (fVar1 < -0.001) {
                fVar1 = -0.001;
              }
              pwVar7->m_flTimeWeaponIdle = fVar1;
              fVar1 = (float)piVar3[0x27];
              if (fVar1 < -0.001) {
                fVar1 = -0.001;
              }
              pwVar7->m_flNextPrimaryAttack = fVar1;
              fVar1 = (float)piVar3[0x28];
              if (fVar1 < -0.001) {
                fVar1 = -0.001;
              }
              pwVar7->m_flNextSecondaryAttack = fVar1;
              pwVar7->m_fInReload = piVar3[0x30];
              pwVar7->m_fInSpecialReload = piVar3[0x26];
              fVar1 = *(float *)(*piVar3 + 0x254);
              if (fVar1 < -0.001) {
                fVar1 = -0.001;
              }
              pwVar7->fuser1 = fVar1;
              pwVar7->fuser2 = (float)piVar3[0x13];
              pwVar7->fuser3 = (float)piVar3[0x14];
              pwVar7->iuser1 = piVar3[0x15];
              pwVar7->iuser2 = piVar3[0x16];
              pwVar7->iuser3 = piVar3[0x17];
            }
          }
          iVar5 = *(int *)(iVar5 + 0x84);
        } while (iVar5 != 0);
      }
      local_5c = local_5c + 4;
      local_54 = local_54 + 1;
    } while (local_54 < 6);
  }
  return 1;
}

/* 000b0294  UpdateClientData  (998 bytes)
 * void UpdateClientData(edict_s * ent, int sendweapons, clientdata_s * cd)
 */
/* UpdateClientData(edict_s const *, int, clientdata_s *) */

void UpdateClientData(edict_s *ent,int sendweapons,clientdata_s *cd)

{
  int iVar1;
  char *__src;
  edict_t *peVar2;
  int iVar3;
  void *pvVar4;
  vec_t *pvVar5;
  clientdata_s *pcVar6;
  vec_t *pvVar7;
  undefined4 *puVar8;
  undefined2 in_FPUControlWord;
  undefined4 local_5c [8];
  int local_3c;
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  cd->flags = (ent->v).flags;
  cd->health = (ent->v).health;
  iVar1 = (*g_engfuncs.pfnModelIndex)(gpGlobals->pStringBase + (ent->v).viewmodel);
  cd->viewmodel = iVar1;
  cd->waterlevel = (ent->v).waterlevel;
  cd->watertype = (ent->v).watertype;
  cd->weapons = (ent->v).weapons;
  pvVar5 = (ent->v).origin;
  pcVar6 = cd;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar6->origin[0] = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pcVar6 = (clientdata_s *)(pcVar6->origin + 1);
  }
  pvVar5 = (ent->v).velocity;
  pvVar7 = cd->velocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar7 = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pvVar7 = pvVar7 + 1;
  }
  pvVar5 = (ent->v).view_ofs;
  pvVar7 = cd->view_ofs;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar7 = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pvVar7 = pvVar7 + 1;
  }
  pvVar5 = (ent->v).punchangle;
  pvVar7 = cd->punchangle;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar7 = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pvVar7 = pvVar7 + 1;
  }
  cd->bInDuck = (ent->v).bInDuck;
  cd->flTimeStepSound = (ent->v).flTimeStepSound;
  cd->flDuckTime = (ent->v).flDuckTime;
  cd->flSwimTime = (ent->v).flSwimTime;
  _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
  local_24 = (int)ROUND((ent->v).teleport_time);
  cd->waterjumptime = local_24;
  __src = (*g_engfuncs.pfnGetPhysicsInfoString)(ent);
  strcpy(cd->physinfo,__src);
  cd->maxspeed = (ent->v).maxspeed;
  cd->fov = (ent->v).fov;
  cd->weaponanim = (ent->v).weaponanim;
  cd->pushmsec = (ent->v).pushmsec;
  cd->fuser1 = (ent->v).fuser1;
  cd->iuser4 = (ent->v).iuser4;
  cd->iuser1 = (ent->v).iuser1;
  cd->iuser2 = (ent->v).iuser2;
  cd->vuser3[0] = 0.0;
  if (sendweapons == 0) {
    return;
  }
  peVar2 = (ent->v).pContainingEntity;
  if (peVar2 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar4 = (void *)0x0;
  if (peVar2 != (edict_t *)0x0) {
    pvVar4 = peVar2->pvPrivateData;
  }
  if (pvVar4 == (void *)0x0) {
    return;
  }
  cd->m_flNextAttack = *(float *)((int)pvVar4 + 300);
  cd->vuser1[1] = (float)*(int *)((int)pvVar4 + 0x724);
  cd->ammo_shells = 0;
  cd->ammo_rockets = *(int *)((int)pvVar4 + 0x3c);
  cd->ammo_cells = *(int *)((int)pvVar4 + 0x40);
  cd->vuser3[0] = 0.0;
  if (*(int *)((int)pvVar4 + 0xa10) == 0) {
    return;
  }
  iVar1 = (**(code **)(*(int *)(*(int *)((int)pvVar4 + 0xa10) + 0x60) + 0x158))
                    (*(int *)((int)pvVar4 + 0xa10));
  if (iVar1 == 0) {
    return;
  }
  iVar3 = (**(code **)(*(int *)(iVar1 + 0x60) + 0x198))(iVar1);
  if (iVar3 == 0) {
    return;
  }
  puVar8 = local_5c;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  (**(code **)(*(int *)(iVar1 + 0x60) + 0x120))(iVar1,local_5c);
  cd->m_iId = local_3c;
  cd->vuser3[0] = 0.0;
  if (local_3c != 0x10) {
    return;
  }
  cd->vuser3[0] = (float)*(int *)(iVar1 + 200);
  if (*(int *)(iVar1 + 0xcc) == 0) {
    cd->vuser3[1] = (float)*(int *)(iVar1 + 0xa00);
    cd->vuser3[2] = (float)*(int *)(iVar1 + 0x9fc);
    return;
  }
  cd->vuser3[1] = (float)*(byte *)(*(int *)(iVar1 + 0xcc) + 2);
  cd->vuser3[2] = (float)*(int *)(*(int *)(iVar1 + 0xcc) + 0x10);
  cd->vuser4[0] = (float)*(byte *)(*(int *)(iVar1 + 0xcc) + 0x24);
  cd->vuser4[1] = (float)*(int *)(*(int *)(iVar1 + 0xcc) + 4);
  cd->ammo_nails = *(int *)(*(int *)(iVar1 + 0xcc) + 0x1c);
  if (*(int *)(iVar1 + 0xd0) != 0) {
    if (*(int *)(*(int *)(iVar1 + 0xd0) + 200) == -1) {
      if ((*(int *)(*(int *)(iVar1 + 0xd0) + 0xcc) == -1) ||
         (iVar3 = *(int *)(*(int *)(iVar1 + 0xd0) + 0xcc), iVar3 == *(int *)(iVar1 + 200)))
      goto LAB_000b05fc;
      iVar3 = *(int *)(iVar1 + 0x118 + iVar3 * 0x38);
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x118 + *(int *)(*(int *)(iVar1 + 0xd0) + 200) * 0x38);
    }
    cd->ammo_shells = iVar3;
  }
LAB_000b05fc:
  cd->vuser4[2] = (float)*(int *)(*(int *)(iVar1 + 0xcc) + 0xc);
  cd->vuser2[0] = (float)*(int *)(*(int *)(iVar1 + 0xcc) + 8);
  cd->vuser2[1] = (float)*(int *)(iVar1 + 0xd4 + (uint)*(byte *)(*(int *)(iVar1 + 0xd0) + 8) * 4);
  cd->vuser2[2] = (float)*(byte *)(*(int *)(iVar1 + 0xcc) + 0x2c);
  cd->vuser1[2] = (float)*(int *)(*(int *)(iVar1 + 0xcc) + 0x14);
  return;
}

/* 000b067c  CmdStart  (120 bytes)
 * void CmdStart(edict_t * player, usercmd_s * cmd, uint random_seed)
 */
/* CmdStart(edict_s const *, usercmd_s const *, unsigned int) */

void CmdStart(edict_t *player,usercmd_s *cmd,uint random_seed)

{
  edict_t *peVar1;
  int *piVar2;
  
  peVar1 = (player->v).pContainingEntity;
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  piVar2 = (int *)0x0;
  if (peVar1 != (edict_t *)0x0) {
    piVar2 = peVar1->pvPrivateData;
  }
  if (piVar2 != (int *)0x0) {
    if (*(int *)(*piVar2 + 0x240) != 0) {
      UTIL_SetGroupTrace(*(undefined4 *)(*piVar2 + 0x240),0);
    }
    piVar2[0x1fb] = random_seed;
  }
  return;
}

/* 000b06f4  CmdEnd  (90 bytes)
 * void CmdEnd(edict_t * player)
 */
/* CmdEnd(edict_s const *) */

void CmdEnd(edict_t *player)

{
  edict_t *peVar1;
  int *piVar2;
  
  peVar1 = (player->v).pContainingEntity;
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  piVar2 = (int *)0x0;
  if (peVar1 != (edict_t *)0x0) {
    piVar2 = peVar1->pvPrivateData;
  }
  if ((piVar2 != (int *)0x0) && (*(int *)(*piVar2 + 0x240) != 0)) {
    UTIL_UnsetGroupTrace();
  }
  return;
}

/* 000b0750  ConnectionlessPacket  (16 bytes)
 * int ConnectionlessPacket(netadr_s * net_from, char * args, char * response_buffer, int * response_buffer_size)
 */
/* ConnectionlessPacket(netadr_s const *, char const *, char *, int *) */

int ConnectionlessPacket
              (netadr_s *net_from,char *args,char *response_buffer,int *response_buffer_size)

{
  *response_buffer_size = 0;
  return 0;
}

/* 000b0760  GetHullBounds  (174 bytes)
 * int GetHullBounds(int hullnumber, float * mins, float * maxs)
 */
/* GetHullBounds(int, float *, float *) */

int GetHullBounds(int hullnumber,float *mins,float *maxs)

{
  if (hullnumber != 1) {
    if (hullnumber < 2) {
      if (hullnumber != 0) {
        return 0;
      }
    }
    else if (hullnumber != 2) {
      return 0;
    }
  }
  return 1;
}

/* 000b0810  CreateInstancedBaselines  (30 bytes)
 * void CreateInstancedBaselines(void)
 */
/* CreateInstancedBaselines(void) */

void CreateInstancedBaselines(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_16c [90];
  
  puVar2 = auStack_16c;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 000b0830  InconsistentFile  (97 bytes)
 * int InconsistentFile(edict_s * player, char * filename, char * disconnect_message)
 */
/* InconsistentFile(edict_s const *, char const *, char *) */

int InconsistentFile(edict_s *player,char *filename,char *disconnect_message)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("mp_consistency");
  if (lVar1 == (longdouble)1.0) {
    sprintf(disconnect_message,"Server is enforcing file consistency for %s\n",filename);
  }
  return (uint)(lVar1 == (longdouble)1.0);
}

/* 000b0894  AllowLagCompensation  (6 bytes)
 * int AllowLagCompensation(void)
 */
/* AllowLagCompensation(void) */

int AllowLagCompensation(void)

{
  return 1;
}

/* 000b2d64  RadiusDamage  (861 bytes)
 * undefined RadiusDamage(int param_1, undefined4 param_2, undefined4 param_3, float param_4, float param_5)
 */
/* RadiusDamage(Vector, entvars_s *, entvars_s *, float, float, int, int) */

void RadiusDamage(int param_1,undefined4 param_2,int param_3,float param_4,float param_5)

{
  code *pcVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float **ppfVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int aiStackY_d4 [6];
  undefined4 local_b0;
  float *local_ac;
  float local_a8 [9];
  float local_84 [10];
  int local_5c [3];
  float local_50 [8];
  int local_30 [8];
  
  local_b0 = 0xb2d73;
  piVar9 = (int *)0x0;
  if (param_5 == 0.0) {
    local_a8[1] = 1.0;
  }
  else {
    local_a8[1] = param_4 / param_5;
  }
  iVar7 = UTIL_PointContents(param_1);
  local_a8[0] = (float)(uint)(iVar7 == -3);
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + 1.0;
  local_ac = local_84 + 2;
  ppfVar6 = &local_ac;
LAB_000b3096:
  do {
    puVar8 = ppfVar6;
    puVar8[-2] = puVar8[0x30];
    puVar8[-3] = puVar8[0x2c];
    puVar8[-4] = piVar9;
    puVar8[-5] = 0xb30ad;
    piVar9 = (int *)UTIL_FindEntityInSphere((int *)puVar8[-4],puVar8[-3],puVar8[-2]);
    if (piVar9 == (int *)0x0) {
      return;
    }
    ppfVar6 = (float **)puVar8;
  } while (*(float *)(*piVar9 + 0x16c) == 0.0);
  if (puVar8[0x31] != 0) goto code_r0x000b2e28;
  goto LAB_000b2e42;
code_r0x000b2e28:
  iVar7 = piVar9[0x18];
  puVar8[-4] = piVar9;
  pcVar1 = *(code **)(iVar7 + 0x4c);
  puVar8[-5] = 0xb2e32;
  iVar7 = (*pcVar1)();
  if (iVar7 != puVar8[0x31]) {
LAB_000b2e42:
    if (((puVar8[1] == 0) || (*(int *)(*piVar9 + 0x1c0) != 0)) &&
       ((puVar8[1] != 0 || (*(int *)(*piVar9 + 0x1c0) != 3)))) {
      iVar7 = piVar9[0x18];
      puVar8[-2] = puVar8[0x2c];
      puVar8[-3] = piVar9;
      puVar8[-4] = *puVar8;
      pcVar1 = *(code **)(iVar7 + 0x104);
      puVar8[-5] = 0xb2e88;
      (*pcVar1)();
      puVar10 = (undefined4 *)puVar8[-1];
      puVar11 = puVar8 + 0xf;
      for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar8[-5] = puVar8 + 0x13;
      puVar8[-6] = *(undefined4 *)(puVar8[0x2c] + 0x208);
      puVar8[-7] = 0;
      puVar8[-8] = puVar8 + 0xf;
      puVar8[-9] = puVar8[0x2b];
      puVar8[-10] = 0xb2ec0;
      UTIL_TraceLine(puVar8[-9],puVar8[-8],puVar8[-7],puVar8[-6],puVar8[-5]);
      if (((float)puVar8[0x17] == 1.0) ||
         (ppfVar6 = (float **)(puVar8 + -1), puVar8[0x1f] == *(int *)(*piVar9 + 0x208))) {
        if (puVar8[0x14] != 0) {
          puVar10 = (undefined4 *)puVar8[0x2b];
          puVar11 = puVar8 + 0x18;
          for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar8[0x17] = 0;
        }
        pfVar2 = (float *)puVar8[0x2b];
        fVar3 = *pfVar2 - (float)puVar8[0x18];
        fVar5 = pfVar2[1] - (float)puVar8[0x19];
        fVar4 = pfVar2[2] - (float)puVar8[0x1a];
        puVar8[0xb] = fVar3;
        puVar8[0xc] = fVar5;
        puVar8[0xd] = fVar4;
        puVar8[10] = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
        puVar8[2] = (float)puVar8[0x2e] - (float)puVar8[10] * (float)puVar8[1];
        if ((float)puVar8[0x2e] - (float)puVar8[10] * (float)puVar8[1] < 0.0) {
          puVar8[2] = 0;
        }
        if ((float)puVar8[0x17] == 1.0) {
          iVar7 = piVar9[0x18];
          puVar8[-5] = puVar8[0x31];
          puVar8[-6] = puVar8[2];
          puVar8[-7] = puVar8[0x2d];
          puVar8[-8] = puVar8[0x2c];
          puVar8[-9] = piVar9;
          pcVar1 = *(code **)(iVar7 + 0x58);
          puVar8[-10] = 0xb3093;
          (*pcVar1)();
          ppfVar6 = (float **)(puVar8 + -1);
        }
        else {
          puVar8[-2] = 0xb2f96;
          ClearMultiDamage();
          pfVar2 = (float *)puVar8[0x2b];
          fVar3 = (float)puVar8[0x18] - *pfVar2;
          fVar5 = (float)puVar8[0x19] - pfVar2[1];
          fVar4 = (float)puVar8[0x1a] - pfVar2[2];
          puVar8[3] = fVar3;
          puVar8[4] = fVar5;
          puVar8[5] = fVar4;
          puVar8[10] = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
          if ((float)puVar8[10] == 0.0) {
            puVar8[0xb] = 0;
            puVar8[0xc] = 0;
            puVar8[0xd] = 0x3f800000;
          }
          else {
            fVar3 = 1.0 / (float)puVar8[10];
            puVar8[0xb] = fVar3 * (float)puVar8[3];
            puVar8[0xc] = fVar3 * (float)puVar8[4];
            puVar8[0xd] = fVar3 * (float)puVar8[5];
          }
          iVar7 = piVar9[0x18];
          puVar8[-4] = puVar8[0x31];
          puVar8[-5] = puVar8 + 0x13;
          puVar8[-6] = puVar8[-1];
          puVar8[-7] = puVar8[2];
          puVar8[-8] = puVar8[0x2c];
          puVar8[-9] = piVar9;
          pcVar1 = *(code **)(iVar7 + 0x54);
          puVar8[-10] = 0xb3055;
          (*pcVar1)();
          puVar8[-4] = puVar8[0x2d];
          puVar8[-5] = puVar8[0x2c];
          puVar8[-6] = 0xb306b;
          ApplyMultiDamage(puVar8[-5],puVar8[-4]);
          ppfVar6 = (float **)(puVar8 + -1);
        }
      }
    }
  }
  goto LAB_000b3096;
}

/* 000b4ddc  GetClassPtr<CGib>  (131 bytes)
 * CGib * GetClassPtr<CGib>(uint param_1)
 */
/* CGib * GetClassPtr<CGib>(CGib *) */

CGib * GetClassPtr<CGib>(uint param_1)

{
  edict_t *peVar1;
  CGib *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGib *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGib *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x74);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CGib_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000b4e60  CGib_type_info_function  (70 bytes)
 * undefined4 * CGib_type_info_function(void)
 */
/* CGib type_info function */

undefined4 * CGib_type_info_function(void)

{
  if (CGib_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CGib_type_info_node,"4CGib",&CBaseEntity_type_info_node);
  }
  return &CGib_type_info_node;
}

/* 000b4f50  PlayLockSounds  (585 bytes)
 * undefined PlayLockSounds(int param_1, int * param_2, int param_3, int param_4)
 */
/* PlayLockSounds(entvars_s *, locksounds *, int, int) */

void PlayLockSounds(int param_1,int *param_2,int param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (param_4 == 0) {
    fVar1 = 3.0;
  }
  else {
    fVar1 = 0.5;
  }
  if (param_3 == 0) {
    bVar3 = false;
    if ((param_2[2] != 0) && ((float)param_2[6] < gpGlobals->time)) {
      bVar3 = true;
    }
    bVar4 = false;
    if (((param_2[3] != 0) && (*(char *)((int)param_2 + 0x21) == '\0')) &&
       ((float)param_2[7] < gpGlobals->time)) {
      bVar4 = true;
    }
    if ((bVar3) && (bVar4)) {
      uVar6 = 0x3e800000;
    }
    else {
      uVar6 = 0x3f800000;
    }
    if (bVar3) {
      EMIT_SOUND_DYN(*(int *)(param_1 + 0x208),3,gpGlobals->pStringBase + param_2[2],uVar6,
                     0x3f4ccccd,0,100,0.5);
      param_2[6] = (int)(fVar1 + gpGlobals->time);
    }
    if (!bVar4) {
      return;
    }
    uVar2 = param_2[5];
    uVar5 = SENTENCEG_PlaySequentialSz
                      (*(int *)(param_1 + 0x208),gpGlobals->pStringBase + param_2[3],0x3f59999a,
                       0x3f4ccccd,0,100,param_2[5],0);
    param_2[5] = uVar5;
    param_2[4] = 0;
    *(bool *)((int)param_2 + 0x21) = uVar2 == uVar5;
  }
  else {
    bVar3 = false;
    if ((*param_2 != 0) && ((float)param_2[6] < gpGlobals->time)) {
      bVar3 = true;
    }
    bVar4 = false;
    if (((param_2[1] != 0) && ((char)param_2[8] == '\0')) && ((float)param_2[7] < gpGlobals->time))
    {
      bVar4 = true;
    }
    if ((bVar3) && (bVar4)) {
      uVar6 = 0x3e800000;
    }
    else {
      uVar6 = 0x3f800000;
    }
    if (bVar3) {
      EMIT_SOUND_DYN(*(int *)(param_1 + 0x208),3,gpGlobals->pStringBase + *param_2,uVar6,0x3f4ccccd,
                     0,100,0.5);
      param_2[6] = (int)(fVar1 + gpGlobals->time);
    }
    if (!bVar4) {
      return;
    }
    uVar2 = param_2[4];
    uVar5 = SENTENCEG_PlaySequentialSz
                      (*(int *)(param_1 + 0x208),gpGlobals->pStringBase + param_2[1],0x3f59999a,
                       0x3f4ccccd,0,100,param_2[4],0);
    param_2[4] = uVar5;
    param_2[5] = 0;
    *(bool *)(param_2 + 8) = uVar2 == uVar5;
  }
  param_2[7] = (int)(gpGlobals->time + 6.0);
  return;
}

/* 000b55bc  func_door  (33 bytes)
 * undefined func_door(uint param_1)
 */
void func_door(uint param_1)

{
  GetClassPtr<CBaseDoor>(param_1);
  return;
}

/* 000b55e0  func_water  (33 bytes)
 * undefined func_water(uint param_1)
 */
void func_water(uint param_1)

{
  GetClassPtr<CBaseDoor>(param_1);
  return;
}

/* 000b7814  func_door_rotating  (33 bytes)
 * undefined func_door_rotating(uint param_1)
 */
void func_door_rotating(uint param_1)

{
  GetClassPtr<CRotDoor>(param_1);
  return;
}

/* 000b7d74  momentary_door  (33 bytes)
 * undefined momentary_door(uint param_1)
 */
void momentary_door(uint param_1)

{
  GetClassPtr<CMomentaryDoor>(param_1);
  return;
}

/* 000b8414  GetClassPtr<CBaseDoor>  (178 bytes)
 * CBaseDoor * GetClassPtr<CBaseDoor>(uint param_1)
 */
/* CBaseDoor * GetClassPtr<CBaseDoor>(CBaseDoor *) */

CBaseDoor * GetClassPtr<CBaseDoor>(uint param_1)

{
  edict_t *peVar1;
  CBaseDoor *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBaseDoor *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBaseDoor *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x168)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseDoor_virtual_table;
    EHANDLE::operator=((EHANDLE *)&pCVar2->field_0x104,(int *)0x0);
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000b84c8  GetClassPtr<CRotDoor>  (206 bytes)
 * CRotDoor * GetClassPtr<CRotDoor>(uint param_1)
 */
/* CRotDoor * GetClassPtr<CRotDoor>(CRotDoor *) */

CRotDoor * GetClassPtr<CRotDoor>(uint param_1)

{
  edict_t *peVar1;
  CRotDoor *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CRotDoor *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CRotDoor *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x168)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseDoor_virtual_table;
    EHANDLE::operator=((EHANDLE *)&pCVar2->field_0x104,(int *)0x0);
    pCVar2->vtable = (void **)CRotDoor_virtual_table;
    EHANDLE::operator=((EHANDLE *)&pCVar2->field_0x104,(int *)0x0);
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000b8598  GetClassPtr<CMomentaryDoor>  (161 bytes)
 * CMomentaryDoor * GetClassPtr<CMomentaryDoor>(uint param_1)
 */
/* CMomentaryDoor * GetClassPtr<CMomentaryDoor>(CMomentaryDoor *) */

CMomentaryDoor * GetClassPtr<CMomentaryDoor>(uint param_1)

{
  edict_t *peVar1;
  CMomentaryDoor *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CMomentaryDoor *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CMomentaryDoor *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x108)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CMomentaryDoor_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000b863c  CBaseDoor_type_info_function  (70 bytes)
 * undefined4 * CBaseDoor_type_info_function(void)
 */
/* CBaseDoor type_info function */

undefined4 * CBaseDoor_type_info_function(void)

{
  if (CBaseDoor_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CBaseDoor_type_info_node,"9CBaseDoor",&CBaseToggle_type_info_node);
  }
  return &CBaseDoor_type_info_node;
}

/* 000b86f8  CRotDoor_type_info_function  (70 bytes)
 * undefined4 * CRotDoor_type_info_function(void)
 */
/* CRotDoor type_info function */

undefined4 * CRotDoor_type_info_function(void)

{
  if (CRotDoor_type_info_node == 0) {
    CBaseDoor_type_info_function();
    __rtti_si(&CRotDoor_type_info_node,"8CRotDoor",&CBaseDoor_type_info_node);
  }
  return &CRotDoor_type_info_node;
}

/* 000b87ac  CMomentaryDoor_type_info_function  (70 bytes)
 * undefined4 * CMomentaryDoor_type_info_function(void)
 */
/* CMomentaryDoor type_info function */

undefined4 * CMomentaryDoor_type_info_function(void)

{
  if (CMomentaryDoor_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CMomentaryDoor_type_info_node,"14CMomentaryDoor",&CBaseToggle_type_info_node);
  }
  return &CMomentaryDoor_type_info_node;
}

/* 000b87fc  info_target  (33 bytes)
 * undefined info_target(uint param_1)
 */
void info_target(uint param_1)

{
  GetClassPtr<CPointEntity>(param_1);
  return;
}

/* 000b8820  env_bubbles  (33 bytes)
 * undefined env_bubbles(uint param_1)
 */
void env_bubbles(uint param_1)

{
  GetClassPtr<CBubbling>(param_1);
  return;
}

/* 000b8c90  beam  (33 bytes)
 * undefined beam(uint param_1)
 */
void beam(uint param_1)

{
  GetClassPtr<CBeam>(param_1);
  return;
}

/* 000b9498  env_lightning  (33 bytes)
 * undefined env_lightning(uint param_1)
 */
void env_lightning(uint param_1)

{
  GetClassPtr<CLightning>(param_1);
  return;
}

/* 000b94bc  env_beam  (33 bytes)
 * undefined env_beam(uint param_1)
 */
void env_beam(uint param_1)

{
  GetClassPtr<CLightning>(param_1);
  return;
}

/* 000b9bdc  IsPointEntity  (153 bytes)
 * undefined4 IsPointEntity(int * param_1)
 */
/* IsPointEntity(CBaseEntity *) */

undefined4 IsPointEntity(int *param_1)

{
  globalvars_t *pgVar1;
  int iVar2;
  
  pgVar1 = gpGlobals;
  if ((((*(int *)(*param_1 + 0xb4) != 0) &&
       (iVar2 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"info_target"), iVar2 != 0)) &&
      (iVar2 = strcmp(pgVar1->pStringBase + *(int *)*param_1,"info_landmark"), iVar2 != 0)) &&
     (iVar2 = strcmp(pgVar1->pStringBase + *(int *)*param_1,"path_corner"), iVar2 != 0)) {
    return 0;
  }
  return 1;
}

/* 000bb040  env_laser  (33 bytes)
 * undefined env_laser(uint param_1)
 */
void env_laser(uint param_1)

{
  GetClassPtr<CLaser>(param_1);
  return;
}

/* 000bb7f4  env_glow  (33 bytes)
 * undefined env_glow(uint param_1)
 */
void env_glow(uint param_1)

{
  GetClassPtr<CGlow>(param_1);
  return;
}

/* 000bba50  env_sprite  (33 bytes)
 * undefined env_sprite(uint param_1)
 */
void env_sprite(uint param_1)

{
  GetClassPtr<CSprite>(param_1);
  return;
}

/* 000bc1a0  gibshooter  (33 bytes)
 * undefined gibshooter(uint param_1)
 */
void gibshooter(uint param_1)

{
  GetClassPtr<CGibShooter>(param_1);
  return;
}

/* 000bc90c  env_shooter  (33 bytes)
 * undefined env_shooter(uint param_1)
 */
void env_shooter(uint param_1)

{
  GetClassPtr<CEnvShooter>(param_1);
  return;
}

/* 000bcba4  test_effect  (33 bytes)
 * undefined test_effect(uint param_1)
 */
void test_effect(uint param_1)

{
  GetClassPtr<CTestEffect>(param_1);
  return;
}

/* 000bcfa0  env_blood  (33 bytes)
 * undefined env_blood(uint param_1)
 */
void env_blood(uint param_1)

{
  GetClassPtr<CBlood>(param_1);
  return;
}

/* 000bd494  env_shake  (33 bytes)
 * undefined env_shake(uint param_1)
 */
void env_shake(uint param_1)

{
  GetClassPtr<CShake>(param_1);
  return;
}

/* 000bd668  env_fade  (33 bytes)
 * undefined env_fade(uint param_1)
 */
void env_fade(uint param_1)

{
  GetClassPtr<CFade>(param_1);
  return;
}

/* 000bd9a8  env_message  (33 bytes)
 * undefined env_message(uint param_1)
 */
void env_message(uint param_1)

{
  GetClassPtr<CMessage>(param_1);
  return;
}

/* 000bdd2c  env_funnel  (33 bytes)
 * undefined env_funnel(uint param_1)
 */
void env_funnel(uint param_1)

{
  GetClassPtr<CEnvFunnel>(param_1);
  return;
}

/* 000bde88  env_beverage  (33 bytes)
 * undefined env_beverage(uint param_1)
 */
void env_beverage(uint param_1)

{
  GetClassPtr<CEnvBeverage>(param_1);
  return;
}

/* 000bdfe0  item_sodacan  (33 bytes)
 * undefined item_sodacan(uint param_1)
 */
void item_sodacan(uint param_1)

{
  GetClassPtr<CItemSoda>(param_1);
  return;
}

/* 000be25c  GetClassPtr<CPointEntity>  (131 bytes)
 * CPointEntity * GetClassPtr<CPointEntity>(uint param_1)
 */
/* CPointEntity * GetClassPtr<CPointEntity>(CPointEntity *) */

CPointEntity * GetClassPtr<CPointEntity>(uint param_1)

{
  edict_t *peVar1;
  CPointEntity *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CPointEntity *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CPointEntity *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be2e0  GetClassPtr<CBubbling>  (131 bytes)
 * CBubbling * GetClassPtr<CBubbling>(uint param_1)
 */
/* CBubbling * GetClassPtr<CBubbling>(CBubbling *) */

CBubbling * GetClassPtr<CBubbling>(uint param_1)

{
  edict_t *peVar1;
  CBubbling *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBubbling *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBubbling *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x74);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBubbling_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be364  GetClassPtr<CBeam>  (131 bytes)
 * CBeam * GetClassPtr<CBeam>(uint param_1)
 */
/* CBeam * GetClassPtr<CBeam>(CBeam *) */

CBeam * GetClassPtr<CBeam>(uint param_1)

{
  edict_t *peVar1;
  CBeam *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBeam *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBeam *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBeam_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be3e8  GetClassPtr<CLightning>  (143 bytes)
 * CLightning * GetClassPtr<CLightning>(uint param_1)
 */
/* CLightning * GetClassPtr<CLightning>(CLightning *) */

CLightning * GetClassPtr<CLightning>(uint param_1)

{
  edict_t *peVar1;
  CLightning *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CLightning *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CLightning *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x98);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBeam_virtual_table;
    pCVar2->vtable = (void **)CLightning_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be478  GetClassPtr<CLaser>  (140 bytes)
 * CLaser * GetClassPtr<CLaser>(uint param_1)
 */
/* CLaser * GetClassPtr<CLaser>(CLaser *) */

CLaser * GetClassPtr<CLaser>(uint param_1)

{
  edict_t *peVar1;
  CLaser *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CLaser *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CLaser *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x78);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBeam_virtual_table;
    pCVar2->vtable = (void **)CLaser_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be504  GetClassPtr<CGlow>  (140 bytes)
 * CGlow * GetClassPtr<CGlow>(uint param_1)
 */
/* CGlow * GetClassPtr<CGlow>(CGlow *) */

CGlow * GetClassPtr<CGlow>(uint param_1)

{
  edict_t *peVar1;
  CGlow *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGlow *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGlow *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CGlow_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be590  GetClassPtr<CSprite>  (140 bytes)
 * CSprite * GetClassPtr<CSprite>(uint param_1)
 */
/* CSprite * GetClassPtr<CSprite>(CSprite *) */

CSprite * GetClassPtr<CSprite>(uint param_1)

{
  edict_t *peVar1;
  CSprite *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CSprite *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CSprite *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CSprite_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be61c  GetClassPtr<CGibShooter>  (143 bytes)
 * CGibShooter * GetClassPtr<CGibShooter>(uint param_1)
 */
/* CGibShooter * GetClassPtr<CGibShooter>(CGibShooter *) */

CGibShooter * GetClassPtr<CGibShooter>(uint param_1)

{
  edict_t *peVar1;
  CGibShooter *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGibShooter *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGibShooter *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x88);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CGibShooter_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be6ac  GetClassPtr<CEnvShooter>  (152 bytes)
 * CEnvShooter * GetClassPtr<CEnvShooter>(uint param_1)
 */
/* CEnvShooter * GetClassPtr<CEnvShooter>(CEnvShooter *) */

CEnvShooter * GetClassPtr<CEnvShooter>(uint param_1)

{
  edict_t *peVar1;
  CEnvShooter *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CEnvShooter *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CEnvShooter *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x88);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CGibShooter_virtual_table;
    pCVar2->vtable = (void **)CEnvShooter_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be744  GetClassPtr<CTestEffect>  (143 bytes)
 * CTestEffect * GetClassPtr<CTestEffect>(uint param_1)
 */
/* CTestEffect * GetClassPtr<CTestEffect>(CTestEffect *) */

CTestEffect * GetClassPtr<CTestEffect>(uint param_1)

{
  edict_t *peVar1;
  CTestEffect *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTestEffect *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTestEffect *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x138)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CTestEffect_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be7d4  GetClassPtr<CBlood>  (140 bytes)
 * CBlood * GetClassPtr<CBlood>(uint param_1)
 */
/* CBlood * GetClassPtr<CBlood>(CBlood *) */

CBlood * GetClassPtr<CBlood>(uint param_1)

{
  edict_t *peVar1;
  CBlood *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBlood *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBlood *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CBlood_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be860  GetClassPtr<CShake>  (140 bytes)
 * CShake * GetClassPtr<CShake>(uint param_1)
 */
/* CShake * GetClassPtr<CShake>(CShake *) */

CShake * GetClassPtr<CShake>(uint param_1)

{
  edict_t *peVar1;
  CShake *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CShake *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CShake *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CShake_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be8ec  GetClassPtr<CFade>  (140 bytes)
 * CFade * GetClassPtr<CFade>(uint param_1)
 */
/* CFade * GetClassPtr<CFade>(CFade *) */

CFade * GetClassPtr<CFade>(uint param_1)

{
  edict_t *peVar1;
  CFade *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFade *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFade *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CFade_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000be978  GetClassPtr<CMessage>  (140 bytes)
 * CMessage * GetClassPtr<CMessage>(uint param_1)
 */
/* CMessage * GetClassPtr<CMessage>(CMessage *) */

CMessage * GetClassPtr<CMessage>(uint param_1)

{
  edict_t *peVar1;
  CMessage *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CMessage *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CMessage *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CMessage_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000bea04  GetClassPtr<CEnvFunnel>  (140 bytes)
 * CEnvFunnel * GetClassPtr<CEnvFunnel>(uint param_1)
 */
/* CEnvFunnel * GetClassPtr<CEnvFunnel>(CEnvFunnel *) */

CEnvFunnel * GetClassPtr<CEnvFunnel>(uint param_1)

{
  edict_t *peVar1;
  CEnvFunnel *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CEnvFunnel *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CEnvFunnel *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x70);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CEnvFunnel_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000bea90  GetClassPtr<CEnvBeverage>  (140 bytes)
 * CEnvBeverage * GetClassPtr<CEnvBeverage>(uint param_1)
 */
/* CEnvBeverage * GetClassPtr<CEnvBeverage>(CEnvBeverage *) */

CEnvBeverage * GetClassPtr<CEnvBeverage>(uint param_1)

{
  edict_t *peVar1;
  CEnvBeverage *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CEnvBeverage *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CEnvBeverage *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CEnvBeverage_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000beb1c  GetClassPtr<CItemSoda>  (131 bytes)
 * CItemSoda * GetClassPtr<CItemSoda>(uint param_1)
 */
/* CItemSoda * GetClassPtr<CItemSoda>(CItemSoda *) */

CItemSoda * GetClassPtr<CItemSoda>(uint param_1)

{
  edict_t *peVar1;
  CItemSoda *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CItemSoda *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CItemSoda *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CItemSoda_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000beba0  CSprite_type_info_function  (70 bytes)
 * undefined4 * CSprite_type_info_function(void)
 */
/* CSprite type_info function */

undefined4 * CSprite_type_info_function(void)

{
  if (CSprite_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CSprite_type_info_node,"7CSprite",&CPointEntity_type_info_node);
  }
  return &CSprite_type_info_node;
}

/* 000beda4  CBeam_type_info_function  (70 bytes)
 * undefined4 * CBeam_type_info_function(void)
 */
/* CBeam type_info function */

undefined4 * CBeam_type_info_function(void)

{
  if (CBeam_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CBeam_type_info_node,"5CBeam",&CBaseEntity_type_info_node);
  }
  return &CBeam_type_info_node;
}

/* 000bf1d8  CLaser_type_info_function  (70 bytes)
 * undefined4 * CLaser_type_info_function(void)
 */
/* CLaser type_info function */

undefined4 * CLaser_type_info_function(void)

{
  if (CLaser_type_info_node == 0) {
    CBeam_type_info_function();
    __rtti_si(&CLaser_type_info_node,"6CLaser",&CBeam_type_info_node);
  }
  return &CLaser_type_info_node;
}

/* 000bf220  CBubbling_type_info_function  (70 bytes)
 * undefined4 * CBubbling_type_info_function(void)
 */
/* CBubbling type_info function */

undefined4 * CBubbling_type_info_function(void)

{
  if (CBubbling_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CBubbling_type_info_node,"9CBubbling",&CBaseEntity_type_info_node);
  }
  return &CBubbling_type_info_node;
}

/* 000bf270  CLightning_type_info_function  (70 bytes)
 * undefined4 * CLightning_type_info_function(void)
 */
/* CLightning type_info function */

undefined4 * CLightning_type_info_function(void)

{
  if (CLightning_type_info_node == 0) {
    CBeam_type_info_function();
    __rtti_si(&CLightning_type_info_node,"10CLightning",&CBeam_type_info_node);
  }
  return &CLightning_type_info_node;
}

/* 000bf2f4  CGlow_type_info_function  (70 bytes)
 * undefined4 * CGlow_type_info_function(void)
 */
/* CGlow type_info function */

undefined4 * CGlow_type_info_function(void)

{
  if (CGlow_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CGlow_type_info_node,&DAT_0010c530,&CPointEntity_type_info_node);
  }
  return &CGlow_type_info_node;
}

/* 000bf33c  CGibShooter_type_info_function  (70 bytes)
 * undefined4 * CGibShooter_type_info_function(void)
 */
/* CGibShooter type_info function */

undefined4 * CGibShooter_type_info_function(void)

{
  if (CGibShooter_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CGibShooter_type_info_node,"11CGibShooter",&CBaseDelay_type_info_node);
  }
  return &CGibShooter_type_info_node;
}

/* 000bf384  CEnvShooter_type_info_function  (70 bytes)
 * undefined4 * CEnvShooter_type_info_function(void)
 */
/* CEnvShooter type_info function */

undefined4 * CEnvShooter_type_info_function(void)

{
  if (CEnvShooter_type_info_node == 0) {
    CGibShooter_type_info_function();
    __rtti_si(&CEnvShooter_type_info_node,"11CEnvShooter",&CGibShooter_type_info_node);
  }
  return &CEnvShooter_type_info_node;
}

/* 000bf3cc  CTestEffect_type_info_function  (70 bytes)
 * undefined4 * CTestEffect_type_info_function(void)
 */
/* CTestEffect type_info function */

undefined4 * CTestEffect_type_info_function(void)

{
  if (CTestEffect_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CTestEffect_type_info_node,"11CTestEffect",&CBaseDelay_type_info_node);
  }
  return &CTestEffect_type_info_node;
}

/* 000bf414  CBlood_type_info_function  (70 bytes)
 * undefined4 * CBlood_type_info_function(void)
 */
/* CBlood type_info function */

undefined4 * CBlood_type_info_function(void)

{
  if (CBlood_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CBlood_type_info_node,"6CBlood",&CPointEntity_type_info_node);
  }
  return &CBlood_type_info_node;
}

/* 000bf4a4  CShake_type_info_function  (70 bytes)
 * undefined4 * CShake_type_info_function(void)
 */
/* CShake type_info function */

undefined4 * CShake_type_info_function(void)

{
  if (CShake_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CShake_type_info_node,"6CShake",&CPointEntity_type_info_node);
  }
  return &CShake_type_info_node;
}

/* 000bf57c  CFade_type_info_function  (70 bytes)
 * undefined4 * CFade_type_info_function(void)
 */
/* CFade type_info function */

undefined4 * CFade_type_info_function(void)

{
  if (CFade_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CFade_type_info_node,"5CFade",&CPointEntity_type_info_node);
  }
  return &CFade_type_info_node;
}

/* 000bf60c  CMessage_type_info_function  (70 bytes)
 * undefined4 * CMessage_type_info_function(void)
 */
/* CMessage type_info function */

undefined4 * CMessage_type_info_function(void)

{
  if (CMessage_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CMessage_type_info_node,"8CMessage",&CPointEntity_type_info_node);
  }
  return &CMessage_type_info_node;
}

/* 000bf654  CEnvFunnel_type_info_function  (70 bytes)
 * undefined4 * CEnvFunnel_type_info_function(void)
 */
/* CEnvFunnel type_info function */

undefined4 * CEnvFunnel_type_info_function(void)

{
  if (CEnvFunnel_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CEnvFunnel_type_info_node,"10CEnvFunnel",&CBaseDelay_type_info_node);
  }
  return &CEnvFunnel_type_info_node;
}

/* 000bf69c  CEnvBeverage_type_info_function  (70 bytes)
 * undefined4 * CEnvBeverage_type_info_function(void)
 */
/* CEnvBeverage type_info function */

undefined4 * CEnvBeverage_type_info_function(void)

{
  if (CEnvBeverage_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CEnvBeverage_type_info_node,"12CEnvBeverage",&CBaseDelay_type_info_node);
  }
  return &CEnvBeverage_type_info_node;
}

/* 000bf6e4  CItemSoda_type_info_function  (70 bytes)
 * undefined4 * CItemSoda_type_info_function(void)
 */
/* CItemSoda type_info function */

undefined4 * CItemSoda_type_info_function(void)

{
  if (CItemSoda_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CItemSoda_type_info_node,"9CItemSoda",&CBaseEntity_type_info_node);
  }
  return &CItemSoda_type_info_node;
}

/* 000bf72c  spark_shower  (33 bytes)
 * undefined spark_shower(uint param_1)
 */
void spark_shower(uint param_1)

{
  GetClassPtr<CShower>(param_1);
  return;
}

/* 000bfa94  env_explosion  (33 bytes)
 * undefined env_explosion(uint param_1)
 */
void env_explosion(uint param_1)

{
  GetClassPtr<CEnvExplosion>(param_1);
  return;
}

/* 000c00e8  ExplosionCreate  (191 bytes)
 * undefined ExplosionCreate(undefined4 * param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4, int param_5)
 */
/* ExplosionCreate(Vector const &, Vector const &, edict_s *, int, int) */

void ExplosionCreate(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                    int param_5)

{
  int *piVar1;
  char local_ac [128];
  undefined1 local_2c [4];
  char *local_28;
  undefined1 *local_24;
  
  piVar1 = CBaseEntity::Create(0x10c61a,param_1,param_2,param_3);
  sprintf(local_ac,"%3d",param_4);
  local_28 = "iMagnitude";
  local_24 = local_ac;
  (**(code **)(piVar1[0x18] + 0x2c))(piVar1,local_2c);
  if (param_5 == 0) {
    *(uint *)(*piVar1 + 0x1a0) = *(uint *)(*piVar1 + 0x1a0) | 1;
  }
  (**(code **)(piVar1[0x18] + 0x24))(piVar1);
  (**(code **)(piVar1[0x18] + 0xe0))(piVar1,0,0,3,0);
  return;
}

/* 000c01a8  GetClassPtr<CShower>  (131 bytes)
 * CShower * GetClassPtr<CShower>(uint param_1)
 */
/* CShower * GetClassPtr<CShower>(CShower *) */

CShower * GetClassPtr<CShower>(uint param_1)

{
  edict_t *peVar1;
  CShower *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CShower *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CShower *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CShower_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c022c  GetClassPtr<CEnvExplosion>  (170 bytes)
 * CEnvExplosion * GetClassPtr<CEnvExplosion>(uint param_1)
 */
/* CEnvExplosion * GetClassPtr<CEnvExplosion>(CEnvExplosion *) */

CEnvExplosion * GetClassPtr<CEnvExplosion>(uint param_1)

{
  edict_t *peVar1;
  CEnvExplosion *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CEnvExplosion *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CEnvExplosion *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x16c)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseMonster_virtual_table;
    pCVar2->vtable = (void **)CEnvExplosion_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c02d8  CShower_type_info_function  (70 bytes)
 * undefined4 * CShower_type_info_function(void)
 */
/* CShower type_info function */

undefined4 * CShower_type_info_function(void)

{
  if (CShower_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CShower_type_info_node,"7CShower",&CBaseEntity_type_info_node);
  }
  return &CShower_type_info_node;
}

/* 000c0328  CEnvExplosion_type_info_function  (70 bytes)
 * undefined4 * CEnvExplosion_type_info_function(void)
 */
/* CEnvExplosion type_info function */

undefined4 * CEnvExplosion_type_info_function(void)

{
  if (CEnvExplosion_type_info_node == 0) {
    CBaseMonster_type_info_function();
    __rtti_si(&CEnvExplosion_type_info_node,"13CEnvExplosion",&CBaseMonster_type_info_node);
  }
  return &CEnvExplosion_type_info_node;
}

/* 000c05c8  func_breakable  (33 bytes)
 * undefined func_breakable(uint param_1)
 */
void func_breakable(uint param_1)

{
  GetClassPtr<CBreakable>(param_1);
  return;
}

/* 000c1728  func_pushable  (33 bytes)
 * undefined func_pushable(uint param_1)
 */
void func_pushable(uint param_1)

{
  GetClassPtr<CPushable>(param_1);
  return;
}

/* 000c1f44  GetClassPtr<CBreakable>  (157 bytes)
 * CBreakable * GetClassPtr<CBreakable>(uint param_1)
 */
/* CBreakable * GetClassPtr<CBreakable>(CBreakable *) */

CBreakable * GetClassPtr<CBreakable>(uint param_1)

{
  edict_t *peVar1;
  CBreakable *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBreakable *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBreakable *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x118)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBreakable_virtual_table;
    EHANDLE::operator=((EHANDLE *)&pCVar2->field_0x70,(int *)0x0);
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c1fe4  GetClassPtr<CPushable>  (166 bytes)
 * CPushable * GetClassPtr<CPushable>(uint param_1)
 */
/* CPushable * GetClassPtr<CPushable>(CPushable *) */

CPushable * GetClassPtr<CPushable>(uint param_1)

{
  edict_t *peVar1;
  CPushable *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CPushable *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CPushable *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x124)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBreakable_virtual_table;
    EHANDLE::operator=((EHANDLE *)&pCVar2->field_0x70,(int *)0x0);
    pCVar2->vtable = (void **)CPushable_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c208c  CPushable_type_info_function  (70 bytes)
 * undefined4 * CPushable_type_info_function(void)
 */
/* CPushable type_info function */

undefined4 * CPushable_type_info_function(void)

{
  if (CPushable_type_info_node == 0) {
    CBreakable_type_info_function();
    __rtti_si(&CPushable_type_info_node,"9CPushable",&CBreakable_type_info_node);
  }
  return &CPushable_type_info_node;
}

/* 000c3f40  func_tank  (33 bytes)
 * undefined func_tank(uint param_1)
 */
void func_tank(uint param_1)

{
  GetClassPtr<CFuncTankGun>(param_1);
  return;
}

/* 000c41c8  func_tanklaser  (33 bytes)
 * undefined func_tanklaser(uint param_1)
 */
void func_tanklaser(uint param_1)

{
  GetClassPtr<CFuncTankLaser>(param_1);
  return;
}

/* 000c47cc  func_tankrocket  (33 bytes)
 * undefined func_tankrocket(uint param_1)
 */
void func_tankrocket(uint param_1)

{
  GetClassPtr<CFuncTankRocket>(param_1);
  return;
}

/* 000c4994  func_tankmortar  (33 bytes)
 * undefined func_tankmortar(uint param_1)
 */
void func_tankmortar(uint param_1)

{
  GetClassPtr<CFuncTankMortar>(param_1);
  return;
}

/* 000c4b04  func_tankcontrols  (33 bytes)
 * undefined func_tankcontrols(uint param_1)
 */
void func_tankcontrols(uint param_1)

{
  GetClassPtr<CFuncTankControls>(param_1);
  return;
}

/* 000c4dec  __static_initialization_and_destruction_0  (134 bytes)
 * undefined __static_initialization_and_destruction_0(int param_1, int param_2)
 * called by: CFuncTank::global.constructors.keyed.to.m_SaveData
 */
void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_2 == 0xffff) && (param_1 == 1)) {
    gTankSpread = 0;
    DAT_00190ea4 = 0;
    DAT_00190ea8 = 0;
    DAT_00190eac = 0x3ccccccd;
    DAT_00190eb0 = 0x3ccccccd;
    DAT_00190eb4 = 0x3ccccccd;
    DAT_00190eb8 = 0x3d4ccccd;
    DAT_00190ebc = 0x3d4ccccd;
    DAT_00190ec0 = 0x3d4ccccd;
    DAT_00190ec4 = 0x3dcccccd;
    DAT_00190ec8 = 0x3dcccccd;
    DAT_00190ecc = 0x3dcccccd;
    DAT_00190ed0 = 0x3e800000;
    DAT_00190ed4 = 0x3e800000;
    DAT_00190ed8 = 0x3e800000;
  }
  return;
}

/* 000c4e88  GetClassPtr<CFuncTankGun>  (143 bytes)
 * CFuncTankGun * GetClassPtr<CFuncTankGun>(uint param_1)
 */
/* CFuncTankGun * GetClassPtr<CFuncTankGun>(CFuncTankGun *) */

CFuncTankGun * GetClassPtr<CFuncTankGun>(uint param_1)

{
  edict_t *peVar1;
  CFuncTankGun *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncTankGun *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncTankGun *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xe4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncTank_virtual_table;
    pCVar2->vtable = (void **)CFuncTankGun_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c4f18  GetClassPtr<CFuncTankLaser>  (143 bytes)
 * CFuncTankLaser * GetClassPtr<CFuncTankLaser>(uint param_1)
 */
/* CFuncTankLaser * GetClassPtr<CFuncTankLaser>(CFuncTankLaser *) */

CFuncTankLaser * GetClassPtr<CFuncTankLaser>(uint param_1)

{
  edict_t *peVar1;
  CFuncTankLaser *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncTankLaser *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncTankLaser *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xec);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncTank_virtual_table;
    pCVar2->vtable = (void **)CFuncTankLaser_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c4fa8  GetClassPtr<CFuncTankRocket>  (143 bytes)
 * CFuncTankRocket * GetClassPtr<CFuncTankRocket>(uint param_1)
 */
/* CFuncTankRocket * GetClassPtr<CFuncTankRocket>(CFuncTankRocket *) */

CFuncTankRocket * GetClassPtr<CFuncTankRocket>(uint param_1)

{
  edict_t *peVar1;
  CFuncTankRocket *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncTankRocket *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncTankRocket *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xe4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncTank_virtual_table;
    pCVar2->vtable = (void **)CFuncTankRocket_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c5038  GetClassPtr<CFuncTankMortar>  (143 bytes)
 * CFuncTankMortar * GetClassPtr<CFuncTankMortar>(uint param_1)
 */
/* CFuncTankMortar * GetClassPtr<CFuncTankMortar>(CFuncTankMortar *) */

CFuncTankMortar * GetClassPtr<CFuncTankMortar>(uint param_1)

{
  edict_t *peVar1;
  CFuncTankMortar *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncTankMortar *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncTankMortar *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xe4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncTank_virtual_table;
    pCVar2->vtable = (void **)CFuncTankMortar_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c50c8  GetClassPtr<CFuncTankControls>  (131 bytes)
 * CFuncTankControls * GetClassPtr<CFuncTankControls>(uint param_1)
 */
/* CFuncTankControls * GetClassPtr<CFuncTankControls>(CFuncTankControls *) */

CFuncTankControls * GetClassPtr<CFuncTankControls>(uint param_1)

{
  edict_t *peVar1;
  CFuncTankControls *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncTankControls *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncTankControls *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncTankControls_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c514c  CFuncTank_type_info_function  (70 bytes)
 * undefined4 * CFuncTank_type_info_function(void)
 */
/* CFuncTank type_info function */

undefined4 * CFuncTank_type_info_function(void)

{
  if (CFuncTank_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CFuncTank_type_info_node,"9CFuncTank",&CBaseEntity_type_info_node);
  }
  return &CFuncTank_type_info_node;
}

/* 000c53b8  CFuncTankGun_type_info_function  (70 bytes)
 * undefined4 * CFuncTankGun_type_info_function(void)
 */
/* CFuncTankGun type_info function */

undefined4 * CFuncTankGun_type_info_function(void)

{
  if (CFuncTankGun_type_info_node == 0) {
    CFuncTank_type_info_function();
    __rtti_si(&CFuncTankGun_type_info_node,"12CFuncTankGun",&CFuncTank_type_info_node);
  }
  return &CFuncTankGun_type_info_node;
}

/* 000c5400  CFuncTankLaser_type_info_function  (70 bytes)
 * undefined4 * CFuncTankLaser_type_info_function(void)
 */
/* CFuncTankLaser type_info function */

undefined4 * CFuncTankLaser_type_info_function(void)

{
  if (CFuncTankLaser_type_info_node == 0) {
    CFuncTank_type_info_function();
    __rtti_si(&CFuncTankLaser_type_info_node,"14CFuncTankLaser",&CFuncTank_type_info_node);
  }
  return &CFuncTankLaser_type_info_node;
}

/* 000c5448  CFuncTankRocket_type_info_function  (70 bytes)
 * undefined4 * CFuncTankRocket_type_info_function(void)
 */
/* CFuncTankRocket type_info function */

undefined4 * CFuncTankRocket_type_info_function(void)

{
  if (CFuncTankRocket_type_info_node == 0) {
    CFuncTank_type_info_function();
    __rtti_si(&CFuncTankRocket_type_info_node,"15CFuncTankRocket",&CFuncTank_type_info_node);
  }
  return &CFuncTankRocket_type_info_node;
}

/* 000c5490  CFuncTankMortar_type_info_function  (70 bytes)
 * undefined4 * CFuncTankMortar_type_info_function(void)
 */
/* CFuncTankMortar type_info function */

undefined4 * CFuncTankMortar_type_info_function(void)

{
  if (CFuncTankMortar_type_info_node == 0) {
    CFuncTank_type_info_function();
    __rtti_si(&CFuncTankMortar_type_info_node,"15CFuncTankMortar",&CFuncTank_type_info_node);
  }
  return &CFuncTankMortar_type_info_node;
}

/* 000c54d8  CFuncTankControls_type_info_function  (70 bytes)
 * undefined4 * CFuncTankControls_type_info_function(void)
 */
/* CFuncTankControls type_info function */

undefined4 * CFuncTankControls_type_info_function(void)

{
  if (CFuncTankControls_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CFuncTankControls_type_info_node,"17CFuncTankControls",&CBaseEntity_type_info_node);
  }
  return &CFuncTankControls_type_info_node;
}

