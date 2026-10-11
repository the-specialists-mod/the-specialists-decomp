/* mp.dll - CEnvSpark (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000d180  CEnvSpark::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CEnvSpark::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CEnvSpark_1009c6d0,(int)param_1,0x1009c198,1);
  return;
}

/* 1000d1b0  CEnvSpark::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CEnvSpark::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CEnvSpark_1009c6d0,(int)param_1,&DAT_1009c198,1);
  return;
}

/* 1000d1f0  CEnvSpark::Spawn  (130 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CEnvSpark::Spawn(int *param_1)

{
  float10 fVar1;
  
  param_1[4] = 0;
  param_1[6] = 0;
  if ((*(uint *)(param_1[1] + 0x1a0) & 0x20) == 0) {
    param_1[4] = (int)SparkThink;
  }
  else if ((*(uint *)(param_1[1] + 0x1a0) & 0x40) == 0) {
    param_1[6] = (int)SparkStart;
  }
  else {
    param_1[4] = (int)SparkThink;
    param_1[6] = (int)SparkStop;
  }
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.5);
  *(float *)(param_1[1] + 0x104) = (float)(fVar1 + (float10)0.1 + (float10)gpGlobals->time);
  if ((float)param_1[0x15] <= 0.0) {
    param_1[0x15] = 0x3fc00000;
  }
  (**(code **)(*param_1 + 0x20))();
  return;
}

/* 1000d280  CEnvSpark::Precache  (70 bytes)
 * undefined Precache()
 */
void CEnvSpark::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark1_wav_1009c474);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark2_wav_1009c460);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark3_wav_1009c44c);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark4_wav_1009c438);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark5_wav_1009c424);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark6_wav_1009c410);
  return;
}

/* 1000d2d0  CEnvSpark::KeyValue  (436 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CEnvSpark::KeyValue(CEnvSpark *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  CEnvSpark *pCVar5;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_1 + 4);
  pcVar7 = s_MaxDelay_1009c6dc;
  pbVar2 = pbVar4;
  pCVar5 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CEnvSpark *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000d308:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1000d30d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CEnvSpark *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000d308;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000d30d:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)pCVar5,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x54 = (float)fVar10;
  }
  else {
    pcVar7 = s_style_1009c32c;
    pbVar2 = pbVar4;
    do {
      bVar1 = *pbVar2;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_1000d359:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_1000d35e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_1000d359;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1000d35e:
    if (iVar3 != 0) {
      pcVar7 = s_height_1009c324;
      pbVar2 = pbVar4;
      do {
        bVar1 = *pbVar2;
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1000d38d:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_1000d392;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1000d38d;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1000d392:
      if (iVar3 != 0) {
        pcVar7 = s_killtarget_1009c318;
        pbVar2 = pbVar4;
        do {
          bVar1 = *pbVar2;
          bVar9 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_1000d3c1:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_1000d3c6;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar9 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_1000d3c1;
          pbVar2 = pbVar2 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_1000d3c6:
        if (iVar3 != 0) {
          pbVar8 = &DAT_1009c310;
          pbVar2 = pbVar4;
          do {
            bVar1 = *pbVar2;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_1000d3f9:
              iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_1000d3fe;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_1000d3f9;
            pbVar2 = pbVar2 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_1000d3fe:
          if (iVar3 != 0) {
            pbVar8 = &DAT_1009c308;
            pbVar2 = pbVar4;
            do {
              bVar1 = *pbVar2;
              bVar9 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_1000d431:
                iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_1000d436;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar2[1];
              bVar9 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_1000d431;
              pbVar2 = pbVar2 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_1000d436:
            if (iVar3 != 0) {
              pbVar2 = &DAT_1009c300;
              do {
                bVar1 = *pbVar4;
                bVar9 = bVar1 < *pbVar2;
                if (bVar1 != *pbVar2) {
LAB_1000d469:
                  iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_1000d46e;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar9 = bVar1 < pbVar2[1];
                if (bVar1 != pbVar2[1]) goto LAB_1000d469;
                pbVar4 = pbVar4 + 2;
                pbVar2 = pbVar2 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_1000d46e:
              if (iVar3 != 0) {
                *(undefined4 *)(param_1 + 0xc) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 1000d490  CEnvSpark::SparkThink  (56 bytes)
 * void SparkThink(void)
 */
/* public: void __thiscall CEnvSpark::SparkThink(void) */

void __thiscall CEnvSpark::SparkThink(CEnvSpark *this)

{
  float10 fVar1;
  
                    /* 0xd490  105  ?SparkThink@CEnvSpark@@QAEXXZ */
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,*(float *)&this->field_0x54);
  this->pev->nextthink = (float)(fVar1 + (float10)gpGlobals->time + (float10)0.1);
  DoSpark((int)this->pev,this->pev->origin);
  return;
}

/* 1000d4d0  CEnvSpark::SparkStart  (59 bytes)
 * void SparkStart(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CEnvSpark::SparkStart(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CEnvSpark::SparkStart
          (CEnvSpark *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
  float10 fVar1;
  
                    /* 0xd4d0  103  ?SparkStart@CEnvSpark@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  *(code **)&this->field_0x18 = SparkStop;
  *(code **)&this->field_0x10 = SparkThink;
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,*(float *)&this->field_0x54);
  this->pev->nextthink = (float)(fVar1 + (float10)0.1 + (float10)gpGlobals->time);
  return;
}

/* 1000d510  CEnvSpark::SparkStop  (17 bytes)
 * void SparkStop(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CEnvSpark::SparkStop(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CEnvSpark::SparkStop
          (CEnvSpark *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
                    /* 0xd510  104  ?SparkStop@CEnvSpark@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  *(code **)&this->field_0x18 = SparkStart;
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

