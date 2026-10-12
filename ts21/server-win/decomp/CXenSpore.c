/* mp.dll - CXenSpore (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006dd30  CXenSpore::Precache  (25 bytes)
 * undefined Precache()
 */
void __fastcall CXenSpore::Precache(int param_1)

{
  (*g_engfuncs.pfnPrecacheModel)
            ((&PTR_s_models_fungus_small__mdl_1009b790)[*(int *)(*(int *)(param_1 + 4) + 0x110)]);
  return;
}

/* 1006dd50  CXenSpore::Touch  (3 bytes)
 * undefined Touch()
 */
void CXenSpore::Touch(void)

{
  return;
}

/* 1006dd60  CXenSpore::Think  (36 bytes)
 * undefined Think()
 */
void __fastcall CXenSpore::Think(int param_1)

{
  CBaseAnimating::StudioFrameAdvance(param_1,0.0);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 1006dfb0  CXenSpore::TakeDamage  (5 bytes)
 * undefined TakeDamage()
 */
undefined4 CXenSpore::TakeDamage(void)

{
  return 0;
}

