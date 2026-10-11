/* mp.dll - CMomentaryRotButton (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000c930  CMomentaryRotButton::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CMomentaryRotButton::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CMomentaryRotButton_1009c698,(int)param_1,0x1009c138
                     ,6);
  return;
}

/* 1000c960  CMomentaryRotButton::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CMomentaryRotButton::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CMomentaryRotButton_1009c698,(int)param_1,&DAT_1009c138,6);
  return;
}

/* 1000c9a0  CMomentaryRotButton::Spawn  (510 bytes)
 * undefined Spawn()
 */
void __fastcall CMomentaryRotButton::Spawn(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  char *s;
  int iVar9;
  
  CBaseToggle::AxisDir(*(int *)(param_1 + 4));
  if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) == 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0x42c80000;
  }
  if (0.0 <= *(float *)(param_1 + 0x78)) {
    iVar9 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0xfc) = *(float *)(iVar9 + 0x50);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(iVar9 + 0x54);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(iVar9 + 0x58);
    fVar2 = *(float *)(iVar9 + 0x44);
    fVar3 = *(float *)(iVar9 + 0x48);
    fVar4 = *(float *)(iVar9 + 0x4c);
    fVar5 = *(float *)(iVar9 + 0x50);
    fVar6 = *(float *)(iVar9 + 0x54);
    fVar7 = *(float *)(iVar9 + 0x58);
    *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
    *(float *)(param_1 + 0x108) = fVar1 * fVar2 + fVar5;
    *(float *)(param_1 + 0x10c) = fVar1 * fVar3 + fVar6;
    *(float *)(param_1 + 0x110) = fVar1 * fVar4 + fVar7;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x78);
    iVar9 = *(int *)(param_1 + 4);
    fVar2 = *(float *)(iVar9 + 0x48);
    fVar3 = *(float *)(iVar9 + 0x4c);
    fVar4 = *(float *)(iVar9 + 0x54);
    fVar5 = *(float *)(iVar9 + 0x58);
    *(float *)(param_1 + 0xfc) = fVar1 * *(float *)(iVar9 + 0x44) + *(float *)(iVar9 + 0x50);
    *(float *)(param_1 + 0x100) = fVar1 * fVar2 + fVar4;
    *(float *)(param_1 + 0x104) = fVar1 * fVar3 + fVar5;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(iVar9 + 0x50);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(iVar9 + 0x54);
    uVar8 = *(undefined4 *)(iVar9 + 0x58);
    *(float *)(param_1 + 0x78) = -*(float *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x110) = uVar8;
    *(undefined4 *)(param_1 + 0xf4) = 1;
  }
  if ((*(byte *)(iVar9 + 0x1a0) & 1) == 0) {
    *(undefined4 *)(iVar9 + 0x10c) = 0;
  }
  else {
    *(undefined4 *)(iVar9 + 0x10c) = 4;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  s = ButtonSound(*(undefined4 *)(param_1 + 0x114));
  (*g_engfuncs.pfnPrecacheSound)(s);
  iVar9 = (*g_engfuncs.pfnAllocString)(s);
  *(int *)(*(int *)(param_1 + 4) + 0x1e8) = iVar9;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return;
}

/* 1000cba0  CMomentaryRotButton::KeyValue  (196 bytes)
 * undefined KeyValue()
 */
void __thiscall CMomentaryRotButton::KeyValue(CBaseToggle *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  CBaseToggle *this;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_returnspeed_1009c6ac;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000cbd8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000cbdd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000cbd8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000cbdd:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0xf8) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_sounds_1009bf90;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000cc2c:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000cc31;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000cc2c;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000cc31:
  if (iVar3 == 0) {
    uVar5 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x114) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue(param_1,param_2);
  return;
}

/* 1000ccb0  CMomentaryRotButton::Use  (84 bytes)
 * undefined Use(void * param_1)
 */
void __fastcall CMomentaryRotButton::Use(void *param_1)

{
  float10 fVar1;
  
  fVar1 = CBaseToggle::AxisDelta
                    ((byte_conflict)*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x1a0),
                     (float *)(*(int *)((int)param_1 + 4) + 0x50),(float *)((int)param_1 + 0xfc));
  *(float *)(*(int *)((int)param_1 + 4) + 0xac) =
       (float)(fVar1 / (float10)*(float *)((int)param_1 + 0x78));
  FUN_1000cd10(param_1,*(float *)(*(int *)((int)param_1 + 4) + 0xac),1);
  FUN_1000cf50(param_1,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0xac));
  return;
}

/* 1000cfc0  CMomentaryRotButton::Off  (117 bytes)
 * void Off(void)
 */
/* public: void __thiscall CMomentaryRotButton::Off(void) */

void __thiscall CMomentaryRotButton::Off(CMomentaryRotButton *this)

{
  entvars_t *peVar1;
  
                    /* 0xcfc0  78  ?Off@CMomentaryRotButton@@QAEXXZ */
  peVar1 = this->pev;
  peVar1->avelocity[0] = DAT_100ae498;
  peVar1->avelocity[1] = DAT_100ae49c;
  peVar1->avelocity[2] = DAT_100ae4a0;
  peVar1 = this->pev;
  *(undefined4 *)&this->field_0xf0 = 0;
  if (((peVar1->spawnflags & 0x10) != 0) && (0.0 < *(float *)&this->field_0xf8)) {
    *(code **)&this->field_0x10 = Return;
    peVar1->nextthink = peVar1->ltime + 0.1;
    *(undefined4 *)&this->field_0xf4 = 0xffffffff;
    return;
  }
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 1000d040  CMomentaryRotButton::Return  (84 bytes)
 * void Return(void)
 */
/* public: void __thiscall CMomentaryRotButton::Return(void) */

void __thiscall CMomentaryRotButton::Return(CMomentaryRotButton *this)

{
  float fVar1;
  float10 fVar2;
  
                    /* 0xd040  90  ?Return@CMomentaryRotButton@@QAEXXZ */
  fVar2 = CBaseToggle::AxisDelta
                    ((byte_conflict)this->pev->spawnflags,this->pev->angles,
                     (float *)&this->field_0xfc);
  fVar1 = (float)(fVar2 / (float10)*(float *)&this->field_0x78);
  FUN_1000cd10(this,fVar1,0);
  if (0.0 < fVar1) {
    FUN_1000cf50(this,fVar1);
  }
  return;
}

/* 1000d850  CMomentaryRotButton::ObjectCaps  (21 bytes)
 * undefined ObjectCaps()
 */
int __fastcall CMomentaryRotButton::ObjectCaps(int param_1)

{
  return ((int)(char)~(byte)*(undefined4 *)(*(int *)(param_1 + 4) + 0x1a0) & 1U) << 4;
}

