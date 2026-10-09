/* ts_i386.so - CTargetCDAudio (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e6d60  CTargetCDAudio::KeyValue  (100 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTargetCDAudio::KeyValue(KeyValueData_s *) */

void __thiscall CTargetCDAudio::KeyValue(CTargetCDAudio *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  longdouble lVar3;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"radius");
  if (iVar2 == 0) {
    peVar1 = this->pev;
    lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    peVar1->scale = (float)lVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 000e6dc8  CTargetCDAudio::Spawn  (90 bytes)
 * undefined Spawn(void)
 */
/* CTargetCDAudio::Spawn(void) */

void __thiscall CTargetCDAudio::Spawn(CTargetCDAudio *this)

{
  this->pev->solid = 0;
  this->pev->movetype = 0;
  if (0.0 < this->pev->scale) {
    this->pev->nextthink = gpGlobals->time + 1.0;
  }
  return;
}

/* 000e6e24  CTargetCDAudio::Use  (33 bytes)
 * undefined Use(CTargetCDAudio * param_1)
 */
/* CTargetCDAudio::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTargetCDAudio::Use(CTargetCDAudio *param_1)

{
  Play(param_1);
  return;
}

/* 000e6e48  CTargetCDAudio::Think  (191 bytes)
 * undefined Think(void)
 */
/* CTargetCDAudio::Think(void) */

void __thiscall CTargetCDAudio::Think(CTargetCDAudio *this)

{
  entvars_t *peVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  edict_t *peVar5;
  
  peVar5 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  if (peVar5 != (edict_t *)0x0) {
    this->pev->nextthink = gpGlobals->time + 0.5;
    peVar1 = this->pev;
    fVar2 = (peVar5->v).origin[0] - peVar1->origin[0];
    fVar4 = (peVar5->v).origin[1] - peVar1->origin[1];
    fVar3 = (peVar5->v).origin[2] - peVar1->origin[2];
    if (SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) <= this->pev->scale) {
      Play(this);
    }
  }
  return;
}

/* 000e6f08  CTargetCDAudio::Play  (85 bytes)
 * undefined Play(void)
 */
/* CTargetCDAudio::Play(void) */

void __thiscall CTargetCDAudio::Play(CTargetCDAudio *this)

{
  PlayCDTrack((int)ROUND(this->pev->health));
  UTIL_Remove((int *)this);
  return;
}

