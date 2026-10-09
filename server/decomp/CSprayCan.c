/* ts_i386.so - CSprayCan (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000db0d4  CSprayCan::Spawn  (239 bytes)
 * undefined Spawn(int param_1)
 */
/* CSprayCan::Spawn(entvars_s *) */

void __thiscall CSprayCan::Spawn(CSprayCan *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  float local_2c [7];
  
  local_2c[0] = *(float *)(param_1 + 8) + 0.0;
  local_2c[1] = *(float *)(param_1 + 0xc) + 0.0;
  local_2c[2] = *(float *)(param_1 + 0x10) + 32.0;
  pfVar2 = local_2c;
  pvVar3 = this->pev->origin;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pvVar3 = (vec_t *)(param_1 + 0x74);
  pvVar4 = this->pev->angles;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  this->pev->owner = *(edict_t **)(param_1 + 0x208);
  this->pev->frame = 0.0;
  this->pev->nextthink = gpGlobals->time + 0.1;
  EMIT_SOUND_DYN((int)this->pev->pContainingEntity,2,"player/sprayer.wav",0x3f800000,0x3f4ccccd,0,
                 100,0.5);
  return;
}

/* 000db1c4  CSprayCan::Think  (406 bytes)
 * undefined Think(void)
 */
/* CSprayCan::Think(void) */

void __thiscall CSprayCan::Think(CSprayCan *this)

{
  float fVar1;
  edict_t *peVar2;
  entvars_t *peVar3;
  int iVar4;
  int iVar5;
  CBasePlayer *this_00;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [76];
  
  peVar2 = this->pev->owner;
  this_00 = (CBasePlayer *)0x0;
  if (peVar2 != (edict_t *)0x0) {
    this_00 = peVar2->pvPrivateData;
  }
  if (this_00 == (CBasePlayer *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = CBasePlayer::GetCustomDecalFrames(this_00);
  }
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->owner);
  UTIL_MakeVectors(this->pev->angles);
  peVar3 = this->pev;
  local_6c = peVar3->origin[0] + gpGlobals->v_forward[0] * 128.0;
  local_68 = peVar3->origin[1] + gpGlobals->v_forward[1] * 128.0;
  local_64 = peVar3->origin[2] + gpGlobals->v_forward[2] * 128.0;
  UTIL_TraceLine(this->pev->origin,&local_6c,1,this->pev->owner,local_5c);
  if (iVar4 == -1) {
    UTIL_DecalTrace((int)local_5c,10);
  }
  else {
    UTIL_PlayerDecalTrace((int)local_5c,iVar5,(int)ROUND(this->pev->frame),1);
    fVar1 = this->pev->frame;
    this->pev->frame = fVar1 + 1.0;
    if (fVar1 < (float)(iVar4 + -1)) goto LAB_000db33d;
  }
  UTIL_Remove((int *)this);
LAB_000db33d:
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 000de514  CSprayCan::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CSprayCan::ObjectCaps(void) */

undefined4 CSprayCan::ObjectCaps(void)

{
  return 0x80000000;
}

