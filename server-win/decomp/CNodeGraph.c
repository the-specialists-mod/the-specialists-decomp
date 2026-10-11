/* mp.dll - CNodeGraph (16 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10070de0  CNodeGraph::StaticInit  (10 bytes)
 * undefined StaticInit()
 */
/* constructs g_NodeGraph */

void CNodeGraph::StaticInit(void)

{
  CNodeGraph(&g_NodeGraph);
  return;
}

/* 10070df0  CNodeGraph::CNodeGraph  (12 bytes)
 * undefined4 * CNodeGraph(undefined4 * param_1)
 * called by: CNodeGraph::StaticInit
 */
/* ctor: Reset(), returns this */

undefined4 * __fastcall CNodeGraph::CNodeGraph(undefined4 *param_1)

{
  Reset(param_1);
  return param_1;
}

/* 10070e00  CNodeGraph::Reset  (36 bytes)
 * undefined Reset(undefined4 * param_1)
 * called by: CNodeGraph::CNodeGraph, CNodeGraph::Load, CTSGameRules::Init, pfnClientCommand
 */
/* count=0, zero nodes and link matrix */

void __fastcall CNodeGraph::Reset(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  puVar2 = param_1;
  for (iVar1 = 0xa00; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  puVar2 = param_1 + 0xa01;
  for (iVar1 = 0x80000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10070e30  CNodeGraph::AddNode  (157 bytes)
 * undefined AddNode(float * param_1, int param_2)
 * called by: CBasePlayer::PreThink, pfnClientCommand
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (CNode*, int manual): spacing/air checks, append, LinkNewNode, debug beam+"(debug)%i nodes" */

void __thiscall CNodeGraph::AddNode(CNodeGraph *this,float *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  float *pfVar4;
  CNodeGraph *pCVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = IsTooClose(this,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = IsInAir(param_1);
    if ((iVar1 == 0) && (iVar1 = *(int *)this, iVar1 < 0x200)) {
      *(int *)this = iVar1 + 1;
      pfVar4 = param_1;
      pCVar5 = this + iVar1 * 0x14 + 4;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(float *)pCVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pCVar5 = pCVar5 + 4;
      }
      LinkNewNode(this,*(int *)this + -1,param_2);
      if ((_DAT_1009eda4 == 2.0) || (param_2 != 0)) {
        UTIL_DebugNodeBeam(param_1,10);
        iVar7 = 0;
        iVar6 = 0;
        iVar3 = 0;
        iVar1 = 0;
        puVar2 = UTIL_VarArgs((byte_conflict *)s__debug__i_nodes_100a5a78);
        UTIL_ClientPrintAll(3,puVar2,iVar1,iVar3,iVar6,iVar7);
      }
    }
  }
  return;
}

/* 10070ed0  CNodeGraph::IsInAir  (114 bytes)
 * undefined4 IsInAir(undefined4 * param_1)
 * called by: CNodeGraph::AddNode
 */
/* non-ladder node with no floor within 72 units below -> reject */

undefined4 CNodeGraph::IsInAir(undefined4 *param_1)

{
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    local_44 = *param_1;
    local_40 = param_1[1];
    local_3c = (float)param_1[2] - 72.0;
    UTIL_TraceLine(param_1,&local_44,1,0,local_38);
    if (1.0 <= local_28) {
      return 1;
    }
  }
  return 0;
}

/* 10070f50  CNodeGraph::IsTooClose  (139 bytes)
 * undefined4 IsTooClose(float * param_1, int param_2)
 * called by: CNodeGraph::AddNode
 */
/* any node within 8 (manual) / 32 (ladder) / 128 units */

undefined4 __thiscall CNodeGraph::IsTooClose(CNodeGraph *this,float *param_1,int param_2)

{
  CNodeGraph *pCVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_2 = (-(uint)(((uint)param_1[3] & 1) != 0) & 0xffffffa0) + 0x80;
  }
  else {
    param_2 = 8;
  }
  iVar2 = 0;
  if (0 < *(int *)this) {
    pCVar1 = this + 0xc;
    do {
      if (SQRT((*(float *)(pCVar1 + -8) - *param_1) * (*(float *)(pCVar1 + -8) - *param_1) +
               (*(float *)(pCVar1 + -4) - param_1[1]) * (*(float *)(pCVar1 + -4) - param_1[1]) +
               (*(float *)pCVar1 - param_1[2]) * (*(float *)pCVar1 - param_1[2])) < (float)param_2)
      {
        return 1;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 0x14;
    } while (iVar2 < *(int *)this);
  }
  return 0;
}

/* 10070fe0  CNodeGraph::IsGroundContinuous  (509 bytes)
 * undefined4 IsGroundContinuous(float * param_1, float * param_2)
 * called by: CNodeGraph::IsReachable
 */
/* floor within 72 below every 16-unit step of the segment (cdecl) */

undefined4 __cdecl CNodeGraph::IsGroundContinuous(float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int local_c0;
  Vector local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  Vector local_98;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  Vector local_74;
  Vector local_68;
  Vector local_5c;
  Vector local_50;
  Vector local_44;
  undefined1 local_38 [16];
  float local_28;
  
  local_b0 = *param_2 - *param_1;
  local_ac = param_2[1] - param_1[1];
  local_a8 = param_2[2] - param_1[2];
  Vector::Vector(&local_bc,&local_b0);
  lVar4 = __ftol();
  iVar2 = (int)lVar4;
  local_a8 = (float)iVar2;
  local_c0 = 1;
  local_b0 = local_bc.x / local_a8;
  local_ac = local_bc.y / local_a8;
  local_a8 = local_bc.z / local_a8;
  if (0 < iVar2) {
    do {
      fVar1 = (float)local_c0;
      local_bc.x = local_b0 * fVar1;
      local_bc.y = local_ac * fVar1;
      local_bc.z = local_a8 * fVar1;
      Vector::Vector(&local_74,&local_bc.x);
      local_8c = local_74.x + *param_1;
      local_88 = local_74.y + param_1[1];
      local_84 = local_74.z + param_1[2];
      Vector::Vector(&local_68,&local_8c);
      local_a4 = local_68.x;
      local_a0 = local_68.y;
      local_9c = local_68.z - 72.0;
      Vector::Vector(&local_5c,&local_a4);
      local_80 = fVar1 * local_b0;
      local_7c = local_ac * fVar1;
      local_78 = local_a8 * fVar1;
      Vector::Vector(&local_98,&local_80);
      puVar3 = (undefined4 *)
               Vector::Vector(&local_44,local_98.x + *param_1,local_98.y + param_1[1],
                              local_98.z + param_1[2]);
      Vector::Vector(&local_50,puVar3);
      UTIL_TraceLine(&local_50,&local_5c,1,0,local_38);
      if (1.0 <= local_28) {
        return 0;
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 <= iVar2);
  }
  return 1;
}

/* 100711e0  CNodeGraph::IsReachable  (552 bytes)
 * bool IsReachable(int param_1, int param_2)
 * called by: CNodeGraph::LinkNewNode
 */
/* ladder shortcuts (2D<64, or 2D<160 && |dz|<32) else IsGroundContinuous */

bool __thiscall CNodeGraph::IsReachable(CNodeGraph *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  CNodeGraph *pCVar3;
  Vector local_18;
  Vector local_c;
  
  if (((byte)this[param_1 * 0x14 + 0x10] & 1) == 0) {
    pCVar3 = this + param_2 * 0x14;
    if (((byte)this[param_2 * 0x14 + 0x10] & 1) == 0) goto LAB_100713ea;
    local_c.x = *(float *)(this + param_1 * 0x14 + 4) - *(float *)(pCVar3 + 4);
    local_c.y = *(float *)(this + param_1 * 0x14 + 8) - *(float *)(pCVar3 + 8);
    local_c.z = *(float *)(this + param_1 * 0x14 + 0xc) - *(float *)(pCVar3 + 0xc);
    Vector::Vector(&local_18,&local_c.x);
    if (SQRT(local_18.x * local_18.x + local_18.y * local_18.y) < 64.0) {
      return true;
    }
    puVar1 = (undefined4 *)
             Vector::Vector(&local_c,*(float *)(this + param_1 * 0x14 + 4) - *(float *)(pCVar3 + 4),
                            *(float *)(this + param_1 * 0x14 + 8) - *(float *)(pCVar3 + 8),
                            *(float *)(this + param_1 * 0x14 + 0xc) - *(float *)(pCVar3 + 0xc));
    Vector::Vector(&local_18,puVar1);
    local_18.y = local_18.y * local_18.y;
    local_18.x = local_18.x * local_18.x;
  }
  else {
    pCVar3 = this + param_2 * 0x14;
    if (((byte)this[param_2 * 0x14 + 0x10] & 1) != 0) {
      local_c.x = *(float *)(this + param_1 * 0x14 + 4) - *(float *)(pCVar3 + 4);
      local_c.y = *(float *)(this + param_1 * 0x14 + 8) - *(float *)(pCVar3 + 8);
      local_c.z = *(float *)(this + param_1 * 0x14 + 0xc) - *(float *)(pCVar3 + 0xc);
      Vector::Vector(&local_18,&local_c.x);
      if (SQRT(local_18.x * local_18.x + local_18.y * local_18.y) < 64.0) {
        return true;
      }
    }
    local_c.x = *(float *)(this + param_1 * 0x14 + 4) - *(float *)(pCVar3 + 4);
    local_c.y = *(float *)(this + param_1 * 0x14 + 8) - *(float *)(pCVar3 + 8);
    local_c.z = *(float *)(this + param_1 * 0x14 + 0xc) - *(float *)(pCVar3 + 0xc);
    Vector::Vector(&local_18,&local_c.x);
    if (SQRT(local_18.x * local_18.x + local_18.y * local_18.y) < 64.0) {
      return true;
    }
    local_c.x = *(float *)(this + param_1 * 0x14 + 4) - *(float *)(pCVar3 + 4);
    local_c.y = *(float *)(this + param_1 * 0x14 + 8) - *(float *)(pCVar3 + 8);
    local_c.z = *(float *)(this + param_1 * 0x14 + 0xc) - *(float *)(pCVar3 + 0xc);
    Vector::Vector(&local_18,&local_c.x);
    local_18.y = local_18.y * local_18.y;
    local_18.x = local_18.x * local_18.x;
  }
  if ((SQRT(local_18.x + local_18.y) < 160.0) &&
     (ABS(*(float *)(this + param_1 * 0x14 + 0xc) - *(float *)(pCVar3 + 0xc)) < 32.0)) {
    return true;
  }
LAB_100713ea:
  iVar2 = IsGroundContinuous((float *)(this + param_1 * 0x14 + 4),(float *)(pCVar3 + 4));
  return iVar2 != 0;
}

/* 10071410  CNodeGraph::LinkNewNode  (469 bytes)
 * undefined LinkNewNode(int param_1, int param_2)
 * called by: CNodeGraph::AddNode
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* trace (through func_door*) + IsReachable to every node, symmetric links */

void __thiscall CNodeGraph::LinkNewNode(CNodeGraph *this,int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined3 extraout_var;
  CNodeGraph *pCVar5;
  char *pcVar6;
  bool bVar7;
  longlong lVar8;
  CNodeGraph *pCVar9;
  int local_40;
  CNodeGraph *local_3c;
  undefined1 local_38 [16];
  float local_28;
  CNodeGraph local_24 [28];
  int local_8;
  
  local_40 = 0;
  if (*(int *)this < 1) {
    return;
  }
  local_3c = this + param_1 * 8 + 0x2804;
  pCVar5 = this + 4;
LAB_1007143d:
  if (local_40 != param_1) {
    pCVar9 = this + param_1 * 0x14 + 4;
    iVar3 = 0;
    do {
      UTIL_TraceLine(pCVar9,pCVar5,1,iVar3,local_38);
      pcVar6 = s_func_door_1009da90;
      pbVar4 = (byte *)(gpGlobals->pStringBase + *(int *)(local_8 + 0x80));
      pbVar2 = pbVar4;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_100714a3:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_100714a8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_100714a3;
        pbVar2 = pbVar2 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100714a8:
      if (iVar3 != 0) {
        pcVar6 = s_func_door_rotating_1009da7c;
        do {
          bVar1 = *pbVar4;
          bVar7 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_100714d7:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_100714dc;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_100714d7;
          pbVar4 = pbVar4 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_100714dc:
        if (iVar3 != 0) goto LAB_100714f7;
      }
      pCVar9 = local_24;
      iVar3 = local_8;
    } while( true );
  }
  goto LAB_100715b7;
LAB_100714f7:
  if ((1.0 <= local_28) &&
     (bVar7 = IsReachable(this,param_1,local_40), CONCAT31(extraout_var,bVar7) != 0)) {
    this[(param_1 * 0x200 + local_40) * 8 + 0x2808] = (CNodeGraph)0x1;
    lVar8 = __ftol();
    *(int *)(this + (param_1 * 0x200 + local_40) * 8 + 0x2804) = (int)lVar8;
    *(int *)local_3c = (int)lVar8;
    *(undefined4 *)(local_3c + 4) =
         *(undefined4 *)(this + (param_1 * 0x200 + local_40) * 8 + 0x2804 + 4);
    if ((_DAT_1009eda4 == 2.0) || (param_2 != 0)) {
      UTIL_DebugBeam((float *)(this + param_1 * 0x14 + 4),(float *)pCVar5,10);
    }
  }
LAB_100715b7:
  local_40 = local_40 + 1;
  local_3c = local_3c + 0x1000;
  pCVar5 = pCVar5 + 0x14;
  if (*(int *)this <= local_40) {
    return;
  }
  goto LAB_1007143d;
}

/* 100715f0  CNodeGraph::PushPath  (40 bytes)
 * undefined PushPath(undefined4 param_1)
 * called by: CNodeGraph::FindPath
 */
/* push node index on path stack (max 512) */

void __thiscall CNodeGraph::PushPath(CNodeGraph *this,undefined4 param_1)

{
  if (*(int *)(this + 0x204008) < 0x200) {
    *(undefined4 *)(this + *(int *)(this + 0x204008) * 4 + 0x203808) = param_1;
    *(int *)(this + 0x204008) = *(int *)(this + 0x204008) + 1;
  }
  return;
}

/* 10071620  CNodeGraph::PopPath  (38 bytes)
 * undefined4 PopPath(int param_1)
 * called by: CNodeGraph::FindPath
 */
/* pop top of path stack (-1 if empty) */

undefined4 __fastcall CNodeGraph::PopPath(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x204008);
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x203804 + iVar1 * 4);
    *(undefined4 *)(param_1 + 0x203804 + iVar1 * 4) = 0xffffffff;
    *(int *)(param_1 + 0x204008) = *(int *)(param_1 + 0x204008) + -1;
  }
  return uVar2;
}

/* 10071650  CNodeGraph::ClearScratch  (72 bytes)
 * undefined ClearScratch(int param_1)
 * called by: CNodeGraph::FindPath
 */
/* reset FindPath scratch (unused list, stack, g/h/f/closed) */

void __fastcall CNodeGraph::ClearScratch(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x202808);
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x202804) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x203808);
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x204008) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x20400c);
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 100716a0  CNodeGraph::FindPathBetweenPoints  (334 bytes)
 * undefined FindPathBetweenPoints(undefined4 param_1, undefined4 param_2, int * param_3, int * param_4, int param_5)
 * called by: CBotNav::Replan
 */
/* nearest visible node to each point, then FindPath */

void __thiscall
CNodeGraph::FindPathBetweenPoints
          (CNodeGraph *this,undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,
          int param_5)

{
  undefined4 uVar1;
  CNodeGraph *pCVar2;
  int iVar3;
  longlong lVar4;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  undefined1 local_38 [16];
  float local_28;
  
  local_4c = 9999;
  local_48 = 9999;
  iVar3 = 0;
  local_3c = -1;
  local_40 = -1;
  if (0 < *(int *)this) {
    pCVar2 = this + 4;
    do {
      uVar1 = 0;
      if (param_5 != 0) {
        uVar1 = *(undefined4 *)(*(int *)(param_5 + 4) + 0x208);
      }
      UTIL_TraceLine(param_1,pCVar2,1,uVar1,local_38);
      if (1.0 <= local_28) {
        lVar4 = __ftol();
        if ((int)lVar4 < local_4c) {
          local_4c = (int)lVar4;
          local_3c = iVar3;
        }
      }
      uVar1 = 0;
      if (param_5 != 0) {
        uVar1 = *(undefined4 *)(*(int *)(param_5 + 4) + 0x208);
      }
      UTIL_TraceLine(param_2,pCVar2,1,uVar1,local_38);
      if (1.0 <= local_28) {
        lVar4 = __ftol();
        if ((int)lVar4 < local_48) {
          local_48 = (int)lVar4;
          local_40 = iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 0x14;
    } while (iVar3 < *(int *)this);
  }
  FindPath(this,local_3c,local_40,param_3,param_4);
  return;
}

/* 100717f0  CNodeGraph::FindPath  (1208 bytes)
 * undefined4 FindPath(int param_1, int param_2, int * param_3, int * param_4)
 * called by: CNodeGraph::FindPathBetweenPoints, pfnClientCommand
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dijkstra from start + greedy g/f walk back from goal; debug output for testpath */

undefined4 __thiscall
CNodeGraph::FindPath(CNodeGraph *this,int param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CNodeGraph *pCVar4;
  char *pcVar5;
  CNodeGraph *pCVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  longlong lVar12;
  undefined *in_stack_fffffdb0;
  int in_stack_fffffdb4;
  int in_stack_fffffdb8;
  int in_stack_fffffdbc;
  int in_stack_fffffdc0;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  char acStack_200 [512];
  
  if ((((param_1 != param_2) && (param_2 < *(int *)this)) && (-1 < param_2)) &&
     ((param_1 < *(int *)this && (-1 < param_1)))) {
    local_210 = 0;
    ClearScratch((int)this);
    iVar2 = 0;
    if (0 < *(int *)this) {
      pCVar6 = this + 0x20400c;
      do {
        *(undefined4 *)pCVar6 = 9999;
        iVar2 = iVar2 + 1;
        pCVar6 = pCVar6 + 0x10;
      } while (iVar2 < *(int *)this);
    }
    *(undefined4 *)(this + param_1 * 0x10 + 0x20400c) = 0;
    do {
      iVar2 = 0;
      iVar3 = 0;
      iVar9 = 9999;
      if (0 < *(int *)this) {
        pCVar6 = this + 0x20400c;
        do {
          if ((pCVar6[0xc] == (CNodeGraph)0x0) && (*(int *)pCVar6 < iVar9)) {
            iVar2 = iVar3;
            iVar9 = *(int *)pCVar6;
          }
          iVar3 = iVar3 + 1;
          pCVar6 = pCVar6 + 0x10;
        } while (iVar3 < *(int *)this);
      }
      this[iVar2 * 0x10 + 0x204018] = (CNodeGraph)0x1;
      if ((param_2 == iVar2) || (iVar9 == 9999)) break;
      iVar9 = 0;
      if (0 < *(int *)this) {
        pCVar6 = this + 0x20400c;
        pCVar4 = this + iVar2 * 0x1000 + 0x2804;
        do {
          if ((pCVar4[4] != (CNodeGraph)0x0) &&
             (*(int *)(this + iVar2 * 0x10 + 0x20400c) + *(int *)pCVar4 < *(int *)pCVar6)) {
            *(int *)pCVar6 = *(int *)(this + iVar2 * 0x10 + 0x20400c) + *(int *)pCVar4;
          }
          iVar9 = iVar9 + 1;
          pCVar4 = pCVar4 + 8;
          pCVar6 = pCVar6 + 0x10;
        } while (iVar9 < *(int *)this);
      }
      local_210 = local_210 + 1;
    } while (local_210 < 1000);
    iVar2 = 0;
    if (0 < *(int *)this) {
      pCVar6 = this + 0x204018;
      do {
        *pCVar6 = (CNodeGraph)0x0;
        iVar2 = iVar2 + 1;
        pCVar6 = pCVar6 + 0x10;
      } while (iVar2 < *(int *)this);
    }
    local_214 = param_2;
    this[param_2 * 0x10 + 0x204018] = (CNodeGraph)0x1;
    PushPath(this,param_2);
    local_210 = 0;
    do {
      iVar2 = 0;
      local_204 = 9999;
      local_20c = 9999;
      local_208 = -1;
      if (*(int *)this < 1) {
LAB_10071a3e:
        if (*(int *)(this + 0x204008) < 2) {
          if (_DAT_1009eda4 == 2.0) {
            in_stack_fffffdc0 = 0x10071a95;
            UTIL_ClientPrintAll(3,s__debug_no_node_found_100a5ac0,0,0,0,0);
          }
          local_214 = -1;
        }
        else {
          this[local_214 * 0x10 + 0x204018] = (CNodeGraph)0x1;
          local_214 = PopPath((int)this);
          this[local_214 * 0x10 + 0x204018] = (CNodeGraph)0x0;
        }
      }
      else {
        pCVar6 = this + 0x20400c;
        do {
          if (((pCVar6[0xc] == (CNodeGraph)0x0) && (iVar2 != local_214)) &&
             (this[(local_214 * 0x200 + iVar2) * 8 + 0x2808] != (CNodeGraph)0x0)) {
            if (iVar2 == param_1) {
              PushPath(this,iVar2);
              if (_DAT_1009eda4 == 2.0) goto LAB_10071b30;
              goto LAB_10071b3a;
            }
            if (*(int *)(pCVar6 + 8) == 0) {
              lVar12 = __ftol();
              *(int *)(pCVar6 + 4) = (int)lVar12;
              *(int *)(pCVar6 + 8) = (int)lVar12 + *(int *)pCVar6;
            }
            if ((*(int *)pCVar6 < local_204) && (*(int *)(pCVar6 + 8) < local_20c)) {
              local_20c = *(int *)(pCVar6 + 8);
              local_208 = iVar2;
              local_204 = *(int *)pCVar6;
            }
          }
          iVar2 = iVar2 + 1;
          pCVar6 = pCVar6 + 0x10;
        } while (iVar2 < *(int *)this);
        if (local_208 == -1) goto LAB_10071a3e;
        this[local_208 * 0x10 + 0x204018] = (CNodeGraph)0x1;
        PushPath(this,local_208);
        local_214 = local_208;
      }
      local_210 = local_210 + 1;
    } while ((local_210 < 1000) && (local_214 != -1));
    if (_DAT_1009eda4 == 2.0) {
      in_stack_fffffdc0 = 0x10071b2c;
      in_stack_fffffdb0 = UTIL_VarArgs((byte_conflict *)s__debug__i_passages_100a5a9c);
LAB_10071b30:
      UTIL_ClientPrintAll(3,in_stack_fffffdb0,in_stack_fffffdb4,in_stack_fffffdb8,in_stack_fffffdbc,
                          in_stack_fffffdc0);
    }
LAB_10071b3a:
    if (1 < *(int *)(this + 0x204008)) {
      if (param_3 != (int *)0x0) {
        *param_4 = *(int *)(this + 0x204008);
        iVar2 = *(int *)(this + 0x204008);
        iVar9 = 0;
        if (0 < iVar2) {
          do {
            iVar2 = iVar2 - iVar9;
            iVar9 = iVar9 + 1;
            pCVar6 = this + *(int *)(this + iVar2 * 4 + 0x203804) * 0x14 + 4;
            *param_3 = *(int *)pCVar6;
            param_3[1] = *(int *)(pCVar6 + 4);
            param_3[2] = *(int *)(pCVar6 + 8);
            iVar2 = *(int *)(this + 0x204008);
            param_3 = param_3 + 3;
          } while (iVar9 < iVar2);
        }
      }
      if (_DAT_1009eda4 == 2.0) {
        local_20c = PopPath((int)this);
        sprintf(acStack_200,(byte_conflict *)s_path__i_100a5a94);
        do {
          iVar2 = PopPath((int)this);
          pcVar5 = UTIL_VarArgs(&DAT_100a5a90);
          uVar7 = 0xffffffff;
          do {
            pcVar11 = pcVar5;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar11 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar11;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar9 = -1;
          pcVar5 = acStack_200;
          do {
            pcVar10 = pcVar5;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar10 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar10;
          } while (cVar1 != '\0');
          pcVar5 = pcVar11 + -uVar7;
          pcVar11 = pcVar10 + -1;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar11 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar11 = pcVar11 + 1;
          }
          if ((local_20c != -1) && (iVar2 != -1)) {
            UTIL_DebugBeam((float *)(this + local_20c * 0x14 + 4),(float *)(this + iVar2 * 0x14 + 4)
                           ,100);
          }
          local_20c = iVar2;
        } while (0 < *(int *)(this + 0x204008));
        uVar7 = 0xffffffff;
        pcVar5 = &DAT_100a5a8c;
        do {
          pcVar11 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar11 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar11;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar2 = -1;
        pcVar5 = acStack_200;
        do {
          pcVar10 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar10 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar10;
        } while (cVar1 != '\0');
        pcVar5 = pcVar11 + -uVar7;
        pcVar11 = pcVar10 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar11 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar11 = pcVar11 + 1;
        }
        UTIL_ClientPrintAll(3,acStack_200,0,0,0,0);
      }
      return 1;
    }
  }
  return 0;
}

/* 10071cb0  CNodeGraph::Load  (429 bytes)
 * undefined Load(int * param_1)
 * called by: CTSGameRules::Init, pfnClientCommand
 */
/* <gamedir>\maps\<map>.ndm "rb"; rejects count>=512 */

void __fastcall CNodeGraph::Load(int *param_1)

{
  char cVar1;
  FILE *pFVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int iStack_20c;
  int iStack_204;
  char acStack_200 [256];
  char local_100 [256];
  
  (*g_engfuncs.pfnGetGameDir)(local_100);
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_100a5ae0;
  do {
    pcVar9 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = local_100;
  do {
    pcVar8 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar3;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  Reset(param_1);
  uVar3 = 0xffffffff;
  pcVar6 = local_100;
  do {
    pcVar9 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar9 + -uVar3;
  pcVar9 = acStack_200;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = gpGlobals->pStringBase + gpGlobals->mapname;
  do {
    pcVar9 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = acStack_200;
  do {
    pcVar8 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar3;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_100a5ad8;
  do {
    pcVar9 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = acStack_200;
  do {
    pcVar8 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar3;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  pFVar2 = (FILE *)fopen(acStack_200,&DAT_100a5a5c);
  if (pFVar2 != (FILE *)0x0) {
    uVar3 = fread((char *)&iStack_204,4,1,(int *)pFVar2);
    if ((uVar3 != 0) && (iStack_204 < 0x200)) {
      iVar4 = 0;
      *param_1 = iStack_204;
      if (0 < iStack_204) {
        piVar10 = param_1 + 1;
        do {
          fread((char *)piVar10,0x14,1,(int *)pFVar2);
          iVar4 = iVar4 + 1;
          piVar10 = piVar10 + 5;
        } while (iVar4 < *param_1);
      }
      iVar4 = *param_1;
      iStack_20c = 0;
      if (0 < iVar4) {
        piVar10 = param_1 + 0xa01;
        do {
          iVar7 = 0;
          piVar11 = piVar10;
          if (0 < iVar4) {
            do {
              fread((char *)piVar11,8,1,(int *)pFVar2);
              iVar7 = iVar7 + 1;
              piVar11 = piVar11 + 2;
            } while (iVar7 < *param_1);
          }
          iVar4 = *param_1;
          iStack_20c = iStack_20c + 1;
          piVar10 = piVar10 + 0x400;
        } while (iStack_20c < iVar4);
      }
    }
    fclose(pFVar2);
  }
  return;
}

/* 10071e60  CNodeGraph::Save  (394 bytes)
 * undefined Save(int * param_1)
 * called by: pfnClientCommand
 */
/* TS\maps\<map>.ndm "wb"; skipped if count<=0 */

void __fastcall CNodeGraph::Save(int *param_1)

{
  char cVar1;
  FILE *pFVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int local_20c;
  int local_204;
  char local_200 [256];
  char local_100 [256];
  
  if (0 < *param_1) {
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_100a5aec;
    do {
      pcVar9 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar9 + -uVar3;
    pcVar9 = local_100;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = local_100;
    do {
      pcVar9 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar9 + -uVar3;
    pcVar9 = local_200;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = gpGlobals->pStringBase + gpGlobals->mapname;
    do {
      pcVar9 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = local_200;
    do {
      pcVar8 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    pcVar6 = pcVar9 + -uVar3;
    pcVar9 = pcVar8 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_100a5ad8;
    do {
      pcVar9 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = local_200;
    do {
      pcVar8 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    pcVar6 = pcVar9 + -uVar3;
    pcVar9 = pcVar8 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    pFVar2 = (FILE *)fopen(local_200,&DAT_100a5ae8);
    if (pFVar2 != (FILE *)0x0) {
      local_204 = *param_1;
      fwrite((char *)&local_204,4,1,(int *)pFVar2);
      iVar5 = 0;
      if (0 < *param_1) {
        piVar10 = param_1 + 1;
        do {
          fwrite((char *)piVar10,0x14,1,(int *)pFVar2);
          iVar5 = iVar5 + 1;
          piVar10 = piVar10 + 5;
        } while (iVar5 < *param_1);
      }
      iVar5 = *param_1;
      local_20c = 0;
      if (0 < iVar5) {
        piVar10 = param_1 + 0xa01;
        do {
          iVar7 = 0;
          piVar11 = piVar10;
          if (0 < iVar5) {
            do {
              fwrite((char *)piVar11,8,1,(int *)pFVar2);
              iVar7 = iVar7 + 1;
              piVar11 = piVar11 + 2;
            } while (iVar7 < *param_1);
          }
          iVar5 = *param_1;
          local_20c = local_20c + 1;
          piVar10 = piVar10 + 0x400;
        } while (local_20c < iVar5);
      }
      fclose(pFVar2);
    }
  }
  return;
}

