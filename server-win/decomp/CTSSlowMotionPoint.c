/* mp.dll - CTSSlowMotionPoint (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10049750  CTSSlowMotionPoint::CreateSlowMotionPoint  (104 bytes)
 * int * CreateSlowMotionPoint(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, float param_5, undefined4 param_6, undefined1 param_7)
 * called by: CHalfLifeMultiplay::PlayerKilled, TSExplosion
 */
int * __cdecl
CTSSlowMotionPoint::CreateSlowMotionPoint
          (vec_t param_1,vec_t param_2,vec_t param_3,undefined4 param_4,float param_5,
          undefined4 param_6,undefined1 param_7)

{
  entvars_t *peVar1;
  CTSSlowMotionPoint *this;
  
  this = (CTSSlowMotionPoint *)GetClassPtr<CTSSlowMotionPoint>(0);
  if (this == (CTSSlowMotionPoint *)0x0) {
    UTIL_ClientPrintAll(3,s_WARNING_cannot_create_slowmotion_100a358c,0,0,0,0);
    return (int *)0x0;
  }
  peVar1 = this->pev;
  peVar1->origin[0] = param_1;
  peVar1->origin[1] = param_2;
  peVar1->origin[2] = param_3;
  (*this->vtable[7])();
  ActivateSlow(this,param_4,param_5,param_6,param_7);
  return (int *)this;
}

/* 100497c0  CTSSlowMotionPoint::Spawn  (220 bytes)
 * undefined Spawn()
 */
void __fastcall CTSSlowMotionPoint::Spawn(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  **(int **)(param_1 + 4) = (int)s_ts_slowmotionpoint_100a35b8 - (int)gpGlobals->pStringBase;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  UTIL_SetSize(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(code **)(param_1 + 0x10) = WaitThink;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x54);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 100498e0  CTSSlowMotionPoint::WaitThink  (341 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSSlowMotionPoint::WaitThink(void) */

void __thiscall CTSSlowMotionPoint::WaitThink(CTSSlowMotionPoint *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
                    /* 0x498e0  144  ?WaitThink@CTSSlowMotionPoint@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.5;
  if (gpGlobals->time <= *(float *)&this->field_0xd8) {
    iVar3 = 1;
    if (0 < gpGlobals->maxClients) {
      do {
        piVar1 = (int *)UTIL_PlayerByIndex(iVar3);
        if (((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc0))(), iVar2 != 0)) &&
           (iVar2 = (**(code **)(*piVar1 + 0x10))(), iVar2 == 0)) {
          iVar2 = piVar1[1];
          fStack_44 = *(float *)(iVar2 + 0x174) + *(float *)(iVar2 + 8);
          fStack_40 = *(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 0xc);
          fStack_3c = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0x10);
          FUN_10076f70(this->pev->origin,&fStack_44,1,1,0,auStack_38);
          if (1.0 <= fStack_28) {
            (**(code **)(*piVar1 + 0xc))(*(undefined4 *)&this->field_0xdc,0);
            *(bool *)((int)piVar1 + 0x161) = this->field_0xe4 != '\0';
            iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar1[1] + 0x208));
            if ((-1 < iVar2) && (iVar2 < 0x21)) {
              *(int **)(&this->field_0x54 + iVar2 * 4) = piVar1;
            }
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= gpGlobals->maxClients);
    }
    return;
  }
  FUN_100498a0((int)this);
  UTIL_Remove((int *)this);
  return;
}

/* 10049a40  CTSSlowMotionPoint::ActivateSlow  (50 bytes)
 * undefined ActivateSlow(undefined4 param_1, float param_2, undefined4 param_3, undefined1 param_4)
 * called by: CTSSlowMotionPoint::CreateSlowMotionPoint
 */
void __thiscall
CTSSlowMotionPoint::ActivateSlow
          (CTSSlowMotionPoint *this,undefined4 param_1,float param_2,undefined4 param_3,
          undefined1 param_4)

{
  float fVar1;
  
  fVar1 = gpGlobals->time;
  *(undefined4 *)&this->field_0xdc = param_1;
  *(undefined4 *)&this->field_0xe0 = param_3;
  this->field_0xe4 = param_4;
  *(float *)&this->field_0xd8 = param_2 + fVar1;
  return;
}

