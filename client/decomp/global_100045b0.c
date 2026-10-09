/* client.dll - global_100045b0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100045b0  HUD_PostRunCmd  (61 bytes)
 * void HUD_PostRunCmd(local_state_s * from, local_state_s * to, usercmd_t * cmd, int runfuncs, double time, uint random_seed)
 */
void __cdecl
HUD_PostRunCmd(local_state_s *from,local_state_s *to,usercmd_t *cmd,int runfuncs,double time,
              uint random_seed)

{
                    /* 0x45b0  485  HUD_PostRunCmd */
  DAT_100d5cbc = runfuncs;
  FUN_10003830((float)from,(int)to,(int)cmd,time,random_seed);
  DAT_100df1a4 = (to->client).fov;
  return;
}

/* 10004750  CreateInterface  (121 bytes)
 * undefined4 CreateInterface(byte.conflict * param_1, undefined4 * param_2)
 */
undefined4 __cdecl CreateInterface(byte_conflict *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  puVar2 = DAT_1009ff10;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      return 0;
    }
    pbVar3 = (byte *)puVar2[1];
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_1000478f:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10004794;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_1000478f;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10004794:
    if (iVar4 == 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      uVar5 = (*(code *)*puVar2)();
      return uVar5;
    }
    puVar2 = (undefined4 *)puVar2[2];
  } while( true );
}

/* 100083e0  weapon_tsgun  (12 bytes)
 * undefined weapon_tsgun(int param_1)
 */
void __cdecl weapon_tsgun(int param_1)

{
                    /* 0x83e0  505  weapon_tsgun */
  FUN_1000b760(param_1);
  return;
}

/* 1001a9a0  HUD_GetHullBounds  (22 bytes)
 * int HUD_GetHullBounds(int hullnumber, float * mins, float * maxs)
 */
int __cdecl HUD_GetHullBounds(int hullnumber,float *mins,float *maxs)

{
  int iVar1;
  
                    /* 0x1a9a0  477  HUD_GetHullBounds */
  iVar1 = 0;
  if (((hullnumber == 0) || (hullnumber == 1)) || (hullnumber == 2)) {
    iVar1 = 1;
  }
  return iVar1;
}

/* 1001a9c0  HUD_ConnectionlessPacket  (13 bytes)
 * int HUD_ConnectionlessPacket(netadr_s * net_from, char * args, char * buffer, int * size)
 */
int HUD_ConnectionlessPacket(netadr_s *net_from,char *args,char *buffer,int *size)

{
                    /* 0x1a9c0  471  HUD_ConnectionlessPacket */
  *size = 0;
  return 0;
}

/* 1001a9d0  HUD_PlayerMoveInit  (12 bytes)
 * void HUD_PlayerMoveInit(playermove_s * ppmove)
 */
void __cdecl HUD_PlayerMoveInit(playermove_s *ppmove)

{
                    /* 0x1a9d0  483  HUD_PlayerMoveInit */
  FUN_1002ea10(ppmove);
  return;
}

/* 1001a9e0  HUD_PlayerMoveTexture  (14 bytes)
 * char HUD_PlayerMoveTexture(char * name)
 */
char __cdecl HUD_PlayerMoveTexture(char *name)

{
  char cVar1;
  
                    /* 0x1a9e0  484  HUD_PlayerMoveTexture */
  cVar1 = FUN_1002a340((byte_conflict *)name);
  return cVar1;
}

/* 1001a9f0  HUD_PlayerMove  (19 bytes)
 * void HUD_PlayerMove(playermove_s * ppmove, int server)
 */
void __cdecl HUD_PlayerMove(playermove_s *ppmove,int server)

{
                    /* 0x1a9f0  482  HUD_PlayerMove */
  FUN_1002e990((int)ppmove,server);
  return;
}

/* 1001aa10  Initialize  (59 bytes)
 * int Initialize(cl_enginefunc_t * pEnginefuncs, int iVersion)
 */
int __cdecl Initialize(cl_enginefunc_t *pEnginefuncs,int iVersion)

{
  int iVar1;
  cl_enginefunc_t *pcVar2;
  cl_enginefunc_t_ts30 *pcVar3;
  
  pcVar2 = pEnginefuncs;
  pcVar3 = &gEngfuncs;
                    /* 0x1aa10  502  Initialize */
  for (iVar1 = 0x62; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar3->pfnSPR_Load = pcVar2->pfnSPR_Load;
    pcVar2 = (cl_enginefunc_t *)&pcVar2->pfnSPR_Frames;
    pcVar3 = (cl_enginefunc_t_ts30 *)&pcVar3->pfnSPR_Frames;
  }
  if (iVersion != 7) {
    return 0;
  }
  pcVar3 = &gEngfuncs;
  for (iVar1 = 0x62; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar3->pfnSPR_Load = pEnginefuncs->pfnSPR_Load;
    pEnginefuncs = (cl_enginefunc_t *)&pEnginefuncs->pfnSPR_Frames;
    pcVar3 = (cl_enginefunc_t_ts30 *)&pcVar3->pfnSPR_Frames;
  }
  thunk_FUN_10003240();
  return 1;
}

/* 1001aa50  HUD_VidInit  (21 bytes)
 * int HUD_VidInit(void)
 */
int HUD_VidInit(void)

{
                    /* 0x1aa50  495  HUD_VidInit */
  FUN_100206c0(&DAT_100cf920);
  FUN_1005b3e0();
  return 1;
}

/* 1001aa70  HUD_Init  (26 bytes)
 * void HUD_Init(void)
 */
void HUD_Init(void)

{
                    /* 0x1aa70  480  HUD_Init */
  FUN_10026b30();
  FUN_10020170((int *)&DAT_100cf920);
  FUN_1005c2a0();
  return;
}

/* 1001aa90  HUD_Redraw  (26 bytes)
 * int HUD_Redraw(float flTime, int intermission)
 */
int __cdecl HUD_Redraw(float flTime,int intermission)

{
                    /* 0x1aa90  487  HUD_Redraw */
  FUN_10021aa0(&DAT_100cf920,flTime,intermission);
  return 1;
}

/* 1001aab0  HUD_UpdateClientData  (26 bytes)
 * int HUD_UpdateClientData(client_data_t * cdata, float flTime)
 */
int __cdecl HUD_UpdateClientData(client_data_t *cdata,float flTime)

{
  int iVar1;
  
                    /* 0x1aab0  494  HUD_UpdateClientData */
  FUN_10027ca0();
  iVar1 = FUN_10024b00(&DAT_100cf920,cdata->origin);
  return iVar1;
}

/* 1001aad0  HUD_Reset  (16 bytes)
 * void HUD_Reset(void)
 */
void HUD_Reset(void)

{
                    /* 0x1aad0  488  HUD_Reset */
  FUN_100206c0(&DAT_100cf920);
  return;
}

/* 1001aae0  HUD_Frame  (81 bytes)
 * void HUD_Frame(double time)
 */
void __cdecl HUD_Frame(double time)

{
  undefined *this;
  double dVar1;
  
                    /* 0x1aae0  476  HUD_Frame */
  FUN_10022bb0(time._0_4_,time._4_4_);
  dVar1 = time;
  this = FUN_10017570();
  FUN_10017ea0(this,dVar1);
  FUN_1003ab40(time._0_4_,time._4_4_);
  FUN_10055ae0((float)time,(float *)&DAT_100963e8,DAT_1009ff04);
  DAT_100df5cc = 0;
  return;
}

/* 1001ab40  HUD_VoiceStatus  (23 bytes)
 * void HUD_VoiceStatus(int entindex, qboolean bTalking)
 */
void __cdecl HUD_VoiceStatus(int entindex,qboolean bTalking)

{
  undefined *this;
  
                    /* 0x1ab40  496  HUD_VoiceStatus */
  this = FUN_10017570();
  FUN_100180c0(this,entindex,bTalking);
  return;
}

/* 1001ab60  HUD_DirectorEvent  (31 bytes)
 * void HUD_DirectorEvent(int iSize, void * pbuf)
 */
void __cdecl HUD_DirectorEvent(int iSize,void *pbuf)

{
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
                    /* 0x1ab60  473  HUD_DirectorEvent */
  FUN_10023380(&DAT_100cfff8,(char)iSize,pbuf,in_stack_0000000c,in_stack_00000010);
  return;
}

/* 1001b8c0  Demo_ReadBuffer  (61 bytes)
 * void Demo_ReadBuffer(int size, byte.conflict * buffer)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Demo_ReadBuffer(int size,byte_conflict *buffer)

{
  int iVar1;
  
                    /* 0x1b8c0  469  Demo_ReadBuffer */
  iVar1 = *(int *)buffer;
  if (iVar1 == 0) {
    _DAT_100d6074 = *(undefined4 *)(buffer + 4);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      (*gEngfuncs.Con_DPrintf)(s_Unknown_demo_buffer_type__skippi_1009367c);
      return;
    }
    DAT_100d607c = *(undefined4 *)(buffer + 4);
    return;
  }
  _DAT_100d6078 = *(undefined4 *)(buffer + 4);
  return;
}

/* 1001b900  HUD_TxferLocalOverrides  (74 bytes)
 * void HUD_TxferLocalOverrides(entity_state_t * state, clientdata_t * client)
 */
void __cdecl HUD_TxferLocalOverrides(entity_state_t *state,clientdata_t *client)

{
                    /* 0x1b900  492  HUD_TxferLocalOverrides */
  state->origin[0] = client->origin[0];
  state->origin[1] = client->origin[1];
  state->origin[2] = client->origin[2];
  state->iuser1 = client->iuser1;
  state->iuser2 = client->iuser2;
  state->iuser3 = client->iuser3;
  state->iuser4 = client->iuser4;
  return;
}

/* 1001b950  HUD_ProcessPlayerState  (420 bytes)
 * void HUD_ProcessPlayerState(entity_state_t * dst, entity_state_t * src)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl HUD_ProcessPlayerState(entity_state_t *dst,entity_state_t *src)

{
  cl_entity_s *pcVar1;
  longlong lVar2;
  
                    /* 0x1b950  486  HUD_ProcessPlayerState */
  dst->origin[0] = src->origin[0];
  dst->origin[1] = src->origin[1];
  dst->origin[2] = src->origin[2];
  dst->angles[0] = src->angles[0];
  dst->angles[1] = src->angles[1];
  dst->angles[2] = src->angles[2];
  dst->velocity[0] = src->velocity[0];
  dst->velocity[1] = src->velocity[1];
  dst->velocity[2] = src->velocity[2];
  dst->frame = src->frame;
  dst->modelindex = src->modelindex;
  dst->skin = src->skin;
  dst->effects = src->effects;
  dst->weaponmodel = src->weaponmodel;
  dst->movetype = src->movetype;
  dst->sequence = src->sequence;
  dst->animtime = src->animtime;
  dst->solid = src->solid;
  dst->rendermode = src->rendermode;
  dst->renderamt = src->renderamt;
  (dst->rendercolor).r = (src->rendercolor).r;
  (dst->rendercolor).g = (src->rendercolor).g;
  (dst->rendercolor).b = (src->rendercolor).b;
  dst->renderfx = src->renderfx;
  dst->framerate = src->framerate;
  dst->body = src->body;
  *(undefined4 *)dst->controller = *(undefined4 *)src->controller;
  *(undefined2 *)dst->blending = *(undefined2 *)src->blending;
  dst->basevelocity[0] = src->basevelocity[0];
  dst->basevelocity[1] = src->basevelocity[1];
  dst->basevelocity[2] = src->basevelocity[2];
  dst->friction = src->friction;
  dst->gravity = src->gravity;
  dst->gaitsequence = src->gaitsequence;
  dst->spectator = src->spectator;
  dst->usehull = src->usehull;
  dst->playerclass = src->playerclass;
  dst->team = src->team;
  dst->colormap = src->colormap;
  dst->iuser4 = src->iuser4;
  pcVar1 = (*gEngfuncs.GetLocalPlayer)();
  if (dst->number == pcVar1->index) {
    DAT_10190a10 = dst->playerclass;
    DAT_10190b24 = dst->team;
    DAT_10190b18 = src->iuser1;
    DAT_10190b20 = src->iuser2;
    DAT_10190b1c = src->iuser3;
    lVar2 = __ftol();
    _DAT_10190b14 = (undefined4)lVar2;
  }
  return;
}

/* 1001bb00  HUD_TxferPredictionData  (463 bytes)
 * void HUD_TxferPredictionData(entity_state_t * ps, entity_state_t * pps, clientdata_t * pcd, clientdata_t * ppcd, weapon_data_t * wd, weapon_data_t * pwd)
 */
void __cdecl
HUD_TxferPredictionData
          (entity_state_t *ps,entity_state_t *pps,clientdata_t *pcd,clientdata_t *ppcd,
          weapon_data_t *wd,weapon_data_t *pwd)

{
  int iVar1;
  
                    /* 0x1bb00  493  HUD_TxferPredictionData */
  ps->oldbuttons = pps->oldbuttons;
  ps->flFallVelocity = pps->flFallVelocity;
  ps->iStepLeft = pps->iStepLeft;
  ps->playerclass = pps->playerclass;
  pcd->viewmodel = ppcd->viewmodel;
  pcd->m_iId = ppcd->m_iId;
  pcd->ammo_shells = ppcd->ammo_shells;
  pcd->ammo_nails = ppcd->ammo_nails;
  pcd->ammo_cells = ppcd->ammo_cells;
  pcd->ammo_rockets = ppcd->ammo_rockets;
  pcd->m_flNextAttack = ppcd->m_flNextAttack;
  pcd->fov = ppcd->fov;
  pcd->weaponanim = ppcd->weaponanim;
  pcd->tfstate = ppcd->tfstate;
  pcd->maxspeed = ppcd->maxspeed;
  iVar1 = ppcd->deadflag;
  pcd->deadflag = iVar1;
  if ((ppcd->iuser1 != 0) || (DAT_100936a4 = 0, iVar1 == 0)) {
    DAT_100936a4 = 1;
  }
  pcd->iuser1 = ppcd->iuser1;
  pcd->iuser2 = ppcd->iuser2;
  pcd->iuser3 = ppcd->iuser3;
  iVar1 = (*gEngfuncs.IsSpectateOnly)();
  if (iVar1 != 0) {
    pcd->iuser1 = DAT_10190b18;
    pcd->iuser2 = DAT_10190b20;
    pcd->iuser3 = DAT_10190b1c;
  }
  pcd->iuser4 = ppcd->iuser4;
  pcd->fuser2 = ppcd->fuser2;
  pcd->fuser3 = ppcd->fuser3;
  pcd->vuser1[0] = ppcd->vuser1[0];
  pcd->vuser1[1] = ppcd->vuser1[1];
  pcd->vuser1[2] = ppcd->vuser1[2];
  pcd->vuser2[0] = ppcd->vuser2[0];
  pcd->vuser2[1] = ppcd->vuser2[1];
  pcd->vuser2[2] = ppcd->vuser2[2];
  pcd->vuser3[0] = ppcd->vuser3[0];
  pcd->vuser3[1] = ppcd->vuser3[1];
  pcd->vuser3[2] = ppcd->vuser3[2];
  pcd->vuser4[0] = ppcd->vuser4[0];
  pcd->vuser4[1] = ppcd->vuser4[1];
  pcd->vuser4[2] = ppcd->vuser4[2];
  for (iVar1 = 0x2c0; iVar1 != 0; iVar1 = iVar1 + -1) {
    wd->m_iId = pwd->m_iId;
    pwd = (weapon_data_t *)&pwd->m_iClip;
    wd = (weapon_data_t *)&wd->m_iClip;
  }
  return;
}

/* 1001bce0  HUD_CreateEntities  (22 bytes)
 * void HUD_CreateEntities(void)
 */
void HUD_CreateEntities(void)

{
  undefined *puVar1;
  
                    /* 0x1bce0  472  HUD_CreateEntities */
  FUN_1001bcd0();
  FUN_10003440();
  puVar1 = FUN_10017570();
  FUN_10017f30((int)puVar1);
  return;
}

/* 1001bd00  HUD_TempEntUpdate  (2201 bytes)
 * void HUD_TempEntUpdate(double frametime, double client_time, double cl_gravity, tempent_s * * ppTempEntFree, tempent_s * * ppTempEntActive, Callback_AddVisibleEntity * Callback_AddVisibleEntity, Callback_TempEntPlaySound * Callback_TempEntPlaySound)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
HUD_TempEntUpdate(double frametime,double client_time,double cl_gravity,tempent_s **ppTempEntFree,
                 tempent_s **ppTempEntActive,Callback_AddVisibleEntity *Callback_AddVisibleEntity,
                 Callback_TempEntPlaySound *Callback_TempEntPlaySound)

{
  vec_t *pos;
  float fVar1;
  uint uVar2;
  float fVar3;
  tempent_s *ent;
  tempent_s **pptVar4;
  tempent_s *ptVar5;
  cl_entity_s *pcVar6;
  vec_t *pvVar7;
  physent_s *ppVar8;
  _func_620 *p_Var9;
  dlight_s *pdVar10;
  int iVar11;
  pmtrace_s *ptr;
  tempent_s *ptVar12;
  float10 fVar13;
  float10 fVar14;
  longlong lVar15;
  vec_t unaff_retaddr;
  tempent_s **in_stack_0000002c;
  code *in_stack_00000030;
  code *in_stack_00000034;
  float fVar16;
  float fVar17;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  tempent_s *ptStack_88;
  float fStack_84;
  float fStack_80;
  vec_t vStack_7c;
  undefined8 uStack_78;
  vec_t vStack_70;
  pmtrace_s pStack_60;
  float fStack_10;
  
                    /* 0x1bd00  491  HUD_TempEntUpdate */
  if (*ppTempEntActive != (tempent_s *)0x0) {
    _DAT_100963ec = (float)cl_gravity;
    fVar3 = DAT_100963e8 * (float)frametime;
    (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
    (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
    (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)(-1);
    DAT_100d608c = DAT_100d608c + 1 & 0x1f;
    ptVar12 = *ppTempEntActive;
    if (0.0 < (double)CONCAT44(cl_gravity._0_4_,client_time._4_4_)) {
      ptStack_88 = (tempent_s *)0x0;
      fStack_84 = (float)((float10)(double)CONCAT44(ppTempEntFree,cl_gravity._4_4_) * (float10)5.5);
      fVar13 = -((float10)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) *
                (float10)(double)CONCAT44(Callback_AddVisibleEntity,ppTempEntActive));
      fVar1 = (float)fVar13;
      fStack_80 = (float)(fVar13 * (float10)0.5);
      pptVar4 = ppTempEntActive;
      ptVar5 = ptStack_88;
      while (ent = ptVar12, ptStack_88 = ptVar5, ent != (tempent_s *)0x0) {
        ptVar12 = ent->next;
        if (0.0 <= ent->die - (float)(double)CONCAT44(ppTempEntFree,cl_gravity._4_4_)) {
LAB_1001be8f:
          pos = (ent->entity).origin;
          (ent->entity).prevstate.origin[0] = (ent->entity).origin[0];
          (ent->entity).prevstate.origin[1] = (ent->entity).origin[1];
          (ent->entity).prevstate.origin[2] = (ent->entity).origin[2];
          ptStack_88 = ent;
          if ((ent->flags & 0x20000U) == 0) {
            uVar2 = ent->flags;
            if ((uVar2 & 0x8000) == 0) {
              if ((uVar2 & 1) == 0) {
                if ((uVar2 & 0x400) == 0) {
                  iVar11 = 3;
                  pvVar7 = pos;
                  do {
                    iVar11 = iVar11 + -1;
                    *pvVar7 = pvVar7[-0x2cc] *
                              (float)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) + *pvVar7;
                    pvVar7 = pvVar7 + 1;
                  } while (iVar11 != 0);
                  goto LAB_1001c0ac;
                }
                fVar13 = (float10)fsin((float10)(double)CONCAT44(ppTempEntFree,cl_gravity._4_4_) *
                                       (float10)20.0 + (float10)(int)ent);
                *pos = (float)((float10)(ent->entity).baseline.origin[0] *
                               (float10)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) +
                               fVar13 * (float10)8.0 + (float10)*pos);
                fVar13 = (float10)fsin((float10)(double)CONCAT44(ppTempEntFree,cl_gravity._4_4_) *
                                       (float10)30.0 + (float10)(int)ent);
                (ent->entity).origin[1] =
                     (float)((float10)(ent->entity).baseline.origin[1] *
                             (float10)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) +
                             fVar13 * (float10)4.0 + (float10)(ent->entity).origin[1]);
              }
              else {
                fVar13 = (float10)(ent->entity).baseline.origin[0] *
                         (float10)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) +
                         (float10)ent->x;
                ent->x = (float)fVar13;
                ent->y = (ent->entity).baseline.origin[1] *
                         (float)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) + ent->y;
                fVar14 = (float10)fsin((float10)(ent->entity).prevstate.frame *
                                       (float10)(double)CONCAT44(ppTempEntFree,cl_gravity._4_4_) +
                                       (float10)(ent->entity).baseline.origin[2]);
                *pos = (float)(fVar13 + (float10)(ent->entity).curstate.framerate * (float10)10.0 *
                                        fVar14);
                fVar13 = (float10)fsin((float10)fStack_84 +
                                       (float10)(ent->entity).baseline.origin[2] + (float10)0.7);
                (ent->entity).origin[1] =
                     (float)((float10)(ent->entity).curstate.framerate * (float10)8.0 * fVar13 +
                            (float10)ent->y);
              }
              (ent->entity).origin[2] =
                   (ent->entity).baseline.origin[2] *
                   (float)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) +
                   (ent->entity).origin[2];
            }
            else {
              pcVar6 = (*gEngfuncs.GetEntityByIndex)((int)ent->clientIndex);
              *pos = pcVar6->origin[0] + ent->tentOffset[0];
              (ent->entity).origin[1] = pcVar6->origin[1] + ent->tentOffset[1];
              (ent->entity).origin[2] = pcVar6->origin[2] + ent->tentOffset[2];
            }
          }
          else if ((ent->entity).baseline.scale <
                   (float)(double)CONCAT44(ppTempEntFree,cl_gravity._4_4_)) {
            (*(gEngfuncs.pEfxAPI)->R_SparkEffect)(pos,8,-200,200);
            fVar16 = (ent->entity).baseline.framerate - 0.1;
            (ent->entity).baseline.framerate = fVar16;
            if (0.0 < fVar16) {
              ent->die = (float)((float10)(double)CONCAT44(in_stack_0000002c,
                                                           Callback_TempEntPlaySound) + (float10)0.5
                                );
              (ent->entity).baseline.scale =
                   (float)((float10)(double)CONCAT44(in_stack_0000002c,Callback_TempEntPlaySound) +
                          (float10)0.1);
            }
            else {
              ent->die = (float)(double)CONCAT44(in_stack_0000002c,Callback_TempEntPlaySound);
            }
          }
LAB_1001c0ac:
          if ((ent->flags & 0x100U) == 0) {
            if (((ent->flags & 0x800U) != 0) &&
               (fVar13 = (float10)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) *
                         (float10)10.0 + (float10)(ent->entity).curstate.frame,
               (ent->entity).curstate.frame = (float)fVar13, (float10)ent->frameMax <= fVar13)) {
              lVar15 = __ftol();
              (ent->entity).curstate.frame = (ent->entity).curstate.frame - (float)(int)lVar15;
            }
LAB_1001c154:
            if ((ent->flags & 4) != 0) {
              (ent->entity).angles[0] =
                   (ent->entity).baseline.angles[0] *
                   (float)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) +
                   (ent->entity).angles[0];
              (ent->entity).angles[1] =
                   (ent->entity).baseline.angles[1] *
                   (float)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) +
                   (ent->entity).angles[1];
              (ent->entity).angles[2] =
                   (ent->entity).baseline.angles[2] *
                   (float)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) +
                   (ent->entity).angles[2];
              (ent->entity).latched.prevangles[0] = (ent->entity).angles[0];
              (ent->entity).latched.prevangles[1] = (ent->entity).angles[1];
              (ent->entity).latched.prevangles[2] = (ent->entity).angles[2];
            }
            uVar2 = ent->flags;
            if ((uVar2 & 0x1020) != 0) {
              if ((uVar2 & 0x1000) == 0) {
                if ((uVar2 & 0x20) != 0) {
                  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
                  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
                            ((ent->entity).prevstate.origin,pos,10,-1,
                             (pmtrace_s *)&pStack_60.plane.dist);
                  if (fStack_10 != 1.0) {
                    fStack_80 = fStack_10;
                    vStack_7c = unaff_retaddr;
                    uStack_78 = (double)fVar3;
                    if ((ent->flags & 0x20000U) != 0) {
                      pvVar7 = (ent->entity).baseline.origin;
                      FUN_100583e0(pvVar7,0.6,pvVar7);
                      fVar13 = FUN_10058390(pvVar7);
                      if (fVar13 < (float10)10.0) {
                        (ent->entity).baseline.framerate = 0.0;
                      }
                    }
                    p_Var9 = ent->hitcallback;
                    if (p_Var9 != (_func_620 *)0x0) {
                      ptr = (pmtrace_s *)&pStack_60.hitgroup;
                      goto LAB_1001c328;
                    }
                    goto LAB_1001c32f;
                  }
                }
              }
              else {
                (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
                (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
                          ((ent->entity).prevstate.origin,pos,2,-1,(pmtrace_s *)&uStack_78);
                if ((float)pStack_60.inwater != 1.0) {
                  ppVar8 = (*(gEngfuncs.pEventAPI)->EV_GetPhysent)((int)pStack_60.plane.dist);
                  if ((pStack_60.ent == 0) || (ppVar8->info != (int)ent->clientIndex)) {
                    p_Var9 = ent->hitcallback;
                    vStack_7c = pStack_60.fraction;
                    uStack_78 = (double)CONCAT44(pStack_60.plane.normal[1],pStack_60.plane.normal[0]
                                                );
                    vStack_70 = pStack_60.plane.normal[2];
                    if (p_Var9 != (_func_620 *)0x0) {
                      ptr = &pStack_60;
                      uStack_78 = (double)CONCAT44(pStack_60.plane.normal[1],
                                                   pStack_60.plane.normal[0]);
LAB_1001c328:
                      (*p_Var9)(ent,ptr);
                    }
LAB_1001c32f:
                    if (fStack_98 != 1.0) {
                      pvVar7 = (ent->entity).baseline.origin;
                      FUN_10058410((ent->entity).prevstate.origin,
                                   fStack_98 *
                                   (float)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_),
                                   pvVar7,pos);
                      fVar16 = ent->bounceFactor;
                      if (((((ent->flags & 10) != 0) && (fVar16 = fVar16 * 0.25, 0.9 < fStack_8c))
                          && ((ent->entity).baseline.origin[2] <= 0.0)) &&
                         (fVar1 * 3.0 <= (ent->entity).baseline.origin[2])) {
                        fVar16 = 0.0;
                        ent->flags = ent->flags & 0xffffffc1;
                        (ent->entity).angles[0] = 0.0;
                        (ent->entity).angles[2] = 0.0;
                      }
                      FUN_100569a0((int)ent);
                      fVar17 = fVar16;
                      if (ent->hitSound != 0) {
                        (*in_stack_00000034)(ent,fVar16);
                      }
                      if ((ent->flags & 0x4000U) == 0) {
                        if (fVar17 != 0.0) {
                          FUN_10058410(pvVar7,(fStack_94 * *pvVar7 +
                                              fStack_8c * (ent->entity).baseline.origin[2] +
                                              fStack_90 * (ent->entity).baseline.origin[1]) * -2.0,
                                       &fStack_94,pvVar7);
                          (ent->entity).angles[1] = -(ent->entity).angles[1];
                        }
                        if (fVar17 != 1.0) {
                          FUN_100583e0(pvVar7,fVar16,pvVar7);
                          pvVar7 = (ent->entity).angles;
                          FUN_100583e0(pvVar7,0.9,pvVar7);
                        }
                      }
                      else {
                        ent->die = (float)(double)CONCAT44(ppTempEntFree,cl_gravity._4_4_);
                        ent->flags = ent->flags & 0xffffff7f;
                      }
                    }
                  }
                }
              }
            }
            if (((ent->flags & 0x40) != 0) && (DAT_100d608c == (ent->entity).curstate.effects)) {
              pdVar10 = (*(gEngfuncs.pEfxAPI)->CL_AllocDlight)(0);
              pdVar10->origin[0] = *pos;
              pdVar10->origin[1] = (ent->entity).origin[1];
              pdVar10->origin[2] = (ent->entity).origin[2];
              pdVar10->radius = 60.0;
              pdVar10->die = (float)((float10)(double)CONCAT44(ppTempEntActive,ppTempEntFree) +
                                    (float10)0.01);
              (pdVar10->color).r = 0xff;
              (pdVar10->color).g = 'x';
              (pdVar10->color).b = '\0';
            }
            if ((ent->flags & 0x10) != 0) {
              (*(gEngfuncs.pEfxAPI)->R_RocketTrail)((ent->entity).prevstate.origin,pos,1);
            }
            fVar16 = fVar1;
            if (((ent->flags & 2U) != 0) || (fVar16 = fStack_80, (ent->flags & 8U) != 0)) {
              (ent->entity).baseline.origin[2] = fVar16 + (ent->entity).baseline.origin[2];
            }
            if (((ent->flags & 0x80000U) != 0) && (ent->callback != (_func_621 *)0x0)) {
              (*ent->callback)(ent,(float)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_),
                               (float)(double)CONCAT44(ppTempEntFree,cl_gravity._4_4_));
            }
            pptVar4 = in_stack_0000002c;
            ptVar5 = ptStack_88;
            if ((ent->flags & 0x40000U) == 0) {
              iVar11 = (*in_stack_00000030)(&ent->entity);
              ptVar5 = ptStack_88;
              if ((iVar11 == 0) && ((ent->flags & 0x2000U) == 0)) {
                ent->die = (float)(double)CONCAT44(ppTempEntActive,ppTempEntFree);
                ent->flags = ent->flags & 0xffffff7f;
              }
            }
          }
          else {
            fVar16 = (ent->entity).curstate.framerate *
                     (float)(double)CONCAT44(cl_gravity._0_4_,client_time._4_4_) +
                     (ent->entity).curstate.frame;
            (ent->entity).curstate.frame = fVar16;
            if (fVar16 < ent->frameMax) goto LAB_1001c154;
            lVar15 = __ftol();
            uVar2 = ent->flags;
            (ent->entity).curstate.frame = (ent->entity).curstate.frame - (float)(int)lVar15;
            if ((uVar2 & 0x10000) != 0) goto LAB_1001c154;
            ent->die = (float)(double)CONCAT44(ppTempEntFree,cl_gravity._4_4_);
            pptVar4 = in_stack_0000002c;
            ptVar5 = ptStack_88;
          }
        }
        else {
          if ((ent->flags & 0x80) != 0) {
            if ((ent->entity).curstate.rendermode == 0) {
              (ent->entity).curstate.rendermode = 2;
            }
            lVar15 = __ftol();
            (ent->entity).curstate.renderamt = (int)lVar15;
            if (0 < (int)lVar15) goto LAB_1001be8f;
          }
          ent->next = *(tempent_s **)Callback_TempEntPlaySound;
          *(tempent_s **)Callback_TempEntPlaySound = ent;
          if (ptVar5 == (tempent_s *)0x0) {
            *pptVar4 = ptVar12;
            pptVar4 = in_stack_0000002c;
            ptVar5 = ptStack_88;
          }
          else {
            ptVar5->next = ptVar12;
            pptVar4 = in_stack_0000002c;
            ptVar5 = ptStack_88;
          }
        }
      }
    }
    else if (ptVar12 != (tempent_s *)0x0) {
      do {
        if ((ptVar12->flags & 0x40000U) == 0) {
          (*in_stack_00000030)(&ptVar12->entity);
        }
        ptVar12 = ptVar12->next;
      } while (ptVar12 != (tempent_s *)0x0);
      (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
      return;
    }
    (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  }
  return;
}

/* 1001f3f0  HUD_GetStudioModelInterface  (51 bytes)
 * int HUD_GetStudioModelInterface(int version, r_studio_interface_s * * ppinterface, engine_studio_api_s * pstudio)
 */
int __cdecl
HUD_GetStudioModelInterface
          (int version,r_studio_interface_s **ppinterface,engine_studio_api_s *pstudio)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x1f3f0  478  HUD_GetStudioModelInterface */
  if (version != 1) {
    return 0;
  }
  *ppinterface = (r_studio_interface_s *)&DAT_10093700;
  puVar2 = &DAT_100ea7c0;
  for (iVar1 = 0x2b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = pstudio->Mem_Calloc;
    pstudio = (engine_studio_api_s *)&pstudio->Cache_Check;
    puVar2 = puVar2 + 1;
  }
  FUN_1001f3e0();
  return 1;
}

/* 10024c80  CAM_Think  (1489 bytes)
 * void CAM_Think(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAM_Think(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  float local_28;
  float fStack_24;
  float local_18;
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x24c80  464  CAM_Think */
  lVar6 = __ftol();
  if ((int)lVar6 == 1) {
    FUN_1004fe00();
  }
  else if ((int)lVar6 == 2) {
    FUN_10025320();
  }
  if (DAT_100df390 != 0) {
    local_18 = *(float *)(DAT_100df364 + 0xc);
    local_14 = *(float *)(DAT_100df2f4 + 0xc);
    local_28 = *(float *)(DAT_100df300 + 0xc);
    if ((DAT_100df2dc != 0) && (GetCursorPos((LPPOINT)&DAT_100df308), DAT_100df354 == 0)) {
      iVar3 = (*gEngfuncs.GetWindowCenterX)();
      if (iVar3 < DAT_100df308) {
        if (local_14 < *(float *)(DAT_100df310 + 0xc)) {
          iVar3 = (*gEngfuncs.GetWindowCenterX)();
          fStack_24 = (float)((DAT_100df308 - iVar3) / 2);
          local_14 = (float)(int)fStack_24 * 0.5 + local_14;
        }
        if (*(float *)(DAT_100df310 + 0xc) < local_14) {
          local_14 = *(float *)(DAT_100df310 + 0xc);
        }
      }
      else {
        iVar3 = (*gEngfuncs.GetWindowCenterX)();
        if (DAT_100df308 < iVar3) {
          if (*(float *)(DAT_100df2d0 + 0xc) < local_14) {
            iVar3 = (*gEngfuncs.GetWindowCenterX)();
            fStack_24 = (float)((iVar3 - DAT_100df308) / 2);
            local_14 = local_14 - (float)(int)fStack_24 * 0.5;
          }
          if (local_14 < *(float *)(DAT_100df2d0 + 0xc)) {
            local_14 = *(float *)(DAT_100df2d0 + 0xc);
          }
        }
      }
      iVar3 = (*gEngfuncs.GetWindowCenterY)();
      if (iVar3 < DAT_100df30c) {
        if (local_18 < *(float *)(DAT_100df324 + 0xc)) {
          iVar3 = (*gEngfuncs.GetWindowCenterY)();
          fStack_24 = (float)((DAT_100df30c - iVar3) / 2);
          local_18 = (float)(int)fStack_24 * 0.5 + local_18;
        }
        if (*(float *)(DAT_100df324 + 0xc) < local_18) {
          local_18 = *(float *)(DAT_100df324 + 0xc);
        }
      }
      else {
        iVar3 = (*gEngfuncs.GetWindowCenterY)();
        if (DAT_100df30c < iVar3) {
          if (*(float *)(DAT_100df2fc + 0xc) < local_18) {
            iVar3 = (*gEngfuncs.GetWindowCenterY)();
            fStack_24 = (float)((iVar3 - DAT_100df30c) / 2);
            local_18 = local_18 - (float)(int)fStack_24 * 0.5;
          }
          if (local_18 < *(float *)(DAT_100df2fc + 0xc)) {
            local_18 = *(float *)(DAT_100df2fc + 0xc);
          }
        }
      }
      fVar5 = FUN_10020a90(0x100cf920);
      if (fVar5 == (float10)0.0) {
        _DAT_100df2e4 = DAT_100df308;
        _DAT_100df2e0 = DAT_100df30c;
      }
      else {
        lVar6 = __ftol();
        _DAT_100df2e4 = (int)lVar6;
        lVar6 = __ftol();
        _DAT_100df2e0 = (int)lVar6;
      }
      iVar3 = (*gEngfuncs.GetWindowCenterY)();
      iVar4 = (*gEngfuncs.GetWindowCenterX)();
      SetCursorPos(iVar4,iVar3);
    }
    fVar5 = FUN_100262b0(0x100df338);
    if (fVar5 == (float10)0.0) {
      fVar5 = FUN_100262b0(0x100df370);
      if (fVar5 != (float10)0.0) {
        local_18 = local_18 - 2.5;
      }
    }
    else {
      local_18 = local_18 + 2.5;
    }
    fVar5 = FUN_100262b0(0x100df2e8);
    if (fVar5 == (float10)0.0) {
      fVar5 = FUN_100262b0(0x100df348);
      if (fVar5 != (float10)0.0) {
        local_14 = local_14 + 2.5;
      }
    }
    else {
      local_14 = local_14 - 2.5;
    }
    fVar5 = FUN_100262b0(0x100df380);
    if (fVar5 == (float10)0.0) {
      fVar5 = FUN_100262b0(0x100df328);
      if (fVar5 != (float10)0.0) {
        local_28 = local_28 + 1.0;
      }
    }
    else {
      local_28 = local_28 - 1.0;
      if (local_28 < 30.0) {
        local_18 = 0.0;
        local_14 = 0.0;
        local_28 = 30.0;
      }
    }
    if (DAT_100df354 != 0) {
      iVar3 = (*gEngfuncs.GetWindowCenterY)();
      if (iVar3 < DAT_100df30c) {
        if (local_28 < *(float *)(DAT_100df2f8 + 0xc)) {
          iVar3 = (*gEngfuncs.GetWindowCenterY)();
          fStack_24 = (float)((DAT_100df30c - iVar3) / 2);
          local_28 = (float)(int)fStack_24 + local_28;
        }
        if (*(float *)(DAT_100df2f8 + 0xc) < local_28) {
          local_28 = *(float *)(DAT_100df2f8 + 0xc);
        }
      }
      else {
        iVar3 = (*gEngfuncs.GetWindowCenterY)();
        if (DAT_100df30c < iVar3) {
          if (*(float *)(DAT_100df38c + 0xc) < local_28) {
            iVar3 = (*gEngfuncs.GetWindowCenterY)();
            fStack_24 = (float)((iVar3 - DAT_100df30c) / 2);
            local_28 = local_28 - (float)(int)fStack_24;
          }
          if (local_28 < *(float *)(DAT_100df38c + 0xc)) {
            local_28 = *(float *)(DAT_100df38c + 0xc);
          }
        }
      }
      FUN_10020a90(0x100cf920);
      lVar6 = __ftol();
      _DAT_100df2e4 = (int)lVar6;
      FUN_10020a90(0x100cf920);
      lVar6 = __ftol();
      _DAT_100df2e0 = (int)lVar6;
      iVar3 = (*gEngfuncs.GetWindowCenterY)();
      iVar4 = (*gEngfuncs.GetWindowCenterX)();
      SetCursorPos(iVar4,iVar3);
    }
    *(float *)(DAT_100df364 + 0xc) = local_18;
    *(float *)(DAT_100df2f4 + 0xc) = local_14;
    *(float *)(DAT_100df300 + 0xc) = local_28;
    fVar2 = DAT_100df320;
    fVar1 = DAT_100df31c;
    fStack_10 = DAT_100df320;
    (*gEngfuncs.GetViewAngles)(&fStack_c);
    if (*(float *)(DAT_100df2d8 + 0xc) == 0.0) {
      if (fVar2 - fStack_4 != *(float *)(DAT_100df2f4 + 0xc)) {
        fVar5 = FUN_10024ba0(fVar2,fStack_4 + *(float *)(DAT_100df2f4 + 0xc));
        fStack_10 = (float)fVar5;
      }
      fVar5 = (float10)fVar1;
      if (fVar5 - (float10)fStack_8 != (float10)*(float *)(DAT_100df364 + 0xc)) {
        fVar5 = FUN_10024ba0(fVar1,fStack_8 + *(float *)(DAT_100df364 + 0xc));
      }
    }
    else {
      fStack_10 = fStack_4 + *(float *)(DAT_100df2f4 + 0xc);
      fVar5 = (float10)fStack_8 + (float10)*(float *)(DAT_100df364 + 0xc);
    }
    DAT_100df318 = (float)fVar5;
    DAT_100df31c = fStack_10;
    DAT_100df320 = fStack_24;
  }
  return;
}

/* 10025720  CL_CameraOffset  (31 bytes)
 * void CL_CameraOffset(float * ofs)
 * called by: FUN_10067890
 */
void __cdecl CL_CameraOffset(float *ofs)

{
                    /* 0x25720  465  CL_CameraOffset */
  *ofs = DAT_100df318;
  ofs[1] = DAT_100df31c;
  ofs[2] = DAT_100df320;
  return;
}

/* 10025880  KB_Find  (50 bytes)
 * void * KB_Find(char * name)
 * called by: FUN_100258c0
 */
void * __thiscall KB_Find(void *this,char *name)

{
  undefined4 *puVar1;
  uint uVar2;
  void *extraout_ECX;
  
  puVar1 = DAT_100df5c8;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (void *)0x0;
    }
    uVar2 = FUN_10076d90(this,(byte_conflict *)name,(byte_conflict *)(puVar1 + 2));
    if (uVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
    this = extraout_ECX;
  }
  return (void *)puVar1[1];
}

/* 10025a80  HUD_Key_Event  (572 bytes)
 * int HUD_Key_Event(int eventcode, int keynum, char * pszCurrentBinding)
 */
int __cdecl HUD_Key_Event(int eventcode,int keynum,char *pszCurrentBinding)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
                    /* 0x25a80  481  HUD_Key_Event */
  if ((eventcode != 0) && (keynum == 0x61)) {
    FUN_1004f220(&DAT_100d0ca0,0xb);
  }
  iVar2 = 1;
  if (pszCurrentBinding != (char *)0x0) {
    pcVar3 = s__attack_1009408c;
    pbVar6 = (byte *)pszCurrentBinding;
    do {
      bVar1 = *pcVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10025adb:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10025ae0;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10025adb;
      pcVar3 = pcVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10025ae0:
    if (iVar4 != 0) {
      pcVar3 = s__attack2_10094080;
      pbVar6 = (byte *)pszCurrentBinding;
      do {
        bVar1 = *pcVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_10025b13:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_10025b18;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_10025b13;
        pcVar3 = pcVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10025b18:
      if (iVar4 != 0) {
        pbVar5 = &DAT_10094078;
        pbVar6 = (byte *)pszCurrentBinding;
        do {
          bVar1 = *pbVar5;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_10025b4b:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_10025b50;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_10025b4b;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_10025b50:
        if (iVar4 != 0) {
          pcVar3 = s__reload_10094070;
          pbVar6 = (byte *)pszCurrentBinding;
          do {
            bVar1 = *pcVar3;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_10025b83:
              iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_10025b88;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar3[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_10025b83;
            pcVar3 = pcVar3 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_10025b88:
          if (iVar4 != 0) {
            pcVar3 = s__forward_10094064;
            pbVar6 = (byte *)pszCurrentBinding;
            do {
              bVar1 = *pcVar3;
              bVar7 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) {
LAB_10025bbb:
                iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                goto LAB_10025bc0;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar3[1];
              bVar7 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_10025bbb;
              pcVar3 = pcVar3 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_10025bc0:
            if (iVar4 != 0) {
              pbVar5 = &DAT_1009405c;
              pbVar6 = (byte *)pszCurrentBinding;
              do {
                bVar1 = *pbVar5;
                bVar7 = bVar1 < *pbVar6;
                if (bVar1 != *pbVar6) {
LAB_10025bf3:
                  iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                  goto LAB_10025bf8;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar7 = bVar1 < pbVar6[1];
                if (bVar1 != pbVar6[1]) goto LAB_10025bf3;
                pbVar5 = pbVar5 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_10025bf8:
              if (iVar4 != 0) {
                pcVar3 = s__moveleft_10094050;
                pbVar6 = (byte *)pszCurrentBinding;
                do {
                  bVar1 = *pcVar3;
                  bVar7 = bVar1 < *pbVar6;
                  if (bVar1 != *pbVar6) {
LAB_10025c2b:
                    iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                    goto LAB_10025c30;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar3[1];
                  bVar7 = bVar1 < pbVar6[1];
                  if (bVar1 != pbVar6[1]) goto LAB_10025c2b;
                  pcVar3 = pcVar3 + 2;
                  pbVar6 = pbVar6 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_10025c30:
                if (iVar4 != 0) {
                  pcVar3 = s__moveright_10094044;
                  pbVar6 = (byte *)pszCurrentBinding;
                  do {
                    bVar1 = *pcVar3;
                    bVar7 = bVar1 < *pbVar6;
                    if (bVar1 != *pbVar6) {
LAB_10025c5f:
                      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                      goto LAB_10025c64;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar3[1];
                    bVar7 = bVar1 < pbVar6[1];
                    if (bVar1 != pbVar6[1]) goto LAB_10025c5f;
                    pcVar3 = pcVar3 + 2;
                    pbVar6 = pbVar6 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_10025c64:
                  if (iVar4 != 0) {
                    pbVar5 = &DAT_1009403c;
                    pbVar6 = (byte *)pszCurrentBinding;
                    do {
                      bVar1 = *pbVar5;
                      bVar7 = bVar1 < *pbVar6;
                      if (bVar1 != *pbVar6) {
LAB_10025c93:
                        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                        goto LAB_10025c98;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar5[1];
                      bVar7 = bVar1 < pbVar6[1];
                      if (bVar1 != pbVar6[1]) goto LAB_10025c93;
                      pbVar5 = pbVar5 + 2;
                      pbVar6 = pbVar6 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_10025c98:
                    if (iVar4 != 0) goto LAB_10025ca1;
                  }
                }
              }
            }
          }
        }
      }
    }
    DAT_100df5cc = 1;
  }
LAB_10025ca1:
  if (DAT_100d5cb0 != (void *)0x0) {
    iVar2 = FUN_10064b90(DAT_100d5cb0,eventcode,keynum,(byte_conflict *)pszCurrentBinding);
  }
  return iVar2;
}

/* 10026570  CL_CreateMove  (725 bytes)
 * void CL_CreateMove(float frametime, usercmd_s * cmd, int active)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl CL_CreateMove(float frametime,usercmd_s *cmd,int active)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  usercmd_s *puVar6;
  float10 fVar7;
  float10 extraout_ST0;
  vec_t unaff_retaddr;
  float local_c;
  vec_t vStack_8;
  vec_t vStack_4;
  
                    /* 0x26570  466  CL_CreateMove */
  if ((DAT_100df3cc & 1) == 0) {
    DAT_100df3cc = DAT_100df3cc | 1;
    FUN_1006af63(0x10026850);
  }
  if (active != 0) {
    (*gEngfuncs.GetViewAngles)(&local_c);
    FUN_10026330((float)cmd,&vStack_8);
    puVar6 = cmd;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar6->lerp_msec = 0;
      puVar6->msec = '\0';
      puVar6->pad1 = '\0';
      puVar6 = (usercmd_s *)puVar6->viewangles;
    }
    (*gEngfuncs.SetViewAngles)(&vStack_8);
    if ((DAT_100df530 & 1) != 0) {
      fVar7 = FUN_100262b0(0x100df4b0);
      cmd->sidemove =
           (float)(fVar7 * (float10)*(float *)(DAT_100df548 + 0xc) + (float10)cmd->sidemove);
      fVar7 = FUN_100262b0(0x100df4a0);
      cmd->sidemove =
           (float)((float10)cmd->sidemove - fVar7 * (float10)*(float *)(DAT_100df548 + 0xc));
    }
    fVar7 = FUN_100262b0(0x100df538);
    cmd->sidemove =
         (float)(fVar7 * (float10)*(float *)(DAT_100df548 + 0xc) + (float10)cmd->sidemove);
    fVar7 = FUN_100262b0(0x100df4d8);
    cmd->sidemove =
         (float)((float10)cmd->sidemove - fVar7 * (float10)*(float *)(DAT_100df548 + 0xc));
    fVar7 = FUN_100262b0(0x100df3f8);
    cmd->upmove = (float)(fVar7 * (float10)*(float *)(DAT_100df5a4 + 0xc) + (float10)cmd->upmove);
    fVar7 = FUN_100262b0(0x100df420);
    cmd->upmove = (float)((float10)cmd->upmove - fVar7 * (float10)*(float *)(DAT_100df5a4 + 0xc));
    if ((DAT_100df5c0 & 1) == 0) {
      fVar7 = FUN_100262b0(0x100df488);
      cmd->forwardmove =
           (float)(fVar7 * (float10)*(float *)(DAT_100df418 + 0xc) + (float10)cmd->forwardmove);
      fVar7 = FUN_100262b0(0x100df568);
      cmd->forwardmove =
           (float)((float10)cmd->forwardmove - fVar7 * (float10)*(float *)(DAT_100df584 + 0xc));
    }
    if ((DAT_100df3e0 & 1) != 0) {
      cmd->forwardmove = *(float *)(DAT_100df3e4 + 0xc) * cmd->forwardmove;
      cmd->sidemove = *(float *)(DAT_100df3e4 + 0xc) * cmd->sidemove;
      cmd->upmove = *(float *)(DAT_100df3e4 + 0xc) * cmd->upmove;
    }
    (*gEngfuncs.GetClientMaxspeed)();
    if ((extraout_ST0 != (float10)0.0) &&
       (fVar1 = SQRT(cmd->sidemove * cmd->sidemove +
                     cmd->upmove * cmd->upmove + cmd->forwardmove * cmd->forwardmove),
       (float)extraout_ST0 < fVar1)) {
      fVar1 = (float)extraout_ST0 / fVar1;
      cmd->forwardmove = fVar1 * cmd->forwardmove;
      cmd->sidemove = fVar1 * cmd->sidemove;
      cmd->upmove = fVar1 * cmd->upmove;
    }
    FUN_100282e0((float)cmd,(int)cmd);
  }
  cmd->impulse = DAT_100df5c4;
  _DAT_100df5c4 = 0;
  cmd->weaponselect = DAT_100cf848;
  _DAT_100cf848 = 0;
  uVar3 = FUN_10026870(1);
  cmd->buttons = (uint16_t)uVar3;
  puVar4 = FUN_10017570();
  cVar2 = FUN_100188b0((int)puVar4);
  if (cVar2 != '\0') {
    cmd->buttons = cmd->buttons & 0xfffe;
  }
  if (*(float *)(DAT_100df620 + 0xc) != 0.0) {
    if (cmd->forwardmove <= 0.0) {
      if (cmd->forwardmove < 0.0) {
        *(byte *)&cmd->buttons = (byte)cmd->buttons | 0x10;
      }
    }
    else {
      *(byte *)&cmd->buttons = (byte)cmd->buttons | 8;
    }
  }
  (*gEngfuncs.GetViewAngles)(&local_c);
  if (DAT_100936a4 == 0) {
    cmd->viewangles[0] = DAT_100df578;
    cmd->viewangles[1] = DAT_100df57c;
    cmd->viewangles[2] = DAT_100df580;
    return;
  }
  cmd->viewangles[0] = vStack_8;
  cmd->viewangles[1] = vStack_4;
  cmd->viewangles[2] = unaff_retaddr;
  DAT_100df578 = vStack_8;
  DAT_100df57c = vStack_4;
  DAT_100df580 = unaff_retaddr;
  return;
}

/* 10027260  IN_ActivateMouse  (51 bytes)
 * void IN_ActivateMouse(void)
 */
void IN_ActivateMouse(void)

{
                    /* 0x27260  498  IN_ActivateMouse */
  if (DAT_100df5d0 != 0) {
    if (DAT_100df640 != 0) {
      DAT_100df6ec = SystemParametersInfoA(4,0,&DAT_1009447c,0);
    }
    DAT_100df700 = 1;
  }
  return;
}

/* 100272a0  IN_DeactivateMouse  (46 bytes)
 * void IN_DeactivateMouse(void)
 */
void IN_DeactivateMouse(void)

{
                    /* 0x272a0  500  IN_DeactivateMouse */
  if (DAT_100df5d0 != 0) {
    if (DAT_100df6ec != 0) {
      SystemParametersInfoA(4,0,&DAT_100df668,0);
    }
    DAT_100df700 = 0;
  }
  return;
}

/* 100273d0  IN_MouseEvent  (242 bytes)
 * void IN_MouseEvent(int mstate)
 */
void __cdecl IN_MouseEvent(int mstate)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  
                    /* 0x273d0  501  IN_MouseEvent */
  if ((DAT_100df394 == 0) && (DAT_100df714 == 0)) {
    iVar4 = 0;
    if (0 < DAT_100df6f8) {
      do {
        uVar3 = 1 << ((byte)iVar4 & 0x1f);
        if (((uVar3 & mstate) != 0) && ((DAT_100df6f0 & uVar3) == 0)) {
          (*gEngfuncs.Key_Event)(iVar4 + 0xf1,1);
        }
        if (((uVar3 & mstate) == 0) && ((DAT_100df6f0 & uVar3) != 0)) {
          (*gEngfuncs.Key_Event)(iVar4 + 0xf1,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_100df6f8);
    }
    DAT_100df6f0 = mstate;
    return;
  }
  if (((*(int *)(DAT_100d5cb0 + 0xa9c) == 0) &&
      (cVar1 = (**(code **)(**(int **)(DAT_100d5cb0 + 0xaa0) + 0x28))(), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(**(int **)(DAT_100d5cb0 + 0xad0) + 0x28))(), cVar1 == '\0')) {
    puVar2 = FUN_10017570();
    cVar1 = FUN_100188b0((int)puVar2);
    if (((cVar1 == '\0') && (*(int *)(DAT_100d5cb0 + 0xad4) == 0)) &&
       (cVar1 = FUN_100361f0(&DAT_100d1460), cVar1 != '\0')) {
      FUN_10038360(&DAT_100d1460,mstate);
    }
  }
  return;
}

/* 100278b0  IN_Accumulate  (114 bytes)
 * void IN_Accumulate(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void IN_Accumulate(void)

{
  int iVar1;
  
                    /* 0x278b0  497  IN_Accumulate */
  if (((DAT_100df394 == 0) && (DAT_100df714 == 0)) && (DAT_100df700 != 0)) {
    GetCursorPos((LPPOINT)&DAT_100df698);
    iVar1 = (*gEngfuncs.GetWindowCenterX)();
    _DAT_100df70c = (float)(DAT_100df698 - iVar1) + _DAT_100df70c;
    iVar1 = (*gEngfuncs.GetWindowCenterY)();
    _DAT_100df63c = (float)(DAT_100df69c - iVar1) + _DAT_100df63c;
    FUN_100273b0();
  }
  return;
}

/* 10027930  IN_ClearStates  (40 bytes)
 * void IN_ClearStates(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void IN_ClearStates(void)

{
                    /* 0x27930  499  IN_ClearStates */
  if (DAT_100df700 != 0) {
    _DAT_100df70c = 0;
    _DAT_100df63c = 0;
    DAT_100df6f0 = 0;
  }
  return;
}

/* 10034e40  HUD_DrawNormalTriangles  (10 bytes)
 * void HUD_DrawNormalTriangles(void)
 */
void HUD_DrawNormalTriangles(void)

{
                    /* 0x34e40  474  HUD_DrawNormalTriangles */
  FUN_10024970(0x100cfff8);
  return;
}

/* 100447f0  HUD_AddEntity  (854 bytes)
 * int HUD_AddEntity(int type, cl_entity_t * ent, char * modelname)
 */
int __cdecl HUD_AddEntity(int type,cl_entity_t *ent,char *modelname)

{
  vec_t *pvVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
                    /* 0x447f0  470  HUD_AddEntity */
  if (type == 1) {
    uVar3 = FUN_10057790((int)ent);
    if ((char)uVar3 == '\0') {
      return 0;
    }
    bVar2 = FUN_10057330((int)ent);
    if (!bVar2) {
      return 0;
    }
    iVar6 = ent->index;
    if ((-1 < iVar6) && (iVar6 < 0x22)) {
      if ((&DAT_101900ec)[iVar6] != 0) {
        return 0;
      }
      *(undefined1 *)((int)&DAT_1018bd44 + iVar6) = 1;
      (&DAT_100d5810)[ent->index] = 1;
    }
    goto LAB_10044af9;
  }
  uVar3 = (ent->curstate).iuser4;
  if ((uVar3 & 1) == 0) {
    if ((uVar3 & 4) == 0) {
      if ((uVar3 & 2) != 0) {
        pvVar1 = ent->origin;
        uVar4 = FUN_10057910(pvVar1,0x400);
        if ((char)uVar4 != '\0') {
          return 0;
        }
        uVar4 = FUN_100570b0(pvVar1);
        if ((char)uVar4 == '\0') {
          return 0;
        }
        pfVar5 = (float *)FUN_10057270(local_c);
        local_24 = *pvVar1 - *pfVar5;
        local_20 = ent->origin[1] - pfVar5[1];
        local_1c = ent->origin[2] - pfVar5[2];
        local_14 = local_20;
        local_10 = local_1c;
        fVar7 = FUN_10058390(&local_24);
        if (((float10)824.0 < fVar7) && (0x4f < DAT_100cf978)) {
          (ent->curstate).renderfx = 0;
          (ent->curstate).rendermode = 1;
          goto LAB_10044ac3;
        }
      }
    }
    else {
      pvVar1 = ent->origin;
      uVar4 = FUN_10057910(pvVar1,0x100);
      if ((char)uVar4 != '\0') {
        return 0;
      }
      uVar4 = FUN_100570b0(pvVar1);
      if ((char)uVar4 == '\0') {
        return 0;
      }
      pfVar5 = (float *)FUN_10057270(local_c);
      local_24 = *pvVar1 - *pfVar5;
      local_20 = ent->origin[1] - pfVar5[1];
      local_1c = ent->origin[2] - pfVar5[2];
      local_14 = local_20;
      local_10 = local_1c;
      fVar7 = FUN_10058390(&local_24);
      if (((float10)206.0 < fVar7) && (0x4f < DAT_100cf978)) {
        (ent->curstate).renderfx = 0;
        (ent->curstate).rendermode = 1;
        goto LAB_10044ac3;
      }
    }
  }
  else {
    pvVar1 = ent->origin;
    uVar4 = FUN_10057910(pvVar1,0x250);
    if ((char)uVar4 != '\0') {
      return 0;
    }
    uVar4 = FUN_100570b0(pvVar1);
    if ((char)uVar4 == '\0') {
      return 0;
    }
    pfVar5 = (float *)FUN_10057270(local_c);
    local_18 = *pvVar1 - *pfVar5;
    local_20 = ent->origin[1] - pfVar5[1];
    local_1c = ent->origin[2] - pfVar5[2];
    local_14 = local_20;
    local_10 = local_1c;
    fVar7 = FUN_10058390(&local_18);
    if (((float10)492.0 < fVar7) && (0x4f < DAT_100cf978)) {
      (ent->curstate).renderfx = 0;
      (ent->curstate).rendermode = 1;
LAB_10044ac3:
      lVar8 = __ftol();
      (ent->curstate).renderamt = (int)lVar8;
    }
  }
  if (((ent->curstate).iuser4 & 8) != 0) {
    if (DAT_1018ca59 == '\0') {
      iVar6 = FUN_10056fc0(ent->origin);
    }
    else {
      iVar6 = 0;
    }
    (ent->curstate).body = iVar6;
  }
LAB_10044af9:
  if (DAT_10190b18 != 0) {
    FUN_100249f0(&DAT_100cfff8,type,&ent->index);
    if (((DAT_10190b18 == 5) || (DAT_100d000c == 2)) && (ent->index == DAT_10190b20)) {
      return 0;
    }
  }
  return 1;
}

/* 10044b50  HUD_StudioEvent  (158 bytes)
 * void HUD_StudioEvent(mstudioevent_s * event, cl_entity_t * entity)
 */
void __thiscall HUD_StudioEvent(void *this,mstudioevent_s *event,cl_entity_t *entity)

{
  _func_657 **pp_Var1;
  int iVar2;
  longlong lVar3;
  int velocityMin;
  int velocityMax;
  
                    /* 0x44b50  490  HUD_StudioEvent */
  if (event->event == 0x138a) {
    velocityMax = 100;
    velocityMin = -100;
    pp_Var1 = &(gEngfuncs.pEfxAPI)->R_SparkEffect;
    iVar2 = FUN_1006c042(this,(byte_conflict *)event->options);
    (**pp_Var1)(entity->attachment[0],iVar2,velocityMin,velocityMax);
  }
  else if (event->event == 0x138c) {
    iVar2 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar3 = __ftol();
    (*(gEngfuncs.pEventAPI)->EV_PlaySound)
              (entity->index,entity->attachment[0],4,event->options,1.0,0.8,0,
               iVar2 + (0x19 - (int)lVar3));
    return;
  }
  return;
}

/* 1004eeb0  HUD_GetUserEntity  (3 bytes)
 * cl_entity_t * HUD_GetUserEntity(int index)
 * called by: FUN_1004eec0, FUN_1004eef0, FUN_1004ef20
 */
cl_entity_t * HUD_GetUserEntity(int index)

{
                    /* 0x4eeb0  479  HUD_GetUserEntity */
  return (cl_entity_t *)0x0;
}

/* 1004fec0  CL_IsThirdPerson  (14 bytes)
 * int CL_IsThirdPerson(void)
 * called by: FUN_10066e70, FUN_10067890
 */
int CL_IsThirdPerson(void)

{
                    /* 0x4fec0  467  CL_IsThirdPerson */
  return (uint)(DAT_100df390 != 0);
}

/* 1006158d  Catch@1006158d  (19 bytes)
 * undefined4 Catch@1006158d(void)
 */
undefined4 Catch_1006158d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0xc4) = 0;
  return 0x10060d96;
}

/* 10069b90  V_CalcRefdef  (676 bytes)
 * void V_CalcRefdef(ref_params_t * pparams)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl V_CalcRefdef(ref_params_t *pparams)

{
  longlong lVar1;
  screenfade_s local_18;
  
                    /* 0x69b90  504  V_CalcRefdef */
  DAT_10191478 = pparams->frametime;
  if (pparams->intermission == 0) {
    if ((pparams->spectator == 0) && (DAT_10190b18 == 0)) {
      if (pparams->paused == 0) {
        FUN_10067890(pparams->vieworg);
      }
    }
    else {
      FUN_10068f70(pparams->vieworg);
    }
  }
  else {
    FUN_100676e0(pparams->vieworg);
  }
  (*gEngfuncs.pfnGetScreenFade)(&local_18);
  if ((*(float *)(DAT_101914e0 + 0xc) == 0.0) || (1.0 <= DAT_100963e8)) {
    DAT_101914c8 = 0;
    DAT_101914c9 = '\0';
    DAT_101914ca = '\0';
    DAT_101914cb = '\0';
  }
  else {
    DAT_101914c8 = 0;
    DAT_101914c9 = 'd';
    DAT_101914ca = '}';
    lVar1 = __ftol();
    DAT_101914cb = (byte_conflict)lVar1;
  }
  _DAT_101914cc = 5;
  if ((pparams->time <= _DAT_10190b5c) ||
     (_DAT_10190b5c + (float)(DAT_101914a8 & 0xffff) * 0.00024414062 <= pparams->time)) {
    local_18.fader = '\0';
    local_18.fadeg = DAT_101914c9;
    local_18.fadeb = DAT_101914ca;
    local_18.fadealpha = DAT_101914cb;
  }
  else {
    lVar1 = __ftol();
    local_18.fader = (byte_conflict)lVar1;
    lVar1 = __ftol();
    local_18.fadeg = (byte_conflict)lVar1;
    lVar1 = __ftol();
    local_18.fadeb = (byte_conflict)lVar1;
    lVar1 = __ftol();
    local_18.fadealpha = (byte_conflict)lVar1;
  }
  local_18.fadeFlags = 5;
  (*gEngfuncs.pfnSetScreenFade)(&local_18);
  FUN_10056c20();
  return;
}

/* 1006ad1c  __ftol  (39 bytes)
 * longlong __ftol(void)
 * called by: CAM_Think, FUN_10003830, FUN_10010440, FUN_10010630, FUN_100108b0, FUN_10010bd0, FUN_10011a60, FUN_10019180, FUN_1001a710, FUN_1001a7b0, FUN_1001b047, FUN_1001b360, ... (104 total)
 */
/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}

/* 1006ad95  __exit  (17 bytes)
 * void __exit(int _Code)
 * called by: FUN_100742ee, FUN_10075dc7, __amsg_exit
 */
/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_1006adb5(_Code,1,0);
  return;
}

/* 1006ae86  operator_new  (14 bytes)
 * void * operator_new(uint param_1)
 * called by: FUN_100174c0, FUN_1001c850, FUN_1001c900, FUN_100206c0, FUN_10021d90, FUN_10021e10, FUN_10022380, FUN_10022b80, FUN_100507e0, FUN_10058880, FUN_1005a170, FUN_1005a620, ... (53 total)
 */
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}

/* 1006b28c  __global_unwind2  (32 bytes)
 * undefined __global_unwind2(PVOID param_1)
 */
/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1006b2a4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

/* 1006b2ce  __local_unwind2  (104 bytes)
 * undefined __local_unwind2(int param_1, int param_2)
 * called by: FUN_100730a1
 */
/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_1006b2ac;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1006b362();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

/* 1006b336  __abnormal_termination  (35 bytes)
 * int __abnormal_termination(void)
 * called by: FUN_1006e43f
 */
/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_1006b2ac) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}

/* 1006b359  __NLG_Notify1  (9 bytes)
 * undefined __NLG_Notify1(undefined4 param_1)
 * called by: __CallSettingFrame@12
 */
/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_100973cc = param_1;
  DAT_100973c8 = in_EAX;
  DAT_100973d0 = unaff_EBP;
  return;
}

/* 1006b3ab  __fclose_lk  (76 bytes)
 * undefined4 __fclose_lk(FILE * param_1)
 * called by: FUN_1006b37a
 */
/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_1006ec38((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_1006eaff(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_1006c158(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}

/* 1006bd60  _strncpy  (254 bytes)
 * char * _strncpy(char * _Dest, char * _Source, size_t _Count)
 * called by: FUN_1001b360, FUN_100206c0, FUN_10028760, FUN_1002eb40, FUN_1002ed00, FUN_1002f480, FUN_1002f850, FUN_1004b0e0, FUN_1004b520, FUN_10058880, FUN_1005a250, FUN_1005c300, ... (24 total)
 */
/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1006bd9e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1006bddb;
        goto LAB_1006be49;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x1006be45:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1006be49:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1006bddb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1006be45;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1006be45;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1006be45;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1006bd9e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1006bddb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}

/* 1006be60  _strncat  (291 bytes)
 * char * _strncat(char * _Dest, char * _Source, size_t _Count)
 * called by: FUN_1001b360, FUN_10028760, FUN_10064f60
 */
/* Library Function - Single Match
    _strncat
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)_Dest;
  if (_Count == 0) {
    return _Dest;
  }
  do {
    if (((uint)puVar5 & 3) == 0) goto LAB_1006be8a;
    uVar4 = *puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1006bebb;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar6 = (uint *)((int)puVar6 + 2);
      goto LAB_1006becb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1006be8a:
    do {
      puVar6 = puVar5;
      puVar5 = puVar6 + 1;
    } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar6;
    if ((char)uVar4 == '\0') goto LAB_1006becb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar6 = (uint *)((int)puVar6 + 1);
      goto LAB_1006becb;
    }
  }
LAB_1006bebb:
  puVar6 = (uint *)((int)puVar5 + -1);
LAB_1006becb:
  if (((uint)_Source & 3) == 0) {
    uVar3 = _Count >> 2;
  }
  else {
    do {
      bVar1 = (byte)*(uint *)_Source;
      uVar4 = (uint)bVar1;
      _Source = (char *)((int)_Source + 1);
      if (bVar1 == 0) goto LAB_1006bf1a;
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      _Count = _Count - 1;
      if (_Count == 0) goto LAB_1006bf10;
    } while (((uint)_Source & 3) != 0);
    uVar3 = _Count >> 2;
  }
  do {
    if (uVar3 == 0) {
      for (uVar4 = _Count & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar3 = *(uint *)_Source;
        _Source = (char *)((int)_Source + 1);
        *(byte *)puVar6 = (byte)uVar3;
        puVar6 = (uint *)((int)puVar6 + 1);
        if ((byte)uVar3 == 0) {
          return _Dest;
        }
      }
LAB_1006bf10:
      *(byte *)puVar6 = 0;
      return _Dest;
    }
    uVar2 = *(uint *)_Source;
    uVar4 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_1006bf1a:
        *(byte *)puVar6 = (byte)uVar4;
        return _Dest;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar6 = (short)uVar4;
        return _Dest;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar6 = (short)uVar4;
        *(byte *)((int)puVar6 + 2) = 0;
        return _Dest;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar6 = uVar4;
        return _Dest;
      }
    }
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
    uVar3 = uVar3 - 1;
  } while( true );
}

/* 1006c05a  _rand  (34 bytes)
 * int _rand(void)
 * called by: FUN_10028d40
 */
/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_1006e7e1();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}

/* 1006c1a0  _strncmp  (56 bytes)
 * int _strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * called by: FUN_10020670, FUN_10060c70
 */
/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}

/* 1006c1d8  _malloc  (18 bytes)
 * void * _malloc(size_t _Size)
 * called by: FUN_10020a40, FUN_10025740, FUN_100258c0, FUN_1003a860, FUN_100667e0, FUN_1006dcfb, FUN_1006dd71, FUN_1006edc6, FUN_1006f875, FUN_100730bc, FUN_10073175, FUN_100733c2, ... (20 total)
 */
/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10191ea0);
  return pvVar1;
}

/* 1006c1ea  __nh_malloc  (44 bytes)
 * void * __nh_malloc(size_t _Size, int _NhFlag)
 * called by: _malloc, operator_new
 */
/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_1006c216((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10072686(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}

/* 1006cdd5  entry  (157 bytes)
 * int entry(undefined4 param_1, int param_2, undefined4 param_3)
 */
int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10191e18;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1006ce1d;
    if ((DAT_101934e8 != (code *)0x0) &&
       (iVar2 = (*DAT_101934e8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1006ccfc(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1006ce1d:
  iVar2 = FUN_100734f4();
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1006ccfc(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1006ccfc(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_101934e8 != (code *)0x0) {
      iVar2 = (*DAT_101934e8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}

/* 1006ce72  __amsg_exit  (48 bytes)
 * void __amsg_exit(int param_1)
 * called by: FUN_1006dcfb, FUN_1006e7e1, FUN_1006edc6, FUN_100730bc, FUN_10073175, FUN_100774cb, __fptrap
 */
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10191e24 == 1) || ((DAT_10191e24 == 0 && (DAT_10191e28 == 1)))) {
    FUN_100734fa();
  }
  FUN_10073533(param_1);
  (*(code *)PTR___exit_10097690)(0xff);
  return;
}

/* 1006d900  __fassign  (62 bytes)
 * void __fassign(int flag, char * argument, char * number)
 */
/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_10073ed7(in_ECX,(uint *)&local_c,(byte_conflict *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_10073f04(in_ECX,(uint *)&number,(byte_conflict *)number);
  *(char **)argument = number;
  return;
}

/* 1006dbf0  __cfltcvt  (81 bytes)
 * errno_t __cfltcvt(double * arg, char * buffer, size_t sizeInBytes, int format, int precision, int caps)
 */
/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_1006d93e(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_1006da61(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_1006db5d(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}

/* 1006e710  __CallSettingFrame@12  (76 bytes)
 * undefined __CallSettingFrame@12(undefined4 param_1, undefined4 param_2, int param_3)
 * called by: FUN_1006b06b, FUN_1006e243
 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}

/* 1006ebdf  __freebuf  (43 bytes)
 * void __freebuf(FILE * _File)
 * called by: __fclose_lk
 */
/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_1006c158(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}

/* 1006fbb0  _strlen  (123 bytes)
 * size_t _strlen(char * _Str)
 * called by: FUN_1006b918, FUN_1006bf83, FUN_1006cfbd, FUN_1006dc41, FUN_100730bc, FUN_10073533, FUN_10073f31, FUN_1007514b, FUN_10076d06, FUN_100772ec, FUN_100775c9
 */
/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_1006fbd0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1006fc03:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1006fbd0:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_1006fc03;
}

/* 1006fc30  __cintrindisp2  (62 bytes)
 * undefined __cintrindisp2(undefined4 param_1, int param_2)
 * called by: FUN_1006b9aa
 */
/* Library Function - Single Match
    __cintrindisp2
   
   Library: Visual Studio */

void __fastcall __cintrindisp2(undefined4 param_1,int param_2)

{
  __trandisp2(param_1,param_2);
  FUN_1006fcfa();
  return;
}

/* 1006fc6e  __cintrindisp1  (61 bytes)
 * undefined __cintrindisp1(undefined4 param_1, int param_2)
 */
/* Library Function - Single Match
    __cintrindisp1
   
   Library: Visual Studio */

void __fastcall __cintrindisp1(undefined4 param_1,int param_2)

{
  __trandisp1(param_1,param_2);
  FUN_1006fcfa();
  return;
}

/* 1006fcab  __ctrandisp2  (72 bytes)
 * undefined __ctrandisp2(uint param_1, int param_2, uint param_3, int param_4)
 */
/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2(extraout_ECX,extraout_EDX);
  FUN_1006fcf3();
  return;
}

/* 1006fe2b  __ctrandisp1  (51 bytes)
 * undefined __ctrandisp1(uint param_1, int param_2)
 */
/* Library Function - Single Match
    __ctrandisp1
   
   Library: Visual Studio */

void __cdecl __ctrandisp1(uint param_1,int param_2)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __trandisp1(extraout_ECX,extraout_EDX);
  FUN_1006fcf3();
  return;
}

/* 1006fe5e  __fload  (60 bytes)
 * float10 __fload(uint param_1, int param_2)
 * called by: __ctrandisp1, __ctrandisp2
 */
/* Library Function - Single Match
    __fload
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

float10 __cdecl __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}

/* 1006fea0  __trandisp1  (103 bytes)
 * undefined __trandisp1(undefined4 param_1, int param_2)
 * called by: __cintrindisp1, __ctrandisp1
 */
/* Library Function - Single Match
    __trandisp1
   
   Library: Visual Studio */

void __fastcall __trandisp1(undefined4 param_1,int param_2)

{
  float10 fVar1;
  byte bVar2;
  undefined2 uVar3;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar3 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar3 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar3;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  bVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x1006ff05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)(&DAT_10097bbc)[(byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0')] + 0x10
              ))();
  return;
}

/* 1006ff07  __trandisp2  (140 bytes)
 * undefined __trandisp2(undefined4 param_1, int param_2)
 * called by: __cintrindisp2, __ctrandisp2
 */
/* Library Function - Single Match
    __trandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __fastcall __trandisp2(undefined4 param_1,int param_2)

{
  float10 fVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar1) << 9 | (ushort)(in_ST1 != fVar1) << 10 |
       (ushort)(in_ST1 == fVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  cVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x1006ff91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)((&DAT_10097bbc)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                               (&DAT_10097bbc)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2)
              + 0x10))();
  return;
}

/* 10070e00  _strcmp  (129 bytes)
 * int _strcmp(char * _Str1, char * _Str2)
 * called by: FUN_1006e1e6, FUN_1007514b
 */
/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_10070e44;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10070e10;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10070e44;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10070e44;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10070e10:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_10070e44:
  return (uint)bVar5 * -2 + 1;
}

/* 100719a0  __allmul  (52 bytes)
 * longlong __allmul(uint param_1, int param_2, uint param_3, int param_4)
 * called by: FUN_10070ee8
 */
/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}

/* 100728d7  __startOneArgErrorHandling  (60 bytes)
 * float10 __startOneArgErrorHandling(undefined4 param_1, uint param_2, ushort param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * called by: FUN_1006c6cd, FUN_1006c9cd, FUN_10072a09, __math_exit
 */
/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,uint param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  FUN_10074e9a(param_2,&local_24,&param_3);
  return (float10)local_c;
}

/* 10072965  __fload_withFB  (67 bytes)
 * uint __fload_withFB(undefined4 param_1, int param_2)
 * called by: FUN_1006c4b2
 */
/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}

/* 100729cb  __math_exit  (42 bytes)
 * undefined __math_exit(undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: FUN_1006c6cd, FUN_1006c9cd
 */
/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __fastcall
__math_exit(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
           )

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
    return;
  }
  return;
}

/* 100737c0  __aulldiv  (104 bytes)
 * undefined8 __aulldiv(uint param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_1006cfbd
 */
/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}

/* 10073830  __aullrem  (117 bytes)
 * undefined8 __aullrem(uint param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_1006cfbd
 */
/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}

/* 100741b0  _memset  (88 bytes)
 * void * _memset(void * _Dst, int _Val, size_t _Size)
 * called by: FUN_1006dab6, FUN_10070ee8, FUN_10072e90, FUN_10074261, FUN_100763ba
 */
/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}

/* 10074208  __fptrap  (9 bytes)
 * void __fptrap(void)
 * called by: FUN_1006cfbd, FUN_10070ee8
 */
/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}

/* 10075090  __allshl  (31 bytes)
 * longlong __allshl(byte.conflict param_1, int param_2)
 * called by: FUN_10070ee8
 */
/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall __allshl(byte_conflict param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}

/* 10075823  __frnd  (18 bytes)
 * float10 __frnd(double param_1)
 * called by: FUN_10072bdc
 */
/* Library Function - Single Match
    __frnd
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

float10 __cdecl __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}

/* 10075fa7  ___add_12  (94 bytes)
 * undefined ___add_12(uint * param_1, uint * param_2)
 * called by: FUN_10076060, FUN_10076127
 */
/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10075f86(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_10075f86(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_10075f86(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_10075f86(param_1[2],param_2[2],param_1 + 2);
  return;
}

/* 10076fc2  __mbsnbicoll  (63 bytes)
 * int __mbsnbicoll(uchar * _Str1, uchar * _Str2, size_t _MaxCount)
 * called by: FUN_10076d06, FUN_10077473
 */
/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_1007706f(DAT_10192384,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_1019215c);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}

/* 10077740  Unwind@10077740  (11 bytes)
 * undefined Unwind@10077740(void)
 */
void Unwind_10077740(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x14));
  return;
}

/* 10077760  Unwind@10077760  (11 bytes)
 * undefined Unwind@10077760(void)
 */
void Unwind_10077760(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x40));
  return;
}

/* 10077780  Unwind@10077780  (11 bytes)
 * undefined Unwind@10077780(void)
 */
void Unwind_10077780(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x50));
  return;
}

/* 100777a0  Unwind@100777a0  (11 bytes)
 * undefined Unwind@100777a0(void)
 */
void Unwind_100777a0(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x50));
  return;
}

/* 100777c0  Unwind@100777c0  (11 bytes)
 * undefined Unwind@100777c0(void)
 */
void Unwind_100777c0(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 0x14));
  return;
}

/* 100777cb  Unwind@100777cb  (11 bytes)
 * undefined Unwind@100777cb(void)
 */
void Unwind_100777cb(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 0x14));
  return;
}

/* 100777d6  Unwind@100777d6  (11 bytes)
 * undefined Unwind@100777d6(void)
 */
void Unwind_100777d6(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 0x14));
  return;
}

/* 100777e1  Unwind@100777e1  (11 bytes)
 * undefined Unwind@100777e1(void)
 */
void Unwind_100777e1(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 0x14));
  return;
}

/* 100777ec  Unwind@100777ec  (11 bytes)
 * undefined Unwind@100777ec(void)
 */
void Unwind_100777ec(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 8));
  return;
}

/* 100777f7  Unwind@100777f7  (11 bytes)
 * undefined Unwind@100777f7(void)
 */
void Unwind_100777f7(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 0x14));
  return;
}

/* 10077810  Unwind@10077810  (8 bytes)
 * undefined Unwind@10077810(void)
 */
void Unwind_10077810(void)

{
  int unaff_EBP;
  
  FUN_1001aca0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}

/* 10077830  Unwind@10077830  (8 bytes)
 * undefined Unwind@10077830(void)
 */
void Unwind_10077830(void)

{
  int unaff_EBP;
  
  FUN_1001aca0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}

/* 10077838  Unwind@10077838  (14 bytes)
 * undefined Unwind@10077838(void)
 */
void Unwind_10077838(void)

{
  int unaff_EBP;
  
  thunk_FUN_100172c0((LPVOID)(*(int *)(unaff_EBP + -0x10) + 0x177f8));
  return;
}

/* 10077850  Unwind@10077850  (11 bytes)
 * undefined Unwind@10077850(void)
 */
void Unwind_10077850(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x10));
  return;
}

/* 1007785b  Unwind@1007785b  (11 bytes)
 * undefined Unwind@1007785b(void)
 */
void Unwind_1007785b(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x10));
  return;
}

/* 10077866  Unwind@10077866  (11 bytes)
 * undefined Unwind@10077866(void)
 */
void Unwind_10077866(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x10));
  return;
}

/* 10077871  Unwind@10077871  (11 bytes)
 * undefined Unwind@10077871(void)
 */
void Unwind_10077871(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x10));
  return;
}

/* 10077890  Unwind@10077890  (14 bytes)
 * undefined Unwind@10077890(void)
 */
void Unwind_10077890(void)

{
  int unaff_EBP;
  
  FUN_10058590((int *)(*(int *)(unaff_EBP + -0x10) + 0x6fc));
  return;
}

/* 100778b0  Unwind@100778b0  (11 bytes)
 * undefined Unwind@100778b0(void)
 */
void Unwind_100778b0(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x7c));
  return;
}

/* 100778bb  Unwind@100778bb  (14 bytes)
 * undefined Unwind@100778bb(void)
 */
void Unwind_100778bb(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xa4));
  return;
}

/* 100778c9  Unwind@100778c9  (14 bytes)
 * undefined Unwind@100778c9(void)
 */
void Unwind_100778c9(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1a4));
  return;
}

/* 100778d7  Unwind@100778d7  (14 bytes)
 * undefined Unwind@100778d7(void)
 */
void Unwind_100778d7(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1bc));
  return;
}

/* 100778e5  Unwind@100778e5  (14 bytes)
 * undefined Unwind@100778e5(void)
 */
void Unwind_100778e5(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1ec));
  return;
}

/* 100778f3  Unwind@100778f3  (14 bytes)
 * undefined Unwind@100778f3(void)
 */
void Unwind_100778f3(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x208));
  return;
}

/* 10077901  Unwind@10077901  (14 bytes)
 * undefined Unwind@10077901(void)
 */
void Unwind_10077901(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x248));
  return;
}

/* 1007790f  Unwind@1007790f  (14 bytes)
 * undefined Unwind@1007790f(void)
 */
void Unwind_1007790f(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x330));
  return;
}

/* 1007791d  Unwind@1007791d  (14 bytes)
 * undefined Unwind@1007791d(void)
 */
void Unwind_1007791d(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x570));
  return;
}

/* 1007792b  Unwind@1007792b  (14 bytes)
 * undefined Unwind@1007792b(void)
 */
void Unwind_1007792b(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x588));
  return;
}

/* 10077939  Unwind@10077939  (14 bytes)
 * undefined Unwind@10077939(void)
 */
void Unwind_10077939(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x59c));
  return;
}

/* 10077947  Unwind@10077947  (14 bytes)
 * undefined Unwind@10077947(void)
 */
void Unwind_10077947(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x5c0));
  return;
}

/* 10077955  Unwind@10077955  (14 bytes)
 * undefined Unwind@10077955(void)
 */
void Unwind_10077955(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x5ec));
  return;
}

/* 10077963  Unwind@10077963  (14 bytes)
 * undefined Unwind@10077963(void)
 */
void Unwind_10077963(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x600));
  return;
}

/* 10077971  Unwind@10077971  (8 bytes)
 * undefined Unwind@10077971(void)
 */
void Unwind_10077971(void)

{
  int unaff_EBP;
  
  FUN_1001aca0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}

/* 10077979  Unwind@10077979  (14 bytes)
 * undefined Unwind@10077979(void)
 */
void Unwind_10077979(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x6d8));
  return;
}

/* 10077987  Unwind@10077987  (14 bytes)
 * undefined Unwind@10077987(void)
 */
void Unwind_10077987(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1380));
  return;
}

/* 100779a0  Unwind@100779a0  (11 bytes)
 * undefined Unwind@100779a0(void)
 */
void Unwind_100779a0(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x7c));
  return;
}

/* 100779ab  Unwind@100779ab  (14 bytes)
 * undefined Unwind@100779ab(void)
 */
void Unwind_100779ab(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xa4));
  return;
}

/* 100779b9  Unwind@100779b9  (14 bytes)
 * undefined Unwind@100779b9(void)
 */
void Unwind_100779b9(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1a4));
  return;
}

/* 100779c7  Unwind@100779c7  (14 bytes)
 * undefined Unwind@100779c7(void)
 */
void Unwind_100779c7(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1bc));
  return;
}

/* 100779d5  Unwind@100779d5  (14 bytes)
 * undefined Unwind@100779d5(void)
 */
void Unwind_100779d5(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1ec));
  return;
}

/* 100779e3  Unwind@100779e3  (14 bytes)
 * undefined Unwind@100779e3(void)
 */
void Unwind_100779e3(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x208));
  return;
}

/* 100779f1  Unwind@100779f1  (14 bytes)
 * undefined Unwind@100779f1(void)
 */
void Unwind_100779f1(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x248));
  return;
}

/* 100779ff  Unwind@100779ff  (14 bytes)
 * undefined Unwind@100779ff(void)
 */
void Unwind_100779ff(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x330));
  return;
}

/* 10077a0d  Unwind@10077a0d  (14 bytes)
 * undefined Unwind@10077a0d(void)
 */
void Unwind_10077a0d(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x570));
  return;
}

/* 10077a1b  Unwind@10077a1b  (14 bytes)
 * undefined Unwind@10077a1b(void)
 */
void Unwind_10077a1b(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x588));
  return;
}

/* 10077a29  Unwind@10077a29  (14 bytes)
 * undefined Unwind@10077a29(void)
 */
void Unwind_10077a29(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x59c));
  return;
}

/* 10077a37  Unwind@10077a37  (14 bytes)
 * undefined Unwind@10077a37(void)
 */
void Unwind_10077a37(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x5c0));
  return;
}

/* 10077a45  Unwind@10077a45  (14 bytes)
 * undefined Unwind@10077a45(void)
 */
void Unwind_10077a45(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x5ec));
  return;
}

/* 10077a53  Unwind@10077a53  (14 bytes)
 * undefined Unwind@10077a53(void)
 */
void Unwind_10077a53(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x600));
  return;
}

/* 10077a61  Unwind@10077a61  (14 bytes)
 * undefined Unwind@10077a61(void)
 */
void Unwind_10077a61(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x6d8));
  return;
}

/* 10077a6f  Unwind@10077a6f  (14 bytes)
 * undefined Unwind@10077a6f(void)
 */
void Unwind_10077a6f(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1380));
  return;
}

/* 10077a7d  Unwind@10077a7d  (14 bytes)
 * undefined Unwind@10077a7d(void)
 */
void Unwind_10077a7d(void)

{
  int unaff_EBP;
  
  FUN_1001aca0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x4aac));
  return;
}

/* 10077aa0  Unwind@10077aa0  (11 bytes)
 * undefined Unwind@10077aa0(void)
 */
void Unwind_10077aa0(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 4));
  return;
}

/* 10077ac0  Unwind@10077ac0  (14 bytes)
 * undefined Unwind@10077ac0(void)
 */
void Unwind_10077ac0(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x140));
  return;
}

/* 10077ace  Unwind@10077ace  (14 bytes)
 * undefined Unwind@10077ace(void)
 */
void Unwind_10077ace(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x140));
  return;
}

/* 10077adc  Unwind@10077adc  (14 bytes)
 * undefined Unwind@10077adc(void)
 */
void Unwind_10077adc(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x140));
  return;
}

/* 10077aea  Unwind@10077aea  (14 bytes)
 * undefined Unwind@10077aea(void)
 */
void Unwind_10077aea(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x144));
  return;
}

/* 10077af8  Unwind@10077af8  (14 bytes)
 * undefined Unwind@10077af8(void)
 */
void Unwind_10077af8(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x144));
  return;
}

/* 10077b06  Unwind@10077b06  (14 bytes)
 * undefined Unwind@10077b06(void)
 */
void Unwind_10077b06(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x144));
  return;
}

/* 10077b14  Unwind@10077b14  (14 bytes)
 * undefined Unwind@10077b14(void)
 */
void Unwind_10077b14(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x144));
  return;
}

/* 10077b22  Unwind@10077b22  (14 bytes)
 * undefined Unwind@10077b22(void)
 */
void Unwind_10077b22(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x144));
  return;
}

/* 10077b30  Unwind@10077b30  (14 bytes)
 * undefined Unwind@10077b30(void)
 */
void Unwind_10077b30(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x158));
  return;
}

/* 10077b3e  Unwind@10077b3e  (14 bytes)
 * undefined Unwind@10077b3e(void)
 */
void Unwind_10077b3e(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + -0x144));
  return;
}

/* 10077b60  Unwind@10077b60  (11 bytes)
 * undefined Unwind@10077b60(void)
 */
void Unwind_10077b60(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 0xc));
  return;
}

/* 10077b6b  Unwind@10077b6b  (11 bytes)
 * undefined Unwind@10077b6b(void)
 */
void Unwind_10077b6b(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 0xc));
  return;
}

/* 10077b76  Unwind@10077b76  (11 bytes)
 * undefined Unwind@10077b76(void)
 */
void Unwind_10077b76(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 0xc));
  return;
}

/* 10077b81  Unwind@10077b81  (11 bytes)
 * undefined Unwind@10077b81(void)
 */
void Unwind_10077b81(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 0xc));
  return;
}

/* 10077b8c  Unwind@10077b8c  (11 bytes)
 * undefined Unwind@10077b8c(void)
 */
void Unwind_10077b8c(void)

{
  int unaff_EBP;
  
  FUN_1006ad4c(*(LPVOID *)(unaff_EBP + 0xc));
  return;
}

