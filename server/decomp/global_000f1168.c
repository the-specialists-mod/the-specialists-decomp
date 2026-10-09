/* ts_i386.so - global_000f1168 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f1168  UTIL_PrecacheOtherWeapon  (381 bytes)
 * undefined UTIL_PrecacheOtherWeapon(int param_1)
 */
/* UTIL_PrecacheOtherWeapon(char const *) */

void UTIL_PrecacheOtherWeapon(int param_1)

{
  bool bVar1;
  edict_t *pEdict;
  int iVar2;
  edict_t *peVar3;
  void *pvVar4;
  char **ppcVar5;
  undefined4 *puVar6;
  char *local_4c [4];
  char *local_3c;
  int local_2c;
  
  pEdict = (*g_engfuncs.pfnCreateNamedEntity)(param_1 - (int)gpGlobals->pStringBase);
  bVar1 = false;
  if (pEdict != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar2 != 0) goto LAB_000f11c6;
  }
  bVar1 = true;
LAB_000f11c6:
  if (bVar1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"NULL Ent in UTIL_PrecacheOtherWeapon\n");
  }
  else {
    peVar3 = *(edict_t **)(((uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1) + 0x208);
    if (peVar3 == (edict_t *)0x0) {
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar4 = (void *)0x0;
    if (peVar3 != (edict_t *)0x0) {
      pvVar4 = peVar3->pvPrivateData;
    }
    if (pvVar4 != (void *)0x0) {
      (**(code **)(*(int *)((int)pvVar4 + 0x60) + 0x28))(pvVar4);
      ppcVar5 = local_4c;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppcVar5 = (char *)0x0;
        ppcVar5 = ppcVar5 + 1;
      }
      iVar2 = (**(code **)(*(int *)((int)pvVar4 + 0x60) + 0x120))(pvVar4,local_4c);
      if (iVar2 != 0) {
        ppcVar5 = local_4c;
        puVar6 = &CBasePlayerItem::ItemInfoArray + local_2c * 0xb;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *ppcVar5;
          ppcVar5 = ppcVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        if ((local_4c[2] != (char *)0x0) && (*local_4c[2] != '\0')) {
          AddAmmoNameToAmmoRegistry(local_4c[2]);
        }
        if ((local_3c != (char *)0x0) && (*local_3c != '\0')) {
          AddAmmoNameToAmmoRegistry(local_3c);
        }
        ppcVar5 = local_4c;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppcVar5 = (char *)0x0;
          ppcVar5 = ppcVar5 + 1;
        }
      }
    }
    (*g_engfuncs.pfnRemoveEntity)(pEdict);
  }
  return;
}

/* 000f12e8  W_Precache  (624 bytes)
 * undefined W_Precache(void)
 */
/* W_Precache(void) */

void W_Precache(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &CBasePlayerItem::ItemInfoArray;
  for (iVar1 = 0x160; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &CBasePlayerItem::AmmoInfoArray;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  giAmmoIndex = 0;
  UTIL_PrecacheOther(0x10d3e9);
  UTIL_PrecacheOther(0x10fa8e);
  UTIL_PrecacheOther(0x10777c);
  UTIL_PrecacheOther(0x108f51);
  UTIL_PrecacheOther(0x108fc7);
  UTIL_PrecacheOther(0x106f3b);
  UTIL_PrecacheOther(0x106f5b);
  UTIL_PrecacheOther(0x106f69);
  UTIL_PrecacheOther(0x106fb4);
  UTIL_PrecacheOther(0x109047);
  UTIL_PrecacheOther(0x109004);
  UTIL_PrecacheOther(0x1090a2);
  UTIL_PrecacheOther(0x106ff2);
  compile_weapons_info();
  UTIL_PrecacheOtherWeapon(0x10806a);
  UTIL_PrecacheOther(0x1076d7);
  UTIL_PrecacheOther(0x1076c7);
  UTIL_PrecacheOther(0x106e38);
  (**(code **)(*g_pGameRules + 0x20))(g_pGameRules);
  iVar1 = (*g_engfuncs.pfnPrecacheModel)("sprites/zerogxplode.spr");
  g_sModelIndexFireball = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)("sprites/WXplo1.spr");
  g_sModelIndexWExplosion = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)("sprites/steam1.spr");
  g_sModelIndexSmoke = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)("sprites/bubble.spr");
  g_sModelIndexBubbles = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)("sprites/bloodspray.spr");
  g_sModelIndexBloodSpray = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)("sprites/blood.spr");
  g_sModelIndexBloodDrop = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(g_pModelNameLaser);
  g_sModelIndexLaser = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)("sprites/laserdot.spr");
  g_sModelIndexLaserDot = (undefined2)iVar1;
  (*g_engfuncs.pfnPrecacheModel)("models/grenade.mdl");
  (*g_engfuncs.pfnPrecacheModel)("sprites/explode1.spr");
  (*g_engfuncs.pfnPrecacheSound)("weapons/debris1.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/debris2.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/debris3.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/grenade_hit1.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/grenade_hit2.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/grenade_hit3.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/bullet_hit1.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/bullet_hit2.wav");
  (*g_engfuncs.pfnPrecacheSound)("items/weapondrop1.wav");
  return;
}

/* 000f1c14  CanAttack  (62 bytes)
 * bool CanAttack(float param_1, float param_2, int param_3)
 */
/* CanAttack(float, float, int) */

bool CanAttack(float param_1,float param_2,int param_3)

{
  ushort uVar1;
  
  if (param_3 == 0) {
    uVar1 = (ushort)(param_1 < param_2) << 8 | (ushort)(param_1 == param_2) << 0xe;
  }
  else {
    uVar1 = (ushort)(param_1 < 0.0) << 8 | (ushort)(param_1 == 0.0) << 0xe;
  }
  return uVar1 != 0;
}

/* 000f27a4  weaponbox  (33 bytes)
 * undefined weaponbox(uint param_1)
 */
void weaponbox(uint param_1)

{
  GetClassPtr<CWeaponBox>(param_1);
  return;
}

/* 000f3354  GetClassPtr<CWeaponBox>  (134 bytes)
 * CWeaponBox * GetClassPtr<CWeaponBox>(uint param_1)
 */
/* CWeaponBox * GetClassPtr<CWeaponBox>(CWeaponBox *) */

CWeaponBox * GetClassPtr<CWeaponBox>(uint param_1)

{
  edict_t *peVar1;
  CWeaponBox *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CWeaponBox *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CWeaponBox *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x180)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CWeaponBox_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f33dc  CBasePlayerItem_type_info_function  (70 bytes)
 * undefined4 * CBasePlayerItem_type_info_function(void)
 */
/* CBasePlayerItem type_info function */

undefined4 * CBasePlayerItem_type_info_function(void)

{
  if (CBasePlayerItem_type_info_node == 0) {
    CBaseAnimating_type_info_function();
    __rtti_si(&CBasePlayerItem_type_info_node,"15CBasePlayerItem",&CBaseAnimating_type_info_node);
  }
  return &CBasePlayerItem_type_info_node;
}

/* 000f360c  CBasePlayerWeapon_type_info_function  (70 bytes)
 * undefined4 * CBasePlayerWeapon_type_info_function(void)
 */
/* CBasePlayerWeapon type_info function */

undefined4 * CBasePlayerWeapon_type_info_function(void)

{
  if (CBasePlayerWeapon_type_info_node == 0) {
    CBasePlayerItem_type_info_function();
    __rtti_si(&CBasePlayerWeapon_type_info_node,"17CBasePlayerWeapon",
              &CBasePlayerItem_type_info_node);
  }
  return &CBasePlayerWeapon_type_info_node;
}

/* 000f36a0  CBasePlayerAmmo_type_info_function  (70 bytes)
 * undefined4 * CBasePlayerAmmo_type_info_function(void)
 */
/* CBasePlayerAmmo type_info function */

undefined4 * CBasePlayerAmmo_type_info_function(void)

{
  if (CBasePlayerAmmo_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CBasePlayerAmmo_type_info_node,"15CBasePlayerAmmo",&CBaseEntity_type_info_node);
  }
  return &CBasePlayerAmmo_type_info_node;
}

/* 000f36f0  CWeaponBox_type_info_function  (70 bytes)
 * undefined4 * CWeaponBox_type_info_function(void)
 */
/* CWeaponBox type_info function */

undefined4 * CWeaponBox_type_info_function(void)

{
  if (CWeaponBox_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CWeaponBox_type_info_node,"10CWeaponBox",&CBaseEntity_type_info_node);
  }
  return &CWeaponBox_type_info_node;
}

/* 000f3738  infodecal  (33 bytes)
 * undefined infodecal(uint param_1)
 */
void infodecal(uint param_1)

{
  GetClassPtr<CDecal>(param_1);
  return;
}

/* 000f3b80  bodyque  (33 bytes)
 * undefined bodyque(uint param_1)
 */
void bodyque(uint param_1)

{
  GetClassPtr<CCorpse>(param_1);
  return;
}

/* 000f3ba4  InitBodyQue  (202 bytes)
 * undefined InitBodyQue(void)
 * called by: CWorld::Precache
 */
/* InitBodyQue(void) */

void InitBodyQue(void)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  edict_t *peVar3;
  int className;
  bool bVar4;
  
  className = (int)"bodyque" - (int)gpGlobals->pStringBase;
  g_pBodyQueueHead = (*g_engfuncs.pfnCreateNamedEntity)(className);
  peVar1 = &g_pBodyQueueHead->v;
  bVar4 = g_pBodyQueueHead == (edict_t *)0x0;
  peVar2 = (*g_engfuncs.pfnCreateNamedEntity)(className);
  *(edict_t **)(((uint)peVar1 & bVar4 - 1) + 0x198) = peVar2;
  peVar3 = (*g_engfuncs.pfnCreateNamedEntity)(className);
  *(edict_t **)(((uint)&peVar2->v & (peVar2 == (edict_t *)0x0) - 1) + 0x198) = peVar3;
  peVar2 = (*g_engfuncs.pfnCreateNamedEntity)(className);
  *(edict_t **)(((uint)&peVar3->v & (peVar3 == (edict_t *)0x0) - 1) + 0x198) = peVar2;
  *(edict_t **)(((uint)&peVar2->v & (peVar2 == (edict_t *)0x0) - 1) + 0x198) = g_pBodyQueueHead;
  return;
}

/* 000f3c70  CopyToBodyQue  (371 bytes)
 * undefined CopyToBodyQue(int param_1)
 */
/* CopyToBodyQue(entvars_s *) */

void CopyToBodyQue(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (-1 < *(char *)(param_1 + 0x118)) {
    uVar2 = g_pBodyQueueHead + 0x80U & (g_pBodyQueueHead == 0) - 1;
    puVar3 = (undefined4 *)(param_1 + 0x50);
    puVar4 = (undefined4 *)(uVar2 + 0x50);
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(uVar2 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(uVar2 + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(uVar2 + 0x130) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)(uVar2 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined4 *)(uVar2 + 0x108) = 6;
    puVar3 = (undefined4 *)(param_1 + 0x20);
    puVar4 = (undefined4 *)(uVar2 + 0x20);
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(uVar2 + 0x1a4) = 0;
    *(undefined4 *)(uVar2 + 0x170) = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)(uVar2 + 0x15c) = 0x11;
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x208));
    *(float *)(uVar2 + 0x14c) = (float)iVar1;
    *(undefined4 *)(uVar2 + 0x150) = 0;
    *(undefined4 *)(uVar2 + 0x158) = 0;
    *(undefined4 *)(uVar2 + 0x154) = 0;
    *(uint *)(uVar2 + 0x118) = *(uint *)(param_1 + 0x118) | 0x20;
    *(undefined4 *)(uVar2 + 0x128) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(uVar2 + 0x134) = *(undefined4 *)(param_1 + 0x134);
    UTIL_SetOrigin(uVar2,param_1 + 8);
    UTIL_SetSize(uVar2,param_1 + 0xdc,param_1 + 0xe8);
    g_pBodyQueueHead = *(int *)(uVar2 + 0x198);
  }
  return;
}

/* 000f42ec  SaveGlobalState  (64 bytes)
 * void SaveGlobalState(SAVERESTOREDATA * param_1)
 */
/* SaveGlobalState(saverestore_s *) */

void SaveGlobalState(SAVERESTOREDATA *param_1)

{
  CSaveRestoreBuffer aCStack_c [4];
  
  CSaveRestoreBuffer::CSaveRestoreBuffer(aCStack_c,param_1);
  CGlobalState::Save((CGlobalState *)&gGlobalState,(CSave *)aCStack_c);
  CSaveRestoreBuffer::~CSaveRestoreBuffer(aCStack_c,0);
  return;
}

/* 000f436c  RestoreGlobalState  (80 bytes)
 * void RestoreGlobalState(SAVERESTOREDATA * param_1)
 */
/* RestoreGlobalState(saverestore_s *) */

void RestoreGlobalState(SAVERESTOREDATA *param_1)

{
  CSaveRestoreBuffer aCStack_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  CSaveRestoreBuffer::CSaveRestoreBuffer(aCStack_1c,param_1);
  local_18 = 0;
  local_14 = 1;
  CGlobalState::Restore((CGlobalState *)&gGlobalState,(CRestore *)aCStack_1c);
  CSaveRestoreBuffer::~CSaveRestoreBuffer(aCStack_1c,0);
  return;
}

/* 000f43fc  ResetGlobalState  (47 bytes)
 * void ResetGlobalState(void)
 */
/* ResetGlobalState(void) */

void ResetGlobalState(void)

{
  CGlobalState::ClearStates((CGlobalState *)&gGlobalState);
  gInitHUD = 1;
  return;
}

/* 000f442c  worldspawn  (33 bytes)
 * undefined worldspawn(uint param_1)
 */
void worldspawn(uint param_1)

{
  GetClassPtr<CWorld>(param_1);
  return;
}

/* 000f4dac  __static_initialization_and_destruction_0  (55 bytes)
 * undefined __static_initialization_and_destruction_0(int param_1, int param_2)
 * called by: global.constructors.keyed.to.gDecals
 */
void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_2 == 0xffff) && (param_1 == 1)) {
    CGlobalState::CGlobalState((CGlobalState *)&gGlobalState);
  }
  return;
}

/* 000f4de4  global.constructors.keyed.to.gDecals  (19 bytes)
 * undefined global.constructors.keyed.to.gDecals(void)
 */
/* global constructors keyed to gDecals */

void global_constructors_keyed_to_gDecals(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

/* 000f4df8  GetClassPtr<CDecal>  (131 bytes)
 * CDecal * GetClassPtr<CDecal>(uint param_1)
 */
/* CDecal * GetClassPtr<CDecal>(CDecal *) */

CDecal * GetClassPtr<CDecal>(uint param_1)

{
  edict_t *peVar1;
  CDecal *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CDecal *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CDecal *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CDecal_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f4e7c  GetClassPtr<CCorpse>  (131 bytes)
 * CCorpse * GetClassPtr<CCorpse>(uint param_1)
 */
/* CCorpse * GetClassPtr<CCorpse>(CCorpse *) */

CCorpse * GetClassPtr<CCorpse>(uint param_1)

{
  edict_t *peVar1;
  CCorpse *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CCorpse *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CCorpse *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CCorpse_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f4f00  GetClassPtr<CWorld>  (131 bytes)
 * CWorld * GetClassPtr<CWorld>(uint param_1)
 */
/* CWorld * GetClassPtr<CWorld>(CWorld *) */

CWorld * GetClassPtr<CWorld>(uint param_1)

{
  edict_t *peVar1;
  CWorld *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CWorld *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CWorld *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CWorld_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f4f84  CWorld_type_info_function  (70 bytes)
 * undefined4 * CWorld_type_info_function(void)
 */
/* CWorld type_info function */

undefined4 * CWorld_type_info_function(void)

{
  if (CWorld_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CWorld_type_info_node,"6CWorld",&CBaseEntity_type_info_node);
  }
  return &CWorld_type_info_node;
}

/* 000f4fcc  CDecal_type_info_function  (70 bytes)
 * undefined4 * CDecal_type_info_function(void)
 */
/* CDecal type_info function */

undefined4 * CDecal_type_info_function(void)

{
  if (CDecal_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CDecal_type_info_node,"6CDecal",&CBaseEntity_type_info_node);
  }
  return &CDecal_type_info_node;
}

/* 000f5014  CCorpse_type_info_function  (70 bytes)
 * undefined4 * CCorpse_type_info_function(void)
 */
/* CCorpse type_info function */

undefined4 * CCorpse_type_info_function(void)

{
  if (CCorpse_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CCorpse_type_info_node,"7CCorpse",&CBaseEntity_type_info_node);
  }
  return &CCorpse_type_info_node;
}

/* 000f515c  xen_plantlight  (33 bytes)
 * undefined xen_plantlight(uint param_1)
 */
void xen_plantlight(uint param_1)

{
  GetClassPtr<CXenPLight>(param_1);
  return;
}

/* 000f573c  xen_hair  (33 bytes)
 * undefined xen_hair(uint param_1)
 */
void xen_hair(uint param_1)

{
  GetClassPtr<CXenHair>(param_1);
  return;
}

/* 000f58f4  xen_ttrigger  (33 bytes)
 * undefined xen_ttrigger(uint param_1)
 */
void xen_ttrigger(uint param_1)

{
  GetClassPtr<CXenTreeTrigger>(param_1);
  return;
}

/* 000f59ec  xen_tree  (33 bytes)
 * undefined xen_tree(uint param_1)
 */
void xen_tree(uint param_1)

{
  GetClassPtr<CXenTree>(param_1);
  return;
}

/* 000f63c0  xen_spore_small  (33 bytes)
 * undefined xen_spore_small(uint param_1)
 */
void xen_spore_small(uint param_1)

{
  GetClassPtr<CXenSporeSmall>(param_1);
  return;
}

/* 000f63e4  xen_spore_medium  (33 bytes)
 * undefined xen_spore_medium(uint param_1)
 */
void xen_spore_medium(uint param_1)

{
  GetClassPtr<CXenSporeMed>(param_1);
  return;
}

/* 000f6408  xen_spore_large  (33 bytes)
 * undefined xen_spore_large(uint param_1)
 */
void xen_spore_large(uint param_1)

{
  GetClassPtr<CXenSporeLarge>(param_1);
  return;
}

/* 000f642c  xen_hull  (33 bytes)
 * undefined xen_hull(uint param_1)
 */
void xen_hull(uint param_1)

{
  GetClassPtr<CXenHull>(param_1);
  return;
}

/* 000f69d4  __static_initialization_and_destruction_0  (162 bytes)
 * undefined __static_initialization_and_destruction_0(int param_1, int param_2)
 * called by: CActAnimating::global.constructors.keyed.to.m_SaveData
 */
void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_2 == 0xffff) && (param_1 == 1)) {
    CXenSporeLarge::m_hullSizes = 0x42b40000;
    DAT_0019f284 = 0xc1c80000;
    DAT_0019f288 = 0;
    DAT_0019f28c = 0x41c80000;
    DAT_0019f290 = 0x42960000;
    DAT_0019f294 = 0;
    DAT_0019f298 = 0xc1700000;
    DAT_0019f29c = 0xc2c80000;
    DAT_0019f2a0 = 0;
    DAT_0019f2a4 = 0xc2b40000;
    DAT_0019f2a8 = 0xc20c0000;
    DAT_0019f2ac = 0;
    DAT_0019f2b0 = 0xc2b40000;
    DAT_0019f2b4 = 0x42700000;
    DAT_0019f2b8 = 0;
  }
  return;
}

/* 000f6a8c  GetClassPtr<CXenPLight>  (161 bytes)
 * CXenPLight * GetClassPtr<CXenPLight>(uint param_1)
 */
/* CXenPLight * GetClassPtr<CXenPLight>(CXenPLight *) */

CXenPLight * GetClassPtr<CXenPLight>(uint param_1)

{
  edict_t *peVar1;
  CXenPLight *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CXenPLight *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CXenPLight *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x88);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CActAnimating_virtual_table;
    pCVar2->vtable = (void **)CXenPLight_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f6b30  GetClassPtr<CXenHair>  (161 bytes)
 * CXenHair * GetClassPtr<CXenHair>(uint param_1)
 */
/* CXenHair * GetClassPtr<CXenHair>(CXenHair *) */

CXenHair * GetClassPtr<CXenHair>(uint param_1)

{
  edict_t *peVar1;
  CXenHair *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CXenHair *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CXenHair *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x84);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CActAnimating_virtual_table;
    pCVar2->vtable = (void **)CXenHair_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f6bd4  GetClassPtr<CXenTreeTrigger>  (131 bytes)
 * CXenTreeTrigger * GetClassPtr<CXenTreeTrigger>(uint param_1)
 */
/* CXenTreeTrigger * GetClassPtr<CXenTreeTrigger>(CXenTreeTrigger *) */

CXenTreeTrigger * GetClassPtr<CXenTreeTrigger>(uint param_1)

{
  edict_t *peVar1;
  CXenTreeTrigger *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CXenTreeTrigger *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CXenTreeTrigger *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CXenTreeTrigger_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f6c58  GetClassPtr<CXenTree>  (161 bytes)
 * CXenTree * GetClassPtr<CXenTree>(uint param_1)
 */
/* CXenTree * GetClassPtr<CXenTree>(CXenTree *) */

CXenTree * GetClassPtr<CXenTree>(uint param_1)

{
  edict_t *peVar1;
  CXenTree *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CXenTree *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CXenTree *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x88);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CActAnimating_virtual_table;
    pCVar2->vtable = (void **)CXenTree_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f6cfc  GetClassPtr<CXenHull>  (140 bytes)
 * CXenHull * GetClassPtr<CXenHull>(uint param_1)
 */
/* CXenHull * GetClassPtr<CXenHull>(CXenHull *) */

CXenHull * GetClassPtr<CXenHull>(uint param_1)

{
  edict_t *peVar1;
  CXenHull *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CXenHull *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CXenHull *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CXenHull_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f6d88  GetClassPtr<CXenSporeSmall>  (170 bytes)
 * CXenSporeSmall * GetClassPtr<CXenSporeSmall>(uint param_1)
 */
/* CXenSporeSmall * GetClassPtr<CXenSporeSmall>(CXenSporeSmall *) */

CXenSporeSmall * GetClassPtr<CXenSporeSmall>(uint param_1)

{
  edict_t *peVar1;
  CXenSporeSmall *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CXenSporeSmall *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CXenSporeSmall *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x84);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CActAnimating_virtual_table;
    pCVar2->vtable = (void **)CXenSpore_virtual_table;
    pCVar2->vtable = (void **)CXenSporeSmall_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f6e34  GetClassPtr<CXenSporeMed>  (170 bytes)
 * CXenSporeMed * GetClassPtr<CXenSporeMed>(uint param_1)
 */
/* CXenSporeMed * GetClassPtr<CXenSporeMed>(CXenSporeMed *) */

CXenSporeMed * GetClassPtr<CXenSporeMed>(uint param_1)

{
  edict_t *peVar1;
  CXenSporeMed *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CXenSporeMed *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CXenSporeMed *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x84);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CActAnimating_virtual_table;
    pCVar2->vtable = (void **)CXenSpore_virtual_table;
    pCVar2->vtable = (void **)CXenSporeMed_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f6ee0  GetClassPtr<CXenSporeLarge>  (170 bytes)
 * CXenSporeLarge * GetClassPtr<CXenSporeLarge>(uint param_1)
 */
/* CXenSporeLarge * GetClassPtr<CXenSporeLarge>(CXenSporeLarge *) */

CXenSporeLarge * GetClassPtr<CXenSporeLarge>(uint param_1)

{
  edict_t *peVar1;
  CXenSporeLarge *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CXenSporeLarge *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CXenSporeLarge *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x84);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CActAnimating_virtual_table;
    pCVar2->vtable = (void **)CXenSpore_virtual_table;
    pCVar2->vtable = (void **)CXenSporeLarge_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000f6f8c  CActAnimating_type_info_function  (70 bytes)
 * undefined4 * CActAnimating_type_info_function(void)
 */
/* CActAnimating type_info function */

undefined4 * CActAnimating_type_info_function(void)

{
  if (CActAnimating_type_info_node == 0) {
    CBaseAnimating_type_info_function();
    __rtti_si(&CActAnimating_type_info_node,"13CActAnimating",&CBaseAnimating_type_info_node);
  }
  return &CActAnimating_type_info_node;
}

/* 000f6fe8  CXenPLight_type_info_function  (70 bytes)
 * undefined4 * CXenPLight_type_info_function(void)
 */
/* CXenPLight type_info function */

undefined4 * CXenPLight_type_info_function(void)

{
  if (CXenPLight_type_info_node == 0) {
    CActAnimating_type_info_function();
    __rtti_si(&CXenPLight_type_info_node,"10CXenPLight",&CActAnimating_type_info_node);
  }
  return &CXenPLight_type_info_node;
}

/* 000f7030  CXenHair_type_info_function  (70 bytes)
 * undefined4 * CXenHair_type_info_function(void)
 */
/* CXenHair type_info function */

undefined4 * CXenHair_type_info_function(void)

{
  if (CXenHair_type_info_node == 0) {
    CActAnimating_type_info_function();
    __rtti_si(&CXenHair_type_info_node,"8CXenHair",&CActAnimating_type_info_node);
  }
  return &CXenHair_type_info_node;
}

/* 000f7078  CXenTreeTrigger_type_info_function  (70 bytes)
 * undefined4 * CXenTreeTrigger_type_info_function(void)
 */
/* CXenTreeTrigger type_info function */

undefined4 * CXenTreeTrigger_type_info_function(void)

{
  if (CXenTreeTrigger_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CXenTreeTrigger_type_info_node,"15CXenTreeTrigger",&CBaseEntity_type_info_node);
  }
  return &CXenTreeTrigger_type_info_node;
}

/* 000f70c0  CXenTree_type_info_function  (70 bytes)
 * undefined4 * CXenTree_type_info_function(void)
 */
/* CXenTree type_info function */

undefined4 * CXenTree_type_info_function(void)

{
  if (CXenTree_type_info_node == 0) {
    CActAnimating_type_info_function();
    __rtti_si(&CXenTree_type_info_node,"8CXenTree",&CActAnimating_type_info_node);
  }
  return &CXenTree_type_info_node;
}

/* 000f7138  CXenSpore_type_info_function  (70 bytes)
 * undefined4 * CXenSpore_type_info_function(void)
 */
/* CXenSpore type_info function */

undefined4 * CXenSpore_type_info_function(void)

{
  if (CXenSpore_type_info_node == 0) {
    CActAnimating_type_info_function();
    __rtti_si(&CXenSpore_type_info_node,"9CXenSpore",&CActAnimating_type_info_node);
  }
  return &CXenSpore_type_info_node;
}

/* 000f718c  CXenSporeSmall_type_info_function  (70 bytes)
 * undefined4 * CXenSporeSmall_type_info_function(void)
 */
/* CXenSporeSmall type_info function */

undefined4 * CXenSporeSmall_type_info_function(void)

{
  if (CXenSporeSmall_type_info_node == 0) {
    CXenSpore_type_info_function();
    __rtti_si(&CXenSporeSmall_type_info_node,"14CXenSporeSmall",&CXenSpore_type_info_node);
  }
  return &CXenSporeSmall_type_info_node;
}

/* 000f71d4  CXenSporeMed_type_info_function  (70 bytes)
 * undefined4 * CXenSporeMed_type_info_function(void)
 */
/* CXenSporeMed type_info function */

undefined4 * CXenSporeMed_type_info_function(void)

{
  if (CXenSporeMed_type_info_node == 0) {
    CXenSpore_type_info_function();
    __rtti_si(&CXenSporeMed_type_info_node,"12CXenSporeMed",&CXenSpore_type_info_node);
  }
  return &CXenSporeMed_type_info_node;
}

/* 000f721c  CXenSporeLarge_type_info_function  (70 bytes)
 * undefined4 * CXenSporeLarge_type_info_function(void)
 */
/* CXenSporeLarge type_info function */

undefined4 * CXenSporeLarge_type_info_function(void)

{
  if (CXenSporeLarge_type_info_node == 0) {
    CXenSpore_type_info_function();
    __rtti_si(&CXenSporeLarge_type_info_node,"14CXenSporeLarge",&CXenSpore_type_info_node);
  }
  return &CXenSporeLarge_type_info_node;
}

/* 000f7264  CXenHull_type_info_function  (70 bytes)
 * undefined4 * CXenHull_type_info_function(void)
 */
/* CXenHull type_info function */

undefined4 * CXenHull_type_info_function(void)

{
  if (CXenHull_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CXenHull_type_info_node,"8CXenHull",&CPointEntity_type_info_node);
  }
  return &CXenHull_type_info_node;
}

/* 000f72b4  FindPlayerByName  (160 bytes)
 * int * FindPlayerByName(char * param_1)
 */
/* FindPlayerByName(char const *) */

int * FindPlayerByName(char *param_1)

{
  int *piVar1;
  edict_t *peVar2;
  int iVar3;
  int iEntIndex;
  
  iEntIndex = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(iEntIndex);
      if ((((peVar2 != (edict_t *)0x0) && (piVar1 = peVar2->pvPrivateData, piVar1 != (int *)0x0)) &&
          (iVar3 = (**(code **)(piVar1[0x18] + 200))(piVar1), iVar3 != 0)) &&
         (iVar3 = strcasecmp(gpGlobals->pStringBase + *(int *)(*piVar1 + 0x1d0),param_1), iVar3 == 0
         )) {
        return piVar1;
      }
      iEntIndex = iEntIndex + 1;
    } while (iEntIndex <= gpGlobals->maxClients);
  }
  return (int *)0x0;
}

/* 000f7358  VoiceServerDebug  (109 bytes)
 * undefined VoiceServerDebug(char * param_1, ...)
 * called by: CVoiceGameMgr::ClientCommand
 */
/* VoiceServerDebug(char const *,...) */

void VoiceServerDebug(char *param_1,...)

{
  char local_100c [4100];
  
  if ((float)voice_serverdebug._12_4_ != 0.0) {
    vsnprintf(local_100c,0x1000,param_1,&stack0x00000008);
    (*g_engfuncs.pfnAlertMessage)(at_console,"%s",local_100c);
  }
  return;
}

/* 000f7e0c  __static_initialization_and_destruction_0  (220 bytes)
 * undefined __static_initialization_and_destruction_0(int param_1, int param_2)
 * called by: global.constructors.keyed.to.voice_serverdebug
 */
void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_2 == 0xffff) && (param_1 == 1)) {
    g_PlayerModEnable = 0;
    puVar1 = &g_BanMasks;
    iVar2 = 0x1f;
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -4;
    } while (iVar2 != -1);
    puVar1 = &g_SentGameRulesMasks;
    iVar2 = 0x1f;
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -4;
    } while (iVar2 != -1);
    puVar1 = &g_SentBanMasks;
    iVar2 = 0x1f;
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -4;
    } while (iVar2 != -1);
    g_bWantModEnable = 0;
  }
  return;
}

/* 000f7ee8  global.constructors.keyed.to.voice_serverdebug  (19 bytes)
 * undefined global.constructors.keyed.to.voice_serverdebug(void)
 */
/* global constructors keyed to voice_serverdebug */

void global_constructors_keyed_to_voice_serverdebug(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

/* 000f7efc  CVoiceGameMgr_type_info_function  (57 bytes)
 * undefined4 * CVoiceGameMgr_type_info_function(void)
 */
/* CVoiceGameMgr type_info function */

undefined4 * CVoiceGameMgr_type_info_function(void)

{
  if (CVoiceGameMgr_type_info_node == 0) {
    __rtti_user(&CVoiceGameMgr_type_info_node,"13CVoiceGameMgr");
  }
  return &CVoiceGameMgr_type_info_node;
}

/* 000f8f78  __static_initialization_and_destruction_0  (55 bytes)
 * undefined __static_initialization_and_destruction_0(int param_1, int param_2)
 * called by: CTSSharedEmitter::global.constructors.keyed.to.CTSSharedEmitter
 */
void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_2 == 0xffff) && (param_1 == 1)) {
    CTSSharedEmitter::CTSSharedEmitter((CTSSharedEmitter *)CTSSharedEmitter::s_Emitter);
  }
  return;
}

/* 000f8fc4  FixVelocity  (1 bytes)
 * undefined FixVelocity(void)
 */
void FixVelocity(void)

{
  return;
}

/* 000f8fc8  PseudoClimb  (564 bytes)
 * undefined PseudoClimb(void)
 */
void PseudoClimb(void)

{
  float fVar1;
  undefined4 *puVar2;
  longdouble lVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  float *local_1c;
  undefined4 *local_18;
  
  uStack_20 = 0xf8fd4;
  fVar1 = pmove->angles[0];
  if ((-60.0 <= fVar1) && (fVar1 <= 60.0)) {
    climb_4 = fVar1 < -30.0;
    savehull_3 = pmove->usehull;
    pmove->usehull = 2;
    vec_start_0 = pmove->origin[0];
    DAT_001a0484 = pmove->origin[1];
    DAT_001a0488 = pmove->origin[2] + pmove->view_ofs[2];
    if (climb_4 != '\0') {
      DAT_001a0488 = DAT_001a0488 + 40.0;
    }
    local_18 = &vec_start_0;
    vec_end_1 = pmove->forward[0] * 64.0 + vec_start_0;
    DAT_001a0490 = pmove->forward[1] * 64.0 + DAT_001a0484;
    DAT_001a0494 = DAT_001a0488;
    (*pmove->PM_PlayerTrace)((pmtrace_t *)trace_2,&vec_start_0,&vec_end_1,0,-1);
    puVar2 = &uStack_20;
    if ((float)trace_2._16_4_ == 1.0) {
      DAT_001a0488 = pmove->origin[2] + pmove->player_mins[savehull_3][2];
      vec_end_1 = pmove->forward[0] * 32.0 + vec_start_0;
      DAT_001a0490 = pmove->forward[1] * 32.0 + DAT_001a0484;
      DAT_001a0494 = DAT_001a0488;
      pmove->usehull = 2;
      (*pmove->PM_PlayerTrace)((pmtrace_t *)trace_2,local_1c,&vec_end_1,0,-1);
      puVar2 = (undefined4 *)auStack_24;
      if ((float)trace_2._16_4_ != 1.0) {
        lVar3 = Length(pmove->velocity);
        puVar2 = (undefined4 *)auStack_24;
        if (lVar3 < (longdouble)0.5 * (longdouble)pmove->maxspeed) {
          pmove->onground = -1;
          pmove->velocity[2] = pmove->frametime * 16.0 * 100.0 + pmove->velocity[2];
          PM_FixupGravityVelocity();
          puVar2 = (undefined4 *)auStack_24;
        }
      }
    }
    pmove->usehull = savehull_3;
    *(undefined4 *)((int)puVar2 + -0x10) = 1;
    *(undefined4 *)((int)puVar2 + -0x14) = 0xf91e8;
    PM_FixPlayerCrouchStuck(*(int *)((int)puVar2 + -0x10));
    *(undefined4 *)((int)puVar2 + -0x14) = 0xf91ed;
    PM_CatagorizePosition();
  }
  return;
}

/* 000f91fc  TSStandUp  (426 bytes)
 * undefined TSStandUp(void)
 */
void TSStandUp(void)

{
  newOrigin_7 = pmove->origin[0];
  DAT_001a0548 = pmove->origin[1];
  DAT_001a054c = pmove->origin[2];
  if (pmove->onground != -1) {
    i_5 = 0;
    do {
      (&newOrigin_7)[i_5] =
           (pmove->player_mins[1][i_5] - pmove->player_mins[0][i_5]) + (&newOrigin_7)[i_5];
      i_5 = i_5 + 1;
    } while (i_5 < 3);
  }
  (*pmove->PM_PlayerTrace)((pmtrace_t *)trace_6,&newOrigin_7,&newOrigin_7,0,-1);
  if (((pmove->cmd).buttons & 4) == 0) {
    if (trace_6._4_4_ == 0) {
      pmove->usehull = 0;
      (*pmove->PM_PlayerTrace)((pmtrace_t *)trace_6,&newOrigin_7,&newOrigin_7,0,-1);
      if (trace_6._4_4_ == 0) {
        pmove->view_ofs[2] = 28.0;
        pmove->origin[0] = newOrigin_7;
        pmove->origin[1] = DAT_001a0548;
        pmove->origin[2] = DAT_001a054c;
        PM_FixPlayerCrouchStuck(1);
        PM_CatagorizePosition();
        pmove->iuser4 = pmove->iuser4 & 0xfffffff7;
      }
      else {
        pmove->usehull = 1;
      }
    }
    else {
      pmove->usehull = 1;
      pmove->flags = pmove->flags | 0x4000;
    }
  }
  else {
    pmove->usehull = 1;
    pmove->view_ofs[2] = 16.0;
    pmove->iuser4 = pmove->iuser4 & 0xfffffff7;
  }
  return;
}

/* 000f93a8  TSGoDuck  (154 bytes)
 * undefined TSGoDuck(void)
 */
void TSGoDuck(void)

{
  if (pmove->usehull != 1) {
    pmove->usehull = 1;
    pmove->flags = pmove->flags | 0x4000;
    if (pmove->onground != -1) {
      i_8 = 0;
      do {
        pmove->origin[i_8] =
             pmove->origin[i_8] - (pmove->player_mins[1][i_8] - pmove->player_mins[0][i_8]);
        i_8 = i_8 + 1;
      } while (i_8 < 3);
      PM_FixPlayerCrouchStuck(1);
      PM_CatagorizePosition();
    }
  }
  return;
}

/* 000f9444  TSWallJump  (156 bytes)
 * undefined TSWallJump(void)
 */
void TSWallJump(void)

{
  pmove->onground = -1;
  if ((pmove->iuser4 & 0x1000) != 0) {
    speed_10 = 210.0;
    i_9 = 0;
    do {
      pmove->velocity[i_9] = -pmove->forward[i_9] * speed_10;
      i_9 = i_9 + 1;
    } while (i_9 < 2);
    pmove->velocity[2] = 236.64319;
    pmove->iuser4 = pmove->iuser4 & 0xffffefff;
  }
  PM_FixupGravityVelocity();
  FixVelocity();
  return;
}

/* 000f94e0  TSWallJumpClimb  (84 bytes)
 * undefined TSWallJumpClimb(void)
 */
void TSWallJumpClimb(void)

{
  pmove->onground = -1;
  if ((short)pmove->iuser4 < 0) {
    pmove->velocity[2] = 334.664;
    pmove->iuser4 = pmove->iuser4 & 0xffff7fff;
  }
  PM_FixupGravityVelocity();
  FixVelocity();
  return;
}

/* 000f9534  TSDive  (360 bytes)
 * undefined TSDive(void)
 */
void TSDive(void)

{
  if ((pmove->iuser4 & 0x100) == 0) {
    if ((pmove->iuser4 & 0x40) == 0) {
      divespeed_14 = 100;
      upspeed_15 = 10;
      pmove->iuser4 = pmove->iuser4 & 0xffffff7f;
    }
    else {
      divespeed_14 = 0x5a;
      upspeed_15 = 0x32;
      pmove->iuser4 = pmove->iuser4 & 0xffffffbf;
    }
  }
  else {
    divespeed_14 = 0x5a;
    upspeed_15 = 0x19;
    pmove->iuser4 = pmove->iuser4 & 0xfffffeff;
  }
  dir_13 = pmove->velocity[0];
  DAT_001a0568 = pmove->velocity[1];
  DAT_001a056c = pmove->velocity[2];
  VectorNormalize(&dir_13);
  if ((pmove->iuser4 & 0x800000) != 0) {
    VectorScale(pmove->forward,3.0,&dir_13);
  }
  pmove->velocity[0] = (float)divespeed_14 * dir_13 + pmove->velocity[0];
  pmove->velocity[1] = (float)divespeed_14 * DAT_001a0568 + pmove->velocity[1];
  pmove->velocity[2] = SQRT((float)(upspeed_15 * 0x640));
  pmove->onground = -1;
  pmove->iuser4 = pmove->iuser4 & 0xff7fffff;
  PM_FixupGravityVelocity();
  FixVelocity();
  return;
}

/* 000f96a0  TSHandle  (299 bytes)
 * undefined TSHandle(void)
 */
void TSHandle(void)

{
  if ((((pmove->cmd).buttons & 2) != 0) && (pmove->onground == -1)) {
    PseudoClimb();
  }
  if ((pmove->iuser4 & 1) != 0) {
    (pmove->cmd).forwardmove = (pmove->cmd).forwardmove * 0.5;
    (pmove->cmd).sidemove = (pmove->cmd).sidemove * 0.5;
    (pmove->cmd).upmove = (pmove->cmd).upmove * 0.5;
  }
  if ((pmove->iuser4 & 0x20) != 0) {
    (pmove->cmd).forwardmove = 0.0;
    (pmove->cmd).sidemove = (pmove->cmd).sidemove * 0.3;
    (pmove->cmd).upmove = (pmove->cmd).upmove * 0.3;
  }
  if ((pmove->iuser4 & 0x1c0U) != 0) {
    TSDive();
  }
  if ((pmove->iuser4 & 0x7000U) != 0) {
    TSWallJump();
  }
  if ((short)pmove->iuser4 < 0) {
    TSWallJumpClimb();
  }
  if ((pmove->iuser4 & 4) != 0) {
    TSGoDuck();
  }
  if ((pmove->iuser4 & 8) != 0) {
    TSStandUp();
  }
  return;
}

/* 000f97cc  CanJumpHigh  (372 bytes)
 * undefined4 CanJumpHigh(void)
 */
undefined4 CanJumpHigh(void)

{
  savehull_20 = pmove->usehull;
  dir_18 = pmove->velocity[0];
  DAT_001a0594 = pmove->velocity[1];
  DAT_001a0598 = pmove->velocity[2];
  VectorNormalize(&dir_18);
  vec_start_16 = pmove->origin[0];
  DAT_001a057c = pmove->origin[1];
  DAT_001a0580 = pmove->origin[2];
  vec_end_17 = dir_18 * 128.0 + vec_start_16;
  DAT_001a0588 = DAT_001a0594 * 128.0 + DAT_001a057c;
  DAT_001a058c = DAT_001a0580;
  pmove->usehull = 1;
  (*pmove->PM_PlayerTrace)((pmtrace_t *)trace_19,&vec_start_16,&vec_end_17,0,-1);
  if ((float)trace_19._16_4_ != 1.0) {
    vec_end_17 = dir_18 * 164.0 + pmove->origin[0];
    DAT_001a0588 = DAT_001a0594 * 164.0 + pmove->origin[1];
    DAT_001a058c = pmove->origin[2];
    content_21 = (*pmove->PM_PointContents)(&vec_end_17,(int *)0x0);
    if ((content_21 != -2) && (content_21 != -6)) {
      return 1;
    }
  }
  pmove->usehull = savehull_20;
  return 0;
}

/* 000f9944  PM_Jump  (817 bytes)
 * undefined PM_Jump(void)
 */
void PM_Jump(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (pmove->dead == 0) {
    uVar1 = pmove->iuser4;
    if ((uVar1 & 0x20) != 0) {
      return;
    }
    if ((uVar1 & 0x10) != 0) {
      return;
    }
    if ((uVar1 & 0x10000) != 0) {
      return;
    }
    if ((uVar1 & 0x20000) != 0) {
      return;
    }
    if ((uVar1 & 0xc00) != 0) {
      return;
    }
    if ((uVar1 & 4) != 0) {
      return;
    }
    if (pmove->waterjumptime != 0.0) {
      pmove->waterjumptime = pmove->waterjumptime - (float)(pmove->cmd).msec;
      if (0.0 <= pmove->waterjumptime) {
        return;
      }
      pmove->waterjumptime = 0.0;
      return;
    }
    if (1 < pmove->waterlevel) {
      pmove->onground = -1;
      if (pmove->watertype == -3) {
        pmove->velocity[2] = 100.0;
      }
      else if (pmove->watertype == -4) {
        pmove->velocity[2] = 80.0;
      }
      else {
        pmove->velocity[2] = 50.0;
      }
      if (0.0 < pmove->flSwimTime) {
        return;
      }
      pmove->flSwimTime = 1000.0;
      iVar2 = (*pmove->RandomLong)(0,3);
      switch(iVar2) {
      case 0:
        pcVar4 = "player/pl_wade1.wav";
        break;
      case 1:
        pcVar4 = "player/pl_wade2.wav";
        break;
      case 2:
        pcVar4 = "player/pl_wade3.wav";
        break;
      case 3:
        pcVar4 = "player/pl_wade4.wav";
        break;
      default:
        return;
      }
      (*pmove->PM_PlaySound)(4,pcVar4,1.0,0.8,0,100);
      return;
    }
    if (pmove->onground != -1) {
      if ((pmove->oldbuttons & 2) != 0) {
        return;
      }
      pmove->onground = -1;
      PM_PreventMegaBunnyJumping();
      uVar5 = 0x3f800000;
      uVar3 = PM_MapTextureTypeStepType(pmove->chtexturetype);
      PM_PlayStepSound(uVar3,uVar5);
      pcVar4 = (*pmove->PM_Info_ValueForKey)(pmove->physinfo,"mj");
      iVar2 = __strtol_internal(pcVar4,0,10,0);
      canhighjump_24 = (uint)(iVar2 == 1);
      if ((((pmove->bInDuck == 0) && ((pmove->flags & 0x4000) == 0)) || (canhighjump_24 == 0)) ||
         ((((pmove->cmd).buttons & 4) == 0 || (pmove->flDuckTime <= 0.0)))) {
        canhighjump_24 = 0;
      }
      else {
        pmove->velocity[2] = 400.0;
        pmove->iuser4 = pmove->iuser4 | 0x200000;
      }
      if (canhighjump_24 == 0) {
        pmove->velocity[2] = 236.64319;
      }
      PM_FixupGravityVelocity();
    }
  }
  pmove->oldbuttons = pmove->oldbuttons | 2;
  return;
}

/* 000f9c94  PM_CheckParamters  (736 bytes)
 * undefined PM_CheckParamters(void)
 */
void PM_CheckParamters(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longdouble lVar4;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar3 = (pmove->cmd).forwardmove;
  fVar1 = (pmove->cmd).sidemove;
  fVar2 = (pmove->cmd).upmove;
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  fVar3 = pmove->clientmaxspeed;
  if (fVar3 != 0.0) {
    fVar2 = pmove->maxspeed;
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
    pmove->maxspeed = fVar2;
  }
  if (((fVar1 != 0.0) && (pmove->maxspeed < fVar1)) &&
     (fVar1 = pmove->maxspeed / fVar1, 0 < pmove->iuser1)) {
    (pmove->cmd).forwardmove = fVar1 * (pmove->cmd).forwardmove;
    (pmove->cmd).sidemove = fVar1 * (pmove->cmd).sidemove;
    (pmove->cmd).upmove = fVar1 * (pmove->cmd).upmove;
  }
  if ((((pmove->flags & 0x1001000U) != 0) || (pmove->dead != 0)) ||
     ((pmove->iuser4 & 0x10c10U) != 0)) {
    (pmove->cmd).forwardmove = 0.0;
    (pmove->cmd).sidemove = 0.0;
    (pmove->cmd).upmove = 0.0;
  }
  if ((pmove->iuser4 & 0x100000) != 0) {
    (pmove->cmd).forwardmove = (pmove->cmd).forwardmove * 0.5;
    (pmove->cmd).sidemove = (pmove->cmd).sidemove * 0.25;
    (pmove->cmd).upmove = (pmove->cmd).upmove * 0.25;
    if (((pmove->cmd).buttons & 2) == 0) {
      pmove->gravity = 1.0;
    }
    else {
      if (0.0 <= pmove->velocity[2]) {
        fVar3 = 0.3;
      }
      else {
        fVar3 = 0.75;
      }
      pmove->gravity = fVar3;
    }
  }
  PM_DropPunchAngle(pmove->punchangle);
  if ((pmove->dead == 0) && ((pmove->iuser4 & 2) == 0)) {
    local_1c = (pmove->cmd).viewangles[0] + pmove->punchangle[0];
    local_18 = (pmove->cmd).viewangles[1] + pmove->punchangle[1];
    local_14 = (pmove->cmd).viewangles[2] + pmove->punchangle[2];
    lVar4 = PM_CalcRoll(&local_1c,pmove->velocity,pmove->movevars->rollangle,
                        pmove->movevars->rollspeed);
    pmove->angles[2] = (float)(lVar4 * (longdouble)4.0);
    pmove->angles[0] = local_1c;
    pmove->angles[1] = local_18;
    if ((uint)pmove->player_index < 0x20) {
      *(vec_t *)(OldrotArray + pmove->player_index * 4) = pmove->angles[1];
    }
  }
  else if ((uint)pmove->player_index < 0x20) {
    pmove->angles[1] = *(vec_t *)(OldrotArray + pmove->player_index * 4);
  }
  if (pmove->dead != 0) {
    pmove->view_ofs[2] = -8.0;
  }
  if (180.0 < pmove->angles[1]) {
    pmove->angles[1] = pmove->angles[1] - 360.0;
  }
  return;
}

/* 000f9f7c  PM_Duck  (743 bytes)
 * undefined PM_Duck(void)
 */
void PM_Duck(void)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  longdouble lVar5;
  
  uVar4 = (uint)(pmove->cmd).buttons;
  uVar1 = pmove->oldbuttons;
  if (((pmove->cmd).buttons & 4) == 0) {
    pmove->oldbuttons = pmove->oldbuttons & 0xfffffffb;
  }
  else {
    pmove->oldbuttons = uVar1 | 4;
  }
  uVar2 = pmove->iuser4;
  if ((((((uVar2 & 4) == 0) && ((uVar2 & 8) == 0)) && ((uVar2 & 0x20) == 0)) &&
      (((uVar2 & 0x10) == 0 && ((uVar2 & 0x10000) == 0)))) &&
     (((uVar2 & 0x20000) == 0 && ((uVar2 & 0xc00) == 0)))) {
    if ((pmove->iuser3 == 0) && (pmove->dead == 0)) {
      if ((pmove->flags & 0x4000) != 0) {
        (pmove->cmd).forwardmove = (pmove->cmd).forwardmove * 0.333;
        (pmove->cmd).sidemove = (pmove->cmd).sidemove * 0.333;
        (pmove->cmd).upmove = (pmove->cmd).upmove * 0.333;
      }
      if (((((pmove->cmd).buttons & 4) != 0) || (pmove->bInDuck != 0)) ||
         ((pmove->flags & 0x4000) != 0)) {
        if (((pmove->cmd).buttons & 4) == 0) {
          PM_UnDuck();
        }
        else {
          if ((((uVar4 ^ uVar1) & uVar4 & 4) != 0) && ((pmove->flags & 0x4000) == 0)) {
            pmove->flDuckTime = 1000.0;
            pmove->bInDuck = 1;
          }
          fVar3 = 1.0 - pmove->flDuckTime * 0.001;
          if (fVar3 < 0.0) {
            fVar3 = 0.0;
          }
          if (pmove->bInDuck != 0) {
            if ((pmove->flDuckTime * 0.001 <= 0.6) || (pmove->onground == -1)) {
              pmove->usehull = 1;
              pmove->view_ofs[2] = 16.0;
              pmove->flags = pmove->flags | 0x4000;
              pmove->bInDuck = 0;
              if (pmove->onground != -1) {
                pmove->origin[0] =
                     pmove->origin[0] - (pmove->player_mins[1][0] - pmove->player_mins[0][0]);
                pmove->origin[1] =
                     pmove->origin[1] - (pmove->player_mins[1][1] - pmove->player_mins[0][1]);
                pmove->origin[2] =
                     pmove->origin[2] - (pmove->player_mins[1][2] - pmove->player_mins[0][2]);
                PM_FixPlayerCrouchStuck(1);
                PM_CatagorizePosition();
              }
            }
            else {
              lVar5 = PM_SplineFraction(fVar3,2.5);
              pmove->view_ofs[2] =
                   (float)(((longdouble)1.0 - lVar5) * (longdouble)28.0 +
                          ((longdouble)16.0 - (longdouble)18.0) * lVar5);
            }
          }
        }
      }
    }
    else if ((pmove->flags & 0x4000) != 0) {
      PM_UnDuck();
    }
  }
  return;
}

/* 000fa26c  PM_WalkMove  (1290 bytes)
 * undefined PM_WalkMove(void)
 */
void PM_WalkMove(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  longdouble lVar4;
  undefined1 local_e4 [8];
  pmtrace_t local_dc;
  vec_t local_98;
  vec_t local_94;
  vec_t local_90;
  vec_t local_8c;
  vec_t local_88;
  float local_84;
  vec_t local_80;
  vec_t local_7c;
  vec_t local_78;
  vec_t local_70;
  vec_t local_6c;
  vec_t local_68;
  float local_64;
  vec_t local_60;
  vec_t local_5c;
  vec_t local_58;
  float local_4c;
  float local_48;
  vec_t local_44;
  vec_t local_40;
  float local_3c;
  float local_38;
  vec_t local_34;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  local_e4._0_4_ = (pmove->cmd).forwardmove;
  if ((float)local_e4._0_4_ < 0.0) {
    local_e4._0_4_ = (float)local_e4._0_4_ * 0.8;
  }
  fVar1 = (pmove->cmd).sidemove;
  pmove->forward[2] = 0.0;
  pmove->right[2] = 0.0;
  VectorNormalize(pmove->forward);
  VectorNormalize(pmove->right);
  local_2c = fVar1 * pmove->right[0] + (float)local_e4._0_4_ * pmove->forward[0];
  local_28 = fVar1 * pmove->right[1] + (float)local_e4._0_4_ * pmove->forward[1];
  local_14 = 0;
  local_24 = 0;
  local_1c = local_2c;
  local_18 = local_28;
  lVar4 = (longdouble)VectorNormalize(&local_2c);
  if ((longdouble)pmove->maxspeed < lVar4) {
    VectorScale(&local_1c,(float)((longdouble)pmove->maxspeed / lVar4),&local_1c);
    lVar4 = (longdouble)pmove->maxspeed;
  }
  pmove->velocity[2] = 0.0;
  PM_Accelerate(&local_2c,(float)lVar4,pmove->movevars->accelerate);
  pmove->velocity[2] = 0.0;
  pmove->velocity[0] = pmove->velocity[0] + pmove->basevelocity[0];
  pmove->velocity[1] = pmove->velocity[1] + pmove->basevelocity[1];
  pmove->velocity[2] = pmove->velocity[2] + pmove->basevelocity[2];
  lVar4 = Length(pmove->velocity);
  if (lVar4 < (longdouble)1.0) {
    pmove->velocity[0] = 0.0;
    pmove->velocity[1] = 0.0;
    pmove->velocity[2] = 0.0;
    return;
  }
  iVar2 = pmove->onground;
  local_4c = pmove->velocity[0] * pmove->frametime + pmove->origin[0];
  local_48 = pmove->velocity[1] * pmove->frametime + pmove->origin[1];
  local_44 = pmove->origin[2];
  local_3c = local_4c;
  local_38 = local_48;
  local_34 = local_44;
  (*pmove->PM_PlayerTrace)(&local_dc,pmove->origin,&local_3c,0,-1);
  if ((float)local_dc.inwater == 1.0) {
    pmove->origin[0] = local_dc.fraction;
    pmove->origin[1] = local_dc.endpos[0];
    pmove->origin[2] = local_dc.endpos[1];
    return;
  }
  if ((iVar2 == -1) && (pmove->waterlevel == 0)) {
    return;
  }
  if (pmove->waterjumptime != 0.0) {
    return;
  }
  local_60 = pmove->origin[0];
  local_5c = pmove->origin[1];
  local_58 = pmove->origin[2];
  local_70 = pmove->velocity[0];
  local_6c = pmove->velocity[1];
  local_68 = pmove->velocity[2];
  PM_FlyMove();
  local_80 = pmove->origin[0];
  local_7c = pmove->origin[1];
  local_78 = pmove->origin[2];
  local_90 = pmove->velocity[0];
  local_8c = pmove->velocity[1];
  local_88 = pmove->velocity[2];
  pmove->origin[0] = local_60;
  pmove->origin[1] = local_5c;
  pmove->origin[2] = local_58;
  pmove->velocity[0] = local_70;
  pmove->velocity[1] = local_6c;
  pmove->velocity[2] = local_68;
  local_40 = pmove->origin[0];
  local_3c = pmove->origin[1];
  local_38 = pmove->origin[2] + pmove->movevars->stepsize;
  (*pmove->PM_PlayerTrace)((pmtrace_t *)(local_e4 + 4),pmove->origin,&local_40,0,-1);
  if ((local_e4._4_4_ == 0) && ((float)local_e4._0_4_ == 0.0)) {
    pmove->origin[0] = (vec_t)local_dc.inwater;
    pmove->origin[1] = local_dc.fraction;
    pmove->origin[2] = local_dc.endpos[0];
  }
  PM_FlyMove();
  local_44 = pmove->origin[0];
  local_40 = pmove->origin[1];
  local_3c = pmove->origin[2] - pmove->movevars->stepsize;
  (*pmove->PM_PlayerTrace)((pmtrace_t *)local_e4,pmove->origin,&local_44,0,-1);
  if (0.7 <= local_dc.endpos[2]) {
    if (((float)local_e4._0_4_ == 0.0) && (fVar1 == 0.0)) {
      pmove->origin[0] = (vec_t)local_dc.inopen;
      pmove->origin[1] = (vec_t)local_dc.inwater;
      pmove->origin[2] = local_dc.fraction;
    }
    pmove->up[0] = pmove->origin[0];
    pmove->up[1] = pmove->origin[1];
    pmove->up[2] = pmove->origin[2];
    fVar1 = pmove->up[0] - local_68;
    fVar3 = pmove->up[1] - local_64;
    if ((local_84 - local_64) * (local_84 - local_64) +
        (local_88 - local_68) * (local_88 - local_68) <= fVar3 * fVar3 + fVar1 * fVar1)
    goto LAB_000fa768;
  }
  pmove->origin[0] = local_88;
  pmove->origin[1] = local_84;
  pmove->origin[2] = local_80;
  pmove->velocity[0] = local_98;
  pmove->velocity[1] = local_94;
LAB_000fa768:
  pmove->velocity[2] = local_90;
  return;
}

/* 000fa77c  PM_ShowClipBox  (1 bytes)
 * undefined PM_ShowClipBox(void)
 */
void PM_ShowClipBox(void)

{
  return;
}

/* 000fa780  PM_ParticleLine  (268 bytes)
 * undefined PM_ParticleLine(float * param_1, float * param_2, undefined4 param_3, undefined4 param_4, float param_5)
 */
void PM_ParticleLine(float *param_1,float *param_2,int param_3,float param_4,float param_5)

{
  longdouble lVar1;
  float local_4c;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  local_3c = *param_2 - *param_1;
  local_38 = param_2[1] - param_1[1];
  local_34 = param_2[2] - param_1[2];
  lVar1 = (longdouble)VectorNormalize(&local_3c);
  local_4c = 0.0;
  if (0.0 <= (float)lVar1) {
    do {
      local_2c = local_4c * local_3c + *param_1;
      local_28 = local_4c * local_38 + param_1[1];
      local_24 = local_4c * local_34 + param_1[2];
      (*pmove->PM_Particle)(&local_2c,param_3,param_4,0,(int)ROUND(param_5));
      local_4c = local_4c + 2.0;
    } while (local_4c <= (float)lVar1);
  }
  return;
}

/* 000fa88c  PM_DrawRectangle  (113 bytes)
 * undefined PM_DrawRectangle(float * param_1, float * param_2, float * param_3, float * param_4, undefined4 param_5, undefined4 param_6)
 */
void PM_DrawRectangle(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5
                     ,undefined4 param_6)

{
  PM_ParticleLine(param_1,param_2,param_5,param_6,0.0);
  PM_ParticleLine(param_2,param_4,param_5,param_6,0.0);
  PM_ParticleLine(param_4,param_3,param_5,param_6,0.0);
  PM_ParticleLine(param_3,param_1,param_5,param_6,0.0);
  return;
}

/* 000fa900  PM_DrawPhysEntBBox  (1798 bytes)
 * undefined PM_DrawPhysEntBBox(int param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Removing unreachable block (ram,0x000fa9ca) */
/* WARNING: Removing unreachable block (ram,0x000fadfe) */

void PM_DrawPhysEntBBox(int param_1,undefined4 param_2,undefined4 param_3)

{
  playermove_t *ppVar1;
  uint uVar2;
  vec_t vVar3;
  vec_t vVar4;
  vec_t vVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  int *piVar14;
  int *local_fc;
  int *local_f8;
  uint local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c [24];
  float local_3c;
  float local_38;
  float local_34;
  vec_t local_2c;
  vec_t local_28;
  vec_t local_24;
  undefined1 local_1c [8];
  undefined1 local_14 [4];
  
  ppVar1 = pmove;
  if ((param_1 < pmove->numphysent) && (0 < param_1)) {
    if (pmove->physents[param_1].model == (model_s *)0x0) {
      local_f0 = 0;
      puVar6 = local_1c;
      puVar7 = puVar6;
      puVar11 = puVar6;
      do {
        if ((local_f0 & 2) == 0) {
          vVar3 = pmove->physents[param_1].maxs[1];
        }
        else {
          vVar3 = pmove->physents[param_1].mins[1];
        }
        if ((local_f0 & 4) == 0) {
          vVar4 = pmove->physents[param_1].maxs[2];
        }
        else {
          vVar4 = pmove->physents[param_1].mins[2];
        }
        local_38 = vVar3 + pmove->physents[param_1].origin[1];
        local_34 = vVar4 + pmove->physents[param_1].origin[2];
        *(float *)(puVar6 + -0x80) =
             pmove->physents[param_1].maxs[0] + pmove->physents[param_1].origin[0];
        *(float *)(puVar11 + -0x7c) = local_38;
        *(float *)(puVar7 + -0x78) = local_34;
        uVar2 = local_f0 + 1;
        if ((uVar2 & 1) == 0) {
          vVar3 = pmove->physents[param_1].maxs[0];
        }
        else {
          vVar3 = pmove->physents[param_1].mins[0];
        }
        if ((uVar2 & 2) == 0) {
          vVar4 = pmove->physents[param_1].maxs[1];
        }
        else {
          vVar4 = pmove->physents[param_1].mins[1];
        }
        if ((uVar2 & 4) == 0) {
          vVar5 = pmove->physents[param_1].maxs[2];
        }
        else {
          vVar5 = pmove->physents[param_1].mins[2];
        }
        local_3c = vVar3 + pmove->physents[param_1].origin[0];
        local_38 = vVar4 + pmove->physents[param_1].origin[1];
        local_34 = vVar5 + pmove->physents[param_1].origin[2];
        *(float *)(puVar6 + -0x74) = local_3c;
        *(float *)(puVar11 + -0x70) = local_38;
        *(float *)(puVar7 + -0x6c) = local_34;
        puVar7 = puVar7 + 0x18;
        puVar11 = puVar11 + 0x18;
        puVar6 = puVar6 + 0x18;
        local_f0 = local_f0 + 2;
      } while ((int)local_f0 < 8);
      local_f0 = 0;
      piVar9 = &PM_boxpnt;
      piVar14 = piVar9;
      local_fc = piVar9;
      local_f8 = piVar9;
      do {
        PM_DrawRectangle(local_9c + local_f8[1] * 3,local_9c + *piVar14 * 3,
                         local_9c + local_fc[2] * 3,local_9c + piVar9[3] * 3,param_2,param_3);
        PM_DrawRectangle(local_9c + local_f8[5] * 3,local_9c + piVar14[4] * 3,
                         local_9c + local_fc[6] * 3,local_9c + piVar9[7] * 3,param_2,param_3);
        local_f8 = local_f8 + 8;
        piVar14 = piVar14 + 8;
        local_fc = local_fc + 8;
        piVar9 = piVar9 + 8;
        local_f0 = local_f0 + 2;
      } while ((int)local_f0 < 6);
    }
    else {
      local_2c = pmove->physents[param_1].origin[0];
      local_28 = pmove->physents[param_1].origin[1];
      local_24 = pmove->physents[param_1].origin[2];
      (*pmove->PM_GetModelBounds)(pmove->physents[param_1].model,&local_ac,&local_bc);
      local_f0 = 0;
      puVar6 = local_1c;
      puVar7 = puVar6;
      puVar11 = puVar6;
      do {
        if ((local_f0 & 2) == 0) {
          local_38 = local_b8 + 0.0;
        }
        else {
          local_38 = local_a8 - 0.0;
        }
        if ((local_f0 & 4) == 0) {
          local_34 = local_b4 + 0.0;
        }
        else {
          local_34 = local_a4 - 0.0;
        }
        *(float *)(puVar7 + -0x80) = local_bc + 0.0;
        *(float *)(puVar6 + -0x7c) = local_38;
        *(float *)(puVar11 + -0x78) = local_34;
        uVar2 = local_f0 + 1;
        if ((uVar2 & 1) == 0) {
          local_3c = local_bc + 0.0;
        }
        else {
          local_3c = local_ac - 0.0;
        }
        if ((uVar2 & 2) == 0) {
          local_38 = local_b8 + 0.0;
        }
        else {
          local_38 = local_a8 - 0.0;
        }
        if ((uVar2 & 4) == 0) {
          local_34 = local_b4 + 0.0;
        }
        else {
          local_34 = local_a4 - 0.0;
        }
        *(float *)(puVar7 + -0x74) = local_3c;
        *(float *)(puVar6 + -0x70) = local_38;
        *(float *)(puVar11 + -0x6c) = local_34;
        puVar11 = puVar11 + 0x18;
        puVar6 = puVar6 + 0x18;
        puVar7 = puVar7 + 0x18;
        local_f0 = local_f0 + 2;
      } while ((int)local_f0 < 8);
      if (((ppVar1->physents[param_1].angles[0] != 0.0) ||
          (ppVar1->physents[param_1].angles[1] != 0.0)) ||
         (ppVar1->physents[param_1].angles[2] != 0.0)) {
        AngleVectorsTranspose(ppVar1->physents[param_1].angles,&local_cc,&local_dc,&local_ec);
        local_f0 = 0;
        puVar6 = local_14;
        puVar7 = puVar6;
        puVar11 = puVar6;
        puVar8 = puVar6;
        puVar10 = puVar6;
        puVar12 = puVar6;
        do {
          local_3c = *(float *)(puVar7 + -0x88);
          local_38 = *(float *)(puVar10 + -0x84);
          local_34 = *(float *)(puVar11 + -0x80);
          *(float *)(puVar12 + -0x88) =
               *(float *)(puVar11 + -0x80) * local_c4 +
               *(float *)(puVar10 + -0x84) * local_c8 + *(float *)(puVar7 + -0x88) * local_cc;
          *(float *)(puVar6 + -0x84) =
               local_34 * local_d4 + local_38 * local_d8 + local_3c * local_dc;
          *(float *)(puVar8 + -0x80) =
               local_34 * local_e4 + local_38 * local_e8 + local_3c * local_ec;
          local_3c = *(float *)(puVar7 + -0x7c);
          local_38 = *(float *)(puVar10 + -0x78);
          local_34 = *(float *)(puVar11 + -0x74);
          *(float *)(puVar12 + -0x7c) =
               *(float *)(puVar11 + -0x74) * local_c4 +
               *(float *)(puVar10 + -0x78) * local_c8 + *(float *)(puVar7 + -0x7c) * local_cc;
          *(float *)(puVar6 + -0x78) =
               local_34 * local_d4 + local_38 * local_d8 + local_3c * local_dc;
          *(float *)(puVar8 + -0x74) =
               local_34 * local_e4 + local_38 * local_e8 + local_3c * local_ec;
          puVar8 = puVar8 + 0x18;
          puVar6 = puVar6 + 0x18;
          puVar12 = puVar12 + 0x18;
          puVar11 = puVar11 + 0x18;
          puVar10 = puVar10 + 0x18;
          puVar7 = puVar7 + 0x18;
          local_f0 = local_f0 + 2;
        } while ((int)local_f0 < 8);
      }
      local_f0 = 0;
      puVar6 = local_14;
      puVar7 = puVar6;
      puVar11 = puVar6;
      puVar8 = puVar6;
      puVar10 = puVar6;
      puVar12 = puVar6;
      do {
        *(float *)(puVar10 + -0x88) = *(float *)(puVar7 + -0x88) + local_2c;
        *(float *)(puVar12 + -0x84) = *(float *)(puVar11 + -0x84) + local_28;
        *(float *)(puVar8 + -0x80) = *(float *)(puVar6 + -0x80) + local_24;
        *(float *)(puVar10 + -0x7c) = *(float *)(puVar7 + -0x7c) + local_2c;
        *(float *)(puVar12 + -0x78) = *(float *)(puVar11 + -0x78) + local_28;
        *(float *)(puVar8 + -0x74) = *(float *)(puVar6 + -0x74) + local_24;
        *(float *)(puVar10 + -0x70) = *(float *)(puVar7 + -0x70) + local_2c;
        *(float *)(puVar12 + -0x6c) = *(float *)(puVar11 + -0x6c) + local_28;
        *(float *)(puVar8 + -0x68) = *(float *)(puVar6 + -0x68) + local_24;
        *(float *)(puVar10 + -100) = *(float *)(puVar7 + -100) + local_2c;
        *(float *)(puVar12 + -0x60) = *(float *)(puVar11 + -0x60) + local_28;
        *(float *)(puVar8 + -0x5c) = *(float *)(puVar6 + -0x5c) + local_24;
        puVar8 = puVar8 + 0x30;
        puVar6 = puVar6 + 0x30;
        puVar12 = puVar12 + 0x30;
        puVar11 = puVar11 + 0x30;
        puVar10 = puVar10 + 0x30;
        puVar7 = puVar7 + 0x30;
        local_f0 = local_f0 + 4;
      } while ((int)local_f0 < 8);
      local_f0 = 0;
      iVar13 = 0;
      do {
        PM_DrawRectangle(local_9c + *(int *)((int)&DAT_00124d24 + iVar13) * 3,
                         local_9c + *(int *)((int)&PM_boxpnt + iVar13) * 3,
                         local_9c + *(int *)((int)&DAT_00124d28 + iVar13) * 3,
                         local_9c + *(int *)((int)&DAT_00124d2c + iVar13) * 3,param_2,param_3);
        iVar13 = iVar13 + 0x10;
        local_f0 = local_f0 + 1;
      } while ((int)local_f0 < 6);
    }
  }
  return;
}

/* 000fb014  PM_DrawBBox  (703 bytes)
 * undefined PM_DrawBBox(float * param_1, float * param_2, float * param_3, undefined4 param_4, undefined4 param_5)
 */
/* WARNING: Removing unreachable block (ram,0x000fb054) */

void PM_DrawBBox(float *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int *local_98;
  int *local_94;
  int *local_90;
  float local_8c [24];
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_1c [12];
  
  uVar6 = 0;
  puVar2 = local_1c;
  puVar3 = puVar2;
  puVar5 = puVar2;
  do {
    if ((uVar6 & 2) == 0) {
      local_28 = param_2[1] + 0.0;
    }
    else {
      local_28 = param_1[1] - 0.0;
    }
    if ((uVar6 & 4) == 0) {
      local_24 = param_2[2] + 0.0;
    }
    else {
      local_24 = param_1[2] - 0.0;
    }
    local_28 = local_28 + param_3[1];
    local_24 = local_24 + param_3[2];
    *(float *)(puVar2 + -0x70) = *param_2 + 0.0 + *param_3;
    *(float *)(puVar3 + -0x6c) = local_28;
    *(float *)(puVar5 + -0x68) = local_24;
    uVar1 = uVar6 + 1;
    if ((uVar1 & 1) == 0) {
      local_2c = *param_2 + 0.0;
    }
    else {
      local_2c = *param_1 - 0.0;
    }
    if ((uVar1 & 2) == 0) {
      local_28 = param_2[1] + 0.0;
    }
    else {
      local_28 = param_1[1] - 0.0;
    }
    if ((uVar1 & 4) == 0) {
      local_24 = param_2[2] + 0.0;
    }
    else {
      local_24 = param_1[2] - 0.0;
    }
    local_2c = local_2c + *param_3;
    local_28 = local_28 + param_3[1];
    local_24 = local_24 + param_3[2];
    *(float *)(puVar2 + -100) = local_2c;
    *(float *)(puVar3 + -0x60) = local_28;
    *(float *)(puVar5 + -0x5c) = local_24;
    puVar5 = puVar5 + 0x18;
    puVar3 = puVar3 + 0x18;
    puVar2 = puVar2 + 0x18;
    uVar6 = uVar6 + 2;
  } while ((int)uVar6 < 8);
  iVar7 = 0;
  piVar4 = &PM_boxpnt;
  local_98 = piVar4;
  local_94 = piVar4;
  local_90 = piVar4;
  do {
    PM_DrawRectangle(local_8c + local_90[1] * 3,local_8c + *piVar4 * 3,local_8c + local_94[2] * 3,
                     local_8c + local_98[3] * 3,param_4,param_5);
    PM_DrawRectangle(local_8c + local_90[5] * 3,local_8c + piVar4[4] * 3,local_8c + local_94[6] * 3,
                     local_8c + local_98[7] * 3,param_4,param_5);
    local_90 = local_90 + 8;
    piVar4 = piVar4 + 8;
    local_94 = local_94 + 8;
    local_98 = local_98 + 8;
    iVar7 = iVar7 + 2;
  } while (iVar7 < 6);
  return;
}

/* 000fb2dc  PM_ViewEntity  (249 bytes)
 * undefined PM_ViewEntity(void)
 */
void PM_ViewEntity(void)

{
  pmtrace_t local_ac;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c [4];
  float local_2c [4];
  float local_1c;
  float local_18;
  float local_14;
  
  AngleVectors(pmove->angles,&local_1c,local_2c,local_3c);
  local_4c = pmove->origin[0];
  local_48 = pmove->origin[1];
  local_44 = pmove->origin[2];
  local_5c = local_1c * 256.0 + local_4c;
  local_58 = local_18 * 256.0 + local_48;
  local_54 = local_14 * 256.0 + local_44;
  (*pmove->PM_PlayerTrace)(&local_ac,&local_4c,&local_5c,2,-1);
  if (0 < (int)local_ac.plane.dist) {
    PM_DrawPhysEntBBox((int)local_ac.plane.dist,0x6f,0x3e99999a);
  }
  return;
}

/* 000fb3d8  anglemod  (87 bytes)
 * longdouble anglemod(float param_1)
 */
longdouble anglemod(float param_1)

{
  return (longdouble)((float)((int)ROUND(param_1 * 182.04445) & 0xffff) * 0.005493164);
}

/* 000fb430  AngleVectors  (282 bytes)
 * undefined AngleVectors(float * param_1, float * param_2, float * param_3, float * param_4)
 */
void AngleVectors(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longdouble lVar8;
  
  lVar8 = (longdouble)fsin((longdouble)(param_1[1] * 0.017453292));
  fVar1 = (float)lVar8;
  lVar8 = (longdouble)fcos((longdouble)(param_1[1] * 0.017453292));
  fVar2 = (float)lVar8;
  lVar8 = (longdouble)fsin((longdouble)(*param_1 * 0.017453292));
  fVar3 = (float)lVar8;
  lVar8 = (longdouble)fcos((longdouble)(*param_1 * 0.017453292));
  fVar4 = (float)lVar8;
  lVar8 = (longdouble)fsin((longdouble)(param_1[2] * 0.017453292));
  fVar5 = (float)lVar8;
  lVar8 = (longdouble)fcos((longdouble)(param_1[2] * 0.017453292));
  fVar6 = (float)lVar8;
  if (param_2 != (float *)0x0) {
    *param_2 = fVar4 * fVar2;
    param_2[1] = fVar4 * fVar1;
    param_2[2] = -fVar3;
  }
  if (param_3 != (float *)0x0) {
    fVar7 = fVar3 * fVar5 * -1.0;
    *param_3 = -fVar1 * fVar6 * -1.0 + fVar7 * fVar2;
    param_3[1] = fVar6 * -1.0 * fVar2 + fVar7 * fVar1;
    param_3[2] = fVar5 * -1.0 * fVar4;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar5 * fVar1 + fVar6 * fVar3 * fVar2;
    param_4[1] = -fVar5 * fVar2 + fVar6 * fVar3 * fVar1;
    param_4[2] = fVar6 * fVar4;
  }
  return;
}

/* 000fb54c  AngleVectorsTranspose  (294 bytes)
 * undefined AngleVectorsTranspose(float * param_1, float * param_2, float * param_3, float * param_4)
 */
void AngleVectorsTranspose(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longdouble lVar7;
  
  lVar7 = (longdouble)fsin((longdouble)(param_1[1] * 0.017453292));
  fVar1 = (float)lVar7;
  lVar7 = (longdouble)fcos((longdouble)(param_1[1] * 0.017453292));
  fVar2 = (float)lVar7;
  lVar7 = (longdouble)fsin((longdouble)(*param_1 * 0.017453292));
  fVar3 = (float)lVar7;
  lVar7 = (longdouble)fcos((longdouble)(*param_1 * 0.017453292));
  fVar4 = (float)lVar7;
  lVar7 = (longdouble)fsin((longdouble)(param_1[2] * 0.017453292));
  fVar5 = (float)lVar7;
  lVar7 = (longdouble)fcos((longdouble)(param_1[2] * 0.017453292));
  fVar6 = (float)lVar7;
  if (param_2 != (float *)0x0) {
    *param_2 = fVar4 * fVar2;
    param_2[1] = -fVar1 * fVar6 + fVar5 * fVar3 * fVar2;
    param_2[2] = fVar5 * fVar1 + fVar6 * fVar3 * fVar2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar4 * fVar1;
    param_3[1] = fVar6 * fVar2 + fVar5 * fVar3 * fVar1;
    param_3[2] = fVar6 * fVar3 * fVar1 + -fVar5 * fVar2;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = -fVar3;
    param_4[1] = fVar5 * fVar4;
    param_4[2] = fVar6 * fVar4;
  }
  return;
}

/* 000fb674  AngleMatrix  (269 bytes)
 * undefined AngleMatrix(float * param_1, float * param_2)
 */
void AngleMatrix(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longdouble lVar7;
  
  lVar7 = (longdouble)fsin((longdouble)(param_1[1] * 0.017453292));
  fVar1 = (float)lVar7;
  lVar7 = (longdouble)fcos((longdouble)(param_1[1] * 0.017453292));
  fVar2 = (float)lVar7;
  lVar7 = (longdouble)fsin((longdouble)(*param_1 * 0.017453292));
  fVar3 = (float)lVar7;
  lVar7 = (longdouble)fcos((longdouble)(*param_1 * 0.017453292));
  fVar4 = (float)lVar7;
  lVar7 = (longdouble)fsin((longdouble)(param_1[2] * 0.017453292));
  fVar5 = (float)lVar7;
  lVar7 = (longdouble)fcos((longdouble)(param_1[2] * 0.017453292));
  fVar6 = (float)lVar7;
  *param_2 = fVar4 * fVar2;
  param_2[4] = fVar4 * fVar1;
  param_2[8] = -fVar3;
  param_2[1] = -fVar1 * fVar6 + fVar5 * fVar3 * fVar2;
  param_2[5] = fVar6 * fVar2 + fVar5 * fVar3 * fVar1;
  param_2[9] = fVar4 * fVar5;
  param_2[2] = fVar5 * fVar1 + fVar6 * fVar3 * fVar2;
  param_2[6] = -fVar5 * fVar2 + fVar6 * fVar3 * fVar1;
  param_2[10] = fVar6 * fVar4;
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  return;
}

/* 000fb784  AngleIMatrix  (269 bytes)
 * undefined AngleIMatrix(float * param_1, float * param_2)
 */
void AngleIMatrix(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longdouble lVar7;
  
  lVar7 = (longdouble)fsin((longdouble)(param_1[1] * 0.017453292));
  fVar1 = (float)lVar7;
  lVar7 = (longdouble)fcos((longdouble)(param_1[1] * 0.017453292));
  fVar2 = (float)lVar7;
  lVar7 = (longdouble)fsin((longdouble)(*param_1 * 0.017453292));
  fVar3 = (float)lVar7;
  lVar7 = (longdouble)fcos((longdouble)(*param_1 * 0.017453292));
  fVar4 = (float)lVar7;
  lVar7 = (longdouble)fsin((longdouble)(param_1[2] * 0.017453292));
  fVar5 = (float)lVar7;
  lVar7 = (longdouble)fcos((longdouble)(param_1[2] * 0.017453292));
  fVar6 = (float)lVar7;
  *param_2 = fVar4 * fVar2;
  param_2[1] = fVar4 * fVar1;
  param_2[2] = -fVar3;
  param_2[4] = -fVar1 * fVar6 + fVar5 * fVar3 * fVar2;
  param_2[5] = fVar6 * fVar2 + fVar5 * fVar3 * fVar1;
  param_2[6] = fVar4 * fVar5;
  param_2[8] = fVar5 * fVar1 + fVar6 * fVar3 * fVar2;
  param_2[9] = -fVar5 * fVar2 + fVar6 * fVar3 * fVar1;
  param_2[10] = fVar6 * fVar4;
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  return;
}

/* 000fb894  NormalizeAngles  (206 bytes)
 * undefined NormalizeAngles(float * param_1)
 */
void NormalizeAngles(float *param_1)

{
  if (*param_1 <= 180.0) {
    if (*param_1 < -180.0) {
      *param_1 = *param_1 + 360.0;
    }
  }
  else {
    *param_1 = *param_1 - 360.0;
  }
  if (param_1[1] <= 180.0) {
    if (param_1[1] < -180.0) {
      param_1[1] = param_1[1] + 360.0;
    }
  }
  else {
    param_1[1] = param_1[1] - 360.0;
  }
  if (param_1[2] <= 180.0) {
    if (param_1[2] < -180.0) {
      param_1[2] = param_1[2] + 360.0;
    }
  }
  else {
    param_1[2] = param_1[2] - 360.0;
  }
  return;
}

/* 000fb96c  InterpolateAngles  (249 bytes)
 * undefined InterpolateAngles(float * param_1, float * param_2, float * param_3, float param_4)
 */
void InterpolateAngles(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  
  NormalizeAngles(param_1);
  NormalizeAngles(param_2);
  fVar1 = *param_2 - *param_1;
  if (fVar1 <= 180.0) {
    if (fVar1 < -180.0) {
      fVar1 = fVar1 + 360.0;
    }
  }
  else {
    fVar1 = fVar1 - 360.0;
  }
  *param_3 = fVar1 * param_4 + *param_1;
  fVar1 = param_2[1] - param_1[1];
  if (fVar1 <= 180.0) {
    if (fVar1 < -180.0) {
      fVar1 = fVar1 + 360.0;
    }
  }
  else {
    fVar1 = fVar1 - 360.0;
  }
  param_3[1] = fVar1 * param_4 + param_1[1];
  fVar1 = param_2[2] - param_1[2];
  if (fVar1 <= 180.0) {
    if (fVar1 < -180.0) {
      fVar1 = fVar1 + 360.0;
    }
  }
  else {
    fVar1 = fVar1 - 360.0;
  }
  param_3[2] = fVar1 * param_4 + param_1[2];
  NormalizeAngles(param_3);
  return;
}

/* 000fba6c  AngleBetweenVectors  (185 bytes)
 * longdouble AngleBetweenVectors(float * param_1, float * param_2)
 */
longdouble AngleBetweenVectors(float *param_1,float *param_2)

{
  float fVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  
  lVar2 = Length(param_1);
  lVar3 = Length(param_2);
  if (((longdouble)(float)lVar2 == (longdouble)0.0) || (lVar3 == (longdouble)0.0)) {
    fVar1 = 0.0;
  }
  else {
    lVar4 = (longdouble)param_1[2] * (longdouble)param_2[2] +
            (longdouble)param_1[1] * (longdouble)param_2[1] +
            (longdouble)*param_1 * (longdouble)*param_2;
    lVar4 = (longdouble)fpatan(SQRT((longdouble)1.0 - lVar4 * lVar4),lVar4);
    fVar1 = (float)((longdouble)(double)lVar4 / ((longdouble)(float)lVar2 * lVar3)) * 180.0 *
            0.31830987;
  }
  return (longdouble)fVar1;
}

/* 000fbb28  VectorTransform  (92 bytes)
 * undefined VectorTransform(float * param_1, float * param_2, float * param_3)
 */
void VectorTransform(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_1[2] * param_2[2] + param_1[1] * param_2[1] + *param_1 * *param_2 + param_2[3];
  param_3[1] = param_1[2] * param_2[6] + param_1[1] * param_2[5] + *param_1 * param_2[4] +
               param_2[7];
  param_3[2] = param_1[2] * param_2[10] + param_1[1] * param_2[9] + *param_1 * param_2[8] +
               param_2[0xb];
  return;
}

/* 000fbb84  VectorCompare  (62 bytes)
 * bool VectorCompare(float * param_1, float * param_2)
 */
bool VectorCompare(float *param_1,float *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return param_1[2] == param_2[2];
  }
  return false;
}

/* 000fbbc4  VectorMA  (45 bytes)
 * undefined VectorMA(float * param_1, float param_2, float * param_3, float * param_4)
 */
void VectorMA(float *param_1,float param_2,float *param_3,float *param_4)

{
  *param_4 = param_2 * *param_3 + *param_1;
  param_4[1] = param_2 * param_3[1] + param_1[1];
  param_4[2] = param_2 * param_3[2] + param_1[2];
  return;
}

/* 000fbbf4  _DotProduct  (29 bytes)
 * longdouble _DotProduct(float * param_1, float * param_2)
 */
longdouble _DotProduct(float *param_1,float *param_2)

{
  return (longdouble)param_1[2] * (longdouble)param_2[2] +
         (longdouble)param_1[1] * (longdouble)param_2[1] +
         (longdouble)*param_1 * (longdouble)*param_2;
}

/* 000fbc14  _VectorSubtract  (37 bytes)
 * undefined _VectorSubtract(float * param_1, float * param_2, float * param_3)
 */
void _VectorSubtract(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 - *param_2;
  param_3[1] = param_1[1] - param_2[1];
  param_3[2] = param_1[2] - param_2[2];
  return;
}

/* 000fbc3c  _VectorAdd  (37 bytes)
 * undefined _VectorAdd(float * param_1, float * param_2, float * param_3)
 */
void _VectorAdd(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  param_3[2] = param_1[2] + param_2[2];
  return;
}

/* 000fbc64  _VectorCopy  (25 bytes)
 * undefined _VectorCopy(undefined4 * param_1, undefined4 * param_2)
 */
void _VectorCopy(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return;
}

/* 000fbc80  CrossProduct  (59 bytes)
 * undefined CrossProduct(float * param_1, float * param_2, float * param_3)
 */
void CrossProduct(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_1[1] * param_2[2] - param_1[2] * param_2[1];
  param_3[1] = param_1[2] * *param_2 - *param_1 * param_2[2];
  param_3[2] = *param_1 * param_2[1] - param_1[1] * *param_2;
  return;
}

/* 000fbcbc  Length  (59 bytes)
 * longdouble Length(float * param_1)
 */
longdouble Length(float *param_1)

{
  return (longdouble)
         SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1 + 0.0);
}

/* 000fbcf8  VectorNormalize  (92 bytes)
 * undefined VectorNormalize(float * param_1)
 */
void VectorNormalize(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (fVar1 != 0.0) {
    fVar1 = 1.0 / fVar1;
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
  }
  return;
}

/* 000fbd54  VectorInverse  (17 bytes)
 * undefined VectorInverse(int param_1)
 */
void VectorInverse(int param_1)

{
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) ^ 0x80;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) ^ 0x80;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) ^ 0x80;
  return;
}

/* 000fbd68  VectorScale  (33 bytes)
 * undefined VectorScale(float * param_1, float param_2, float * param_3)
 */
void VectorScale(float *param_1,float param_2,float *param_3)

{
  *param_3 = param_2 * *param_1;
  param_3[1] = param_2 * param_1[1];
  param_3[2] = param_2 * param_1[2];
  return;
}

/* 000fbd8c  Q_log2  (22 bytes)
 * int Q_log2(int param_1)
 */
int Q_log2(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (param_1 = param_1 >> 1, param_1 != 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

/* 000fbda4  VectorMatrix  (188 bytes)
 * undefined VectorMatrix(float * param_1, float * param_2, float * param_3)
 */
void VectorMatrix(float *param_1,float *param_2,float *param_3)

{
  float local_2c [7];
  
  if ((*param_1 == 0.0) && (param_1[1] == 0.0)) {
    *param_2 = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *param_3 = -param_1[2];
    param_3[1] = 0.0;
    param_3[2] = 0.0;
  }
  else {
    local_2c[0] = 0.0;
    local_2c[1] = 0.0;
    local_2c[2] = 1.0;
    CrossProduct(param_1,local_2c,param_2);
    VectorNormalize(param_2);
    CrossProduct(param_2,param_1,param_3);
    VectorNormalize(param_3);
  }
  return;
}

/* 000fbe60  VectorAngles  (220 bytes)
 * undefined VectorAngles(float * param_1, float * param_2)
 */
void VectorAngles(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  longdouble lVar3;
  
  fVar1 = 0.0;
  if ((param_1[1] == 0.0) && (*param_1 == 0.0)) {
    if (param_1[2] <= 0.0) {
      fVar2 = 270.0;
    }
    else {
      fVar2 = 90.0;
    }
  }
  else {
    lVar3 = (longdouble)fpatan((longdouble)param_1[1],(longdouble)*param_1);
    fVar1 = (float)((longdouble)(double)lVar3 * (longdouble)180.0 * (longdouble)0.3183098861837907);
    if (fVar1 < 0.0) {
      fVar1 = fVar1 + 360.0;
    }
    lVar3 = (longdouble)
            fpatan((longdouble)param_1[2],
                   (longdouble)SQRT(param_1[1] * param_1[1] + *param_1 * *param_1));
    fVar2 = (float)((longdouble)(double)lVar3 * (longdouble)180.0 * (longdouble)0.3183098861837907);
    if (fVar2 < 0.0) {
      fVar2 = fVar2 + 360.0;
    }
  }
  *param_2 = fVar2;
  param_2[1] = fVar1;
  param_2[2] = 0.0;
  return;
}

/* 000fbf3c  PM_SwapTextures  (140 bytes)
 * undefined PM_SwapTextures(int param_1, int param_2)
 */
void PM_SwapTextures(int param_1,int param_2)

{
  undefined1 uVar1;
  char local_2c [28];
  
  strcpy(local_2c,grgszTextureName + param_1 * 0x10);
  uVar1 = (&grgchTextureType)[param_1];
  strcpy(grgszTextureName + param_1 * 0x10,grgszTextureName + param_2 * 0x10);
  (&grgchTextureType)[param_1] = (&grgchTextureType)[param_2];
  strcpy(grgszTextureName + param_2 * 0x10,local_2c);
  (&grgchTextureType)[param_2] = uVar1;
  return;
}

/* 000fbfc8  PM_SortTextures  (133 bytes)
 * undefined PM_SortTextures(void)
 */
void PM_SortTextures(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  iVar2 = 0;
  if (0 < gcTextures) {
    local_14 = 0;
    do {
      iVar3 = iVar2 + 1;
      if (iVar3 < gcTextures) {
        iVar4 = iVar3 * 0x10;
        do {
          iVar1 = strcasecmp(grgszTextureName + local_14,grgszTextureName + iVar4);
          if (0 < iVar1) {
            PM_SwapTextures(iVar2,iVar3);
          }
          iVar4 = iVar4 + 0x10;
          iVar3 = iVar3 + 1;
        } while (iVar3 < gcTextures);
      }
      local_14 = local_14 + 0x10;
      iVar2 = iVar2 + 1;
    } while (iVar2 < gcTextures);
  }
  return;
}

/* 000fc050  PM_InitTextureTypes  (569 bytes)
 * undefined PM_InitTextureTypes(void)
 */
void PM_InitTextureTypes(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int fileSize;
  byte_conflict *pMemFile;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int local_220;
  char local_21c [524];
  
  if (bTextureTypeInit_0 == 0) {
    memset(grgszTextureName,0,0x4000);
    memset(&grgchTextureType,0,0x400);
    gcTextures = 0;
    memset(local_21c,0,0x200);
    fileSize = (*pmove->COM_FileSize)("sound/materials.txt");
    pMemFile = (*pmove->COM_LoadFile)("sound/materials.txt",5,(int *)0x0);
    if (pMemFile != (byte_conflict *)0x0) {
      local_220 = 0;
      while ((pcVar5 = (*pmove->memfgets)(pMemFile,fileSize,&local_220,local_21c,0x1ff),
             iVar4 = __ctype_b, pcVar5 != (char *)0x0 && (gcTextures < 0x400))) {
        iVar7 = 0;
        iVar6 = iVar7;
        cVar2 = local_21c[0];
        if (local_21c[0] != '\0') {
          while ((iVar6 = iVar7, (*(byte *)(__ctype_b + 1 + cVar2 * 2) & 0x20) != 0 &&
                 (iVar6 = iVar7 + 1, local_21c[iVar7 + 1] != '\0'))) {
            iVar3 = iVar7 + 1;
            iVar7 = iVar6;
            cVar2 = local_21c[iVar3];
          }
        }
        if (((local_21c[iVar6] != '\0') && (local_21c[iVar6] != '/')) &&
           ((*(byte *)(__ctype_b + 1 + local_21c[iVar6] * 2) & 4) != 0)) {
          (&grgchTextureType)[gcTextures] =
               (char)*(undefined4 *)(__ctype_toupper + local_21c[iVar6] * 4);
          iVar7 = iVar6 + 1;
          if (local_21c[iVar6 + 1] != '\0') {
            bVar1 = *(byte *)(iVar4 + 1 + local_21c[iVar6 + 1] * 2);
            iVar4 = iVar6 + 1;
            while ((iVar7 = iVar4, (bVar1 & 0x20) != 0 &&
                   (iVar7 = iVar4 + 1, local_21c[iVar4 + 1] != '\0'))) {
              bVar1 = *(byte *)(__ctype_b + 1 + local_21c[iVar4 + 1] * 2);
              iVar4 = iVar7;
            }
          }
          if (local_21c[iVar7] != '\0') {
            cVar2 = local_21c[iVar7];
            iVar4 = iVar7;
            while ((iVar6 = iVar4, (*(byte *)(__ctype_b + 1 + cVar2 * 2) & 0x20) == 0 &&
                   (iVar6 = iVar4 + 1, local_21c[iVar4 + 1] != '\0'))) {
              cVar2 = local_21c[iVar4 + 1];
              iVar4 = iVar6;
            }
            if (local_21c[iVar6] != '\0') {
              iVar4 = iVar7 + 0xf;
              if (iVar6 < iVar7 + 0xf) {
                iVar4 = iVar6;
              }
              local_21c[iVar4] = '\0';
              iVar4 = gcTextures * 0x10;
              gcTextures = gcTextures + 1;
              strcpy(grgszTextureName + iVar4,local_21c + iVar7);
            }
          }
        }
      }
      (*pmove->COM_FreeFile)(pMemFile);
      PM_SortTextures();
      bTextureTypeInit_0 = 1;
    }
  }
  return;
}

/* 000fc28c  PM_FindTextureType  (171 bytes)
 * char PM_FindTextureType(char * name)
 */
char PM_FindTextureType(char *name)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  if (pm_shared_initialized == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("pm_shared_initialized","../pm_shared/pm_shared.c",0x112,"PM_FindTextureType");
  }
  local_14 = 0;
  iVar3 = gcTextures + -1;
  while( true ) {
    if (iVar3 < local_14) {
      return 'C';
    }
    iVar2 = (local_14 + iVar3) / 2;
    iVar1 = strncasecmp(name,grgszTextureName + iVar2 * 0x10,0xf);
    if (iVar1 == 0) break;
    if (iVar1 < 1) {
      if (iVar1 < 0) {
        iVar3 = iVar2 + -1;
      }
    }
    else {
      local_14 = iVar2 + 1;
    }
  }
  return (&grgchTextureType)[iVar2];
}

/* 000fc344  PM_PlayStepSound  (1665 bytes)
 * undefined PM_PlayStepSound(undefined4 param_1, undefined4 param_2)
 */
void PM_PlayStepSound(undefined4 param_1,float param_2)

{
  int iVar1;
  int iVar2;
  char *sample;
  longdouble lVar3;
  vec_t local_2c;
  vec_t local_28;
  undefined4 local_24;
  
  pmove->iStepLeft = (uint)(pmove->iStepLeft == 0);
  if (pmove->runfuncs != 0) {
    iVar1 = (*pmove->RandomLong)(0,1);
    iVar1 = iVar1 + pmove->iStepLeft * 2;
    if (((pmove->iuser4 & 1U) == 0) && ((pmove->iuser4 & 0x200U) == 0)) {
      local_2c = pmove->velocity[0];
      local_28 = pmove->velocity[1];
      local_24 = 0;
      if ((pmove->multiplayer == 0) ||
         ((g_onladder != 0 || (lVar3 = Length(&local_2c), (longdouble)220.0 < lVar3)))) {
        switch(param_1) {
        default:
          switch(iVar1) {
          case 0:
            sample = "player/pl_step1.wav";
            break;
          case 1:
            sample = "player/pl_step3.wav";
            break;
          case 2:
            sample = "player/pl_step2.wav";
            break;
          case 3:
            sample = "player/pl_step4.wav";
            break;
          default:
            goto switchD_000fc452_default;
          }
          break;
        case 1:
          switch(iVar1) {
          case 0:
            sample = "player/pl_metal1.wav";
            break;
          case 1:
            sample = "player/pl_metal3.wav";
            break;
          case 2:
            sample = "player/pl_metal2.wav";
            break;
          case 3:
            sample = "player/pl_metal4.wav";
            break;
          default:
            goto switchD_000fc452_default;
          }
          break;
        case 2:
          switch(iVar1) {
          case 0:
            sample = "player/pl_dirt1.wav";
            break;
          case 1:
            sample = "player/pl_dirt3.wav";
            break;
          case 2:
            sample = "player/pl_dirt2.wav";
            break;
          case 3:
            sample = "player/pl_dirt4.wav";
            break;
          default:
            goto switchD_000fc452_default;
          }
          break;
        case 3:
          switch(iVar1) {
          case 0:
            sample = "player/pl_duct1.wav";
            break;
          case 1:
            sample = "player/pl_duct3.wav";
            break;
          case 2:
            sample = "player/pl_duct2.wav";
            break;
          case 3:
            sample = "player/pl_duct4.wav";
            break;
          default:
            goto switchD_000fc452_default;
          }
          break;
        case 4:
          switch(iVar1) {
          case 0:
            sample = "player/pl_grate1.wav";
            break;
          case 1:
            sample = "player/pl_grate3.wav";
            break;
          case 2:
            sample = "player/pl_grate2.wav";
            break;
          case 3:
            sample = "player/pl_grate4.wav";
            break;
          default:
            goto switchD_000fc452_default;
          }
          break;
        case 5:
          iVar2 = (*pmove->RandomLong)(0,4);
          if (iVar2 == 0) {
            iVar1 = 4;
          }
          switch(iVar1) {
          case 0:
            sample = "player/pl_tile1.wav";
            break;
          case 1:
            sample = "player/pl_tile3.wav";
            break;
          case 2:
            sample = "player/pl_tile2.wav";
            break;
          case 3:
            sample = "player/pl_tile4.wav";
            break;
          case 4:
            sample = "player/pl_tile5.wav";
            break;
          default:
            goto switchD_000fc452_default;
          }
          break;
        case 6:
          switch(iVar1) {
          case 0:
            sample = "player/pl_slosh1.wav";
            break;
          case 1:
            sample = "player/pl_slosh3.wav";
            break;
          case 2:
            sample = "player/pl_slosh2.wav";
            break;
          case 3:
            sample = "player/pl_slosh4.wav";
            break;
          default:
            goto switchD_000fc452_default;
          }
          break;
        case 7:
          if (iSkipStep_1 == 0) {
            iSkipStep_1 = 1;
            return;
          }
          iSkipStep_1 = iSkipStep_1 + 1;
          if (iSkipStep_1 == 4) {
            iSkipStep_1 = 0;
          }
          switch(iVar1) {
          case 0:
            sample = "player/pl_wade1.wav";
            break;
          case 1:
            sample = "player/pl_wade2.wav";
            break;
          case 2:
            sample = "player/pl_wade3.wav";
            break;
          case 3:
            sample = "player/pl_wade4.wav";
            break;
          default:
            goto switchD_000fc452_default;
          }
          break;
        case 8:
          switch(iVar1) {
          case 0:
            sample = "player/pl_ladder1.wav";
            break;
          case 1:
            sample = "player/pl_ladder3.wav";
            break;
          case 2:
            sample = "player/pl_ladder2.wav";
            break;
          case 3:
            sample = "player/pl_ladder4.wav";
            break;
          default:
            goto switchD_000fc452_default;
          }
        }
        (*pmove->PM_PlaySound)(4,sample,param_2,1.25,0,100);
      }
    }
  }
switchD_000fc452_default:
  return;
}

/* 000fca90  PM_MapTextureTypeStepType  (88 bytes)
 * undefined4 PM_MapTextureTypeStepType(undefined1 param_1)
 */
undefined4 PM_MapTextureTypeStepType(undefined1 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  default:
    uVar1 = 0;
    break;
  case 0x44:
    uVar1 = 2;
    break;
  case 0x47:
    uVar1 = 4;
    break;
  case 0x4d:
    uVar1 = 1;
    break;
  case 0x53:
    uVar1 = 6;
    break;
  case 0x54:
    uVar1 = 5;
    break;
  case 0x56:
    uVar1 = 3;
  }
  return uVar1;
}

/* 000fcb40  PM_CatagorizeTextureType  (224 bytes)
 * undefined PM_CatagorizeTextureType(void)
 */
void PM_CatagorizeTextureType(void)

{
  char cVar1;
  char *__src;
  vec_t local_2c;
  vec_t local_28;
  float local_24;
  vec_t local_1c;
  vec_t local_18;
  vec_t local_14;
  
  local_1c = pmove->origin[0];
  local_18 = pmove->origin[1];
  local_14 = pmove->origin[2];
  local_2c = pmove->origin[0];
  local_28 = pmove->origin[1];
  local_24 = pmove->origin[2] - 64.0;
  pmove->sztexturename[0] = '\0';
  pmove->chtexturetype = 'C';
  __src = (*pmove->PM_TraceTexture)(pmove->onground,&local_1c,&local_2c);
  if (__src != (char *)0x0) {
    if ((*__src == '-') || (*__src == '+')) {
      __src = __src + 2;
    }
    if ((((*__src == '{') || (*__src == '!')) || (*__src == '~')) || (*__src == ' ')) {
      __src = __src + 1;
    }
    strcpy(pmove->sztexturename,__src);
    pmove->sztexturename[0xf] = '\0';
    cVar1 = PM_FindTextureType(pmove->sztexturename);
    pmove->chtexturetype = cVar1;
  }
  return;
}

/* 000fcc20  PM_UpdateStepSound  (871 bytes)
 * undefined PM_UpdateStepSound(void)
 */
void PM_UpdateStepSound(void)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  bool bVar6;
  longdouble lVar7;
  longdouble lVar8;
  float local_60;
  vec_t local_3c;
  vec_t local_38;
  float local_34;
  vec_t local_2c;
  vec_t local_28;
  float local_24;
  
  if (0 < pmove->flTimeStepSound) {
    return;
  }
  if ((pmove->flags & 0x1000) != 0) {
    return;
  }
  PM_CatagorizeTextureType();
  lVar7 = Length(pmove->velocity);
  bVar6 = pmove->movetype == 5;
  if (((pmove->flags & 0x4000) != 0) || (bVar6)) {
    fVar5 = 60.0;
    local_60 = 80.0;
    fVar1 = 100.0;
  }
  else {
    fVar5 = 120.0;
    local_60 = 210.0;
    fVar1 = 0.0;
  }
  if ((!bVar6) && (pmove->onground == -1)) {
    return;
  }
  lVar8 = Length(pmove->velocity);
  if (lVar8 <= (longdouble)0.0) {
    return;
  }
  if (((float)lVar7 < fVar5) && (pmove->flTimeStepSound != 0)) {
    return;
  }
  bVar2 = (float)lVar7 < local_60;
  local_2c = pmove->origin[0];
  local_28 = pmove->origin[1];
  local_3c = pmove->origin[0];
  local_38 = pmove->origin[1];
  fVar5 = pmove->player_maxs[pmove->usehull][2] - pmove->player_mins[pmove->usehull][2];
  local_24 = pmove->origin[2] - fVar5 * 0.3;
  local_34 = pmove->origin[2] - fVar5 * 0.5;
  if (bVar6) {
    uVar4 = 8;
    fVar5 = 0.35;
    pmove->flTimeStepSound = 0x15e;
    goto LAB_000fcf1b;
  }
  iVar3 = (*pmove->PM_PointContents)(&local_2c,(int *)0x0);
  if (iVar3 == -3) {
    uVar4 = 7;
    fVar5 = 0.65;
    pmove->flTimeStepSound = 600;
    goto LAB_000fcf1b;
  }
  iVar3 = (*pmove->PM_PointContents)(&local_3c,(int *)0x0);
  if (iVar3 == -3) {
    uVar4 = 6;
switchD_000fce75_caseD_43:
    if (bVar2) {
      fVar5 = 0.2;
    }
    else {
      fVar5 = 0.5;
    }
  }
  else {
    uVar4 = PM_MapTextureTypeStepType(pmove->chtexturetype);
    switch(pmove->chtexturetype) {
    default:
      goto switchD_000fce75_caseD_43;
    case 'D':
      if (bVar2) {
        fVar5 = 0.25;
      }
      else {
        fVar5 = 0.55;
      }
      break;
    case 'V':
      if (bVar2) {
        fVar5 = 0.4;
      }
      else {
        fVar5 = 0.7;
      }
    }
  }
  pmove->flTimeStepSound = (bVar2 - 1 & 0xffffff9c) + 400;
LAB_000fcf1b:
  pmove->flTimeStepSound = (int)ROUND(fVar1 + (float)pmove->flTimeStepSound);
  fVar1 = pmove->fuser1;
  if (fVar1 < 0.1) {
    fVar1 = 0.1;
  }
  pmove->flTimeStepSound = (int)ROUND((1.0 / fVar1) * (float)pmove->flTimeStepSound);
  if ((pmove->flags & 0x4000) != 0) {
    fVar5 = fVar5 * 0.35;
  }
  PM_PlayStepSound(uVar4,fVar5);
  return;
}

/* 000fcfdc  PM_AddToTouched  (217 bytes)
 * undefined4 PM_AddToTouched(void)
 */
undefined4 PM_AddToTouched(void)

{
  playermove_t *ppVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  pmtrace_t *ppVar5;
  int in_stack_00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 *in_stack_00000048;
  
  iVar3 = 0;
  if ((0 < pmove->numtouch) && (pmove->touchindex[0].ent != in_stack_00000034)) {
    piVar4 = &pmove->touchindex[0].ent;
    do {
      piVar4 = piVar4 + 0x11;
      iVar3 = iVar3 + 1;
      if (pmove->numtouch <= iVar3) break;
    } while (*piVar4 != in_stack_00000034);
  }
  if (iVar3 == pmove->numtouch) {
    uStack00000038 = *in_stack_00000048;
    uStack0000003c = in_stack_00000048[1];
    uStack00000040 = in_stack_00000048[2];
    if (599 < pmove->numtouch) {
      (*pmove->Con_DPrintf)("Too many entities were touched!\n");
    }
    ppVar1 = pmove;
    ppVar5 = pmove->touchindex + pmove->numtouch;
    for (iVar3 = 0x11; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
        iVar3 != 0; iVar3 = iVar3 + -1) {
      ppVar5->allsolid = *(qboolean *)register0x00000010;
      ppVar5 = (pmtrace_t *)&ppVar5->startsolid;
    }
    ppVar1->numtouch = ppVar1->numtouch + 1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 000fd0b8  PM_CheckVelocity  (341 bytes)
 * undefined PM_CheckVelocity(void)
 */
void PM_CheckVelocity(void)

{
  float fVar1;
  int iVar2;
  int local_20;
  
  fVar1 = pmove->movevars->maxvelocity;
  iVar2 = 0;
  local_20 = 0x50;
  do {
    if (((uint)pmove->velocity[iVar2] & nanmask) == nanmask) {
      (*pmove->Con_Printf)("PM  Got a NaN velocity %i\n",iVar2);
      *(undefined4 *)((int)pmove->forward + local_20 + -8) = 0;
    }
    if (((uint)pmove->origin[iVar2] & nanmask) == nanmask) {
      (*pmove->Con_Printf)("PM  Got a NaN origin on %i\n",iVar2);
      pmove->origin[iVar2] = 0.0;
    }
    if (*(float *)((int)pmove->forward + local_20 + -8) <= fVar1) {
      if (*(float *)((int)pmove->forward + local_20 + -8) < -fVar1) {
        (*pmove->Con_DPrintf)("PM  Got a velocity too low on %i\n",iVar2);
        *(float *)((int)pmove->forward + local_20 + -8) = -fVar1;
      }
    }
    else {
      (*pmove->Con_DPrintf)("PM  Got a velocity too high on %i\n",iVar2);
      *(float *)((int)pmove->forward + local_20 + -8) = fVar1;
    }
    local_20 = local_20 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}

/* 000fd210  PM_ClipVelocity  (241 bytes)
 * byte.conflict PM_ClipVelocity(float * param_1, float * param_2, float * param_3, float param_4)
 */
byte_conflict PM_ClipVelocity(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  
  bVar3 = 0.0 < param_2[2];
  if (param_2[2] == 0.0) {
    bVar3 = bVar3 | 2;
  }
  fVar2 = (param_1[2] * param_2[2] + param_1[1] * param_2[1] + *param_1 * *param_2) * param_4;
  fVar1 = *param_1 - fVar2 * *param_2;
  *param_3 = fVar1;
  if ((-0.1 < fVar1) && (fVar1 < 0.1)) {
    *param_3 = 0.0;
  }
  fVar1 = param_1[1] - fVar2 * param_2[1];
  param_3[1] = fVar1;
  if ((-0.1 < fVar1) && (fVar1 < 0.1)) {
    param_3[1] = 0.0;
  }
  fVar1 = param_1[2] - fVar2 * param_2[2];
  param_3[2] = fVar1;
  if ((-0.1 < fVar1) && (fVar1 < 0.1)) {
    param_3[2] = 0.0;
  }
  return bVar3;
}

/* 000fd304  PM_AddCorrectGravity  (140 bytes)
 * undefined PM_AddCorrectGravity(void)
 */
void PM_AddCorrectGravity(void)

{
  float fVar1;
  
  if (pmove->waterjumptime == 0.0) {
    if (pmove->gravity == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = pmove->gravity;
    }
    pmove->velocity[2] =
         pmove->velocity[2] - fVar1 * pmove->movevars->gravity * 0.5 * pmove->frametime;
    pmove->velocity[2] = pmove->basevelocity[2] * pmove->frametime + pmove->velocity[2];
    pmove->basevelocity[2] = 0.0;
    PM_CheckVelocity();
  }
  return;
}

/* 000fd390  PM_FixupGravityVelocity  (117 bytes)
 * undefined PM_FixupGravityVelocity(void)
 */
void PM_FixupGravityVelocity(void)

{
  float fVar1;
  
  if (pmove->waterjumptime == 0.0) {
    if (pmove->gravity == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = pmove->gravity;
    }
    pmove->velocity[2] =
         pmove->velocity[2] - fVar1 * pmove->movevars->gravity * pmove->frametime * 0.5;
    PM_CheckVelocity();
  }
  return;
}

/* 000fd408  PM_FlyMove  (2223 bytes)
 * undefined4 PM_FlyMove(void)
 */
undefined4 PM_FlyMove(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _func_16 *p_Var5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined4 auStack_194 [13];
  int aiStack_160 [5];
  float local_14c;
  int iStack_148;
  float local_144 [2];
  undefined1 auStack_13c [24];
  int local_124 [4];
  float local_114 [3];
  int local_108;
  float local_104 [5];
  int local_f0 [4];
  float local_e0;
  vec_t local_dc [5];
  float local_c8 [10];
  vec_t local_a0 [8];
  float local_80;
  vec_t local_7c [3];
  float local_70 [16];
  float local_30 [8];
  
  local_114[0] = 0.0;
  local_108 = 0;
  local_a0[5] = pmove->velocity[0];
  local_a0[6] = pmove->velocity[1];
  local_a0[7] = pmove->velocity[2];
  local_7c[0] = pmove->velocity[0];
  local_7c[1] = pmove->velocity[1];
  local_7c[2] = pmove->velocity[2];
  local_114[1] = 0.0;
  local_114[2] = pmove->frametime;
  local_104[0] = 0.0;
  puVar13 = auStack_13c;
  while( true ) {
    if (((pmove->velocity[0] == 0.0) && (pmove->velocity[1] == 0.0)) &&
       (puVar12 = puVar13, pmove->velocity[2] == 0.0)) goto LAB_000fdc7f;
    *(float *)(puVar13 + 0x40) = *(float *)(puVar13 + 0x30) * pmove->velocity[0] + pmove->origin[0];
    *(float *)(puVar13 + 0x44) = *(float *)(puVar13 + 0x30) * pmove->velocity[1] + pmove->origin[1];
    *(float *)(puVar13 + 0x48) = *(float *)(puVar13 + 0x30) * pmove->velocity[2] + pmove->origin[2];
    *(undefined4 *)(puVar13 + -0x10) = 0xffffffff;
    *(undefined4 *)(puVar13 + -0x14) = 0;
    *(undefined1 **)(puVar13 + -0x18) = puVar13 + 0x40;
    *(vec_t **)(puVar13 + -0x1c) = pmove->origin;
    *(undefined1 **)(puVar13 + -0x20) = puVar13 + 0x50;
    p_Var5 = pmove->PM_PlayerTrace;
    *(undefined4 *)(puVar13 + -0x24) = 0xfd4e5;
    (*p_Var5)(*(pmtrace_t **)(puVar13 + -0x20),*(float **)(puVar13 + -0x1c),
              *(float **)(puVar13 + -0x18),*(int *)(puVar13 + -0x14),*(int *)(puVar13 + -0x10));
    *(float *)(puVar13 + 0x28) = *(float *)(puVar13 + 0x28) + *(float *)(puVar13 + 0x5c);
    puVar12 = puVar13 + -4;
    if (*(int *)(puVar13 + 0x4c) != 0) {
      pmove->velocity[0] = vec3_origin;
      pmove->velocity[1] = DAT_00124d84;
      pmove->velocity[2] = DAT_00124d88;
      return 4;
    }
    if (0.0 < *(float *)(puVar13 + 0x5c)) {
      pmove->origin[0] = *(vec_t *)(puVar13 + 0x60);
      pmove->origin[1] = *(vec_t *)(puVar13 + 100);
      pmove->origin[2] = *(vec_t *)(puVar13 + 0x68);
      *(vec_t *)(puVar13 + 0xac) = pmove->velocity[0];
      *(vec_t *)(puVar13 + 0xb0) = pmove->velocity[1];
      *(vec_t *)(puVar13 + 0xb4) = pmove->velocity[2];
      *(undefined4 *)(puVar13 + 0x30) = 0;
    }
    if (*(float *)(puVar13 + 0x5c) == 1.0) goto LAB_000fdc7f;
    *(vec_t **)(puVar13 + -0x10) = pmove->velocity;
    puVar14 = (undefined4 *)(puVar13 + 0x4c);
    puVar16 = (undefined4 *)(puVar13 + -0x54);
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    *(undefined4 *)(puVar13 + -0x58) = 0xfd5b9;
    PM_AddToTouched();
    puVar12 = puVar13 + -4;
    if (0.7 < *(float *)(puVar13 + 0x74)) {
      *(uint *)(puVar13 + 0x24) = *(uint *)(puVar13 + 0x24) | 1;
    }
    if (*(float *)(puVar13 + 0x74) == 0.0) {
      *(uint *)(puVar13 + 0x24) = *(uint *)(puVar13 + 0x24) | 2;
    }
    *(float *)(puVar13 + 0x2c) =
         *(float *)(puVar13 + 0x2c) - *(float *)(puVar13 + 0x2c) * *(float *)(puVar13 + 0x5c);
    if (4 < *(int *)(puVar13 + 0x30)) break;
    iVar8 = *(int *)(puVar13 + 0x30);
    iVar10 = iVar8 * 0xc;
    *(undefined4 *)(puVar13 + iVar10 + 0xcc) = *(undefined4 *)(puVar13 + 0x6c);
    *(undefined4 *)(puVar13 + iVar10 + 0xd0) = *(undefined4 *)(puVar13 + 0x70);
    *(undefined4 *)(puVar13 + iVar10 + 0xd4) = *(undefined4 *)(puVar13 + 0x74);
    *(int *)(puVar13 + 0x30) = iVar8 + 1;
    if ((pmove->movetype == 3) && ((pmove->onground == -1 || (pmove->friction != 1.0)))) {
      iVar8 = 0;
      if (0 < *(int *)(puVar13 + 0x30)) {
        puVar12 = puVar13 + 0xcc;
        *(undefined1 **)(puVar13 + 0x18) = puVar12;
        iVar10 = 0;
        if ((*(int *)(puVar13 + 0x30) < 1) || ((*(uint *)(puVar13 + 0x30) & 1) != 0)) {
          if (*(float *)(puVar13 + 0xd4) <= 0.7) {
            *(float *)(puVar13 + 0x38) = (1.0 - pmove->friction) * 0.01 + 1.0;
            *(undefined4 *)(puVar13 + -8) = *(undefined4 *)(puVar13 + 0x38);
            *(undefined1 **)(puVar13 + -0xc) = puVar13 + 0x9c;
            *(undefined1 **)(puVar13 + -0x10) = puVar12;
            *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xac;
            *(undefined4 *)(puVar13 + -0x18) = 0xfd743;
            PM_ClipVelocity(*(float **)(puVar13 + -0x14),*(float **)(puVar13 + -0x10),
                            *(float **)(puVar13 + -0xc),*(float *)(puVar13 + -8));
          }
          else {
            *(undefined4 *)(puVar13 + -8) = 0x3f800000;
            *(undefined1 **)(puVar13 + -0xc) = puVar13 + 0x9c;
            *(undefined4 *)(puVar13 + -0x10) = *(undefined4 *)(puVar13 + 0x18);
            *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xac;
            *(undefined4 *)(puVar13 + -0x18) = 0xfd6cf;
            PM_ClipVelocity(*(float **)(puVar13 + -0x14),*(float **)(puVar13 + -0x10),
                            *(float **)(puVar13 + -0xc),*(float *)(puVar13 + -8));
            *(undefined4 *)(puVar13 + 0xac) = *(undefined4 *)(puVar13 + 0x9c);
            *(undefined4 *)(puVar13 + 0xb0) = *(undefined4 *)(puVar13 + 0xa0);
            *(undefined4 *)(puVar13 + 0xb4) = *(undefined4 *)(puVar13 + 0xa4);
          }
          puVar12 = puVar13 + 0xd8;
          *(int *)(puVar13 + 0x18) = *(int *)(puVar13 + 0x18) + 0xc;
          iVar10 = 0xc;
          iVar8 = 1;
          if (*(int *)(puVar13 + 0x30) < 2) goto LAB_000fd8ce;
        }
        puVar17 = puVar13 + iVar10 + 0x11c;
        do {
          if (*(float *)(puVar17 + -0x48) <= 0.7) {
            *(float *)(puVar13 + 0x38) = (1.0 - pmove->friction) * 0.01 + 1.0;
            *(undefined4 *)(puVar13 + -8) = *(undefined4 *)(puVar13 + 0x38);
            *(undefined1 **)(puVar13 + -0xc) = puVar13 + 0x9c;
            *(undefined1 **)(puVar13 + -0x10) = puVar12;
            *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xac;
            *(undefined4 *)(puVar13 + -0x18) = 0xfd807;
            PM_ClipVelocity(*(float **)(puVar13 + -0x14),*(float **)(puVar13 + -0x10),
                            *(float **)(puVar13 + -0xc),*(float *)(puVar13 + -8));
          }
          else {
            *(undefined4 *)(puVar13 + -8) = 0x3f800000;
            *(undefined1 **)(puVar13 + -0xc) = puVar13 + 0x9c;
            *(undefined4 *)(puVar13 + -0x10) = *(undefined4 *)(puVar13 + 0x18);
            *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xac;
            *(undefined4 *)(puVar13 + -0x18) = 0xfd792;
            PM_ClipVelocity(*(float **)(puVar13 + -0x14),*(float **)(puVar13 + -0x10),
                            *(float **)(puVar13 + -0xc),*(float *)(puVar13 + -8));
            *(undefined4 *)(puVar13 + 0xac) = *(undefined4 *)(puVar13 + 0x9c);
            *(undefined4 *)(puVar13 + 0xb0) = *(undefined4 *)(puVar13 + 0xa0);
            *(undefined4 *)(puVar13 + 0xb4) = *(undefined4 *)(puVar13 + 0xa4);
          }
          *(int *)(puVar13 + 0x18) = *(int *)(puVar13 + 0x18) + 0xc;
          if (*(float *)(puVar17 + -0x3c) <= 0.7) {
            *(float *)(puVar13 + 0x38) = (1.0 - pmove->friction) * 0.01 + 1.0;
            *(undefined4 *)(puVar13 + -8) = *(undefined4 *)(puVar13 + 0x38);
            *(undefined1 **)(puVar13 + -0xc) = puVar13 + 0x9c;
            *(undefined1 **)(puVar13 + -0x10) = puVar12 + 0xc;
            *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xac;
            *(undefined4 *)(puVar13 + -0x18) = 0xfd8b3;
            PM_ClipVelocity(*(float **)(puVar13 + -0x14),*(float **)(puVar13 + -0x10),
                            *(float **)(puVar13 + -0xc),*(float *)(puVar13 + -8));
          }
          else {
            *(undefined4 *)(puVar13 + -8) = 0x3f800000;
            *(undefined1 **)(puVar13 + -0xc) = puVar13 + 0x9c;
            *(undefined4 *)(puVar13 + -0x10) = *(undefined4 *)(puVar13 + 0x18);
            *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xac;
            *(undefined4 *)(puVar13 + -0x18) = 0xfd840;
            PM_ClipVelocity(*(float **)(puVar13 + -0x14),*(float **)(puVar13 + -0x10),
                            *(float **)(puVar13 + -0xc),*(float *)(puVar13 + -8));
            *(undefined4 *)(puVar13 + 0xac) = *(undefined4 *)(puVar13 + 0x9c);
            *(undefined4 *)(puVar13 + 0xb0) = *(undefined4 *)(puVar13 + 0xa0);
            *(undefined4 *)(puVar13 + 0xb4) = *(undefined4 *)(puVar13 + 0xa4);
          }
          puVar12 = puVar12 + 0x18;
          *(int *)(puVar13 + 0x18) = *(int *)(puVar13 + 0x18) + 0xc;
          puVar17 = puVar17 + 0x18;
          iVar8 = iVar8 + 2;
        } while (iVar8 < *(int *)(puVar13 + 0x30));
      }
LAB_000fd8ce:
      pmove->velocity[0] = *(vec_t *)(puVar13 + 0x9c);
      pmove->velocity[1] = *(vec_t *)(puVar13 + 0xa0);
      pmove->velocity[2] = *(vec_t *)(puVar13 + 0xa4);
      *(undefined4 *)(puVar13 + 0xac) = *(undefined4 *)(puVar13 + 0x9c);
      *(undefined4 *)(puVar13 + 0xb0) = *(undefined4 *)(puVar13 + 0xa0);
      *(undefined4 *)(puVar13 + 0xb4) = *(undefined4 *)(puVar13 + 0xa4);
    }
    else {
      iVar8 = 0;
      if (0 < *(int *)(puVar13 + 0x30)) {
        *(undefined4 *)(puVar13 + 0x1c) = 0;
        do {
          *(undefined4 *)(puVar13 + -8) = 0x3f800000;
          *(vec_t **)(puVar13 + -0xc) = pmove->velocity;
          *(undefined1 **)(puVar13 + -0x10) = puVar13 + *(int *)(puVar13 + 0x1c) + 0xcc;
          *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xac;
          *(undefined4 *)(puVar13 + -0x18) = 0xfd96a;
          PM_ClipVelocity(*(float **)(puVar13 + -0x14),*(float **)(puVar13 + -0x10),
                          *(float **)(puVar13 + -0xc),*(float *)(puVar13 + -8));
          iVar9 = 0;
          iVar10 = iVar9;
          if (0 < *(int *)(puVar13 + 0x30)) {
            *(playermove_t ***)(puVar13 + 0x20) = &pmove;
            iVar11 = 0;
            uVar7 = *(uint *)(puVar13 + 0x30) & 3;
            if (*(int *)(puVar13 + 0x30) < 1) {
LAB_000fda25:
              if ((iVar9 == iVar8) ||
                 (iVar6 = **(int **)(puVar13 + 0x20), iVar10 = iVar9,
                 0.0 <= *(float *)(iVar6 + 100) * *(float *)(puVar13 + iVar11 + 0xd4) +
                        *(float *)(iVar6 + 0x60) * *(float *)(puVar13 + iVar11 + 0xd0) +
                        *(float *)(iVar6 + 0x5c) * *(float *)(puVar13 + iVar11 + 0xcc))) {
                iVar11 = iVar11 + 0xc;
                iVar9 = iVar9 + 1;
                iVar10 = iVar9;
                if (iVar9 < *(int *)(puVar13 + 0x30)) goto LAB_000fda6c;
              }
            }
            else {
              if (uVar7 != 0) {
                if (1 < uVar7) {
                  if (2 < uVar7) {
                    if ((iVar8 != 0) &&
                       (pmove->velocity[2] * *(float *)(puVar13 + 0xd4) +
                        pmove->velocity[1] * *(float *)(puVar13 + 0xd0) +
                        pmove->velocity[0] * *(float *)(puVar13 + 0xcc) < 0.0)) goto LAB_000fdb39;
                    iVar11 = 0xc;
                    iVar9 = 1;
                  }
                  if ((iVar9 != iVar8) &&
                     (iVar6 = **(int **)(puVar13 + 0x20), iVar10 = iVar9,
                     *(float *)(iVar6 + 100) * *(float *)(puVar13 + iVar11 + 0xd4) +
                     *(float *)(iVar6 + 0x60) * *(float *)(puVar13 + iVar11 + 0xd0) +
                     *(float *)(iVar6 + 0x5c) * *(float *)(puVar13 + iVar11 + 0xcc) < 0.0))
                  goto LAB_000fdb39;
                  iVar11 = iVar11 + 0xc;
                  iVar9 = iVar9 + 1;
                }
                goto LAB_000fda25;
              }
LAB_000fda6c:
              puVar17 = puVar13 + iVar11 + 0x11c;
              puVar15 = puVar17;
              puVar18 = puVar17;
              do {
                if (((((iVar9 != iVar8) &&
                      (iVar11 = **(int **)(puVar13 + 0x20), iVar10 = iVar9,
                      *(float *)(iVar11 + 100) * *(float *)(puVar18 + -0x48) +
                      *(float *)(iVar11 + 0x60) * *(float *)(puVar17 + -0x4c) +
                      *(float *)(iVar11 + 0x5c) * *(float *)(puVar15 + -0x50) < 0.0)) ||
                     ((iVar9 + 1 != iVar8 &&
                      (iVar11 = **(int **)(puVar13 + 0x20), iVar10 = iVar9 + 1,
                      *(float *)(iVar11 + 100) * *(float *)(puVar18 + -0x3c) +
                      *(float *)(iVar11 + 0x60) * *(float *)(puVar17 + -0x40) +
                      *(float *)(iVar11 + 0x5c) * *(float *)(puVar15 + -0x44) < 0.0)))) ||
                    ((iVar9 + 2 != iVar8 &&
                     (iVar11 = **(int **)(puVar13 + 0x20), iVar10 = iVar9 + 2,
                     *(float *)(iVar11 + 100) * *(float *)(puVar18 + -0x30) +
                     *(float *)(iVar11 + 0x60) * *(float *)(puVar17 + -0x34) +
                     *(float *)(iVar11 + 0x5c) * *(float *)(puVar15 + -0x38) < 0.0)))) ||
                   ((iVar9 + 3 != iVar8 &&
                    (iVar11 = **(int **)(puVar13 + 0x20), iVar10 = iVar9 + 3,
                    *(float *)(iVar11 + 100) * *(float *)(puVar18 + -0x24) +
                    *(float *)(iVar11 + 0x60) * *(float *)(puVar17 + -0x28) +
                    *(float *)(iVar11 + 0x5c) * *(float *)(puVar15 + -0x2c) < 0.0)))) break;
                puVar18 = puVar18 + 0x30;
                puVar17 = puVar17 + 0x30;
                puVar15 = puVar15 + 0x30;
                iVar9 = iVar9 + 4;
                iVar10 = iVar9;
              } while (iVar9 < *(int *)(puVar13 + 0x30));
            }
          }
LAB_000fdb39:
          if (iVar10 == *(int *)(puVar13 + 0x30)) break;
          *(int *)(puVar13 + 0x1c) = *(int *)(puVar13 + 0x1c) + 0xc;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(puVar13 + 0x30));
      }
      if (iVar8 == *(int *)(puVar13 + 0x30)) {
        if (*(int *)(puVar13 + 0x30) != 2) break;
        *(undefined1 **)(puVar13 + -0xc) = puVar13 + 0x10c;
        *(undefined1 **)(puVar13 + -0x10) = puVar13 + 0xd8;
        *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xcc;
        *(undefined4 *)(puVar13 + -0x18) = 0xfdba4;
        CrossProduct(*(float **)(puVar13 + -0x14),*(float **)(puVar13 + -0x10),
                     *(float **)(puVar13 + -0xc));
        fVar2 = pmove->velocity[0];
        fVar3 = pmove->velocity[1];
        fVar4 = pmove->velocity[2];
        *(vec_t **)(puVar13 + -0xc) = pmove->velocity;
        *(float *)(puVar13 + -0x10) =
             *(float *)(puVar13 + 0x114) * fVar4 +
             *(float *)(puVar13 + 0x110) * fVar3 + *(float *)(puVar13 + 0x10c) * fVar2;
        *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0x10c;
        *(undefined4 *)(puVar13 + -0x18) = 0xfdbe2;
        VectorScale(*(float **)(puVar13 + -0x14),*(float *)(puVar13 + -0x10),
                    *(float **)(puVar13 + -0xc));
      }
      if (pmove->velocity[2] * *(float *)(puVar13 + 0xc4) +
          pmove->velocity[1] * *(float *)(puVar13 + 0xc0) +
          pmove->velocity[0] * *(float *)(puVar13 + 0xbc) <= 0.0) {
        pmove->velocity[0] = vec3_origin;
        pmove->velocity[1] = DAT_00124d84;
        goto LAB_000fdc31;
      }
    }
    puVar12 = puVar13 + -4;
    *(int *)(puVar13 + 0x34) = *(int *)(puVar13 + 0x34) + 1;
    piVar1 = (int *)(puVar13 + 0x34);
    puVar13 = puVar13 + -4;
    if (3 < *piVar1) {
LAB_000fdc7f:
      if (*(float *)(puVar12 + 0x2c) == 0.0) {
        pmove->velocity[0] = vec3_origin;
        pmove->velocity[1] = DAT_00124d84;
        pmove->velocity[2] = DAT_00124d88;
      }
      return *(undefined4 *)(puVar12 + 0x28);
    }
  }
  pmove->velocity[0] = vec3_origin;
  pmove->velocity[1] = DAT_00124d84;
LAB_000fdc31:
  pmove->velocity[2] = DAT_00124d88;
  goto LAB_000fdc7f;
}

/* 000fdcc4  PM_GetAccelBySpeed  (64 bytes)
 * longdouble PM_GetAccelBySpeed(float param_1)
 */
longdouble PM_GetAccelBySpeed(float param_1)

{
  longdouble lVar1;
  
  if ((longdouble)330.0 <= (longdouble)param_1) {
    lVar1 = (longdouble)1.1;
  }
  else {
    lVar1 = ((longdouble)param_1 - (longdouble)210.0) * (longdouble)0.008333334 * (longdouble)0.5 +
            (longdouble)0.6;
  }
  return lVar1;
}

/* 000fdd08  PM_Accelerate  (256 bytes)
 * undefined PM_Accelerate(float * param_1, float param_2, float param_3)
 */
void PM_Accelerate(float *param_1,float param_2,float param_3)

{
  float fVar1;
  longdouble lVar2;
  float local_10;
  
  if (((pmove->dead == 0) && (pmove->waterjumptime == 0.0)) &&
     (fVar1 = param_2 - (pmove->velocity[2] * param_1[2] +
                        pmove->velocity[1] * param_1[1] + pmove->velocity[0] * *param_1),
     0.0 < fVar1)) {
    local_10 = param_3 * pmove->frametime * param_2 * pmove->friction;
    if (((pmove->iuser4 & 0x20) == 0) && ((pmove->flags & 0x4000) == 0)) {
      lVar2 = PM_GetAccelBySpeed(pmove->maxspeed);
      local_10 = (float)(lVar2 * (longdouble)local_10);
    }
    if (fVar1 < local_10) {
      local_10 = fVar1;
    }
    pmove->velocity[0] = local_10 * *param_1 + pmove->velocity[0];
    pmove->velocity[1] = local_10 * param_1[1] + pmove->velocity[1];
    pmove->velocity[2] = local_10 * param_1[2] + pmove->velocity[2];
  }
  return;
}

/* 000fde08  PM_Friction  (466 bytes)
 * undefined PM_Friction(void)
 */
void PM_Friction(void)

{
  vec_t *pvVar1;
  float fVar2;
  float fVar3;
  playermove_t *ppVar4;
  undefined4 *puVar5;
  undefined4 uStack_b0;
  undefined1 auStack_ac [4];
  float local_a8;
  float local_a4;
  float local_a0;
  pmtrace_t local_9c;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  
  ppVar4 = pmove;
  puVar5 = (undefined4 *)auStack_ac;
  uStack_b0 = 0xfde16;
  if (pmove->waterjumptime == 0.0) {
    pvVar1 = pmove->velocity;
    local_a0 = SQRT(pmove->velocity[2] * pmove->velocity[2] +
                    pmove->velocity[1] * pmove->velocity[1] +
                    pmove->velocity[0] * pmove->velocity[0]);
    if (0.1 <= local_a0) {
      local_a4 = 0.0;
      if (pmove->onground != -1) {
        local_4c = (pmove->velocity[0] / local_a0) * 16.0 + pmove->origin[0];
        local_48 = (pmove->velocity[1] / local_a0) * 16.0 + pmove->origin[1];
        local_34 = pmove->origin[2] + pmove->player_mins[pmove->usehull][2];
        local_44 = local_34 - 34.0;
        local_3c = local_4c;
        local_38 = local_48;
        (*pmove->PM_PlayerTrace)(&local_9c,&local_3c,&local_4c,0,-1);
        puVar5 = &uStack_b0;
        if ((float)local_9c.inwater == 1.0) {
          fVar2 = pmove->movevars->friction * pmove->movevars->edgefriction;
        }
        else {
          fVar2 = pmove->movevars->friction;
        }
        if (local_a4 < pmove->movevars->stopspeed) {
          local_a4 = pmove->movevars->stopspeed;
        }
        local_a8 = local_a4 * fVar2 * pmove->friction * 0.75 * pmove->frametime + local_a8;
      }
      fVar2 = *(float *)((int)puVar5 + 0xc) - *(float *)((int)puVar5 + 8);
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      fVar2 = fVar2 / *(float *)((int)puVar5 + 0xc);
      fVar3 = fVar2 * *pvVar1;
      *(float *)((int)puVar5 + 0x90) = fVar3;
      *(float *)((int)puVar5 + 0x94) = fVar2 * ppVar4->velocity[1];
      *(float *)((int)puVar5 + 0x98) = fVar2 * ppVar4->velocity[2];
      pmove->velocity[0] = fVar3;
      pmove->velocity[1] = *(vec_t *)((int)puVar5 + 0x94);
      pmove->velocity[2] = *(vec_t *)((int)puVar5 + 0x98);
    }
  }
  return;
}

/* 000fdfdc  PM_AirAccelerate  (220 bytes)
 * undefined PM_AirAccelerate(float * param_1, float param_2, float param_3)
 */
void PM_AirAccelerate(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if ((pmove->dead == 0) && (pmove->waterjumptime == 0.0)) {
    fVar1 = param_2;
    if (30.0 < param_2) {
      fVar1 = 30.0;
    }
    fVar1 = fVar1 - (pmove->velocity[2] * param_1[2] +
                    pmove->velocity[1] * param_1[1] + pmove->velocity[0] * *param_1);
    if (0.0 < fVar1) {
      fVar2 = param_3 * param_2 * pmove->frametime * pmove->friction;
      if (fVar1 < fVar2) {
        fVar2 = fVar1;
      }
      pmove->velocity[0] = fVar2 * *param_1 + pmove->velocity[0];
      pmove->velocity[1] = fVar2 * param_1[1] + pmove->velocity[1];
      pmove->velocity[2] = fVar2 * param_1[2] + pmove->velocity[2];
    }
  }
  return;
}

/* 000fe0b8  PM_WaterMove  (890 bytes)
 * undefined PM_WaterMove(void)
 */
void PM_WaterMove(void)

{
  float fVar1;
  longdouble lVar2;
  longdouble lVar3;
  float local_b8;
  float local_b4;
  int local_b0;
  pmtrace_t local_ac;
  vec_t local_5c;
  vec_t local_58;
  vec_t local_54;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  
  local_2c = pmove->right[0] * (pmove->cmd).sidemove + pmove->forward[0] * (pmove->cmd).forwardmove;
  local_28 = pmove->right[1] * (pmove->cmd).sidemove + pmove->forward[1] * (pmove->cmd).forwardmove;
  local_24 = pmove->right[2] * (pmove->cmd).sidemove + pmove->forward[2] * (pmove->cmd).forwardmove;
  if ((((pmove->cmd).forwardmove == 0.0) && ((pmove->cmd).sidemove == 0.0)) &&
     ((pmove->cmd).upmove == 0.0)) {
    local_24 = local_24 - 60.0;
  }
  else {
    local_24 = local_24 + (pmove->cmd).upmove;
  }
  local_1c = local_2c;
  local_18 = local_28;
  local_14 = local_24;
  lVar2 = (longdouble)VectorNormalize(&local_2c);
  local_b4 = (float)lVar2;
  if ((longdouble)pmove->maxspeed < lVar2) {
    VectorScale(&local_1c,pmove->maxspeed / local_b4,&local_1c);
    local_b4 = pmove->maxspeed;
  }
  local_b4 = local_b4 * 0.8;
  pmove->velocity[0] = pmove->velocity[0] + pmove->basevelocity[0];
  pmove->velocity[1] = pmove->velocity[1] + pmove->basevelocity[1];
  pmove->velocity[2] = pmove->velocity[2] + pmove->basevelocity[2];
  local_5c = pmove->velocity[0];
  local_58 = pmove->velocity[1];
  local_54 = pmove->velocity[2];
  lVar2 = (longdouble)VectorNormalize(&local_5c);
  if (lVar2 == (longdouble)0.0) {
    local_b8 = 0.0;
  }
  else {
    lVar3 = lVar2 - lVar2 * (longdouble)pmove->frametime * (longdouble)pmove->movevars->friction *
                    (longdouble)pmove->friction;
    local_b8 = (float)lVar3;
    if (lVar3 < (longdouble)0.0) {
      local_b8 = 0.0;
    }
    VectorScale(pmove->velocity,(float)((longdouble)local_b8 / lVar2),pmove->velocity);
  }
  if (0.1 <= local_b4) {
    local_b8 = local_b4 - local_b8;
    if (0.0 < local_b8) {
      VectorNormalize(&local_1c);
      fVar1 = local_b4 * pmove->movevars->accelerate * pmove->frametime * pmove->friction;
      if (local_b8 < fVar1) {
        fVar1 = local_b8;
      }
      pmove->velocity[0] = fVar1 * local_1c + pmove->velocity[0];
      pmove->velocity[1] = fVar1 * local_18 + pmove->velocity[1];
      pmove->velocity[2] = fVar1 * local_14 + pmove->velocity[2];
    }
    VectorMA(pmove->origin,pmove->frametime,pmove->velocity,&local_4c);
    local_3c = local_4c;
    local_38 = local_48;
    local_34 = local_44 + pmove->movevars->stepsize + 1.0;
    (*pmove->PM_PlayerTrace)(&local_ac,&local_3c,&local_4c,0,-1);
    if ((local_ac.allsolid == 0) && (local_b0 == 0)) {
      pmove->origin[0] = local_ac.fraction;
      pmove->origin[1] = local_ac.endpos[0];
      pmove->origin[2] = local_ac.endpos[1];
    }
    else {
      PM_FlyMove();
    }
  }
  return;
}

/* 000fe434  PM_AirMove  (310 bytes)
 * undefined PM_AirMove(void)
 */
void PM_AirMove(void)

{
  float fVar1;
  float fVar2;
  longdouble lVar3;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  fVar1 = (pmove->cmd).forwardmove;
  fVar2 = (pmove->cmd).sidemove;
  pmove->forward[2] = 0.0;
  pmove->right[2] = 0.0;
  VectorNormalize(pmove->forward);
  VectorNormalize(pmove->right);
  local_2c = fVar2 * pmove->right[0] + fVar1 * pmove->forward[0];
  local_28 = fVar2 * pmove->right[1] + fVar1 * pmove->forward[1];
  local_14 = 0;
  local_24 = 0;
  local_1c = local_2c;
  local_18 = local_28;
  lVar3 = (longdouble)VectorNormalize(&local_2c);
  if ((longdouble)pmove->maxspeed < lVar3) {
    VectorScale(&local_1c,(float)((longdouble)pmove->maxspeed / lVar3),&local_1c);
    lVar3 = (longdouble)pmove->maxspeed;
  }
  PM_AirAccelerate(&local_2c,(float)lVar3,pmove->movevars->airaccelerate);
  pmove->velocity[0] = pmove->velocity[0] + pmove->basevelocity[0];
  pmove->velocity[1] = pmove->velocity[1] + pmove->basevelocity[1];
  pmove->velocity[2] = pmove->velocity[2] + pmove->basevelocity[2];
  PM_FlyMove();
  return;
}

/* 000fe56c  PM_InWater  (38 bytes)
 * bool PM_InWater(void)
 */
bool PM_InWater(void)

{
  return 1 < pmove->waterlevel;
}

/* 000fe594  PM_CheckWater  (457 bytes)
 * bool PM_CheckWater(void)
 */
bool PM_CheckWater(void)

{
  int iVar1;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = (pmove->player_mins[pmove->usehull][0] + pmove->player_maxs[pmove->usehull][0]) * 0.5 +
             pmove->origin[0];
  local_18 = (pmove->player_mins[pmove->usehull][1] + pmove->player_maxs[pmove->usehull][1]) * 0.5 +
             pmove->origin[1];
  local_14 = pmove->origin[2] + pmove->player_mins[pmove->usehull][2] + 1.0;
  pmove->waterlevel = 0;
  pmove->watertype = -1;
  iVar1 = (*pmove->PM_PointContents)(&local_1c,&local_24);
  if (iVar1 + 0xeU < 0xc) {
    pmove->watertype = iVar1;
    pmove->waterlevel = 1;
    local_20 = (pmove->player_mins[pmove->usehull][2] + pmove->player_maxs[pmove->usehull][2]) * 0.5
    ;
    local_14 = local_20 + pmove->origin[2];
    iVar1 = (*pmove->PM_PointContents)(&local_1c,(int *)0x0);
    if (iVar1 + 0xeU < 0xc) {
      pmove->waterlevel = 2;
      local_14 = pmove->origin[2] + pmove->view_ofs[2];
      iVar1 = (*pmove->PM_PointContents)(&local_1c,(int *)0x0);
      if (iVar1 + 0xeU < 0xc) {
        pmove->waterlevel = 3;
      }
    }
    if (local_24 + 0xeU < 6) {
      local_20 = (float)pmove->waterlevel * 50.0;
      VectorMA(pmove->basevelocity,local_20,(float *)(current_table_2 + (-9 - local_24) * 0xc),
               pmove->basevelocity);
    }
  }
  return 1 < pmove->waterlevel;
}

/* 000fe760  PM_CatagorizePosition  (302 bytes)
 * undefined PM_CatagorizePosition(void)
 */
void PM_CatagorizePosition(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int aiStackY_c0 [12];
  undefined4 uStackY_90;
  int local_70;
  pmtrace_t local_6c;
  vec_t local_1c;
  vec_t local_18;
  float local_14;
  
  local_70 = 0xfe777;
  PM_CheckWater();
  local_1c = pmove->origin[0];
  local_18 = pmove->origin[1];
  local_14 = pmove->origin[2] - 2.0;
  if (pmove->velocity[2] <= 180.0) {
    uStackY_90 = 0xfe7dd;
    (*pmove->PM_PlayerTrace)(&local_6c,pmove->origin,&local_1c,0,-1);
    if (0.7 <= local_6c.plane.normal[1]) {
      pmove->onground = (int)local_6c.plane.dist;
    }
    else {
      pmove->onground = -1;
    }
    if (pmove->onground != -1) {
      pmove->waterjumptime = 0.0;
      if (((pmove->waterlevel < 2) && (local_6c.allsolid == 0)) && (local_70 == 0)) {
        pmove->origin[0] = local_6c.fraction;
        pmove->origin[1] = local_6c.endpos[0];
        pmove->origin[2] = local_6c.endpos[1];
      }
    }
    if (0 < (int)local_6c.plane.dist) {
      piVar2 = &local_70;
      piVar3 = aiStackY_c0;
      for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      PM_AddToTouched();
    }
  }
  else {
    pmove->onground = -1;
  }
  return;
}

/* 000fe894  PM_GetRandomStuckOffsets  (104 bytes)
 * int PM_GetRandomStuckOffsets(int param_1, int param_2, undefined4 * param_3)
 */
int PM_GetRandomStuckOffsets(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1 * 2 + param_2) * 4;
  iVar2 = *(int *)(rgStuckLast + iVar1);
  *(int *)(rgStuckLast + iVar1) = iVar2 + 1;
  iVar2 = iVar2 % 0x36;
  *param_3 = (&rgv3tStuckTable)[iVar2 * 3];
  param_3[1] = (&DAT_001a07a4)[iVar2 * 3];
  param_3[2] = (&DAT_001a07a8)[iVar2 * 3];
  return iVar2;
}

/* 000fe8fc  PM_ResetStuckOffsets  (36 bytes)
 * undefined PM_ResetStuckOffsets(int param_1, int param_2)
 */
void PM_ResetStuckOffsets(int param_1,int param_2)

{
  *(undefined4 *)(rgStuckLast + (param_1 * 2 + param_2) * 4) = 0;
  return;
}

/* 000fe920  PM_CheckStuck  (1332 bytes)
 * undefined4 PM_CheckStuck(void)
 */
undefined4 PM_CheckStuck(void)

{
  float fVar1;
  float fVar2;
  playermove_t *ppVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longdouble extraout_ST0;
  float local_b4;
  int local_a8;
  pmtrace_t local_9c;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  vec_t local_2c;
  vec_t local_28;
  vec_t local_24;
  
  iVar4 = (*pmove->PM_TestPlayerPosition)(pmove->origin,&local_9c);
  if (iVar4 == -1) {
    PM_ResetStuckOffsets(pmove->player_index,pmove->server);
LAB_000feca3:
    uVar7 = 0;
  }
  else {
    local_2c = pmove->origin[0];
    local_28 = pmove->origin[1];
    local_24 = pmove->origin[2];
    if ((pmove->server == 0) && ((iVar4 == 0 || (pmove->physents[iVar4].model != (model_s *)0x0))))
    {
      local_a8 = 0;
      PM_ResetStuckOffsets(pmove->player_index,pmove->server);
      do {
        PM_GetRandomStuckOffsets(pmove->player_index,pmove->server,&local_3c);
        local_4c = local_2c + local_3c;
        local_48 = local_28 + local_38;
        local_44 = local_24 + local_34;
        iVar5 = (*pmove->PM_TestPlayerPosition)(&local_4c,&local_9c);
        if (iVar5 == -1) {
LAB_000fec60:
          PM_ResetStuckOffsets(pmove->player_index,pmove->server);
          pmove->origin[0] = local_4c;
          pmove->origin[1] = local_48;
          pmove->origin[2] = local_44;
          goto LAB_000feca3;
        }
        PM_GetRandomStuckOffsets(pmove->player_index,pmove->server,&local_3c);
        local_4c = local_2c + local_3c;
        local_48 = local_28 + local_38;
        local_44 = local_24 + local_34;
        iVar5 = (*pmove->PM_TestPlayerPosition)(&local_4c,&local_9c);
        if (iVar5 == -1) goto LAB_000fec60;
        PM_GetRandomStuckOffsets(pmove->player_index,pmove->server,&local_3c);
        local_4c = local_2c + local_3c;
        local_48 = local_28 + local_38;
        local_44 = local_24 + local_34;
        iVar5 = (*pmove->PM_TestPlayerPosition)(&local_4c,&local_9c);
        if (iVar5 == -1) goto LAB_000fec60;
        local_a8 = local_a8 + 3;
      } while (local_a8 < 0x36);
    }
    uVar6 = (uint)(pmove->server == 0);
    (*pmove->Sys_FloatTime)();
    ppVar3 = pmove;
    if (*(float *)(rgStuckCheckTime_3 + (uVar6 + pmove->player_index * 2) * 4) <
        (float)extraout_ST0 - 0.05) {
      *(float *)(rgStuckCheckTime_3 + (uVar6 + pmove->player_index * 2) * 4) = (float)extraout_ST0;
      (*ppVar3->PM_StuckTouch)(iVar4,&local_9c);
      iVar4 = PM_GetRandomStuckOffsets(pmove->player_index,pmove->server,&local_3c);
      local_4c = local_2c + local_3c;
      local_48 = local_28 + local_38;
      local_44 = local_24 + local_34;
      iVar5 = (*pmove->PM_TestPlayerPosition)(&local_4c,(pmtrace_t *)0x0);
      if (iVar5 == -1) {
        PM_ResetStuckOffsets(pmove->player_index,pmove->server);
        if (0x1a < iVar4) {
LAB_000fecb0:
          pmove->origin[0] = local_4c;
          pmove->origin[1] = local_48;
          pmove->origin[2] = local_44;
        }
        return 0;
      }
      if ((((pmove->cmd).buttons & 7) != 0) && (pmove->physents[iVar5].player != 0)) {
        for (fVar1 = 0.0; fVar1 <= 72.0; fVar1 = fVar1 + 18.0) {
          for (fVar2 = -8.0; fVar2 <= 8.0; fVar2 = fVar2 + 8.0) {
            local_b4 = -8.0;
            do {
              local_4c = fVar2 + local_2c;
              local_48 = local_b4 + local_28;
              local_44 = fVar1 + local_24;
              iVar4 = (*pmove->PM_TestPlayerPosition)(&local_4c,(pmtrace_t *)0x0);
              if (iVar4 == -1) goto LAB_000fecb0;
              local_b4 = local_b4 + 8.0;
            } while (local_b4 <= 8.0);
          }
        }
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}

/* 000fee5c  GetChaseOrigin  (223 bytes)
 * undefined GetChaseOrigin(float * param_1, int param_2, float * param_3, float * param_4)
 */
void GetChaseOrigin(float *param_1,int param_2,float *param_3,float *param_4)

{
  playermove_t *ppVar1;
  pmtrace_s *ppVar2;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c [7];
  
  ppVar1 = pmove;
  AngleVectors(param_1,local_2c,(float *)0x0,(float *)0x0);
  local_4c = ppVar1->physents[param_2].origin[0];
  local_48 = ppVar1->physents[param_2].origin[1];
  local_44 = ppVar1->physents[param_2].origin[2] + 35.0;
  VectorMA(param_3,90.0,local_2c,&local_3c);
  local_3c = local_4c - local_3c;
  local_38 = local_48 - local_38;
  local_34 = local_44 - local_34;
  ppVar2 = (*pmove->PM_TraceLine)(&local_4c,&local_3c,0,2,param_2);
  VectorMA(ppVar2->endpos,4.0,(ppVar2->plane).normal,param_4);
  return;
}

/* 000fef3c  PM_SpectatorMove  (1190 bytes)
 * undefined PM_SpectatorMove(void)
 */
void PM_SpectatorMove(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longdouble lVar6;
  longdouble lVar7;
  vec_t local_5c;
  vec_t local_58;
  vec_t local_54;
  vec_t local_4c;
  vec_t local_48;
  vec_t local_44;
  float local_3c;
  vec_t local_38;
  vec_t local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((pmove->iuser1 == 3) || (pmove->iuser2 == 0)) {
    lVar6 = Length(pmove->velocity);
    if ((longdouble)1.0 <= lVar6) {
      lVar7 = lVar6;
      if (lVar6 < (longdouble)pmove->movevars->stopspeed) {
        lVar7 = (longdouble)pmove->movevars->stopspeed;
      }
      lVar7 = lVar6 - (lVar7 * (longdouble)(pmove->movevars->friction * 1.5) *
                       (longdouble)pmove->frametime + (longdouble)0.0);
      if (lVar7 < (longdouble)0.0) {
        lVar7 = (longdouble)0.0;
      }
      VectorScale(pmove->velocity,(float)(lVar7 / lVar6),pmove->velocity);
    }
    else {
      pmove->velocity[0] = vec3_origin;
      pmove->velocity[1] = DAT_00124d84;
      pmove->velocity[2] = DAT_00124d88;
    }
    fVar1 = (pmove->cmd).forwardmove;
    fVar2 = (pmove->cmd).sidemove;
    VectorNormalize(pmove->forward);
    VectorNormalize(pmove->right);
    local_2c = fVar2 * pmove->right[0] + fVar1 * pmove->forward[0];
    local_28 = fVar2 * pmove->right[1] + fVar1 * pmove->forward[1];
    local_24 = fVar2 * pmove->right[2] + fVar1 * pmove->forward[2] + (pmove->cmd).upmove;
    local_1c = local_2c;
    local_18 = local_28;
    local_14 = local_24;
    lVar6 = (longdouble)VectorNormalize(&local_2c);
    if ((longdouble)pmove->movevars->spectatormaxspeed < lVar6) {
      VectorScale(&local_1c,(float)((longdouble)pmove->movevars->spectatormaxspeed / lVar6),
                  &local_1c);
      lVar6 = (longdouble)pmove->movevars->spectatormaxspeed;
    }
    lVar7 = lVar6 - ((longdouble)pmove->velocity[2] * (longdouble)local_24 +
                    (longdouble)pmove->velocity[1] * (longdouble)local_28 +
                    (longdouble)pmove->velocity[0] * (longdouble)local_2c);
    if ((longdouble)0.0 < lVar7) {
      lVar6 = (longdouble)pmove->movevars->accelerate * (longdouble)pmove->frametime * lVar6;
      if (lVar7 < lVar6) {
        lVar6 = lVar7;
      }
      pmove->velocity[0] = (float)(lVar6 * (longdouble)local_2c + (longdouble)pmove->velocity[0]);
      pmove->velocity[1] = (float)(lVar6 * (longdouble)local_28 + (longdouble)pmove->velocity[1]);
      pmove->velocity[2] = (float)(lVar6 * (longdouble)local_24 + (longdouble)pmove->velocity[2]);
      VectorMA(pmove->origin,pmove->frametime,pmove->velocity,pmove->origin);
    }
  }
  else {
    iVar5 = 0;
    if ((0 < pmove->numphysent) && (pmove->physents[0].info != pmove->iuser2)) {
      piVar3 = &pmove->physents[0].info;
      do {
        piVar3 = piVar3 + 0x38;
        iVar5 = iVar5 + 1;
        if (pmove->numphysent <= iVar5) break;
      } while (*piVar3 != pmove->iuser2);
    }
    if (iVar5 != pmove->numphysent) {
      local_5c = vec3_origin;
      local_58 = DAT_00124d84;
      local_54 = DAT_00124d88;
      if ((((pmove->iuser1 == 4) && (pmove->iuser3 != 0)) && (0 < pmove->numphysent)) &&
         (pmove->physents[0].info != pmove->iuser3)) {
        piVar3 = &pmove->physents[0].info;
        iVar4 = 0;
        do {
          piVar3 = piVar3 + 0x38;
          iVar4 = iVar4 + 1;
          if (pmove->numphysent <= iVar4) break;
        } while (*piVar3 != pmove->iuser3);
      }
      if (pmove->iuser1 == 1) {
        local_38 = pmove->physents[iVar5].angles[1];
        local_34 = pmove->physents[iVar5].angles[2];
        local_3c = 10.0 - pmove->physents[iVar5].angles[0];
      }
      else if (pmove->iuser1 == 5) {
        local_3c = pmove->physents[iVar5].angles[0];
        local_38 = pmove->physents[iVar5].angles[1];
        local_34 = pmove->physents[iVar5].angles[2];
      }
      else if (pmove->iuser1 != 4) {
        local_3c = pmove->angles[0];
        local_38 = pmove->angles[1];
        local_34 = pmove->angles[2];
      }
      if (pmove->iuser1 == 5) {
        local_4c = pmove->physents[iVar5].origin[0];
        local_48 = pmove->physents[iVar5].origin[1];
        local_44 = pmove->physents[iVar5].origin[2];
      }
      else {
        GetChaseOrigin(&local_3c,iVar5,&local_5c,&local_4c);
      }
      pmove->origin[0] = local_4c;
      pmove->origin[1] = local_48;
      pmove->origin[2] = local_44;
      pmove->angles[0] = local_3c;
      pmove->angles[1] = local_38;
      pmove->angles[2] = local_34;
      pmove->velocity[0] = vec3_origin;
      pmove->velocity[1] = DAT_00124d84;
      pmove->velocity[2] = DAT_00124d88;
    }
  }
  return;
}

/* 000ff3ec  PM_SplineFraction  (45 bytes)
 * longdouble PM_SplineFraction(float param_1, float param_2)
 */
longdouble PM_SplineFraction(float param_1,float param_2)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar2 = (longdouble)param_1 * (longdouble)param_2;
  lVar1 = lVar2 * lVar2;
  return lVar1 * (longdouble)3.0 - (lVar1 + lVar1) * lVar2;
}

/* 000ff41c  PM_FixPlayerCrouchStuck  (253 bytes)
 * undefined PM_FixPlayerCrouchStuck(int param_1)
 */
void PM_FixPlayerCrouchStuck(int param_1)

{
  vec_t vVar1;
  vec_t vVar2;
  vec_t vVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (*pmove->PM_TestPlayerPosition)(pmove->origin,(pmtrace_t *)0x0);
  if (iVar5 != -1) {
    vVar1 = pmove->origin[0];
    vVar2 = pmove->origin[1];
    vVar3 = pmove->origin[2];
    iVar5 = 0;
    do {
      fVar4 = (float)param_1;
      pmove->origin[2] = fVar4 + pmove->origin[2];
      iVar6 = (*pmove->PM_TestPlayerPosition)(pmove->origin,(pmtrace_t *)0x0);
      if (iVar6 == -1) {
        return;
      }
      pmove->origin[2] = fVar4 + pmove->origin[2];
      iVar6 = (*pmove->PM_TestPlayerPosition)(pmove->origin,(pmtrace_t *)0x0);
      if (iVar6 == -1) {
        return;
      }
      pmove->origin[2] = fVar4 + pmove->origin[2];
      iVar6 = (*pmove->PM_TestPlayerPosition)(pmove->origin,(pmtrace_t *)0x0);
      if (iVar6 == -1) {
        return;
      }
      iVar5 = iVar5 + 3;
    } while (iVar5 < 0x24);
    pmove->origin[0] = vVar1;
    pmove->origin[1] = vVar2;
    pmove->origin[2] = vVar3;
  }
  return;
}

/* 000ff51c  PM_UnDuck  (307 bytes)
 * undefined PM_UnDuck(void)
 */
void PM_UnDuck(void)

{
  vec_t local_84;
  float local_7c;
  float local_78;
  float local_74;
  int local_70;
  pmtrace_t local_6c;
  
  local_7c = pmove->origin[0];
  local_78 = pmove->origin[1];
  local_74 = pmove->origin[2];
  if (pmove->onground != -1) {
    local_7c = (pmove->player_mins[1][0] - pmove->player_mins[0][0]) + local_7c;
    local_78 = (pmove->player_mins[1][1] - pmove->player_mins[0][1]) + local_78;
    local_74 = (pmove->player_mins[1][2] - pmove->player_mins[0][2]) + local_74;
  }
  (*pmove->PM_PlayerTrace)(&local_6c,&local_7c,&local_7c,0,-1);
  if (local_6c.allsolid == 0) {
    pmove->usehull = 0;
    (*pmove->PM_PlayerTrace)(&local_6c,&local_7c,&local_7c,0,-1);
    if (local_70 == 0) {
      pmove->flags = pmove->flags & 0xffffbfff;
      pmove->bInDuck = 0;
      pmove->view_ofs[2] = 28.0;
      pmove->flDuckTime = 0.0;
      pmove->origin[0] = local_84;
      pmove->origin[1] = 1.465478e-39;
      pmove->origin[2] = local_7c;
      PM_CatagorizePosition();
    }
    else {
      pmove->usehull = 1;
    }
  }
  return;
}

/* 000ff654  PM_LadderMove  (933 bytes)
 * undefined PM_LadderMove(int param_1)
 */
void PM_LadderMove(int param_1)

{
  plane_t *ppVar1;
  float fVar2;
  int iVar3;
  float local_118;
  float local_114;
  float local_10c [4];
  float local_fc;
  float local_f8;
  float local_f4;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_dc [4];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc [4];
  float local_ac [4];
  float local_9c;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_84;
  vec_t local_7c;
  vec_t local_78;
  float local_74;
  trace_t local_6c;
  float local_2c;
  float local_28;
  float local_24;
  
  if (pmove->movetype != 8) {
    (*pmove->PM_GetModelBounds)(*(model_s **)(param_1 + 0x30),&local_8c,&local_9c);
    local_2c = local_8c + local_9c;
    local_28 = local_88 + local_98;
    local_24 = local_84 + local_94;
    VectorScale(&local_2c,0.5,&local_2c);
    pmove->movetype = 5;
    local_7c = pmove->origin[0];
    local_78 = pmove->origin[1];
    local_74 = (pmove->player_mins[pmove->usehull][2] - 1.0) + pmove->origin[2];
    iVar3 = (*pmove->PM_PointContents)(&local_7c,(int *)0x0);
    pmove->gravity = 0.0;
    (*pmove->PM_TraceModel)((physent_t *)param_1,pmove->origin,&local_2c,&local_6c);
    if (local_6c.fraction != 1.0) {
      local_118 = 0.0;
      AngleVectors(pmove->angles,local_ac,local_bc,(float *)0x0);
      local_114 = local_118;
      if (((pmove->cmd).buttons & 0x10) != 0) {
        local_114 = -200.0;
      }
      if (((pmove->cmd).buttons & 8) != 0) {
        local_114 = local_114 + 200.0;
      }
      if (((pmove->cmd).buttons & 0x200) != 0) {
        local_118 = -200.0;
      }
      if (((pmove->cmd).buttons & 0x400) != 0) {
        local_118 = local_118 + 200.0;
      }
      if (((pmove->cmd).buttons & 2) == 0) {
        if ((local_114 == 0.0) && (local_118 == 0.0)) {
          pmove->velocity[0] = 0.0;
          pmove->velocity[1] = 0.0;
          pmove->velocity[2] = 0.0;
        }
        else {
          VectorScale(local_ac,local_114,&local_cc);
          VectorMA(&local_cc,local_118,local_bc,&local_cc);
          local_10c[0] = 0.0;
          local_10c[1] = 0.0;
          local_10c[2] = 1.0;
          ppVar1 = &local_6c.plane;
          CrossProduct(local_10c,ppVar1->normal,local_dc);
          VectorNormalize(local_dc);
          fVar2 = local_c4 * local_6c.plane.normal[2] +
                  local_c8 * local_6c.plane.normal[1] + local_cc * local_6c.plane.normal[0];
          VectorScale(ppVar1->normal,fVar2,&local_ec);
          local_fc = local_cc - local_ec;
          local_f8 = local_c8 - local_e8;
          local_f4 = local_c4 - local_e4;
          CrossProduct(ppVar1->normal,local_dc,local_10c);
          VectorMA(&local_fc,-fVar2,local_10c,pmove->velocity);
          if ((iVar3 == -2) && (0.0 < fVar2)) {
            VectorMA(pmove->velocity,200.0,ppVar1->normal,pmove->velocity);
          }
        }
      }
      else {
        pmove->movetype = 3;
        VectorScale(local_6c.plane.normal,270.0,pmove->velocity);
      }
    }
  }
  return;
}

/* 000ff9fc  PM_Ladder  (249 bytes)
 * int PM_Ladder(void)
 */
int PM_Ladder(void)

{
  physent_t *pe;
  playermove_t *ppVar1;
  int iVar2;
  hull_s *hull;
  int iVar3;
  int local_38;
  float local_2c;
  float local_28;
  float local_24;
  
  iVar3 = 0;
  if (0 < pmove->nummoveent) {
    local_38 = 0;
    do {
      ppVar1 = pmove;
      pe = (physent_t *)(pmove->moveents[0].name + local_38);
      if (((*(int *)((int)&__DT_SYMTAB[0xafb].st_size + (int)(pmove->physents[0].name + local_38))
            != 0) &&
          (iVar2 = (*pmove->PM_GetModelType)
                             (*(model_s **)
                               ((int)&__DT_SYMTAB[0xafb].st_size +
                               (int)(pmove->physents[0].name + local_38))), iVar2 == 0)) &&
         (*(int *)(&__DT_SYMTAB[0xafe].st_info + (int)(ppVar1->physents[0].name + local_38)) ==
          -0x10)) {
        hull = (*pmove->PM_HullForBsp)(pe,&local_2c);
        local_2c = pmove->origin[0] - local_2c;
        local_28 = pmove->origin[1] - local_28;
        local_24 = pmove->origin[2] - local_24;
        iVar2 = (*pmove->PM_HullPointContents)(hull,*(int *)(hull + 8),&local_2c);
        if (iVar2 != -1) {
          return (int)pe;
        }
      }
      local_38 = local_38 + 0xe0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < pmove->nummoveent);
  }
  return 0;
}

/* 000ffaf8  PM_WaterJump  (183 bytes)
 * undefined PM_WaterJump(void)
 */
void PM_WaterJump(void)

{
  if (10000.0 < pmove->waterjumptime) {
    pmove->waterjumptime = 10000.0;
  }
  if (pmove->waterjumptime != 0.0) {
    pmove->waterjumptime = pmove->waterjumptime - (float)(pmove->cmd).msec;
    if ((pmove->waterjumptime < 0.0) || (pmove->waterlevel == 0)) {
      pmove->waterjumptime = 0.0;
      pmove->flags = pmove->flags & 0xfffff7ff;
    }
    pmove->velocity[0] = pmove->movedir[0];
    pmove->velocity[1] = pmove->movedir[1];
  }
  return;
}

/* 000ffbb0  PM_AddGravity  (115 bytes)
 * undefined PM_AddGravity(void)
 */
void PM_AddGravity(void)

{
  float fVar1;
  
  if (pmove->gravity == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = pmove->gravity;
  }
  pmove->velocity[2] = pmove->velocity[2] - fVar1 * pmove->movevars->gravity * pmove->frametime;
  pmove->velocity[2] = pmove->basevelocity[2] * pmove->frametime + pmove->velocity[2];
  pmove->basevelocity[2] = 0.0;
  PM_CheckVelocity();
  return;
}

/* 000ffc24  PM_PushEntity  (196 bytes)
 * int * PM_PushEntity(undefined4 param_1, float * param_2)
 */
int * PM_PushEntity(undefined4 param_1,float *param_2)

{
  int iVar1;
  pmtrace_t *ppVar2;
  int *piVar3;
  qboolean *pqVar4;
  int *piVar5;
  int *unaff_retaddr;
  qboolean aqStackY_c0 [12];
  undefined4 uStackY_90;
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  pmtrace_t local_5c;
  
  local_6c = pmove->origin[0] + *param_2;
  local_68 = pmove->origin[1] + param_2[1];
  local_64 = pmove->origin[2] + param_2[2];
  uStackY_90 = 0xffc79;
  (*pmove->PM_PlayerTrace)(&local_5c,pmove->origin,&local_6c,0,-1);
  pmove->origin[0] = local_5c.fraction;
  pmove->origin[1] = local_5c.endpos[0];
  pmove->origin[2] = local_5c.endpos[1];
  if (((float)local_5c.inwater < 1.0) && (local_60 == 0)) {
    ppVar2 = &local_5c;
    pqVar4 = aqStackY_c0;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pqVar4 = ppVar2->allsolid;
      ppVar2 = (pmtrace_t *)&ppVar2->startsolid;
      pqVar4 = pqVar4 + 1;
    }
    PM_AddToTouched();
  }
  piVar3 = &local_60;
  piVar5 = unaff_retaddr;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  return unaff_retaddr;
}

/* 000ffce8  PM_Physics_Toss  (794 bytes)
 * undefined PM_Physics_Toss(void)
 */
void PM_Physics_Toss(void)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  float local_6c [4];
  int local_5c [4];
  float fStack_4c;
  float afStack_3c [2];
  float fStack_34;
  int iStack_2c;
  
  PM_CheckWater();
  if (0.0 < pmove->velocity[2]) {
    pmove->onground = -1;
  }
  if (((pmove->onground != -1) &&
      (bVar2 = VectorCompare(pmove->basevelocity,&vec3_origin), CONCAT31(extraout_var,bVar2) != 0))
     && (bVar2 = VectorCompare(pmove->velocity,&vec3_origin), CONCAT31(extraout_var_00,bVar2) != 0))
  {
    return;
  }
  PM_CheckVelocity();
  if (((pmove->movetype != 5) && (pmove->movetype != 0xb)) && (pmove->movetype != 9)) {
    PM_AddGravity();
  }
  pmove->velocity[0] = pmove->velocity[0] + pmove->basevelocity[0];
  pmove->velocity[1] = pmove->velocity[1] + pmove->basevelocity[1];
  pmove->velocity[2] = pmove->velocity[2] + pmove->basevelocity[2];
  PM_CheckVelocity();
  VectorScale(pmove->velocity,pmove->frametime,local_6c);
  pmove->velocity[0] = pmove->velocity[0] - pmove->basevelocity[0];
  pmove->velocity[1] = pmove->velocity[1] - pmove->basevelocity[1];
  pmove->velocity[2] = pmove->velocity[2] - pmove->basevelocity[2];
  PM_PushEntity(local_5c,local_6c);
  PM_CheckVelocity();
  if (local_5c[0] == 0) {
    if (fStack_4c == 1.0) {
      PM_CheckWater();
    }
    else {
      if (pmove->movetype == 10) {
        fVar1 = 2.0 - pmove->friction;
      }
      else if (pmove->movetype == 0xb) {
        fVar1 = 2.0;
      }
      else {
        fVar1 = 1.0;
      }
      PM_ClipVelocity(pmove->velocity,afStack_3c,pmove->velocity,fVar1);
      if (0.7 < fStack_34) {
        if (pmove->velocity[2] < pmove->movevars->gravity * pmove->frametime) {
          pmove->onground = iStack_2c;
          pmove->velocity[2] = 0.0;
        }
        if ((pmove->velocity[2] * pmove->velocity[2] +
             pmove->velocity[1] * pmove->velocity[1] + pmove->velocity[0] * pmove->velocity[0] <
             900.0) || (1 < pmove->movetype - 10U)) {
          pmove->onground = iStack_2c;
          pmove->velocity[0] = vec3_origin;
          pmove->velocity[1] = DAT_00124d84;
          pmove->velocity[2] = DAT_00124d88;
        }
        else {
          VectorScale(pmove->velocity,(1.0 - fStack_4c) * pmove->frametime * 0.9,local_6c);
          PM_PushEntity(local_5c,local_6c);
        }
        pmove->velocity[0] = pmove->velocity[0] - 0.0;
        pmove->velocity[1] = pmove->velocity[1] - 0.0;
        pmove->velocity[2] = pmove->velocity[2] - 0.0;
      }
      PM_CheckWater();
    }
  }
  else {
    pmove->onground = iStack_2c;
    pmove->velocity[0] = vec3_origin;
    pmove->velocity[1] = DAT_00124d84;
    pmove->velocity[2] = DAT_00124d88;
  }
  return;
}

/* 0010000c  PM_NoClip  (200 bytes)
 * undefined PM_NoClip(void)
 */
void PM_NoClip(void)

{
  float fVar1;
  float fVar2;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar1 = (pmove->cmd).forwardmove;
  fVar2 = (pmove->cmd).sidemove;
  VectorNormalize(pmove->forward);
  VectorNormalize(pmove->right);
  local_1c = fVar2 * pmove->right[0] + fVar1 * pmove->forward[0];
  local_18 = fVar2 * pmove->right[1] + fVar1 * pmove->forward[1];
  local_14 = fVar2 * pmove->right[2] + fVar1 * pmove->forward[2] + (pmove->cmd).upmove;
  VectorMA(pmove->origin,pmove->frametime,&local_1c,pmove->origin);
  pmove->velocity[0] = 0.0;
  pmove->velocity[1] = 0.0;
  pmove->velocity[2] = 0.0;
  return;
}

/* 001000d4  PM_PreventMegaBunnyJumping  (137 bytes)
 * undefined PM_PreventMegaBunnyJumping(void)
 */
void PM_PreventMegaBunnyJumping(void)

{
  float fVar1;
  longdouble lVar2;
  
  fVar1 = pmove->maxspeed * 1.7;
  if ((0.0 < fVar1) && (lVar2 = Length(pmove->velocity), (longdouble)fVar1 < lVar2)) {
    VectorScale(pmove->velocity,(float)((longdouble)0.65 * ((longdouble)fVar1 / lVar2)),
                pmove->velocity);
  }
  return;
}

/* 00100160  PM_CheckWaterJump  (622 bytes)
 * undefined PM_CheckWaterJump(void)
 */
void PM_CheckWaterJump(void)

{
  undefined1 *puVar1;
  longdouble lVar2;
  pmtrace_t *local_c4;
  pmtrace_t local_ac;
  vec_t local_5c;
  vec_t local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c [4];
  vec_t local_2c;
  vec_t local_28;
  float local_24;
  
  if ((pmove->waterjumptime == 0.0) && (-180.0 <= pmove->velocity[2])) {
    local_5c = pmove->velocity[0];
    local_58 = pmove->velocity[1];
    local_54 = 0.0;
    lVar2 = (longdouble)VectorNormalize(&local_5c);
    local_4c = pmove->forward[0];
    local_48 = pmove->forward[1];
    local_44 = 0.0;
    VectorNormalize(&local_4c);
    if (((float)lVar2 == 0.0) ||
       (0.0 <= local_54 * local_44 + local_58 * local_48 + local_5c * local_4c)) {
      local_2c = pmove->origin[0];
      local_28 = pmove->origin[1];
      local_24 = pmove->origin[2] + 8.0;
      VectorMA(&local_2c,24.0,&local_4c,local_3c);
      pmove->usehull = 2;
      (*pmove->PM_PlayerTrace)(&local_ac,&local_2c,local_3c,0,-1);
      puVar1 = &stack0xffffff30;
      if (((float)local_ac.inwater < 1.0) &&
         (puVar1 = &stack0xffffff30, ABS(local_ac.plane.normal[1]) < 0.1)) {
        local_28 = (pmove[0x26c].physents[0x1da].angles[2] - (float)&local_4c) + local_28;
        VectorMA(&local_2c,24.0,(float *)&local_ac,local_3c);
        VectorMA((float *)&vec3_origin,-50.0,local_ac.endpos + 2,pmove->movedir);
        (*pmove->PM_PlayerTrace)(local_c4,&local_2c,local_3c,0,-1);
        puVar1 = &stack0xffffff2c;
        if ((float)local_ac.inopen == 1.0) {
          pmove->waterjumptime = 2000.0;
          pmove->velocity[2] = 225.0;
          pmove->oldbuttons = pmove->oldbuttons | 2;
          pmove->flags = pmove->flags | 0x800;
          puVar1 = &stack0xffffff2c;
        }
      }
      pmove->usehull = *(int *)(puVar1 + 0x18);
    }
  }
  return;
}

/* 001003d0  PM_CheckFalling  (469 bytes)
 * undefined PM_CheckFalling(void)
 */
void PM_CheckFalling(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (((pmove->onground != -1) && (pmove->dead == 0)) && (350.0 <= pmove->flFallVelocity)) {
    fVar4 = 0.5;
    if (pmove->waterlevel < 1) {
      if (pmove->flFallVelocity <= 680.0) {
        if (pmove->flFallVelocity <= 340.0) {
          if (pmove->flFallVelocity < 200.0) {
            fVar4 = 0.0;
          }
        }
        else {
          pcVar1 = (*pmove->PM_Info_ValueForKey)(pmove->physinfo,"tfc");
          iVar2 = __strtol_internal(pcVar1,0,10,0);
          if (iVar2 == 1) {
            (*pmove->PM_PlaySound)(2,"player/pl_fallpain3.wav",1.0,0.8,0,100);
          }
          fVar4 = 0.85;
        }
      }
      else {
        (*pmove->PM_PlaySound)(2,"player/pl_fallpain3.wav",1.0,0.8,0,100);
        fVar4 = 1.0;
      }
    }
    if (0.0 < fVar4) {
      pmove->flTimeStepSound = 0;
      PM_UpdateStepSound();
      uVar3 = PM_MapTextureTypeStepType(pmove->chtexturetype);
      PM_PlayStepSound(uVar3,fVar4);
      pmove->punchangle[2] = pmove->flFallVelocity * 0.013;
      if (8.0 < pmove->punchangle[0]) {
        pmove->punchangle[0] = 8.0;
      }
    }
  }
  if (pmove->onground != -1) {
    pmove->flFallVelocity = 0.0;
  }
  return;
}

/* 001005ac  PM_PlayWaterSounds  (269 bytes)
 * undefined PM_PlayWaterSounds(void)
 */
void PM_PlayWaterSounds(void)

{
  int iVar1;
  char *sample;
  
  if (((pmove->oldwaterlevel == 0) && (pmove->waterlevel != 0)) ||
     ((pmove->oldwaterlevel != 0 && (pmove->waterlevel == 0)))) {
    iVar1 = (*pmove->RandomLong)(0,3);
    switch(iVar1) {
    case 0:
      sample = "player/pl_wade1.wav";
      break;
    case 1:
      sample = "player/pl_wade2.wav";
      break;
    case 2:
      sample = "player/pl_wade3.wav";
      break;
    case 3:
      sample = "player/pl_wade4.wav";
      break;
    default:
      goto switchD_00100624_default;
    }
    (*pmove->PM_PlaySound)(4,sample,1.0,0.8,0,100);
  }
switchD_00100624_default:
  return;
}

/* 001006d4  PM_CalcRoll  (134 bytes)
 * longdouble PM_CalcRoll(float * param_1, float * param_2, float param_3, float param_4)
 */
longdouble PM_CalcRoll(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  longdouble lVar2;
  longdouble lVar3;
  float local_3c [4];
  float local_2c;
  float local_28;
  float local_24;
  float local_1c [5];
  
  AngleVectors(param_1,local_1c,&local_2c,local_3c);
  lVar3 = (longdouble)param_2[2] * (longdouble)local_24 +
          (longdouble)param_2[1] * (longdouble)local_28 +
          (longdouble)*param_2 * (longdouble)local_2c;
  if ((longdouble)0.0 <= lVar3) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = -1.0;
  }
  lVar3 = ABS(lVar3);
  lVar2 = (longdouble)param_3;
  if (lVar3 < (longdouble)param_4) {
    lVar2 = (lVar3 * lVar2) / (longdouble)param_4;
  }
  return lVar2 * (longdouble)fVar1;
}

/* 00100760  PM_DropPunchAngle  (148 bytes)
 * undefined PM_DropPunchAngle(float * param_1)
 */
void PM_DropPunchAngle(float *param_1)

{
  longdouble lVar1;
  float fVar2;
  
  if (pmove->dead == 0) {
    lVar1 = (longdouble)VectorNormalize(param_1);
    fVar2 = (float)(lVar1 - (lVar1 * (longdouble)0.5 + (longdouble)10.0) *
                            (longdouble)pmove->frametime * (longdouble)pmove->fuser1);
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  VectorScale(param_1,fVar2,param_1);
  return;
}

/* 001007f8  PM_ReduceTimers  (222 bytes)
 * undefined PM_ReduceTimers(void)
 */
void PM_ReduceTimers(void)

{
  if ((0 < pmove->flTimeStepSound) &&
     (pmove->flTimeStepSound = pmove->flTimeStepSound - (uint)(pmove->cmd).msec,
     pmove->flTimeStepSound < 0)) {
    pmove->flTimeStepSound = 0;
  }
  if ((0.0 < pmove->flDuckTime) &&
     (pmove->flDuckTime = pmove->flDuckTime - (float)(pmove->cmd).msec, pmove->flDuckTime < 0.0)) {
    pmove->flDuckTime = 0.0;
  }
  if ((0.0 < pmove->flSwimTime) &&
     (pmove->flSwimTime = pmove->flSwimTime - (float)(pmove->cmd).msec, pmove->flSwimTime < 0.0)) {
    pmove->flSwimTime = 0.0;
  }
  return;
}

/* 001008d8  PM_PlayerMove  (1103 bytes)
 * undefined PM_PlayerMove(undefined4 param_1)
 */
void PM_PlayerMove(qboolean param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  
  iVar4 = 0;
  pmove->server = param_1;
  PM_CheckParamters();
  pmove->numtouch = 0;
  pmove->frametime = (float)(pmove->cmd).msec * 0.001;
  if (pmove->fuser1 < 0.1) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = pmove->frametime * pmove->fuser1;
  }
  pmove->frametime = fVar1;
  PM_ReduceTimers();
  AngleVectors(pmove->angles,pmove->forward,pmove->right,pmove->up);
  if ((pmove->spectator == 0) && (pmove->iuser1 < 1)) {
    if (((pmove->movetype == 8) || (pmove->movetype == 0)) || (iVar3 = PM_CheckStuck(), iVar3 == 0))
    {
      PM_CatagorizePosition();
      pmove->oldwaterlevel = pmove->waterlevel;
      if (pmove->onground == -1) {
        pmove->flFallVelocity = -pmove->velocity[2];
      }
      g_onladder = 0;
      if (((pmove->dead == 0) && ((pmove->flags & 0x1000000) == 0)) &&
         (iVar4 = PM_Ladder(), iVar4 != 0)) {
        g_onladder = 1;
      }
      TSHandle();
      PM_UpdateStepSound();
      PM_Duck();
      if ((pmove->dead == 0) && ((pmove->flags & 0x1000000) == 0)) {
        if (iVar4 == 0) {
          if ((pmove->movetype != 3) && (pmove->movetype != 8)) {
            pmove->movetype = 3;
          }
        }
        else {
          PM_LadderMove(iVar4);
        }
      }
      switch(pmove->movetype) {
      case 0:
        break;
      default:
        (*pmove->Con_DPrintf)
                  ("Bogus pmove player movetype %i on (%i) 0=cl 1=sv\n",pmove->movetype,
                   pmove->server);
        break;
      case 3:
        bVar2 = PM_InWater();
        if (CONCAT31(extraout_var,bVar2) == 0) {
          PM_AddCorrectGravity();
        }
        if (pmove->waterjumptime == 0.0) {
          if (pmove->waterlevel < 2) {
            if (((pmove->cmd).buttons & 2) == 0) {
              pmove->oldbuttons = pmove->oldbuttons & 0xfffffffd;
            }
            else if (iVar4 == 0) {
              PM_Jump();
            }
            if (pmove->onground != -1) {
              pmove->velocity[2] = 0.0;
              PM_Friction();
            }
            PM_CheckVelocity();
            if (pmove->onground == -1) {
              PM_AirMove();
            }
            else {
              PM_WalkMove();
            }
            PM_CatagorizePosition();
            pmove->velocity[0] = pmove->velocity[0] - pmove->basevelocity[0];
            pmove->velocity[1] = pmove->velocity[1] - pmove->basevelocity[1];
            pmove->velocity[2] = pmove->velocity[2] - pmove->basevelocity[2];
            PM_CheckVelocity();
            bVar2 = PM_InWater();
            if (CONCAT31(extraout_var_00,bVar2) == 0) {
              PM_FixupGravityVelocity();
            }
            if (pmove->onground != -1) {
              pmove->velocity[2] = 0.0;
            }
            PM_CheckFalling();
          }
          else {
            if (pmove->waterlevel == 2) {
              PM_CheckWaterJump();
            }
            if ((pmove->velocity[2] < 0.0) && (pmove->waterjumptime != 0.0)) {
              pmove->waterjumptime = 0.0;
            }
            if (((pmove->cmd).buttons & 2) == 0) {
              pmove->oldbuttons = pmove->oldbuttons & 0xfffffffd;
            }
            else {
              PM_Jump();
            }
            PM_WaterMove();
            pmove->velocity[0] = pmove->velocity[0] - pmove->basevelocity[0];
            pmove->velocity[1] = pmove->velocity[1] - pmove->basevelocity[1];
            pmove->velocity[2] = pmove->velocity[2] - pmove->basevelocity[2];
            PM_CatagorizePosition();
          }
          PM_PlayWaterSounds();
        }
        else {
          PM_WaterJump();
          PM_FlyMove();
          PM_CheckWater();
        }
        break;
      case 5:
        PM_CheckWater();
        if (((pmove->cmd).buttons & 2) == 0) {
          pmove->oldbuttons = pmove->oldbuttons & 0xfffffffd;
        }
        else if (iVar4 == 0) {
          PM_Jump();
        }
        pmove->velocity[0] = pmove->velocity[0] + pmove->basevelocity[0];
        pmove->velocity[1] = pmove->velocity[1] + pmove->basevelocity[1];
        pmove->velocity[2] = pmove->velocity[2] + pmove->basevelocity[2];
        PM_FlyMove();
        pmove->velocity[0] = pmove->velocity[0] - pmove->basevelocity[0];
        pmove->velocity[1] = pmove->velocity[1] - pmove->basevelocity[1];
        pmove->velocity[2] = pmove->velocity[2] - pmove->basevelocity[2];
        break;
      case 6:
      case 10:
        PM_Physics_Toss();
        break;
      case 8:
        PM_NoClip();
      }
    }
  }
  else {
    PM_SpectatorMove();
    PM_CatagorizePosition();
  }
  return;
}

/* 00100d74  PM_CreateStuckTable  (1039 bytes)
 * undefined PM_CreateStuckTable(void)
 */
/* WARNING: Removing unreachable block (ram,0x00100f78) */

void PM_CreateStuckTable(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_1c [4];
  
  memset(&rgv3tStuckTable,0,0x288);
  iVar5 = 0;
  fVar1 = -0.125;
  iVar6 = 0;
  do {
    *(undefined4 *)((int)&rgv3tStuckTable + iVar6) = 0;
    *(undefined4 *)((int)&DAT_001a07a4 + iVar6) = 0;
    *(float *)((int)&DAT_001a07a8 + iVar6) = fVar1;
    iVar6 = iVar6 + 0xc;
    iVar5 = iVar5 + 1;
    fVar1 = fVar1 + 0.125;
  } while (fVar1 <= 0.125);
  fVar1 = -0.125;
  iVar6 = iVar5 * 0xc;
  do {
    *(undefined4 *)((int)&rgv3tStuckTable + iVar6) = 0;
    *(float *)((int)&DAT_001a07a4 + iVar6) = fVar1;
    *(undefined4 *)((int)&DAT_001a07a8 + iVar6) = 0;
    iVar6 = iVar6 + 0xc;
    iVar5 = iVar5 + 1;
    fVar1 = fVar1 + 0.125;
  } while (fVar1 <= 0.125);
  fVar1 = -0.125;
  iVar6 = iVar5 * 0xc;
  do {
    *(float *)((int)&rgv3tStuckTable + iVar6) = fVar1;
    *(undefined4 *)((int)&DAT_001a07a4 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_001a07a8 + iVar6) = 0;
    iVar6 = iVar6 + 0xc;
    iVar5 = iVar5 + 1;
    fVar1 = fVar1 + 0.125;
  } while (fVar1 <= 0.125);
  for (fVar1 = -0.125; fVar1 <= 0.125; fVar1 = fVar1 + 0.25) {
    for (fVar4 = -0.125; fVar4 <= 0.125; fVar4 = fVar4 + 0.25) {
      fVar2 = -0.125;
      iVar6 = iVar5 * 0xc;
      do {
        *(float *)((int)&rgv3tStuckTable + iVar6) = fVar1;
        *(float *)((int)&DAT_001a07a4 + iVar6) = fVar4;
        *(float *)((int)&DAT_001a07a8 + iVar6) = fVar2;
        iVar6 = iVar6 + 0xc;
        iVar5 = iVar5 + 1;
        fVar2 = fVar2 + 0.25;
      } while (fVar2 <= 0.125);
    }
  }
  local_1c[0] = 0;
  local_1c[1] = 0x3f800000;
  local_1c[2] = 0x40c00000;
  (&rgv3tStuckTable)[iVar5 * 3] = 0;
  (&DAT_001a07a4)[iVar5 * 3] = 0;
  (&DAT_001a07a8)[iVar5 * 3] = 0;
  (&DAT_001a07ac)[iVar5 * 3] = 0;
  (&DAT_001a07b0)[iVar5 * 3] = 0;
  (&DAT_001a07b4)[iVar5 * 3] = 0x3f800000;
  (&DAT_001a07b8)[iVar5 * 3] = 0;
  (&DAT_001a07bc)[iVar5 * 3] = 0;
  (&DAT_001a07c0)[iVar5 * 3] = 0x40c00000;
  iVar5 = iVar5 + 3;
  fVar1 = -2.0;
  iVar6 = iVar5 * 0xc;
  do {
    *(undefined4 *)((int)&rgv3tStuckTable + iVar6) = 0;
    *(float *)((int)&DAT_001a07a4 + iVar6) = fVar1;
    *(undefined4 *)((int)&DAT_001a07a8 + iVar6) = 0;
    iVar6 = iVar6 + 0xc;
    iVar5 = iVar5 + 1;
    fVar1 = fVar1 + 2.0;
  } while (fVar1 <= 2.0);
  fVar1 = -2.0;
  iVar6 = iVar5 * 0xc;
  do {
    *(float *)((int)&rgv3tStuckTable + iVar6) = fVar1;
    *(undefined4 *)((int)&DAT_001a07a4 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_001a07a8 + iVar6) = 0;
    iVar6 = iVar6 + 0xc;
    iVar5 = iVar5 + 1;
    fVar1 = fVar1 + 2.0;
  } while (fVar1 <= 2.0);
  iVar6 = 0;
  do {
    uVar3 = local_1c[iVar6];
    for (fVar1 = -2.0; fVar1 <= 2.0; fVar1 = fVar1 + 2.0) {
      fVar4 = -2.0;
      iVar7 = iVar5 * 0xc;
      do {
        *(float *)((int)&rgv3tStuckTable + iVar7) = fVar1;
        *(float *)((int)&DAT_001a07a4 + iVar7) = fVar4;
        *(undefined4 *)((int)&DAT_001a07a8 + iVar7) = uVar3;
        iVar7 = iVar7 + 0xc;
        iVar5 = iVar5 + 1;
        fVar4 = fVar4 + 2.0;
      } while (fVar4 <= 2.0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  return;
}

/* 00101188  PM_Move  (174 bytes)
 * void PM_Move(playermove_s * ppmove, qboolean server)
 */
void PM_Move(playermove_s *ppmove,qboolean server)

{
  if (pm_shared_initialized == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("pm_shared_initialized","../pm_shared/pm_shared.c",0xe27,"PM_Move");
  }
  pmove = ppmove;
  PM_PlayerMove((uint)(server != 0));
  if (pmove->onground == -1) {
    pmove->flags = pmove->flags & 0xfffffdff;
  }
  else {
    pmove->flags = pmove->flags | 0x200;
  }
  if ((pmove->multiplayer == 0) && (pmove->movetype == 3)) {
    pmove->friction = 1.0;
  }
  return;
}

/* 0010123c  PM_GetInfo  (65 bytes)
 * undefined4 PM_GetInfo(int param_1)
 */
int PM_GetInfo(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (pmove->numvisent < param_1)) {
    iVar1 = -1;
  }
  else {
    iVar1 = pmove->visents[param_1].info;
  }
  return iVar1;
}

/* 00101280  PM_Init  (93 bytes)
 * void PM_Init(playermove_s * ppmove)
 */
void PM_Init(playermove_s *ppmove)

{
  if (pm_shared_initialized != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!pm_shared_initialized","../pm_shared/pm_shared.c",0xe48,"PM_Init");
  }
  pmove = ppmove;
  PM_CreateStuckTable();
  PM_InitTextureTypes();
  pm_shared_initialized = 1;
  return;
}

