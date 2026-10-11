/* mp.dll - CLight (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029870  CLight::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CLight::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CLight_1009f83c,(int)param_1,0x1009f800,2);
  return;
}

/* 100298a0  CLight::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CLight::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CLight_1009f83c,(int)param_1,&DAT_1009f800,2);
  return;
}

/* 100298d0  CLight::KeyValue  (274 bytes)
 * undefined KeyValue(int param_1)
 * called by: CEnvLight::KeyValue
 */
void __thiscall CLight::KeyValue(CLight *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  CLight *this_00;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_1 + 4);
  pcVar7 = s_style_1009c32c;
  pbVar2 = pbVar5;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CLight *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10029908:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002990d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CLight *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10029908;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002990d:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x54 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_pitch_1009f84c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CLight *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10029959:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002995e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CLight *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10029959;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002995e:
  if (iVar3 == 0) {
    fVar9 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    this->pev->angles[0] = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_pattern_1009f844;
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100299ad:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100299b2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100299ad;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100299b2:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x58 = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 100299f0  CLight::Spawn  (115 bytes)
 * undefined Spawn(int param_1)
 * called by: CEnvLight::Spawn
 */
void __fastcall CLight::Spawn(int param_1)

{
  int iVar1;
  int style;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x1cc) == 0) {
    (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(iVar1 + 0x208));
    return;
  }
  style = *(int *)(param_1 + 0x54);
  if (0x1f < style) {
    if ((*(byte *)(iVar1 + 0x1a0) & 1) != 0) {
      (*g_engfuncs.pfnLightStyle)(style,&DAT_1009f858);
      return;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      (*g_engfuncs.pfnLightStyle)(style,gpGlobals->pStringBase + *(int *)(param_1 + 0x58));
      return;
    }
    (*g_engfuncs.pfnLightStyle)(style,&DAT_1009f854);
  }
  return;
}

/* 10029a70  CLight::Use  (162 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3)
 */
void __thiscall CLight::Use(CLight *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *val;
  
  if (0x1f < *(int *)&this->field_0x54) {
    iVar1 = CBaseEntity::ShouldToggle(param_3,~this->pev->spawnflags & 1);
    if (iVar1 != 0) {
      if ((this->pev->spawnflags & 1) != 0) {
        if (*(int *)&this->field_0x58 == 0) {
          iVar1 = *(int *)&this->field_0x54;
          val = &DAT_1009f854;
        }
        else {
          val = gpGlobals->pStringBase + *(int *)&this->field_0x58;
          iVar1 = *(int *)&this->field_0x54;
        }
        (*g_engfuncs.pfnLightStyle)(iVar1,val);
        this->pev->spawnflags = this->pev->spawnflags & 0xfffffffe;
        return;
      }
      (*g_engfuncs.pfnLightStyle)(*(int *)&this->field_0x54,&DAT_1009f858);
      this->pev->spawnflags = this->pev->spawnflags | 1;
    }
  }
  return;
}

