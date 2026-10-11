/* mp.dll - CSaveRestoreBuffer (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10078070  CSaveRestoreBuffer::TokenHash  (223 bytes)
 * uint TokenHash(byte.conflict * param_1)
 * called by: CRestore::ReadFields, CSave::BufferHeader
 */
uint __thiscall CSaveRestoreBuffer::TokenHash(CSaveRestoreBuffer *this,byte_conflict *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  int local_c;
  
  iVar8 = *(int *)this;
  uVar5 = *(uint *)(iVar8 + 0x14);
  uVar3 = FUN_10078050((char *)param_1);
  local_c = 0;
  if (0 < (int)uVar5) {
    iVar2 = *(int *)(iVar8 + 0x18);
    uVar3 = uVar3 % uVar5 & 0xffff;
    iVar8 = uVar3 * 4;
    do {
      uVar4 = uVar3;
      iVar6 = iVar8;
      if ((int)uVar5 <= (int)uVar3) {
        uVar4 = uVar3 - uVar5;
        iVar6 = iVar8 + uVar5 * -4;
      }
      pbVar9 = *(byte **)(iVar6 + iVar2);
      pbVar7 = param_1;
      if (pbVar9 == (byte *)0x0) {
LAB_1007813a:
        *(byte_conflict **)(iVar2 + uVar4 * 4) = param_1;
        return uVar4;
      }
      do {
        bVar1 = *pbVar7;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_100780fb:
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_10078100;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_100780fb;
        pbVar9 = pbVar9 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_10078100:
      if (iVar6 == 0) goto LAB_1007813a;
      local_c = local_c + 1;
      iVar8 = iVar8 + 4;
      uVar3 = uVar3 + 1;
    } while (local_c < (int)uVar5);
  }
  uVar5 = (*g_engfuncs.pfnAlertMessage)(at_error,s_CSaveRestoreBuffer____TokenHash__100a7150);
  return uVar5 & 0xffff0000;
}

