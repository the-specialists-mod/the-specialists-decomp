/* ts_i386.so - CTSSlowMotionPoint (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000714d8  CTSSlowMotionPoint::CreateSlowMotionPoint  (138 bytes)
 * CTSSlowMotionPoint * CreateSlowMotionPoint(undefined4 * param_1, undefined4 param_2, float param_3, undefined4 param_4, CTSSlowMotionPoint param_5)
 */
/* CTSSlowMotionPoint::CreateSlowMotionPoint(Vector, float, float, float, bool) */

CTSSlowMotionPoint *
CTSSlowMotionPoint::CreateSlowMotionPoint
          (vec_t *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined1 param_5)

{
  CTSSlowMotionPoint *pCVar1;
  undefined4 uVar2;
  int iVar3;
  vec_t *pvVar4;
  
  pCVar1 = GetClassPtr<CTSSlowMotionPoint>(0);
  if (pCVar1 == (CTSSlowMotionPoint *)0x0) {
    UTIL_ClientPrintAll(3,"WARNING:cannot create slowmotion point!\n",0,0,0,0);
    pCVar1 = (CTSSlowMotionPoint *)0x0;
  }
  else {
    pvVar4 = pCVar1->pev->origin;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar4 = *param_1;
      param_1 = param_1 + 1;
      pvVar4 = pvVar4 + 1;
    }
    uVar2 = (*pCVar1->vtable[9])(pCVar1);
    ActivateSlow(pCVar1,param_2,param_3,param_4,CONCAT31((int3)((uint)uVar2 >> 8),param_5) & 0xffff)
    ;
  }
  return pCVar1;
}

/* 00071564  CTSSlowMotionPoint::Spawn  (261 bytes)
 * undefined Spawn(void)
 */
/* CTSSlowMotionPoint::Spawn(void) */

void __thiscall CTSSlowMotionPoint::Spawn(CTSSlowMotionPoint *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  this->pev->classname = (int)"ts_slowmotionpoint" - (int)gpGlobals->pStringBase;
  local_2c = 0;
  local_28 = local_2c;
  local_24 = local_2c;
  local_1c = local_2c;
  local_18 = local_2c;
  local_14 = local_2c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  this->pev->effects = 0x80;
  this->pev->movetype = 0;
  this->pev->solid = 0;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = WaitThink;
  this->pev->nextthink = gpGlobals->time + 0.1;
  *(undefined4 *)&this->field_0xe8 = 0;
  *(undefined4 *)&this->field_0xec = 0;
  *(undefined4 *)&this->field_0xf0 = 0;
  this->field_0xf4 = 0;
  puVar2 = (undefined4 *)&this->field_0x64;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 0007166c  CTSSlowMotionPoint::DeactivateSlow  (188 bytes)
 * undefined DeactivateSlow(void)
 */
/* CTSSlowMotionPoint::DeactivateSlow(void) */

void __thiscall CTSSlowMotionPoint::DeactivateSlow(CTSSlowMotionPoint *this)

{
  int iVar1;
  void ***pppvVar2;
  void ***pppvVar3;
  void ***pppvVar4;
  undefined4 *puVar5;
  int local_10;
  
  local_10 = 0;
  pppvVar2 = &this->vtable;
  pppvVar3 = pppvVar2;
  pppvVar4 = pppvVar2;
  do {
    if (pppvVar4[1] != (void **)0x0) {
      (**(code **)(*(int *)((int)pppvVar3[1] + 0x60) + 0x14))(pppvVar3[1],0x3f800000,0);
      pppvVar2[1] = (void **)0x0;
    }
    if (pppvVar4[2] != (void **)0x0) {
      (**(code **)(*(int *)((int)pppvVar3[2] + 0x60) + 0x14))(pppvVar3[2],0x3f800000,0);
      pppvVar2[2] = (void **)0x0;
    }
    if (pppvVar4[3] != (void **)0x0) {
      (**(code **)(*(int *)((int)pppvVar3[3] + 0x60) + 0x14))(pppvVar3[3],0x3f800000,0);
      pppvVar2[3] = (void **)0x0;
    }
    pppvVar2 = pppvVar2 + 3;
    pppvVar3 = pppvVar3 + 3;
    pppvVar4 = pppvVar4 + 3;
    local_10 = local_10 + 3;
  } while (local_10 < 0x21);
  puVar5 = (undefined4 *)&this->field_0x64;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  return;
}

/* 00071728  CTSSlowMotionPoint::WaitThink  (384 bytes)
 * undefined WaitThink(void)
 */
/* CTSSlowMotionPoint::WaitThink(void) */

void __thiscall CTSSlowMotionPoint::WaitThink(CTSSlowMotionPoint *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_6c [16];
  float local_5c;
  
  this->pev->nextthink = gpGlobals->time + 0.5;
  if (gpGlobals->time <= *(float *)&this->field_0xe8) {
    iVar4 = 1;
    if (0 < gpGlobals->maxClients) {
      do {
        piVar1 = (int *)UTIL_PlayerByIndex(iVar4);
        if (piVar1 != (int *)0x0) {
          iVar2 = (**(code **)(piVar1[0x18] + 200))(piVar1);
          if (iVar2 != 0) {
            iVar2 = (**(code **)(piVar1[0x18] + 0x18))(piVar1);
            if (iVar2 == 0) {
              iVar2 = *piVar1;
              local_7c = *(float *)(iVar2 + 8) + *(float *)(iVar2 + 0x174);
              local_78 = *(float *)(iVar2 + 0xc) + *(float *)(iVar2 + 0x178);
              local_74 = *(float *)(iVar2 + 0x10) + *(float *)(iVar2 + 0x17c);
              UTIL_TraceLine(this->pev->origin,&local_7c,1,1,0,local_6c);
              if (1.0 <= local_5c) {
                (**(code **)(piVar1[0x18] + 0x14))(piVar1,*(undefined4 *)&this->field_0xec,0);
                *(bool *)((int)piVar1 + 0x175) = this->field_0xf4 != '\0';
                uVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*piVar1 + 0x208));
                if (uVar3 < 0x21) {
                  *(int **)(&this->field_0x64 + uVar3 * 4) = piVar1;
                }
              }
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= gpGlobals->maxClients);
    }
  }
  else {
    DeactivateSlow(this);
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000718ac  CTSSlowMotionPoint::ActivateSlow  (71 bytes)
 * undefined ActivateSlow(CTSSlowMotionPoint * this, undefined4 param_2, float param_3, undefined4 param_4, CTSSlowMotionPoint param_5)
 */
/* CTSSlowMotionPoint::ActivateSlow(float, float, float, bool) */

void __thiscall
CTSSlowMotionPoint::ActivateSlow
          (void *this,undefined4 param_2,float param_3,undefined4 param_4,undefined1 param_5)

{
  *(float *)((int)this + 0xe8) = param_3 + gpGlobals->time;
  *(undefined4 *)((int)this + 0xec) = param_2;
  *(undefined4 *)((int)this + 0xf0) = param_4;
  *(undefined1 *)((int)this + 0xf4) = param_5;
  return;
}

