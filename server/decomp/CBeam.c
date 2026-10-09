/* ts_i386.so - CBeam (44 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000b8cb4  CBeam::Spawn  (30 bytes)
 * undefined Spawn(void)
 */
/* CBeam::Spawn(void) */

void __thiscall CBeam::Spawn(CBeam *this)

{
  this->pev->solid = 0;
  (*this->vtable[10])(this);
  return;
}

/* 000b8cd4  CBeam::Precache  (117 bytes)
 * undefined Precache(void)
 */
/* CBeam::Precache(void) */

void __thiscall CBeam::Precache(CBeam *this)

{
  uint uVar1;
  
  if (this->pev->owner != (edict_t *)0x0) {
    uVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->owner);
    SetStartEntity(this,uVar1);
  }
  if (this->pev->aiment != (edict_t *)0x0) {
    uVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->aiment);
    SetEndEntity(this,uVar1);
  }
  return;
}

/* 000b8d4c  CBeam::SetStartEntity  (86 bytes)
 * undefined SetStartEntity(uint param_1)
 */
/* CBeam::SetStartEntity(int) */

void __thiscall CBeam::SetStartEntity(CBeam *this,uint param_1)

{
  edict_t *peVar1;
  
  this->pev->sequence = param_1 & 0xfff | (this->pev->sequence & 0xf000U) << 0xc;
  peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
  this->pev->owner = peVar1;
  return;
}

/* 000b8da4  CBeam::SetEndEntity  (86 bytes)
 * undefined SetEndEntity(uint param_1)
 */
/* CBeam::SetEndEntity(int) */

void __thiscall CBeam::SetEndEntity(CBeam *this,uint param_1)

{
  edict_t *peVar1;
  
  this->pev->skin = param_1 & 0xfff | (this->pev->skin & 0xf000U) << 0xc;
  peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
  this->pev->aiment = peVar1;
  return;
}

/* 000b8dfc  CBeam::GetStartPos  (84 bytes)
 * int GetStartPos(void)
 */
/* CBeam::GetStartPos(void) */

int __thiscall CBeam::GetStartPos(CBeam *this)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  
  if ((this->pev->rendermode & 0xfU) == 2) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(this->pev->sequence & 0xfff);
    peVar1 = &peVar2->v;
  }
  else {
    peVar1 = this->pev;
  }
  return (int)peVar1->origin;
}

/* 000b8e54  CBeam::GetEndPos  (96 bytes)
 * int GetEndPos(void)
 */
/* CBeam::GetEndPos(void) */

int __thiscall CBeam::GetEndPos(CBeam *this)

{
  edict_t *peVar1;
  uint uVar2;
  
  uVar2 = this->pev->rendermode & 0xf;
  if (((uVar2 != 0) && (uVar2 != 3)) &&
     (peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(this->pev->skin & 0xfff), peVar1 != (edict_t *)0x0
     )) {
    return (int)(peVar1->v).origin;
  }
  return (int)this->pev->angles;
}

/* 000b8eb8  CBeam::BeamCreate  (84 bytes)
 * CBeam * BeamCreate(int param_1, int param_2)
 */
/* CBeam::BeamCreate(char const *, int) */

CBeam * CBeam::BeamCreate(int param_1,int param_2)

{
  CBeam *this;
  
  this = GetClassPtr<CBeam>(0);
  this->pev->classname = (int)&DAT_0010c219 - (int)gpGlobals->pStringBase;
  BeamInit(this,param_1,param_2);
  return this;
}

/* 000b8f0c  CBeam::BeamInit  (228 bytes)
 * undefined BeamInit(int param_1, int param_2)
 */
/* CBeam::BeamInit(char const *, int) */

void __thiscall CBeam::BeamInit(CBeam *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 | 0x20000000;
  this->pev->rendercolor[0] = 255.0;
  this->pev->rendercolor[1] = 255.0;
  this->pev->rendercolor[2] = 255.0;
  this->pev->renderamt = 255.0;
  this->pev->body = 0;
  this->pev->frame = 0.0;
  this->pev->animtime = 0.0;
  this->pev->model = param_1 - (int)gpGlobals->pStringBase;
  iVar2 = (*g_engfuncs.pfnPrecacheModel)((char *)param_1);
  this->pev->modelindex = iVar2;
  this->pev->scale = (float)param_2;
  this->pev->skin = 0;
  this->pev->sequence = 0;
  this->pev->rendermode = 0;
  return;
}

/* 000b8ff0  CBeam::PointsInit  (104 bytes)
 * undefined PointsInit(undefined4 * param_1, undefined4 * param_2)
 */
/* CBeam::PointsInit(Vector const &, Vector const &) */

void __thiscall CBeam::PointsInit(CBeam *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  vec_t *pvVar3;
  
  piVar1 = &this->pev->rendermode;
  *piVar1 = *piVar1 & 0xf0;
  pvVar3 = this->pev->origin;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar3 = (vec_t)*param_1;
    param_1 = param_1 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pvVar3 = this->pev->angles;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar3 = (vec_t)*param_2;
    param_2 = param_2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  piVar1 = &this->pev->sequence;
  *piVar1 = *piVar1 & 0xfff;
  piVar1 = &this->pev->skin;
  *piVar1 = *piVar1 & 0xfff;
  RelinkBeam(this);
  return;
}

/* 000b9058  CBeam::HoseInit  (121 bytes)
 * undefined HoseInit(undefined4 * param_1, undefined4 * param_2)
 */
/* CBeam::HoseInit(Vector const &, Vector const &) */

void __thiscall CBeam::HoseInit(CBeam *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  vec_t *pvVar3;
  
  this->pev->rendermode = this->pev->rendermode & 0xf0U | 3;
  pvVar3 = this->pev->origin;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar3 = (vec_t)*param_1;
    param_1 = param_1 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pvVar3 = this->pev->angles;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar3 = (vec_t)*param_2;
    param_2 = param_2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  piVar1 = &this->pev->sequence;
  *piVar1 = *piVar1 & 0xfff;
  piVar1 = &this->pev->skin;
  *piVar1 = *piVar1 & 0xfff;
  RelinkBeam(this);
  return;
}

/* 000b90d4  CBeam::PointEntInit  (125 bytes)
 * undefined PointEntInit(undefined4 * param_1, uint param_2)
 */
/* CBeam::PointEntInit(Vector const &, int) */

void __thiscall CBeam::PointEntInit(CBeam *this,undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  vec_t *pvVar3;
  
  this->pev->rendermode = this->pev->rendermode & 0xf0U | 1;
  pvVar3 = this->pev->origin;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar3 = (vec_t)*param_1;
    param_1 = param_1 + 1;
    pvVar3 = pvVar3 + 1;
  }
  SetEndEntity(this,param_2);
  piVar1 = &this->pev->sequence;
  *piVar1 = *piVar1 & 0xfff;
  piVar1 = &this->pev->skin;
  *piVar1 = *piVar1 & 0xfff;
  RelinkBeam(this);
  return;
}

/* 000b9154  CBeam::EntsInit  (108 bytes)
 * undefined EntsInit(uint param_1, uint param_2)
 */
/* CBeam::EntsInit(int, int) */

void __thiscall CBeam::EntsInit(CBeam *this,uint param_1,uint param_2)

{
  int *piVar1;
  
  this->pev->rendermode = this->pev->rendermode & 0xf0U | 2;
  SetStartEntity(this,param_1);
  SetEndEntity(this,param_2);
  piVar1 = &this->pev->sequence;
  *piVar1 = *piVar1 & 0xfff;
  piVar1 = &this->pev->skin;
  *piVar1 = *piVar1 & 0xfff;
  RelinkBeam(this);
  return;
}

/* 000b91c0  CBeam::RelinkBeam  (377 bytes)
 * undefined RelinkBeam(void)
 */
/* CBeam::RelinkBeam(void) */

void __thiscall CBeam::RelinkBeam(CBeam *this)

{
  float fVar1;
  entvars_t *peVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  vec_t *pvVar6;
  float local_2c;
  float local_28;
  float local_24;
  
  pfVar3 = (float *)GetStartPos(this);
  pfVar4 = (float *)GetEndPos(this);
  fVar1 = *pfVar4;
  if (*pfVar3 < fVar1) {
    fVar1 = *pfVar3;
  }
  this->pev->mins[0] = fVar1;
  fVar1 = pfVar4[1];
  if (pfVar3[1] < fVar1) {
    fVar1 = pfVar3[1];
  }
  this->pev->mins[1] = fVar1;
  fVar1 = pfVar4[2];
  if (pfVar3[2] < fVar1) {
    fVar1 = pfVar3[2];
  }
  this->pev->mins[2] = fVar1;
  fVar1 = *pfVar4;
  if (fVar1 < *pfVar3) {
    fVar1 = *pfVar3;
  }
  this->pev->maxs[0] = fVar1;
  fVar1 = pfVar4[1];
  if (fVar1 < pfVar3[1]) {
    fVar1 = pfVar3[1];
  }
  this->pev->maxs[1] = fVar1;
  fVar1 = pfVar4[2];
  if (fVar1 < pfVar3[2]) {
    fVar1 = pfVar3[2];
  }
  this->pev->maxs[2] = fVar1;
  pfVar3 = &local_2c;
  pvVar6 = this->pev->mins;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pvVar6 = pvVar6 + 1;
  }
  peVar2 = this->pev;
  local_2c = peVar2->maxs[0] - peVar2->origin[0];
  local_28 = peVar2->maxs[1] - peVar2->origin[1];
  local_24 = peVar2->maxs[2] - peVar2->origin[2];
  pfVar3 = &local_2c;
  pvVar6 = peVar2->maxs;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pvVar6 = pvVar6 + 1;
  }
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  return;
}

/* 000b933c  CBeam::TriggerTouch  (141 bytes)
 * undefined TriggerTouch(int * param_1)
 */
/* WARNING: Removing unreachable block (ram,0x000b9374) */
/* CBeam::TriggerTouch(CBaseEntity *) */

void __thiscall CBeam::TriggerTouch(CBeam *this,int *param_1)

{
  edict_t *peVar1;
  void *pvVar2;
  
  if ((*(uint *)(*param_1 + 0x1a4) & 0x28) != 0) {
    if (this->pev->owner != (edict_t *)0x0) {
      peVar1 = this->pev->owner;
      pvVar2 = (void *)0x0;
      if (peVar1 != (edict_t *)0x0) {
        pvVar2 = peVar1->pvPrivateData;
      }
      (**(code **)(*(int *)((int)pvVar2 + 0x60) + 0xe0))(pvVar2,param_1,this,3,0);
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,"Firing targets!!!\n");
  }
  return;
}

/* 000b93cc  CBeam::RandomTargetname  (106 bytes)
 * int * RandomTargetname(undefined4 this, undefined4 param_2)
 */
/* CBeam::RandomTargetname(char const *) */

int * __thiscall CBeam::RandomTargetname(undefined4 this,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int lHigh;
  int *local_14;
  
  local_14 = (int *)0x0;
  piVar2 = (int *)0x0;
  lHigh = 0;
  while( true ) {
    piVar2 = (int *)UTIL_FindEntityByTargetname(piVar2,param_2);
    if (piVar2 == (int *)0x0) break;
    iVar3 = lHigh + 1;
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,lHigh);
    lHigh = iVar3;
    if (iVar1 < 1) {
      local_14 = piVar2;
    }
  }
  return local_14;
}

/* 000b943c  CBeam::DoSparks  (90 bytes)
 * undefined DoSparks(undefined4 * param_1, undefined4 * param_2)
 */
/* CBeam::DoSparks(Vector const &, Vector const &) */

void __thiscall CBeam::DoSparks(CBeam *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = this->pev->spawnflags;
  if ((uVar1 & 0x30) != 0) {
    if ((uVar1 & 0x10) != 0) {
      UTIL_Sparks(param_1);
    }
    if ((this->pev->spawnflags & 0x20) != 0) {
      UTIL_Sparks(param_2);
    }
  }
  return;
}

/* 000ba1b8  CBeam::BeamDamage  (433 bytes)
 * undefined BeamDamage(int param_1)
 */
/* WARNING: Removing unreachable block (ram,0x000ba202) */
/* CBeam::BeamDamage(TraceResult *) */

void __thiscall CBeam::BeamDamage(CBeam *this,int param_1)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  float local_2c;
  float local_28;
  float local_24;
  
  RelinkBeam(this);
  if ((*(float *)(param_1 + 0x10) != 1.0) && (*(int *)(param_1 + 0x30) != 0)) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0x7c);
    }
    if (iVar3 != 0) {
      ClearMultiDamage();
      peVar1 = this->pev;
      local_2c = *(float *)(param_1 + 0x14) - peVar1->origin[0];
      local_28 = *(float *)(param_1 + 0x18) - peVar1->origin[1];
      fVar2 = *(float *)(param_1 + 0x1c) - peVar1->origin[2];
      local_24 = SQRT(fVar2 * fVar2 + local_28 * local_28 + local_2c * local_2c);
      if (local_24 == 0.0) {
        local_24 = 1.0;
        local_2c = 0.0;
        local_28 = 0.0;
      }
      else {
        local_24 = 1.0 / local_24;
        local_2c = local_24 * local_2c;
        local_28 = local_24 * local_28;
        local_24 = local_24 * fVar2;
      }
      (**(code **)(*(int *)(iVar3 + 0x60) + 0x54))
                (iVar3,this->pev,(gpGlobals->time - this->pev->dmgtime) * this->pev->dmg,&local_2c,
                 param_1,0x400);
      ApplyMultiDamage(this->pev,this->pev);
      if (((this->pev->spawnflags & 0x40) != 0) &&
         (iVar3 = (**(code **)(*(int *)(iVar3 + 0x60) + 0xb8))(iVar3), iVar3 != 0)) {
        iVar3 = (*g_engfuncs.pfnRandomLong)(0,4);
        UTIL_DecalTrace(param_1,iVar3 + 0x1c);
      }
    }
  }
  this->pev->dmgtime = gpGlobals->time;
  return;
}

/* 000bedec  CBeam::ObjectCaps  (29 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CBeam::ObjectCaps(void) */

undefined4 __thiscall CBeam::ObjectCaps(CBeam *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((short)this->pev->spawnflags < 0) {
    uVar1 = 0x80000000;
  }
  return uVar1;
}

/* 000bee0c  CBeam::SetType  (33 bytes)
 * undefined SetType(uint param_1)
 */
/* CBeam::SetType(int) */

void __thiscall CBeam::SetType(CBeam *this,uint param_1)

{
  this->pev->rendermode = this->pev->rendermode & 0xf0U | param_1 & 0xf;
  return;
}

/* 000bee30  CBeam::SetFlags  (34 bytes)
 * undefined SetFlags(uint param_1)
 */
/* CBeam::SetFlags(int) */

void __thiscall CBeam::SetFlags(CBeam *this,uint param_1)

{
  this->pev->rendermode = this->pev->rendermode & 0xfU | param_1 & 0xf0;
  return;
}

/* 000bee54  CBeam::SetStartPos  (26 bytes)
 * undefined SetStartPos(undefined4 * param_1)
 */
/* CBeam::SetStartPos(Vector const &) */

void __thiscall CBeam::SetStartPos(CBeam *this,undefined4 *param_1)

{
  int iVar1;
  vec_t *pvVar2;
  
  pvVar2 = this->pev->origin;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar2 = (vec_t)*param_1;
    param_1 = param_1 + 1;
    pvVar2 = pvVar2 + 1;
  }
  return;
}

/* 000bee70  CBeam::SetEndPos  (26 bytes)
 * undefined SetEndPos(undefined4 * param_1)
 */
/* CBeam::SetEndPos(Vector const &) */

void __thiscall CBeam::SetEndPos(CBeam *this,undefined4 *param_1)

{
  int iVar1;
  vec_t *pvVar2;
  
  pvVar2 = this->pev->angles;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar2 = (vec_t)*param_1;
    param_1 = param_1 + 1;
    pvVar2 = pvVar2 + 1;
  }
  return;
}

/* 000bee8c  CBeam::SetStartAttachment  (37 bytes)
 * undefined SetStartAttachment(uint param_1)
 */
/* CBeam::SetStartAttachment(int) */

void __thiscall CBeam::SetStartAttachment(CBeam *this,uint param_1)

{
  this->pev->sequence = this->pev->sequence & 0xfffU | (param_1 & 0xf) << 0xc;
  return;
}

/* 000beeb4  CBeam::SetEndAttachment  (37 bytes)
 * undefined SetEndAttachment(uint param_1)
 */
/* CBeam::SetEndAttachment(int) */

void __thiscall CBeam::SetEndAttachment(CBeam *this,uint param_1)

{
  this->pev->skin = this->pev->skin & 0xfffU | (param_1 & 0xf) << 0xc;
  return;
}

/* 000beedc  CBeam::SetTexture  (17 bytes)
 * undefined SetTexture(undefined4 param_1)
 */
/* CBeam::SetTexture(int) */

void __thiscall CBeam::SetTexture(CBeam *this,int param_1)

{
  this->pev->modelindex = param_1;
  return;
}

/* 000beef0  CBeam::SetWidth  (17 bytes)
 * undefined SetWidth(int param_1)
 */
/* CBeam::SetWidth(int) */

void __thiscall CBeam::SetWidth(CBeam *this,int param_1)

{
  this->pev->scale = (float)param_1;
  return;
}

/* 000bef04  CBeam::SetNoise  (17 bytes)
 * undefined SetNoise(undefined4 param_1)
 */
/* CBeam::SetNoise(int) */

void __thiscall CBeam::SetNoise(CBeam *this,int param_1)

{
  this->pev->body = param_1;
  return;
}

/* 000bef18  CBeam::SetColor  (54 bytes)
 * undefined SetColor(int param_1, int param_2, int param_3)
 */
/* CBeam::SetColor(int, int, int) */

void __thiscall CBeam::SetColor(CBeam *this,int param_1,int param_2,int param_3)

{
  this->pev->rendercolor[0] = (float)param_1;
  this->pev->rendercolor[1] = (float)param_2;
  this->pev->rendercolor[2] = (float)param_3;
  return;
}

/* 000bef50  CBeam::SetBrightness  (17 bytes)
 * undefined SetBrightness(int param_1)
 */
/* CBeam::SetBrightness(int) */

void __thiscall CBeam::SetBrightness(CBeam *this,int param_1)

{
  this->pev->renderamt = (float)param_1;
  return;
}

/* 000bef64  CBeam::SetFrame  (17 bytes)
 * undefined SetFrame(undefined4 param_1)
 */
/* CBeam::SetFrame(float) */

void __thiscall CBeam::SetFrame(CBeam *this,float param_1)

{
  this->pev->frame = param_1;
  return;
}

/* 000bef78  CBeam::SetScrollRate  (17 bytes)
 * undefined SetScrollRate(int param_1)
 */
/* CBeam::SetScrollRate(int) */

void __thiscall CBeam::SetScrollRate(CBeam *this,int param_1)

{
  this->pev->animtime = (float)param_1;
  return;
}

/* 000bef8c  CBeam::GetType  (16 bytes)
 * uint GetType(void)
 */
/* CBeam::GetType(void) */

uint __thiscall CBeam::GetType(CBeam *this)

{
  return this->pev->rendermode & 0xf;
}

/* 000bef9c  CBeam::GetFlags  (18 bytes)
 * uint GetFlags(void)
 */
/* CBeam::GetFlags(void) */

uint __thiscall CBeam::GetFlags(CBeam *this)

{
  return this->pev->rendermode & 0xf0;
}

/* 000befb0  CBeam::GetStartEntity  (18 bytes)
 * uint GetStartEntity(void)
 */
/* CBeam::GetStartEntity(void) */

uint __thiscall CBeam::GetStartEntity(CBeam *this)

{
  return this->pev->sequence & 0xfff;
}

/* 000befc4  CBeam::GetEndEntity  (18 bytes)
 * uint GetEndEntity(void)
 */
/* CBeam::GetEndEntity(void) */

uint __thiscall CBeam::GetEndEntity(CBeam *this)

{
  return this->pev->skin & 0xfff;
}

/* 000befd8  CBeam::Center  (125 bytes)
 * float * Center(float * param_1, CBeam * param_2)
 */
/* CBeam::Center(void) */

float * CBeam::Center(float *param_1,CBeam *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  
  pfVar5 = (float *)GetStartPos(param_2);
  pfVar6 = (float *)GetEndPos(param_2);
  fVar1 = pfVar5[1];
  fVar2 = pfVar6[1];
  fVar3 = pfVar5[2];
  fVar4 = pfVar6[2];
  *param_1 = (*pfVar5 + *pfVar6) * 0.5;
  param_1[1] = (fVar1 + fVar2) * 0.5;
  param_1[2] = (fVar3 + fVar4) * 0.5;
  return param_1;
}

/* 000bf058  CBeam::GetTexture  (13 bytes)
 * undefined4 GetTexture(void)
 */
/* CBeam::GetTexture(void) */

int __thiscall CBeam::GetTexture(CBeam *this)

{
  return this->pev->modelindex;
}

/* 000bf068  CBeam::GetWidth  (50 bytes)
 * int GetWidth(void)
 */
/* CBeam::GetWidth(void) */

int __thiscall CBeam::GetWidth(CBeam *this)

{
  return (int)ROUND(this->pev->scale);
}

/* 000bf09c  CBeam::GetNoise  (13 bytes)
 * undefined4 GetNoise(void)
 */
/* CBeam::GetNoise(void) */

int __thiscall CBeam::GetNoise(CBeam *this)

{
  return this->pev->body;
}

/* 000bf0ac  CBeam::GetBrightness  (50 bytes)
 * int GetBrightness(void)
 */
/* CBeam::GetBrightness(void) */

int __thiscall CBeam::GetBrightness(CBeam *this)

{
  return (int)ROUND(this->pev->renderamt);
}

/* 000bf0e0  CBeam::GetFrame  (50 bytes)
 * int GetFrame(void)
 */
/* CBeam::GetFrame(void) */

int __thiscall CBeam::GetFrame(CBeam *this)

{
  return (int)ROUND(this->pev->frame);
}

/* 000bf114  CBeam::GetScrollRate  (50 bytes)
 * int GetScrollRate(void)
 */
/* CBeam::GetScrollRate(void) */

int __thiscall CBeam::GetScrollRate(CBeam *this)

{
  return (int)ROUND(this->pev->animtime);
}

/* 000bf148  CBeam::LiveForTime  (62 bytes)
 * undefined LiveForTime(float param_1)
 */
/* CBeam::LiveForTime(float) */

void __thiscall CBeam::LiveForTime(CBeam *this,float param_1)

{
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  this->pev->nextthink = param_1 + gpGlobals->time;
  return;
}

/* 000bf188  CBeam::BeamDamageInstant  (77 bytes)
 * undefined BeamDamageInstant(int param_1, undefined4 param_2)
 */
/* CBeam::BeamDamageInstant(TraceResult *, float) */

void __thiscall CBeam::BeamDamageInstant(CBeam *this,int param_1,float param_2)

{
  this->pev->dmg = param_2;
  this->pev->dmgtime = gpGlobals->time - 1.0;
  BeamDamage(this,param_1);
  return;
}

