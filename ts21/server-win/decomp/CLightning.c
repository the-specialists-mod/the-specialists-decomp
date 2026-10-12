/* mp.dll - CLightning (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100168c0  CLightning::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CLightning::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CLightning_10092d64,(int)param_1,0x100929e8,0xd);
  return;
}

/* 100168f0  CLightning::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CLightning::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CLightning_10092d64,(int)param_1,0x100929e8,0xd);
  return;
}

/* 10016920  CLightning::Spawn  (277 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CLightning::Spawn(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1f] == 0) {
    param_1[4] = (int)CBaseEntity::SUB_Remove;
    return;
  }
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  (**(code **)(*param_1 + 0x10))();
  *(float *)(param_1[1] + 0x1e4) = gpGlobals->time;
  if (((float)param_1[0x18] == 0.0) && (iVar1 = param_1[1], (*(byte *)(iVar1 + 0x1a0) & 8) == 0)) {
    param_1[4] = 0;
    if (0.0 < *(float *)(iVar1 + 0x1e0)) {
      param_1[4] = (int)DamageThink;
      *(float *)(iVar1 + 0x104) = gpGlobals->time + 0.1;
    }
    iVar1 = param_1[1];
    if (*(int *)(iVar1 + 0x1cc) != 0) {
      if ((*(byte *)(iVar1 + 0x1a0) & 1) == 0) {
        *(undefined4 *)(iVar1 + 0x118) = 0x80;
        param_1[0x15] = 0;
        *(undefined4 *)(param_1[1] + 0x104) = 0;
        param_1[6] = (int)ToggleUse;
        return;
      }
      param_1[0x15] = 1;
      param_1[6] = (int)ToggleUse;
      return;
    }
  }
  else {
    iVar1 = param_1[1];
    param_1[0x15] = 0;
    if ((*(int *)(iVar1 + 0x1cc) == 0) ||
       ((param_1[6] = (int)StrikeUse, *(int *)(iVar1 + 0x1cc) == 0 ||
        ((*(byte *)(iVar1 + 0x1a0) & 1) != 0)))) {
      param_1[4] = (int)StrikeThink;
      *(float *)(iVar1 + 0x104) = gpGlobals->time + 1.0;
    }
  }
  return;
}

/* 10016a40  CLightning::Precache  (38 bytes)
 * undefined Precache()
 */
void __fastcall CLightning::Precache(void *param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)((int)param_1 + 0x7c));
  *(int *)((int)param_1 + 0x78) = iVar1;
  CBeam::Precache(param_1);
  return;
}

/* 10016a70  CLightning::Activate  (34 bytes)
 * undefined Activate()
 */
void __fastcall CLightning::Activate(void *param_1)

{
  if ((*(float *)((int)param_1 + 0x60) == 0.0) &&
     ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 8) == 0)) {
    BeamUpdateVars(param_1);
    return;
  }
  return;
}

/* 10016aa0  CLightning::KeyValue  (559 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CLightning::KeyValue(CLightning *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  
  pcVar6 = *(char **)(param_1 + 4);
  iVar2 = 0xf;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_LightningStart_10092de4;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x58 = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 0xd;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_LightningEnd_10092dd4;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x5c = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = (undefined1 *)0x5;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = &DAT_10092dcc;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x60 = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = &DAT_0000000a;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_BoltWidth_10092dc0;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x64 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar4 = (void *)0xf;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_NoiseAmplitude_10092db0;
  do {
    if (pvVar4 == (void *)0x0) break;
    pvVar4 = (void *)((int)pvVar4 + -1);
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1006e1dd(pvVar4,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x68 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar4 = (void *)0xe;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_TextureScroll_10092da0;
  do {
    if (pvVar4 == (void *)0x0) break;
    pvVar4 = (void *)((int)pvVar4 + -1);
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1006e1dd(pvVar4,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x70 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = (undefined1 *)0xb;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_StrikeTime_10092d94;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x74 = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 8;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_texture_10092d8c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x7c = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar4 = (void *)0xb;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_framestart_10092d80;
  do {
    if (pvVar4 == (void *)0x0) break;
    pvVar4 = (void *)((int)pvVar4 + -1);
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1006e1dd(pvVar4,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x80 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = &DAT_00000007;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_Radius_10092d78;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x84 = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = &DAT_00000007;
  bVar8 = true;
  pcVar5 = s_damage_10092d70;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar8 = *pcVar6 == *pcVar5;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10016cd0  CLightning::ToggleUse  (173 bytes)
 * void ToggleUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CLightning::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CLightning::ToggleUse
          (CLightning *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
  entvars_t *peVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  
                    /* 0x16cd0  114  ?ToggleUse@CLightning@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar2 = CBaseEntity::ShouldToggle(param_3,*(int *)&this->field_0x54);
  if (iVar2 != 0) {
    peVar1 = this->pev;
    if (*(int *)&this->field_0x54 != 0) {
      *(undefined4 *)&this->field_0x54 = 0;
      peVar1->effects = peVar1->effects | 0x80;
      this->pev->nextthink = 0.0;
      return;
    }
    *(undefined4 *)&this->field_0x54 = 1;
    peVar1->effects = peVar1->effects & 0xffffff7f;
    iVar2 = FUN_10016300((int)this);
    puVar3 = (undefined4 *)FUN_100162c0((int)this);
    FUN_10016860(this,puVar3,iVar2,unaff_ESI);
    if (0.0 < this->pev->dmg) {
      this->pev->nextthink = gpGlobals->time;
      this->pev->dmgtime = gpGlobals->time;
    }
  }
  return;
}

/* 10016d80  CLightning::StrikeUse  (89 bytes)
 * void StrikeUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CLightning::StrikeUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CLightning::StrikeUse
          (CLightning *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
  int iVar1;
  
                    /* 0x16d80  108  ?StrikeUse@CLightning@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = CBaseEntity::ShouldToggle(param_3,*(int *)&this->field_0x54);
  if (iVar1 != 0) {
    if (*(int *)&this->field_0x54 == 0) {
      *(code **)&this->field_0x10 = StrikeThink;
      this->pev->nextthink = gpGlobals->time + 0.1;
    }
    else {
      *(undefined4 *)&this->field_0x54 = 0;
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if ((this->pev->spawnflags & 2) == 0) {
      *(undefined4 *)&this->field_0x18 = 0;
    }
  }
  return;
}

/* 10016e50  CLightning::StrikeThink  (964 bytes)
 * void StrikeThink(void)
 */
/* public: void __thiscall CLightning::StrikeThink(void) */

void __thiscall CLightning::StrikeThink(CLightning *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 extraout_ST0;
  longlong lVar5;
  undefined4 uStack00000004;
  int iStack00000008;
  int iStack0000000c;
  undefined4 uStack00000010;
  undefined4 *in_stack_0000001c;
  
                    /* 0x16e50  107  ?StrikeThink@CLightning@@QAEXXZ */
  if (*(float *)&this->field_0x60 != 0.0) {
    if ((this->pev->spawnflags & 4) == 0) {
      this->pev->nextthink =
           *(float *)&this->field_0x74 + *(float *)&this->field_0x60 + gpGlobals->time;
    }
    else {
      (*g_engfuncs.pfnRandomFloat)(0.0,*(float *)&this->field_0x74);
      this->pev->nextthink =
           (float)(extraout_ST0 + (float10)*(float *)&this->field_0x60 + (float10)gpGlobals->time);
    }
  }
  *(undefined4 *)&this->field_0x54 = 1;
  if (*(int *)&this->field_0x5c == 0) {
    if (*(int *)&this->field_0x58 == 0) {
      FUN_10017490(this);
      return;
    }
    iVar1 = FUN_10016810(gpGlobals->pStringBase + *(int *)&this->field_0x58);
    if (iVar1 == 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,s_env_beam__unknown_entity___s__10092e1c,
                 gpGlobals->pStringBase + *(int *)&this->field_0x58);
      return;
    }
    FUN_10017890(this,(float *)(*(int *)(iVar1 + 4) + 8));
    return;
  }
  iVar2 = FUN_10016810(gpGlobals->pStringBase + *(int *)&this->field_0x58);
  iVar1 = FUN_10016810(gpGlobals->pStringBase + *(int *)&this->field_0x5c);
  if (iVar2 == 0) {
    return;
  }
  if (iVar1 != 0) {
    iVar3 = FUN_10016de0(iVar2);
    if (((iVar3 != 0) || (iVar3 = FUN_10016de0(iVar1), iVar3 != 0)) &&
       ((this->pev->spawnflags & 8) != 0)) {
      return;
    }
    (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
    iVar4 = FUN_10016de0(iVar2);
    iVar3 = iVar2;
    if ((iVar4 == 0) && (iVar4 = FUN_10016de0(iVar1), iVar4 == 0)) {
      if ((this->pev->spawnflags & 8) == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = 0x18;
      }
      (*g_engfuncs.pfnWriteByte)(iVar4);
      iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(iVar2 + 4) + 0x208));
      (*g_engfuncs.pfnWriteShort)(iVar2);
      iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(iVar1 + 4) + 0x208));
      (*g_engfuncs.pfnWriteShort)(iVar2);
    }
    else {
      iVar4 = FUN_10016de0(iVar1);
      if (iVar4 == 0) {
        iVar3 = iVar1;
        iVar1 = iVar2;
      }
      iVar2 = FUN_10016de0(iVar3);
      if (iVar2 == 0) {
        (*g_engfuncs.pfnWriteByte)(1);
        iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(iVar3 + 4) + 0x208));
        (*g_engfuncs.pfnWriteShort)(iVar2);
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 8));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 0xc));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 0x10));
      }
      else {
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar3 + 4) + 8));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar3 + 4) + 0xc));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar3 + 4) + 0x10));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 8));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 0xc));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 0x10));
      }
    }
    (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x78);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x80);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x64);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x68);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x70);
    (*g_engfuncs.pfnMessageEnd)();
    uStack00000010 = 0x100171a5;
    FUN_10016860(this,(undefined4 *)(*(int *)(iVar3 + 4) + 8),*(int *)(iVar1 + 4) + 8,
                 in_stack_0000001c);
    if (0.0 < this->pev->dmg) {
      iStack0000000c = *(int *)(iVar1 + 4) + 8;
      uStack00000010 = 0;
      iStack00000008 = *(int *)(iVar3 + 4) + 8;
      uStack00000004 = 0x100171d9;
      FUN_10067850();
      this->pev->dmg = this->pev->dmg;
      this->pev->dmgtime = gpGlobals->time - 1.0;
      FUN_10017220(this,(int)&stack0x00000028);
    }
    return;
  }
  return;
}

/* 10017310  CLightning::DamageThink  (78 bytes)
 * void DamageThink(void)
 */
/* public: void __thiscall CLightning::DamageThink(void) */

void __thiscall CLightning::DamageThink(CLightning *this)

{
  undefined1 local_38 [56];
  
                    /* 0x17310  26  ?DamageThink@CLightning@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  FUN_10016300((int)this);
  FUN_100162c0((int)this);
  FUN_10067850();
  FUN_10017220(this,(int)local_38);
  return;
}

/* 10017a30  CLightning::BeamUpdateVars  (526 bytes)
 * undefined BeamUpdateVars(void * param_1)
 * called by: CLightning::Activate
 */
void __fastcall CLightning::BeamUpdateVars(void *param_1)

{
  edict_t *pEdict;
  edict_t *peVar1;
  edict_t *peVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  pEdict = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_targetname_100915e4,
                      gpGlobals->pStringBase + *(int *)((int)param_1 + 0x58));
  peVar1 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_targetname_100915e4,
                      gpGlobals->pStringBase + *(int *)((int)param_1 + 0x5c));
  peVar2 = pEdict;
  if (pEdict == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar2 != (edict_t *)0x0) goto LAB_10017a8b;
    pvVar4 = (void *)0x0;
  }
  else {
LAB_10017a8b:
    pvVar4 = peVar2->pvPrivateData;
  }
  iVar3 = FUN_10016de0((int)pvVar4);
  peVar2 = peVar1;
  if (peVar1 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar2 != (edict_t *)0x0) goto LAB_10017ab2;
    pvVar4 = (void *)0x0;
  }
  else {
LAB_10017ab2:
    pvVar4 = peVar2->pvPrivateData;
  }
  iVar5 = FUN_10016de0((int)pvVar4);
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x110) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x148) = 0;
  *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) =
       *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) | 0x20000000;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xb8) = *(undefined4 *)((int)param_1 + 0x7c);
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xb4) = *(undefined4 *)((int)param_1 + 0x78);
  uVar6 = 2;
  peVar2 = peVar1;
  if (iVar3 == 0) {
    if (iVar5 != 0) {
      uVar6 = 1;
      peVar2 = pEdict;
      pEdict = peVar1;
    }
  }
  else if (iVar5 == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(uint *)(*(int *)((int)param_1 + 4) + 0x148) =
       *(uint *)(*(int *)((int)param_1 + 4) + 0x148) & 0xf0 | uVar6;
  if (((uVar6 == 0) || (uVar6 == 1)) || (uVar6 == 3)) {
    iVar3 = *(int *)((int)param_1 + 4);
    *(vec_t *)(iVar3 + 8) = (pEdict->v).origin[0];
    *(vec_t *)(iVar3 + 0xc) = (pEdict->v).origin[1];
    *(vec_t *)(iVar3 + 0x10) = (pEdict->v).origin[2];
    if ((uVar6 == 0) || (uVar6 == 3)) {
      iVar3 = *(int *)((int)param_1 + 4);
      *(vec_t *)(iVar3 + 0x50) = (peVar2->v).origin[0];
      *(vec_t *)(iVar3 + 0x54) = (peVar2->v).origin[1];
      *(vec_t *)(iVar3 + 0x58) = (peVar2->v).origin[2];
      goto LAB_10017bc6;
    }
  }
  else {
    uVar6 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
    FUN_10016220(param_1,uVar6);
  }
  uVar6 = (*g_engfuncs.pfnIndexOfEdict)(peVar2);
  FUN_10016270(param_1,uVar6);
LAB_10017bc6:
  CBeam::RelinkBeam((int)param_1);
  *(float *)(*(int *)((int)param_1 + 4) + 0x144) = (float)*(int *)((int)param_1 + 100);
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x114) = *(undefined4 *)((int)param_1 + 0x68);
  *(float *)(*(int *)((int)param_1 + 4) + 0x130) = (float)*(int *)((int)param_1 + 0x80);
  *(float *)(*(int *)((int)param_1 + 4) + 0x134) = (float)*(int *)((int)param_1 + 0x70);
  iVar3 = *(int *)((int)param_1 + 4);
  if ((char)*(uint *)(iVar3 + 0x1a0) < '\0') {
    *(uint *)(iVar3 + 0x148) = *(uint *)(iVar3 + 0x148) & 0xf | 0x40;
    return;
  }
  if ((*(uint *)(iVar3 + 0x1a0) & 0x100) != 0) {
    *(uint *)(iVar3 + 0x148) = (uint)((byte)*(undefined4 *)(iVar3 + 0x148) & 0xf | 0x80);
  }
  return;
}

