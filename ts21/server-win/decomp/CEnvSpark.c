/* mp.dll - CEnvSpark (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000b110  CEnvSpark::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CEnvSpark::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CEnvSpark_10091628,(int)param_1,0x100910f0,1);
  return;
}

/* 1000b140  CEnvSpark::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CEnvSpark::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CEnvSpark_10091628,(int)param_1,0x100910f0,1);
  return;
}

/* 1000b190  CEnvSpark::Spawn  (120 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CEnvSpark::Spawn(int *param_1)

{
  float10 fVar1;
  
  param_1[4] = 0;
  param_1[6] = 0;
  if ((*(uint *)(param_1[1] + 0x1a0) & 0x20) != 0) {
    if ((*(uint *)(param_1[1] + 0x1a0) & 0x40) == 0) {
      param_1[6] = (int)SparkStart;
      goto LAB_1000b1ba;
    }
    param_1[6] = (int)SparkStop;
  }
  param_1[4] = (int)SparkThink;
LAB_1000b1ba:
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.5);
  *(float *)(param_1[1] + 0x104) = (float)(fVar1 + (float10)0.1 + (float10)gpGlobals->time);
  if ((float)param_1[0x15] < 0.0 != ((float)param_1[0x15] == 0.0)) {
    param_1[0x15] = 0x3fc00000;
  }
                    /* WARNING: Could not recover jumptable at 0x1000b1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

/* 1000b210  CEnvSpark::Precache  (70 bytes)
 * undefined Precache()
 */
void CEnvSpark::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark1_wav_100913cc);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark2_wav_100913b8);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark3_wav_100913a4);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark4_wav_10091390);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark5_wav_1009137c);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark6_wav_10091368);
  return;
}

/* 1000b260  CEnvSpark::KeyValue  (178 bytes)
 * undefined KeyValue()
 */
void __thiscall CEnvSpark::KeyValue(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  
  pcVar4 = *(char **)(param_2 + 4);
  puVar1 = &DAT_00000009;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_MaxDelay_10091634;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x54) = (float)fVar7;
  }
  else {
    iVar2 = 6;
    bVar6 = true;
    pcVar3 = pcVar4;
    pcVar5 = s_style_10091284;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar3 == *pcVar5;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar2 = 7;
      bVar6 = true;
      pcVar3 = pcVar4;
      pcVar5 = s_height_1009127c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar3 == *pcVar5;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (!bVar6) {
        iVar2 = 0xb;
        bVar6 = true;
        pcVar3 = pcVar4;
        pcVar5 = s_killtarget_10091270;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *pcVar3 == *pcVar5;
          pcVar3 = pcVar3 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (!bVar6) {
          iVar2 = 7;
          bVar6 = true;
          pcVar3 = pcVar4;
          pcVar5 = &DAT_10091268;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar6 = *pcVar3 == *pcVar5;
            pcVar3 = pcVar3 + 1;
            pcVar5 = pcVar5 + 1;
          } while (bVar6);
          if (!bVar6) {
            iVar2 = 7;
            bVar6 = true;
            pcVar3 = pcVar4;
            pcVar5 = &DAT_10091260;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar6 = *pcVar3 == *pcVar5;
              pcVar3 = pcVar3 + 1;
              pcVar5 = pcVar5 + 1;
            } while (bVar6);
            if (!bVar6) {
              iVar2 = 7;
              bVar6 = true;
              pcVar3 = &DAT_10091258;
              do {
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                bVar6 = *pcVar4 == *pcVar3;
                pcVar4 = pcVar4 + 1;
                pcVar3 = pcVar3 + 1;
              } while (bVar6);
              if (!bVar6) {
                *(undefined4 *)(param_2 + 0xc) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

/* 1000b320  CEnvSpark::SparkThink  (56 bytes)
 * void SparkThink(void)
 */
/* public: void __thiscall CEnvSpark::SparkThink(void) */

void __thiscall CEnvSpark::SparkThink(CEnvSpark *this)

{
  float10 fVar1;
  
                    /* 0xb320  98  ?SparkThink@CEnvSpark@@QAEXXZ */
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,*(float *)&this->field_0x54);
  this->pev->nextthink = (float)(fVar1 + (float10)gpGlobals->time + (float10)0.1);
  DoSpark((int)this->pev,this->pev->origin);
  return;
}

/* 1000b360  CEnvSpark::SparkStart  (59 bytes)
 * void SparkStart(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CEnvSpark::SparkStart(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CEnvSpark::SparkStart
          (CEnvSpark *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
  float10 fVar1;
  
                    /* 0xb360  96  ?SparkStart@CEnvSpark@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  *(code **)&this->field_0x18 = SparkStop;
  *(code **)&this->field_0x10 = SparkThink;
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,*(float *)&this->field_0x54);
  this->pev->nextthink = (float)(fVar1 + (float10)0.1 + (float10)gpGlobals->time);
  return;
}

/* 1000b3a0  CEnvSpark::SparkStop  (17 bytes)
 * void SparkStop(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CEnvSpark::SparkStop(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CEnvSpark::SparkStop
          (CEnvSpark *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
                    /* 0xb3a0  97  ?SparkStop@CEnvSpark@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  *(code **)&this->field_0x18 = SparkStart;
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

