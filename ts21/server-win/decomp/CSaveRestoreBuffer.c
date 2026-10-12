/* mp.dll - CSaveRestoreBuffer (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10068ae0  CSaveRestoreBuffer::TokenHash  (241 bytes)
 * uint TokenHash(byte.conflict * param_1)
 * called by: CRestore::ReadFields, CSave::BufferHeader
 */
uint __thiscall CSaveRestoreBuffer::TokenHash(CSaveRestoreBuffer *this,byte_conflict *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  int local_10;
  
  iVar7 = *(int *)this;
  uVar4 = *(uint *)(iVar7 + 0x14);
  uVar3 = FUN_10068ac0((char *)param_1);
  local_10 = 0;
  if (0 < (int)uVar4) {
    iVar2 = *(int *)(iVar7 + 0x18);
    uVar3 = uVar3 % uVar4 & 0xffff;
    iVar7 = uVar3 * 4;
    uVar9 = uVar3 - uVar4;
    do {
      iVar5 = iVar7;
      uVar8 = uVar3;
      if ((int)uVar4 <= (int)uVar3) {
        iVar5 = iVar7 + uVar4 * -4;
        uVar8 = uVar9;
      }
      pbVar10 = *(byte **)(iVar5 + iVar2);
      pbVar6 = param_1;
      if (pbVar10 == (byte *)0x0) {
LAB_10068bb9:
        *(byte_conflict **)(iVar2 + uVar8 * 4) = param_1;
        return CONCAT22((short)((uint)param_1 >> 0x10),(short)uVar8);
      }
      do {
        bVar1 = *pbVar6;
        bVar11 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_10068b75:
          iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_10068b7a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar11 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_10068b75;
        pbVar10 = pbVar10 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_10068b7a:
      if (iVar5 == 0) goto LAB_10068bb9;
      local_10 = local_10 + 1;
      iVar7 = iVar7 + 4;
      uVar3 = uVar3 + 1;
      uVar9 = uVar9 + 1;
    } while (local_10 < (int)uVar4);
  }
  uVar4 = (*g_engfuncs.pfnAlertMessage)(at_error,s_CSaveRestoreBuffer____TokenHash__1009a9d8);
  return uVar4 & 0xffff0000;
}

