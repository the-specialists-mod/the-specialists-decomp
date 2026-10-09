/* ts_i386.so - CVipEscape (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008d22c  CVipEscape::KeyValue  (12 bytes)
 * undefined KeyValue(undefined4 this, int param_2)
 */
/* CVipEscape::KeyValue(KeyValueData_s *) */

void __thiscall CVipEscape::KeyValue(undefined4 this,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 0008d238  CVipEscape::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CVipEscape::Precache(void) */

void CVipEscape::Precache(void)

{
  return;
}

/* 0008d23c  CVipEscape::Spawn  (143 bytes)
 * undefined Spawn(void)
 */
/* CVipEscape::Spawn(void) */

void __thiscall CVipEscape::Spawn(CVipEscape *this)

{
  *(undefined4 *)(*(int *)this + 0x118) = 0x80;
  *(undefined4 *)(*(int *)this + 0x10c) = 0;
  *(undefined4 *)(*(int *)this + 0x1a4) = 0;
  *(undefined4 *)(*(int *)this + 0x108) = 0;
  **(int **)this = (int)"func_vip_safetyzone" - (int)gpGlobals->pStringBase;
  (**(code **)(*(int *)(this + 0x60) + 0x28))(this);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)this + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)this + 0xb8));
  return;
}

