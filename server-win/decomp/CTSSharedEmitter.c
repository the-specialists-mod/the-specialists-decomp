/* mp.dll - CTSSharedEmitter (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10067180  CTSSharedEmitter::EmitterKeyValue  (526 bytes)
 * undefined4 EmitterKeyValue(int param_1, byte.conflict * param_2, byte.conflict * param_3)
 * called by: CTSEmitter::KeyValue
 */
undefined4 __thiscall
CTSSharedEmitter::EmitterKeyValue
          (CTSSharedEmitter *this,int param_1,byte_conflict *param_2,byte_conflict *param_3)

{
  byte_conflict bVar1;
  uint uVar2;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 uVar3;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  void *this_00;
  uint uVar4;
  void *this_01;
  undefined *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  undefined *this_08;
  byte_conflict *pbVar5;
  byte_conflict *pbVar6;
  float10 fVar7;
  
  uVar2 = FUN_100887b0(this,param_2,(byte_conflict *)s_particle_100a559c);
  if (uVar2 != 0) {
    uVar2 = FUN_100887b0(this_00,param_2,(byte_conflict *)s_epslow_100a5594);
    if (uVar2 == 0) {
      fVar7 = atof(param_3,param_3);
      *(float *)(param_1 + 0x80) = (float)fVar7;
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
    uVar2 = FUN_100887b0(this_01,param_2,(byte_conflict *)s_epshigh_100a558c);
    if (uVar2 == 0) {
      fVar7 = atof(this_02,param_3);
      *(float *)(param_1 + 0x7c) = (float)fVar7;
      return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
    }
    uVar2 = FUN_100887b0(this_02,param_2,(byte_conflict *)s_ppelow_100a5584);
    if (uVar2 == 0) {
      uVar3 = atoi(this_03,param_3);
      *(undefined4 *)(param_1 + 0x88) = uVar3;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar2 = FUN_100887b0(this_03,param_2,(byte_conflict *)s_ppehigh_100a557c);
    if (uVar2 == 0) {
      uVar3 = atoi(this_04,param_3);
      *(undefined4 *)(param_1 + 0x84) = uVar3;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar2 = FUN_100887b0(this_04,param_2,(byte_conflict *)s_variancelow_100a5570);
    if (uVar2 != 0) {
      uVar2 = FUN_100887b0(this_05,param_2,(byte_conflict *)s_variancehigh_100a5554);
      if (uVar2 == 0) {
        uVar3 = sscanf((char *)param_3,(byte_conflict *)s__f__f__f_100a5564);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      uVar2 = FUN_100887b0(this_06,param_2,(byte_conflict *)s_cameradensity_100a5544);
      if (uVar2 == 0) {
        fVar7 = atof(param_3,param_3);
        *(float *)(param_1 + 0xa4) = (float)fVar7;
        return CONCAT31((int3)((uint)extraout_EAX_01 >> 8),1);
      }
      uVar2 = FUN_100887b0(this_07,param_2,(byte_conflict *)s_cameraradius_100a5534);
      if (uVar2 == 0) {
        fVar7 = atof(this_08,param_3);
        *(float *)(param_1 + 0xa8) = (float)fVar7;
        return CONCAT31((int3)((uint)extraout_EAX_02 >> 8),1);
      }
      uVar2 = FUN_100887b0(this_08,param_2,(byte_conflict *)s_origin_100a552c);
      if (uVar2 != 0) {
        return uVar2 & 0xffffff00;
      }
    }
    uVar3 = sscanf((char *)param_3,(byte_conflict *)s__f__f__f_100a5564);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = 0xffffffff;
  do {
    pbVar5 = param_3;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pbVar5 = param_3 + 1;
    bVar1 = *param_3;
    param_3 = pbVar5;
  } while (bVar1 != '\0');
  uVar2 = ~uVar2;
  pbVar5 = pbVar5 + -uVar2;
  pbVar6 = (byte_conflict *)(param_1 + 0x18);
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar6 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* 10067390  CTSSharedEmitter::ParticleKeyValue  (2152 bytes)
 * undefined4 ParticleKeyValue(int param_1, byte.conflict * param_2, byte.conflict * param_3)
 * called by: CTSParticle::KeyValue
 */
undefined4 __thiscall
CTSSharedEmitter::ParticleKeyValue
          (CTSSharedEmitter *this,int param_1,byte_conflict *param_2,byte_conflict *param_3)

{
  byte_conflict bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 uVar5;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  undefined4 extraout_EAX_03;
  undefined4 extraout_EAX_04;
  undefined4 extraout_EAX_05;
  undefined4 extraout_EAX_06;
  undefined4 extraout_EAX_07;
  undefined4 extraout_EAX_08;
  int iVar4;
  undefined4 extraout_EAX_09;
  undefined4 extraout_EAX_10;
  undefined4 extraout_EAX_11;
  undefined4 extraout_EAX_12;
  undefined4 extraout_EAX_13;
  undefined4 extraout_EAX_14;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  undefined *this_05;
  void *this_06;
  undefined *this_07;
  undefined *this_08;
  void *this_09;
  undefined *this_10;
  undefined *this_11;
  void *this_12;
  undefined *this_13;
  undefined *this_14;
  void *this_15;
  undefined *this_16;
  void *this_17;
  void *this_18;
  undefined *this_19;
  void *this_20;
  undefined *this_21;
  undefined *this_22;
  void *this_23;
  void *this_24;
  void *this_25;
  void *this_26;
  void *this_27;
  void *this_28;
  void *this_29;
  void *this_30;
  uint uVar6;
  void *this_31;
  undefined *this_32;
  undefined *this_33;
  void *this_34;
  undefined *this_35;
  undefined *this_36;
  void *this_37;
  undefined *this_38;
  undefined *extraout_ECX;
  byte_conflict *pbVar7;
  byte_conflict *pbVar8;
  float10 fVar9;
  
  uVar2 = FUN_100887b0(this,param_2,(byte_conflict *)s_sprite_name_100a593c);
  if (uVar2 == 0) {
    pbVar7 = (byte_conflict *)(param_1 + 0xe4);
LAB_10067a31:
    uVar2 = 0xffffffff;
    do {
      pbVar8 = param_3;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pbVar8 = param_3 + 1;
      bVar1 = *param_3;
      param_3 = pbVar8;
    } while (bVar1 != '\0');
    uVar2 = ~uVar2;
    pbVar8 = pbVar8 + -uVar2;
    for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar7 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    }
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_00,param_2,(byte_conflict *)s_sprite_trans_100a592c);
  if (uVar2 == 0) {
    uVar3 = atoi(param_3,param_3);
    *(undefined4 *)(param_1 + 0x148) = uVar3;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_01,param_2,(byte_conflict *)s_follow_view_100a5920);
  if (uVar2 == 0) {
    uVar3 = atoi(this_02,param_3);
    *(undefined4 *)(param_1 + 0x14c) = uVar3;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_02,param_2,(byte_conflict *)s_collide_100a5918);
  if (uVar2 == 0) {
    uVar3 = atoi(this_03,param_3);
    *(undefined4 *)(param_1 + 0x150) = uVar3;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_03,param_2,(byte_conflict *)s_oncollide_100a590c);
  if (uVar2 == 0) {
    uVar3 = atoi(this_04,param_3);
    *(undefined4 *)(param_1 + 0x154) = uVar3;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_04,param_2,(byte_conflict *)s_lifelow_100a5904);
  uVar5 = (undefined3)((uint)param_1 >> 8);
  if (uVar2 == 0) {
    fVar9 = atof(this_05,param_3);
    *(float *)(param_1 + 0x10) = (float)fVar9;
    return CONCAT31(uVar5,1);
  }
  uVar2 = FUN_100887b0(this_05,param_2,(byte_conflict *)s_lifehigh_100a58f8);
  if (uVar2 == 0) {
    fVar9 = atof(param_3,param_3);
    *(float *)(param_1 + 0xc) = (float)fVar9;
    return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  uVar2 = FUN_100887b0(this_06,param_2,(byte_conflict *)s_gravitylow_100a58ec);
  if (uVar2 == 0) {
    fVar9 = atof(this_07,param_3);
    *(float *)(param_1 + 0x18) = (float)fVar9;
    return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_07,param_2,(byte_conflict *)s_gravityhigh_100a58e0);
  if (uVar2 == 0) {
    fVar9 = atof(this_08,param_3);
    *(float *)(param_1 + 0x14) = (float)fVar9;
    return CONCAT31(uVar5,1);
  }
  uVar2 = FUN_100887b0(this_08,param_2,(byte_conflict *)s_colorlow_100a58d4);
  if (uVar2 == 0) {
    fVar9 = atof(param_3,param_3);
    *(float *)(param_1 + 0x20) = (float)fVar9;
    return CONCAT31((int3)((uint)extraout_EAX_01 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_09,param_2,(byte_conflict *)s_colorhigh_100a58c8);
  if (uVar2 == 0) {
    fVar9 = atof(this_10,param_3);
    *(float *)(param_1 + 0x1c) = (float)fVar9;
    return CONCAT31((int3)((uint)extraout_EAX_02 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_10,param_2,(byte_conflict *)s_fadespeedlow_100a58b8);
  if (uVar2 == 0) {
    fVar9 = atof(this_11,param_3);
    *(float *)(param_1 + 0x28) = (float)fVar9;
    return CONCAT31(uVar5,1);
  }
  uVar2 = FUN_100887b0(this_11,param_2,(byte_conflict *)s_fadespeedhigh_100a58a8);
  if (uVar2 == 0) {
    fVar9 = atof(param_3,param_3);
    *(float *)(param_1 + 0x24) = (float)fVar9;
    return CONCAT31((int3)((uint)extraout_EAX_03 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_12,param_2,(byte_conflict *)s_p_radiuslow_100a589c);
  if (uVar2 == 0) {
    fVar9 = atof(this_13,param_3);
    *(float *)(param_1 + 0x30) = (float)fVar9;
    return CONCAT31((int3)((uint)extraout_EAX_04 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_13,param_2,(byte_conflict *)s_p_radiushigh_100a588c);
  if (uVar2 == 0) {
    fVar9 = atof(this_14,param_3);
    *(float *)(param_1 + 0x2c) = (float)fVar9;
    return CONCAT31(uVar5,1);
  }
  uVar2 = FUN_100887b0(this_14,param_2,(byte_conflict *)s_scalespeedlow_100a587c);
  if (uVar2 == 0) {
    fVar9 = atof(param_3,param_3);
    *(float *)(param_1 + 0x38) = (float)fVar9;
    return CONCAT31((int3)((uint)extraout_EAX_05 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_15,param_2,(byte_conflict *)s_scalespeedhigh_100a586c);
  if (uVar2 == 0) {
    fVar9 = atof(this_16,param_3);
    *(float *)(param_1 + 0x34) = (float)fVar9;
    return CONCAT31((int3)((uint)extraout_EAX_06 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_16,param_2,(byte_conflict *)s_current_framelow_100a5858);
  if (uVar2 == 0) {
    uVar3 = atoi(this_17,param_3);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_17,param_2,(byte_conflict *)s_current_framehigh_100a5844);
  if (uVar2 == 0) {
    uVar3 = atoi(this_18,param_3);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_18,param_2,(byte_conflict *)s_frame_ratelow_100a5834);
  if (uVar2 == 0) {
    fVar9 = atof(this_19,param_3);
    *(float *)(param_1 + 0x48) = (float)fVar9;
    return CONCAT31(uVar5,1);
  }
  uVar2 = FUN_100887b0(this_19,param_2,(byte_conflict *)s_frame_ratehigh_100a5824);
  if (uVar2 == 0) {
    fVar9 = atof(param_3,param_3);
    *(float *)(param_1 + 0x44) = (float)fVar9;
    return CONCAT31((int3)((uint)extraout_EAX_07 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_20,param_2,(byte_conflict *)s_randomdeltalow_100a5814);
  if (uVar2 == 0) {
    fVar9 = atof(this_21,param_3);
    *(float *)(param_1 + 0x50) = (float)fVar9;
    return CONCAT31((int3)((uint)extraout_EAX_08 >> 8),1);
  }
  uVar2 = FUN_100887b0(this_21,param_2,(byte_conflict *)s_randomdeltahigh_100a5804);
  if (uVar2 == 0) {
    fVar9 = atof(this_22,param_3);
    *(float *)(param_1 + 0x4c) = (float)fVar9;
    return CONCAT31(uVar5,1);
  }
  uVar2 = FUN_100887b0(this_22,param_2,(byte_conflict *)s_velocitylow_100a57f8);
  if (uVar2 == 0) {
    iVar4 = sscanf((char *)param_3,(byte_conflict *)s__f__f__f_100a5564);
    if (iVar4 != 3) {
      uVar3 = (*g_engfuncs.pfnAlertMessage)(at_error,s_velocitylow_has_bad_value__Shoul_100a57c8);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  else {
    uVar2 = FUN_100887b0(this_23,param_2,(byte_conflict *)s_velocityhigh_100a57b8);
    if (uVar2 == 0) {
      iVar4 = sscanf((char *)param_3,(byte_conflict *)s__f__f__f_100a5564);
      if (iVar4 != 3) {
        uVar3 = (*g_engfuncs.pfnAlertMessage)(at_error,s_velocityhigh_has_bad_value__Shou_100a5788);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    else {
      uVar2 = FUN_100887b0(this_24,param_2,(byte_conflict *)s_a_velocitylow_100a5778);
      if (uVar2 == 0) {
        iVar4 = sscanf((char *)param_3,(byte_conflict *)s__f__f__f_100a5564);
        if (iVar4 != 3) {
          uVar3 = (*g_engfuncs.pfnAlertMessage)
                            (at_error,s_a_velocitylow_has_bad_value__Sho_100a5748);
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
      }
      else {
        uVar2 = FUN_100887b0(this_25,param_2,(byte_conflict *)s_a_velocityhigh_100a5738);
        if (uVar2 == 0) {
          iVar4 = sscanf((char *)param_3,(byte_conflict *)s__f__f__f_100a5564);
          if (iVar4 != 3) {
            uVar3 = (*g_engfuncs.pfnAlertMessage)
                              (at_error,s_a_velocityhigh_has_bad_value__Sh_100a5704);
            return CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
        }
        else {
          uVar2 = FUN_100887b0(this_26,param_2,(byte_conflict *)s_randomvellow_100a56f4);
          if (uVar2 == 0) {
            iVar4 = sscanf((char *)param_3,(byte_conflict *)s__f__f__f_100a5564);
            if (iVar4 != 3) {
              uVar3 = (*g_engfuncs.pfnAlertMessage)
                                (at_error,s_randomvellow_has_bad_value__Shou_100a56c4);
              return CONCAT31((int3)((uint)uVar3 >> 8),1);
            }
          }
          else {
            uVar2 = FUN_100887b0(this_27,param_2,(byte_conflict *)s_randomvelhigh_100a56b4);
            if (uVar2 == 0) {
              iVar4 = sscanf((char *)param_3,(byte_conflict *)s__f__f__f_100a5564);
              if (iVar4 != 3) {
                uVar3 = (*g_engfuncs.pfnAlertMessage)
                                  (at_error,s_randomvelhigh_has_bad_value__Sho_100a5684);
                return CONCAT31((int3)((uint)uVar3 >> 8),1);
              }
            }
            else {
              uVar2 = FUN_100887b0(this_28,param_2,(byte_conflict *)s_followaxis_100a5678);
              if (uVar2 != 0) {
                uVar2 = FUN_100887b0(this_29,param_2,(byte_conflict *)s_soundonemit_100a563c);
                if (uVar2 != 0) {
                  uVar2 = FUN_100887b0(this_30,param_2,(byte_conflict *)s_termvelocitylow_100a562c);
                  if (uVar2 == 0) {
                    fVar9 = atof(param_3,param_3);
                    *(float *)(param_1 + 0x68) = (float)fVar9;
                    return CONCAT31((int3)((uint)extraout_EAX_09 >> 8),1);
                  }
                  uVar2 = FUN_100887b0(this_31,param_2,(byte_conflict *)s_termvelocityhigh_100a5618)
                  ;
                  if (uVar2 == 0) {
                    fVar9 = atof(this_32,param_3);
                    *(float *)(param_1 + 100) = (float)fVar9;
                    return CONCAT31((int3)((uint)extraout_EAX_10 >> 8),1);
                  }
                  uVar2 = FUN_100887b0(this_32,param_2,(byte_conflict *)s_reactamountlow_100a5608);
                  if (uVar2 == 0) {
                    fVar9 = atof(this_33,param_3);
                    *(float *)(param_1 + 0x58) = (float)fVar9;
                    return CONCAT31(uVar5,1);
                  }
                  uVar2 = FUN_100887b0(this_33,param_2,(byte_conflict *)s_reactamounthigh_100a55f8);
                  if (uVar2 == 0) {
                    fVar9 = atof(param_3,param_3);
                    *(float *)(param_1 + 0x54) = (float)fVar9;
                    return CONCAT31((int3)((uint)extraout_EAX_11 >> 8),1);
                  }
                  uVar2 = FUN_100887b0(this_34,param_2,(byte_conflict *)s_windamountlow_100a55e8);
                  if (uVar2 == 0) {
                    fVar9 = atof(this_35,param_3);
                    *(float *)(param_1 + 0x60) = (float)fVar9;
                    return CONCAT31((int3)((uint)extraout_EAX_12 >> 8),1);
                  }
                  uVar2 = FUN_100887b0(this_35,param_2,(byte_conflict *)s_windamounthigh_100a55d8);
                  if (uVar2 == 0) {
                    fVar9 = atof(this_36,param_3);
                    *(float *)(param_1 + 0x5c) = (float)fVar9;
                    return CONCAT31(uVar5,1);
                  }
                  uVar2 = FUN_100887b0(this_36,param_2,(byte_conflict *)s_fadeintimelow_100a55c8);
                  if (uVar2 == 0) {
                    fVar9 = atof(param_3,param_3);
                    *(float *)(param_1 + 0x70) = (float)fVar9;
                    return CONCAT31((int3)((uint)extraout_EAX_13 >> 8),1);
                  }
                  uVar2 = FUN_100887b0(this_37,param_2,(byte_conflict *)s_fadeintimehigh_100a55b8);
                  if (uVar2 == 0) {
                    fVar9 = atof(this_38,param_3);
                    *(float *)(param_1 + 0x6c) = (float)fVar9;
                    return CONCAT31((int3)((uint)extraout_EAX_14 >> 8),1);
                  }
                  uVar2 = FUN_100887b0(this_38,param_2,(byte_conflict *)s_stretchspeed_100a55a8);
                  if (uVar2 == 0) {
                    fVar9 = atof(extraout_ECX,param_3);
                    *(float *)(param_1 + 0xe0) = (float)fVar9;
                    return CONCAT31(uVar5,1);
                  }
                  return uVar2 & 0xffffff00;
                }
                pbVar7 = (byte_conflict *)(param_1 + 0x158);
                goto LAB_10067a31;
              }
              iVar4 = sscanf((char *)param_3,(byte_conflict *)s__f__f__f_100a5564);
              if (iVar4 != 3) {
                iVar4 = (*g_engfuncs.pfnAlertMessage)
                                  (at_error,s_followaxis_has_bad_value__Should_100a5648);
              }
            }
          }
        }
      }
    }
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

