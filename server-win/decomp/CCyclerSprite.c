/* mp.dll - CCyclerSprite (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100274d0  CCyclerSprite::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CCyclerSprite::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CCyclerSprite_1009f5f0,(int)param_1,0x1009f528,3);
  return;
}

/* 10027500  CCyclerSprite::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CCyclerSprite::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CCyclerSprite_1009f5f0,(int)param_1,&DAT_1009f528,3);
  return;
}

/* 10027530  CCyclerSprite::Spawn  (207 bytes)
 * undefined Spawn()
 */
void __fastcall CCyclerSprite::Spawn(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 3;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(float *)(param_1 + 0x58) = gpGlobals->time;
  (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = (*g_engfuncs.pfnModelFrames)(*(int *)(*(int *)(param_1 + 4) + 0xb4));
  *(float *)(param_1 + 0x5c) = (float)iVar1 - 1.0;
  return;
}

/* 10027600  CCyclerSprite::Think  (92 bytes)
 * undefined Think(void * param_1)
 */
void __fastcall CCyclerSprite::Think(void *param_1)

{
  if ((*(int *)((int)param_1 + 0x54) != 0) && (1.0 < *(float *)((int)param_1 + 0x5c))) {
    Animate(param_1,(gpGlobals->time - *(float *)((int)param_1 + 0x58)) *
                    *(float *)(*(int *)((int)param_1 + 4) + 0x138));
  }
  *(float *)(*(int *)((int)param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  *(float *)((int)param_1 + 0x58) = gpGlobals->time;
  return;
}

/* 10027660  CCyclerSprite::Use  (53 bytes)
 * undefined Use()
 */
void __fastcall CCyclerSprite::Use(int param_1)

{
  *(uint *)(param_1 + 0x54) = (uint)(*(int *)(param_1 + 0x54) == 0);
  (*g_engfuncs.pfnAlertMessage)
            (at_console,s_Sprite___s_1009f600,
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  return;
}

/* 100276a0  CCyclerSprite::TakeDamage  (34 bytes)
 * undefined TakeDamage()
 */
undefined4 __fastcall CCyclerSprite::TakeDamage(CCyclerSprite *param_1)

{
  if (1.0 < *(float *)&param_1->field_0x5c) {
    Animate(param_1,1.0);
  }
  return 1;
}

/* 100276d0  CCyclerSprite::Animate  (63 bytes)
 * undefined Animate(float param_1)
 * called by: CCyclerSprite::TakeDamage, CCyclerSprite::Think
 */
void __thiscall CCyclerSprite::Animate(CCyclerSprite *this,float param_1)

{
  entvars_t *peVar1;
  float10 fVar2;
  
  this->pev->frame = param_1 + this->pev->frame;
  if (0.0 < *(float *)&this->field_0x5c) {
    peVar1 = this->pev;
    fVar2 = (float10)FUN_1007dc8a(this);
    peVar1->frame = (float)fVar2;
  }
  return;
}

/* 10027da0  CCyclerSprite::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CCyclerSprite::ObjectCaps(void)

{
  return 0x8000000a;
}

