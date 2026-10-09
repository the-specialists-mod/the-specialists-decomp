/* ts_i386.so - UTIL_GroupTrace (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000ebf4c  UTIL_GroupTrace::UTIL_GroupTrace  (81 bytes)
 * undefined UTIL_GroupTrace(undefined4 param_1, undefined4 param_2)
 */
/* UTIL_GroupTrace::UTIL_GroupTrace(int, int) */

void __thiscall UTIL_GroupTrace::UTIL_GroupTrace(UTIL_GroupTrace *this,int param_1,int param_2)

{
  *(int *)this = g_groupmask;
  *(int *)(this + 4) = g_groupop;
  g_groupmask = param_1;
  g_groupop = param_2;
  (*g_engfuncs.pfnSetGroupMask)(param_1,param_2);
  return;
}

/* 000ebfa0  UTIL_GroupTrace::~UTIL_GroupTrace  (88 bytes)
 * undefined ~UTIL_GroupTrace(uint param_1)
 */
/* UTIL_GroupTrace::~UTIL_GroupTrace(void) */

void __thiscall UTIL_GroupTrace::~UTIL_GroupTrace(UTIL_GroupTrace *this,uint param_1)

{
  g_groupmask = *(int *)this;
  g_groupop = *(int *)(this + 4);
  (*g_engfuncs.pfnSetGroupMask)(g_groupmask,g_groupop);
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

