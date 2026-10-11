/* mp.dll - CBot (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006b970  CBot::OnKill  (130 bytes)
 * undefined OnKill(int param_1)
 * called by: CHalfLifeMultiplay::PlayerKilled
 */
/* PlayerKilled hook on killer bot: 10/101 queue offense chat with victim name */

void __thiscall CBot::OnKill(CBot *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CBot *pCVar5;
  char *pcVar6;
  char *pcVar7;
  CBot *pCVar8;
  float10 fVar9;
  
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (0x5a < iVar2) {
    uVar3 = 0xffffffff;
    pcVar6 = gpGlobals->pStringBase + *(int *)(param_1 + 0x1d0);
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pCVar5 = (CBot *)(pcVar7 + -uVar3);
    pCVar8 = this + 0x24b5;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pCVar8 = *(undefined4 *)pCVar5;
      pCVar5 = pCVar5 + 4;
      pCVar8 = pCVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pCVar8 = *pCVar5;
      pCVar5 = pCVar5 + 1;
      pCVar8 = pCVar8 + 1;
    }
    *(undefined4 *)(this + 0x24f8) = 0;
    fVar9 = (float10)(*g_engfuncs.pfnRandomFloat)(0.5,2.0);
    *(float *)(this + 0x2498) = (float)(fVar9 + (float10)gpGlobals->time);
  }
  return;
}

/* 1006ba00  CBot::Killed  (192 bytes)
 * undefined Killed()
 */
/* vtable slot 22: CBasePlayer::Killed + 10/101 queue "killed" chat with killer name */

void __thiscall CBot::Killed(CBasePlayer *param_1,int param_2)

{
  char cVar1;
  edict_t *peVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  
  CBasePlayer::Killed(param_1,param_2);
  peVar2 = *(edict_t **)(param_2 + 0x208);
  if ((peVar2 == (edict_t *)0x0) &&
     (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
    return;
  }
  if (((peVar2->pvPrivateData != (int *)0x0) &&
      (iVar3 = (**(code **)(*(int *)peVar2->pvPrivateData + 0x44))(), iVar3 == 2)) &&
     (iVar3 = (*g_engfuncs.pfnRandomLong)(0,100), 0x5a < iVar3)) {
    uVar4 = 0xffffffff;
    pcVar6 = gpGlobals->pStringBase + *(int *)(param_2 + 0x1d0);
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = &param_1[3].field_0x24d;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *(undefined4 *)&param_1[3].field_0x290 = 2;
    fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(0.5,2.0);
    *(float *)&param_1[3].field_0x230 = (float)(fVar8 + (float10)gpGlobals->time);
  }
  return;
}

/* 1006bac0  CBot::TraceAttack  (119 bytes)
 * undefined TraceAttack()
 */
/* vtable slot 19: CBasePlayer::TraceAttack + AimAt attacker origin if attacker IsPlayer */

void __thiscall CBot::TraceAttack(CBasePlayer *param_1,int param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000018;
  uint in_stack_0000001c;
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  float in_stack_ffffffec;
  uint uVar3;
  
  iVar2 = in_stack_00000018;
  uVar3 = in_stack_0000001c;
  Vector::Vector((Vector *)&stack0xffffffe4,(undefined4 *)&stack0x0000000c);
  CBasePlayer::TraceAttack
            (param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8,in_stack_ffffffec,iVar2,
             uVar3);
  piVar1 = (int *)GetClassPtr<CBaseEntity>(param_2);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc0))();
    if (iVar2 != 0) {
      CBotBrain::LookAt((CBotBrain *)(param_1 + 1),(int *)param_1,*(float *)(piVar1[1] + 8),
                        *(float *)(piVar1[1] + 0xc));
    }
  }
  return;
}

/* 1006bb40  CBot::Spawn  (126 bytes)
 * undefined Spawn(int * param_1)
 */
/* vtable slot 7: brain Reset, CBasePlayer::Spawn, random laser colour PlInfo */

void __fastcall CBot::Spawn(int *param_1)

{
  int iVar1;
  uint iValue;
  undefined4 uStack0000001c;
  
  CBotBrain::Reset(param_1 + 0x2de);
  CBasePlayer::Spawn(param_1);
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (iVar1 < 0x5b) {
    iValue = (uint)(0x4b < iVar1);
  }
  else {
    iValue = 2;
  }
  (*g_engfuncs.pfnMessageBegin)(2,gmsgPlInfo,(float *)0x0,(edict_t *)0x0);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
  (*g_engfuncs.pfnWriteByte)(iVar1);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteByte)(iValue);
  uStack0000001c = 0x1006bbbb;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

