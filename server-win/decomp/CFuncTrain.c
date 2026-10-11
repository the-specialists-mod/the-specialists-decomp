/* mp.dll - CFuncTrain (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002f020  CFuncTrain::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncTrain::Save(CBasePlatTrain *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBasePlatTrain::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncTrain_100a0650,(int)param_1,0x100a0188,3);
  return;
}

/* 1002f050  CFuncTrain::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CFuncTrain::Restore(CBasePlatTrain *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBasePlatTrain::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CFuncTrain_100a0650,(int)param_1,&DAT_100a0188,3);
  return;
}

/* 1002f080  CFuncTrain::KeyValue  (114 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFuncTrain::KeyValue(CFuncTrain *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  CFuncTrain *this_00;
  char *pcVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pcVar6 = s_sounds_1009bf90;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTrain *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002f0ba:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1002f0bf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTrain *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002f0ba;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002f0bf:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0xfc = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBasePlatTrain::KeyValue((CBasePlatTrain *)this,param_1);
  return;
}

/* 1002f100  CFuncTrain::Blocked  (57 bytes)
 * undefined Blocked()
 */
void __thiscall CFuncTrain::Blocked(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0x74) <= gpGlobals->time) {
    iVar1 = *(int *)(param_1 + 4);
    *(float *)(param_1 + 0x74) = gpGlobals->time + 0.5;
    (**(code **)(*param_2 + 0x50))(iVar1,iVar1,*(undefined4 *)(iVar1 + 0x1e0),1);
  }
  return;
}

/* 1002f140  CFuncTrain::Use  (176 bytes)
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
  peVar1->velocity[0] = DAT_100ae498;
  peVar1->velocity[1] = DAT_100ae49c;
  peVar1->velocity[2] = DAT_100ae4a0;
  iVar4 = param_1->pev->noise1;
  if (iVar4 != 0) {
    EMIT_SOUND_DYN(gpGlobals->pStringBase + iVar4,param_1->pev->pContainingEntity,2,
                   gpGlobals->pStringBase + iVar4,*(undefined4 *)&param_1->field_0xf4,0x3f4ccccd,0);
  }
  return;
}

/* 1002f1f0  CFuncTrain::Wait  (450 bytes)
 * void Wait(void)
 * called by: CFuncTrain::Next
 */
/* public: void __thiscall CFuncTrain::Wait(void) */

void __thiscall CFuncTrain::Wait(CFuncTrain *this)

{
  int iVar1;
  entvars_t *peVar2;
  void *pvVar3;
  
                    /* 0x2f1f0  128  ?Wait@CFuncTrain@@QAEXXZ */
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
                       0,0x20);
      }
      pvVar3 = (void *)this->pev->noise1;
      if (pvVar3 != (void *)0x0) {
        EMIT_SOUND_DYN(pvVar3,this->pev->pContainingEntity,2,gpGlobals->pStringBase + (int)pvVar3,
                       *(undefined4 *)&this->field_0xf4,0x3f4ccccd,0);
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
                   0x20);
  }
  pvVar3 = (void *)this->pev->noise1;
  if (pvVar3 != (void *)0x0) {
    EMIT_SOUND_DYN(pvVar3,this->pev->pContainingEntity,2,gpGlobals->pStringBase + (int)pvVar3,
                   *(undefined4 *)&this->field_0xf4,0x3f4ccccd,0);
  }
  this->pev->nextthink = 0.0;
  return;
}

/* 1002f3c0  CFuncTrain::Next  (786 bytes)
 * void Next(void)
 * called by: CFuncTrain::Use, CFuncTrain::Wait
 */
/* public: void __thiscall CFuncTrain::Next(void) */

void __thiscall CFuncTrain::Next(CFuncTrain *this)

{
  entvars_t *peVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  Vector *this_00;
  float *pfVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float fVar8;
  Vector *pVVar9;
  float *pfVar10;
  float fVar11;
  Vector VStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  Vector VStack_c;
  
                    /* 0x2f3c0  76  ?Next@CFuncTrain@@QAEXXZ */
  piVar4 = (int *)(*this->vtable[0x33])();
  peVar1 = this->pev;
  if (piVar4 == (int *)0x0) {
    pvVar2 = (void *)peVar1->noise;
    if (pvVar2 != (void *)0x0) {
      EMIT_SOUND_DYN(pvVar2,peVar1->pContainingEntity,6,gpGlobals->pStringBase + (int)pvVar2,0,0,
                     0x20);
    }
    pvVar2 = (void *)this->pev->noise1;
    if (pvVar2 != (void *)0x0) {
      EMIT_SOUND_DYN(pvVar2,this->pev->pContainingEntity,2,gpGlobals->pStringBase + (int)pvVar2,
                     *(undefined4 *)&this->field_0xf4,0x3f4ccccd,0);
      return;
    }
  }
  else {
    peVar1->message = peVar1->target;
    this->pev->target = *(string_t *)(piVar4[1] + 0x1c8);
    fVar7 = (float10)(**(code **)(*piVar4 + 0x88))();
    iVar3 = *(int *)&this->field_0xf8;
    *(float *)&this->field_0x7c = (float)fVar7;
    if ((iVar3 != 0) && (*(float *)(iVar3 + 0x1f8) != 0.0)) {
      this->pev->speed = *(float *)(iVar3 + 0x1f8);
      (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Train__s_speed_to__4_2f_100a065c);
    }
    *(int *)&this->field_0xf8 = piVar4[1];
    this->pev->enemy = *(edict_t **)(piVar4[1] + 0x208);
    peVar1 = this->pev;
    if ((*(byte *)(*(int *)&this->field_0xf8 + 0x1a0) & 2) != 0) {
      peVar1->effects = peVar1->effects | 0x20;
      peVar1 = this->pev;
      VStack_30.y = peVar1->maxs[1] + peVar1->mins[1];
      VStack_30.z = peVar1->maxs[2] + peVar1->mins[2];
      fStack_24 = (peVar1->mins[0] + peVar1->maxs[0]) * 0.5;
      fStack_20 = VStack_30.y * 0.5;
      fStack_1c = VStack_30.z * 0.5;
      Vector::Vector(&VStack_30,&fStack_24);
      iVar3 = piVar4[1];
      fStack_18 = *(float *)(iVar3 + 8) - VStack_30.x;
      fStack_14 = *(float *)(iVar3 + 0xc) - VStack_30.y;
      fStack_10 = *(float *)(iVar3 + 0x10) - VStack_30.z;
      Vector::Vector(&VStack_c,&fStack_18);
      UTIL_SetOrigin((int)this->pev,&VStack_c);
      Wait(this);
      return;
    }
    pvVar2 = (void *)peVar1->noise;
    if (pvVar2 != (void *)0x0) {
      EMIT_SOUND_DYN(pvVar2,peVar1->pContainingEntity,6,gpGlobals->pStringBase + (int)pvVar2,0,0,
                     0x20);
    }
    pvVar2 = (void *)this->pev->noise;
    if (pvVar2 != (void *)0x0) {
      EMIT_SOUND_DYN(pvVar2,this->pev->pContainingEntity,6,gpGlobals->pStringBase + (int)pvVar2,
                     *(undefined4 *)&this->field_0xf4,0x3f4ccccd,0);
    }
    pVVar9 = &VStack_c;
    this->pev->effects = this->pev->effects & 0xffffffdf;
    peVar1 = this->pev;
    *(code **)&this->field_0xcc = Wait;
    fVar11 = peVar1->speed;
    fVar8 = 0.5;
    this_00 = (Vector *)Vector::operator+((Vector *)peVar1->mins,&fStack_18,peVar1->maxs);
    pfVar5 = (float *)Vector::operator*(this_00,&pVVar9->x,fVar8);
    pfVar10 = &fStack_24;
    fVar8 = 2.582805e-29;
    puVar6 = (undefined4 *)FUN_100148b0((void *)(piVar4[1] + 8),pfVar10,pfVar5);
    Vector::Vector((Vector *)&stack0xffffffb8,puVar6);
    CBaseToggle::LinearMove((CBaseToggle *)this,fVar8,(float)pfVar10,(float)pfVar5,fVar11);
  }
  return;
}

/* 1002f6e0  CFuncTrain::Activate  (300 bytes)
 * undefined Activate()
 */
void __fastcall CFuncTrain::Activate(int param_1)

{
  int iVar1;
  edict_t *peVar2;
  entvars_t *peVar3;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)(param_1 + 0x100) == 0) {
    *(undefined4 *)(param_1 + 0x100) = 1;
    peVar2 = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,s_targetname_1009c68c,
                        gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8));
    if (peVar2 == (edict_t *)0x0) {
      peVar3 = (entvars_t *)0x0;
    }
    else {
      peVar3 = &peVar2->v;
    }
    *(string_t *)(*(int *)(param_1 + 4) + 0x1c8) = peVar3->target;
    iVar1 = *(int *)(param_1 + 4);
    *(entvars_t **)(param_1 + 0xf8) = peVar3;
    fStack_c = peVar3->origin[0] - (*(float *)(iVar1 + 0xe8) + *(float *)(iVar1 + 0xdc)) * 0.5;
    fStack_8 = peVar3->origin[1] - (*(float *)(iVar1 + 0xec) + *(float *)(iVar1 + 0xe0)) * 0.5;
    fStack_4 = peVar3->origin[2] - (*(float *)(iVar1 + 0xf0) + *(float *)(iVar1 + 0xe4)) * 0.5;
    UTIL_SetOrigin(iVar1,&fStack_c);
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

/* 1002f810  CFuncTrain::Spawn  (267 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CFuncTrain::Spawn(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x20))();
  if (*(float *)(param_1[1] + 0x1f8) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  if (*(int *)(param_1[1] + 0x1c8) == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_FuncTrain_with_no_target_100a0678);
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
  iVar1 = param_1[1];
  UTIL_SetSize(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  param_1[0x40] = 0;
  if ((float)param_1[0x3d] == 0.0) {
    param_1[0x3d] = 0x3f59999a;
  }
  return;
}

/* 1002f930  CFuncTrain::OverrideReset  (175 bytes)
 * undefined OverrideReset(int * param_1)
 */
void __fastcall CFuncTrain::OverrideReset(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if ((((*(float *)(iVar1 + 0x20) != DAT_100ae498) || (*(float *)(iVar1 + 0x24) != DAT_100ae49c)) ||
      (*(float *)(iVar1 + 0x28) != DAT_100ae4a0)) && (*(float *)(iVar1 + 0x104) != 0.0)) {
    *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)(iVar1 + 0x1d4);
    iVar1 = (**(code **)(*param_1 + 0xcc))();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1[1] + 0x104) = 0;
      iVar1 = param_1[1];
      *(float *)(iVar1 + 0x20) = DAT_100ae498;
      *(float *)(iVar1 + 0x24) = DAT_100ae49c;
      *(float *)(iVar1 + 0x28) = DAT_100ae4a0;
      return;
    }
    param_1[4] = (int)Next;
    *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x100) + 0.1;
  }
  return;
}

