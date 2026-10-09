/* ts_i386.so - CTSSharedEmitter (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f7f38  CTSSharedEmitter::CTSSharedEmitter  (48 bytes)
 * undefined CTSSharedEmitter(void)
 */
/* CTSSharedEmitter::CTSSharedEmitter(void) */

void __thiscall CTSSharedEmitter::CTSSharedEmitter(CTSSharedEmitter *this)

{
  int iVar1;
  CTSSharedEmitter *pCVar2;
  
  pCVar2 = this;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
  }
  pCVar2 = this + 0x800;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
  }
  return;
}

/* 000f7f68  CTSSharedEmitter::NextEmitter  (101 bytes)
 * int NextEmitter(void)
 */
/* CTSSharedEmitter::NextEmitter(void) */

int __thiscall CTSSharedEmitter::NextEmitter(CTSSharedEmitter *this)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(this + iVar1 * 4) == 0) {
      return iVar1;
    }
    if (*(int *)(this + (iVar1 + 1) * 4) == 0) {
      return iVar1 + 1;
    }
    if (*(int *)(this + (iVar1 + 2) * 4) == 0) {
      return iVar1 + 2;
    }
    if (*(int *)(this + (iVar1 + 3) * 4) == 0) {
      return iVar1 + 3;
    }
    if (*(int *)(this + (iVar1 + 4) * 4) == 0) {
      return iVar1 + 4;
    }
    if (*(int *)(this + (iVar1 + 5) * 4) == 0) {
      return iVar1 + 5;
    }
    if (*(int *)(this + (iVar1 + 6) * 4) == 0) {
      return iVar1 + 6;
    }
    if (*(int *)(this + (iVar1 + 7) * 4) == 0) break;
    iVar1 = iVar1 + 8;
    if (0x1ff < iVar1) {
      return -1;
    }
  }
  return iVar1 + 7;
}

/* 000f7fd0  CTSSharedEmitter::NextParticle  (106 bytes)
 * int NextParticle(void)
 */
/* CTSSharedEmitter::NextParticle(void) */

int __thiscall CTSSharedEmitter::NextParticle(CTSSharedEmitter *this)

{
  int iVar1;
  int iVar2;
  CTSSharedEmitter *pCVar3;
  
  iVar1 = 0;
  pCVar3 = this + 0x800;
  while( true ) {
    if (*(int *)pCVar3 == 0) {
      return iVar1;
    }
    iVar2 = iVar1 + 1;
    if ((((*(int *)(pCVar3 + 4) == 0) || (iVar2 = iVar1 + 2, *(int *)(pCVar3 + 8) == 0)) ||
        (iVar2 = iVar1 + 3, *(int *)(pCVar3 + 0xc) == 0)) ||
       (((iVar2 = iVar1 + 4, *(int *)(pCVar3 + 0x10) == 0 ||
         (iVar2 = iVar1 + 5, *(int *)(pCVar3 + 0x14) == 0)) ||
        ((iVar2 = iVar1 + 6, *(int *)(pCVar3 + 0x18) == 0 ||
         (iVar2 = iVar1 + 7, *(int *)(pCVar3 + 0x1c) == 0)))))) break;
    pCVar3 = pCVar3 + 0x20;
    iVar1 = iVar1 + 8;
    if (0x1ff < iVar1) {
      return -1;
    }
  }
  return iVar2;
}

/* 000f803c  CTSSharedEmitter::AddEmitter  (311 bytes)
 * int AddEmitter(int * param_1)
 */
/* CTSSharedEmitter::AddEmitter(sharedemitter_s *) */

int __thiscall CTSSharedEmitter::AddEmitter(CTSSharedEmitter *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    do {
      iVar3 = iVar1 * 4;
      iVar2 = iVar1;
      if (*(int *)(this + iVar3) == 0) {
LAB_000f8054:
        *(int **)(this + iVar3) = param_1;
        *(undefined1 *)(param_1 + 4) = 1;
        *param_1 = iVar2;
        return iVar2;
      }
      iVar2 = iVar1 + 1;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 2;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 3;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 4;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 5;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 6;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 7;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 8;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 9;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 10;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 0xb;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 0xc;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 0xd;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 0xe;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar2 = iVar1 + 0xf;
      iVar3 = iVar2 * 4;
      if (*(int *)(this + iVar3) == 0) goto LAB_000f8054;
      iVar1 = iVar1 + 0x10;
    } while (iVar1 < 0x200);
  }
  return -1;
}

/* 000f8178  CTSSharedEmitter::AddParticle  (171 bytes)
 * int AddParticle(int * param_1)
 */
/* CTSSharedEmitter::AddParticle(sharedparticle_s *) */

int __thiscall CTSSharedEmitter::AddParticle(CTSSharedEmitter *this,int *param_1)

{
  CTSSharedEmitter *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar2 = 0x800;
  pCVar1 = this + 0x800;
  if (param_1 != (int *)0x0) {
    do {
      iVar3 = iVar2;
      iVar5 = iVar4;
      if (*(int *)pCVar1 == 0) {
LAB_000f819c:
        *(int **)(this + iVar3) = param_1;
        *(undefined1 *)(param_1 + 1) = 1;
        param_1[2] = 0;
        *param_1 = iVar5;
        return iVar5;
      }
      iVar3 = iVar2 + 4;
      iVar5 = iVar4 + 1;
      if (*(int *)(pCVar1 + 4) == 0) goto LAB_000f819c;
      iVar3 = iVar2 + 8;
      iVar5 = iVar4 + 2;
      if (*(int *)(pCVar1 + 8) == 0) goto LAB_000f819c;
      iVar3 = iVar2 + 0xc;
      iVar5 = iVar4 + 3;
      if (*(int *)(pCVar1 + 0xc) == 0) goto LAB_000f819c;
      iVar3 = iVar2 + 0x10;
      iVar5 = iVar4 + 4;
      if (*(int *)(pCVar1 + 0x10) == 0) goto LAB_000f819c;
      iVar3 = iVar2 + 0x14;
      iVar5 = iVar4 + 5;
      if (*(int *)(pCVar1 + 0x14) == 0) goto LAB_000f819c;
      iVar3 = iVar2 + 0x18;
      iVar5 = iVar4 + 6;
      if (*(int *)(pCVar1 + 0x18) == 0) goto LAB_000f819c;
      iVar3 = iVar2 + 0x1c;
      iVar5 = iVar4 + 7;
      if (*(int *)(pCVar1 + 0x1c) == 0) goto LAB_000f819c;
      pCVar1 = pCVar1 + 0x20;
      iVar2 = iVar2 + 0x20;
      iVar4 = iVar4 + 8;
    } while (iVar4 < 0x200);
  }
  return -1;
}

/* 000f8224  CTSSharedEmitter::SetEmitterParticle  (95 bytes)
 * undefined SetEmitterParticle(int param_1, int param_2)
 */
/* CTSSharedEmitter::SetEmitterParticle(int, int) */

void __thiscall CTSSharedEmitter::SetEmitterParticle(CTSSharedEmitter *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 != -1) && (param_2 != -1)) && (*(int *)(this + param_1 * 4) != 0)) &&
     (*(int *)(this + param_2 * 4 + 0x800) != 0)) {
    if ((*(int *)(*(int *)(this + param_1 * 4) + 0x14) != -1) &&
       (iVar1 = *(int *)(*(int *)(this + param_1 * 4) + 0x14) * 4 + 0x800,
       *(int *)(this + iVar1) != 0)) {
      *(int *)(*(int *)(this + iVar1) + 8) = *(int *)(*(int *)(this + iVar1) + 8) + -1;
    }
    *(int *)(*(int *)(this + param_1 * 4) + 0x14) = param_2;
    *(int *)(*(int *)(this + param_2 * 4 + 0x800) + 8) =
         *(int *)(*(int *)(this + param_2 * 4 + 0x800) + 8) + 1;
  }
  return;
}

/* 000f8284  CTSSharedEmitter::SV_UpdateClient  (202 bytes)
 * undefined SV_UpdateClient(undefined4 param_1)
 */
/* CTSSharedEmitter::SV_UpdateClient(int) */

void __thiscall CTSSharedEmitter::SV_UpdateClient(CTSSharedEmitter *this,int param_1)

{
  int iVar1;
  edict_t *peVar2;
  CTSSharedEmitter *pCVar3;
  int local_14;
  
  local_14 = 0;
  pCVar3 = this + 0x800;
  do {
    iVar1 = gmsgTSParticleSystem;
    if (*(int *)pCVar3 != 0) {
      peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
      (*g_engfuncs.pfnMessageBegin)(1,iVar1,(float *)0x0,peVar2);
      (*g_engfuncs.pfnWriteByte)(1);
      (*g_engfuncs.pfnMessageEnd)();
    }
    iVar1 = gmsgTSParticleSystem;
    if (*(int *)(pCVar3 + 4) != 0) {
      peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
      (*g_engfuncs.pfnMessageBegin)(1,iVar1,(float *)0x0,peVar2);
      (*g_engfuncs.pfnWriteByte)(1);
      (*g_engfuncs.pfnMessageEnd)();
    }
    pCVar3 = pCVar3 + 8;
    local_14 = local_14 + 2;
  } while (local_14 < 0x200);
  return;
}

/* 000f8350  CTSSharedEmitter::KillAll  (169 bytes)
 * undefined KillAll(void)
 */
/* CTSSharedEmitter::KillAll(void) */

void __thiscall CTSSharedEmitter::KillAll(CTSSharedEmitter *this)

{
  int iVar1;
  CTSSharedEmitter *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this;
  do {
    *(undefined4 *)(this + 0x800) = 0;
    *(undefined4 *)pCVar2 = 0;
    *(undefined4 *)(this + 0x804) = 0;
    *(undefined4 *)(pCVar2 + 4) = 0;
    *(undefined4 *)(this + 0x808) = 0;
    *(undefined4 *)(pCVar2 + 8) = 0;
    *(undefined4 *)(this + 0x80c) = 0;
    *(undefined4 *)(pCVar2 + 0xc) = 0;
    *(undefined4 *)(this + 0x810) = 0;
    *(undefined4 *)(pCVar2 + 0x10) = 0;
    *(undefined4 *)(this + 0x814) = 0;
    *(undefined4 *)(pCVar2 + 0x14) = 0;
    *(undefined4 *)(this + 0x818) = 0;
    *(undefined4 *)(pCVar2 + 0x18) = 0;
    *(undefined4 *)(this + 0x81c) = 0;
    *(undefined4 *)(pCVar2 + 0x1c) = 0;
    pCVar2 = pCVar2 + 0x20;
    this = this + 0x20;
    iVar1 = iVar1 + 8;
  } while (iVar1 < 0x200);
  return;
}

/* 000f83fc  CTSSharedEmitter::KillEmitter  (16 bytes)
 * undefined KillEmitter(int param_1)
 */
/* CTSSharedEmitter::KillEmitter(int) */

void __thiscall CTSSharedEmitter::KillEmitter(CTSSharedEmitter *this,int param_1)

{
  *(undefined4 *)(this + param_1 * 4) = 0;
  return;
}

/* 000f840c  CTSSharedEmitter::EmitterKeyValue  (548 bytes)
 * undefined4 EmitterKeyValue(undefined4 this, int param_2, char * param_3, char * param_4)
 */
/* CTSSharedEmitter::EmitterKeyValue(sharedemitter_s *, char *, char *) */

undefined4 __thiscall
CTSSharedEmitter::EmitterKeyValue(undefined4 this,int param_2,char *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  longdouble extraout_ST0_01;
  longdouble extraout_ST0_02;
  int iVar6;
  
  iVar1 = strcasecmp(param_3,"particle");
  if (iVar1 == 0) {
    pcVar2 = strcpy((char *)(param_2 + 0x18),param_4);
    uVar3 = CONCAT31((int3)((uint)pcVar2 >> 8),1);
  }
  else {
    iVar1 = strcasecmp(param_3,"epslow");
    if (iVar1 == 0) {
      uVar3 = __strtod_internal(param_4,0,0);
      *(float *)(param_2 + 0x80) = (float)extraout_ST0;
      uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    else {
      iVar1 = strcasecmp(param_3,"epshigh");
      if (iVar1 == 0) {
        uVar3 = __strtod_internal(param_4,0,0);
        *(float *)(param_2 + 0x7c) = (float)extraout_ST0_00;
        uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      else {
        iVar1 = strcasecmp(param_3,"ppelow");
        if (iVar1 == 0) {
          uVar3 = __strtol_internal(param_4,0,10,0);
          *(undefined4 *)(param_2 + 0x88) = uVar3;
          uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
        else {
          iVar1 = strcasecmp(param_3,"ppehigh");
          if (iVar1 == 0) {
            uVar3 = __strtol_internal(param_4,0,10,0);
            *(undefined4 *)(param_2 + 0x84) = uVar3;
            uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
          else {
            iVar1 = strcasecmp(param_3,"variancelow");
            if (iVar1 == 0) {
              iVar1 = param_2 + 0xa0;
              iVar6 = param_2 + 0x9c;
              iVar5 = param_2 + 0x98;
            }
            else {
              iVar1 = strcasecmp(param_3,"variancehigh");
              if (iVar1 == 0) {
                iVar1 = param_2 + 0x94;
                iVar6 = param_2 + 0x90;
                iVar5 = param_2 + 0x8c;
              }
              else {
                iVar1 = strcasecmp(param_3,"cameradensity");
                if (iVar1 == 0) {
                  uVar3 = __strtod_internal(param_4,0,0);
                  *(float *)(param_2 + 0xa4) = (float)extraout_ST0_01;
                  return CONCAT31((int3)((uint)uVar3 >> 8),1);
                }
                iVar1 = strcasecmp(param_3,"cameraradius");
                if (iVar1 == 0) {
                  uVar3 = __strtod_internal(param_4,0,0);
                  *(float *)(param_2 + 0xa8) = (float)extraout_ST0_02;
                  return CONCAT31((int3)((uint)uVar3 >> 8),1);
                }
                uVar4 = strcasecmp(param_3,"origin");
                if (uVar4 != 0) {
                  return uVar4 & 0xffffff00;
                }
                iVar1 = param_2 + 0xc;
                iVar6 = param_2 + 8;
                iVar5 = param_2 + 4;
              }
            }
            iVar1 = sscanf(param_4,"%f %f %f",iVar5,iVar6,iVar1);
            uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),1);
          }
        }
      }
    }
  }
  return uVar3;
}

/* 000f8644  CTSSharedEmitter::ParticleKeyValue  (2309 bytes)
 * undefined4 ParticleKeyValue(undefined4 this, int param_2, char * param_3, char * param_4)
 */
/* CTSSharedEmitter::ParticleKeyValue(sharedparticle_s *, char *, char *) */

undefined4 __thiscall
CTSSharedEmitter::ParticleKeyValue(undefined4 this,int param_2,char *param_3,char *param_4)

{
  int iVar1;
  undefined3 uVar4;
  char *pcVar2;
  uint uVar3;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  longdouble extraout_ST0_01;
  longdouble extraout_ST0_02;
  longdouble extraout_ST0_03;
  longdouble extraout_ST0_04;
  longdouble extraout_ST0_05;
  longdouble extraout_ST0_06;
  longdouble extraout_ST0_07;
  longdouble extraout_ST0_08;
  longdouble extraout_ST0_09;
  longdouble extraout_ST0_10;
  longdouble extraout_ST0_11;
  longdouble extraout_ST0_12;
  longdouble extraout_ST0_13;
  longdouble extraout_ST0_14;
  longdouble extraout_ST0_15;
  longdouble extraout_ST0_16;
  longdouble extraout_ST0_17;
  longdouble extraout_ST0_18;
  longdouble extraout_ST0_19;
  longdouble extraout_ST0_20;
  longdouble extraout_ST0_21;
  longdouble extraout_ST0_22;
  longdouble extraout_ST0_23;
  
  iVar1 = strcasecmp(param_3,"sprite_name");
  if (iVar1 == 0) {
    pcVar2 = (char *)(param_2 + 0xe4);
LAB_000f8da5:
    pcVar2 = strcpy(pcVar2,param_4);
    uVar4 = (undefined3)((uint)pcVar2 >> 8);
  }
  else {
    iVar1 = strcasecmp(param_3,"sprite_trans");
    if (iVar1 == 0) {
      iVar1 = __strtol_internal(param_4,0,10,0);
      *(int *)(param_2 + 0x148) = iVar1;
    }
    else {
      iVar1 = strcasecmp(param_3,"follow_view");
      if (iVar1 == 0) {
        iVar1 = __strtol_internal(param_4,0,10,0);
        *(int *)(param_2 + 0x14c) = iVar1;
      }
      else {
        iVar1 = strcasecmp(param_3,"collide");
        if (iVar1 == 0) {
          iVar1 = __strtol_internal(param_4,0,10,0);
          *(int *)(param_2 + 0x150) = iVar1;
        }
        else {
          iVar1 = strcasecmp(param_3,"oncollide");
          if (iVar1 == 0) {
            iVar1 = __strtol_internal(param_4,0,10,0);
            *(int *)(param_2 + 0x154) = iVar1;
          }
          else {
            iVar1 = strcasecmp(param_3,"lifelow");
            if (iVar1 == 0) {
              iVar1 = __strtod_internal(param_4,0,0);
              *(float *)(param_2 + 0x10) = (float)extraout_ST0;
            }
            else {
              iVar1 = strcasecmp(param_3,"lifehigh");
              if (iVar1 == 0) {
                iVar1 = __strtod_internal(param_4,0,0);
                *(float *)(param_2 + 0xc) = (float)extraout_ST0_00;
              }
              else {
                iVar1 = strcasecmp(param_3,"gravitylow");
                if (iVar1 == 0) {
                  iVar1 = __strtod_internal(param_4,0,0);
                  *(float *)(param_2 + 0x18) = (float)extraout_ST0_01;
                }
                else {
                  iVar1 = strcasecmp(param_3,"gravityhigh");
                  if (iVar1 == 0) {
                    iVar1 = __strtod_internal(param_4,0,0);
                    *(float *)(param_2 + 0x14) = (float)extraout_ST0_02;
                  }
                  else {
                    iVar1 = strcasecmp(param_3,"colorlow");
                    if (iVar1 == 0) {
                      iVar1 = __strtod_internal(param_4,0,0);
                      *(float *)(param_2 + 0x20) = (float)extraout_ST0_03;
                    }
                    else {
                      iVar1 = strcasecmp(param_3,"colorhigh");
                      if (iVar1 == 0) {
                        iVar1 = __strtod_internal(param_4,0,0);
                        *(float *)(param_2 + 0x1c) = (float)extraout_ST0_04;
                      }
                      else {
                        iVar1 = strcasecmp(param_3,"fadespeedlow");
                        if (iVar1 == 0) {
                          iVar1 = __strtod_internal(param_4,0,0);
                          *(float *)(param_2 + 0x28) = (float)extraout_ST0_05;
                        }
                        else {
                          iVar1 = strcasecmp(param_3,"fadespeedhigh");
                          if (iVar1 == 0) {
                            iVar1 = __strtod_internal(param_4,0,0);
                            *(float *)(param_2 + 0x24) = (float)extraout_ST0_06;
                          }
                          else {
                            iVar1 = strcasecmp(param_3,"p_radiuslow");
                            if (iVar1 == 0) {
                              iVar1 = __strtod_internal(param_4,0,0);
                              *(float *)(param_2 + 0x30) = (float)extraout_ST0_07;
                            }
                            else {
                              iVar1 = strcasecmp(param_3,"p_radiushigh");
                              if (iVar1 == 0) {
                                iVar1 = __strtod_internal(param_4,0,0);
                                *(float *)(param_2 + 0x2c) = (float)extraout_ST0_08;
                              }
                              else {
                                iVar1 = strcasecmp(param_3,"scalespeedlow");
                                if (iVar1 == 0) {
                                  iVar1 = __strtod_internal(param_4,0,0);
                                  *(float *)(param_2 + 0x38) = (float)extraout_ST0_09;
                                }
                                else {
                                  iVar1 = strcasecmp(param_3,"scalespeedhigh");
                                  if (iVar1 == 0) {
                                    iVar1 = __strtod_internal(param_4,0,0);
                                    *(float *)(param_2 + 0x34) = (float)extraout_ST0_10;
                                  }
                                  else {
                                    iVar1 = strcasecmp(param_3,"current_framelow");
                                    if (iVar1 == 0) {
                                      iVar1 = __strtol_internal(param_4,0,10,0);
                                      *(int *)(param_2 + 0x40) = iVar1;
                                    }
                                    else {
                                      iVar1 = strcasecmp(param_3,"current_framehigh");
                                      if (iVar1 == 0) {
                                        iVar1 = __strtol_internal(param_4,0,10,0);
                                        *(int *)(param_2 + 0x3c) = iVar1;
                                      }
                                      else {
                                        iVar1 = strcasecmp(param_3,"frame_ratelow");
                                        if (iVar1 == 0) {
                                          iVar1 = __strtod_internal(param_4,0,0);
                                          *(float *)(param_2 + 0x48) = (float)extraout_ST0_11;
                                        }
                                        else {
                                          iVar1 = strcasecmp(param_3,"frame_ratehigh");
                                          if (iVar1 == 0) {
                                            iVar1 = __strtod_internal(param_4,0,0);
                                            *(float *)(param_2 + 0x44) = (float)extraout_ST0_12;
                                          }
                                          else {
                                            iVar1 = strcasecmp(param_3,"randomdeltalow");
                                            if (iVar1 == 0) {
                                              iVar1 = __strtod_internal(param_4,0,0);
                                              *(float *)(param_2 + 0x50) = (float)extraout_ST0_13;
                                            }
                                            else {
                                              iVar1 = strcasecmp(param_3,"randomdeltahigh");
                                              if (iVar1 == 0) {
                                                iVar1 = __strtod_internal(param_4,0,0);
                                                *(float *)(param_2 + 0x4c) = (float)extraout_ST0_14;
                                              }
                                              else {
                                                iVar1 = strcasecmp(param_3,"velocitylow");
                                                if (iVar1 == 0) {
                                                  iVar1 = sscanf(param_4,"%f %f %f",param_2 + 0x80,
                                                                 param_2 + 0x84,param_2 + 0x88);
                                                  if (iVar1 != 3) {
                                                    iVar1 = (*g_engfuncs.pfnAlertMessage)
                                                                      (at_error,
                                                  "velocitylow has bad value. Should be \"x y z\"\n"
                                                  );
                                                  }
                                                }
                                                else {
                                                  iVar1 = strcasecmp(param_3,"velocityhigh");
                                                  if (iVar1 == 0) {
                                                    iVar1 = sscanf(param_4,"%f %f %f",param_2 + 0x74
                                                                   ,param_2 + 0x78,param_2 + 0x7c);
                                                    if (iVar1 != 3) {
                                                      iVar1 = (*g_engfuncs.pfnAlertMessage)
                                                                        (at_error,
                                                  "velocityhigh has bad value. Should be \"x y z\"\n"
                                                  );
                                                  }
                                                  }
                                                  else {
                                                    iVar1 = strcasecmp(param_3,"a_velocitylow");
                                                    if (iVar1 == 0) {
                                                      iVar1 = sscanf(param_4,"%f %f %f",
                                                                     param_2 + 0x98,param_2 + 0x9c,
                                                                     param_2 + 0xa0);
                                                      if (iVar1 != 3) {
                                                        iVar1 = (*g_engfuncs.pfnAlertMessage)
                                                                          (at_error,
                                                  "a_velocitylow has bad value. Should be \"x y z\"\n"
                                                  );
                                                  }
                                                  }
                                                  else {
                                                    iVar1 = strcasecmp(param_3,"a_velocityhigh");
                                                    if (iVar1 == 0) {
                                                      iVar1 = sscanf(param_4,"%f %f %f",
                                                                     param_2 + 0x8c,param_2 + 0x90,
                                                                     param_2 + 0x94);
                                                      if (iVar1 != 3) {
                                                        iVar1 = (*g_engfuncs.pfnAlertMessage)
                                                                          (at_error,
                                                  "a_velocityhigh has bad value. Should be \"x y z\"\n"
                                                  );
                                                  }
                                                  }
                                                  else {
                                                    iVar1 = strcasecmp(param_3,"randomvellow");
                                                    if (iVar1 == 0) {
                                                      iVar1 = sscanf(param_4,"%f %f %f",
                                                                     param_2 + 200,param_2 + 0xcc,
                                                                     param_2 + 0xd0);
                                                      if (iVar1 != 3) {
                                                        iVar1 = (*g_engfuncs.pfnAlertMessage)
                                                                          (at_error,
                                                  "randomvellow has bad value. Should be \"x y z\"\n"
                                                  );
                                                  }
                                                  }
                                                  else {
                                                    iVar1 = strcasecmp(param_3,"randomvelhigh");
                                                    if (iVar1 == 0) {
                                                      iVar1 = sscanf(param_4,"%f %f %f",
                                                                     param_2 + 0xbc,param_2 + 0xc0,
                                                                     param_2 + 0xc4);
                                                      if (iVar1 != 3) {
                                                        iVar1 = (*g_engfuncs.pfnAlertMessage)
                                                                          (at_error,
                                                  "randomvelhigh has bad value. Should be \"x y z\"\n"
                                                  );
                                                  }
                                                  }
                                                  else {
                                                    iVar1 = strcasecmp(param_3,"followaxis");
                                                    if (iVar1 == 0) {
                                                      iVar1 = sscanf(param_4,"%f %f %f",
                                                                     param_2 + 0xd4,param_2 + 0xd8,
                                                                     param_2 + 0xdc);
                                                      if (iVar1 != 3) {
                                                        iVar1 = (*g_engfuncs.pfnAlertMessage)
                                                                          (at_error,
                                                  "followaxis has bad value. Should be \"x y z\"\n")
                                                  ;
                                                  }
                                                  }
                                                  else {
                                                    iVar1 = strcasecmp(param_3,"soundonemit");
                                                    if (iVar1 == 0) {
                                                      pcVar2 = (char *)(param_2 + 0x158);
                                                      goto LAB_000f8da5;
                                                    }
                                                    iVar1 = strcasecmp(param_3,"termvelocitylow");
                                                    if (iVar1 == 0) {
                                                      iVar1 = __strtod_internal(param_4,0,0);
                                                      *(float *)(param_2 + 0x68) =
                                                           (float)extraout_ST0_15;
                                                    }
                                                    else {
                                                      iVar1 = strcasecmp(param_3,"termvelocityhigh")
                                                      ;
                                                      if (iVar1 == 0) {
                                                        iVar1 = __strtod_internal(param_4,0,0);
                                                        *(float *)(param_2 + 100) =
                                                             (float)extraout_ST0_16;
                                                      }
                                                      else {
                                                        iVar1 = strcasecmp(param_3,"reactamountlow")
                                                        ;
                                                        if (iVar1 == 0) {
                                                          iVar1 = __strtod_internal(param_4,0,0);
                                                          *(float *)(param_2 + 0x58) =
                                                               (float)extraout_ST0_17;
                                                        }
                                                        else {
                                                          iVar1 = strcasecmp(param_3,
                                                  "reactamounthigh");
                                                  if (iVar1 == 0) {
                                                    iVar1 = __strtod_internal(param_4,0,0);
                                                    *(float *)(param_2 + 0x54) =
                                                         (float)extraout_ST0_18;
                                                  }
                                                  else {
                                                    iVar1 = strcasecmp(param_3,"windamountlow");
                                                    if (iVar1 == 0) {
                                                      iVar1 = __strtod_internal(param_4,0,0);
                                                      *(float *)(param_2 + 0x60) =
                                                           (float)extraout_ST0_19;
                                                    }
                                                    else {
                                                      iVar1 = strcasecmp(param_3,"windamounthigh");
                                                      if (iVar1 == 0) {
                                                        iVar1 = __strtod_internal(param_4,0,0);
                                                        *(float *)(param_2 + 0x5c) =
                                                             (float)extraout_ST0_20;
                                                      }
                                                      else {
                                                        iVar1 = strcasecmp(param_3,"fadeintimelow");
                                                        if (iVar1 == 0) {
                                                          iVar1 = __strtod_internal(param_4,0,0);
                                                          *(float *)(param_2 + 0x70) =
                                                               (float)extraout_ST0_21;
                                                        }
                                                        else {
                                                          iVar1 = strcasecmp(param_3,
                                                  "fadeintimehigh");
                                                  if (iVar1 == 0) {
                                                    iVar1 = __strtod_internal(param_4,0,0);
                                                    *(float *)(param_2 + 0x6c) =
                                                         (float)extraout_ST0_22;
                                                  }
                                                  else {
                                                    uVar3 = strcasecmp(param_3,"stretchspeed");
                                                    if (uVar3 != 0) {
                                                      return uVar3 & 0xffffff00;
                                                    }
                                                    iVar1 = __strtod_internal(param_4,0,0);
                                                    *(float *)(param_2 + 0xe0) =
                                                         (float)extraout_ST0_23;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar4 = (undefined3)((uint)iVar1 >> 8);
  }
  return CONCAT31(uVar4,1);
}

/* 000f8fb0  CTSSharedEmitter::global.constructors.keyed.to.CTSSharedEmitter  (19 bytes)
 * undefined global.constructors.keyed.to.CTSSharedEmitter(void)
 */
/* global constructors keyed to CTSSharedEmitter::CTSSharedEmitter(void) */

void CTSSharedEmitter::global_constructors_keyed_to_CTSSharedEmitter(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

