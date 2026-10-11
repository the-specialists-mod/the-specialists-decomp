/* mp.dll - CBotBrain (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006e4b0  CBotBrain::ResetMsec  (11 bytes)
 * undefined ResetMsec(undefined4 * param_1)
 * called by: CBotBrain::Reset
 */
/* brain+0/4/8 = 0 */

void __fastcall CBotBrain::ResetMsec(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

/* 1006e4e0  CBotBrain::SetIdealAngles  (26 bytes)
 * undefined SetIdealAngles(undefined4 * param_1)
 * called by: CBotBrain::LookAt
 */
/* brain+0xc = angles */

void __thiscall CBotBrain::SetIdealAngles(CBotBrain *this,undefined4 *param_1)

{
  *(undefined4 *)(this + 0xc) = *param_1;
  *(undefined4 *)(this + 0x10) = param_1[1];
  *(undefined4 *)(this + 0x14) = param_1[2];
  return;
}

/* 1006e500  CBotBrain::UpdateView  (451 bytes)
 * undefined UpdateView(int param_1, float param_2)
 * called by: CBotBrain::RunMove
 */
/* turn pev->angles/v_angle toward ideal by frametime*turnRate, punch low-pass */

void __thiscall CBotBrain::UpdateView(CBotBrain *this,int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x170) == 0)) {
    fVar1 = *(float *)(iVar2 + 0x70);
    fVar4 = gpGlobals->frametime * 15.0;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    fVar3 = *(float *)(iVar2 + 0x68) - fVar4 * *(float *)(this + 0x18);
    fVar5 = *(float *)(iVar2 + 0x6c) - fVar4 * *(float *)(this + 0x1c);
    *(float *)(this + 0x18) = fVar3 + *(float *)(this + 0x18);
    *(float *)(this + 0x1c) = fVar5 + *(float *)(this + 0x1c);
    *(float *)(this + 0x20) = (fVar1 - fVar4 * *(float *)(this + 0x20)) + *(float *)(this + 0x20);
    fVar6 = UTIL_AngleMod(*(float *)(*(int *)(param_1 + 4) + 0x54));
    fVar1 = (float)fVar6;
    fVar6 = UTIL_AngleMod(*(float *)(this + 0x10));
    fVar7 = fVar6 - (float10)fVar1;
    if ((float)fVar6 <= fVar1) {
      if (fVar7 <= (float10)-180.0) {
        fVar7 = fVar7 + (float10)360.0;
      }
    }
    else if ((float10)180.0 <= fVar7) {
      fVar7 = fVar7 - (float10)360.0;
    }
    fVar6 = (float10)param_2 * (float10)gpGlobals->frametime;
    if ((float10)1.0 <= fVar6) {
      fVar6 = (float10)1.0;
    }
    fVar6 = UTIL_AngleMod((float)(fVar6 * fVar7 + (float10)fVar5 + (float10)fVar1));
    *(float *)(*(int *)(param_1 + 4) + 0x54) = (float)fVar6;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x78) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x54);
    fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x74);
    fVar4 = param_2 * gpGlobals->frametime;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    *(float *)(*(int *)(param_1 + 4) + 0x74) =
         fVar4 * (*(float *)(this + 0xc) - fVar1) + fVar3 + fVar1;
    *(float *)(*(int *)(param_1 + 4) + 0x50) =
         *(float *)(*(int *)(param_1 + 4) + 0x74) * -0.33333334;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = 0;
  }
  return;
}

/* 1006e6d0  CBotBrain::RunMove  (198 bytes)
 * undefined RunMove(int param_1, int param_2)
 * called by: CBotBrain::Think
 */
/* msec estimate (450/frames per 0.5s, clamp 5..100) + pfnRunPlayerMove */

void __thiscall CBotBrain::RunMove(CBotBrain *this,int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  UpdateView(this,param_1,*(float *)(param_2 + 0x1a70));
  if (gpGlobals->time < *(float *)(this + 4)) {
    *(int *)this = *(int *)this + 1;
  }
  else {
    *(float *)(this + 4) = gpGlobals->time + 0.5;
    if (0 < *(int *)this) {
      *(float *)(this + 8) = 450.0 / (float)*(int *)this;
    }
    *(undefined4 *)this = 0;
  }
  if (*(float *)(this + 8) < 5.0) {
    *(undefined4 *)(this + 8) = 0x40a00000;
  }
  if (100.0 < *(float *)(this + 8)) {
    *(undefined4 *)(this + 8) = 0x42c80000;
  }
  iVar1 = *(int *)(param_1 + 4);
  lVar2 = __ftol();
  (*g_engfuncs.pfnRunPlayerMove)
            (*(edict_t **)(iVar1 + 0x208),(float *)(iVar1 + 0x74),*(float *)(param_2 + 0x1a24),
             *(float *)(param_2 + 0x1a28),0.0,*(ushort *)(iVar1 + 0x180),'\0',(byte_conflict)lVar2);
  return;
}

/* 1006f2c0  CBotBrain::Reset  (334 bytes)
 * undefined Reset(undefined4 * param_1)
 * called by: CBot::Spawn
 */
/* called by CBot::Spawn: zero timers/flags, chat freetime timer, nav reset, pick state by TS mode
    */

void __fastcall CBotBrain::Reset(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  
  puVar3 = param_1 + 0x689;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x649;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x193d) = 0;
  param_1[0x660] = 1;
  if (((float)param_1[0x69d] <= 0.5) || ((float)param_1[0x69d] < 1.0)) {
    if ((float)param_1[0x69d] <= 0.5) {
      fVar1 = 0.5;
    }
    else {
      fVar1 = (float)param_1[0x69d];
    }
  }
  else {
    fVar1 = 1.0;
  }
  fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(60.0,180.0);
  param_1[0x648] = (float)(fVar4 * (float10)fVar1 + (float10)gpGlobals->time);
  CBotNav::Reset(param_1 + 10);
  param_1[0x683] = DAT_100ae498;
  param_1[0x684] = DAT_100ae49c;
  param_1[0x685] = DAT_100ae4a0;
  param_1[0x686] = DAT_100ae498;
  param_1[0x687] = DAT_100ae49c;
  param_1[0x688] = DAT_100ae4a0;
  ResetMsec(param_1);
  if ((TSGameRules != '\0') && (TSGameRules != '\x01')) {
    if (TSGameRules == '\x02') {
      param_1[9] = param_1 + 0x625;
      return;
    }
    param_1[9] = param_1 + 0x628;
    return;
  }
  param_1[9] = param_1 + 0x622;
  return;
}

/* 1006f410  CBotBrain::TestModules  (15 bytes)
 * uint TestModules(uint param_1)
 * called by: CBotBrain::Think
 */
/* m_activeModules & bits */

uint __thiscall CBotBrain::TestModules(CBotBrain *this,uint param_1)

{
  return *(uint *)(this + 0x1924) & param_1;
}

/* 1006f420  CBotBrain::SetModules  (13 bytes)
 * undefined SetModules(undefined4 param_1)
 * called by: CBotStateDM::Think, CBotStateObjective::Think, CBotStateTeamRounds::Think
 */
/* m_activeModules = bits */

void __thiscall CBotBrain::SetModules(CBotBrain *this,undefined4 param_1)

{
  *(undefined4 *)(this + 0x1924) = param_1;
  return;
}

/* 1006f430  CBotBrain::EnableModules  (21 bytes)
 * undefined EnableModules(uint param_1)
 * called by: CBotModuleAttack::Think, CBotStateDM::Think, CBotStateObjective::Think, CBotStateTeamRounds::Think
 */
/* m_activeModules |= bits */

void __thiscall CBotBrain::EnableModules(CBotBrain *this,uint param_1)

{
  *(uint *)(this + 0x1924) = *(uint *)(this + 0x1924) | param_1;
  return;
}

/* 1006f450  CBotBrain::DisableModules  (23 bytes)
 * undefined DisableModules(uint param_1)
 * called by: CBotBrain::Think, CBotModuleAttack::Think, CBotModuleBuy::Think, CBotModuleChat::Think, CBotModulePowerUp::Think, CBotModuleStunt::Think, CBotNav::Navigate, CBotStateDM::Think, CBotStateObjective::Think, CBotStateTeamRounds::Think
 */
/* m_activeModules &= ~bits */

void __thiscall CBotBrain::DisableModules(CBotBrain *this,uint param_1)

{
  *(uint *)(this + 0x1924) = *(uint *)(this + 0x1924) & ~param_1;
  return;
}

/* 1006f470  CBotBrain::PressButtons  (55 bytes)
 * undefined PressButtons(uint param_1, float param_2)
 * called by: CBotModuleAttack::FireWeapon, CBotModuleAttack::ReleaseAttack, CBotModuleAttack::Think, CBotModuleStunt::Think, CBotNav::Navigate
 */
/* buttonExpire[i] = time+dur for each bit i<16 in mask */

void __thiscall CBotBrain::PressButtons(CBotBrain *this,uint param_1,float param_2)

{
  int iVar1;
  CBotBrain *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this + 0x1a30;
  do {
    if ((param_1 & 1 << ((byte)iVar1 & 0x1f)) != 0) {
      *(float *)pCVar2 = param_2 + gpGlobals->time;
    }
    iVar1 = iVar1 + 1;
    pCVar2 = pCVar2 + 4;
  } while (iVar1 < 0x10);
  return;
}

/* 1006f4b0  CBotBrain::UpdateButtons  (67 bytes)
 * undefined UpdateButtons(int param_1)
 * called by: CBotBrain::Think
 */
/* m_buttons = bits whose expire time > now */

void __fastcall CBotBrain::UpdateButtons(int param_1)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x1a2c) = 0;
  pfVar2 = (float *)(param_1 + 0x1a30);
  do {
    if (gpGlobals->time < *pfVar2) {
      *(uint *)(param_1 + 0x1a2c) = *(uint *)(param_1 + 0x1a2c) | 1 << ((byte)iVar1 & 0x1f);
    }
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar1 < 0x10);
  return;
}

/* 1006f500  CBotBrain::Think  (557 bytes)
 * undefined Think(int * param_1)
 * called by: pfnStartFrame
 */
/* per-frame driver: state, modules in fixed order, nav, button, RunMove */

void __thiscall CBotBrain::Think(CBotBrain *this,int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  UpdateButtons((int)this);
  if ((*(float *)(this + 0x1a74) <= 0.5) || (*(float *)(this + 0x1a74) < 2.0)) {
    if (*(float *)(this + 0x1a74) <= 0.5) {
      fVar1 = 0.5;
    }
    else {
      fVar1 = *(float *)(this + 0x1a74);
    }
  }
  else {
    fVar1 = 2.0;
  }
  *(float *)(this + 0x1a70) = fVar1 * 10.0;
  fVar4 = (float10)(**(code **)(*param_1 + 8))();
  if ((float10)0.1 < fVar4) {
    (**(code **)**(undefined4 **)(this + 0x24))(param_1,this);
    uVar2 = TestModules(this,0x10);
    if (uVar2 != 0) {
      (**(code **)(*(int *)(this + 0x18ec) + 4))(param_1,this);
    }
    uVar2 = TestModules(this,0x100);
    if (uVar2 != 0) {
      if ((0.0 < (float)param_1[0x1d7]) && ((float)param_1[0x1d7] < gpGlobals->time)) {
        param_1[0x1d7] = 0;
        CBasePlayer::StopObserver((int)param_1);
        *(undefined4 *)(param_1[1] + 0x184) = 0;
      }
      SetMove(this,0,0);
    }
    uVar2 = TestModules(this,0x40);
    if (uVar2 != 0) {
      (**(code **)(*(int *)(this + 0x18f4) + 4))(param_1,this);
    }
    uVar2 = TestModules(this,4);
    if (uVar2 != 0) {
      (**(code **)(*(int *)(this + 0x18ac) + 4))(param_1,this);
    }
    uVar2 = TestModules(this,0x80);
    if (uVar2 != 0) {
      (**(code **)(*(int *)(this + 0x18fc) + 4))(param_1,this);
    }
    uVar2 = TestModules(this,8);
    if (uVar2 != 0) {
      (**(code **)(*(int *)(this + 0x1904) + 4))(param_1,this);
    }
    uVar2 = TestModules(this,0x200);
    if (uVar2 != 0) {
      (**(code **)(*(int *)(this + 0x1910) + 4))(param_1,this);
    }
    uVar2 = TestModules(this,0x400);
    if (uVar2 != 0) {
      (**(code **)(*(int *)(this + 0x191c) + 4))(param_1,this);
    }
    uVar2 = TestModules(this,1);
    if (uVar2 != 0) {
      iVar3 = CBotNav::Navigate((CBotNav *)(this + 0x28),param_1,this,(float *)(this + 0x1928));
      if ((iVar3 == 0) || (iVar3 == 1)) {
        DisableModules(this,1);
        *(float *)(this + 0x1928) = DAT_100ae498;
        *(undefined4 *)(this + 0x192c) = DAT_100ae49c;
        *(undefined4 *)(this + 0x1930) = DAT_100ae4a0;
      }
    }
  }
  *(undefined4 *)(param_1[1] + 0x180) = *(undefined4 *)(this + 0x1a2c);
  RunMove(this,(int)param_1,(int)this);
  return;
}

/* 1006f730  CBotBrain::NumVisibleEnemies  (7 bytes)
 * undefined1 NumVisibleEnemies(int param_1)
 * called by: CBotModuleAttack::SelectEnemy, CBotModuleAttack::Think, CBotStateDM::Think, CBotStateObjective::Think, CBotStateTeamRounds::Think
 */
/* returns byte brain+0x1a08 (never written: always 0) */

undefined1 __fastcall CBotBrain::NumVisibleEnemies(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1a08);
}

/* 1006f740  CBotBrain::LookAt  (172 bytes)
 * undefined LookAt(int * param_1, float param_2, float param_3)
 * called by: CBot::TraceAttack, CBotModuleAttack::Think, CBotModuleLookAround::Think, CBotNav::Navigate
 */
/* ideal angles toward target from GetGunPosition (pitch negated) */

void __thiscall CBotBrain::LookAt(CBotBrain *this,int *param_1,float param_2,float param_3)

{
  float *pfVar1;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 local_c [12];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x160))(local_c);
  fStack_1c = (float)param_1 - *pfVar1;
  fStack_18 = param_2 - pfVar1[1];
  fStack_14 = param_3 - pfVar1[2];
  UTIL_VecToAngles(&param_1,&fStack_1c);
  SetIdealAngles(this,(undefined4 *)&stack0xffffffcc);
  return;
}

/* 1006f7f0  CBotBrain::SetMove  (23 bytes)
 * undefined SetMove(undefined4 param_1, undefined4 param_2)
 * called by: CBotBrain::Think, CBotNav::Navigate
 */
/* forwardmove/sidemove (brain+0x1a24/0x1a28) */

void __thiscall CBotBrain::SetMove(CBotBrain *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(this + 0x1a24) = param_1;
  *(undefined4 *)(this + 0x1a28) = param_2;
  return;
}

