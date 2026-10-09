/* ts_i386.so - CBasePlayerAmmo (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f23d0  CBasePlayerAmmo::Spawn  (149 bytes)
 * undefined Spawn(void)
 */
/* CBasePlayerAmmo::Spawn(void) */

void __thiscall CBasePlayerAmmo::Spawn(CBasePlayerAmmo *this)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(*(int *)this + 0x108) = 6;
  *(undefined4 *)(*(int *)this + 0x10c) = 1;
  local_1c = 0x41800000;
  local_2c = 0xc1800000;
  local_24 = 0;
  local_28 = local_2c;
  local_18 = local_1c;
  local_14 = local_1c;
  UTIL_SetSize(*(int *)this,&local_2c,&local_1c);
  UTIL_SetOrigin(*(int *)this,*(int *)this + 8);
  *(undefined4 *)(this + 0x14) = 0xffff0000;
  *(code **)(this + 0x18) = DefaultTouch;
  return;
}

/* 000f2468  CBasePlayerAmmo::Respawn  (145 bytes)
 * CBasePlayerAmmo * Respawn(void)
 */
/* CBasePlayerAmmo::Respawn(void) */

CBasePlayerAmmo * __thiscall CBasePlayerAmmo::Respawn(CBasePlayerAmmo *this)

{
  longdouble lVar1;
  undefined1 local_2c [28];
  
  *(uint *)(*(int *)this + 0x118) = *(uint *)(*(int *)this + 0x118) | 0x80;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  (**(code **)(*g_pGameRules + 0xb4))(local_2c,g_pGameRules,this);
  UTIL_SetOrigin(*(int *)this,local_2c);
  *(undefined4 *)(this + 0xc) = 0xffff0000;
  *(code **)(this + 0x10) = Materialize;
  lVar1 = (longdouble)(**(code **)(*g_pGameRules + 0xb0))(g_pGameRules,this);
  *(float *)(*(int *)this + 0x104) = (float)lVar1;
  return this;
}

/* 000f24fc  CBasePlayerAmmo::Materialize  (125 bytes)
 * undefined Materialize(void)
 */
/* CBasePlayerAmmo::Materialize(void) */

void __thiscall CBasePlayerAmmo::Materialize(CBasePlayerAmmo *this)

{
  if (*(char *)(*(int *)this + 0x118) < '\0') {
    EMIT_SOUND_DYN(*(int *)(*(int *)this + 0x208),1,"items/suitchargeok1.wav",0x3f800000,0x3f4ccccd,
                   0,0x96,0.5);
    *(uint *)(*(int *)this + 0x118) = *(uint *)(*(int *)this + 0x118) & 0xffffff7f;
    *(uint *)(*(int *)this + 0x118) = *(uint *)(*(int *)this + 0x118) | 2;
  }
  *(undefined4 *)(this + 0x14) = 0xffff0000;
  *(code **)(this + 0x18) = DefaultTouch;
  return;
}

/* 000f257c  CBasePlayerAmmo::DefaultTouch  (195 bytes)
 * undefined DefaultTouch(int param_1)
 */
/* CBasePlayerAmmo::DefaultTouch(CBaseEntity *) */

void __thiscall CBasePlayerAmmo::DefaultTouch(CBasePlayerAmmo *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x60) + 200))(param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(this + 0x60) + 0x114))(this,param_1);
    if (iVar1 == 0) {
      if (gEvilImpulse101 == 0) {
        return;
      }
    }
    else {
      iVar1 = (**(code **)(*g_pGameRules + 0xac))(g_pGameRules,this);
      if (iVar1 == 3) {
        (**(code **)(*(int *)(this + 0x60) + 0xec))(this);
        return;
      }
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0xc) = 0xffff0000;
    *(code **)(this + 0x10) = CBaseEntity::SUB_Remove;
    *(float *)(*(int *)this + 0x104) = gpGlobals->time + 0.1;
  }
  return;
}

/* 000f36e8  CBasePlayerAmmo::AddAmmo  (6 bytes)
 * undefined4 AddAmmo(void)
 */
/* CBasePlayerAmmo::AddAmmo(CBaseEntity *) */

undefined4 CBasePlayerAmmo::AddAmmo(void)

{
  return 1;
}

