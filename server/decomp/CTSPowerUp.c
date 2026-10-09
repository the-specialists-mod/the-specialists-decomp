/* ts_i386.so - CTSPowerUp (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00097e1c  CTSPowerUp::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSPowerUp::Save(CSave &) */

undefined4 __thiscall CTSPowerUp::Save(CTSPowerUp *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseAnimating::Save((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSPowerUp",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 00097e6c  CTSPowerUp::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSPowerUp::Restore(CRestore &) */

undefined4 __thiscall CTSPowerUp::Restore(CTSPowerUp *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseAnimating::Restore((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSPowerUp",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 00097ebc  CTSPowerUp::KeyValue  (221 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSPowerUp::KeyValue(KeyValueData_s *) */

void __thiscall CTSPowerUp::KeyValue(CTSPowerUp *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longdouble lVar3;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"pwuptype");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x84 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"pwupduration");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0x94 = uVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"pwupmult");
      if (iVar1 == 0) {
        lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this->field_0x98 = (float)lVar3;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
      }
    }
  }
  return;
}

/* 00097fa0  CTSPowerUp::CreatePowerUp  (114 bytes)
 * CTSPowerUp * CreatePowerUp(uint param_1, int param_2)
 */
/* CTSPowerUp::CreatePowerUp(int, int) */

CTSPowerUp * CTSPowerUp::CreatePowerUp(uint param_1,int param_2)

{
  CTSPowerUp *pCVar1;
  CTSPowerUp *pCVar2;
  
  pCVar1 = GetClassPtr<CTSPowerUp>(0);
  if (pCVar1 == (CTSPowerUp *)0x0) {
    UTIL_ClientPrintAll(3,"WARNING:cannot create powerup!\n",0,0,0,0);
    pCVar1 = (CTSPowerUp *)0x0;
  }
  else {
    pCVar2 = pCVar1;
    (*pCVar1->vtable[9])(pCVar1);
    SetupPowerUp(pCVar1,param_1,param_2,0x42700000,(uint)pCVar2 & 0xffff0000);
  }
  return pCVar1;
}

/* 00098014  CTSPowerUp::SetupPowerUp  (561 bytes)
 * undefined SetupPowerUp(CTSPowerUp * this, uint param_2, int param_3, float param_4, CTSPowerUp param_5)
 */
/* CTSPowerUp::SetupPowerUp(int, int, float, bool) */

void __thiscall
CTSPowerUp::SetupPowerUp(void *this,uint param_2,int param_3,float param_4,undefined1 param_5)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x90) = 0;
  if ((int)param_2 < 1) {
    uVar1 = CTSGameRules::GetRandomPowerup(&TSGameRules,*(uint *)(*(int *)this + 0x1a0));
    *(uint *)((int)this + 0x84) = uVar1;
    if (uVar1 == 0) {
      uVar1 = CTSGameRules::GetRandomPowerup(&TSGameRules,0x1ff);
      *(uint *)((int)this + 0x84) = uVar1;
    }
    *(undefined1 *)((int)this + 0x81) = 1;
  }
  else {
    if (((DAT_0017da25 == '\0') || ((param_2 & 0x100) == 0)) && (-1 < (char)param_2)) {
      *(uint *)((int)this + 0x84) = param_2;
    }
    else {
      uVar1 = CTSGameRules::GetRandomPowerup(&TSGameRules,0x1ff);
      *(uint *)((int)this + 0x84) = uVar1;
    }
    *(undefined1 *)((int)this + 0x81) = 0;
  }
  if ((*(byte *)((int)this + 0x84) & 1) == 0) {
    if ((*(byte *)((int)this + 0x84) & 2) == 0) {
      if ((*(byte *)((int)this + 0x84) & 4) == 0) {
        if ((*(byte *)((int)this + 0x84) & 8) == 0) {
          if ((*(byte *)((int)this + 0x84) & 0x10) == 0) {
            if ((*(byte *)((int)this + 0x84) & 0x20) == 0) {
              if ((*(byte *)((int)this + 0x84) & 0x40) == 0) {
                if (*(char *)((int)this + 0x84) < '\0') {
                  *(undefined4 *)(*(int *)this + 0x114) = 7;
                }
                else if ((*(byte *)((int)this + 0x85) & 1) != 0) {
                  *(undefined4 *)(*(int *)this + 0x114) = 8;
                }
              }
              else {
                *(undefined4 *)(*(int *)this + 0x114) = 6;
              }
            }
            else {
              *(undefined4 *)(*(int *)this + 0x114) = 5;
            }
          }
          else {
            *(undefined4 *)(*(int *)this + 0x114) = 1;
            *(undefined4 *)((int)this + 0x90) = 3;
          }
        }
        else {
          *(undefined4 *)(*(int *)this + 0x114) = 9;
          *(undefined4 *)((int)this + 0x90) = 2;
        }
      }
      else {
        *(undefined4 *)(*(int *)this + 0x114) = 0;
      }
    }
    else {
      *(undefined4 *)(*(int *)this + 0x114) = 2;
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  else {
    *(undefined4 *)(*(int *)this + 0x114) = 4;
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  if (param_3 < 1) {
    *(int *)((int)this + 0x90) =
         (int)ROUND((float)*(int *)((int)this + 0x90) * *(float *)((int)this + 0x98));
  }
  else {
    *(int *)((int)this + 0x90) = param_3;
  }
  *(float *)((int)this + 0x88) = param_4 + gpGlobals->time;
  *(undefined4 *)((int)this + 0x8c) = 0x42c80000;
  *(undefined1 *)((int)this + 0x80) = param_5;
  return;
}

/* 00098258  CTSPowerUp::Spawn  (369 bytes)
 * undefined Spawn(void)
 */
/* CTSPowerUp::Spawn(void) */

void __thiscall CTSPowerUp::Spawn(CTSPowerUp *this)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  (*this->vtable[10])(this);
  if (DAT_001781a1 == -1) {
    DAT_001781a1 = '\0';
  }
  this->pev->classname = (int)"ts_powerup" - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/powerup.mdl");
  this->pev->movetype = 6;
  this->pev->solid = 2;
  this->pev->renderamt = 255.0;
  this->pev->rendermode = 1;
  this->pev->rendercolor[0] = 0.0;
  this->pev->rendercolor[1] = 0.0;
  this->pev->rendercolor[2] = 0.0;
  this->pev->renderfx = 0xe;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  local_2c = 0;
  local_28 = local_2c;
  local_24 = local_2c;
  local_1c = local_2c;
  local_18 = local_2c;
  local_14 = local_2c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Fall;
  this->pev->nextthink = gpGlobals->time + 0.1;
  CBaseAnimating::ResetSequenceInfo((CBaseAnimating *)this);
  this->pev->framerate = 1.0;
  SetupPowerUp(this,*(undefined4 *)&this->field_0x84,0xffffffff,0,1);
  return;
}

/* 000983cc  CTSPowerUp::Fall  (191 bytes)
 * undefined Fall(void)
 */
/* CTSPowerUp::Fall(void) */

void __thiscall CTSPowerUp::Fall(CTSPowerUp *this)

{
  if (((float)nopowerup._12_4_ == 1.0) || ((byte)(TSGameRules - 2U) < 2)) {
    this->pev->nextthink = gpGlobals->time + 5.0;
    this->pev->effects = 0x80;
  }
  else {
    this->pev->nextthink = gpGlobals->time + 0.1;
    if ((this->pev->flags & 0x200) != 0) {
      OnGround(this);
    }
    if ((this->field_0x80 == '\0') && (*(float *)&this->field_0x88 < gpGlobals->time)) {
      UTIL_Remove((int *)this);
    }
  }
  return;
}

/* 0009848c  CTSPowerUp::OnGround  (188 bytes)
 * undefined OnGround(void)
 */
/* CTSPowerUp::OnGround(void) */

void __thiscall CTSPowerUp::OnGround(CTSPowerUp *this)

{
  int *piVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  this->pev->solid = 1;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 & 0xffffff7f;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 2;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  local_1c = 0x41800000;
  local_14 = 0x42800000;
  local_2c = 0xc1800000;
  local_24 = 0;
  local_28 = local_2c;
  local_18 = local_1c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = WaitTouch;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = WaitThink;
  return;
}

/* 00098548  CTSPowerUp::Precache  (39 bytes)
 * undefined Precache(void)
 */
/* CTSPowerUp::Precache(void) */

void CTSPowerUp::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/powerup.mdl");
  return;
}

/* 00098570  CTSPowerUp::WaitThink  (162 bytes)
 * undefined WaitThink(void)
 */
/* CTSPowerUp::WaitThink(void) */

void __thiscall CTSPowerUp::WaitThink(CTSPowerUp *this)

{
  float fVar1;
  
  CBaseAnimating::StudioFrameAdvance((CBaseAnimating *)this,0.0);
  this->pev->nextthink = gpGlobals->time + 1.0;
  if (this->field_0x80 == '\0') {
    if (gpGlobals->time <= *(float *)&this->field_0x88) {
      fVar1 = (*(float *)&this->field_0x88 - gpGlobals->time) * 0.033333335 * 255.0;
      if (255.0 < fVar1) {
        fVar1 = 255.0;
      }
      this->pev->renderamt = fVar1;
    }
    else {
      UTIL_Remove((int *)this);
    }
  }
  return;
}

/* 00098614  CTSPowerUp::WaitTouch  (657 bytes)
 * undefined WaitTouch(CBasePlayer * param_1)
 */
/* CTSPowerUp::WaitTouch(CBaseEntity *) */

void __thiscall CTSPowerUp::WaitTouch(CTSPowerUp *this,CBasePlayer *param_1)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  CTSPowerUp *pCVar7;
  vec_t *pvVar8;
  uint uVar9;
  vec_t *pvVar10;
  
  iVar6 = (*param_1->vtable[0x32])(param_1);
  if ((iVar6 != 0) && (iVar6 = (*param_1->vtable[0x2d])(param_1), iVar6 != 0)) {
    bVar3 = false;
    if ((*(int *)&param_1->field_0x728 == 0) ||
       (((*(int *)&param_1->field_0x728 == 1 && (*(int *)&this->field_0x84 == 1)) &&
        (*(int *)&param_1->field_0x730 < 3)))) {
      bVar3 = true;
    }
    bVar4 = false;
    if ((bVar3) || ((param_1->pev->button & 0x20) != 0)) {
      bVar4 = true;
    }
    bVar3 = false;
    if ((bVar4) && (*(int *)&param_1->field_0x724 == 0)) {
      bVar3 = true;
    }
    bVar4 = false;
    if ((bVar3) || ((*(uint *)&this->field_0x84 & 0x1e6) != 0)) {
      bVar4 = true;
    }
    bVar3 = false;
    if (((param_1->pev->button & 0x20) != 0) && (*(int *)&param_1->field_0x728 != 0)) {
      bVar3 = true;
    }
    bVar5 = false;
    if ((bVar3) && ((*(uint *)&this->field_0x84 & 0x1e6) == 0)) {
      bVar5 = true;
    }
    bVar3 = bVar5;
    if (((*(int *)&param_1->field_0x728 == 1) && (bVar3 = false, bVar5)) &&
       (2 < *(int *)&param_1->field_0x730)) {
      bVar3 = true;
    }
    if (bVar4) {
      uVar9 = 0;
      if (bVar3) {
        uVar9 = *(uint *)&param_1->field_0x728;
      }
      iVar6 = PlayerAddPowerUp(param_1,*(uint *)&this->field_0x84,(int)this);
      if (iVar6 != 0) {
        if (uVar9 != 0) {
          pCVar7 = CreatePowerUp(uVar9,-1);
          pvVar8 = param_1->pev->origin;
          pvVar10 = pCVar7->pev->origin;
          for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pvVar10 = *pvVar8;
            pvVar8 = pvVar8 + 1;
            pvVar10 = pvVar10 + 1;
          }
        }
        if (this->field_0x80 == '\0') {
          UTIL_Remove((int *)this);
        }
        else {
          if (this->field_0x81 != '\0') {
            SetupPowerUp(this,0,0xffffffff,0,1);
          }
          *(undefined4 *)&this->field_0x14 = 0;
          *(undefined4 *)&this->field_0x18 = 0;
          piVar1 = &this->pev->effects;
          *piVar1 = *piVar1 | 0x80;
          *(undefined4 *)&this->field_0xc = 0xffff0000;
          *(code **)&this->field_0x10 = Fall;
          fVar2 = gpGlobals->time;
          if (*(int *)&this->field_0x94 < 1) {
            fVar2 = fVar2 + 60.0;
          }
          else if (*(int *)&this->field_0x94 < 0xb) {
            fVar2 = fVar2 + 10.0;
          }
          else {
            iVar6 = *(int *)&this->field_0x94;
            if (0xb4 < iVar6) {
              iVar6 = 0xb4;
            }
            fVar2 = fVar2 + (float)iVar6;
          }
          this->pev->nextthink = fVar2;
          if (this->pev->message != 0) {
            TSHudMessageOne(0,0,0,1,0x1e,gpGlobals->pStringBase + this->pev->message,
                            (int)param_1->pev);
          }
          if (this->pev->target != 0) {
            FireTargets((int)(gpGlobals->pStringBase + this->pev->target),this,this,3,0);
          }
        }
      }
    }
  }
  return;
}

/* 000989a8  CTSPowerUp::CTSPowerUp  (85 bytes)
 * undefined CTSPowerUp(void)
 */
/* CTSPowerUp::CTSPowerUp(void) */

void __thiscall CTSPowerUp::CTSPowerUp(CTSPowerUp *this)

{
  this->vtable = (void **)CBaseEntity_virtual_table;
  this->vtable = (void **)CBaseDelay_virtual_table;
  this->vtable = (void **)CBaseAnimating_virtual_table;
  this->vtable = (void **)CTSPowerUp_virtual_table;
  *(undefined4 *)&this->field_0x84 = 0;
  *(undefined4 *)&this->field_0x98 = 0x3f800000;
  *(undefined4 *)&this->field_0x94 = 0;
  return;
}

