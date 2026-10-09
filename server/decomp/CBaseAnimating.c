/* ts_i386.so - CBaseAnimating (21 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a3500  CBaseAnimating::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBaseAnimating::Save(CSave &) */

undefined4 __thiscall CBaseAnimating::Save(CBaseAnimating *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Save((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CBaseAnimating",(int)this,(int *)m_SaveData,5);
  }
  return uVar2;
}

/* 000a3550  CBaseAnimating::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBaseAnimating::Restore(CRestore &) */

undefined4 __thiscall CBaseAnimating::Restore(CBaseAnimating *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Restore((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CBaseAnimating",(int)this,(int)m_SaveData,5);
  }
  return uVar2;
}

/* 000a35a0  CBaseAnimating::StudioFrameAdvance  (342 bytes)
 * int StudioFrameAdvance(float param_1)
 */
/* CBaseAnimating::StudioFrameAdvance(float) */

int __thiscall CBaseAnimating::StudioFrameAdvance(CBaseAnimating *this,float param_1)

{
  float fVar1;
  entvars_t *peVar2;
  uint uVar3;
  float fVar4;
  
  if (param_1 == 0.0) {
    param_1 = gpGlobals->time - this->pev->animtime;
    uVar3 = (uint)gpGlobals >> 0x10;
    if (param_1 < 0.001 || (param_1 == 0.001) != 0) {
      this->pev->animtime = gpGlobals->time;
      return CONCAT22((short)uVar3,
                      (ushort)(param_1 < 0.001) << 8 | (ushort)NAN(param_1) << 10 |
                      (ushort)(param_1 == 0.001) << 0xe);
    }
  }
  if (this->pev->animtime == 0.0) {
    param_1 = 0.0;
  }
  peVar2 = this->pev;
  peVar2->frame = param_1 * *(float *)&this[1].field_0x8 * peVar2->framerate + peVar2->frame;
  this->pev->animtime = gpGlobals->time;
  fVar1 = this->pev->frame;
  if ((fVar1 < 0.0) ||
     (fVar4 = (float)CONCAT22((short)((uint)this->pev >> 0x10),
                              (ushort)(fVar1 < 256.0) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == 256.0) << 0xe), fVar1 >= 256.0)) {
    if (*(int *)&this[1].field_0x18 == 0) {
      if (this->pev->frame < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = 255.0;
      }
      this->pev->frame = fVar4;
    }
    else {
      fVar1 = this->pev->frame;
      fVar4 = (float)(int)ROUND(fVar1 * 0.00390625);
      this->pev->frame = fVar1 - (float)(int)fVar4 * 256.0;
    }
    *(undefined4 *)&this[1].field_0x14 = 1;
  }
  return (int)fVar4;
}

/* 000a36fc  CBaseAnimating::LookupActivity  (65 bytes)
 * undefined LookupActivity(int param_1)
 */
/* CBaseAnimating::LookupActivity(int) */

void __thiscall CBaseAnimating::LookupActivity(CBaseAnimating *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  ::LookupActivity((int)pvVar1,this->pev,param_1);
  return;
}

/* 000a3740  CBaseAnimating::LookupActivityHeaviest  (65 bytes)
 * undefined LookupActivityHeaviest(int param_1)
 */
/* CBaseAnimating::LookupActivityHeaviest(int) */

void __thiscall CBaseAnimating::LookupActivityHeaviest(CBaseAnimating *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  ::LookupActivityHeaviest((int)pvVar1,this->pev,param_1);
  return;
}

/* 000a3784  CBaseAnimating::LookupSequence  (64 bytes)
 * undefined LookupSequence(char * param_1)
 */
/* CBaseAnimating::LookupSequence(char const *) */

void __thiscall CBaseAnimating::LookupSequence(CBaseAnimating *this,char *param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  ::LookupSequence((int)pvVar1,param_1);
  return;
}

/* 000a37c4  CBaseAnimating::ResetSequenceInfo  (125 bytes)
 * undefined ResetSequenceInfo(void)
 */
/* CBaseAnimating::ResetSequenceInfo(void) */

void __thiscall CBaseAnimating::ResetSequenceInfo(CBaseAnimating *this)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  GetSequenceInfo((int)pvVar1,(int)pvVar1,(int)this->pev,(float *)&this[1].field_0x8,
                  (float *)&this[1].field_0xc);
  uVar2 = GetSequenceFlags(this);
  *(uint *)&this[1].field_0x18 = uVar2 & 1;
  this->pev->animtime = gpGlobals->time;
  this->pev->framerate = 1.0;
  *(undefined4 *)&this[1].field_0x14 = 0;
  *(float *)&this[1].field_0x10 = gpGlobals->time;
  return;
}

/* 000a3844  CBaseAnimating::GetSequenceFlags  (61 bytes)
 * undefined GetSequenceFlags(void)
 */
/* CBaseAnimating::GetSequenceFlags(void) */

void __thiscall CBaseAnimating::GetSequenceFlags(CBaseAnimating *this)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  ::GetSequenceFlags((int)pvVar1,(int)this->pev);
  return;
}

/* 000a3884  CBaseAnimating::DispatchAnimEvents  (262 bytes)
 * undefined DispatchAnimEvents(int * param_1)
 */
/* CBaseAnimating::DispatchAnimEvents(float) */

void CBaseAnimating::DispatchAnimEvents(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  int iVar8;
  undefined4 local_1c [3];
  
  pvVar7 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*param_1 + 0x208));
  if (pvVar7 == (void *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,"Gibbed monster is thinking!\n");
  }
  else {
    iVar8 = *param_1;
    fVar1 = (float)param_1[0x1d];
    fVar2 = *(float *)(iVar8 + 0x134);
    fVar3 = (float)param_1[0x1b];
    fVar4 = *(float *)(iVar8 + 0x138);
    fVar5 = *(float *)(iVar8 + 0x130);
    fVar6 = (float)param_1[0x1b] * 0.1 * *(float *)(iVar8 + 0x138) + *(float *)(iVar8 + 0x130);
    param_1[0x1d] = (int)(*(float *)(iVar8 + 0x134) + 0.1);
    param_1[0x1e] = 0;
    if ((256.0 <= fVar6) || (fVar6 <= 0.0)) {
      param_1[0x1e] = 1;
    }
    iVar8 = 0;
    while( true ) {
      iVar8 = GetAnimationEvent((int)pvVar7,*param_1,local_1c,
                                (fVar1 - fVar2) * fVar3 * fVar4 + fVar5,fVar6,iVar8);
      if (iVar8 == 0) break;
      (**(code **)(param_1[0x18] + 0x114))(param_1,local_1c);
    }
  }
  return;
}

/* 000a3990  CBaseAnimating::SetBoneController  (72 bytes)
 * undefined SetBoneController(int param_1, float param_2)
 */
/* CBaseAnimating::SetBoneController(int, float) */

void __thiscall CBaseAnimating::SetBoneController(CBaseAnimating *this,int param_1,float param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  SetController((int)pvVar1,(int)this->pev,param_1,param_2);
  return;
}

/* 000a39d8  CBaseAnimating::InitBoneControllers  (113 bytes)
 * undefined InitBoneControllers(void)
 */
/* CBaseAnimating::InitBoneControllers(void) */

void __thiscall CBaseAnimating::InitBoneControllers(CBaseAnimating *this)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  SetController((int)pvVar1,(int)this->pev,0,0.0);
  SetController((int)pvVar1,(int)this->pev,1,0.0);
  SetController((int)pvVar1,(int)this->pev,2,0.0);
  SetController((int)pvVar1,(int)this->pev,3,0.0);
  return;
}

/* 000a3a4c  CBaseAnimating::SetBlending  (72 bytes)
 * undefined SetBlending(int param_1, float param_2)
 */
/* CBaseAnimating::SetBlending(int, float) */

void __thiscall CBaseAnimating::SetBlending(CBaseAnimating *this,int param_1,float param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  ::SetBlending((int)pvVar1,(int)this->pev,param_1,param_2);
  return;
}

/* 000a3a94  CBaseAnimating::GetBonePosition  (57 bytes)
 * undefined GetBonePosition(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* CBaseAnimating::GetBonePosition(int, Vector &, Vector &) */

void __thiscall
CBaseAnimating::GetBonePosition(CBaseAnimating *this,int param_1,float *param_2,float *param_3)

{
  (*g_engfuncs.pfnGetBonePosition)(this->pev->pContainingEntity,param_1,param_2,param_3);
  return;
}

/* 000a3ad0  CBaseAnimating::GetAttachment  (57 bytes)
 * undefined GetAttachment(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* CBaseAnimating::GetAttachment(int, Vector &, Vector &) */

void __thiscall
CBaseAnimating::GetAttachment(CBaseAnimating *this,int param_1,float *param_2,float *param_3)

{
  (*g_engfuncs.pfnGetAttachment)(this->pev->pContainingEntity,param_1,param_2,param_3);
  return;
}

/* 000a3b0c  CBaseAnimating::FindTransition  (121 bytes)
 * uint FindTransition(int param_1, int param_2, int * param_3)
 */
/* CBaseAnimating::FindTransition(int, int, int *) */

uint __thiscall
CBaseAnimating::FindTransition(CBaseAnimating *this,int param_1,int param_2,int *param_3)

{
  void *pvVar1;
  uint uVar2;
  int local_14;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  if (param_3 == (int *)0x0) {
    uVar2 = ::FindTransition((int)pvVar1,param_1,param_2,&local_14);
    uVar2 = uVar2 | (local_14 == 1) - 1;
  }
  else {
    uVar2 = ::FindTransition((int)pvVar1,param_1,param_2,param_3);
  }
  return uVar2;
}

/* 000a3b88  CBaseAnimating::GetAutomovement  (1 bytes)
 * undefined GetAutomovement(void)
 */
/* CBaseAnimating::GetAutomovement(Vector &, Vector &, float) */

void CBaseAnimating::GetAutomovement(void)

{
  return;
}

/* 000a3b8c  CBaseAnimating::SetBodygroup  (72 bytes)
 * undefined SetBodygroup(int param_1, int param_2)
 */
/* CBaseAnimating::SetBodygroup(int, int) */

void __thiscall CBaseAnimating::SetBodygroup(CBaseAnimating *this,int param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  ::SetBodygroup((int)pvVar1,(int)this->pev,param_1,param_2);
  return;
}

/* 000a3bd4  CBaseAnimating::GetBodygroup  (65 bytes)
 * undefined GetBodygroup(int param_1)
 */
/* CBaseAnimating::GetBodygroup(int) */

void __thiscall CBaseAnimating::GetBodygroup(CBaseAnimating *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  ::GetBodygroup((int)pvVar1,(int)this->pev,param_1);
  return;
}

/* 000a3c18  CBaseAnimating::ExtractBbox  (75 bytes)
 * undefined ExtractBbox(int param_1, undefined4 * param_2, undefined4 * param_3)
 */
/* CBaseAnimating::ExtractBbox(int, float *, float *) */

void __thiscall
CBaseAnimating::ExtractBbox
          (CBaseAnimating *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  ::ExtractBbox((int)pvVar1,param_1,param_2,param_3);
  return;
}

/* 000a3c64  CBaseAnimating::SetSequenceBox  (719 bytes)
 * undefined SetSequenceBox(void)
 */
/* CBaseAnimating::SetSequenceBox(void) */

void __thiscall CBaseAnimating::SetSequenceBox(CBaseAnimating *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  longdouble lVar11;
  longdouble lVar12;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_8c [8];
  float local_6c;
  float local_68;
  float local_5c;
  float local_58;
  float local_40;
  float local_3c [4];
  float local_2c [7];
  
  iVar5 = ExtractBbox(this,this->pev->sequence,local_2c,local_3c);
  if (iVar5 != 0) {
    local_40 = this->pev->angles[1] * 0.017453292;
    lVar11 = (longdouble)local_40;
    lVar12 = (longdouble)fcos(lVar11);
    local_5c = (float)lVar12;
    lVar12 = (longdouble)fsin(lVar11);
    local_58 = (float)lVar12;
    lVar12 = (longdouble)fsin(lVar11);
    local_6c = (float)-lVar12;
    lVar11 = (longdouble)fcos(lVar11);
    local_68 = (float)lVar11;
    pfVar8 = local_2c;
    pfVar9 = local_8c;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + 1;
    }
    pfVar8 = local_3c;
    pfVar9 = local_8c + 3;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + 1;
    }
    local_9c = 9999.0;
    local_ac = -9999.0;
    iVar5 = 0;
    iVar10 = 0;
    local_a8 = local_ac;
    local_a4 = local_ac;
    local_98 = local_9c;
    local_94 = local_9c;
    do {
      iVar6 = 0;
      fVar3 = local_58 * *(float *)((int)local_8c + iVar10);
      iVar7 = 0;
      do {
        fVar1 = *(float *)((int)local_8c + iVar7 + 4);
        fVar2 = local_5c * *(float *)((int)local_8c + iVar10) + local_6c * fVar1;
        fVar4 = local_68 * fVar1 + fVar3;
        if (fVar2 < local_9c) {
          local_9c = fVar2;
        }
        if (local_ac < fVar2) {
          local_ac = fVar2;
        }
        if (fVar4 < local_98) {
          local_98 = fVar4;
        }
        if (local_a8 < fVar4) {
          local_a8 = fVar4;
        }
        if (local_8c[2] < local_94) {
          local_94 = local_8c[2];
        }
        if (local_a4 < local_8c[2]) {
          local_a4 = local_8c[2];
        }
        fVar1 = local_68 * fVar1 + fVar3;
        if (fVar2 < local_9c) {
          local_9c = fVar2;
        }
        if (local_ac < fVar2) {
          local_ac = fVar2;
        }
        if (fVar1 < local_98) {
          local_98 = fVar1;
        }
        if (local_a8 < fVar1) {
          local_a8 = fVar1;
        }
        if (local_8c[5] < local_94) {
          local_94 = local_8c[5];
        }
        if (local_a4 < local_8c[5]) {
          local_a4 = local_8c[5];
        }
        iVar7 = iVar7 + 0xc;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      iVar10 = iVar10 + 0xc;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    local_94 = 0.0;
    local_a4 = 1.0;
    UTIL_SetSize((int)this->pev,&local_9c,&local_ac);
  }
  return;
}

/* 000a3f7c  CBaseAnimating::HandleAnimEvent  (1 bytes)
 * undefined HandleAnimEvent(void)
 */
/* CBaseAnimating::HandleAnimEvent(MonsterEvent_t *) */

void CBaseAnimating::HandleAnimEvent(void)

{
  return;
}

