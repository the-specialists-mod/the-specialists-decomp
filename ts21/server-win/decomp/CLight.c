/* mp.dll - CLight (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10021a10  CLight::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CLight::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CLight_10094550,(int)param_1,0x10094514,2);
  return;
}

/* 10021a40  CLight::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CLight::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CLight_10094550,(int)param_1,0x10094514,2);
  return;
}

/* 10021a70  CLight::KeyValue  (172 bytes)
 * undefined KeyValue(int param_1)
 * called by: CEnvLight::KeyValue
 */
void __thiscall CLight::KeyValue(CLight *this,int param_1)

{
  undefined4 uVar1;
  void *this_00;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  
  pcVar5 = *(char **)(param_1 + 4);
  this_00 = (void *)0x6;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_style_10091284;
  do {
    if (this_00 == (void *)0x0) break;
    this_00 = (void *)((int)this_00 + -1);
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x54 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0x6;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_pitch_10094560;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    this->pev->angles[0] = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar3 = 8;
  bVar7 = true;
  pcVar4 = s_pattern_10094558;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar7 = *pcVar5 == *pcVar4;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x58 = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10021b20  CLight::Spawn  (115 bytes)
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
      (*g_engfuncs.pfnLightStyle)(style,&DAT_1009456c);
      return;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      (*g_engfuncs.pfnLightStyle)(style,gpGlobals->pStringBase + *(int *)(param_1 + 0x58));
      return;
    }
    (*g_engfuncs.pfnLightStyle)(style,&DAT_10094568);
  }
  return;
}

/* 10021ba0  CLight::Use  (162 bytes)
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
          val = &DAT_10094568;
        }
        else {
          val = gpGlobals->pStringBase + *(int *)&this->field_0x58;
          iVar1 = *(int *)&this->field_0x54;
        }
        (*g_engfuncs.pfnLightStyle)(iVar1,val);
        this->pev->spawnflags = this->pev->spawnflags & 0xfffffffe;
        return;
      }
      (*g_engfuncs.pfnLightStyle)(*(int *)&this->field_0x54,&DAT_1009456c);
      this->pev->spawnflags = this->pev->spawnflags | 1;
    }
  }
  return;
}

