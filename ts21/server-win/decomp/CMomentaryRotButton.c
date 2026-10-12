/* mp.dll - CMomentaryRotButton (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000a9a0  CMomentaryRotButton::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CMomentaryRotButton::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CMomentaryRotButton_100915f0,(int)param_1,0x10091090
                     ,6);
  return;
}

/* 1000a9d0  CMomentaryRotButton::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CMomentaryRotButton_100915f0,(int)param_1,0x10091090,6);
  return;
}

/* 1000aa10  CMomentaryRotButton::Spawn  (453 bytes)
 * undefined Spawn()
 */
void __fastcall CMomentaryRotButton::Spawn(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char *s;
  int iVar6;
  float fVar7;
  
  CBaseToggle::AxisDir(*(int *)(param_1 + 4));
  if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) == 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0x42c80000;
  }
  fVar1 = *(float *)(param_1 + 0x78);
  iVar6 = *(int *)(param_1 + 4);
  if (0.0 <= *(float *)(param_1 + 0x78)) {
    *(float *)(param_1 + 0xfc) = *(float *)(iVar6 + 0x50);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(iVar6 + 0x58);
    fVar2 = *(float *)(iVar6 + 0x44);
    fVar3 = *(float *)(iVar6 + 0x48);
    fVar4 = *(float *)(iVar6 + 0x50);
    fVar5 = *(float *)(iVar6 + 0x54);
    fVar7 = fVar1 * *(float *)(iVar6 + 0x4c) + *(float *)(iVar6 + 0x58);
    *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
    *(float *)(param_1 + 0x108) = fVar1 * fVar2 + fVar4;
    *(float *)(param_1 + 0x10c) = fVar1 * fVar3 + fVar5;
  }
  else {
    fVar2 = *(float *)(iVar6 + 0x48);
    fVar3 = *(float *)(iVar6 + 0x4c);
    fVar4 = *(float *)(iVar6 + 0x54);
    fVar5 = *(float *)(iVar6 + 0x58);
    *(float *)(param_1 + 0xfc) = fVar1 * *(float *)(iVar6 + 0x44) + *(float *)(iVar6 + 0x50);
    *(float *)(param_1 + 0x100) = fVar1 * fVar2 + fVar4;
    *(float *)(param_1 + 0x104) = fVar1 * fVar3 + fVar5;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(iVar6 + 0x50);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(iVar6 + 0x54);
    fVar7 = *(float *)(iVar6 + 0x58);
    *(float *)(param_1 + 0x78) = -*(float *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0xf4) = 1;
  }
  *(float *)(param_1 + 0x110) = fVar7;
  if ((*(byte *)(iVar6 + 0x1a0) & 1) == 0) {
    *(undefined4 *)(iVar6 + 0x10c) = 0;
  }
  else {
    *(undefined4 *)(iVar6 + 0x10c) = 4;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  FUN_100679a0();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  s = ButtonSound(*(undefined4 *)(param_1 + 0x114));
  (*g_engfuncs.pfnPrecacheSound)(s);
  iVar6 = (*g_engfuncs.pfnAllocString)(s);
  *(int *)(*(int *)(param_1 + 4) + 0x1e8) = iVar6;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return;
}

/* 1000abe0  CMomentaryRotButton::KeyValue  (128 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CMomentaryRotButton::KeyValue(CMomentaryRotButton *this,int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float10 fVar6;
  
  puVar2 = (undefined1 *)0xc;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_returnspeed_10091604;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0xf8 = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000007;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_sounds_10090ee8;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x114 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 1000aca0  CMomentaryRotButton::Use  (84 bytes)
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
  FUN_1000ad00(param_1,*(float *)(*(int *)((int)param_1 + 4) + 0xac),1);
  FUN_1000af00(param_1,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0xac));
  return;
}

/* 1000af70  CMomentaryRotButton::Off  (119 bytes)
 * void Off(void)
 */
/* public: void __thiscall CMomentaryRotButton::Off(void) */

void __thiscall CMomentaryRotButton::Off(CMomentaryRotButton *this)

{
  entvars_t *peVar1;
  
                    /* 0xaf70  73  ?Off@CMomentaryRotButton@@QAEXXZ */
  peVar1 = this->pev;
  peVar1->avelocity[0] = DAT_1009f4a8;
  peVar1->avelocity[1] = DAT_1009f4ac;
  peVar1->avelocity[2] = DAT_1009f4b0;
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

/* 1000aff0  CMomentaryRotButton::Return  (86 bytes)
 * void Return(void)
 */
/* public: void __thiscall CMomentaryRotButton::Return(void) */

void __thiscall CMomentaryRotButton::Return(CMomentaryRotButton *this)

{
  float fVar1;
  float10 fVar2;
  
                    /* 0xaff0  84  ?Return@CMomentaryRotButton@@QAEXXZ */
  fVar2 = CBaseToggle::AxisDelta
                    ((byte_conflict)this->pev->spawnflags,this->pev->angles,
                     (float *)&this->field_0xfc);
  fVar1 = (float)(fVar2 / (float10)*(float *)&this->field_0x78);
  FUN_1000ad00(this,fVar1,0);
  if (0.0 < fVar1) {
    FUN_1000af00(this,fVar1);
  }
  return;
}

/* 1000b6f0  CMomentaryRotButton::ObjectCaps  (21 bytes)
 * undefined ObjectCaps()
 */
int __fastcall CMomentaryRotButton::ObjectCaps(int param_1)

{
  return ((int)(char)~*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1U) << 4;
}

