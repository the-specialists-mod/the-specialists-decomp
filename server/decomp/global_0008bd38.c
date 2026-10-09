/* ts_i386.so - global_0008bd38 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008bd38  ts_wingiver  (33 bytes)
 * undefined ts_wingiver(uint param_1)
 */
void ts_wingiver(uint param_1)

{
  GetClassPtr<CTSWinGiver>(param_1);
  return;
}

/* 0008c06c  ts_scoregiver  (33 bytes)
 * undefined ts_scoregiver(uint param_1)
 */
void ts_scoregiver(uint param_1)

{
  GetClassPtr<CTSScoreGiver>(param_1);
  return;
}

/* 0008c3ac  ts_bomb  (33 bytes)
 * undefined ts_bomb(uint param_1)
 */
void ts_bomb(uint param_1)

{
  GetClassPtr<CTSBomb>(param_1);
  return;
}

/* 0008cc08  ts_hack  (33 bytes)
 * undefined ts_hack(uint param_1)
 */
void ts_hack(uint param_1)

{
  GetClassPtr<CTSHack>(param_1);
  return;
}

/* 0008d2cc  ts_teamescape  (33 bytes)
 * undefined ts_teamescape(uint param_1)
 */
void ts_teamescape(uint param_1)

{
  GetClassPtr<CTSTeamEscape>(param_1);
  return;
}

/* 0008d764  ts_briefcase  (33 bytes)
 * undefined ts_briefcase(uint param_1)
 */
void ts_briefcase(uint param_1)

{
  GetClassPtr<CTSBriefcase>(param_1);
  return;
}

/* 0008e12c  GetClassPtr<CTSObjectiveManager>  (134 bytes)
 * CTSObjectiveManager * GetClassPtr<CTSObjectiveManager>(uint param_1)
 */
/* CTSObjectiveManager * GetClassPtr<CTSObjectiveManager>(CTSObjectiveManager *) */

CTSObjectiveManager * GetClassPtr<CTSObjectiveManager>(uint param_1)

{
  edict_t *peVar1;
  CTSObjectiveManager *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSObjectiveManager *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSObjectiveManager *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xa0);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSObjectiveManager_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0008e1b4  GetClassPtr<CTSObjectivePointer>  (131 bytes)
 * CTSObjectivePointer * GetClassPtr<CTSObjectivePointer>(uint param_1)
 */
/* CTSObjectivePointer * GetClassPtr<CTSObjectivePointer>(CTSObjectivePointer *) */

CTSObjectivePointer * GetClassPtr<CTSObjectivePointer>(uint param_1)

{
  edict_t *peVar1;
  CTSObjectivePointer *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSObjectivePointer *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSObjectivePointer *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x78);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSObjectivePointer_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0008e238  GetClassPtr<CTSWinGiver>  (131 bytes)
 * CTSWinGiver * GetClassPtr<CTSWinGiver>(uint param_1)
 */
/* CTSWinGiver * GetClassPtr<CTSWinGiver>(CTSWinGiver *) */

CTSWinGiver * GetClassPtr<CTSWinGiver>(uint param_1)

{
  edict_t *peVar1;
  CTSWinGiver *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSWinGiver *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSWinGiver *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x7c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSWinGiver_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0008e2bc  GetClassPtr<CTSScoreGiver>  (140 bytes)
 * CTSScoreGiver * GetClassPtr<CTSScoreGiver>(uint param_1)
 */
/* CTSScoreGiver * GetClassPtr<CTSScoreGiver>(CTSScoreGiver *) */

CTSScoreGiver * GetClassPtr<CTSScoreGiver>(uint param_1)

{
  edict_t *peVar1;
  CTSScoreGiver *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSScoreGiver *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSScoreGiver *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x7c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSWinGiver_virtual_table;
    pCVar2->vtable = (void **)CTSScoreGiver_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0008e348  GetClassPtr<CTSBomb>  (143 bytes)
 * CTSBomb * GetClassPtr<CTSBomb>(uint param_1)
 */
/* CTSBomb * GetClassPtr<CTSBomb>(CTSBomb *) */

CTSBomb * GetClassPtr<CTSBomb>(uint param_1)

{
  edict_t *peVar1;
  CTSBomb *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSBomb *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSBomb *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x88);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSObjective_virtual_table;
    pCVar2->vtable = (void **)CTSBomb_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0008e3d8  GetClassPtr<CTSHack>  (143 bytes)
 * CTSHack * GetClassPtr<CTSHack>(uint param_1)
 */
/* CTSHack * GetClassPtr<CTSHack>(CTSHack *) */

CTSHack * GetClassPtr<CTSHack>(uint param_1)

{
  edict_t *peVar1;
  CTSHack *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSHack *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSHack *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x80);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSObjective_virtual_table;
    pCVar2->vtable = (void **)CTSHack_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0008e468  GetClassPtr<CTSTeamEscape>  (143 bytes)
 * CTSTeamEscape * GetClassPtr<CTSTeamEscape>(uint param_1)
 */
/* CTSTeamEscape * GetClassPtr<CTSTeamEscape>(CTSTeamEscape *) */

CTSTeamEscape * GetClassPtr<CTSTeamEscape>(uint param_1)

{
  edict_t *peVar1;
  CTSTeamEscape *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSTeamEscape *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSTeamEscape *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xf8);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSObjective_virtual_table;
    pCVar2->vtable = (void **)CTSTeamEscape_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0008e4f8  GetClassPtr<CTSBriefcase>  (124 bytes)
 * CTSBriefcase * GetClassPtr<CTSBriefcase>(uint param_1)
 */
/* CTSBriefcase * GetClassPtr<CTSBriefcase>(CTSBriefcase *) */

CTSBriefcase * GetClassPtr<CTSBriefcase>(uint param_1)

{
  edict_t *peVar1;
  CTSBriefcase *this;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  this = (CTSBriefcase *)0x0;
  if (*(int *)(param_1 + 0x208) != 0) {
    this = *(CTSBriefcase **)(*(int *)(param_1 + 0x208) + 0x7c);
  }
  if (this == (CTSBriefcase *)0x0) {
    this = (*g_engfuncs.pfnPvAllocEntPrivateData)(*(edict_t **)(param_1 + 0x208),0xac);
    CTSBriefcase::CTSBriefcase(this);
    *(uint *)this = param_1;
  }
  return this;
}

/* 0008e574  CTSObjectiveManager_type_info_function  (70 bytes)
 * undefined4 * CTSObjectiveManager_type_info_function(void)
 */
/* CTSObjectiveManager type_info function */

undefined4 * CTSObjectiveManager_type_info_function(void)

{
  if (CTSObjectiveManager_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSObjectiveManager_type_info_node,"19CTSObjectiveManager",
              &CBaseEntity_type_info_node);
  }
  return &CTSObjectiveManager_type_info_node;
}

/* 0008e5bc  CTSObjectivePointer_type_info_function  (70 bytes)
 * undefined4 * CTSObjectivePointer_type_info_function(void)
 */
/* CTSObjectivePointer type_info function */

undefined4 * CTSObjectivePointer_type_info_function(void)

{
  if (CTSObjectivePointer_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSObjectivePointer_type_info_node,"19CTSObjectivePointer",
              &CBaseEntity_type_info_node);
  }
  return &CTSObjectivePointer_type_info_node;
}

/* 0008e604  CTSWinGiver_type_info_function  (70 bytes)
 * undefined4 * CTSWinGiver_type_info_function(void)
 */
/* CTSWinGiver type_info function */

undefined4 * CTSWinGiver_type_info_function(void)

{
  if (CTSWinGiver_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSWinGiver_type_info_node,"11CTSWinGiver",&CBaseEntity_type_info_node);
  }
  return &CTSWinGiver_type_info_node;
}

/* 0008e650  CTSScoreGiver_type_info_function  (70 bytes)
 * undefined4 * CTSScoreGiver_type_info_function(void)
 */
/* CTSScoreGiver type_info function */

undefined4 * CTSScoreGiver_type_info_function(void)

{
  if (CTSScoreGiver_type_info_node == 0) {
    CTSWinGiver_type_info_function();
    __rtti_si(&CTSScoreGiver_type_info_node,"13CTSScoreGiver",&CTSWinGiver_type_info_node);
  }
  return &CTSScoreGiver_type_info_node;
}

/* 0008e698  CTSObjective_type_info_function  (70 bytes)
 * undefined4 * CTSObjective_type_info_function(void)
 */
/* CTSObjective type_info function */

undefined4 * CTSObjective_type_info_function(void)

{
  if (CTSObjective_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSObjective_type_info_node,"12CTSObjective",&CBaseEntity_type_info_node);
  }
  return &CTSObjective_type_info_node;
}

/* 0008e6f0  CTSBomb_type_info_function  (70 bytes)
 * undefined4 * CTSBomb_type_info_function(void)
 */
/* CTSBomb type_info function */

undefined4 * CTSBomb_type_info_function(void)

{
  if (CTSBomb_type_info_node == 0) {
    CTSObjective_type_info_function();
    __rtti_si(&CTSBomb_type_info_node,&DAT_00109134,&CTSObjective_type_info_node);
  }
  return &CTSBomb_type_info_node;
}

/* 0008e740  CTSHack_type_info_function  (70 bytes)
 * undefined4 * CTSHack_type_info_function(void)
 */
/* CTSHack type_info function */

undefined4 * CTSHack_type_info_function(void)

{
  if (CTSHack_type_info_node == 0) {
    CTSObjective_type_info_function();
    __rtti_si(&CTSHack_type_info_node,"7CTSHack",&CTSObjective_type_info_node);
  }
  return &CTSHack_type_info_node;
}

/* 0008e790  CVipEscape_type_info_function  (70 bytes)
 * undefined4 * CVipEscape_type_info_function(void)
 */
/* CVipEscape type_info function */

undefined4 * CVipEscape_type_info_function(void)

{
  if (CVipEscape_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CVipEscape_type_info_node,"10CVipEscape",&CBaseEntity_type_info_node);
  }
  return &CVipEscape_type_info_node;
}

/* 0008e7d8  CTSTeamEscape_type_info_function  (70 bytes)
 * undefined4 * CTSTeamEscape_type_info_function(void)
 */
/* CTSTeamEscape type_info function */

undefined4 * CTSTeamEscape_type_info_function(void)

{
  if (CTSTeamEscape_type_info_node == 0) {
    CTSObjective_type_info_function();
    __rtti_si(&CTSTeamEscape_type_info_node,"13CTSTeamEscape",&CTSObjective_type_info_node);
  }
  return &CTSTeamEscape_type_info_node;
}

/* 0008e828  CTSBriefcase_type_info_function  (70 bytes)
 * undefined4 * CTSBriefcase_type_info_function(void)
 */
/* CTSBriefcase type_info function */

undefined4 * CTSBriefcase_type_info_function(void)

{
  if (CTSBriefcase_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSBriefcase_type_info_node,"12CTSBriefcase",&CBaseEntity_type_info_node);
  }
  return &CTSBriefcase_type_info_node;
}

/* 0008e870  Write_pdw  (582 bytes)
 * undefined Write_pdw(undefined1 * param_1)
 */
/* Write_pdw(s_weapon_info *) */

void Write_pdw(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x13;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d810625;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x2d37504d;
  *(undefined4 *)(param_1 + 0x48) = 0x574450;
  param_1[0x84] = 3;
  param_1[0x85] = 5;
  pcVar2 = "sprites/weapons/pdw.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd0] = 0x19;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0xaf0;
  *(undefined4 *)(param_1 + 0xe0) = 0xb;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/56_shell.mdl";
  puVar3 = (undefined4 *)(param_1 + 0xe8);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 2;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_pdw.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_pdw.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_pdw_sil.mdl";
  pcVar4 = param_1 + 0x1b2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/w_pdw.mdl";
  pcVar4 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "onehanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 5;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/pdw/fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "weapons/pdw/fire-sil.wav";
  pcVar4 = param_1 + 0x306;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 0xd;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x10;
  *(undefined4 *)(param_1 + 0x358) = 4;
  return;
}

/* 0008eab8  CheckPowerups  (50 bytes)
 * undefined CheckPowerups(int param_1)
 * called by: CBasePlayer::PostThink
 */
/* CheckPowerups(entvars_s *) */

void CheckPowerups(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x160)) {
    *(undefined4 *)(param_1 + 0xb4) = g_ulModelIndexPlayer;
  }
  return;
}

/* 00095bac  FindHullIntersectionplayer  (633 bytes)
 * undefined FindHullIntersectionplayer(float * param_1, undefined4 * param_2, int param_3, undefined4 param_4, undefined4 param_5)
 */
/* FindHullIntersectionplayer(Vector const &, TraceResult &, float *, float *, edict_s *) */

void FindHullIntersectionplayer
               (float *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5
               )

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float local_c8;
  int local_c4;
  int local_c0;
  int local_bc [3];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_8c [4];
  float local_7c;
  float local_78;
  float local_74;
  float local_6c [4];
  undefined4 local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  
  local_bc[0] = param_3;
  local_bc[1] = param_4;
  local_6c[0] = (float)param_2[5];
  local_6c[1] = (float)param_2[6];
  local_6c[2] = (float)param_2[7];
  local_c8 = 1e+06;
  local_ac = (float)param_2[5] - *param_1;
  local_a8 = (float)param_2[6] - param_1[1];
  local_a4 = (float)param_2[7] - param_1[2];
  local_9c = local_ac * 2.0;
  local_98 = local_a8 * 2.0;
  local_94 = local_a4 * 2.0;
  local_8c[0] = *param_1 + local_9c;
  local_8c[1] = param_1[1] + local_98;
  local_8c[2] = param_1[2] + local_94;
  pfVar3 = local_8c;
  pfVar5 = local_6c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  UTIL_TraceLine(param_1,local_6c,0,param_5,local_5c);
  if (1.0 <= local_4c) {
    local_c0 = 0;
    do {
      local_c4 = 0;
      do {
        iVar1 = 0;
        do {
          local_7c = local_6c[0] + *(float *)local_bc[local_c0];
          local_78 = local_6c[1] + *(float *)(local_bc[local_c4] + 4);
          local_74 = local_6c[2] + *(float *)(local_bc[iVar1] + 8);
          UTIL_TraceLine(param_1,&local_7c,0,param_5,local_5c);
          if (local_4c < 1.0) {
            local_ac = local_48 - *param_1;
            local_a8 = local_44 - param_1[1];
            local_a4 = local_40 - param_1[2];
            local_b0 = SQRT(local_a4 * local_a4 + local_a8 * local_a8 + local_ac * local_ac);
            if (local_b0 < local_c8) {
              puVar4 = local_5c;
              puVar6 = param_2;
              for (iVar2 = 0xe; local_c8 = local_b0, iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar6 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar6 = puVar6 + 1;
              }
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 2);
        local_c4 = local_c4 + 1;
      } while (local_c4 < 2);
      local_c0 = local_c0 + 1;
    } while (local_c0 < 2);
  }
  else {
    puVar4 = local_5c;
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

/* 00097298  GetClassPtr<CBaseEntity>  (122 bytes)
 * CBaseEntity * GetClassPtr<CBaseEntity>(uint param_1)
 */
/* CBaseEntity * GetClassPtr<CBaseEntity>(CBaseEntity *) */

CBaseEntity * GetClassPtr<CBaseEntity>(uint param_1)

{
  edict_t *peVar1;
  CBaseEntity *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBaseEntity *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBaseEntity *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 00097314  CBasePlayer_type_info_function  (70 bytes)
 * undefined4 * CBasePlayer_type_info_function(void)
 */
/* CBasePlayer type_info function */

undefined4 * CBasePlayer_type_info_function(void)

{
  if (CBasePlayer_type_info_node == 0) {
    CBaseMonster_type_info_function();
    __rtti_si(&CBasePlayer_type_info_node,"11CBasePlayer",&CBaseMonster_type_info_node);
  }
  return &CBasePlayer_type_info_node;
}

/* 000974f4  GetRandomPosition  (919 bytes)
 * float * GetRandomPosition(float * param_1, float * param_2)
 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* GetRandomPosition(Vector &) */

float * GetRandomPosition(float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined2 in_FPUControlWord;
  longdouble lVar6;
  int local_b8;
  int local_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_8c [5];
  float local_78;
  undefined2 local_70;
  undefined2 uStack_6e;
  float local_6c [4];
  undefined1 local_5c [16];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  
  local_6c[0] = 0.0;
  _local_70 = CONCAT22(uStack_6e,in_FPUControlWord);
  local_6c[1] = local_6c[0];
  local_6c[2] = local_6c[0];
  local_b4 = (*g_engfuncs.pfnRandomLong)(0,0x10);
  local_b4 = local_b4 * 0x17;
  local_b8 = 1;
  do {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0x80,0x400);
    lVar6 = (longdouble)fcos((longdouble)0.017453292519943295 * (longdouble)local_b4);
    local_6c[0] = (float)lVar6;
    lVar6 = (longdouble)fsin((longdouble)0.017453292519943295 * (longdouble)local_b4);
    local_6c[1] = (float)lVar6;
    local_78 = SQRT(local_6c[2] * local_6c[2] +
                    local_6c[1] * local_6c[1] + local_6c[0] * local_6c[0]);
    if (local_78 == 0.0) {
      local_8c[0] = 0.0;
      local_8c[1] = 0.0;
      local_8c[2] = 1.0;
    }
    else {
      fVar1 = 1.0 / local_78;
      local_8c[0] = fVar1 * local_6c[0];
      local_8c[1] = fVar1 * local_6c[1];
      local_8c[2] = fVar1 * local_6c[2];
    }
    pfVar4 = local_8c;
    pfVar5 = local_6c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    local_94 = (float)iVar2;
    local_9c = local_94 * local_6c[0];
    local_98 = local_94 * local_6c[1];
    local_94 = local_94 * local_6c[2];
    local_8c[0] = *param_2 + local_9c;
    local_8c[1] = param_2[1] + local_98;
    local_8c[2] = param_2[2] + local_94;
    UTIL_TraceLine(param_2,local_8c,1,0,local_5c);
    if (1.0 <= local_4c) {
      local_9c = local_6c[0] * 64.0;
      local_98 = local_6c[1] * 64.0;
      local_94 = local_6c[2] * 64.0;
      local_ac = local_48 - local_9c;
      local_a8 = local_44 - local_98;
      local_a4 = local_40 - local_94;
      iVar2 = UTIL_PointContents(&local_ac);
      if (iVar2 != -2) {
        local_48 = local_48 - local_6c[0] * 64.0;
        local_44 = local_44 - local_6c[1] * 64.0;
        local_40 = local_40 - local_6c[2] * 64.0;
        goto LAB_00097845;
      }
    }
    else {
      local_8c[0] = local_6c[0] * 64.0;
      local_8c[1] = local_6c[1] * 64.0;
      local_8c[2] = local_6c[2] * 64.0;
      local_9c = local_48 - local_8c[0];
      local_98 = local_44 - local_8c[1];
      local_94 = local_40 - local_8c[2];
      iVar2 = UTIL_PointContents(&local_9c);
      if (iVar2 != -2) {
        local_48 = local_48 - local_6c[0] * 64.0;
        local_44 = local_44 - local_6c[1] * 64.0;
        local_40 = local_40 - local_6c[2] * 64.0;
LAB_00097845:
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = local_40;
        return param_1;
      }
    }
    local_b4 = local_b4 + 0x17;
    local_b8 = local_b8 + 1;
    if (0x10 < local_b8) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      return param_1;
    }
  } while( true );
}

/* 00097bc8  PlayerAddPowerUp  (548 bytes)
 * undefined4 PlayerAddPowerUp(CBasePlayer * param_1, uint param_2, int param_3)
 */
/* PlayerAddPowerUp(CBasePlayer *, int, CTSPowerUp *) */

undefined4 PlayerAddPowerUp(CBasePlayer *param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if ((char)param_2 < '\0') {
    CBasePlayer::TakeArmor(param_1,(int)ROUND(*(float *)(param_3 + 0x8c)));
    goto LAB_00097dba;
  }
  if ((param_2 & 4) == 0) {
    if ((param_2 & 0x100) == 0) {
      if ((param_2 & 0x40) == 0) {
        if ((param_2 & 0x20) == 0) {
          if ((param_2 & 2) == 0) {
            *(undefined4 *)&param_1->field_0x724 = 0;
            *(uint *)&param_1->field_0x728 = param_2;
            *(undefined4 *)&param_1->field_0x72c = 0;
            *(undefined4 *)&param_1->field_0x730 = *(undefined4 *)(param_3 + 0x90);
            goto LAB_00097dba;
          }
          if (*(int *)&param_1->field_0xa10 == 0) {
            return 0;
          }
          iVar2 = *(int *)&param_1->field_0xa10;
          if (*(int *)(iVar2 + 0x88) != 0x10) {
            return 0;
          }
          iVar2 = CTSGun::MultiplyClips(iVar2,(CTSGun *)iVar2);
          bVar1 = (char)iVar2 == '\0';
        }
        else {
          iVar2 = CBasePlayer::PickUpWeapon(param_1,0x18,(undefined4 *)0x0,0,'\x01','\0');
          bVar1 = iVar2 == 0;
        }
        if (bVar1) {
          return 0;
        }
      }
      else {
        if (param_1->pev->health < 150.0) {
          param_1->pev->health = 150.0;
        }
        *(float *)&param_1->field_0x73c = gpGlobals->time + 1.0;
      }
      goto LAB_00097dba;
    }
    if (param_1->field_0x74f != '\0') goto LAB_00097dba;
    param_1->field_0x74f = 1;
    (*g_engfuncs.pfnSetPhysicsKeyValue)(param_1->pev->pContainingEntity,"mj","1");
    (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,param_1->pev->pContainingEntity);
    iVar2 = 0x100;
  }
  else {
    if (param_1->field_0x74e != '\0') goto LAB_00097dba;
    param_1->field_0x74e = 1;
    (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,param_1->pev->pContainingEntity);
    iVar2 = 4;
  }
  (*g_engfuncs.pfnWriteShort)(iVar2);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
LAB_00097dba:
  EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,3,"items/gunpickup2.wav",0x3f800000,0x3f4ccccd
                 ,0,100,0.5);
  return 1;
}

/* 00097df8  ts_powerup  (33 bytes)
 * undefined ts_powerup(uint param_1)
 */
void ts_powerup(uint param_1)

{
  GetClassPtr<CTSPowerUp>(param_1);
  return;
}

/* 000988a8  GetClassPtr<CTSPowerUp>  (184 bytes)
 * CTSPowerUp * GetClassPtr<CTSPowerUp>(uint param_1)
 */
/* CTSPowerUp * GetClassPtr<CTSPowerUp>(CTSPowerUp *) */

CTSPowerUp * GetClassPtr<CTSPowerUp>(uint param_1)

{
  edict_t *peVar1;
  CTSPowerUp *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSPowerUp *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSPowerUp *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x9c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CTSPowerUp_virtual_table;
    *(undefined4 *)&pCVar2->field_0x84 = 0;
    *(undefined4 *)&pCVar2->field_0x98 = 0x3f800000;
    *(undefined4 *)&pCVar2->field_0x94 = 0;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 00098960  CTSPowerUp_type_info_function  (70 bytes)
 * undefined4 * CTSPowerUp_type_info_function(void)
 */
/* CTSPowerUp type_info function */

undefined4 * CTSPowerUp_type_info_function(void)

{
  if (CTSPowerUp_type_info_node == 0) {
    CBaseAnimating_type_info_function();
    __rtti_si(&CTSPowerUp_type_info_node,"10CTSPowerUp",&CBaseAnimating_type_info_node);
  }
  return &CTSPowerUp_type_info_node;
}

/* 00098a00  Write_ruger  (575 bytes)
 * undefined Write_ruger(undefined1 * param_1)
 */
/* Write_ruger(s_weapon_info *) */

void Write_ruger(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x11;
  param_1[8] = 10;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1c;
  *(undefined4 *)(param_1 + 0x14) = 0x3fa66666;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  puVar2 = &DAT_001097e0;
  puVar4 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar2;
  param_1[0x84] = 2;
  param_1[0x85] = 6;
  pcVar3 = "sprites/weapons/ruger.spr";
  puVar2 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  param_1[0xd0] = 5;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x5dc;
  *(undefined4 *)(param_1 + 0xe0) = 3;
  *(undefined4 *)(param_1 + 0xe4) = 1;
  pcVar3 = "models/22_shell.mdl";
  puVar2 = (undefined4 *)(param_1 + 0xe8);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar3 = "models/v_ruger.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  pcVar3 = "models/p_ruger.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  pcVar3 = "models/p_ruger.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1b2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  pcVar3 = "models/w_ruger.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  pcVar3 = "onehanded";
  puVar2 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 0x256) = 3;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  *(undefined2 *)(param_1 + 0x25e) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar3 = "weapons/ruger/fire.wav";
  puVar2 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  pcVar3 = "weapons/ruger/fire.wav";
  puVar2 = (undefined4 *)(param_1 + 0x306);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 7;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 00098c40  Write_sawedoff  (651 bytes)
 * undefined Write_sawedoff(undefined1 * param_1)
 */
/* Write_sawedoff(s_weapon_info *) */

void Write_sawedoff(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x32;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x21;
  *(undefined4 *)(param_1 + 0x14) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41b80000;
  *(undefined4 *)(param_1 + 0x28) = 0x3e051eb8;
  *(undefined4 *)(param_1 + 0x30) = 0x41180000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar2 = "Sawed-off";
  puVar4 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  param_1[0x84] = 4;
  param_1[0x85] = 10;
  pcVar2 = "sprites/weapons/sawedoff.spr";
  pcVar3 = param_1 + 0x86;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x76c;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe8] = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_sawedoff.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "models/p_sawedoff.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_sawedoff.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "twohanded";
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x262) = 9;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x260) = 0xb;
  *(undefined2 *)(param_1 + 0x28a) = 0xd;
  *(undefined2 *)(param_1 + 0x28c) = 5;
  *(undefined2 *)(param_1 + 0x28e) = 6;
  *(undefined2 *)(param_1 + 0x29c) = 10;
  *(undefined2 *)(param_1 + 0x290) = 5;
  *(undefined2 *)(param_1 + 0x292) = 7;
  *(undefined2 *)(param_1 + 0x294) = 8;
  *(undefined2 *)(param_1 + 0x296) = 7;
  *(undefined2 *)(param_1 + 0x298) = 8;
  *(undefined2 *)(param_1 + 0x29a) = 0xc;
  *(undefined2 *)(param_1 + 0x2c4) = 0xd;
  pcVar2 = "weapons/sawedoff/fire.wav";
  puVar4 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  param_1[0x306] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 0x11;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 0xb;
  return;
}

/* 00098ecc  Write_sealknife  (494 bytes)
 * undefined Write_sealknife(undefined1 * param_1)
 */
/* Write_sealknife(s_weapon_info *) */

void Write_sealknife(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x23;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 10;
  *(undefined4 *)(param_1 + 0x20) = 7;
  pcVar2 = "Seal Knife";
  puVar3 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  param_1[0x84] = 1;
  param_1[0x85] = 4;
  pcVar2 = "sprites/weapons/sealknife.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  param_1[0xd0] = 1;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 100;
  param_1[0xdc] = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_sealknife.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  pcVar2 = "models/p_sealknife.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_sealknife.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  param_1[0x232] = 0;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x270) = 2;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 4;
  *(undefined2 *)(param_1 + 0x27a) = 5;
  *(undefined2 *)(param_1 + 0x276) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  param_1[0x2c6] = 0;
  param_1[0x306] = 0;
  param_1[0x348] = 3;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  return;
}

/* 000990bc  FixedSlowAmt  (38 bytes)
 * longdouble FixedSlowAmt(float param_1)
 */
/* FixedSlowAmt(float) */

longdouble FixedSlowAmt(float param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)param_1;
  if (lVar1 < (longdouble)0.01) {
    lVar1 = (longdouble)0.01;
  }
  return lVar1;
}

/* 000990e4  FixedSlowMul  (39 bytes)
 * longdouble FixedSlowMul(float param_1)
 */
/* FixedSlowMul(float) */

longdouble FixedSlowMul(float param_1)

{
  longdouble lVar1;
  
  lVar1 = FixedSlowAmt(param_1);
  return (longdouble)1.0 / lVar1;
}

/* 0009910c  InterpolateSlowMotion  (81 bytes)
 * undefined InterpolateSlowMotion(float param_1, float * param_2, float param_3)
 */
/* InterpolateSlowMotion(float, float *, float) */

void InterpolateSlowMotion(float param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3 - *param_2;
  if (0.05 < ABS(fVar1)) {
    fVar2 = param_1 * 7.0;
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    fVar1 = fVar2 * fVar1;
  }
  *param_2 = fVar1 + *param_2;
  return;
}

/* 00099160  GetBulletVelocityMult  (102 bytes)
 * longdouble GetBulletVelocityMult(float param_1, char param_2)
 */
/* GetBulletVelocityMult(float, char) */

longdouble GetBulletVelocityMult(float param_1,char param_2)

{
  float fVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  
  lVar2 = (longdouble)param_1;
  if (param_2 == '\0') {
    fVar1 = 1.0;
  }
  else {
    fVar1 = 10.0;
  }
  lVar3 = (longdouble)1.0;
  if ((longdouble)0.99 <= lVar2) {
    lVar2 = (longdouble)1.0;
  }
  else {
    lVar4 = (lVar3 - lVar2 * lVar2) * (longdouble)fVar1;
    if (lVar4 < lVar3) {
      lVar4 = lVar3;
    }
    lVar2 = lVar2 / lVar4;
  }
  return lVar2;
}

/* 000991c8  Write_spas12  (590 bytes)
 * undefined Write_spas12(undefined1 * param_1)
 */
/* Write_spas12(s_weapon_info *) */

void Write_spas12(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x14;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0x53415053;
  *(undefined4 *)(param_1 + 0x48) = 0x32312d;
  param_1[0x84] = 4;
  param_1[0x85] = 6;
  pcVar2 = "sprites/weapons/spas12.spr";
  puVar4 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0xd0] = 0x1e;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x834;
  *(undefined4 *)(param_1 + 0xe0) = 6;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/shotgun_shell.mdl";
  pcVar3 = param_1 + 0xe8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_spas12.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "models/p_spas12.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_spas12.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "twohanded";
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 5;
  *(undefined2 *)(param_1 + 0x262) = 2;
  *(undefined2 *)(param_1 + 0x264) = 3;
  *(undefined2 *)(param_1 + 0x266) = 4;
  *(undefined2 *)(param_1 + 0x268) = 6;
  *(undefined2 *)(param_1 + 0x26a) = 7;
  *(undefined2 *)(param_1 + 0x26c) = 8;
  *(undefined2 *)(param_1 + 0x26e) = 9;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/spas12/spas12-fire.wav";
  puVar4 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  pcVar2 = "weapons/spas12/spas12-pump.wav";
  puVar4 = (undefined4 *)(param_1 + 0x306);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0x348] = 1;
  *(undefined4 *)(param_1 + 0x34c) = 0x17;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 00099418  Write_contender  (540 bytes)
 * undefined Write_contender(undefined1 * param_1)
 */
/* Write_contender(s_weapon_info *) */

void Write_contender(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0xd;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x24;
  *(undefined4 *)(param_1 + 0x14) = 0x3faccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x42be0000;
  *(undefined4 *)(param_1 + 0x28) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x30) = 0x41400000;
  *(undefined4 *)(param_1 + 0x3c) = 0x1a;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar2 = "Contender G2";
  pcVar3 = param_1 + 0x44;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  param_1[0x84] = 2;
  param_1[0x85] = 8;
  pcVar2 = "sprites/weapons/contender.spr";
  puVar4 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x5dc;
  *(undefined4 *)(param_1 + 0xe0) = 10;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe8] = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 2;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_contender.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  pcVar2 = "models/p_contender.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_contender.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  pcVar2 = "onehanded";
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/contender/fire.wav";
  puVar4 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0x306] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 0x17;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 0009d3f0  Write_skorpion  (546 bytes)
 * undefined Write_skorpion(undefined1 * param_1)
 */
/* Write_skorpion(s_weapon_info *) */

void Write_skorpion(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 0xc;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0x25;
  *(undefined4 *)(param_1 + 0xcc) = 0x11;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3b23d70a;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar2 = "Skorpion";
  pcVar4 = param_1 + 0x44;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x84] = 3;
  param_1[0x85] = 4;
  pcVar2 = "sprites/weapons/skorpion.spr";
  pcVar4 = param_1 + 0x86;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x44c;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/22_shell.mdl";
  puVar3 = (undefined4 *)(param_1 + 0xe8);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_skorpion.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  pcVar2 = "models/p_skorpion.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  pcVar2 = "models/w_skorpion.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  pcVar2 = "onehanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 5;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/tmp/fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "weapons/tmp/fire-sil.wav";
  pcVar4 = param_1 + 0x306;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 5;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x10;
  *(undefined4 *)(param_1 + 0x358) = 4;
  return;
}

/* 0009d614  Write_skorpion_akimbo  (572 bytes)
 * undefined Write_skorpion_akimbo(undefined1 * param_1)
 */
/* Write_skorpion_akimbo(s_weapon_info *) */

void Write_skorpion_akimbo(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 0xc;
  *(undefined4 *)(param_1 + 0xc) = 0x21;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x11;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d0f5c29;
  *(undefined4 *)(param_1 + 0x30) = 0x3f0ccccd;
  *(undefined4 *)(param_1 + 0x34) = 0x3b23d70a;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar3 = "Akimbo Skorpions";
  pcVar5 = param_1 + 0x44;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  param_1[0x84] = 5;
  param_1[0x85] = 6;
  pcVar3 = "sprites/weapons/skorpion_akimbo.spr";
  puVar2 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x44c;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar3 = "models/22_shell.mdl";
  puVar2 = (undefined4 *)(param_1 + 0xe8);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar3 = "models/v_skorpion_ak.mdl";
  pcVar5 = param_1 + 0x132;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "models/p_skorpion_ak.mdl";
  pcVar5 = param_1 + 0x172;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "models/w_skorpion.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  puVar2 = &DAT_00106777;
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar2 + 2);
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x27e) = 6;
  *(undefined2 *)(param_1 + 0x282) = 5;
  *(undefined2 *)(param_1 + 0x280) = 6;
  *(undefined2 *)(param_1 + 0x284) = 5;
  *(undefined2 *)(param_1 + 0x286) = 6;
  *(undefined2 *)(param_1 + 0x288) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar3 = "weapons/tmp/fire.wav";
  pcVar5 = param_1 + 0x2c6;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  *(undefined4 *)(param_1 + 0x34c) = 5;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x10;
  *(undefined4 *)(param_1 + 0x358) = 4;
  return;
}

/* 0009d850  ts_flag  (33 bytes)
 * undefined ts_flag(uint param_1)
 */
void ts_flag(uint param_1)

{
  GetClassPtr<CTSFlag>(param_1);
  return;
}

/* 0009e62c  GetClassPtr<CTSFlag>  (143 bytes)
 * CTSFlag * GetClassPtr<CTSFlag>(uint param_1)
 */
/* CTSFlag * GetClassPtr<CTSFlag>(CTSFlag *) */

CTSFlag * GetClassPtr<CTSFlag>(uint param_1)

{
  edict_t *peVar1;
  CTSFlag *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSFlag *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSFlag *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb0);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSPhysicObject_virtual_table;
    pCVar2->vtable = (void **)CTSFlag_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0009e6bc  CTSFlag_type_info_function  (70 bytes)
 * undefined4 * CTSFlag_type_info_function(void)
 */
/* CTSFlag type_info function */

undefined4 * CTSFlag_type_info_function(void)

{
  if (CTSFlag_type_info_node == 0) {
    CTSPhysicObject_type_info_function();
    __rtti_si(&CTSFlag_type_info_node,&DAT_00109c82,&CTSPhysicObject_type_info_node);
  }
  return &CTSFlag_type_info_node;
}

/* 0009e710  Write_usas12  (562 bytes)
 * undefined Write_usas12(undefined1 * param_1)
 */
/* Write_usas12(s_weapon_info *) */

void Write_usas12(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x32;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xb;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e29fbe7;
  *(undefined4 *)(param_1 + 0x1c) = 0x40e00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0x53415355;
  *(undefined4 *)(param_1 + 0x48) = 0x32312d;
  param_1[0x84] = 4;
  param_1[0x85] = 0xb;
  pcVar2 = "sprites/weapons/usas12.spr";
  puVar4 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x13ec;
  *(undefined4 *)(param_1 + 0xe0) = 6;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/shotgun_shell.mdl";
  pcVar3 = param_1 + 0xe8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 1;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_usas.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "models/p_usas.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_usas.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "twohanded";
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/usas/usas-fire.wav";
  puVar4 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0x306] = 0;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x1a;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 0009e944  UTIL_EntInArray  (122 bytes)
 * int UTIL_EntInArray(int * param_1, uint param_2, int param_3)
 */
/* UTIL_EntInArray(CBaseEntity **, int, CBaseEntity *) */

int UTIL_EntInArray(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((int)param_2 < 1) {
    return -1;
  }
  uVar1 = param_2 & 3;
  if (0 < (int)param_2) {
    if (uVar1 == 0) goto LAB_0009e990;
    if (1 < uVar1) {
      if (2 < uVar1) {
        if (*param_1 == param_3) {
          return 0;
        }
        iVar2 = 1;
      }
      if (param_1[iVar2] == param_3) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    }
  }
  if (param_1[iVar2] == param_3) {
    return iVar2;
  }
  iVar2 = iVar2 + 1;
  if ((int)param_2 <= iVar2) {
    return -1;
  }
LAB_0009e990:
  while( true ) {
    if (param_1[iVar2] == param_3) {
      return iVar2;
    }
    if (param_1[iVar2 + 1] == param_3) {
      return iVar2 + 1;
    }
    if (param_1[iVar2 + 2] == param_3) {
      return iVar2 + 2;
    }
    if (param_1[iVar2 + 3] == param_3) break;
    iVar2 = iVar2 + 4;
    if ((int)param_2 <= iVar2) {
      return -1;
    }
  }
  return iVar2 + 3;
}

/* 0009e9c0  WeaponIdFromString  (118 bytes)
 * uint WeaponIdFromString(char * param_1)
 */
/* WeaponIdFromString(char *) */

uint WeaponIdFromString(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    puVar1 = get_weapon_info(uVar3);
    iVar2 = strcasecmp(param_1,(char *)(puVar1 + 0x11));
    if (iVar2 == 0) {
      return uVar3;
    }
    puVar1 = get_weapon_info(uVar3 + 1);
    iVar2 = strcasecmp(param_1,(char *)(puVar1 + 0x11));
    if (iVar2 == 0) break;
    uVar3 = uVar3 + 2;
    if (0x25 < (int)uVar3) {
      return 0xffffffff;
    }
  }
  return uVar3 + 1;
}

/* 0009ea3c  AdjustSpecificWeapon  (213 bytes)
 * undefined AdjustSpecificWeapon(uint param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 */
/* AdjustSpecificWeapon(tsweapon_t, float, float, float, float, int) */

void AdjustSpecificWeapon
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 < 0x26) {
    pcVar1 = (char *)get_weapon_info(param_1);
    if (*pcVar1 != '\0') {
      puVar2 = get_weapon_info(param_1);
      puVar2[10] = param_2;
      puVar2 = get_weapon_info(param_1);
      puVar2[0xc] = param_3;
      puVar2 = get_weapon_info(param_1);
      puVar2[0xd] = param_4;
      puVar2 = get_weapon_info(param_1);
      puVar2[7] = param_5;
      puVar2 = get_weapon_info(param_1);
      puVar2[0x36] = param_6;
      SendWeaponParams(param_1,0);
      iVar7 = 0;
      iVar6 = 0;
      iVar5 = 0;
      iVar4 = 0;
      puVar2 = get_weapon_info(param_1);
      puVar3 = UTIL_VarArgs("%s behaviour changed\n",puVar2 + 0x11);
      UTIL_ClientPrintAll(3,puVar3,iVar4,iVar5,iVar6,iVar7);
      DAT_0017da24 = 1;
    }
  }
  return;
}

/* 0009eb14  InformClientsOnWeaponsParams  (129 bytes)
 * undefined InformClientsOnWeaponsParams(int * param_1)
 */
/* InformClientsOnWeaponsParams(CBaseEntity *) */

void InformClientsOnWeaponsParams(int *param_1)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    TSHudMessageAll(0x2d,0xc3,0x2d,8,100,"This server is using custom weapons.");
  }
  else {
    TSHudMessageOne(0x2d,0xc3,0x2d,8,100,"This server is using custom weapons.",*param_1);
  }
  uVar1 = 0;
  do {
    SendWeaponParams(uVar1,(int)param_1);
    SendWeaponParams(uVar1 + 1,(int)param_1);
    uVar1 = uVar1 + 2;
  } while ((int)uVar1 < 0x26);
  return;
}

/* 0009eb98  SendWeaponParams  (264 bytes)
 * undefined SendWeaponParams(uint param_1, int param_2)
 */
/* SendWeaponParams(tsweapon_t, CBaseEntity *) */

void SendWeaponParams(uint param_1,int param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  char local_5c [63];
  undefined1 local_1d;
  
  if (param_1 < 0x26) {
    pcVar1 = (char *)get_weapon_info(param_1);
    if (*pcVar1 != '\0') {
      puVar2 = get_weapon_info(param_1);
      uVar6 = puVar2[0x36];
      puVar2 = get_weapon_info(param_1);
      dVar5 = (double)(float)puVar2[7];
      puVar2 = get_weapon_info(param_1);
      dVar4 = (double)(float)puVar2[0xd];
      puVar2 = get_weapon_info(param_1);
      dVar3 = (double)(float)puVar2[0xc];
      puVar2 = get_weapon_info(param_1);
      sprintf(local_5c,"%i %f %f %f %f %i",param_1,(double)(float)puVar2[10],dVar3,dVar4,dVar5,uVar6
             );
      local_1d = 0;
      if (param_2 == 0) {
        (*g_engfuncs.pfnMessageBegin)(2,gmsgTSCustomWeaponParams,(float *)0x0,(edict_t *)0x0);
      }
      else {
        (*g_engfuncs.pfnMessageBegin)
                  (1,gmsgTSCustomWeaponParams,(float *)0x0,*(edict_t **)(*(int *)param_2 + 0x208));
      }
      (*g_engfuncs.pfnWriteString)(local_5c);
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  return;
}

/* 0009eca4  adjust_weapon_value  (922 bytes)
 * undefined4 adjust_weapon_value(undefined4 param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* adjust_weapon_value(char *) */

undefined4 adjust_weapon_value(undefined4 param_1)

{
  float fVar1;
  char cVar2;
  short sVar3;
  FILE *__stream;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint local_63c;
  float local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  float local_624;
  undefined4 local_620;
  char local_61c [256];
  char local_51c [1024];
  char local_11c [268];
  
  (*g_engfuncs.pfnGetGameDir)(local_61c);
  sprintf(local_11c,"%s%s%s",local_61c,&DAT_00109d6a,param_1);
  __stream = fopen(local_11c,"rb");
  if (__stream == (FILE *)0x0) {
    uVar7 = 0;
  }
  else {
    while (pcVar5 = fgets(local_51c,0x400,__stream), pcVar5 != (char *)0x0) {
      local_61c[0] = '\0';
      strcpy(local_61c,local_51c);
      uVar8 = 0xffffffff;
      pcVar5 = local_61c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      iVar9 = ~uVar8 - 2;
      if (-1 < iVar9) {
        sVar3 = *(short *)(__ctype_b + local_61c[iVar9] * 2);
        while ((-1 < sVar3 && (iVar9 = iVar9 + -1, -1 < iVar9))) {
          sVar3 = *(short *)(__ctype_b + local_61c[iVar9] * 2);
        }
      }
      iVar10 = iVar9 + 1;
      if (iVar10 < 0x100) {
        uVar8 = -iVar10 & 3;
        if (iVar10 < 0x100) {
          if (uVar8 != 0) {
            if (1 < uVar8) {
              if (2 < uVar8) {
                local_61c[iVar9 + 1] = '\0';
                iVar10 = iVar9 + 2;
              }
              local_61c[iVar10] = '\0';
              iVar10 = iVar10 + 1;
            }
            goto LAB_0009eda8;
          }
        }
        else {
LAB_0009eda8:
          local_61c[iVar10] = '\0';
          iVar10 = iVar10 + 1;
          if (0xff < iVar10) goto LAB_0009edd6;
        }
        do {
          local_61c[iVar10] = '\0';
          local_61c[iVar10 + 1] = '\0';
          local_61c[iVar10 + 2] = '\0';
          local_61c[iVar10 + 3] = '\0';
          iVar10 = iVar10 + 4;
        } while (iVar10 < 0x100);
      }
LAB_0009edd6:
      if (local_61c[0] != '\0') {
        pcVar5 = strstr(local_61c,"//");
        if (pcVar5 == (char *)0x0) {
          pcVar5 = strstr(local_61c,"armor_absorb");
          if (pcVar5 == (char *)0x0) {
            pcVar5 = strstr(local_61c,"health_absorb");
            if (pcVar5 == (char *)0x0) {
              iVar9 = sscanf(local_61c," %i %f %f %f %f %i ",&local_63c,&local_638,&local_634,
                             &local_630,&local_62c,&local_628);
              if (iVar9 < 6) {
                uVar7 = (*g_engfuncs.pfnAlertMessage)
                                  (at_console,"You need to run saveweapons again.\n");
                return CONCAT31((int3)((uint)uVar7 >> 8),1);
              }
              if ((local_63c < 0x26) &&
                 (pcVar5 = (char *)get_weapon_info(local_63c), *pcVar5 != '\0')) {
                puVar4 = get_weapon_info(local_63c);
                fVar1 = local_638;
                if (local_638 < 0.001) {
                  fVar1 = 0.001;
                }
                puVar4[10] = fVar1;
                puVar4 = get_weapon_info(local_63c);
                puVar4[0xc] = local_634;
                puVar4 = get_weapon_info(local_63c);
                puVar4[0xd] = local_630;
                puVar4 = get_weapon_info(local_63c);
                puVar4[7] = local_62c;
                puVar4 = get_weapon_info(local_63c);
                puVar4[0x36] = local_628;
              }
            }
            else {
              iVar9 = sscanf(pcVar5 + 0xd," %f ",&local_624);
              if ((iVar9 != 0) && (_DAT_0017da28 = local_624, local_624 < 0.0)) {
                _DAT_0017da28 = 0.0;
              }
            }
          }
          else {
            iVar9 = sscanf(pcVar5 + 0xc," %f ",&local_620);
            if ((iVar9 != 0) && (_DAT_0017da2c = local_620, local_620 < 0.0)) {
              _DAT_0017da2c = 0.0;
            }
          }
        }
      }
    }
    fclose(__stream);
    iVar12 = 0;
    iVar11 = 0;
    iVar10 = 0;
    iVar9 = 0;
    puVar6 = UTIL_VarArgs("weapons behaviour changed by %s\n",param_1);
    UTIL_ClientPrintAll(3,puVar6,iVar9,iVar10,iVar11,iVar12);
    DAT_0017da24 = 1;
    uVar7 = 0x178101;
  }
  return uVar7;
}

/* 0009f044  save_weapon_value  (496 bytes)
 * undefined4 save_weapon_value(undefined4 param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* save_weapon_value(char *) */

undefined4 save_weapon_value(undefined4 param_1)

{
  char cVar1;
  FILE *__stream;
  char *pcVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  int iVar15;
  char local_51c [1024];
  char local_11c [268];
  
  (*g_engfuncs.pfnGetGameDir)(local_51c);
  sprintf(local_11c,"%s%s%s",local_51c,&DAT_00109d6a,param_1);
  __stream = fopen(local_11c,"w");
  if (__stream == (FILE *)0x0) {
    uVar5 = 0;
  }
  else {
    fseek(__stream,0,0);
    pcVar2 = 
    "//===========================================\n//values are : |weapon id|accuracy|view kick|accuracy kick|damage|cost|\n\n//IMPORTANT:\n//-dont change weapon id!\n//-accuracy cant go under 0.001\n//-if you put an accuracy kick of 0 accuracy will not be scaled\n\n//If you want use different weapon settings use the \'customweapons\' cvar.\n//Example: \'customweapons weapons_custom.txt\'\n//===========================================\n\n"
    ;
    pcVar9 = local_51c;
    for (iVar6 = 0x69; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar9 = pcVar9 + 4;
    }
    *(undefined2 *)pcVar9 = *(undefined2 *)pcVar2;
    pcVar9[2] = pcVar2[2];
    uVar7 = 0xffffffff;
    pcVar2 = local_51c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    fwrite(local_51c,1,~uVar7 - 1,__stream);
    uVar7 = 0;
    do {
      pcVar2 = (char *)get_weapon_info(uVar7);
      if (*pcVar2 != '\0') {
        get_weapon_info(uVar7);
        puVar3 = get_weapon_info(uVar7);
        dVar13 = (double)(float)puVar3[7];
        puVar3 = get_weapon_info(uVar7);
        dVar12 = (double)(float)puVar3[0xd];
        puVar3 = get_weapon_info(uVar7);
        dVar11 = (double)(float)puVar3[0xc];
        puVar3 = get_weapon_info(uVar7);
        dVar10 = (double)(float)puVar3[10];
        uVar8 = uVar7;
        puVar3 = get_weapon_info(uVar7);
        sprintf(local_51c,"//%s\n%i %f %f %f %f %i\n\n",puVar3 + 0x11,uVar8,dVar10,dVar11,dVar12,
                dVar13);
        uVar8 = 0xffffffff;
        pcVar2 = local_51c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        fwrite(local_51c,1,~uVar8 - 1,__stream);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0x26);
    sprintf(local_51c,
            "//===========================================\n//Misc game variables\narmor_absorb %f\n"
            ,(double)_DAT_0017da2c);
    uVar7 = 0xffffffff;
    pcVar2 = local_51c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    fwrite(local_51c,1,~uVar7 - 1,__stream);
    fclose(__stream);
    iVar15 = 0;
    iVar6 = 0;
    uVar14 = 0;
    puVar4 = UTIL_VarArgs("weapons behaviour saved to %s\n");
    uVar5 = UTIL_ClientPrintAll(3,puVar4,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),iVar6,iVar15);
    uVar5 = CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar5;
}

/* 0009f238  TSCountPlayers  (228 bytes)
 * int TSCountPlayers(byte.conflict * param_1, char param_2)
 */
/* TSCountPlayers(char *, bool) */

int TSCountPlayers(byte_conflict *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  char *__s2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  bVar7 = false;
  bVar8 = false;
  iVar4 = 0;
  iVar3 = 1;
  pbVar5 = param_1;
  pbVar6 = &DAT_00106657;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar7 = *pbVar5 < *pbVar6;
    bVar8 = *pbVar5 == *pbVar6;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  } while (bVar8);
  bVar7 = (!bVar7 && !bVar8) != bVar7;
  iVar3 = 1;
  do {
    if (gpGlobals->maxClients < iVar3) {
      return iVar4;
    }
    iVar1 = UTIL_PlayerByIndex(iVar3);
    if (iVar1 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x60) + 200))(iVar1);
      if (iVar2 != 0) {
        if (bVar7) {
          __s2 = (char *)(**(code **)(*(int *)(iVar1 + 0x60) + 0xd0))(iVar1);
          iVar2 = strcasecmp((char *)param_1,__s2);
          if (iVar2 != 0) goto LAB_0009f2ca;
        }
        else {
LAB_0009f2ca:
          if (bVar7) goto LAB_0009f300;
        }
        if (param_2 != '\0') {
          iVar2 = (**(code **)(*(int *)(iVar1 + 0x60) + 0xb4))(iVar1);
          if ((iVar2 == 0) && (*(float *)(iVar1 + 0x770) < 0.0)) goto LAB_0009f300;
        }
        iVar4 = iVar4 + 1;
      }
    }
LAB_0009f300:
    iVar3 = iVar3 + 1;
  } while( true );
}

/* 0009f320  TSPrecache  (1577 bytes)
 * undefined TSPrecache(void)
 */
/* TSPrecache(void) */

void TSPrecache(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  uint local_14;
  
  (*g_engfuncs.pfnPrecacheSound)("player/superjump-land.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/land.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/dive.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/airwheel.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/headshot.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/headshot2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/kevlarhit.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/block.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/splat.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/bodyhit1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/bodyhit2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/bodyhit3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/bodyhit4.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/die.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/die1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/die2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/die3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pain1.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pain2.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pain3.wav");
  (*g_engfuncs.pfnPrecacheSound)("player/pain4.wav");
  (*g_engfuncs.pfnPrecacheSound)("misc/hacking.wav");
  (*g_engfuncs.pfnPrecacheSound)("misc/hacked.wav");
  (*g_engfuncs.pfnPrecacheSound)("misc/failed.wav");
  (*g_engfuncs.pfnPrecacheSound)("misc/successful.wav");
  (*g_engfuncs.pfnPrecacheSound)("misc/gogogo.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/ric1.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/ric2.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/ric3.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/ric4.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/ric5.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/cement.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/cement1.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/cement2.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/cement3.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/cement4.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/cement5.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/cement6.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/gravel1.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/gravel2.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/gravel3.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/gravel4.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/metal1.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/metal2.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/metal3.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/metal4.wav");
  (*g_engfuncs.pfnPrecacheSound)("debris/metal5.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/shell.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/sshell.wav");
  local_14 = 0;
  do {
    puVar1 = get_weapon_info(local_14);
    if (puVar1 != (undefined4 *)0xffffff18) {
      bVar5 = (undefined4 *)0xffffff17 < puVar1;
      bVar6 = (byte *)(puVar1 + 0x3a) == (byte *)0x0;
      iVar2 = 1;
      pbVar3 = (byte *)(puVar1 + 0x3a);
      pbVar4 = &DAT_00106657;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pbVar3 < *pbVar4;
        bVar6 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      if ((!bVar5 && !bVar6) != bVar5) {
        (*g_engfuncs.pfnPrecacheModel)((char *)(puVar1 + 0x3a));
      }
    }
    if (puVar1 != (undefined4 *)0xfffffece) {
      bVar5 = (undefined4 *)0xfffffecd < puVar1;
      bVar6 = (byte *)((int)puVar1 + 0x132) == (byte *)0x0;
      iVar2 = 1;
      pbVar3 = (byte *)((int)puVar1 + 0x132);
      pbVar4 = &DAT_00106657;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pbVar3 < *pbVar4;
        bVar6 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      if ((!bVar5 && !bVar6) != bVar5) {
        (*g_engfuncs.pfnPrecacheModel)((char *)((int)puVar1 + 0x132));
      }
    }
    if (puVar1 != (undefined4 *)0xfffffe8e) {
      bVar5 = (undefined4 *)0xfffffe8d < puVar1;
      bVar6 = (byte *)((int)puVar1 + 0x172) == (byte *)0x0;
      iVar2 = 1;
      pbVar3 = (byte *)((int)puVar1 + 0x172);
      pbVar4 = &DAT_00106657;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pbVar3 < *pbVar4;
        bVar6 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      if ((!bVar5 && !bVar6) != bVar5) {
        (*g_engfuncs.pfnPrecacheModel)((char *)((int)puVar1 + 0x172));
      }
    }
    if (puVar1 != (undefined4 *)0xfffffe4e) {
      bVar5 = (undefined4 *)0xfffffe4d < puVar1;
      bVar6 = (byte *)((int)puVar1 + 0x1b2) == (byte *)0x0;
      iVar2 = 1;
      pbVar3 = (byte *)((int)puVar1 + 0x1b2);
      pbVar4 = &DAT_00106657;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pbVar3 < *pbVar4;
        bVar6 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      if ((!bVar5 && !bVar6) != bVar5) {
        (*g_engfuncs.pfnPrecacheModel)((char *)((int)puVar1 + 0x1b2));
      }
    }
    if (puVar1 != (undefined4 *)0xfffffe0e) {
      bVar5 = (undefined4 *)0xfffffe0d < puVar1;
      bVar6 = (byte *)((int)puVar1 + 0x1f2) == (byte *)0x0;
      iVar2 = 1;
      pbVar3 = (byte *)((int)puVar1 + 0x1f2);
      pbVar4 = &DAT_00106657;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pbVar3 < *pbVar4;
        bVar6 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      if ((!bVar5 && !bVar6) != bVar5) {
        (*g_engfuncs.pfnPrecacheModel)((char *)((int)puVar1 + 0x1f2));
      }
    }
    if (puVar1 != (undefined4 *)0xfffffd3a) {
      bVar5 = (undefined4 *)0xfffffd39 < puVar1;
      bVar6 = (byte *)((int)puVar1 + 0x2c6) == (byte *)0x0;
      iVar2 = 1;
      pbVar3 = (byte *)((int)puVar1 + 0x2c6);
      pbVar4 = &DAT_00106657;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pbVar3 < *pbVar4;
        bVar6 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      if ((!bVar5 && !bVar6) != bVar5) {
        (*g_engfuncs.pfnPrecacheSound)((char *)((int)puVar1 + 0x2c6));
      }
    }
    if (puVar1 != (undefined4 *)0xfffffcfa) {
      bVar5 = (undefined4 *)0xfffffcf9 < puVar1;
      bVar6 = (byte *)((int)puVar1 + 0x306) == (byte *)0x0;
      iVar2 = 1;
      pbVar3 = (byte *)((int)puVar1 + 0x306);
      pbVar4 = &DAT_00106657;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pbVar3 < *pbVar4;
        bVar6 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      if ((!bVar5 && !bVar6) != bVar5) {
        (*g_engfuncs.pfnPrecacheSound)((char *)((int)puVar1 + 0x306));
      }
    }
    local_14 = local_14 + 1;
    if (0x25 < (int)local_14) {
      (*g_engfuncs.pfnPrecacheSound)("weapons/pistol-empty.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/insert-shell.wav");
      (*g_engfuncs.pfnPrecacheSound)("goslow.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/whizz1.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/whizz2.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/whizz3.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/whizz4.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/whizz5.wav");
      (*g_engfuncs.pfnPrecacheSound)("player/closecombat.wav");
      (*g_engfuncs.pfnPrecacheSound)("player/kungfuhit.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/weapondrop.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/items.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/draw.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/switch.wav");
      (*g_engfuncs.pfnPrecacheSound)("items/9mmclip1.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/generic_reload.wav");
      (*g_engfuncs.pfnPrecacheSound)("explo/explode.wav");
      (*g_engfuncs.pfnPrecacheSound)("explo/explode1.wav");
      (*g_engfuncs.pfnPrecacheSound)("explo/explode2.wav");
      (*g_engfuncs.pfnPrecacheSound)("explo/explode3.wav");
      (*g_engfuncs.pfnPrecacheSound)("explo/explode4.wav");
      (*g_engfuncs.pfnPrecacheModel)("models/generic_clip.mdl");
      (*g_engfuncs.pfnPrecacheModel)("models/ammopack.mdl");
      (*g_engfuncs.pfnPrecacheModel)("models/bullet.mdl");
      (*g_engfuncs.pfnPrecacheModel)("models/long_bullet.mdl");
      (*g_engfuncs.pfnPrecacheModel)("models/pellet.mdl");
      UTIL_PrecacheOther(0x10a18b);
      UTIL_PrecacheOther(0x107da0);
      UTIL_PrecacheOther(0x1076e2);
      (*g_engfuncs.pfnPrecacheSound)("weapons/knife/knife_miss.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/knife/knife_hit.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/knife/knife_hitbody.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/katana/hit-body.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/katana/miss1.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/katana/miss.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/katana/hit.wav");
      (*g_engfuncs.pfnPrecacheSound)("weapons/katana/hit1.wav");
      return;
    }
  } while( true );
}

/* 0009f94c  TSPlayerDisconnect  (280 bytes)
 * undefined TSPlayerDisconnect(CBasePlayer * param_1)
 */
/* TSPlayerDisconnect(CBasePlayer *) */

void TSPlayerDisconnect(CBasePlayer *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  CBasePlayer::DropFlag(param_1,'\0');
  uVar2 = (*g_engfuncs.pfnIndexOfEdict)(param_1->pev->pContainingEntity);
  if (uVar2 < 0x20) {
    puVar4 = (undefined4 *)(&DAT_00178824 + uVar2 * 0x48);
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  param_1->pev->solid = 0;
  param_1->pev->deadflag = 2;
  param_1->pev->takedamage = 0.0;
  piVar1 = &param_1->pev->flags;
  *piVar1 = *piVar1 & 0xffffdfff;
  piVar1 = &param_1->pev->flags;
  *piVar1 = *piVar1 | 0x80000000;
  *(undefined4 *)&param_1->field_0x160 = 0;
  param_1->pev->frags = 0.0;
  *(undefined4 *)&param_1->field_0xb30 = 0;
  *(undefined4 *)&param_1->field_0x770 = 0xbf800000;
  param_1->field_0xb48 = 0;
  param_1->pev->effects = 0x80;
  param_1->pev->health = 0.0;
  *(undefined4 *)&param_1->field_0x9b8 = 0;
  *(undefined4 *)&param_1->field_0x534 = 0xbf800000;
  param_1->field_0x7b9 = 0;
  CTSGameRules::CallCheckDeads((CTSGameRules *)&TSGameRules);
  return;
}

/* 0009fa64  TSFoundRandomEntity  (121 bytes)
 * undefined4 TSFoundRandomEntity(undefined4 param_1)
 */
/* TSFoundRandomEntity(char *) */

undefined4 TSFoundRandomEntity(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_9c [35];
  
  piVar1 = (int *)0x0;
  iVar3 = 0;
  while( true ) {
    piVar1 = (int *)UTIL_FindEntityByClassname(piVar1,param_1);
    if ((piVar1 == (int *)0x0) || (0x1f < iVar3)) break;
    local_9c[iVar3] = piVar1;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,iVar3 + -1);
    uVar2 = local_9c[iVar3];
  }
  return uVar2;
}

/* 0009fae0  PlayerIsCheating  (104 bytes)
 * uint PlayerIsCheating(uint param_1, undefined4 param_2)
 */
/* PlayerIsCheating(CBasePlayer *, char *) */

uint PlayerIsCheating(uint param_1,char *param_2)

{
  uint uVar1;
  char *__s;
  char *__format;
  int *piVar2;
  int local_8;
  
  if (*(int *)(param_1 + 0x160) == 0) {
    piVar2 = &local_8;
    __format = "%i";
    __s = (*g_engfuncs.pfnInfoKeyValue)(param_2,"cl_lw");
    sscanf(__s,__format,piVar2);
    uVar1 = (uint)(local_8 != 1);
  }
  else {
    uVar1 = param_1 & 0xffffff00;
  }
  return uVar1;
}

/* 0009fb4c  RemoveEntityFromSlowedArray  (160 bytes)
 * undefined RemoveEntityFromSlowedArray(int param_1)
 */
/* RemoveEntityFromSlowedArray(CBaseEntity *) */

void RemoveEntityFromSlowedArray(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar4 = 1; iVar4 <= gpGlobals->maxClients; iVar4 = iVar4 + 1) {
    iVar1 = UTIL_PlayerByIndex(iVar4);
    if (iVar1 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x60) + 200))(iVar1);
      if ((iVar2 != 0) && (iVar2 = 0, '\0' < *(char *)(iVar1 + 0x288))) {
        do {
          iVar3 = UTIL_EntInArray((int *)(iVar1 + 0x208),(int)*(char *)(iVar1 + 0x288),param_1);
          if (-1 < iVar3) {
            *(undefined4 *)(iVar1 + 0x208 + iVar3 * 4) = 0;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(char *)(iVar1 + 0x288));
      }
    }
  }
  return;
}

/* 0009fbf0  Write_uzi  (626 bytes)
 * undefined Write_uzi(undefined1 * param_1)
 */
/* Write_uzi(s_weapon_info *) */

void Write_uzi(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x20;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0x10;
  *(undefined4 *)(param_1 + 0xcc) = 3;
  *(undefined4 *)(param_1 + 0x14) = 0x400ccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x1c) = 0x41b00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3be56042;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar2 = "Mini-Uzi";
  pcVar4 = param_1 + 0x44;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x84] = 3;
  param_1[0x85] = 1;
  pcVar2 = "sprites/weapons/uzi.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x514;
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/9mm_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_uzi.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_uzi.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_uzi_sil.mdl";
  pcVar4 = param_1 + 0x1b2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/w_uzi.mdl";
  pcVar4 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "onehanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x260) = 8;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x28e) = 0xe;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x292) = 10;
  *(undefined2 *)(param_1 + 0x294) = 0xb;
  *(undefined2 *)(param_1 + 0x296) = 10;
  *(undefined2 *)(param_1 + 0x298) = 0xb;
  *(undefined2 *)(param_1 + 0x29a) = 9;
  pcVar2 = "weapons/uzi/uzi-fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "weapons/uzi/uzi-fire-sil.wav";
  pcVar4 = param_1 + 0x306;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 9;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x16;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 0009fe64  Write_uzi_akimbo  (620 bytes)
 * undefined Write_uzi_akimbo(undefined1 * param_1)
 */
/* Write_uzi_akimbo(s_weapon_info *) */

void Write_uzi_akimbo(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x40;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x21;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 3;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x1c) = 0x41b00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40000000;
  *(undefined4 *)(param_1 + 0x34) = 0x3bc49ba6;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar3 = "Akimbo Mini-Uzi";
  puVar2 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  param_1[0x84] = 5;
  param_1[0x85] = 3;
  pcVar3 = "sprites/weapons/uzi_akimbo.spr";
  puVar2 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x514;
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar3 = "models/9mm_shell.mdl";
  pcVar5 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar3 = "models/v_uzi_akimbo.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  pcVar3 = "models/p_uzi_akimbo.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  pcVar3 = "models/p_uzi_akimbo_sil.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1b2);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  pcVar3 = "models/w_uzi.mdl";
  pcVar5 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  puVar2 = &DAT_00106777;
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar2 + 2);
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0xb;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 600) = 0xc;
  *(undefined2 *)(param_1 + 0x25a) = 0xd;
  *(undefined2 *)(param_1 + 0x25c) = 0xe;
  *(undefined2 *)(param_1 + 0x25e) = 0xc;
  *(undefined2 *)(param_1 + 0x27e) = 0x18;
  *(undefined2 *)(param_1 + 0x282) = 0x19;
  *(undefined2 *)(param_1 + 0x280) = 0x18;
  *(undefined2 *)(param_1 + 0x284) = 0x19;
  *(undefined2 *)(param_1 + 0x286) = 0x18;
  *(undefined2 *)(param_1 + 0x288) = 0x19;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar3 = "weapons/uzi/uzi-fire.wav";
  pcVar5 = param_1 + 0x2c6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "weapons/uzi/uzi-fire-sil.wav";
  pcVar5 = param_1 + 0x306;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  *(undefined4 *)(param_1 + 0x34c) = 9;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x16;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 000a07c8  TSWorldGun  (33 bytes)
 * undefined TSWorldGun(uint param_1)
 */
void TSWorldGun(uint param_1)

{
  GetClassPtr<CTSWorldGun>(param_1);
  return;
}

/* 000a1310  TSAmmoPack  (33 bytes)
 * undefined TSAmmoPack(uint param_1)
 */
void TSAmmoPack(uint param_1)

{
  GetClassPtr<CTSAmmoPack>(param_1);
  return;
}

/* 000a192c  ts_groundweapon  (33 bytes)
 * undefined ts_groundweapon(uint param_1)
 */
void ts_groundweapon(uint param_1)

{
  GetClassPtr<CTSGroundWeapon>(param_1);
  return;
}

/* 000a26f4  ts_groundammo  (33 bytes)
 * undefined ts_groundammo(uint param_1)
 */
void ts_groundammo(uint param_1)

{
  GetClassPtr<CTSGroundAmmo>(param_1);
  return;
}

/* 000a3194  GetClassPtr<CTSWorldGun>  (143 bytes)
 * CTSWorldGun * GetClassPtr<CTSWorldGun>(uint param_1)
 */
/* CTSWorldGun * GetClassPtr<CTSWorldGun>(CTSWorldGun *) */

CTSWorldGun * GetClassPtr<CTSWorldGun>(uint param_1)

{
  edict_t *peVar1;
  CTSWorldGun *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSWorldGun *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSWorldGun *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xd8);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSPhysicObject_virtual_table;
    pCVar2->vtable = (void **)CTSWorldGun_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a3224  GetClassPtr<CTSAmmoPack>  (134 bytes)
 * CTSAmmoPack * GetClassPtr<CTSAmmoPack>(uint param_1)
 */
/* CTSAmmoPack * GetClassPtr<CTSAmmoPack>(CTSAmmoPack *) */

CTSAmmoPack * GetClassPtr<CTSAmmoPack>(uint param_1)

{
  edict_t *peVar1;
  CTSAmmoPack *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSAmmoPack *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSAmmoPack *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xa8);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSAmmoPack_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a32ac  GetClassPtr<CTSGroundWeapon>  (134 bytes)
 * CTSGroundWeapon * GetClassPtr<CTSGroundWeapon>(uint param_1)
 */
/* CTSGroundWeapon * GetClassPtr<CTSGroundWeapon>(CTSGroundWeapon *) */

CTSGroundWeapon * GetClassPtr<CTSGroundWeapon>(uint param_1)

{
  edict_t *peVar1;
  CTSGroundWeapon *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSGroundWeapon *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSGroundWeapon *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundWeapon_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a3334  GetClassPtr<CTSGroundAmmo>  (134 bytes)
 * CTSGroundAmmo * GetClassPtr<CTSGroundAmmo>(uint param_1)
 */
/* CTSGroundAmmo * GetClassPtr<CTSGroundAmmo>(CTSGroundAmmo *) */

CTSGroundAmmo * GetClassPtr<CTSGroundAmmo>(uint param_1)

{
  edict_t *peVar1;
  CTSGroundAmmo *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSGroundAmmo *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSGroundAmmo *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xac);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundAmmo_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a33bc  CTSWorldGun_type_info_function  (70 bytes)
 * undefined4 * CTSWorldGun_type_info_function(void)
 */
/* CTSWorldGun type_info function */

undefined4 * CTSWorldGun_type_info_function(void)

{
  if (CTSWorldGun_type_info_node == 0) {
    CTSPhysicObject_type_info_function();
    __rtti_si(&CTSWorldGun_type_info_node,"11CTSWorldGun",&CTSPhysicObject_type_info_node);
  }
  return &CTSWorldGun_type_info_node;
}

/* 000a3410  CTSAmmoPack_type_info_function  (70 bytes)
 * undefined4 * CTSAmmoPack_type_info_function(void)
 */
/* CTSAmmoPack type_info function */

undefined4 * CTSAmmoPack_type_info_function(void)

{
  if (CTSAmmoPack_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSAmmoPack_type_info_node,"11CTSAmmoPack",&CBaseEntity_type_info_node);
  }
  return &CTSAmmoPack_type_info_node;
}

/* 000a3458  CTSGroundWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSGroundWeapon_type_info_function(void)
 */
/* CTSGroundWeapon type_info function */

undefined4 * CTSGroundWeapon_type_info_function(void)

{
  if (CTSGroundWeapon_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSGroundWeapon_type_info_node,"15CTSGroundWeapon",&CBaseEntity_type_info_node);
  }
  return &CTSGroundWeapon_type_info_node;
}

/* 000a34ac  CTSGroundAmmo_type_info_function  (70 bytes)
 * undefined4 * CTSGroundAmmo_type_info_function(void)
 */
/* CTSGroundAmmo type_info function */

undefined4 * CTSGroundAmmo_type_info_function(void)

{
  if (CTSGroundAmmo_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSGroundAmmo_type_info_node,"13CTSGroundAmmo",&CBaseEntity_type_info_node);
  }
  return &CTSGroundAmmo_type_info_node;
}

/* 000a3f34  CBaseAnimating_type_info_function  (70 bytes)
 * undefined4 * CBaseAnimating_type_info_function(void)
 */
/* CBaseAnimating type_info function */

undefined4 * CBaseAnimating_type_info_function(void)

{
  if (CBaseAnimating_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CBaseAnimating_type_info_node,"14CBaseAnimating",&CBaseDelay_type_info_node);
  }
  return &CBaseAnimating_type_info_node;
}

/* 000a3f80  Server_GetBlendingInterface  (90 bytes)
 * undefined4 Server_GetBlendingInterface(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5)
 */
undefined4
Server_GetBlendingInterface
          (int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5
          )

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == 1) {
    *param_2 = &svBlending;
    puVar2 = &IEngineStudio;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    g_pRotationMatrix = param_4;
    g_pBoneTransform = param_5;
  }
  return 0;
}

/* 000a3fdc  SV_StudioSetupBones  (45 bytes)
 * undefined SV_StudioSetupBones(void)
 */
/* SV_StudioSetupBones(model_s *, float, int, float const *, float const *, unsigned char const *,
   unsigned char const *, int, edict_s const *) */

void SV_StudioSetupBones(void)

{
  (*g_engfuncs.pfnAlertMessage)(at_console,"SV_StudioSetupBones called.\n");
  return;
}

/* 000a400c  ExtractBbox  (94 bytes)
 * bool ExtractBbox(int param_1, int param_2, undefined4 * param_3, undefined4 * param_4)
 */
/* ExtractBbox(void *, int, float *, float *) */

bool ExtractBbox(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = param_1 + *(int *)(param_1 + 0xa8);
    iVar1 = param_2 * 0xb0;
    *param_3 = *(undefined4 *)(iVar2 + 0x60 + iVar1);
    param_3[1] = *(undefined4 *)(iVar2 + 100 + iVar1);
    param_3[2] = *(undefined4 *)(iVar2 + 0x68 + iVar1);
    *param_4 = *(undefined4 *)(iVar2 + 0x6c + iVar1);
    param_4[1] = *(undefined4 *)(iVar2 + 0x70 + iVar1);
    param_4[2] = *(undefined4 *)(iVar2 + 0x74 + iVar1);
  }
  return param_1 != 0;
}

/* 000a4070  LookupActivity  (186 bytes)
 * int LookupActivity(int param_1, undefined4 param_2, int param_3)
 */
/* LookupActivity(void *, entvars_s *, int) */

int LookupActivity(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  
  if (param_1 == 0) {
    local_1c = 0;
  }
  else {
    iVar3 = param_1 + *(int *)(param_1 + 0xa8);
    local_18 = 0;
    local_1c = -1;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xa4)) {
      iVar4 = 0;
      do {
        if ((*(int *)(iVar3 + 0x28 + iVar4) == param_3) &&
           ((local_18 = local_18 + *(int *)(iVar3 + 0x2c + iVar4), local_18 == 0 ||
            (iVar1 = (*g_engfuncs.pfnRandomLong)(0,local_18 + -1),
            iVar1 < *(int *)(iVar3 + 0x2c + iVar4))))) {
          local_1c = iVar2;
        }
        iVar4 = iVar4 + 0xb0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xa4));
    }
  }
  return local_1c;
}

/* 000a4130  LookupActivityHeaviest  (414 bytes)
 * int LookupActivityHeaviest(int param_1, undefined4 param_2, int param_3)
 */
/* LookupActivityHeaviest(void *, entvars_s *, int) */

int LookupActivityHeaviest(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = param_1 + *(int *)(param_1 + 0xa8);
  iVar3 = 0;
  local_14 = -1;
  iVar6 = 0;
  if (*(int *)(param_1 + 0xa4) < 1) {
    return -1;
  }
  iVar4 = 0;
  uVar2 = *(uint *)(param_1 + 0xa4) & 3;
  if (0 < *(int *)(param_1 + 0xa4)) {
    if (uVar2 == 0) goto LAB_000a420c;
    if (1 < uVar2) {
      if (2 < uVar2) {
        if ((*(int *)(iVar1 + 0x28) == param_3) && (0 < *(int *)(iVar1 + 0x2c))) {
          iVar3 = *(int *)(iVar1 + 0x2c);
          local_14 = 0;
        }
        iVar4 = 0xb0;
        iVar6 = 1;
      }
      if ((*(int *)(iVar1 + 0x28 + iVar4) == param_3) && (iVar3 < *(int *)(iVar1 + 0x2c + iVar4))) {
        iVar3 = *(int *)(iVar1 + 0x2c + iVar4);
        local_14 = iVar6;
      }
      iVar4 = iVar4 + 0xb0;
      iVar6 = iVar6 + 1;
    }
  }
  if ((*(int *)(iVar1 + 0x28 + iVar4) == param_3) && (iVar3 < *(int *)(iVar1 + 0x2c + iVar4))) {
    iVar3 = *(int *)(iVar1 + 0x2c + iVar4);
    local_14 = iVar6;
  }
  iVar4 = iVar4 + 0xb0;
  iVar6 = iVar6 + 1;
  if (*(int *)(param_1 + 0xa4) <= iVar6) {
    return local_14;
  }
LAB_000a420c:
  iVar1 = iVar1 + iVar4;
  iVar4 = iVar1;
  iVar5 = iVar1;
  do {
    if ((*(int *)(iVar1 + 0x28) == param_3) && (iVar3 < *(int *)(iVar4 + 0x2c))) {
      iVar3 = *(int *)(iVar5 + 0x2c);
      local_14 = iVar6;
    }
    if ((*(int *)(iVar1 + 0xd8) == param_3) && (iVar3 < *(int *)(iVar4 + 0xdc))) {
      iVar3 = *(int *)(iVar5 + 0xdc);
      local_14 = iVar6 + 1;
    }
    if ((*(int *)(iVar1 + 0x188) == param_3) && (iVar3 < *(int *)(iVar4 + 0x18c))) {
      iVar3 = *(int *)(iVar5 + 0x18c);
      local_14 = iVar6 + 2;
    }
    if ((*(int *)(iVar1 + 0x238) == param_3) && (iVar3 < *(int *)(iVar4 + 0x23c))) {
      iVar3 = *(int *)(iVar5 + 0x23c);
      local_14 = iVar6 + 3;
    }
    iVar5 = iVar5 + 0x2c0;
    iVar4 = iVar4 + 0x2c0;
    iVar1 = iVar1 + 0x2c0;
    iVar6 = iVar6 + 4;
  } while (iVar6 < *(int *)(param_1 + 0xa4));
  return local_14;
}

/* 000a42d0  GetEyePosition  (79 bytes)
 * undefined GetEyePosition(int param_1, undefined4 * param_2)
 */
/* GetEyePosition(void *, float *) */

void GetEyePosition(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"GetEyePosition() Can\'t get pstudiohdr ptr!\n");
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x4c);
    param_2[1] = *(undefined4 *)(param_1 + 0x50);
    param_2[2] = *(undefined4 *)(param_1 + 0x54);
  }
  return;
}

/* 000a4324  LookupSequence  (342 bytes)
 * int LookupSequence(int param_1, char * param_2)
 */
/* LookupSequence(void *, char const *) */

int LookupSequence(int param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    __s1 = (char *)(param_1 + *(int *)(param_1 + 0xa8));
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xa4)) {
      uVar2 = *(uint *)(param_1 + 0xa4) & 3;
      if (0 < *(int *)(param_1 + 0xa4)) {
        if (uVar2 == 0) goto LAB_000a43ec;
        if (1 < uVar2) {
          if (2 < uVar2) {
            iVar1 = strcasecmp(__s1,param_2);
            if (iVar1 == 0) {
              return 0;
            }
            __s1 = __s1 + 0xb0;
            iVar1 = 1;
          }
          iVar3 = strcasecmp(__s1,param_2);
          if (iVar3 == 0) {
            return iVar1;
          }
          __s1 = __s1 + 0xb0;
          iVar1 = iVar1 + 1;
        }
      }
      iVar3 = strcasecmp(__s1,param_2);
      if (iVar3 == 0) {
        return iVar1;
      }
      __s1 = __s1 + 0xb0;
      while (iVar1 = iVar1 + 1, iVar1 < *(int *)(param_1 + 0xa4)) {
LAB_000a43ec:
        iVar3 = strcasecmp(__s1,param_2);
        if (iVar3 == 0) {
          return iVar1;
        }
        iVar3 = strcasecmp(__s1 + 0xb0,param_2);
        if (iVar3 == 0) {
          return iVar1 + 1;
        }
        iVar3 = strcasecmp(__s1 + 0x160,param_2);
        if (iVar3 == 0) {
          return iVar1 + 2;
        }
        iVar1 = iVar1 + 3;
        iVar3 = strcasecmp(__s1 + 0x210,param_2);
        if (iVar3 == 0) {
          return iVar1;
        }
        __s1 = __s1 + 0x2c0;
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}

/* 000a4484  IsSoundEvent  (30 bytes)
 * undefined4 IsSoundEvent(int param_1)
 */
/* IsSoundEvent(int) */

undefined4 IsSoundEvent(int param_1)

{
  if ((param_1 != 0x3ec) && (param_1 != 0x3f0)) {
    return 0;
  }
  return 1;
}

/* 000a44a4  SequencePrecache  (286 bytes)
 * undefined SequencePrecache(int param_1, char * param_2)
 */
/* SequencePrecache(void *, char const *) */

void SequencePrecache(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *szValue;
  char *pcVar4;
  int local_18;
  
  iVar2 = LookupSequence(param_1,param_2);
  if (((-1 < iVar2) && (param_1 != 0)) && (iVar2 < *(int *)(param_1 + 0xa4))) {
    iVar2 = param_1 + *(int *)(param_1 + 0xa8) + iVar2 * 0xb0;
    local_18 = 0;
    if (0 < *(int *)(iVar2 + 0x30)) {
      szValue = (char *)(param_1 + *(int *)(iVar2 + 0x34) + 0xc);
      do {
        if (*(int *)(szValue + -8) < 5000) {
          iVar3 = IsSoundEvent(*(int *)(szValue + -8));
          if (iVar3 != 0) {
            iVar3 = -1;
            pcVar4 = szValue;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            if (iVar3 == -2) {
              (*g_engfuncs.pfnAlertMessage)
                        (at_error,"Bad sound event %d in sequence %s :: %s (sound is \"%s\")\n",
                         *(undefined4 *)(szValue + -8),param_1 + 8,param_2,szValue);
            }
            iVar3 = (*g_engfuncs.pfnAllocString)(szValue);
            (*g_engfuncs.pfnPrecacheSound)(gpGlobals->pStringBase + iVar3);
          }
        }
        szValue = szValue + 0x4c;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(iVar2 + 0x30));
    }
  }
  return;
}

/* 000a45c4  GetSequenceInfo  (182 bytes)
 * int GetSequenceInfo(int param_1, int param_2, int param_3, float * param_4, float * param_5)
 */
/* GetSequenceInfo(void *, entvars_s *, float *, float *) */

int __regparm1 GetSequenceInfo(int param_1,int param_2,int param_3,float *param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  if (param_2 != 0) {
    param_1 = *(int *)(param_3 + 0x128);
    if (param_1 < *(int *)(param_2 + 0xa4)) {
      param_1 = param_2 + *(int *)(param_2 + 0xa8);
      iVar1 = *(int *)(param_3 + 0x128) * 0xb0 + param_1;
      if (1 < *(int *)(iVar1 + 0x38)) {
        *param_4 = (*(float *)(iVar1 + 0x20) * 256.0) / (float)(*(int *)(iVar1 + 0x38) + -1);
        fVar2 = SQRT(*(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x54) +
                     *(float *)(iVar1 + 0x50) * *(float *)(iVar1 + 0x50) +
                     *(float *)(iVar1 + 0x4c) * *(float *)(iVar1 + 0x4c));
        *param_5 = fVar2;
        iVar3 = *(int *)(iVar1 + 0x38) + -1;
        *param_5 = (fVar2 * *(float *)(iVar1 + 0x20)) / (float)iVar3;
        return iVar3;
      }
      *param_4 = 256.0;
    }
    else {
      *param_4 = 0.0;
    }
    *param_5 = 0.0;
  }
  return param_1;
}

/* 000a467c  GetSequenceFlags  (63 bytes)
 * undefined4 GetSequenceFlags(int param_1, int param_2)
 */
/* GetSequenceFlags(void *, entvars_s *) */

undefined4 GetSequenceFlags(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0xa4) <= *(int *)(param_2 + 0x128))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)
             (*(int *)(param_2 + 0x128) * 0xb0 + 0x24 + param_1 + *(int *)(param_1 + 0xa8));
  }
  return uVar1;
}

/* 000a46c0  GetAnimationEvent  (344 bytes)
 * int GetAnimationEvent(int param_1, int param_2, undefined4 * param_3, float param_4, float param_5, int param_6)
 */
/* GetAnimationEvent(void *, entvars_s *, MonsterEvent_t *, float, float, int) */

int GetAnimationEvent(int param_1,int param_2,undefined4 *param_3,float param_4,float param_5,
                     int param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (((param_1 != 0) && (*(int *)(param_2 + 0x128) < *(int *)(param_1 + 0xa4))) &&
     (param_3 != (undefined4 *)0x0)) {
    iVar1 = *(int *)(param_2 + 0x128) * 0xb0 + param_1 + *(int *)(param_1 + 0xa8);
    iVar6 = param_1 + *(int *)(iVar1 + 0x34);
    if ((*(int *)(iVar1 + 0x30) != 0) && (param_6 <= *(int *)(iVar1 + 0x30))) {
      if (*(int *)(iVar1 + 0x38) < 2) {
        fVar2 = 0.0;
        fVar3 = 1.0;
      }
      else {
        fVar3 = (float)(*(int *)(iVar1 + 0x38) + -1) * 0.00390625;
        fVar2 = fVar3 * param_4;
        fVar3 = fVar3 * param_5;
      }
      if (param_6 < *(int *)(iVar1 + 0x30)) {
        iVar4 = param_6 * 0x4c;
        iVar5 = iVar6 + 0xc + iVar4;
        do {
          if ((*(int *)(iVar6 + 4 + iVar4) < 5000) &&
             (((fVar2 <= (float)*(int *)(iVar6 + iVar4) && ((float)*(int *)(iVar6 + iVar4) < fVar3))
              || (((*(byte *)(iVar1 + 0x24) & 1) != 0 &&
                  (((float)(*(int *)(iVar1 + 0x38) + -1) <= fVar3 &&
                   ((float)*(int *)(iVar6 + iVar4) < (fVar3 - (float)*(int *)(iVar1 + 0x38)) + 1.0))
                  )))))) {
            *param_3 = *(undefined4 *)(iVar6 + 4 + iVar4);
            param_3[1] = iVar5;
            return param_6 + 1;
          }
          iVar5 = iVar5 + 0x4c;
          iVar4 = iVar4 + 0x4c;
          param_6 = param_6 + 1;
        } while (param_6 < *(int *)(iVar1 + 0x30));
      }
    }
  }
  return 0;
}

/* 000a4820  SetController  (487 bytes)
 * longdouble SetController(int param_1, int param_2, int param_3, float param_4)
 */
/* SetController(void *, entvars_s *, int, float) */

longdouble SetController(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longdouble lVar4;
  
  lVar4 = (longdouble)param_4;
  if (param_1 == 0) {
    return lVar4;
  }
  iVar2 = 0;
  for (iVar1 = param_1 + *(int *)(param_1 + 0x98);
      (iVar2 < *(int *)(param_1 + 0x94) && (*(int *)(iVar1 + 0x14) != param_3));
      iVar1 = iVar1 + 0x18) {
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(param_1 + 0x94) <= iVar2) {
    return lVar4;
  }
  if ((*(uint *)(iVar1 + 4) & 0x38) != 0) {
    if (*(float *)(iVar1 + 0xc) < *(float *)(iVar1 + 8)) {
      lVar4 = -lVar4;
    }
    if (*(float *)(iVar1 + 8) + 359.0 < *(float *)(iVar1 + 0xc)) {
      if (lVar4 <= (longdouble)360.0) {
        if ((longdouble)0.0 <= lVar4) goto LAB_000a4995;
        lVar4 = (longdouble)360.0 *
                (longdouble)(int)ROUND(lVar4 * (longdouble)-0.002777777777777778 + (longdouble)1.0)
                + lVar4;
      }
      else {
        lVar4 = lVar4 - (longdouble)360.0 *
                        (longdouble)(int)ROUND(lVar4 * (longdouble)0.002777777777777778);
      }
      lVar4 = (longdouble)(float)lVar4;
    }
    else {
      if ((longdouble)0.5 *
          ((longdouble)*(float *)(iVar1 + 8) + (longdouble)*(float *)(iVar1 + 0xc)) +
          (longdouble)180.0 < lVar4) {
        lVar4 = lVar4 - (longdouble)360.0;
      }
      if (lVar4 < (longdouble)0.5 *
                  ((longdouble)*(float *)(iVar1 + 8) + (longdouble)*(float *)(iVar1 + 0xc)) -
                  (longdouble)180.0) {
        lVar4 = lVar4 + (longdouble)360.0;
      }
    }
  }
LAB_000a4995:
  uVar3 = (uint)ROUND(((lVar4 - (longdouble)*(float *)(iVar1 + 8)) * (longdouble)255.0) /
                      ((longdouble)*(float *)(iVar1 + 0xc) - (longdouble)*(float *)(iVar1 + 8)));
  uVar3 = uVar3 & 0xffffffffU - ((int)uVar3 >> 0x1f);
  if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  *(char *)(param_3 + 0x13c + param_2) = (char)uVar3;
  return (longdouble)
         ((*(float *)(iVar1 + 0xc) - *(float *)(iVar1 + 8)) * (float)(int)uVar3 * 0.003921569 +
         *(float *)(iVar1 + 8));
}

/* 000a4a10  SetBlending  (421 bytes)
 * longdouble SetBlending(int param_1, int param_2, int param_3, float param_4)
 */
/* SetBlending(void *, entvars_s *, int, float) */

longdouble SetBlending(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longdouble lVar5;
  
  lVar5 = (longdouble)param_4;
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x128) * 0xb0 + param_1 + *(int *)(param_1 + 0xa8),
     *(int *)(iVar1 + 0x80 + param_3 * 4) != 0)) {
    iVar2 = param_3 * 4;
    if ((*(uint *)(iVar2 + 0x80 + iVar1) & 0x38) != 0) {
      if (*(float *)(iVar1 + 0x90 + iVar2) < *(float *)(iVar2 + 0x88 + iVar1)) {
        lVar5 = -lVar5;
      }
      iVar2 = param_3 * 4 + 0x80;
      iVar3 = param_3 * 4 + 0x90;
      if (*(float *)(iVar3 + iVar1) <= *(float *)(iVar2 + iVar1 + 8) + 359.0) {
        if ((longdouble)0.5 *
            ((longdouble)*(float *)(iVar2 + iVar1 + 8) + (longdouble)*(float *)(iVar3 + iVar1)) +
            (longdouble)180.0 < lVar5) {
          lVar5 = lVar5 - (longdouble)360.0;
        }
        if (lVar5 < (longdouble)0.5 *
                    ((longdouble)*(float *)(iVar1 + 0x88 + param_3 * 4) +
                    (longdouble)*(float *)(iVar1 + 0x90 + param_3 * 4)) - (longdouble)180.0) {
          lVar5 = lVar5 + (longdouble)360.0;
        }
      }
    }
    iVar2 = param_3 * 4 + 0x80;
    uVar4 = (uint)ROUND(((lVar5 - (longdouble)*(float *)(iVar2 + iVar1 + 8)) * (longdouble)255.0) /
                        ((longdouble)*(float *)(iVar1 + 0x90 + param_3 * 4) -
                        (longdouble)*(float *)(iVar2 + iVar1 + 8)));
    uVar4 = uVar4 & 0xffffffffU - ((int)uVar4 >> 0x1f);
    if (0xff < (int)uVar4) {
      uVar4 = 0xff;
    }
    *(char *)(param_2 + 0x140 + param_3) = (char)uVar4;
    iVar2 = param_3 * 4 + 0x80;
    lVar5 = (longdouble)
            ((*(float *)(iVar1 + 0x90 + param_3 * 4) - *(float *)(iVar2 + iVar1 + 8)) *
             (float)(int)uVar4 * 0.003921569 + *(float *)(iVar2 + iVar1 + 8));
  }
  return lVar5;
}

/* 000a4bb8  FindTransition  (923 bytes)
 * int FindTransition(int param_1, int param_2, int param_3, int * param_4)
 */
/* FindTransition(void *, int, int, int *) */

int FindTransition(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (param_1 == 0) {
    return param_3;
  }
  iVar5 = param_1 + *(int *)(param_1 + 0xa8);
  if (*(int *)(iVar5 + 0xa0 + param_2 * 0xb0) == 0) {
    return param_3;
  }
  if (*(int *)(iVar5 + 0xa0 + param_3 * 0xb0) == 0) {
    return param_3;
  }
  if (*param_4 < 1) {
    iVar6 = *(int *)(iVar5 + 0xa0 + param_2 * 0xb0);
  }
  else {
    iVar6 = *(int *)(iVar5 + 0xa4 + param_2 * 0xb0);
  }
  if (iVar6 == *(int *)(iVar5 + 0xa0 + param_3 * 0xb0)) {
    *param_4 = 1;
    return param_3;
  }
  uVar3 = (uint)*(byte *)((iVar6 + -1) * *(int *)(param_1 + 0xec) +
                          *(int *)(iVar5 + 0xa0 + param_3 * 0xb0) + -1 +
                         param_1 + *(int *)(param_1 + 0xf0));
  if (uVar3 == 0) {
    return param_3;
  }
  local_18 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0xa4) < 1) goto LAB_000a4f34;
  uVar4 = *(uint *)(param_1 + 0xa4) & 3;
  if (*(int *)(param_1 + 0xa4) < 1) {
LAB_000a4d91:
    if ((*(int *)(iVar5 + 0xa0 + iVar2) == iVar6) &&
       (iVar1 = local_18, *(uint *)(iVar5 + 0xa4 + iVar2) == uVar3)) {
LAB_000a4cac:
      local_18 = iVar1;
      *param_4 = 1;
      return local_18;
    }
    if ((*(int *)(iVar5 + 0xa8 + iVar2) != 0) &&
       ((*(int *)(iVar5 + 0xa4 + iVar2) == iVar6 &&
        (iVar1 = local_18, *(uint *)(iVar5 + 0xa0 + iVar2) == uVar3)))) {
LAB_000a4cc0:
      local_18 = iVar1;
      *param_4 = -1;
      return local_18;
    }
    iVar2 = iVar2 + 0xb0;
    local_18 = local_18 + 1;
    if (*(int *)(param_1 + 0xa4) <= local_18) goto LAB_000a4f34;
  }
  else if (uVar4 != 0) {
    if (1 < uVar4) {
      if (2 < uVar4) {
        if ((*(int *)(iVar5 + 0xa0) == iVar6) &&
           (iVar1 = local_18, *(uint *)(iVar5 + 0xa4) == uVar3)) goto LAB_000a4cac;
        if ((*(int *)(iVar5 + 0xa8) != 0) &&
           ((*(int *)(iVar5 + 0xa4) == iVar6 && (iVar1 = local_18, *(uint *)(iVar5 + 0xa0) == uVar3)
            ))) goto LAB_000a4cc0;
        iVar2 = 0xb0;
        local_18 = 1;
      }
      if ((*(int *)(iVar5 + 0xa0 + iVar2) == iVar6) &&
         (iVar1 = local_18, *(uint *)(iVar5 + 0xa4 + iVar2) == uVar3)) goto LAB_000a4cac;
      if ((*(int *)(iVar5 + 0xa8 + iVar2) != 0) &&
         ((*(int *)(iVar5 + 0xa4 + iVar2) == iVar6 &&
          (iVar1 = local_18, *(uint *)(iVar5 + 0xa0 + iVar2) == uVar3)))) goto LAB_000a4cc0;
      iVar2 = iVar2 + 0xb0;
      local_18 = local_18 + 1;
    }
    goto LAB_000a4d91;
  }
  iVar5 = iVar5 + iVar2;
  iVar2 = iVar5;
  local_24 = iVar5;
  local_20 = iVar5;
  local_1c = iVar5;
  do {
    if ((*(int *)(local_24 + 0xa0) == iVar6) && (iVar1 = local_18, *(uint *)(iVar5 + 0xa4) == uVar3)
       ) goto LAB_000a4cac;
    if ((*(int *)(local_20 + 0xa8) != 0) &&
       ((*(int *)(iVar2 + 0xa4) == iVar6 && (iVar1 = local_18, *(uint *)(local_1c + 0xa0) == uVar3))
       )) goto LAB_000a4cc0;
    if ((*(int *)(local_24 + 0x150) == iVar6) &&
       (iVar1 = local_18 + 1, *(uint *)(iVar5 + 0x154) == uVar3)) goto LAB_000a4cac;
    if (((*(int *)(local_20 + 0x158) != 0) && (*(int *)(iVar2 + 0x154) == iVar6)) &&
       (iVar1 = local_18 + 1, *(uint *)(local_1c + 0x150) == uVar3)) goto LAB_000a4cc0;
    if ((*(int *)(local_24 + 0x200) == iVar6) &&
       (iVar1 = local_18 + 2, *(uint *)(iVar5 + 0x204) == uVar3)) goto LAB_000a4cac;
    if ((*(int *)(local_20 + 0x208) != 0) &&
       ((*(int *)(iVar2 + 0x204) == iVar6 &&
        (iVar1 = local_18 + 2, *(uint *)(local_1c + 0x200) == uVar3)))) goto LAB_000a4cc0;
    if ((*(int *)(local_24 + 0x2b0) == iVar6) &&
       (iVar1 = local_18 + 3, *(uint *)(iVar5 + 0x2b4) == uVar3)) goto LAB_000a4cac;
    if (((*(int *)(local_20 + 0x2b8) != 0) && (*(int *)(iVar2 + 0x2b4) == iVar6)) &&
       (iVar1 = local_18 + 3, *(uint *)(local_1c + 0x2b0) == uVar3)) goto LAB_000a4cc0;
    local_1c = local_1c + 0x2c0;
    iVar2 = iVar2 + 0x2c0;
    local_20 = local_20 + 0x2c0;
    iVar5 = iVar5 + 0x2c0;
    local_24 = local_24 + 0x2c0;
    local_18 = local_18 + 4;
  } while (local_18 < *(int *)(param_1 + 0xa4));
LAB_000a4f34:
  (*g_engfuncs.pfnAlertMessage)(at_console,"error in transition graph");
  return param_3;
}

/* 000a4f5c  SetBodygroup  (105 bytes)
 * undefined SetBodygroup(int param_1, int param_2, int param_3, int param_4)
 */
/* SetBodygroup(void *, entvars_s *, int, int) */

void SetBodygroup(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 != 0) && (param_3 <= *(int *)(param_1 + 0xcc))) &&
     (iVar1 = param_1 + *(int *)(param_1 + 0xd0) + param_3 * 0x4c, param_4 < *(int *)(iVar1 + 0x40))
     ) {
    *(int *)(param_2 + 0x114) =
         param_4 * *(int *)(iVar1 + 0x44) +
         (*(int *)(param_2 + 0x114) -
         ((*(int *)(param_2 + 0x114) / *(int *)(iVar1 + 0x44)) % *(int *)(iVar1 + 0x40)) *
         *(int *)(iVar1 + 0x44));
  }
  return;
}

/* 000a4fc8  GetBodygroup  (70 bytes)
 * int GetBodygroup(int param_1, int param_2, int param_3)
 */
/* GetBodygroup(void *, entvars_s *, int) */

int GetBodygroup(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 != 0) && (param_3 <= *(int *)(param_1 + 0xcc))) &&
     (iVar1 = param_1 + *(int *)(param_1 + 0xd0) + param_3 * 0x4c, 1 < *(int *)(iVar1 + 0x40))) {
    return (*(int *)(param_2 + 0x114) / *(int *)(iVar1 + 0x44)) % *(int *)(iVar1 + 0x40);
  }
  return 0;
}

/* 000a5014  VecBModelOrigin  (116 bytes)
 * undefined VecBModelOrigin(float * param_1, int param_2)
 */
/* VecBModelOrigin(entvars_s *) */

void VecBModelOrigin(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0xf8);
  fVar2 = *(float *)(param_2 + 0xfc);
  fVar3 = *(float *)(param_2 + 200);
  fVar4 = *(float *)(param_2 + 0xcc);
  *param_1 = *(float *)(param_2 + 0xc4) + *(float *)(param_2 + 0xf4) * 0.5;
  param_1[1] = fVar3 + fVar1 * 0.5;
  param_1[2] = fVar4 + fVar2 * 0.5;
  return;
}

/* 000a5088  func_wall  (33 bytes)
 * undefined func_wall(uint param_1)
 */
void func_wall(uint param_1)

{
  GetClassPtr<CFuncWall>(param_1);
  return;
}

/* 000a51a0  func_wall_toggle  (33 bytes)
 * undefined func_wall_toggle(uint param_1)
 */
void func_wall_toggle(uint param_1)

{
  GetClassPtr<CFuncWallToggle>(param_1);
  return;
}

/* 000a5300  func_conveyor  (33 bytes)
 * undefined func_conveyor(uint param_1)
 */
void func_conveyor(uint param_1)

{
  GetClassPtr<CFuncConveyor>(param_1);
  return;
}

/* 000a548c  func_illusionary  (33 bytes)
 * undefined func_illusionary(uint param_1)
 */
void func_illusionary(uint param_1)

{
  GetClassPtr<CFuncIllusionary>(param_1);
  return;
}

/* 000a55ac  func_monsterclip  (33 bytes)
 * undefined func_monsterclip(uint param_1)
 */
void func_monsterclip(uint param_1)

{
  GetClassPtr<CFuncMonsterClip>(param_1);
  return;
}

/* 000a56d4  func_rotating  (33 bytes)
 * undefined func_rotating(uint param_1)
 */
void func_rotating(uint param_1)

{
  GetClassPtr<CFuncRotating>(param_1);
  return;
}

/* 000a6688  func_pendulum  (33 bytes)
 * undefined func_pendulum(uint param_1)
 */
void func_pendulum(uint param_1)

{
  GetClassPtr<CPendulum>(param_1);
  return;
}

/* 000a6f80  GetClassPtr<CFuncWall>  (131 bytes)
 * CFuncWall * GetClassPtr<CFuncWall>(uint param_1)
 */
/* CFuncWall * GetClassPtr<CFuncWall>(CFuncWall *) */

CFuncWall * GetClassPtr<CFuncWall>(uint param_1)

{
  edict_t *peVar1;
  CFuncWall *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncWall *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncWall *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncWall_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a7004  GetClassPtr<CFuncWallToggle>  (140 bytes)
 * CFuncWallToggle * GetClassPtr<CFuncWallToggle>(uint param_1)
 */
/* CFuncWallToggle * GetClassPtr<CFuncWallToggle>(CFuncWallToggle *) */

CFuncWallToggle * GetClassPtr<CFuncWallToggle>(uint param_1)

{
  edict_t *peVar1;
  CFuncWallToggle *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncWallToggle *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncWallToggle *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncWall_virtual_table;
    pCVar2->vtable = (void **)CFuncWallToggle_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a7090  GetClassPtr<CFuncConveyor>  (140 bytes)
 * CFuncConveyor * GetClassPtr<CFuncConveyor>(uint param_1)
 */
/* CFuncConveyor * GetClassPtr<CFuncConveyor>(CFuncConveyor *) */

CFuncConveyor * GetClassPtr<CFuncConveyor>(uint param_1)

{
  edict_t *peVar1;
  CFuncConveyor *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncConveyor *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncConveyor *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncWall_virtual_table;
    pCVar2->vtable = (void **)CFuncConveyor_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a711c  GetClassPtr<CFuncIllusionary>  (161 bytes)
 * CFuncIllusionary * GetClassPtr<CFuncIllusionary>(uint param_1)
 */
/* CFuncIllusionary * GetClassPtr<CFuncIllusionary>(CFuncIllusionary *) */

CFuncIllusionary * GetClassPtr<CFuncIllusionary>(uint param_1)

{
  edict_t *peVar1;
  CFuncIllusionary *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncIllusionary *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncIllusionary *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CFuncIllusionary_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a71c0  GetClassPtr<CFuncMonsterClip>  (140 bytes)
 * CFuncMonsterClip * GetClassPtr<CFuncMonsterClip>(uint param_1)
 */
/* CFuncMonsterClip * GetClassPtr<CFuncMonsterClip>(CFuncMonsterClip *) */

CFuncMonsterClip * GetClassPtr<CFuncMonsterClip>(uint param_1)

{
  edict_t *peVar1;
  CFuncMonsterClip *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncMonsterClip *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncMonsterClip *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncWall_virtual_table;
    pCVar2->vtable = (void **)CFuncMonsterClip_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a724c  GetClassPtr<CFuncRotating>  (131 bytes)
 * CFuncRotating * GetClassPtr<CFuncRotating>(uint param_1)
 */
/* CFuncRotating * GetClassPtr<CFuncRotating>(CFuncRotating *) */

CFuncRotating * GetClassPtr<CFuncRotating>(uint param_1)

{
  edict_t *peVar1;
  CFuncRotating *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFuncRotating *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFuncRotating *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x78);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFuncRotating_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a72d0  GetClassPtr<CPendulum>  (134 bytes)
 * CPendulum * GetClassPtr<CPendulum>(uint param_1)
 */
/* CPendulum * GetClassPtr<CPendulum>(CPendulum *) */

CPendulum * GetClassPtr<CPendulum>(uint param_1)

{
  edict_t *peVar1;
  CPendulum *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CPendulum *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CPendulum *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x94);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPendulum_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000a7374  CFuncWall_type_info_function  (70 bytes)
 * undefined4 * CFuncWall_type_info_function(void)
 */
/* CFuncWall type_info function */

undefined4 * CFuncWall_type_info_function(void)

{
  if (CFuncWall_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CFuncWall_type_info_node,"9CFuncWall",&CBaseEntity_type_info_node);
  }
  return &CFuncWall_type_info_node;
}

/* 000a73c4  CFuncWallToggle_type_info_function  (70 bytes)
 * undefined4 * CFuncWallToggle_type_info_function(void)
 */
/* CFuncWallToggle type_info function */

undefined4 * CFuncWallToggle_type_info_function(void)

{
  if (CFuncWallToggle_type_info_node == 0) {
    CFuncWall_type_info_function();
    __rtti_si(&CFuncWallToggle_type_info_node,"15CFuncWallToggle",&CFuncWall_type_info_node);
  }
  return &CFuncWallToggle_type_info_node;
}

/* 000a740c  CFuncConveyor_type_info_function  (70 bytes)
 * undefined4 * CFuncConveyor_type_info_function(void)
 */
/* CFuncConveyor type_info function */

undefined4 * CFuncConveyor_type_info_function(void)

{
  if (CFuncConveyor_type_info_node == 0) {
    CFuncWall_type_info_function();
    __rtti_si(&CFuncConveyor_type_info_node,"13CFuncConveyor",&CFuncWall_type_info_node);
  }
  return &CFuncConveyor_type_info_node;
}

/* 000a7454  CFuncIllusionary_type_info_function  (70 bytes)
 * undefined4 * CFuncIllusionary_type_info_function(void)
 */
/* CFuncIllusionary type_info function */

undefined4 * CFuncIllusionary_type_info_function(void)

{
  if (CFuncIllusionary_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CFuncIllusionary_type_info_node,"16CFuncIllusionary",&CBaseToggle_type_info_node);
  }
  return &CFuncIllusionary_type_info_node;
}

/* 000a74a4  CFuncMonsterClip_type_info_function  (70 bytes)
 * undefined4 * CFuncMonsterClip_type_info_function(void)
 */
/* CFuncMonsterClip type_info function */

undefined4 * CFuncMonsterClip_type_info_function(void)

{
  if (CFuncMonsterClip_type_info_node == 0) {
    CFuncWall_type_info_function();
    __rtti_si(&CFuncMonsterClip_type_info_node,"16CFuncMonsterClip",&CFuncWall_type_info_node);
  }
  return &CFuncMonsterClip_type_info_node;
}

/* 000a74f0  CFuncRotating_type_info_function  (70 bytes)
 * undefined4 * CFuncRotating_type_info_function(void)
 */
/* CFuncRotating type_info function */

undefined4 * CFuncRotating_type_info_function(void)

{
  if (CFuncRotating_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CFuncRotating_type_info_node,"13CFuncRotating",&CBaseEntity_type_info_node);
  }
  return &CFuncRotating_type_info_node;
}

/* 000a7540  CPendulum_type_info_function  (70 bytes)
 * undefined4 * CPendulum_type_info_function(void)
 */
/* CPendulum type_info function */

undefined4 * CPendulum_type_info_function(void)

{
  if (CPendulum_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CPendulum_type_info_node,"9CPendulum",&CBaseEntity_type_info_node);
  }
  return &CPendulum_type_info_node;
}

/* 000a7630  env_global  (33 bytes)
 * undefined env_global(uint param_1)
 */
void env_global(uint param_1)

{
  GetClassPtr<CEnvGlobal>(param_1);
  return;
}

/* 000a78fc  multisource  (33 bytes)
 * undefined multisource(uint param_1)
 */
void multisource(uint param_1)

{
  GetClassPtr<CMultiSource>(param_1);
  return;
}

/* 000a84d0  func_button  (33 bytes)
 * undefined func_button(uint param_1)
 */
void func_button(uint param_1)

{
  GetClassPtr<CBaseButton>(param_1);
  return;
}

/* 000a87f4  ButtonSound  (208 bytes)
 * char * ButtonSound(undefined4 param_1)
 */
/* ButtonSound(int) */

char * ButtonSound(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    pcVar1 = "common/null.wav";
    break;
  case 1:
    pcVar1 = "buttons/button1.wav";
    break;
  case 2:
    pcVar1 = "buttons/button2.wav";
    break;
  case 3:
    pcVar1 = "buttons/button3.wav";
    break;
  case 4:
    pcVar1 = "buttons/button4.wav";
    break;
  case 5:
    pcVar1 = "buttons/button5.wav";
    break;
  case 6:
    pcVar1 = "buttons/button6.wav";
    break;
  case 7:
    pcVar1 = "buttons/button7.wav";
    break;
  case 8:
    pcVar1 = "buttons/button8.wav";
    break;
  default:
    pcVar1 = "buttons/button9.wav";
    break;
  case 10:
    pcVar1 = "buttons/button10.wav";
    break;
  case 0xb:
    pcVar1 = "buttons/button11.wav";
    break;
  case 0xc:
    pcVar1 = "buttons/latchlocked1.wav";
    break;
  case 0xd:
    pcVar1 = "buttons/latchunlocked1.wav";
    break;
  case 0xe:
    pcVar1 = "buttons/lightswitch2.wav";
    break;
  case 0x15:
    pcVar1 = "buttons/lever1.wav";
    break;
  case 0x16:
    pcVar1 = "buttons/lever2.wav";
    break;
  case 0x17:
    pcVar1 = "buttons/lever3.wav";
    break;
  case 0x18:
    pcVar1 = "buttons/lever4.wav";
    break;
  case 0x19:
    pcVar1 = "buttons/lever5.wav";
  }
  return pcVar1;
}

/* 000a8930  DoSpark  (331 bytes)
 * undefined DoSpark(int param_1, float * param_2)
 */
/* DoSpark(entvars_s *, Vector const &) */

void DoSpark(int param_1,float *param_2)

{
  char *pcVar1;
  longdouble lVar2;
  longdouble lVar3;
  float local_2c;
  float local_28;
  float local_24;
  
  local_2c = *param_2 + *(float *)(param_1 + 0xf4) * 0.5;
  local_28 = param_2[1] + *(float *)(param_1 + 0xf8) * 0.5;
  local_24 = param_2[2] + *(float *)(param_1 + 0xfc) * 0.5;
  UTIL_Sparks(&local_2c);
  lVar2 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.25,0.75);
  lVar3 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
  switch((int)ROUND(lVar3 * (longdouble)6.0)) {
  case 0:
    pcVar1 = "buttons/spark1.wav";
    break;
  case 1:
    pcVar1 = "buttons/spark2.wav";
    break;
  case 2:
    pcVar1 = "buttons/spark3.wav";
    break;
  case 3:
    pcVar1 = "buttons/spark4.wav";
    break;
  case 4:
    pcVar1 = "buttons/spark5.wav";
    break;
  case 5:
    pcVar1 = "buttons/spark6.wav";
    break;
  default:
    goto switchD_000a8a21_default;
  }
  EMIT_SOUND_DYN(*(int *)(param_1 + 0x208),2,pcVar1,(float)((longdouble)0.4 * lVar2),0x3f4ccccd,0,
                 100,0.5);
switchD_000a8a21_default:
  return;
}

/* 000a9224  func_rot_button  (33 bytes)
 * undefined func_rot_button(uint param_1)
 */
void func_rot_button(uint param_1)

{
  GetClassPtr<CRotButton>(param_1);
  return;
}

/* 000a952c  momentary_rot_button  (33 bytes)
 * undefined momentary_rot_button(uint param_1)
 */
void momentary_rot_button(uint param_1)

{
  GetClassPtr<CMomentaryRotButton>(param_1);
  return;
}

/* 000a9e84  env_spark  (33 bytes)
 * undefined env_spark(uint param_1)
 */
void env_spark(uint param_1)

{
  GetClassPtr<CEnvSpark>(param_1);
  return;
}

/* 000a9ea8  env_debris  (33 bytes)
 * undefined env_debris(uint param_1)
 */
void env_debris(uint param_1)

{
  GetClassPtr<CEnvSpark>(param_1);
  return;
}

/* 000aa230  button_target  (33 bytes)
 * undefined button_target(uint param_1)
 */
void button_target(uint param_1)

{
  GetClassPtr<CButtonTarget>(param_1);
  return;
}

/* 000aa3f8  GetClassPtr<CEnvGlobal>  (140 bytes)
 * CEnvGlobal * GetClassPtr<CEnvGlobal>(uint param_1)
 */
/* CEnvGlobal * GetClassPtr<CEnvGlobal>(CEnvGlobal *) */

CEnvGlobal * GetClassPtr<CEnvGlobal>(uint param_1)

{
  edict_t *peVar1;
  CEnvGlobal *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CEnvGlobal *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CEnvGlobal *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x70);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CEnvGlobal_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000aa484  GetClassPtr<CMultiSource>  (143 bytes)
 * CMultiSource * GetClassPtr<CMultiSource>(uint param_1)
 */
/* CMultiSource * GetClassPtr<CMultiSource>(CMultiSource *) */

CMultiSource * GetClassPtr<CMultiSource>(uint param_1)

{
  edict_t *peVar1;
  CMultiSource *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CMultiSource *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CMultiSource *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x1ec)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CMultiSource_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000aa514  GetClassPtr<CBaseButton>  (161 bytes)
 * CBaseButton * GetClassPtr<CBaseButton>(uint param_1)
 */
/* CBaseButton * GetClassPtr<CBaseButton>(CBaseButton *) */

CBaseButton * GetClassPtr<CBaseButton>(uint param_1)

{
  edict_t *peVar1;
  CBaseButton *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBaseButton *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBaseButton *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x13c)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseButton_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000aa5b8  GetClassPtr<CRotButton>  (170 bytes)
 * CRotButton * GetClassPtr<CRotButton>(uint param_1)
 */
/* CRotButton * GetClassPtr<CRotButton>(CRotButton *) */

CRotButton * GetClassPtr<CRotButton>(uint param_1)

{
  edict_t *peVar1;
  CRotButton *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CRotButton *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CRotButton *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x13c)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseButton_virtual_table;
    pCVar2->vtable = (void **)CRotButton_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000aa664  GetClassPtr<CMomentaryRotButton>  (161 bytes)
 * CMomentaryRotButton * GetClassPtr<CMomentaryRotButton>(uint param_1)
 */
/* CMomentaryRotButton * GetClassPtr<CMomentaryRotButton>(CMomentaryRotButton *) */

CMomentaryRotButton * GetClassPtr<CMomentaryRotButton>(uint param_1)

{
  edict_t *peVar1;
  CMomentaryRotButton *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CMomentaryRotButton *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CMomentaryRotButton *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,300);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CMomentaryRotButton_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000aa708  GetClassPtr<CEnvSpark>  (131 bytes)
 * CEnvSpark * GetClassPtr<CEnvSpark>(uint param_1)
 */
/* CEnvSpark * GetClassPtr<CEnvSpark>(CEnvSpark *) */

CEnvSpark * GetClassPtr<CEnvSpark>(uint param_1)

{
  edict_t *peVar1;
  CEnvSpark *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CEnvSpark *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CEnvSpark *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CEnvSpark_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000aa78c  GetClassPtr<CButtonTarget>  (131 bytes)
 * CButtonTarget * GetClassPtr<CButtonTarget>(uint param_1)
 */
/* CButtonTarget * GetClassPtr<CButtonTarget>(CButtonTarget *) */

CButtonTarget * GetClassPtr<CButtonTarget>(uint param_1)

{
  edict_t *peVar1;
  CButtonTarget *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CButtonTarget *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CButtonTarget *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CButtonTarget_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000aa810  CMultiSource_type_info_function  (70 bytes)
 * undefined4 * CMultiSource_type_info_function(void)
 */
/* CMultiSource type_info function */

undefined4 * CMultiSource_type_info_function(void)

{
  if (CMultiSource_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CMultiSource_type_info_node,"12CMultiSource",&CPointEntity_type_info_node);
  }
  return &CMultiSource_type_info_node;
}

/* 000aa860  CBaseButton_type_info_function  (70 bytes)
 * undefined4 * CBaseButton_type_info_function(void)
 */
/* CBaseButton type_info function */

undefined4 * CBaseButton_type_info_function(void)

{
  if (CBaseButton_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CBaseButton_type_info_node,"11CBaseButton",&CBaseToggle_type_info_node);
  }
  return &CBaseButton_type_info_node;
}

/* 000aa8dc  CEnvGlobal_type_info_function  (70 bytes)
 * undefined4 * CEnvGlobal_type_info_function(void)
 */
/* CEnvGlobal type_info function */

undefined4 * CEnvGlobal_type_info_function(void)

{
  if (CEnvGlobal_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CEnvGlobal_type_info_node,"10CEnvGlobal",&CPointEntity_type_info_node);
  }
  return &CEnvGlobal_type_info_node;
}

/* 000aa924  CRotButton_type_info_function  (70 bytes)
 * undefined4 * CRotButton_type_info_function(void)
 */
/* CRotButton type_info function */

undefined4 * CRotButton_type_info_function(void)

{
  if (CRotButton_type_info_node == 0) {
    CBaseButton_type_info_function();
    __rtti_si(&CRotButton_type_info_node,"10CRotButton",&CBaseButton_type_info_node);
  }
  return &CRotButton_type_info_node;
}

/* 000aa96c  CMomentaryRotButton_type_info_function  (70 bytes)
 * undefined4 * CMomentaryRotButton_type_info_function(void)
 */
/* CMomentaryRotButton type_info function */

undefined4 * CMomentaryRotButton_type_info_function(void)

{
  if (CMomentaryRotButton_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CMomentaryRotButton_type_info_node,"19CMomentaryRotButton",
              &CBaseToggle_type_info_node);
  }
  return &CMomentaryRotButton_type_info_node;
}

/* 000aa9ec  CEnvSpark_type_info_function  (70 bytes)
 * undefined4 * CEnvSpark_type_info_function(void)
 */
/* CEnvSpark type_info function */

undefined4 * CEnvSpark_type_info_function(void)

{
  if (CEnvSpark_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CEnvSpark_type_info_node,"9CEnvSpark",&CBaseEntity_type_info_node);
  }
  return &CEnvSpark_type_info_node;
}

/* 000aaa34  CButtonTarget_type_info_function  (70 bytes)
 * undefined4 * CButtonTarget_type_info_function(void)
 */
/* CButtonTarget type_info function */

undefined4 * CButtonTarget_type_info_function(void)

{
  if (CButtonTarget_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CButtonTarget_type_info_node,"13CButtonTarget",&CBaseEntity_type_info_node);
  }
  return &CButtonTarget_type_info_node;
}

/* 000aaa7c  GetEntityAPI  (66 bytes)
 * undefined4 GetEntityAPI(undefined4 * param_1, int param_2)
 */
undefined4 GetEntityAPI(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  DLL_FUNCTIONS *pDVar3;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 != 0x8c)) {
    uVar1 = 0;
  }
  else {
    pDVar3 = &gFunctionTable;
    for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = pDVar3->pfnGameInit;
      pDVar3 = (DLL_FUNCTIONS *)&pDVar3->pfnSpawn;
      param_1 = param_1 + 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* 000aaac0  GetEntityAPI2  (74 bytes)
 * undefined4 GetEntityAPI2(undefined4 * param_1, int * param_2)
 */
undefined4 GetEntityAPI2(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  DLL_FUNCTIONS *pDVar3;
  
  if ((param_1 == (undefined4 *)0x0) || (*param_2 != 0x8c)) {
    *param_2 = 0x8c;
    uVar1 = 0;
  }
  else {
    pDVar3 = &gFunctionTable;
    for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = pDVar3->pfnGameInit;
      pDVar3 = (DLL_FUNCTIONS *)&pDVar3->pfnSpawn;
      param_1 = param_1 + 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* 000aab0c  GetNewDLLFunctions  (125 bytes)
 * undefined4 GetNewDLLFunctions(undefined4 * param_1, int * param_2)
 */
undefined4 GetNewDLLFunctions(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_error,"GetNewDLLFunctions called with null pNewFunctionTable");
  }
  else {
    if (*param_2 == 1) {
      ppuVar2 = &gNewFunctionTable;
      for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_1 = *ppuVar2;
        ppuVar2 = ppuVar2 + 1;
        param_1 = param_1 + 1;
      }
      return 1;
    }
    (*g_engfuncs.pfnAlertMessage)
              (at_error,"GetNewDLLFunctions version mismatch; requested=%d ours=%d",*param_2,1);
    *param_2 = 1;
  }
  return 0;
}

/* 000aab8c  DispatchSpawn  (441 bytes)
 * int DispatchSpawn(edict_t * pent)
 */
/* DispatchSpawn(edict_s *) */

int DispatchSpawn(edict_t *pent)

{
  float fVar1;
  int *piVar2;
  CBaseEntity *this;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c [7];
  
  piVar2 = (int *)0x0;
  if (pent != (edict_t *)0x0) {
    piVar2 = pent->pvPrivateData;
  }
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    fVar1 = 1.0;
    local_2c[0] = *(float *)(iVar3 + 8) - 1.0;
    local_2c[1] = *(float *)(iVar3 + 0xc) - 1.0;
    local_2c[2] = *(float *)(iVar3 + 0x10) - 1.0;
    pfVar5 = local_2c;
    pfVar6 = (float *)(iVar3 + 0xc4);
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    iVar3 = *piVar2;
    local_3c = *(float *)(iVar3 + 8) + 1.0;
    local_38 = *(float *)(iVar3 + 0xc) + 1.0;
    local_34 = *(float *)(iVar3 + 0x10) + 1.0;
    pfVar5 = &local_3c;
    pfVar6 = (float *)(iVar3 + 0xd0);
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    local_2c[0] = fVar1;
    local_2c[1] = fVar1;
    local_2c[2] = fVar1;
    (**(code **)(piVar2[0x18] + 0x24))(piVar2);
    this = (CBaseEntity *)0x0;
    if (pent != (edict_t *)0x0) {
      this = pent->pvPrivateData;
    }
    if ((this != (CBaseEntity *)0x0) &&
       (((g_pGameRules != (int *)0x0 &&
         (iVar3 = (**(code **)(*g_pGameRules + 0x10))(g_pGameRules,this), iVar3 == 0)) ||
        ((this->pev->flags & 0x40000000) != 0)))) {
      return -1;
    }
    if ((this != (CBaseEntity *)0x0) && (this->pev->globalname != 0)) {
      iVar3 = CGlobalState::EntityFromTable((CGlobalState *)&gGlobalState,this->pev->globalname);
      if (iVar3 == 0) {
        CGlobalState::EntityAdd
                  ((CGlobalState *)&gGlobalState,this->pev->globalname,gpGlobals->mapname,1);
      }
      else {
        if (*(int *)(iVar3 + 0x60) == 2) {
          return -1;
        }
        iVar3 = strcmp(gpGlobals->pStringBase + gpGlobals->mapname,(char *)(iVar3 + 0x40));
        if (iVar3 != 0) {
          CBaseEntity::MakeDormant(this);
        }
      }
    }
  }
  return 0;
}

/* 000aad4c  DispatchKeyValue  (86 bytes)
 * void DispatchKeyValue(edict_t * pentKeyvalue, KeyValueData * pkvd)
 */
/* DispatchKeyValue(edict_s *, KeyValueData_s *) */

void DispatchKeyValue(edict_t *pentKeyvalue,KeyValueData *pkvd)

{
  void *pvVar1;
  
  if ((pkvd != (KeyValueData *)0x0) && (pentKeyvalue != (edict_t *)0x0)) {
    EntvarsKeyvalue((int)&pentKeyvalue->v,(int)pkvd);
    if ((pkvd->fHandled == 0) &&
       ((pkvd->szClassName != (char *)0x0 &&
        (pvVar1 = pentKeyvalue->pvPrivateData, pvVar1 != (void *)0x0)))) {
      (**(code **)(*(int *)((int)pvVar1 + 0x60) + 0x2c))(pvVar1,pkvd);
    }
  }
  return;
}

/* 000aada4  DispatchTouch  (112 bytes)
 * void DispatchTouch(edict_t * pentTouched, edict_t * pentOther)
 */
/* DispatchTouch(edict_s *, edict_s *) */

void DispatchTouch(edict_t *pentTouched,edict_t *pentOther)

{
  int *piVar1;
  int *piVar2;
  
  if (gTouchDisabled == 0) {
    piVar1 = (int *)0x0;
    if (pentTouched != (edict_t *)0x0) {
      piVar1 = pentTouched->pvPrivateData;
    }
    piVar2 = (int *)0x0;
    if (pentOther != (edict_t *)0x0) {
      piVar2 = pentOther->pvPrivateData;
    }
    if (((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) &&
       (((*(uint *)(*piVar1 + 0x1a4) | *(uint *)(*piVar2 + 0x1a4)) & 0x40000000) == 0)) {
      (**(code **)(piVar1[0x18] + 0xdc))(piVar1,piVar2);
    }
  }
  return;
}

/* 000aae14  DispatchUse  (80 bytes)
 * void DispatchUse(edict_t * pentUsed, edict_t * pentOther)
 */
/* DispatchUse(edict_s *, edict_s *) */

void DispatchUse(edict_t *pentUsed,edict_t *pentOther)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = (int *)0x0;
  if (pentUsed != (edict_t *)0x0) {
    piVar1 = pentUsed->pvPrivateData;
  }
  pvVar2 = (void *)0x0;
  if (pentOther != (edict_t *)0x0) {
    pvVar2 = pentOther->pvPrivateData;
  }
  if ((piVar1 != (int *)0x0) && ((*(byte *)(*piVar1 + 0x1a7) & 0x40) == 0)) {
    (**(code **)(piVar1[0x18] + 0xe0))(piVar1,pvVar2,pvVar2,3,0);
  }
  return;
}

/* 000aae64  DispatchThink  (116 bytes)
 * void DispatchThink(edict_t * pent)
 */
/* DispatchThink(edict_s *) */

void DispatchThink(edict_t *pent)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (pent != (edict_t *)0x0) {
    piVar1 = pent->pvPrivateData;
  }
  if (piVar1 != (int *)0x0) {
    if (((int *)*piVar1)[0x69] < 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_error,"Dormant entity %s is thinking!!\n",
                 gpGlobals->pStringBase + *(int *)*piVar1);
    }
    (**(code **)(piVar1[0x18] + 0xd8))(piVar1);
  }
  return;
}

/* 000aaed8  DispatchBlocked  (62 bytes)
 * void DispatchBlocked(edict_t * pentBlocked, edict_t * pentOther)
 */
/* DispatchBlocked(edict_s *, edict_s *) */

void DispatchBlocked(edict_t *pentBlocked,edict_t *pentOther)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  if (pentBlocked != (edict_t *)0x0) {
    pvVar2 = pentBlocked->pvPrivateData;
  }
  pvVar1 = (void *)0x0;
  if (pentOther != (edict_t *)0x0) {
    pvVar1 = pentOther->pvPrivateData;
  }
  if (pvVar2 != (void *)0x0) {
    (**(code **)(*(int *)((int)pvVar2 + 0x60) + 0xe4))(pvVar2,pvVar1);
  }
  return;
}

/* 000aaf18  DispatchSave  (260 bytes)
 * void DispatchSave(edict_t * pent, SAVERESTOREDATA * pSaveData)
 */
/* DispatchSave(edict_s *, saverestore_s *) */

void DispatchSave(edict_t *pent,SAVERESTOREDATA *pSaveData)

{
  float fVar1;
  int iVar2;
  ENTITYTABLE *pEVar3;
  int *piVar4;
  int iVar5;
  CSaveRestoreBuffer local_14 [4];
  
  piVar4 = (int *)0x0;
  if (pent != (edict_t *)0x0) {
    piVar4 = pent->pvPrivateData;
  }
  if ((piVar4 != (int *)0x0) && (pSaveData != (SAVERESTOREDATA *)0x0)) {
    iVar2 = pSaveData->currentIndex;
    pEVar3 = pSaveData->pTable;
    if (pEVar3[iVar2].pent != pent) {
      (*g_engfuncs.pfnAlertMessage)(at_error,"ENTITY TABLE OR INDEX IS WRONG!!!!\n");
    }
    iVar5 = (**(code **)(piVar4[0x18] + 0x38))(piVar4);
    if (-1 < iVar5) {
      iVar5 = *piVar4;
      if (*(int *)(iVar5 + 0x108) == 7) {
        fVar1 = *(float *)(iVar5 + 0x100);
        *(float *)(iVar5 + 0x100) = gpGlobals->time;
        *(float *)(*piVar4 + 0x104) =
             (*(float *)(iVar5 + 0x104) - fVar1) + *(float *)(*piVar4 + 0x100);
      }
      pEVar3[iVar2].location = pSaveData->size;
      pEVar3[iVar2].classname = *(string_t *)*piVar4;
      CSaveRestoreBuffer::CSaveRestoreBuffer(local_14,pSaveData);
      (**(code **)(piVar4[0x18] + 0x30))(piVar4,local_14);
      pEVar3[iVar2].size = pSaveData->size - pEVar3[iVar2].location;
      CSaveRestoreBuffer::~CSaveRestoreBuffer(local_14,0);
    }
  }
  return;
}

