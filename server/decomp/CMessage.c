/* ts_i386.so - CMessage (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bd9cc  CMessage::Spawn  (187 bytes)
 * undefined Spawn(void)
 */
/* CMessage::Spawn(void) */

void __thiscall CMessage::Spawn(CMessage *this)

{
  (*this->vtable[10])(this);
  this->pev->solid = 0;
  this->pev->movetype = 0;
  switch(this->pev->impulse) {
  default:
    this->pev->speed = 2.0;
    break;
  case 1:
    this->pev->speed = 1.25;
    break;
  case 2:
    this->pev->speed = 0.8;
    break;
  case 3:
    this->pev->speed = 0.0;
  }
  this->pev->impulse = 0;
  if (this->pev->scale <= 0.0) {
    this->pev->scale = 1.0;
  }
  return;
}

/* 000bdaa0  CMessage::Precache  (72 bytes)
 * undefined Precache(void)
 */
/* CMessage::Precache(void) */

void __thiscall CMessage::Precache(CMessage *this)

{
  if (this->pev->noise != 0) {
    (*g_engfuncs.pfnPrecacheSound)(gpGlobals->pStringBase + this->pev->noise);
  }
  return;
}

/* 000bdae8  CMessage::KeyValue  (231 bytes)
 * undefined KeyValue(int param_1)
 */
/* CMessage::KeyValue(KeyValueData_s *) */

void __thiscall CMessage::KeyValue(CMessage *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  longdouble lVar3;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"messagesound");
  if (iVar2 == 0) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->noise = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar2 = strcmp(*(char **)(param_1 + 4),"messagevolume");
    if (iVar2 == 0) {
      peVar1 = this->pev;
      lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      peVar1->scale = (float)(lVar3 * (longdouble)0.1);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar2 = strcmp(*(char **)(param_1 + 4),"messageattenuation");
      if (iVar2 == 0) {
        peVar1 = this->pev;
        iVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        peVar1->impulse = iVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
  }
  return;
}

/* 000bdbd4  CMessage::Use  (291 bytes)
 * undefined Use(CBaseEntity * param_1, int * param_2)
 */
/* CMessage::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CMessage::Use(CBaseEntity *param_1,int *param_2)

{
  entvars_t *peVar1;
  int iVar2;
  edict_t *peVar3;
  
  if ((param_1->pev->spawnflags & 2) == 0) {
    if ((param_2 == (int *)0x0) || (iVar2 = (**(code **)(param_2[0x18] + 200))(param_2), iVar2 == 0)
       ) {
      peVar3 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
      if (peVar3 == (edict_t *)0x0) {
        peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      param_2 = (int *)0x0;
      if (peVar3 != (edict_t *)0x0) {
        param_2 = peVar3->pvPrivateData;
      }
    }
    if (param_2 != (int *)0x0) {
      UTIL_ShowMessage(gpGlobals->pStringBase + param_1->pev->message,param_2);
    }
  }
  else {
    UTIL_ShowMessageAll(gpGlobals->pStringBase + param_1->pev->message);
  }
  peVar1 = param_1->pev;
  if (peVar1->noise != 0) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,4,gpGlobals->pStringBase + peVar1->noise,
                   peVar1->scale,peVar1->speed,0,100,0.5);
  }
  if ((param_1->pev->spawnflags & 1) != 0) {
    UTIL_Remove((int *)param_1);
  }
  CBaseEntity::SUB_UseTargets(param_1,param_1,3,0);
  return;
}

