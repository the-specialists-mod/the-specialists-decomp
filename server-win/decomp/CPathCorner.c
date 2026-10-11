/* mp.dll - CPathCorner (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002d200  CPathCorner::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CPathCorner::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CPathCorner_100a00ac,(int)param_1,0x100a0008,1);
  return;
}

/* 1002d230  CPathCorner::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CPathCorner::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CPathCorner_100a00ac,(int)param_1,&DAT_100a0008,1)
  ;
  return;
}

/* 1002d260  CPathCorner::KeyValue  (110 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CPathCorner::KeyValue(CPathCorner *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  CPathCorner *pCVar4;
  byte *pbVar6;
  bool bVar7;
  float10 fVar8;
  undefined3 uVar5;
  
  pbVar6 = &DAT_100a00b8;
  pbVar2 = *(byte **)(param_1 + 4);
  pCVar4 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)pCVar4 >> 8);
    pCVar4 = (CPathCorner *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_1002d29a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1002d29f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar4 = (CPathCorner *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_1002d29a;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002d29f:
  if (iVar3 == 0) {
    fVar8 = atof((undefined *)pCVar4,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x54 = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1002dd70  CPathCorner::GetDelay  (4 bytes)
 * undefined GetDelay()
 */
float10 __fastcall CPathCorner::GetDelay(int param_1)

{
  return (float10)*(float *)(param_1 + 0x54);
}

