/* mp.dll - CRulePointEntity (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029f80  CRulePointEntity::Spawn  (30 bytes)
 * undefined Spawn(int param_1)
 * called by: CGameCounter::Spawn, CGameScore::Spawn
 */
void __fastcall CRulePointEntity::Spawn(int param_1)

{
  CRuleEntity::Spawn(param_1);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xb8) = 0;
  return;
}

