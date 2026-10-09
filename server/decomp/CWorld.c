/* ts_i386.so - CWorld (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f4450  CWorld::Spawn  (76 bytes)
 * undefined Spawn(void)
 */
/* CWorld::Spawn(void) */

void __thiscall CWorld::Spawn(CWorld *this)

{
  longdouble lVar1;
  
  g_fGameOver = 0;
  (*this->vtable[10])(this);
  lVar1 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("sv_cheats");
  g_flWeaponCheat = (float)lVar1;
  return;
}

/* 000f449c  CWorld::Precache  (1394 bytes)
 * undefined Precache(void)
 */
/* CWorld::Precache(void) */

void __thiscall CWorld::Precache(CWorld *this)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  longdouble extraout_ST0;
  float fVar6;
  uint local_20;
  
  g_pLastSpawn = 0;
  (*g_engfuncs.pfnCVarSetString)("sv_gravity","800");
  (*g_engfuncs.pfnCVarSetString)("sv_stepsize","18");
  (*g_engfuncs.pfnCVarSetString)("room_type","0");
  if (g_pGameRules != (CHalfLifeRules *)0x0) {
    __builtin_delete(g_pGameRules);
  }
  g_pGameRules = InstallGameRules();
  pSoundEnt = GetClassPtr<CSoundEnt>(0);
  (*pSoundEnt->vtable[9])(pSoundEnt);
  if (pSoundEnt == (CSoundEnt *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"**COULD NOT CREATE SOUNDENT**\n");
  }
  InitBodyQue();
  SENTENCEG_Init();
  TEXTURETYPE_Init();
  W_Precache();
  ClientPrecache();
  TSPrecache();
  (*g_engfuncs.pfnPrecacheSound)("common/null.wav");
  (*g_engfuncs.pfnPrecacheSound)("items/suitchargeok1.wav");
  (*g_engfuncs.pfnPrecacheSound)("items/gunpickup2.wav");
  (*g_engfuncs.pfnPrecacheSound)("common/bodydrop3.wav");
  (*g_engfuncs.pfnPrecacheSound)("common/bodydrop4.wav");
  (*g_engfuncs.pfnCVarGetFloat)("sv_language");
  g_Language = (int)ROUND(extraout_ST0);
  if (g_Language == 1) {
    (*g_engfuncs.pfnPrecacheModel)("models/germangibs.mdl");
  }
  else {
    (*g_engfuncs.pfnPrecacheModel)("models/hgibs.mdl");
    (*g_engfuncs.pfnPrecacheModel)("models/agibs.mdl");
  }
  (*g_engfuncs.pfnLightStyle)(0,"m");
  (*g_engfuncs.pfnLightStyle)(1,"mmnmmommommnonmmonqnmmo");
  (*g_engfuncs.pfnLightStyle)(2,"abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba");
  (*g_engfuncs.pfnLightStyle)(3,"mmmmmaaaaammmmmaaaaaabcdefgabcdefg");
  (*g_engfuncs.pfnLightStyle)(4,"mamamamamama");
  (*g_engfuncs.pfnLightStyle)(5,"jklmnopqrstuvwxyzyxwvutsrqponmlkj");
  (*g_engfuncs.pfnLightStyle)(6,"nmonqnmomnmomomno");
  (*g_engfuncs.pfnLightStyle)(7,"mmmaaaabcdefgmmmmaaaammmaamm");
  (*g_engfuncs.pfnLightStyle)(8,"mmmaaammmaaammmabcdefaaaammmmabcdefmmmaaaa");
  (*g_engfuncs.pfnLightStyle)(9,"aaaaaaaazzzzzzzz");
  (*g_engfuncs.pfnLightStyle)(10,"mmamammmmammamamaaamammma");
  (*g_engfuncs.pfnLightStyle)(0xb,"abcdefghijklmnopqrrqponmlkjihgfedcba");
  (*g_engfuncs.pfnLightStyle)(0xc,"mmnnmmnnnmmnn");
  (*g_engfuncs.pfnLightStyle)(0x3f,"a");
  local_20 = 0;
  ppuVar4 = &gDecals;
  ppuVar5 = ppuVar4;
  do {
    puVar1 = (undefined *)(*g_engfuncs.pfnDecalIndex)(*ppuVar4);
    ppuVar5[1] = puVar1;
    puVar1 = (undefined *)(*g_engfuncs.pfnDecalIndex)(ppuVar4[2]);
    ppuVar5[3] = puVar1;
    puVar1 = (undefined *)(*g_engfuncs.pfnDecalIndex)(ppuVar4[4]);
    ppuVar5[5] = puVar1;
    puVar1 = (undefined *)(*g_engfuncs.pfnDecalIndex)(ppuVar4[6]);
    ppuVar5[7] = puVar1;
    puVar1 = (undefined *)(*g_engfuncs.pfnDecalIndex)(ppuVar4[8]);
    ppuVar5[9] = puVar1;
    puVar1 = (undefined *)(*g_engfuncs.pfnDecalIndex)(ppuVar4[10]);
    ppuVar5[0xb] = puVar1;
    puVar1 = (undefined *)(*g_engfuncs.pfnDecalIndex)(ppuVar4[0xc]);
    ppuVar5[0xd] = puVar1;
    ppuVar5 = ppuVar5 + 0xe;
    ppuVar4 = ppuVar4 + 0xe;
    local_20 = local_20 + 7;
  } while (local_20 < 0x2a);
  CGraph::InitGraph();
  iVar2 = CGraph::CheckNODFile();
  if (iVar2 == 0) {
    CGraph::AllocNodes();
  }
  else {
    iVar2 = CGraph::FLoadGraph();
    if (iVar2 == 0) {
      (*g_engfuncs.pfnAlertMessage)(at_console,"*Error opening .NOD file\n");
      CGraph::AllocNodes();
    }
    else {
      (*g_engfuncs.pfnAlertMessage)(at_console,"\n*Graph Loaded!\n");
    }
  }
  if (this->pev->speed <= 0.0) {
    fVar6 = 4096.0;
  }
  else {
    fVar6 = this->pev->speed;
  }
  (*g_engfuncs.pfnCVarSetFloat)("sv_zmax",fVar6);
  if (this->pev->netname != 0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,"Chapter title: %s\n",gpGlobals->pStringBase + this->pev->netname);
    piVar3 = CBaseEntity::Create(0x110114,&g_vecZero,&g_vecZero,0);
    if (piVar3 != (int *)0x0) {
      piVar3[3] = -0x10000;
      piVar3[4] = (int)CBaseEntity::SUB_CallUseToggle;
      *(string_t *)(*piVar3 + 0x1d4) = this->pev->netname;
      this->pev->netname = 0;
      *(float *)(*piVar3 + 0x104) = gpGlobals->time + 0.3;
      *(undefined4 *)(*piVar3 + 0x1a0) = 1;
    }
  }
  if ((this->pev->spawnflags & 1) == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 1.0;
  }
  (*g_engfuncs.pfnCVarSetFloat)("v_dark",fVar6);
  gDisplayTitle = (uint)((this->pev->spawnflags & 2) != 0);
  if ((this->pev->spawnflags & 4) == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 1.0;
  }
  (*g_engfuncs.pfnCVarSetFloat)("mp_defaultteam",fVar6);
  return;
}

/* 000f4a18  CWorld::KeyValue  (890 bytes)
 * undefined KeyValue(int param_1)
 */
/* CWorld::KeyValue(KeyValueData_s *) */

void __thiscall CWorld::KeyValue(CWorld *this,int param_1)

{
  int *piVar1;
  entvars_t *peVar2;
  globalvars_t *pgVar3;
  int iVar4;
  longdouble lVar5;
  
  iVar4 = strcmp(*(char **)(param_1 + 4),"skyname");
  if (iVar4 == 0) {
    (*g_engfuncs.pfnCVarSetString)("sv_skyname",*(char **)(param_1 + 8));
LAB_000f4d8e:
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar4 = strcmp(*(char **)(param_1 + 4),"sounds");
    pgVar3 = gpGlobals;
    if (iVar4 == 0) {
      iVar4 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      pgVar3->cdAudioTrack = iVar4;
    }
    else {
      iVar4 = strcmp(*(char **)(param_1 + 4),"WaveHeight");
      if (iVar4 == 0) {
        peVar2 = this->pev;
        lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        peVar2->scale = (float)(lVar5 * (longdouble)0.125);
        *(undefined4 *)(param_1 + 0xc) = 1;
        (*g_engfuncs.pfnCVarSetFloat)("sv_wateramp",this->pev->scale);
        return;
      }
      iVar4 = strcmp(*(char **)(param_1 + 4),"MaxRange");
      if (iVar4 == 0) {
        peVar2 = this->pev;
        lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        peVar2->speed = (float)lVar5;
      }
      else {
        iVar4 = strcmp(*(char **)(param_1 + 4),"chaptertitle");
        if (iVar4 == 0) {
          iVar4 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
          this->pev->netname = iVar4;
          goto LAB_000f4d8e;
        }
        iVar4 = strcmp(*(char **)(param_1 + 4),"startdark");
        if (iVar4 == 0) {
          iVar4 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
          *(undefined4 *)(param_1 + 0xc) = 1;
          if (iVar4 == 0) {
            return;
          }
          piVar1 = &this->pev->spawnflags;
          *piVar1 = *piVar1 | 1;
          return;
        }
        iVar4 = strcmp(*(char **)(param_1 + 4),"newunit");
        if (iVar4 == 0) {
          iVar4 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
          if (iVar4 != 0) {
            (*g_engfuncs.pfnCVarSetFloat)("sv_newunit",1.0);
          }
        }
        else {
          iVar4 = strcmp(*(char **)(param_1 + 4),"gametitle");
          if (iVar4 == 0) {
            iVar4 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
            if (iVar4 != 0) {
              piVar1 = &this->pev->spawnflags;
              *piVar1 = *piVar1 | 2;
            }
          }
          else {
            iVar4 = strcmp(*(char **)(param_1 + 4),"mapteams");
            if (iVar4 == 0) {
              iVar4 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
              this->pev->team = iVar4;
              if (this->pev->team != 0) {
                CTSGameRules::SetTeamList
                          ((CTSGameRules *)&TSGameRules,gpGlobals->pStringBase + this->pev->team);
              }
            }
            else {
              iVar4 = strcmp(*(char **)(param_1 + 4),"defaultteam");
              if (iVar4 == 0) {
                iVar4 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                if (iVar4 != 0) {
                  piVar1 = &this->pev->spawnflags;
                  *piVar1 = *piVar1 | 4;
                }
              }
              else {
                iVar4 = strcmp(*(char **)(param_1 + 4),"gamemode");
                if (iVar4 != 0) {
                  iVar4 = strcmp(*(char **)(param_1 + 4),"teammodels");
                  if (iVar4 != 0) {
                    *(undefined4 *)(param_1 + 0xc) = 0;
                    return;
                  }
                  strcpy(&g_teamModels,*(char **)(param_1 + 8));
                  goto LAB_000f4d8e;
                }
                g_gamemode = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}

