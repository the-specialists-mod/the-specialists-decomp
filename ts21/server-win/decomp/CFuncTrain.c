/* mp.dll - CFuncTrain (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10026d20  CFuncTrain::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncTrain::Save(CBasePlatTrain *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBasePlatTrain::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncTrain_10095300,(int)param_1,0x10094e38,3);
  return;
}

/* 10026d50  CFuncTrain::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CFuncTrain::Restore(CBasePlatTrain *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBasePlatTrain::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CFuncTrain_10095300,(int)param_1,0x10094e38,3);
  return;
}

/* 10026d80  CFuncTrain::KeyValue  (76 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFuncTrain::KeyValue(CFuncTrain *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 7;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_sounds_10090ee8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
    *(undefined4 *)&this->field_0xfc = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBasePlatTrain::KeyValue((CBasePlatTrain *)this,param_1);
  return;
}

/* 10026dd0  CFuncTrain::Blocked  (57 bytes)
 * undefined Blocked()
 */
void __thiscall CFuncTrain::Blocked(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0x74) <= gpGlobals->time) {
    iVar1 = *(int *)(param_1 + 4);
    *(float *)(param_1 + 0x74) = gpGlobals->time + 0.5;
    (**(code **)(*param_2 + 0x38))(iVar1,iVar1,*(undefined4 *)(iVar1 + 0x1e0),1);
  }
  return;
}

/* 10026e10  CFuncTrain::Use  (171 bytes)
 * undefined Use()
 */
void __fastcall CFuncTrain::Use(CFuncTrain *param_1)

{
  entvars_t *peVar1;
  uint uVar2;
  edict_t *peVar3;
  int iVar4;
  
  peVar1 = param_1->pev;
  uVar2 = peVar1->spawnflags;
  if ((uVar2 & 1) != 0) {
    peVar1->spawnflags = uVar2 & 0xfffffffe;
    Next(param_1);
    return;
  }
  peVar1->spawnflags = uVar2 | 1;
  peVar3 = param_1->pev->enemy;
  if (peVar3 != (edict_t *)0x0) {
    param_1->pev->target = (peVar3->v).targetname;
  }
  param_1->pev->nextthink = 0.0;
  peVar1 = param_1->pev;
  peVar1->velocity[0] = DAT_1009f4a8;
  peVar1->velocity[1] = DAT_1009f4ac;
  peVar1->velocity[2] = DAT_1009f4b0;
  iVar4 = param_1->pev->noise1;
  if (iVar4 != 0) {
    EMIT_SOUND_DYN(gpGlobals->pStringBase + iVar4,param_1->pev->pContainingEntity,2,
                   gpGlobals->pStringBase + iVar4,*(undefined4 *)&param_1->field_0xf4,0x3f4ccccd,0,
                   100);
  }
  return;
}

/* 10026ec0  CFuncTrain::Wait  (429 bytes)
 * void Wait(void)
 * called by: CFuncTrain::Next
 */
/* public: void __thiscall CFuncTrain::Wait(void) */

void __thiscall CFuncTrain::Wait(CFuncTrain *this)

{
  int iVar1;
  entvars_t *peVar2;
  void *pvVar3;
  
                    /* 0x26ec0  121  ?Wait@CFuncTrain@@QAEXXZ */
  iVar1 = *(int *)(*(int *)&this->field_0xf8 + 0x1d4);
  if (iVar1 != 0) {
    FireTargets((int)(gpGlobals->pStringBase + iVar1),this,this,3,0);
    if ((*(byte *)(*(int *)&this->field_0xf8 + 0x1a0) & 4) != 0) {
      *(undefined4 *)(*(int *)&this->field_0xf8 + 0x1d4) = 0;
    }
  }
  if (((*(byte *)(*(int *)&this->field_0xf8 + 0x1a0) & 1) == 0) &&
     (peVar2 = this->pev, (peVar2->spawnflags & 1) == 0)) {
    if (*(float *)&this->field_0x7c != 0.0) {
      peVar2->nextthink = peVar2->ltime + *(float *)&this->field_0x7c;
      pvVar3 = (void *)this->pev->noise;
      if (pvVar3 != (void *)0x0) {
        EMIT_SOUND_DYN(pvVar3,this->pev->pContainingEntity,6,gpGlobals->pStringBase + (int)pvVar3,0,
                       0,0x20,100);
      }
      pvVar3 = (void *)this->pev->noise1;
      if (pvVar3 != (void *)0x0) {
        EMIT_SOUND_DYN(pvVar3,this->pev->pContainingEntity,2,gpGlobals->pStringBase + (int)pvVar3,
                       *(undefined4 *)&this->field_0xf4,0x3f4ccccd,0,100);
      }
      *(code **)&this->field_0x10 = Next;
      return;
    }
    Next(this);
    return;
  }
  this->pev->spawnflags = this->pev->spawnflags | 1;
  pvVar3 = (void *)this->pev->noise;
  if (pvVar3 != (void *)0x0) {
    EMIT_SOUND_DYN(pvVar3,this->pev->pContainingEntity,6,gpGlobals->pStringBase + (int)pvVar3,0,0,
                   0x20,100);
  }
  pvVar3 = (void *)this->pev->noise1;
  if (pvVar3 != (void *)0x0) {
    EMIT_SOUND_DYN(pvVar3,this->pev->pContainingEntity,2,gpGlobals->pStringBase + (int)pvVar3,
                   *(undefined4 *)&this->field_0xf4,0x3f4ccccd,0,100);
  }
  this->pev->nextthink = 0.0;
  return;
}

/* 10027070  CFuncTrain::Next  (702 bytes)
 * void Next(void)
 * called by: CFuncTrain::Use, CFuncTrain::Wait
 */
/* public: void __thiscall CFuncTrain::Next(void) */

void __thiscall CFuncTrain::Next(CFuncTrain *this)

{
  entvars_t *peVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  float *pfVar5;
  float10 fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float afStack_c [2];
  float fStack_4;
  
                    /* 0x27070  71  ?Next@CFuncTrain@@QAEXXZ */
  piVar3 = (int *)(*this->vtable[0x2d])();
  peVar1 = this->pev;
  if (piVar3 == (int *)0x0) {
    pvVar4 = (void *)peVar1->noise;
    if (pvVar4 != (void *)0x0) {
      EMIT_SOUND_DYN(pvVar4,peVar1->pContainingEntity,6,gpGlobals->pStringBase + (int)pvVar4,0,0,
                     0x20,100);
    }
    pvVar4 = (void *)this->pev->noise1;
    if (pvVar4 != (void *)0x0) {
      EMIT_SOUND_DYN(pvVar4,this->pev->pContainingEntity,2,gpGlobals->pStringBase + (int)pvVar4,
                     *(undefined4 *)&this->field_0xf4,0x3f4ccccd,0,100);
      return;
    }
  }
  else {
    peVar1->message = peVar1->target;
    this->pev->target = *(string_t *)(piVar3[1] + 0x1c8);
    fVar6 = (float10)(**(code **)(*piVar3 + 0x70))();
    iVar2 = *(int *)&this->field_0xf8;
    *(float *)&this->field_0x7c = (float)fVar6;
    if ((iVar2 != 0) && (*(float *)(iVar2 + 0x1f8) != 0.0)) {
      this->pev->speed = *(float *)(iVar2 + 0x1f8);
      (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Train__s_speed_to__4_2f_1009530c);
    }
    *(int *)&this->field_0xf8 = piVar3[1];
    this->pev->enemy = *(edict_t **)(piVar3[1] + 0x208);
    peVar1 = this->pev;
    if ((*(byte *)(*(int *)&this->field_0xf8 + 0x1a0) & 2) != 0) {
      peVar1->effects = peVar1->effects | 0x20;
      peVar1 = this->pev;
      iVar2 = piVar3[1];
      fStack_4 = peVar1->maxs[2] + peVar1->mins[2];
      fStack_10 = *(float *)(iVar2 + 0x10) - fStack_4 * 0.5;
      fStack_14 = *(float *)(iVar2 + 0xc) - (peVar1->maxs[1] + peVar1->mins[1]) * 0.5;
      fStack_18 = *(float *)(iVar2 + 8) - (peVar1->mins[0] + peVar1->maxs[0]) * 0.5;
      FUN_100679a0();
      Wait(this);
      return;
    }
    pvVar4 = (void *)peVar1->noise;
    if (pvVar4 != (void *)0x0) {
      EMIT_SOUND_DYN(pvVar4,peVar1->pContainingEntity,6,gpGlobals->pStringBase + (int)pvVar4,0,0,
                     0x20,100);
    }
    pvVar4 = (void *)this->pev->noise;
    if (pvVar4 != (void *)0x0) {
      EMIT_SOUND_DYN(pvVar4,this->pev->pContainingEntity,6,gpGlobals->pStringBase + (int)pvVar4,
                     *(undefined4 *)&this->field_0xf4,0x3f4ccccd,0,100);
    }
    pfVar8 = afStack_c;
    this->pev->effects = this->pev->effects & 0xffffffdf;
    peVar1 = this->pev;
    *(code **)&this->field_0xcc = Wait;
    fVar10 = peVar1->speed;
    fVar9 = 0.5;
    pvVar4 = (void *)FUN_1000c610(peVar1->mins,&fStack_18,peVar1->maxs);
    fVar7 = 2.5726617e-29;
    pfVar5 = (float *)FUN_10014e80(pvVar4,pfVar8,fVar9);
    FUN_10011f90((void *)(piVar3[1] + 8),(float *)&stack0xffffffd0,pfVar5);
    CBaseToggle::LinearMove((CBaseToggle *)this,fVar7,(float)pfVar8,fVar9,fVar10);
  }
  return;
}

/* 10027330  CFuncTrain::Activate  (278 bytes)
 * undefined Activate()
 */
void __fastcall CFuncTrain::Activate(int param_1)

{
  int iVar1;
  edict_t *peVar2;
  entvars_t *peVar3;
  
  if (*(int *)(param_1 + 0x100) == 0) {
    *(undefined4 *)(param_1 + 0x100) = 1;
    peVar2 = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,s_targetname_100915e4,
                        gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8));
    if (peVar2 == (edict_t *)0x0) {
      peVar3 = (entvars_t *)0x0;
    }
    else {
      peVar3 = &peVar2->v;
    }
    *(string_t *)(*(int *)(param_1 + 4) + 0x1c8) = peVar3->target;
    *(entvars_t **)(param_1 + 0xf8) = peVar3;
    FUN_100679a0();
    iVar1 = *(int *)(param_1 + 4);
    if (*(int *)(iVar1 + 0x1cc) == 0) {
      *(float *)(iVar1 + 0x104) = *(float *)(iVar1 + 0x100) + 0.1;
      *(code **)(param_1 + 0x10) = Next;
      return;
    }
    *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 1;
  }
  return;
}

/* 10027450  CFuncTrain::Spawn  (267 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CFuncTrain::Spawn(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x10))();
  if (*(float *)(param_1[1] + 0x1f8) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  if (*(int *)(param_1[1] + 0x1c8) == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_FuncTrain_with_no_target_10095328);
  }
  if (*(float *)(param_1[1] + 0x1e0) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1e0) = 0x40000000;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 8) == 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
  }
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  FUN_10067970();
  FUN_100679a0();
  param_1[0x40] = 0;
  if ((float)param_1[0x3d] == 0.0) {
    param_1[0x3d] = 0x3f59999a;
  }
  return;
}

/* 10027570  CFuncTrain::OverrideReset  (175 bytes)
 * undefined OverrideReset(int * param_1)
 */
void __fastcall CFuncTrain::OverrideReset(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if ((((*(float *)(iVar1 + 0x20) != DAT_1009f4a8) || (*(float *)(iVar1 + 0x24) != DAT_1009f4ac)) ||
      (*(float *)(iVar1 + 0x28) != DAT_1009f4b0)) && (*(float *)(iVar1 + 0x104) != 0.0)) {
    *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)(iVar1 + 0x1d4);
    iVar1 = (**(code **)(*param_1 + 0xb4))();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1[1] + 0x104) = 0;
      iVar1 = param_1[1];
      *(float *)(iVar1 + 0x20) = DAT_1009f4a8;
      *(float *)(iVar1 + 0x24) = DAT_1009f4ac;
      *(float *)(iVar1 + 0x28) = DAT_1009f4b0;
      return;
    }
    param_1[4] = (int)Next;
    *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x100) + 0.1;
  }
  return;
}

