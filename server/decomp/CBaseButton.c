/* ts_i386.so - CBaseButton (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a7e30  CBaseButton::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBaseButton::Save(CSave &) */

undefined4 __thiscall CBaseButton::Save(CBaseButton *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CBaseButton",(int)this,(int *)m_SaveData,8);
  }
  return uVar2;
}

/* 000a7e80  CBaseButton::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBaseButton::Restore(CRestore &) */

undefined4 __thiscall CBaseButton::Restore(CBaseButton *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CBaseButton",(int)this,(int)m_SaveData,8);
  }
  return uVar2;
}

/* 000a7ed0  CBaseButton::Precache  (619 bytes)
 * undefined Precache(void)
 */
/* CBaseButton::Precache(void) */

void __thiscall CBaseButton::Precache(CBaseButton *this)

{
  char *pcVar1;
  int iVar2;
  
  if ((this->pev->spawnflags & 0x40) != 0) {
    (*g_engfuncs.pfnPrecacheSound)("buttons/spark1.wav");
    (*g_engfuncs.pfnPrecacheSound)("buttons/spark2.wav");
    (*g_engfuncs.pfnPrecacheSound)("buttons/spark3.wav");
    (*g_engfuncs.pfnPrecacheSound)("buttons/spark4.wav");
    (*g_engfuncs.pfnPrecacheSound)("buttons/spark5.wav");
    (*g_engfuncs.pfnPrecacheSound)("buttons/spark6.wav");
  }
  if (this->field_0x134 != '\0') {
    pcVar1 = ButtonSound((uint)(byte)this->field_0x134);
    (*g_engfuncs.pfnPrecacheSound)(pcVar1);
    iVar2 = (*g_engfuncs.pfnAllocString)(pcVar1);
    *(int *)&this->field_0x110 = iVar2;
  }
  if (this->field_0x136 != '\0') {
    pcVar1 = ButtonSound((uint)(byte)this->field_0x136);
    (*g_engfuncs.pfnPrecacheSound)(pcVar1);
    iVar2 = (*g_engfuncs.pfnAllocString)(pcVar1);
    *(int *)&this->field_0x118 = iVar2;
  }
  switch(this->field_0x135) {
  case 1:
    pcVar1 = "NA";
    break;
  case 2:
    pcVar1 = "ND";
    break;
  case 3:
    pcVar1 = "NF";
    break;
  case 4:
    pcVar1 = "NFIRE";
    break;
  case 5:
    pcVar1 = "NCHEM";
    break;
  case 6:
    pcVar1 = "NRAD";
    break;
  case 7:
    pcVar1 = "NCON";
    break;
  case 8:
    pcVar1 = "NH";
    break;
  case 9:
    pcVar1 = "NG";
    break;
  default:
    *(undefined4 *)&this->field_0x114 = 0;
    goto LAB_000a80a2;
  }
  *(int *)&this->field_0x114 = (int)pcVar1 - (int)gpGlobals->pStringBase;
LAB_000a80a2:
  switch(this->field_0x137) {
  case 1:
    pcVar1 = "EA";
    break;
  case 2:
    pcVar1 = "ED";
    break;
  case 3:
    pcVar1 = "EF";
    break;
  case 4:
    pcVar1 = "EFIRE";
    break;
  case 5:
    pcVar1 = "ECHEM";
    break;
  case 6:
    pcVar1 = "ERAD";
    break;
  case 7:
    pcVar1 = "ECON";
    break;
  case 8:
    pcVar1 = "EH";
    break;
  default:
    *(undefined4 *)&this->field_0x11c = 0;
    return;
  }
  *(int *)&this->field_0x11c = (int)pcVar1 - (int)gpGlobals->pStringBase;
  return;
}

/* 000a8184  CBaseButton::KeyValue  (541 bytes)
 * undefined KeyValue(int param_1)
 */
/* CBaseButton::KeyValue(KeyValueData_s *) */

void __thiscall CBaseButton::KeyValue(CBaseButton *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longdouble lVar3;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"changetarget");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x10c = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"locked_sound");
    if (iVar1 == 0) {
      lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      this->field_0x134 = (char)(short)ROUND(lVar3);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"locked_sentence");
      if (iVar1 == 0) {
        lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        this->field_0x135 = (char)(short)ROUND(lVar3);
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"unlocked_sound");
        if (iVar1 == 0) {
          lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          this->field_0x136 = (char)(short)ROUND(lVar3);
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          iVar1 = strcmp(*(char **)(param_1 + 4),"unlocked_sentence");
          if (iVar1 == 0) {
            lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
            this->field_0x137 = (char)(short)ROUND(lVar3);
            *(undefined4 *)(param_1 + 0xc) = 1;
          }
          else {
            iVar1 = strcmp(*(char **)(param_1 + 4),"sounds");
            if (iVar1 == 0) {
              uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
              *(undefined4 *)&this->field_0x138 = uVar2;
              *(undefined4 *)(param_1 + 0xc) = 1;
            }
            else {
              CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
            }
          }
        }
      }
    }
  }
  return;
}

/* 000a83a8  CBaseButton::TakeDamage  (290 bytes)
 * undefined4 TakeDamage(CBaseButton * param_1, undefined4 param_2, int param_3)
 */
/* CBaseButton::TakeDamage(entvars_s *, entvars_s *, float, int) */

undefined4 CBaseButton::TakeDamage(CBaseButton *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  edict_t *peVar3;
  undefined3 extraout_var;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = ButtonResponseToTouch(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)&param_1->field_0x14 = 0;
    *(undefined4 *)&param_1->field_0x18 = 0;
    peVar3 = *(edict_t **)(param_3 + 0x208);
    if (peVar3 == (edict_t *)0x0) {
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    piVar4 = (int *)0x0;
    if (peVar3 != (edict_t *)0x0) {
      piVar4 = peVar3->pvPrivateData;
    }
    EHANDLE::operator=((EHANDLE *)&param_1->field_0xd4,piVar4);
    bVar1 = int((EHANDLE *)&param_1->field_0xd4);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      if (iVar2 == 2) {
        EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,2,
                       gpGlobals->pStringBase + param_1->pev->noise,0x3f800000,0x3f4ccccd,0,100,0.5)
        ;
        if ((param_1->pev->spawnflags & 0x20) == 0) {
          uVar6 = 0;
          uVar5 = 3;
          piVar4 = (int *)_((EHANDLE *)&param_1->field_0xd4);
          CBaseDelay::SUB_UseTargets((CBaseDelay *)param_1,piVar4,uVar5,uVar6);
        }
        ButtonReturn(param_1);
      }
      else {
        ButtonActivate(param_1);
      }
    }
  }
  return 0;
}

/* 000a84f4  CBaseButton::Spawn  (767 bytes)
 * undefined Spawn(void)
 */
/* CBaseButton::Spawn(void) */

void __thiscall CBaseButton::Spawn(CBaseButton *this)

{
  entvars_t *peVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char *s;
  int iVar6;
  vec_t *pvVar7;
  float *pfVar8;
  undefined4 *puVar9;
  vec_t *pvVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float local_3c [7];
  float local_20;
  
  s = ButtonSound(*(undefined4 *)&this->field_0x138);
  (*g_engfuncs.pfnPrecacheSound)(s);
  iVar6 = (*g_engfuncs.pfnAllocString)(s);
  this->pev->noise = iVar6;
  (*this->vtable[10])(this);
  if ((this->pev->spawnflags & 0x40) != 0) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = ButtonSpark;
    this->pev->nextthink = gpGlobals->time + 0.5;
  }
  SetMovedir((int)this->pev);
  this->pev->movetype = 7;
  this->pev->solid = 4;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  if (this->pev->speed == 0.0) {
    this->pev->speed = 40.0;
  }
  if (0.0 < this->pev->health) {
    this->pev->takedamage = 1.0;
  }
  if (*(float *)&this->field_0x8c == 0.0) {
    *(undefined4 *)&this->field_0x8c = 0x3f800000;
  }
  if (*(float *)&this->field_0x90 == 0.0) {
    *(undefined4 *)&this->field_0x90 = 0x40800000;
  }
  *(undefined4 *)&this->field_0x80 = 1;
  pvVar7 = this->pev->origin;
  pvVar10 = (vec_t *)&this->field_0x9c;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pvVar10 = *pvVar7;
    pvVar7 = pvVar7 + 1;
    pvVar10 = pvVar10 + 1;
  }
  peVar1 = this->pev;
  local_20 = (ABS((peVar1->size[2] - 2.0) * peVar1->movedir[2]) +
             ABS((peVar1->size[1] - 2.0) * peVar1->movedir[1]) +
             ABS((peVar1->size[0] - 2.0) * peVar1->movedir[0])) - *(float *)&this->field_0x90;
  local_3c[0] = *(float *)&this->field_0x9c + local_20 * peVar1->movedir[0];
  local_3c[1] = *(float *)&this->field_0xa0 + local_20 * peVar1->movedir[1];
  local_3c[2] = *(float *)&this->field_0xa4 + local_20 * peVar1->movedir[2];
  pfVar8 = local_3c;
  pfVar11 = (float *)&this->field_0xa8;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar11 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar11 = pfVar11 + 1;
  }
  fVar2 = *(float *)&this->field_0xa8 - *(float *)&this->field_0x9c;
  fVar4 = *(float *)&this->field_0xac - *(float *)&this->field_0xa0;
  fVar3 = *(float *)&this->field_0xb0 - *(float *)&this->field_0xa4;
  if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) < 1.0) ||
     (bVar5 = false, (this->pev->spawnflags & 1) != 0)) {
    bVar5 = true;
  }
  if (bVar5) {
    puVar9 = (undefined4 *)&this->field_0x9c;
    puVar12 = (undefined4 *)&this->field_0xa8;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  *(uint *)&this->field_0x104 = (uint)(*(float *)&this->field_0x8c == -1.0);
  *(undefined4 *)&this->field_0x108 = 0;
  if ((this->pev->spawnflags & 0x100) == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = ButtonUse;
  }
  else {
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = ButtonTouch;
  }
  return;
}

/* 000a8a94  CBaseButton::ButtonSpark  (112 bytes)
 * undefined ButtonSpark(void)
 */
/* CBaseButton::ButtonSpark(void) */

void __thiscall CBaseButton::ButtonSpark(CBaseButton *this)

{
  longdouble lVar1;
  
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = ButtonSpark;
  lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,1.5);
  this->pev->nextthink = (float)(lVar1 + (longdouble)gpGlobals->time + (longdouble)0.1);
  DoSpark((int)this->pev,this->pev->mins);
  return;
}

/* 000a8b04  CBaseButton::ButtonUse  (175 bytes)
 * undefined ButtonUse(CBaseButton * param_1, int * param_2)
 */
/* CBaseButton::ButtonUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CBaseButton::ButtonUse(CBaseButton *param_1,int *param_2)

{
  entvars_t *peVar1;
  
  if (1 < *(int *)&param_1->field_0x80 - 2U) {
    EHANDLE::operator=((EHANDLE *)&param_1->field_0xd4,param_2);
    if (*(int *)&param_1->field_0x80 == 0) {
      if ((*(int *)&param_1->field_0x104 == 0) &&
         (peVar1 = param_1->pev, (peVar1->spawnflags & 0x20) != 0)) {
        EMIT_SOUND_DYN((int)peVar1->pContainingEntity,2,gpGlobals->pStringBase + peVar1->noise,
                       0x3f800000,0x3f4ccccd,0,100,0.5);
        ButtonReturn(param_1);
      }
    }
    else {
      ButtonActivate(param_1);
    }
  }
  return;
}

/* 000a8bb8  CBaseButton::ButtonResponseToTouch  (100 bytes)
 * undefined4 ButtonResponseToTouch(void)
 */
/* CBaseButton::ButtonResponseToTouch(void) */

undefined4 __thiscall CBaseButton::ButtonResponseToTouch(CBaseButton *this)

{
  if ((*(int *)&this->field_0x80 - 2U < 2) ||
     (((*(int *)&this->field_0x80 == 0 && (*(int *)&this->field_0x104 == 0)) &&
      ((this->pev->spawnflags & 0x20) == 0)))) {
    return 0;
  }
  if (*(int *)&this->field_0x80 != 0) {
    return 1;
  }
  if (((this->pev->spawnflags & 0x20) != 0) && (*(int *)&this->field_0x104 == 0)) {
    return 2;
  }
  return 0;
}

/* 000a8c24  CBaseButton::ButtonTouch  (294 bytes)
 * undefined ButtonTouch(int * param_1)
 */
/* CBaseButton::ButtonTouch(CBaseEntity *) */

void __thiscall CBaseButton::ButtonTouch(CBaseButton *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"player");
  if (iVar1 == 0) {
    EHANDLE::operator=((EHANDLE *)&this->field_0xd4,param_1);
    iVar1 = ButtonResponseToTouch(this);
    if (iVar1 != 0) {
      iVar2 = UTIL_IsMasterTriggered(*(int *)&this->field_0x100,param_1);
      if (iVar2 == 0) {
        PlayLockSounds((int)this->pev,(int *)&this->field_0x110,1,1);
      }
      else {
        *(undefined4 *)&this->field_0x14 = 0;
        *(undefined4 *)&this->field_0x18 = 0;
        if (iVar1 == 2) {
          EMIT_SOUND_DYN((int)this->pev->pContainingEntity,2,
                         gpGlobals->pStringBase + this->pev->noise,0x3f800000,0x3f4ccccd,0,100,0.5);
          uVar5 = 0;
          uVar4 = 3;
          piVar3 = (int *)_((EHANDLE *)&this->field_0xd4);
          CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar3,uVar4,uVar5);
          ButtonReturn(this);
        }
        else {
          ButtonActivate(this);
        }
      }
    }
  }
  return;
}

/* 000a8d4c  CBaseButton::ButtonActivate  (315 bytes)
 * undefined ButtonActivate(void)
 */
/* CBaseButton::ButtonActivate(void) */

void __thiscall CBaseButton::ButtonActivate(CBaseButton *this)

{
  undefined4 uVar1;
  int iVar2;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  EMIT_SOUND_DYN((int)this->pev->pContainingEntity,2,gpGlobals->pStringBase + this->pev->noise,
                 0x3f800000,0x3f4ccccd,0,100,0.5);
  uVar1 = _((EHANDLE *)&this->field_0xd4);
  iVar2 = UTIL_IsMasterTriggered(*(int *)&this->field_0x100,uVar1);
  if (iVar2 == 0) {
    PlayLockSounds((int)this->pev,(int *)&this->field_0x110,1,1);
  }
  else {
    PlayLockSounds((int)this->pev,(int *)&this->field_0x110,0,1);
    *(undefined4 *)&this->field_0x80 = 2;
    *(undefined4 *)&this->field_0xdc = 0xffff0000;
    *(code **)&this->field_0xe0 = TriggerAndWait;
    if (*(int *)&this->field_0x108 == 0) {
      local_1c = *(float *)&this->field_0xa8;
      local_18 = *(undefined4 *)&this->field_0xac;
      local_14 = *(undefined4 *)&this->field_0xb0;
      CBaseToggle::LinearMove((CBaseToggle *)this,&local_1c,this->pev->speed);
    }
    else {
      local_1c = *(float *)&this->field_0xc0;
      local_18 = *(undefined4 *)&this->field_0xc4;
      local_14 = *(undefined4 *)&this->field_0xc8;
      CBaseToggle::AngularMove((CBaseToggle *)this,&local_1c,this->pev->speed);
    }
  }
  return;
}

/* 000a8e8c  CBaseButton::TriggerAndWait  (233 bytes)
 * undefined TriggerAndWait(void)
 */
/* CBaseButton::TriggerAndWait(void) */

void __thiscall CBaseButton::TriggerAndWait(CBaseButton *this)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar1 = _((EHANDLE *)&this->field_0xd4);
  iVar2 = UTIL_IsMasterTriggered(*(int *)&this->field_0x100,uVar1);
  if (iVar2 != 0) {
    *(undefined4 *)&this->field_0x80 = 0;
    if ((*(int *)&this->field_0x104 == 0) && ((this->pev->spawnflags & 0x20) == 0)) {
      this->pev->nextthink = this->pev->ltime + *(float *)&this->field_0x8c;
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = ButtonReturn;
    }
    else if ((this->pev->spawnflags & 0x100) == 0) {
      *(undefined4 *)&this->field_0x14 = 0;
      *(undefined4 *)&this->field_0x18 = 0;
    }
    else {
      *(undefined4 *)&this->field_0x14 = 0xffff0000;
      *(code **)&this->field_0x18 = ButtonTouch;
    }
    this->pev->frame = 1.0;
    uVar4 = 0;
    uVar1 = 3;
    piVar3 = (int *)_((EHANDLE *)&this->field_0xd4);
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar3,uVar1,uVar4);
  }
  return;
}

/* 000a8f78  CBaseButton::ButtonReturn  (188 bytes)
 * undefined ButtonReturn(void)
 */
/* CBaseButton::ButtonReturn(void) */

void __thiscall CBaseButton::ButtonReturn(CBaseButton *this)

{
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)&this->field_0x80 = 3;
  *(undefined4 *)&this->field_0xdc = 0xffff0000;
  *(code **)&this->field_0xe0 = ButtonBackHome;
  if (*(int *)&this->field_0x108 == 0) {
    local_1c = *(float *)&this->field_0x9c;
    local_18 = *(undefined4 *)&this->field_0xa0;
    local_14 = *(undefined4 *)&this->field_0xa4;
    CBaseToggle::LinearMove((CBaseToggle *)this,&local_1c,this->pev->speed);
  }
  else {
    local_1c = *(float *)&this->field_0xb4;
    local_18 = *(undefined4 *)&this->field_0xb8;
    local_14 = *(undefined4 *)&this->field_0xbc;
    CBaseToggle::AngularMove((CBaseToggle *)this,&local_1c,this->pev->speed);
  }
  this->pev->frame = 0.0;
  return;
}

/* 000a9038  CBaseButton::ButtonBackHome  (488 bytes)
 * undefined ButtonBackHome(void)
 */
/* CBaseButton::ButtonBackHome(void) */

void __thiscall CBaseButton::ButtonBackHome(CBaseButton *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  edict_t *peVar4;
  edict_t *pEdictStartSearchAfter;
  void *pvVar5;
  CBaseButton *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined4 *)&this->field_0x80 = 1;
  if ((this->pev->spawnflags & 0x20) != 0) {
    uVar9 = 0;
    uVar8 = 3;
    piVar2 = (int *)_((EHANDLE *)&this->field_0xd4);
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar2,uVar8,uVar9);
  }
  if (this->pev->target != 0) {
    pEdictStartSearchAfter = (edict_t *)0x0;
LAB_000a90ac:
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,"targetname",gpGlobals->pStringBase + this->pev->target);
    bVar1 = false;
    if (pEdictStartSearchAfter == (edict_t *)0x0) {
LAB_000a90fc:
      bVar1 = true;
    }
    else {
      iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar3 == 0) goto LAB_000a90fc;
    }
    if (!bVar1) {
      iVar3 = strcmp(gpGlobals->pStringBase +
                     *(int *)((uint)&pEdictStartSearchAfter->v &
                             (pEdictStartSearchAfter == (edict_t *)0x0) - 1),"multisource");
      if (iVar3 == 0) {
        peVar4 = pEdictStartSearchAfter;
        if (pEdictStartSearchAfter == (edict_t *)0x0) {
          peVar4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        pvVar5 = (void *)0x0;
        if (peVar4 != (edict_t *)0x0) {
          pvVar5 = peVar4->pvPrivateData;
        }
        if (pvVar5 != (void *)0x0) {
          iVar3 = *(int *)((int)pvVar5 + 0x60);
          uVar7 = 0;
          uVar9 = 3;
          pCVar6 = this;
          uVar8 = _((EHANDLE *)&this->field_0xd4);
          (**(code **)(iVar3 + 0xe0))(pvVar5,uVar8,pCVar6,uVar9,uVar7);
        }
      }
      goto LAB_000a90ac;
    }
  }
  if ((this->pev->spawnflags & 0x100) == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
  }
  else {
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = ButtonTouch;
  }
  if ((this->pev->spawnflags & 0x40) != 0) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = ButtonSpark;
    this->pev->nextthink = gpGlobals->time + 0.5;
  }
  return;
}

/* 000aa8a8  CBaseButton::ObjectCaps  (52 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CBaseButton::ObjectCaps(void) */

undefined4 __thiscall CBaseButton::ObjectCaps(CBaseButton *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (this->pev->takedamage == 0.0) {
    uVar1 = 8;
  }
  return uVar1;
}

