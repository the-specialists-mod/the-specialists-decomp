/* mp.dll - CPathCorner (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100250f0  CPathCorner::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CPathCorner::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CPathCorner_10094d5c,(int)param_1,0x10094cb8,1);
  return;
}

/* 10025120  CPathCorner::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CPathCorner::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CPathCorner_10094d5c,(int)param_1,0x10094cb8,1);
  return;
}

/* 10025150  CPathCorner::KeyValue  (72 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CPathCorner::KeyValue(CPathCorner *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float10 fVar5;
  
  iVar1 = 5;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = &DAT_10094d68;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(*(undefined1 **)(param_1 + 8),*(undefined1 **)(param_1 + 8));
    *(float *)&this->field_0x54 = (float)fVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 100251a0  CPathCorner::Spawn  (1 bytes)
 * undefined Spawn()
 */
void CPathCorner::Spawn(void)

{
  return;
}

/* 10025b90  CPathCorner::GetDelay  (4 bytes)
 * undefined GetDelay()
 */
float10 __fastcall CPathCorner::GetDelay(int param_1)

{
  return (float10)*(float *)(param_1 + 0x54);
}

