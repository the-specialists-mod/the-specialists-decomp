/* ts_i386.so - IVoiceGameMgrHelper (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d0e0c  IVoiceGameMgrHelper::~IVoiceGameMgrHelper  (57 bytes)
 * undefined ~IVoiceGameMgrHelper(uint param_1)
 */
/* IVoiceGameMgrHelper::~IVoiceGameMgrHelper(void) */

void __thiscall IVoiceGameMgrHelper::~IVoiceGameMgrHelper(IVoiceGameMgrHelper *this,uint param_1)

{
  *(undefined1 **)this = IVoiceGameMgrHelper_virtual_table;
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

