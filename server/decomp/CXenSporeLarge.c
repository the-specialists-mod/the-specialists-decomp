/* ts_i386.so - CXenSporeLarge (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f6540  CXenSporeLarge::Spawn  (832 bytes)
 * undefined Spawn(void)
 */
/* CXenSporeLarge::Spawn(void) */

void __thiscall CXenSporeLarge::Spawn(CXenSporeLarge *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *local_a0;
  float *local_9c;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  this->pev->skin = 2;
  CXenSpore::Spawn((CXenSpore *)this);
  local_2c = 48.0;
  local_24 = 240.0;
  local_3c = -48.0;
  local_34 = 110.0;
  local_38 = local_3c;
  local_28 = local_2c;
  UTIL_SetSize((int)this->pev,&local_3c,&local_2c);
  (*g_engfuncs.pfnAngleVectors)(this->pev->angles,&local_3c,&local_2c,(float *)0x0);
  local_5c = m_hullSizes * local_3c;
  local_58 = m_hullSizes * local_38;
  local_54 = m_hullSizes * local_34;
  local_6c = DAT_0019f284 * local_2c;
  local_68 = DAT_0019f284 * local_28;
  local_64 = DAT_0019f284 * local_24;
  local_4c = local_5c + local_6c;
  local_48 = local_58 + local_68;
  local_44 = local_54 + local_64;
  local_7c = 0x41400000;
  local_74 = 0x42f00000;
  local_8c = 0xc1400000;
  local_84 = 0;
  local_88 = local_8c;
  local_78 = local_7c;
  CXenHull::CreateHull((int *)this,&local_8c,&local_7c,&local_4c);
  local_90 = 1;
  local_a0 = (float *)&DAT_0019f28c;
  local_9c = local_a0;
  do {
    local_54 = *local_a0;
    local_5c = local_54 * local_3c;
    local_58 = local_54 * local_38;
    local_54 = local_54 * local_34;
    local_64 = local_9c[1];
    local_6c = local_64 * local_2c;
    local_68 = local_64 * local_28;
    local_64 = local_64 * local_24;
    local_4c = local_5c + local_6c;
    local_48 = local_68 + local_58;
    local_44 = local_54 + local_64;
    uVar1 = 0x41400000;
    local_74 = 0x42f00000;
    uVar2 = 0xc1400000;
    local_84 = 0;
    local_8c = uVar2;
    local_88 = uVar2;
    local_7c = uVar1;
    local_78 = uVar1;
    CXenHull::CreateHull((int *)this,&local_8c,&local_7c,&local_4c);
    local_54 = local_a0[3];
    local_5c = local_54 * local_3c;
    local_58 = local_54 * local_38;
    local_54 = local_54 * local_34;
    local_64 = local_9c[4];
    local_6c = local_64 * local_2c;
    local_68 = local_64 * local_28;
    local_64 = local_64 * local_24;
    local_4c = local_5c + local_6c;
    local_48 = local_58 + local_68;
    local_44 = local_54 + local_64;
    local_74 = 0x42f00000;
    local_84 = 0;
    local_8c = uVar2;
    local_88 = uVar2;
    local_7c = uVar1;
    local_78 = uVar1;
    CXenHull::CreateHull((int *)this,&local_8c,&local_7c,&local_4c);
    local_9c = local_9c + 6;
    local_a0 = local_a0 + 6;
    local_90 = local_90 + 2;
  } while (local_90 < 5);
  return;
}

