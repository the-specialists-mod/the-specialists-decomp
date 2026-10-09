/* ts_i386.so - CBasePlayer (120 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0006f69c  CBasePlayer::ShootBulletsPlayer  (2926 bytes)
 * float * ShootBulletsPlayer(float * param_1, int * param_2, byte.conflict param_3, float * param_4, float * param_5, float * param_6, float param_7, int param_8, uint param_9, undefined4 param_10)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBasePlayer::ShootBulletsPlayer(unsigned char, Vector, Vector, Vector, float, int, int, int) */

float * CBasePlayer::ShootBulletsPlayer
                  (float *param_1,int *param_2,byte_conflict param_3,float *param_4,float *param_5,
                  float *param_6,float param_7,int param_8,uint param_9,undefined4 param_10)

{
  float fVar1;
  globalvars_t *pgVar2;
  edict_t *peVar3;
  undefined1 *puVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  vec_t *pvVar8;
  float *pfVar9;
  vec_t *pvVar10;
  float *pfVar11;
  undefined2 in_FPUControlWord;
  longdouble lVar12;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  longdouble lVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  byte local_75;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  int local_48;
  undefined2 local_44;
  undefined2 uStack_42;
  float local_40;
  float local_3c [4];
  float local_2c [7];
  
  if (__tmp_0_1136 == 0) {
    __tmp_0_1136 = 1;
  }
  if (__tmp_1_1141 == 0) {
    __tmp_1_1141 = 1;
  }
  if (__tmp_2_1143 == 0) {
    __tmp_2_1143 = 1;
  }
  if (__tmp_3_1145 == 0) {
    __tmp_3_1145 = 1;
  }
  if (__tmp_4_1147 == 0) {
    __tmp_4_1147 = 1;
  }
  if (__tmp_5_1149 == 0) {
    __tmp_5_1149 = 1;
  }
  iVar7 = 0;
  if ((_DAT_00178718 != 0) ||
     (lVar12 = (longdouble)(**(code **)(param_2[0x18] + 0x10))(param_2), lVar12 < (longdouble)0.99))
  {
    iVar7 = 1;
  }
  pgVar2 = gpGlobals;
  pvVar8 = gpGlobals->v_right;
  pvVar10 = &vecRight_1140;
  rbullet_1156 = iVar7;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pvVar10 = *pvVar8;
    pvVar8 = pvVar8 + 1;
    pvVar10 = pvVar10 + 1;
  }
  pvVar8 = pgVar2->v_up;
  pvVar10 = &vecUp_1142;
  for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pvVar10 = *pvVar8;
    pvVar8 = pvVar8 + 1;
    pvVar10 = pvVar10 + 1;
  }
  a_info_1134 = get_ammo_info(param_9);
  if (rbullet_1156 == 0) {
    ClearMultiDamage();
  }
  DAT_0019f258 = 0x1002;
  damage_ammount_1152 = 0.0;
  damage_adjust_1154 = 1.0;
  if (param_8 == 2) {
    local_3c[0] = *param_5 * 4096.0;
    local_3c[1] = param_5[1] * 4096.0;
    local_3c[2] = param_5[2] * 4096.0;
    local_2c[0] = *param_4 + *param_5 * 4096.0;
    local_2c[1] = param_4[1] + param_5[1] * 4096.0;
    local_2c[2] = param_4[2] + param_5[2] * 4096.0;
    pfVar9 = local_2c;
    pfVar11 = (float *)&vecEnd_1148;
    for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar11 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar11 = pfVar11 + 1;
    }
    UTIL_TraceLine_Expanded(param_4,&vecEnd_1148,0,*(undefined4 *)(*param_2 + 0x208),tr_1135);
    if ((float)tr_1135._16_4_ != 1.0) {
      peVar3 = (edict_t *)tr_1135._48_4_;
      if (tr_1135._48_4_ == 0) {
        peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      pEntity_1155 = (void *)0x0;
      if (peVar3 != (edict_t *)0x0) {
        pEntity_1155 = peVar3->pvPrivateData;
      }
      local_3c[0] = *param_4 - (float)tr_1135._20_4_;
      local_3c[1] = param_4[1] - (float)tr_1135._24_4_;
      local_3c[2] = param_4[2] - (float)tr_1135._28_4_;
      local_40 = SQRT(local_3c[2] * local_3c[2] +
                      local_3c[1] * local_3c[1] + local_3c[0] * local_3c[0]);
      distance_1153 = local_40 * 0.0033333334;
      _local_44 = CONCAT22(uStack_42,in_FPUControlWord);
      local_48 = (int)ROUND(distance_1153 * 10.0);
      lVar12 = get_range_multipler(local_48);
      damage_ammount_1152 = (float)(lVar12 * (longdouble)param_7);
      local_3c[0] = *param_5;
      local_3c[1] = param_5[1];
      local_3c[2] = param_5[2];
      (**(code **)(*(int *)((int)pEntity_1155 + 0x60) + 0x54))
                (pEntity_1155,*param_2,damage_ammount_1152,local_3c,tr_1135,0x1002);
      if ((g_flWeaponCheat != 0.0) &&
         (lVar12 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("dmgreport"), (longdouble)1.0 < lVar12)
         ) {
        iVar16 = 0;
        iVar15 = 0;
        iVar6 = 0;
        iVar7 = 0;
        puVar4 = UTIL_VarArgs("damage(piercing):%f\n",(double)damage_ammount_1152);
        UTIL_ClientPrintAll(3,puVar4,iVar7,iVar6,iVar15,iVar16);
      }
    }
    local_3c[0] = *param_4;
    local_3c[1] = param_4[1];
    local_3c[2] = param_4[2];
    local_2c[0] = (float)tr_1135._20_4_;
    local_2c[1] = (float)tr_1135._24_4_;
    local_2c[2] = (float)tr_1135._28_4_;
    _local_44 = CONCAT22(uStack_42,in_FPUControlWord);
    local_48 = (int)ROUND((float)tr_1135._16_4_ * 4096.0 * 0.015625);
    UTIL_BubbleTrail(local_3c,local_2c,local_48);
    ApplyMultiDamage(*param_2,*param_2);
    *param_1 = *param_6;
    param_1[1] = param_6[1];
    fVar5 = param_6[2];
  }
  else {
    local_75 = 1;
    if (param_3 != '\0') {
      do {
        cVar14 = local_75 + (char)param_10;
        UTIL_SharedRandomFloat(cVar14,-3.1415927,3.1415927);
        UTIL_SharedRandomFloat(cVar14 + '\x01',0.0,(float)a_info_1134[7]);
        lVar13 = (longdouble)1.0 - extraout_ST0_00 * extraout_ST0_00 * extraout_ST0_00;
        lVar12 = (longdouble)fcos((longdouble)(float)extraout_ST0);
        x_1150 = (float)(lVar12 * lVar13);
        lVar12 = (longdouble)fsin((longdouble)(float)extraout_ST0);
        y_1151 = (float)(lVar12 * lVar13);
        local_54 = x_1150 * *param_6;
        local_5c = local_54 * vecRight_1140;
        local_58 = local_54 * DAT_0017813c;
        local_54 = local_54 * DAT_00178140;
        local_64 = y_1151 * param_6[1];
        local_6c = local_64 * vecUp_1142;
        local_68 = local_64 * DAT_00178148;
        local_64 = local_64 * DAT_0017814c;
        pfVar9 = local_3c;
        pfVar11 = &vecDir_1146;
        for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar11 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          pfVar11 = pfVar11 + 1;
        }
        local_2c[2] = (float)(int)a_info_1134[5];
        local_2c[0] = local_2c[2] * vecDir_1146;
        local_2c[1] = local_2c[2] * DAT_00178160;
        local_2c[2] = local_2c[2] * DAT_00178164;
        local_3c[0] = *param_4 + local_2c[0];
        local_3c[1] = param_4[1] + local_2c[1];
        local_3c[2] = param_4[2] + local_2c[2];
        pfVar9 = local_3c;
        pfVar11 = (float *)&vecEnd_1148;
        for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar11 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          pfVar11 = pfVar11 + 1;
        }
        if (rbullet_1156 == 0) {
          UTIL_TraceLine_Expanded(param_4,&vecEnd_1148,0,*(undefined4 *)(*param_2 + 0x208),tr_1135);
          if ((float)tr_1135._16_4_ != 1.0) {
            peVar3 = (edict_t *)tr_1135._48_4_;
            if (tr_1135._48_4_ == 0) {
              peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
            }
            pEntity_1155 = (void *)0x0;
            if (peVar3 != (edict_t *)0x0) {
              pEntity_1155 = peVar3->pvPrivateData;
            }
            local_3c[0] = *param_4 - (float)tr_1135._20_4_;
            local_3c[1] = param_4[1] - (float)tr_1135._24_4_;
            local_3c[2] = param_4[2] - (float)tr_1135._28_4_;
            local_40 = SQRT(local_3c[2] * local_3c[2] +
                            local_3c[1] * local_3c[1] + local_3c[0] * local_3c[0]);
            distance_1153 = local_40 / ((float)(int)a_info_1134[8] * 10.0);
            _local_44 = CONCAT22(uStack_42,in_FPUControlWord);
            local_48 = (int)ROUND(distance_1153 * 10.0);
            lVar12 = get_range_multipler(local_48);
            damage_ammount_1152 = (float)(lVar12 * (longdouble)param_7);
            if ((0.0 < (float)damagemult._12_4_) && (g_flWeaponCheat != 0.0)) {
              damage_adjust_1154 = (float)damagemult._12_4_;
            }
            if ((param_8 == 0) || (param_8 != 1)) {
              iVar7 = *(int *)((int)pEntity_1155 + 0x60);
              uVar17 = 0x1002;
              iVar6 = *param_2;
            }
            else {
              iVar7 = *(int *)((int)pEntity_1155 + 0x60);
              uVar17 = 0x2001002;
              iVar6 = *param_2;
            }
            local_3c[2] = DAT_00178164;
            local_3c[1] = DAT_00178160;
            local_3c[0] = vecDir_1146;
            (**(code **)(iVar7 + 0x54))
                      (pEntity_1155,iVar6,damage_ammount_1152 * damage_adjust_1154,local_3c,tr_1135,
                       uVar17);
            if ((g_flWeaponCheat != 0.0) &&
               (lVar12 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("dmgreport"),
               (longdouble)1.0 < lVar12)) {
              iVar16 = 0;
              iVar15 = 0;
              iVar6 = 0;
              iVar7 = 0;
              puVar4 = UTIL_VarArgs("damage:%f\n",(double)(damage_ammount_1152 * damage_adjust_1154)
                                   );
              UTIL_ClientPrintAll(3,puVar4,iVar7,iVar6,iVar15,iVar16);
            }
            damage_ammount_1152 = damage_ammount_1152 * (float)a_info_1134[6];
            iVar7 = (**(code **)(*(int *)((int)pEntity_1155 + 0x60) + 200))(pEntity_1155);
            if (iVar7 != 0) {
              damage_ammount_1152 = damage_ammount_1152 * 0.5;
            }
          }
        }
        else {
          CBulletManager::FireBullet
                    ((CBulletManager *)&DAT_00179a04,(int)param_2,param_4,&vecDir_1146,&param_7,
                     &param_9,param_8);
        }
        local_3c[0] = *param_4;
        local_3c[1] = param_4[1];
        local_3c[2] = param_4[2];
        local_2c[0] = (float)tr_1135._20_4_;
        local_2c[1] = (float)tr_1135._24_4_;
        local_2c[2] = (float)tr_1135._28_4_;
        _local_44 = CONCAT22(uStack_42,in_FPUControlWord);
        local_48 = (int)ROUND((float)(int)a_info_1134[5] * (float)tr_1135._16_4_ * 0.015625);
        UTIL_BubbleTrail(local_3c,local_2c,local_48);
        local_75 = local_75 + 1;
      } while (local_75 <= param_3);
    }
    if (((rbullet_1156 == 0) && (ApplyMultiDamage(*param_2,*param_2), 1 < param_8 - 1U)) &&
       (5.0 < damage_ammount_1152)) {
      fVar5 = damage_ammount_1152 + damage_ammount_1152;
      if (48.0 <= fVar5) {
        fVar5 = 48.0;
      }
      local_2c[0] = fVar5 * vecDir_1146;
      local_2c[1] = fVar5 * DAT_00178160;
      local_2c[2] = fVar5 * DAT_00178164;
      local_3c[0] = (float)tr_1135._20_4_ + fVar5 * vecDir_1146;
      local_3c[1] = (float)tr_1135._24_4_ + fVar5 * DAT_00178160;
      local_3c[2] = (float)tr_1135._28_4_ + fVar5 * DAT_00178164;
      pfVar9 = local_3c;
      pfVar11 = &vecSrcPierce_1144;
      for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar11 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar11 = pfVar11 + 1;
      }
      iVar7 = UTIL_PointContents(&vecSrcPierce_1144);
      if (iVar7 != -2) {
        local_2c[0] = vecSrcPierce_1144;
        local_2c[1] = (float)DAT_00178154;
        local_2c[2] = (float)DAT_00178158;
        local_6c = vecDir_1146;
        local_68 = DAT_00178160;
        local_64 = DAT_00178164;
        local_5c = x_1150 * *param_6;
        local_58 = y_1151 * param_6[1];
        local_54 = 0.0;
        ShootBulletsPlayer(local_3c,param_2,'\x01',local_2c,&local_6c,&local_5c,
                           damage_ammount_1152 * damage_adjust_1154,2,param_9,param_10);
      }
    }
    fVar1 = y_1151 * param_6[1];
    fVar5 = 0.0;
    *param_1 = x_1150 * *param_6;
    param_1[1] = fVar1;
  }
  param_1[2] = fVar5;
  return param_1;
}

/* 0008eaec  CBasePlayer::PlayerDeathThink  (611 bytes)
 * undefined PlayerDeathThink(void)
 */
/* CBasePlayer::PlayerDeathThink(void) */

void __thiscall CBasePlayer::PlayerDeathThink(CBasePlayer *this)

{
  int *piVar1;
  entvars_t *peVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined3 extraout_var;
  int iVar6;
  float *pfVar7;
  vec_t *pvVar8;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_20;
  
  peVar2 = this->pev;
  if ((peVar2->flags & 0x200) != 0) {
    local_20 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                    peVar2->velocity[1] * peVar2->velocity[1] +
                    peVar2->velocity[0] * peVar2->velocity[0]);
    fVar3 = local_20 - 20.0;
    if (0.0 < fVar3) {
      peVar2 = this->pev;
      local_20 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                      peVar2->velocity[1] * peVar2->velocity[1] +
                      peVar2->velocity[0] * peVar2->velocity[0]);
      if (local_20 == 0.0) {
        local_44 = 1.0;
        local_4c = 0.0;
        local_48 = 0.0;
      }
      else {
        fVar4 = 1.0 / local_20;
        local_4c = fVar4 * peVar2->velocity[0];
        local_48 = fVar4 * peVar2->velocity[1];
        local_44 = fVar4 * peVar2->velocity[2];
      }
      pfVar7 = &local_3c;
      local_3c = fVar3 * local_4c;
      local_38 = fVar3 * local_48;
      local_34 = fVar3 * local_44;
    }
    else {
      pfVar7 = (float *)&g_vecZero;
      peVar2 = this->pev;
    }
    pvVar8 = peVar2->velocity;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pvVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pvVar8 = pvVar8 + 1;
    }
  }
  bVar5 = HasWeapons(this);
  if (CONCAT31(extraout_var,bVar5) != 0) {
    RemoveAllItems(this,1);
  }
  if (((this->pev->modelindex == 0) || (*(int *)&this->field_0x78 != 0)) ||
     (this->pev->deadflag != 1)) {
    peVar2 = this->pev;
    if ((peVar2->movetype != 0) && ((peVar2->flags & 0x200) != 0)) {
      peVar2->movetype = 0;
    }
    if (this->pev->deadflag == 1) {
      this->pev->deadflag = 2;
    }
    this->pev->framerate = 0.0;
    piVar1 = &this->pev->effects;
    *piVar1 = *piVar1 | 0x20;
    this->pev->framerate = 0.0;
    peVar2 = this->pev;
    if (peVar2->deadflag == 2) {
      peVar2->deadflag = 3;
    }
    else if (((*(float *)&this->field_0x768 < gpGlobals->time) ||
             ((peVar2->button & 0xffff7fffU) != 0)) && (this->pev->iuser1 == 0)) {
      TSCreateDeadCorpse((int *)this,10.0);
      peVar2 = this->pev;
      local_4c = peVar2->origin[0];
      local_48 = peVar2->origin[1];
      local_44 = peVar2->origin[2];
      peVar2 = this->pev;
      local_3c = peVar2->v_angle[0];
      local_38 = peVar2->v_angle[1];
      local_34 = peVar2->v_angle[2];
      StartObserver(this,&local_4c,&local_3c);
    }
  }
  else {
    CBaseAnimating::StudioFrameAdvance((CBaseAnimating *)this,0.0);
  }
  return;
}

/* 0008ed5c  CBasePlayer::Killed  (2044 bytes)
 * undefined Killed(int param_1, int param_2)
 */
/* CBasePlayer::Killed(entvars_s *, int) */

void __thiscall CBasePlayer::Killed(CBasePlayer *this,int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined1 *this_00;
  float fVar3;
  float fVar4;
  entvars_t *peVar5;
  bool bVar6;
  int iVar7;
  edict_t *peVar8;
  undefined4 *puVar9;
  undefined3 extraout_var;
  CSound *this_01;
  void *pvVar10;
  float *pfVar11;
  vec_t *pvVar12;
  undefined2 in_FPUControlWord;
  longdouble lVar13;
  vec_t *in_stack_ffffff8c;
  uint uVar14;
  float local_5c;
  float local_58;
  float local_54;
  float local_3c [6];
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  if (glast_closecombat == '\0') {
LAB_0008edc8:
    iVar7 = (*g_engfuncs.pfnRandomLong)(0,100);
    if (0x31 < iVar7) goto LAB_0008ee32;
    in_stack_ffffff8c = (vec_t *)(param_1 + 8);
    (*g_engfuncs.pfnMessageBegin)(4,gmsgTSMotionBlur,in_stack_ffffff8c,(edict_t *)0x0);
    peVar8 = *(edict_t **)(param_1 + 0x208);
  }
  else {
    iVar7 = (*g_engfuncs.pfnRandomLong)(0,100);
    if (0x4f < iVar7) goto LAB_0008edc8;
    in_stack_ffffff8c = (vec_t *)(param_1 + 8);
    (*g_engfuncs.pfnMessageBegin)(4,gmsgTSMotionBlur,in_stack_ffffff8c,(edict_t *)0x0);
    peVar8 = *(edict_t **)(param_1 + 0x208);
  }
  iVar7 = (*g_engfuncs.pfnIndexOfEdict)(peVar8);
  (*g_engfuncs.pfnWriteByte)(iVar7);
  (*g_engfuncs.pfnWriteByte)(1);
  (*g_engfuncs.pfnMessageEnd)();
LAB_0008ee32:
  iVar7 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (iVar7 < 0x32) {
    in_stack_ffffff8c = this->pev->origin;
    (*g_engfuncs.pfnMessageBegin)(4,gmsgTSMotionBlur,in_stack_ffffff8c,(edict_t *)0x0);
    iVar7 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteByte)(iVar7);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
  }
  *(float *)&this->field_0x768 = gpGlobals->time + 3.0;
  *(undefined4 *)&this->field_0x544 = 0xffffffff;
  ResetArmament(this);
  peVar8 = this->pev->pContainingEntity;
  (*g_engfuncs.pfnSetView)(peVar8,peVar8);
  EnableControl(this,1);
  this->field_0x7ba = this->field_0x7ba + '\x01';
  if (g_pevLastInflictor != 0) {
    peVar8 = *(edict_t **)(g_pevLastInflictor + 0x208);
    if (peVar8 == (edict_t *)0x0) {
      peVar8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar10 = (void *)0x0;
    if (peVar8 != (edict_t *)0x0) {
      pvVar10 = peVar8->pvPrivateData;
    }
    iVar7 = (**(code **)(*(int *)((int)pvVar10 + 0x60) + 200))(pvVar10);
    if (iVar7 == 0) {
      this->pev->iuser2 = 0;
    }
    else {
      peVar5 = this->pev;
      iVar7 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(g_pevLastInflictor + 0x208));
      peVar5->iuser2 = iVar7;
      iVar7 = UTIL_PlayerByIndex(this->pev->iuser2);
      *(int *)&this->field_0x75c = iVar7;
    }
  }
  uVar14 = (uint)in_stack_ffffff8c & 0xffff0000;
  fVar3 = (float)respawntime._12_4_;
  if ((float)respawntime._12_4_ < 5.0) {
    fVar3 = 5.0;
  }
  if (30.0 < fVar3) {
    fVar3 = 30.0;
  }
  _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
  local_24 = (int)ROUND(fVar3);
  SetPlayerRespawnTime((int)this,local_24);
  if (*(float *)&this->field_0x770 < 0.0) {
    this->field_0x74c = 1;
  }
  else {
    this->field_0x74c = 0xb;
  }
  if ((*(int *)&this->field_0x10c == 1) && (DAT_001781b8 == '\0')) {
    uVar14 = 0;
    (*this->vtable[5])(this,0x3ea8f5c3,0);
  }
  this->pev->iuser4 = 0;
  piVar2 = &this->pev->iuser4;
  *piVar2 = *piVar2 | 2;
  if (*(int *)&this->field_0xa10 != 0) {
    (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x130))
              (*(undefined4 *)&this->field_0xa10,0,uVar14);
  }
  DropAmmo(this);
  DropFlag(this,'\0');
  DropWeapon(this,1,0.0);
  puVar9 = get_weapon_info(1);
  if (puVar9[0x32] != -1) {
    DropWeapon(this,1,0.0);
  }
  uVar14 = 2;
  do {
    DropWeapon(this,uVar14,0.0);
    puVar9 = get_weapon_info(uVar14);
    if (puVar9[0x32] != -1) {
      DropWeapon(this,uVar14,0.0);
    }
    uVar1 = uVar14 + 1;
    DropWeapon(this,uVar1,0.0);
    puVar9 = get_weapon_info(uVar1);
    if (puVar9[0x32] != -1) {
      DropWeapon(this,uVar1,0.0);
    }
    uVar1 = uVar14 + 2;
    DropWeapon(this,uVar1,0.0);
    puVar9 = get_weapon_info(uVar1);
    if (puVar9[0x32] != -1) {
      DropWeapon(this,uVar1,0.0);
    }
    uVar1 = uVar14 + 3;
    DropWeapon(this,uVar1,0.0);
    puVar9 = get_weapon_info(uVar1);
    if (puVar9[0x32] != -1) {
      DropWeapon(this,uVar1,0.0);
    }
    uVar14 = uVar14 + 4;
  } while ((int)uVar14 < 0x26);
  (**(code **)(*g_pGameRules + 0x70))(g_pGameRules,this,param_1,g_pevLastInflictor);
  this_00 = &this->field_0x9c4;
  bVar6 = int((EHANDLE *)this_00);
  if (CONCAT31(extraout_var,bVar6) != 0) {
    iVar7 = EHANDLE::operator->((EHANDLE *)this_00);
    (**(code **)(*(int *)(iVar7 + 0x60) + 0xe0))(iVar7,this,this,0,0);
    EHANDLE::operator=((EHANDLE *)this_00,(int *)0x0);
  }
  iVar7 = CSoundEnt::ClientSoundIndex(this->pev->pContainingEntity);
  this_01 = (CSound *)CSoundEnt::SoundPointerForIndex(iVar7);
  if (this_01 != (CSound *)0x0) {
    CSound::Reset(this_01);
  }
  CTSAnimation::Animate((CTSAnimation *)&this->field_0x28c,this,7);
  *(undefined4 *)&this->field_0xb34 = 0;
  this->pev->modelindex = g_ulModelIndexPlayer;
  this->pev->deadflag = 1;
  this->pev->movetype = 6;
  piVar2 = &this->pev->flags;
  *piVar2 = *piVar2 & 0xfffffdff;
  peVar5 = this->pev;
  local_54 = SQRT(DAT_00190ee8 * DAT_00190ee8 +
                  DAT_00190ee4 * DAT_00190ee4 + g_vecAttackDir * g_vecAttackDir);
  if (local_54 == 0.0) {
    local_54 = 1.0;
    local_5c = 0.0;
    local_58 = 0.0;
  }
  else {
    local_54 = 1.0 / local_54;
    local_5c = local_54 * g_vecAttackDir;
    local_58 = local_54 * DAT_00190ee4;
    local_54 = local_54 * DAT_00190ee8;
  }
  lVar13 = CBaseMonster::DamageForce((CBaseMonster *)this,(float)*(int *)&this->field_0x97c);
  if ((longdouble)500.0 <= lVar13) {
    lVar13 = (longdouble)-500.0;
  }
  else {
    lVar13 = CBaseMonster::DamageForce((CBaseMonster *)this,(float)*(int *)&this->field_0x97c);
    lVar13 = -lVar13;
  }
  local_3c[0] = (float)((longdouble)peVar5->velocity[0] + lVar13 * (longdouble)local_5c);
  local_3c[1] = peVar5->velocity[1] + (float)(lVar13 * (longdouble)local_58);
  local_3c[2] = peVar5->velocity[2] + (float)(lVar13 * (longdouble)local_54);
  pfVar11 = local_3c;
  pvVar12 = peVar5->velocity;
  for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pvVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pvVar12 = pvVar12 + 1;
  }
  fVar3 = this->pev->velocity[0];
  fVar4 = this->pev->velocity[1];
  if (((80.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) || (0x32 < *(int *)&this->field_0x97c)) &&
     (*(int *)&this->field_0x470 == 0)) {
    this->pev->velocity[2] = 180.0;
    this->pev->gravity = 0.5;
  }
  SetSuitUpdate(this,(char *)0x0,0,0);
  *(undefined4 *)&this->field_0x9e0 = 0;
  (*g_engfuncs.pfnMessageBegin)(1,gmsgTSHealth,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x9e0);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(2,gmsgTSActiveItems,(float *)0x0,(edict_t *)0x0);
  iVar7 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar7);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  *(undefined4 *)&this->field_0x9f4 = 0;
  *(undefined4 *)&this->field_0x9f0 = 0;
  this->pev->fov = 0.0;
  (*g_engfuncs.pfnMessageBegin)(1,gmsgSetFOV,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  if (((this->pev->health < -40.0) && (param_2 != 1)) || (param_2 == 2)) {
    this->pev->solid = 0;
    (*this->vtable[0x4a])(this);
    piVar2 = &this->pev->effects;
    *piVar2 = *piVar2 | 0x80;
  }
  else {
    this->pev->angles[0] = 0.0;
    this->pev->angles[2] = 0.0;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = PlayerDeathThink;
    this->pev->nextthink = gpGlobals->time + 0.1;
  }
  return;
}

/* 0008f568  CBasePlayer::Spawn  (1322 bytes)
 * undefined Spawn(void)
 */
/* CBasePlayer::Spawn(void) */

void __thiscall CBasePlayer::Spawn(CBasePlayer *this)

{
  int *piVar1;
  edict_t *pClient;
  int iVar2;
  CBasePlayer *pCVar3;
  vec_t *pvVar4;
  CBasePlayer *pCVar5;
  vec_t *pvVar6;
  longdouble lVar7;
  vec_t local_4c [4];
  vec_t local_3c;
  vec_t local_38;
  undefined4 local_34;
  
  TSInit(this);
  this->pev->classname = (int)"player" - (int)gpGlobals->pStringBase;
  this->pev->health = 100.0;
  this->pev->armorvalue = 0.0;
  this->pev->takedamage = 2.0;
  this->pev->solid = 3;
  this->pev->movetype = 3;
  this->pev->max_health = this->pev->health;
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 & 0x100000;
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 | 8;
  if (*(int *)&this->field_0x160 != 0) {
    piVar1 = &this->pev->flags;
    *piVar1 = *piVar1 | 0x2000;
  }
  this->pev->air_finished = gpGlobals->time + 12.0;
  this->pev->dmg = 2.0;
  this->pev->effects = 0;
  this->pev->deadflag = 0;
  this->pev->dmg_take = 0.0;
  this->pev->dmg_save = 0.0;
  this->pev->friction = 1.0;
  this->pev->gravity = 1.0;
  *(undefined4 *)&this->field_0x9b0 = 0xffffffff;
  *(undefined4 *)&this->field_0x110 = 0;
  *(undefined4 *)&this->field_0x848 = 0;
  *(undefined4 *)&this->field_0x9d4 = 0;
  (*g_engfuncs.pfnSetPhysicsKeyValue)(this->pev->pContainingEntity,"slj","0");
  (*g_engfuncs.pfnSetPhysicsKeyValue)(this->pev->pContainingEntity,"hl","1");
  *(undefined4 *)&this->field_0x9f0 = 0;
  this->pev->fov = 0.0;
  *(undefined4 *)&this->field_0x9f4 = 0xffffffff;
  *(undefined4 *)&this->field_0xb44 = 0;
  *(float *)&this->field_0x988 = gpGlobals->time + 2.0;
  *(undefined4 *)&this->field_0x850 = 0;
  *(undefined4 *)&this->field_0x990 = 0;
  *(undefined4 *)&this->field_0x140 = 0x3f000000;
  *(undefined4 *)&this->field_0x144 = 0xf7;
  lVar7 = UTIL_WeaponTimeBase();
  *(float *)&this->field_0x12c = (float)lVar7;
  (*this->vtable[0x29])(this);
  *(undefined4 *)&this->field_0x80c = 99;
  *(undefined4 *)&this->field_0x808 = 0x3f800000;
  *(undefined4 *)&this->field_0x828 = 0;
  (**(code **)(*g_pGameRules + 0xe0))(g_pGameRules,this);
  (**(code **)(*g_pGameRules + 0x5c))(g_pGameRules,this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/player.mdl");
  g_ulModelIndexPlayer = this->pev->modelindex;
  iVar2 = CBaseAnimating::LookupActivity((CBaseAnimating *)this,1);
  this->pev->sequence = iVar2;
  pClient = this->pev->pContainingEntity;
  (*g_engfuncs.pfnSetView)(pClient,pClient);
  EnableControl(this,1);
  if ((this->pev->flags & 0x4000) == 0) {
    pvVar6 = local_4c;
    local_4c[1] = 16.0;
    local_4c[2] = 36.0;
    pvVar4 = &local_3c;
    local_38 = -16.0;
    local_34 = 0xc2100000;
  }
  else {
    pvVar6 = &local_3c;
    local_38 = 16.0;
    local_34 = 0x41900000;
    pvVar4 = local_4c;
    local_4c[1] = -16.0;
    local_4c[2] = -18.0;
  }
  local_4c[0] = local_4c[1];
  local_3c = local_38;
  UTIL_SetSize((int)this->pev,pvVar4,pvVar6);
  local_4c[2] = 28.0;
  local_4c[0] = 0.0;
  pvVar6 = local_4c;
  pvVar4 = this->pev->view_ofs;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar4 = pvVar4 + 1;
  }
  local_4c[1] = local_4c[0];
  (*this->vtable[10])(this);
  local_4c[1] = 32.0;
  local_4c[0] = 0.0;
  pvVar6 = local_4c;
  pvVar4 = (vec_t *)&this->field_0x148;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar4 = pvVar4 + 1;
  }
  local_4c[2] = local_4c[0];
  if (*(int *)&this->field_0x7f0 == -1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"Couldn\'t alloc player sound slot!\n");
  }
  *(undefined4 *)&this->field_0x9d0 = 0;
  *(undefined4 *)&this->field_0xa18 = 0;
  *(undefined4 *)&this->field_0x9b4 = 1;
  *(undefined4 *)&this->field_0x9ec = 0xffffffff;
  *(undefined4 *)&this->field_0x9c0 = 0;
  *(undefined4 *)&this->field_0xa14 = 0;
  *(undefined4 *)&this->field_0x9e4 = 0xffffffff;
  iVar2 = 0;
  pCVar3 = this;
  pCVar5 = this;
  do {
    *(undefined4 *)&pCVar3->field_0xa20 = 0;
    *(undefined4 *)&pCVar5->field_0xaa0 = 0;
    *(undefined4 *)&pCVar3->field_0xa24 = 0;
    *(undefined4 *)&pCVar5->field_0xaa4 = 0;
    *(undefined4 *)&pCVar3->field_0xa28 = 0;
    *(undefined4 *)&pCVar5->field_0xaa8 = 0;
    *(undefined4 *)&pCVar3->field_0xa2c = 0;
    *(undefined4 *)&pCVar5->field_0xaac = 0;
    *(undefined4 *)&pCVar3->field_0xa30 = 0;
    *(undefined4 *)&pCVar5->field_0xab0 = 0;
    *(undefined4 *)&pCVar3->field_0xa34 = 0;
    *(undefined4 *)&pCVar5->field_0xab4 = 0;
    *(undefined4 *)&pCVar3->field_0xa38 = 0;
    *(undefined4 *)&pCVar5->field_0xab8 = 0;
    *(undefined4 *)&pCVar3->field_0xa3c = 0;
    *(undefined4 *)&pCVar5->field_0xabc = 0;
    pCVar5 = (CBasePlayer *)&pCVar5->field_0x20;
    pCVar3 = (CBasePlayer *)&pCVar3->field_0x20;
    iVar2 = iVar2 + 8;
  } while (iVar2 < 0x20);
  *(undefined4 *)&this->field_0xb3c = 0;
  *(undefined4 *)&this->field_0xb38 = 0;
  (**(code **)(*g_pGameRules + 0x4c))(g_pGameRules,this);
  return;
}

/* 0008fa94  CBasePlayer::TakeDamage  (1835 bytes)
 * int TakeDamage(int param_1, int param_2, float param_3, uint param_4)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBasePlayer::TakeDamage(entvars_s *, entvars_s *, float, int) */

int __thiscall
CBasePlayer::TakeDamage(CBasePlayer *this,int param_1,int param_2,float param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  edict_t *peVar8;
  int iVar9;
  char *pcVar10;
  void *pvVar11;
  uint uVar12;
  undefined2 in_FPUControlWord;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_28;
  undefined2 local_24;
  undefined2 uStack_22;
  float local_20;
  
  bVar6 = true;
  fVar1 = this->pev->health;
  if ((param_4 & 0x40) != 0) {
    (**(code **)(*g_pGameRules + 0x1c))(g_pGameRules);
  }
  iVar7 = (*this->vtable[0x2d])(this);
  if ((iVar7 == 0) || (param_3 == 0.0)) {
    return 0;
  }
  if (((*(int *)&this->field_0x10c - 6U < 2) ||
      (fVar2 = this->pev->velocity[0], fVar3 = this->pev->velocity[1],
      local_20 = SQRT(fVar3 * fVar3 + fVar2 * fVar2), 80.0 <= local_20)) || (80.0 < param_3)) {
    CTSAnimation::DisableBulletDance((int)&this->field_0x28c);
  }
  else {
    CTSAnimation::EnableBulletDance((int)&this->field_0x28c);
  }
  peVar8 = *(edict_t **)(param_2 + 0x208);
  if (peVar8 == (edict_t *)0x0) {
    peVar8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar11 = (void *)0x0;
  if (peVar8 != (edict_t *)0x0) {
    pvVar11 = peVar8->pvPrivateData;
  }
  iVar7 = (**(code **)(*g_pGameRules + 0x44))(g_pGameRules,this,pvVar11);
  if (iVar7 == 0) {
    return 0;
  }
  *(int *)&this->field_0x97c = (int)ROUND(param_3);
  if (((this->pev->armorvalue != 0.0) && ((param_4 & 0x80040e4) == 0)) &&
     (*(int *)&this->field_0x10c - 2U < 4)) {
    fVar2 = _DAT_0017da2c;
    if (1.0 < _DAT_0017da2c) {
      fVar2 = 1.0;
    }
    param_3 = param_3 - fVar2 * param_3;
  }
  _local_24 = CONCAT22(uStack_22,in_FPUControlWord);
  local_28 = (int)ROUND(param_3);
  iVar7 = CBaseMonster::TakeDamage((CBaseMonster *)this,param_1,param_2,(float)local_28,param_4);
  if ((param_4 & 0x8000) != 0) {
    this->field_0x114 = 0;
  }
  if ((param_4 & 0x10000) != 0) {
    this->field_0x115 = 0;
  }
  if ((param_4 & 0x20000) != 0) {
    this->field_0x116 = 0;
  }
  if ((param_4 & 0x40000) != 0) {
    this->field_0x117 = 0;
  }
  if ((param_4 & 0x80000) != 0) {
    this->field_0x118 = 0;
  }
  if ((param_4 & 0x100000) != 0) {
    this->field_0x119 = 0;
  }
  if ((param_4 & 0x200000) != 0) {
    this->field_0x11a = 0;
  }
  if ((param_4 & 0x400000) != 0) {
    this->field_0x11b = 0;
  }
  (*g_engfuncs.pfnMessageBegin)(9,0x32,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  iVar9 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteShort)(iVar9);
  iVar9 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x208));
  (*g_engfuncs.pfnWriteShort)(iVar9);
  (*g_engfuncs.pfnWriteLong)(5);
  (*g_engfuncs.pfnMessageEnd)();
  bVar5 = false;
  if ((75.0 < this->pev->health) || (*(int *)&this->field_0x97c < 5)) {
    bVar5 = true;
  }
  iVar9 = *(int *)&this->field_0x97c;
  bVar4 = iVar9 < 0x1a;
  fVar2 = this->pev->health;
  *(uint *)&this->field_0x110 = *(uint *)&this->field_0x110 | param_4;
  *(undefined4 *)&this->field_0x9b0 = 0xffffffff;
  uVar12 = param_4;
  while ((iVar7 != 0 && ((((!bVar5 || ((uVar12 & 0xffffc000) != 0)) && (bVar6)) && (uVar12 != 0)))))
  {
    bVar6 = false;
    if ((char)uVar12 < '\0') {
      if (0x19 < iVar9) {
        SetSuitUpdate(this,"!HEV_DMG4",0,0x1e);
      }
      uVar12 = uVar12 & 0xffffff7f;
      bVar6 = true;
    }
    if ((uVar12 & 0x21) != 0) {
      if (bVar4) {
        pcVar10 = "!HEV_DMG4";
      }
      else {
        pcVar10 = "!HEV_DMG5";
      }
      SetSuitUpdate(this,pcVar10,0,0x1e);
      uVar12 = uVar12 & 0xffffffde;
      bVar6 = true;
    }
    if ((uVar12 & 2) != 0) {
      if (5 < *(int *)&this->field_0x97c) {
        SetSuitUpdate(this,"!HEV_DMG6",0,0x1e);
      }
      uVar12 = uVar12 & 0xfffffffd;
      bVar6 = true;
    }
    if ((uVar12 & 4) != 0) {
      if (bVar4) {
        pcVar10 = "!HEV_DMG0";
      }
      else {
        pcVar10 = "!HEV_DMG1";
      }
      SetSuitUpdate(this,pcVar10,0,0x1e);
      uVar12 = uVar12 & 0xfffffffb;
      bVar6 = true;
    }
    if ((uVar12 & 0x200) != 0) {
      if (!bVar4) {
        SetSuitUpdate(this,"!HEV_DMG2",0,0x3c);
      }
      uVar12 = uVar12 & 0xfffffdff;
      bVar6 = true;
    }
    if ((uVar12 & 0x28000) != 0) {
      SetSuitUpdate(this,"!HEV_DMG3",0,0x3c);
      uVar12 = uVar12 & 0xfffd7fff;
      bVar6 = true;
    }
    if ((uVar12 & 0x100000) != 0) {
      SetSuitUpdate(this,"!HEV_DET1",0,0x3c);
      uVar12 = uVar12 & 0xffefffff;
      bVar6 = true;
    }
    if ((uVar12 & 0x10000) != 0) {
      SetSuitUpdate(this,"!HEV_DET0",0,0x3c);
      uVar12 = uVar12 & 0xfffeffff;
      bVar6 = true;
    }
    if ((uVar12 & 0x40000) != 0) {
      SetSuitUpdate(this,"!HEV_DET2",0,0x3c);
      uVar12 = uVar12 & 0xfffbffff;
      bVar6 = true;
    }
    if ((uVar12 & 0x100) != 0) {
      uVar12 = uVar12 & 0xfffffeff;
      bVar6 = true;
    }
  }
  if (1.0 <= param_3) {
    local_3c = 150.0;
    local_38 = 0x41200000;
    local_34 = local_38;
    UTIL_ScreenFade((int *)this,&local_3c,0.3,0.15,0x4b,0);
  }
  if (((iVar7 != 0) && (!bVar5)) && ((!bVar4 && (75.0 <= fVar1)))) {
    SetSuitUpdate(this,"!HEV_MED1",0,0x708);
    SetSuitUpdate(this,"!HEV_HEAL7",0,0x708);
  }
  if (((iVar7 == 0) || (bVar5)) || ((30.0 <= fVar2 || (75.0 <= fVar1)))) goto LAB_0009014f;
  if (6.0 <= this->pev->health) {
    if (this->pev->health < 20.0) {
      pcVar10 = "!HEV_HLTH2";
      goto LAB_00090105;
    }
  }
  else {
    pcVar10 = "!HEV_HLTH3";
LAB_00090105:
    SetSuitUpdate(this,pcVar10,0,600);
  }
  iVar9 = (*g_engfuncs.pfnRandomLong)(0,3);
  if ((iVar9 == 0) && (fVar1 < 50.0)) {
    SetSuitUpdate(this,"!HEV_DMG7",0,300);
  }
LAB_0009014f:
  if (iVar7 == 0) {
    return 0;
  }
  if ((param_4 & 0xffffc000) != 0) {
    if (75.0 <= fVar1) {
      return iVar7;
    }
    if (50.0 <= fVar1) {
      iVar9 = 600;
      pcVar10 = "!HEV_HLTH1";
    }
    else {
      iVar9 = (*g_engfuncs.pfnRandomLong)(0,3);
      if (iVar9 != 0) {
        return iVar7;
      }
      iVar9 = 300;
      pcVar10 = "!HEV_DMG7";
    }
    SetSuitUpdate(this,pcVar10,0,iVar9);
    return iVar7;
  }
  return iVar7;
}

/* 000901cc  CBasePlayer::TraceAttack  (1727 bytes)
 * undefined TraceAttack(uint param_1, float param_2, float * param_3, int param_4, uint param_5)
 */
/* CBasePlayer::TraceAttack(entvars_s *, float, Vector, TraceResult *, int) */

void __thiscall
CBasePlayer::TraceAttack
          (CBasePlayer *this,uint param_1,float param_2,float *param_3,int param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  CBaseEntity *pCVar3;
  int iVar4;
  char *pcVar5;
  entvars_t *peVar6;
  float *pfVar7;
  edict_t *peVar8;
  vec_t *pvVar9;
  longdouble extraout_ST0;
  float fVar10;
  float local_3c [11];
  
  if (gpGlobals->time < *(float *)&this->field_0x71c) {
    return;
  }
  bVar2 = false;
  if ((this->pev->iuser4 & 0x10c10U) != 0) {
    param_2 = param_2 * 0.7;
  }
  if ((gpGlobals->time < *(float *)&this->field_0x524) && ((param_5 & 2) != 0)) {
    param_2 = param_2 * 0.7;
  }
  pCVar3 = GetClassPtr<CBaseEntity>(param_1);
  if ((((pCVar3 != (CBaseEntity *)0x0) && (iVar4 = (*pCVar3->vtable[0x32])(pCVar3), iVar4 != 0)) &&
      (iVar4 = (**(code **)(*g_pGameRules + 0xcc))(g_pGameRules,pCVar3,this), iVar4 == 1)) &&
     ((float)friendlyfire._12_4_ == 0.0)) {
    return;
  }
  if (this->pev->takedamage == 0.0) {
    return;
  }
  *(undefined4 *)&this->field_0x10c = *(undefined4 *)(param_4 + 0x34);
  switch(*(undefined4 *)(param_4 + 0x34)) {
  case 1:
    if ((param_5 & 0x8000002) != 0) {
      if ((param_5 & 0x2000000) == 0) {
        param_2 = param_2 + param_2;
      }
      else {
        param_2 = param_2 * 1.5;
      }
      bVar2 = true;
      glast_headshot = 1;
    }
    break;
  case 6:
  case 7:
    param_2 = param_2 * 0.5;
  }
  bVar1 = false;
  if (((this->pev->armorvalue != 0.0) && ((param_5 & 2) != 0)) &&
     ((iVar4 = (*this->vtable[0x2d])(this), iVar4 != 0 && (*(int *)&this->field_0x10c - 2U < 4)))) {
    bVar1 = true;
  }
  iVar4 = (*this->vtable[0x2d])(this);
  if (iVar4 == 0) {
    CTSAnimation::BulletDance((CTSAnimation *)&this->field_0x28c,(CBaseAnimating *)this);
    peVar6 = this->pev;
    if ((peVar6->flags & 0x200) == 0) {
      local_3c[0] = peVar6->velocity[0] + *param_3 * 50.0;
      local_3c[1] = peVar6->velocity[1] + param_3[1] * 50.0;
      local_3c[2] = peVar6->velocity[2] + param_3[2] * 50.0;
      pfVar7 = local_3c;
      pvVar9 = peVar6->velocity;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pvVar9 = pvVar9 + 1;
      }
    }
  }
  if (gpGlobals->time <= *(float *)&this->field_0x750) goto LAB_00090830;
  fVar10 = param_2;
  if ((param_5 & 0x2000000) != 0) {
    fVar10 = param_2 * 8.0;
  }
  *(float *)&this->field_0x750 = gpGlobals->time + 0.3;
  if (bVar1) {
    fVar10 = fVar10 * 0.5;
    if (127.0 < fVar10) {
      fVar10 = 127.0;
    }
    fVar10 = fVar10 + 128.0;
  }
  else {
    fVar10 = fVar10 * 0.5;
    if (127.0 < fVar10) {
      fVar10 = 127.0;
    }
  }
  (*g_engfuncs.pfnMessageBegin)(4,gmsgTSTakeDamage,this->pev->origin,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_4 + 0x14));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_4 + 0x18));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_4 + 0x1c));
  (*g_engfuncs.pfnWriteCoord)(*param_3);
  (*g_engfuncs.pfnWriteCoord)(param_3[1]);
  (*g_engfuncs.pfnWriteCoord)(param_3[2]);
  (*g_engfuncs.pfnWriteByte)((int)ROUND(fVar10));
  (*g_engfuncs.pfnMessageEnd)();
  if ((param_5 & 0x42) != 0) {
    if (bVar2) {
      iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar4 == 0) {
        peVar8 = this->pev->pContainingEntity;
        fVar10 = 0.5;
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar4 = iVar4 + 0x5f;
        pcVar5 = "player/headshot.wav";
      }
      else {
        if (iVar4 != 1) goto switchD_00090692_default;
        peVar8 = this->pev->pContainingEntity;
        fVar10 = 0.5;
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar4 = iVar4 + 0x5f;
        pcVar5 = "player/headshot2.wav";
      }
    }
    else if (bVar1) {
      peVar8 = this->pev->pContainingEntity;
      fVar10 = 0.5;
      iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
      iVar4 = iVar4 + 0x5f;
      pcVar5 = "player/kevlarhit.wav";
    }
    else {
      iVar4 = (*g_engfuncs.pfnRandomLong)(0,3);
      switch(iVar4) {
      case 0:
        peVar8 = this->pev->pContainingEntity;
        fVar10 = 0.5;
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar4 = iVar4 + 0x5f;
        pcVar5 = "player/bodyhit1.wav";
        break;
      case 1:
        peVar8 = this->pev->pContainingEntity;
        fVar10 = 0.5;
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar4 = iVar4 + 0x5f;
        pcVar5 = "player/bodyhit2.wav";
        break;
      case 2:
        peVar8 = this->pev->pContainingEntity;
        fVar10 = 0.5;
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar4 = iVar4 + 0x5f;
        pcVar5 = "player/bodyhit3.wav";
        break;
      case 3:
        peVar8 = this->pev->pContainingEntity;
        fVar10 = 0.5;
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar4 = iVar4 + 0x5f;
        pcVar5 = "player/bodyhit4.wav";
        break;
      default:
        goto switchD_00090692_default;
      }
    }
    EMIT_SOUND_DYN((int)peVar8,4,pcVar5,0x3f800000,0x3fa00000,0,iVar4,fVar10);
  }
switchD_00090692_default:
  iVar4 = (*this->vtable[0x2d])(this);
  if (iVar4 == 0) goto LAB_00090830;
  iVar4 = (*g_engfuncs.pfnRandomLong)(1,7);
  if (iVar4 == 2) {
    peVar6 = this->pev;
    pcVar5 = "player/pain3.wav";
  }
  else if (iVar4 < 3) {
    if (iVar4 != 1) goto LAB_00090830;
    peVar6 = this->pev;
    pcVar5 = "player/pain2.wav";
  }
  else {
    if (iVar4 != 3) goto LAB_00090830;
    peVar6 = this->pev;
    pcVar5 = "player/pain4.wav";
  }
  EMIT_SOUND_DYN((int)peVar6->pContainingEntity,2,pcVar5,0x3f800000,0x3fa00000,0,100,0.15);
LAB_00090830:
  AddMultiDamage(param_1,(int)this,param_2,param_5);
  if ((g_flWeaponCheat != 0.0) &&
     ((*g_engfuncs.pfnCVarGetFloat)("dmgreport"), extraout_ST0 != (longdouble)0)) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"%s damaged %s (%f hp)\n",
               gpGlobals->pStringBase + *(int *)(param_1 + 0x1d0),
               gpGlobals->pStringBase + this->pev->netname,(double)param_2);
  }
  return;
}

/* 000908cc  CBasePlayer::PreThink  (3375 bytes)
 * undefined PreThink(void)
 */
/* WARNING: Removing unreachable block (ram,0x0009120d) */
/* CBasePlayer::PreThink(void) */

void __thiscall CBasePlayer::PreThink(CBasePlayer *this)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  edict_t *peVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  float fVar9;
  vec_t *pvVar10;
  vec_t *pvVar11;
  undefined2 in_FPUControlWord;
  longdouble lVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  entvars_t *peVar17;
  int *local_94;
  float local_90;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_6c [16];
  float local_5c;
  int local_3c;
  int local_28;
  undefined2 local_24;
  undefined2 uStack_22;
  
  uVar6 = this->pev->button;
  uVar8 = *(uint *)&this->field_0x810 ^ uVar6;
  *(uint *)&this->field_0x814 = uVar6 & uVar8;
  *(uint *)&this->field_0x818 = uVar8 & ~this->pev->button;
  (**(code **)(*g_pGameRules + 0x50))(g_pGameRules,this);
  if (g_fGameOver != 0) {
    return;
  }
  UTIL_MakeVectors(this->pev->v_angle);
  ItemPreFrame(this);
  WaterMove(this);
  (*this->vtable[0x5b])(this);
  CheckTimeBasedDamage(this);
  CheckSuitUpdate(this);
  InterpolateSlowMotion(gpGlobals->frametime,&this->pev->fuser1,*(float *)&this->field_0x168);
  lVar12 = (longdouble)(*this->vtable[4])(this);
  this->pev->framerate = (float)lVar12;
  if ((this->pev->flags & 0x200) != 0) {
    *(float *)&this->field_0xb88 = gpGlobals->time;
  }
  lVar12 = (longdouble)(*this->vtable[4])(this);
  lVar12 = lVar12 * (longdouble)gpGlobals->frametime;
  if ((*(uint *)&this->field_0x724 & 0x10) != 0) {
    lVar12 = lVar12 * (longdouble)1.5;
  }
  local_90 = (float)lVar12;
  if (*(float *)&this->field_0x79c != 0.0) {
    fVar9 = *(float *)&this->field_0x79c - local_90;
    if (fVar9 < 0.001) {
      fVar9 = 0.001;
    }
    *(float *)&this->field_0x79c = fVar9;
  }
  if (*(float *)&this->field_0x4dc != 0.0) {
    fVar9 = *(float *)&this->field_0x4dc - local_90;
    if (fVar9 < 0.001) {
      fVar9 = 0.001;
    }
    *(float *)&this->field_0x4dc = fVar9;
  }
  if (*(float *)&this->field_0x4ec != 0.0) {
    fVar9 = *(float *)&this->field_0x4ec - local_90;
    if (fVar9 < 0.001) {
      fVar9 = 0.001;
    }
    *(float *)&this->field_0x4ec = fVar9;
  }
  fVar9 = *(float *)&this->field_0x7a8 - local_90;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  *(float *)&this->field_0x7a8 = fVar9;
  fVar9 = *(float *)&this->field_0x7b0 - local_90;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  *(float *)&this->field_0x7b0 = fVar9;
  fVar9 = *(float *)&this->field_0x7ac - local_90;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  *(float *)&this->field_0x7ac = fVar9;
  fVar9 = *(float *)&this->field_0x7b4 - local_90 * 5.0;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  *(float *)&this->field_0x7b4 = fVar9;
  CTSStunt::Play((CTSStunt *)&this->field_0x4f0);
  CTSAnimation::UpdateTimers((CTSAnimation *)&this->field_0x28c,(int)this);
  peVar17 = this->pev;
  bVar2 = false;
  if (((peVar17->view_ofs[0] == g_vecZero) && (peVar17->view_ofs[1] == DAT_00190ef0)) &&
     (peVar17->view_ofs[2] == DAT_00190ef4)) {
    bVar2 = true;
  }
  if (bVar2) {
    piVar1 = &this->pev->iuser4;
    *piVar1 = *piVar1 | 0x400000;
  }
  else {
    piVar1 = &this->pev->iuser4;
    *piVar1 = *piVar1 & 0xffbfffff;
  }
  UpdatePowerUpState(this);
  SlowMotionFlow(this);
  if (*(float *)&this->field_0x73c != 0.0) {
    if (this->field_0x7b9 == '\0') {
      if (this->pev->health <= this->pev->max_health) {
        *(undefined4 *)&this->field_0x73c = 0;
      }
      else if (*(float *)&this->field_0x73c < gpGlobals->time) {
        *(float *)&this->field_0x73c = gpGlobals->time + 1.0;
        this->pev->health = this->pev->health - 1.0;
      }
    }
    else if (*(float *)&this->field_0x73c < gpGlobals->time) {
      fVar9 = (float)(short)DAT_0017da16 * 0.32;
      if (fVar9 < 1.0) {
        fVar9 = 1.0;
      }
      *(float *)&this->field_0x73c = 1.0 / fVar9 + gpGlobals->time;
      fVar9 = (float)(short)DAT_0017da16 * 0.16 + this->pev->health;
      if (150.0 < fVar9) {
        fVar9 = 150.0;
      }
      this->pev->health = fVar9;
    }
  }
  if (*(float *)&this->field_0x4dc != 0.0) {
    uVar6 = this->pev->iuser4;
    if (((uVar6 & 1) != 0) && (*(float *)&this->field_0x4dc < 0.01)) {
      this->pev->iuser4 = uVar6 & 0xfffffffe;
      *(undefined4 *)&this->field_0x4dc = 0;
    }
  }
  if ((*(float *)&this->field_0x4ec != 0.0) && (*(float *)&this->field_0x4ec < 0.01)) {
    this->pev->gravity = 1.0;
    *(undefined4 *)&this->field_0x4ec = 0;
  }
  iVar3 = (*this->vtable[0x2d])(this);
  if (iVar3 != 0) {
    if ((0.0 < *(float *)&this->field_0x778) &&
       (fVar9 = *(float *)&this->field_0x778 - local_90 * 0.1, *(float *)&this->field_0x778 = fVar9,
       fVar9 < 0.0)) {
      *(undefined4 *)&this->field_0x778 = 0;
    }
    if (*(float *)&this->field_0x774 < 100.0) {
      if (-0.001 <= *(float *)&this->field_0x774) {
        local_90 = local_90 * 15.0;
      }
      *(float *)&this->field_0x774 = local_90 + *(float *)&this->field_0x774;
      if (100.0 < *(float *)&this->field_0x774) {
        *(undefined4 *)&this->field_0x774 = 0x42c80000;
      }
    }
  }
  if (*(float *)&this->field_0x79c != 0.0) {
    if ((*(float *)&this->field_0x79c < 0.01) || (*(float *)&this->field_0x7a0 == 0.0)) {
      *(undefined4 *)&this->field_0x79c = 0;
      *(undefined4 *)&this->field_0x7a0 = 0;
      this->field_0x7a4 = 0;
    }
    *(undefined4 *)&this->field_0x7a8 = 0;
  }
  if (this->pev->iuser1 != 0) {
    if (((0.0 < *(float *)&this->field_0x770) && (gpGlobals->time < *(float *)&this->field_0x770))
       && (*(float *)&this->field_0x754 < gpGlobals->time)) {
      *(float *)&this->field_0x754 = gpGlobals->time + 1.0;
      _local_24 = CONCAT22(uStack_22,in_FPUControlWord);
      local_28 = (int)ROUND(*(float *)&this->field_0x770 - gpGlobals->time);
      if (local_28 < 1) {
        peVar17 = this->pev;
        pcVar4 = "Press Fire To Play!";
        uVar14 = 0x1e;
      }
      else {
        peVar17 = this->pev;
        fVar9 = *(float *)&this->field_0x770 - gpGlobals->time;
        if (30.0 < fVar9) {
          fVar9 = 30.0;
        }
        _local_24 = CONCAT22(uStack_22,in_FPUControlWord);
        local_28 = (int)ROUND(fVar9);
        pcVar4 = UTIL_VarArgs("%i",local_28);
        uVar14 = 0x14;
      }
      TSHudMessageOne(0,0,0,0x10,uVar14,pcVar4,(int)peVar17);
    }
    if (*(float *)&this->field_0x7bc != 0.0) {
      if (gpGlobals->time <= *(float *)&this->field_0x7bc) {
        if (*(float *)&this->field_0x754 < gpGlobals->time) {
          *(float *)&this->field_0x754 = gpGlobals->time + 1.0;
          peVar17 = this->pev;
          _local_24 = CONCAT22(uStack_22,in_FPUControlWord);
          local_28 = (int)ROUND(*(float *)&this->field_0x7bc - gpGlobals->time);
          pcVar4 = UTIL_VarArgs("%i seconds left for respawn, press Fire to Play!",local_28);
          TSHudMessageOne(0,0,0,0x10,0x14,pcVar4,(int)peVar17);
        }
      }
      else {
        *(undefined4 *)&this->field_0x7bc = 0;
        *(undefined4 *)&this->field_0x770 = 0xbf800000;
        this->field_0x74c = 1;
        TSHudMessageOne(0xc3,0x2d,0x2d,0x10,0x14,"You have to wait until the next round.",
                        (int)this->pev);
        CTSGameRules::CallCheckDeads((CTSGameRules *)&TSGameRules);
      }
    }
    Observer_HandleButtons(this);
    Observer_Idle(this);
    this->pev->impulse = 0;
    return;
  }
  CTSStunt::CheckForBreakables((CTSStunt *)&this->field_0x4f0);
  if (0 < this->pev->deadflag) {
    PlayerDeathThink(this);
    return;
  }
  if ((*(uint *)&this->field_0x848 & 2) == 0) {
    piVar1 = &this->pev->flags;
    *piVar1 = *piVar1 & 0xfeffffff;
  }
  else {
    piVar1 = &this->pev->flags;
    *piVar1 = *piVar1 | 0x1000000;
  }
  if ((*(uint *)&this->field_0x848 & 2) == 0) {
    if ((char)this->field_0x9bc < '\0') {
      *(undefined4 *)&this->field_0x9bc = 0xc0;
    }
LAB_000913ab:
    if ((this->pev->button & 2) != 0) {
      (*this->vtable[0x56])(this);
    }
    if ((((this->pev->button & 4) != 0) || ((this->pev->flags & 0x4000) != 0)) ||
       ((*(uint *)&this->field_0x848 & 8) != 0)) {
      (*this->vtable[0x57])(this);
    }
    if ((this->pev->flags & 0x200) == 0) {
      *(float *)&this->field_0x828 = -this->pev->velocity[2];
    }
    UpdatePlayerState(this);
    if ((TSGameRules == '\x03') && (*(float *)&this->field_0x794 < gpGlobals->time)) {
      *(float *)&this->field_0x794 = gpGlobals->time + 0.5;
      CheckForWires(this);
    }
    if ((*(float *)&this->field_0x71c < gpGlobals->time) && (this->pev->rendermode != 0)) {
      this->pev->rendermode = 0;
      this->pev->rendercolor[0] = 0.0;
      this->pev->rendercolor[1] = 0.0;
      this->pev->rendercolor[2] = 0.0;
      this->pev->renderamt = 0.0;
      this->pev->renderfx = 0;
    }
    if ((*(float *)&this->field_0x7cc != 0.0) && (*(float *)&this->field_0x7cc < gpGlobals->time)) {
      ClientPrint((int)this->pev,2,"You have been kicked for some reason...\n",0,0,0,0);
      iVar16 = 0;
      iVar15 = 0;
      iVar13 = 0;
      iVar3 = 0;
      puVar7 = UTIL_VarArgs("%s kicked.\n",gpGlobals->pStringBase + this->pev->netname);
      UTIL_ClientPrintAll(1,puVar7,iVar3,iVar13,iVar15,iVar16);
      iVar3 = (*g_engfuncs.pfnGetPlayerUserId)(this->pev->pContainingEntity);
      pcVar4 = UTIL_VarArgs("kick #%i\n",iVar3);
      (*g_engfuncs.pfnServerCommand)(pcVar4);
      *(undefined4 *)&this->field_0x7cc = 0;
    }
    EHANDLE::operator=((EHANDLE *)&this->field_0x130,(int *)0x0);
    if ((*(uint *)&this->field_0x848 & 4) != 0) {
      pvVar10 = &g_vecZero;
      pvVar11 = this->pev->velocity;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar11 = *pvVar10;
        pvVar10 = pvVar10 + 1;
        pvVar11 = pvVar11 + 1;
      }
    }
    if ((0.001 < *(float *)&this->field_0x84c) && (*(float *)&this->field_0x84c < gpGlobals->time))
    {
      *(undefined4 *)&this->field_0x84c = 0;
      this->pev->health = 0.0;
      (*this->vtable[0x18])(this,this->pev,1);
    }
  }
  else {
    peVar5 = this->pev->groundentity;
    if (peVar5 == (edict_t *)0x0) {
      peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    local_94 = (int *)0x0;
    if (peVar5 != (edict_t *)0x0) {
      local_94 = peVar5->pvPrivateData;
    }
    if (local_94 == (int *)0x0) {
      peVar17 = this->pev;
      local_7c = peVar17->origin[0] + 0.0;
      local_78 = peVar17->origin[1] + 0.0;
      local_74 = peVar17->origin[2] + -38.0;
      UTIL_TraceLine(this->pev->origin,&local_7c,1,peVar17->pContainingEntity,local_6c);
      if (((local_5c != 1.0) && (local_3c != 0)) && (local_94 = (int *)0x0, local_3c != 0)) {
        local_94 = *(int **)(local_3c + 0x7c);
      }
      if (((local_94 != (int *)0x0) &&
          (uVar6 = (**(code **)(local_94[0x18] + 0x38))(local_94), (uVar6 & 0x40) != 0)) &&
         (iVar3 = (**(code **)(local_94[0x18] + 0xac))(local_94,this->pev), iVar3 != 0)) {
LAB_000912b0:
        pvVar10 = &g_vecZero;
        pvVar11 = this->pev->velocity;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pvVar11 = *pvVar10;
          pvVar10 = pvVar10 + 1;
          pvVar11 = pvVar11 + 1;
        }
        fVar9 = 0.0;
        if ((*(uint *)&this->field_0x814 & 8) == 0) {
          if ((*(uint *)&this->field_0x814 & 0x10) != 0) {
            fVar9 = -1.0;
            iVar3 = local_94[0x18];
            goto LAB_00091312;
          }
        }
        else {
          fVar9 = 1.0;
          iVar3 = local_94[0x18];
LAB_00091312:
          (**(code **)(iVar3 + 0xe0))(local_94,this,this,2,fVar9);
        }
        if (fVar9 != 0.0) {
          _local_24 = CONCAT22(uStack_22,in_FPUControlWord);
          local_28 = (int)ROUND(*(float *)(*local_94 + 0x1f8));
          uVar6 = TrainSpeed(local_28,*(int *)(*local_94 + 0x184));
          *(uint *)&this->field_0x9bc = uVar6 | 0xc0;
        }
        goto LAB_000913ab;
      }
    }
    else if ((((this->pev->flags & 0x200) != 0) && ((*(byte *)(*local_94 + 0x1a0) & 2) == 0)) &&
            ((this->pev->button & 0x600U) == 0)) goto LAB_000912b0;
    *(uint *)&this->field_0x848 = *(uint *)&this->field_0x848 & 0xfffffffd;
    *(undefined4 *)&this->field_0x9bc = 0xc0;
  }
  return;
}

/* 00091610  CBasePlayer::PostThink  (1775 bytes)
 * undefined PostThink(void)
 */
/* CBasePlayer::PostThink(void) */

void __thiscall CBasePlayer::PostThink(CBasePlayer *this)

{
  undefined1 *this_00;
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  edict_t *peVar4;
  edict_t *peVar5;
  int *piVar6;
  int iVar7;
  vec_t *pvVar8;
  vec_t *pvVar9;
  undefined2 in_FPUControlWord;
  longdouble lVar10;
  float fVar11;
  int local_4c;
  int local_48;
  float local_44;
  vec_t local_3c [6];
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  if ((g_fGameOver != 0) || (iVar3 = (*this->vtable[0x2d])(this), iVar3 == 0)) goto LAB_00091ae0;
  if ((this->pev->iuser4 & 0x80000) != 0) {
    pvVar8 = (vec_t *)&this->field_0x4e0;
    pvVar9 = this->pev->angles;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar9 = *pvVar8;
      pvVar8 = pvVar8 + 1;
      pvVar9 = pvVar9 + 1;
    }
  }
  this_00 = &this->field_0x9c4;
  bVar2 = int((EHANDLE *)this_00);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar3 = EHANDLE::operator->((EHANDLE *)this_00);
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x60) + 0xac))(iVar3,this->pev);
    if ((iVar3 == 0) || (this->pev->weaponmodel != 0)) {
      iVar3 = EHANDLE::operator->((EHANDLE *)&this->field_0x9c4);
      (**(code **)(*(int *)(iVar3 + 0x60) + 0xe0))(iVar3,this,this,0,0);
      EHANDLE::operator=((EHANDLE *)&this->field_0x9c4,(int *)0x0);
    }
    else {
      iVar3 = EHANDLE::operator->((EHANDLE *)this_00);
      (**(code **)(*(int *)(iVar3 + 0x60) + 0xe0))(iVar3,this,this,2,0x40000000);
    }
  }
  ItemPostFrame(this);
  peVar1 = this->pev;
  if ((((peVar1->flags & 0x200) != 0) && (0.0 < peVar1->health)) &&
     (fVar11 = *(float *)&this->field_0x828, 350.0 <= fVar11)) {
    if ((peVar1->watertype != -3) && (680.0 < fVar11)) {
      *(float *)&this->field_0x828 = fVar11 - 680.0;
      fVar11 = (fVar11 - 680.0) * 100.0 * 0.0022522523;
      if (peVar1->health < fVar11) {
        EMIT_SOUND_DYN((int)peVar1->pContainingEntity,3,"common/bodysplat.wav",0x3f800000,0x3f4ccccd
                       ,0,100,0.5);
      }
      if (0.0 < fVar11) {
        peVar4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        (*this->vtable[0x16])
                  (this,(uint)&peVar5->v & (peVar5 == (edict_t *)0x0) - 1,
                   (uint)&peVar4->v & (peVar4 == (edict_t *)0x0) - 1,fVar11,0x1020);
      }
    }
    iVar3 = (*this->vtable[0x2d])(this);
    if (iVar3 != 0) {
      CTSAnimation::Animate((CTSAnimation *)&this->field_0x28c,this,1);
    }
  }
  if ((this->pev->flags & 0x200) != 0) {
    this->pev->gravity = 1.0;
    if ((64.0 < *(float *)&this->field_0x828) &&
       (iVar3 = (**(code **)(*g_pGameRules + 0x1c))(g_pGameRules), iVar3 == 0)) {
      _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
      local_24 = (int)ROUND(*(float *)&this->field_0x828);
      CSoundEnt::InsertSound(4,this->pev->origin,local_24,0.2);
    }
    *(undefined4 *)&this->field_0x828 = 0;
    if ((this->pev->iuser4 & 0x100000) != 0) {
      UTIL_ScreenShake(this->pev->origin,20.0,30.0,0.3,512.0);
      piVar6 = &this->pev->iuser4;
      *piVar6 = *piVar6 & 0xffefffff;
      bVar2 = false;
      if ((this->pev->button & 4) != 0) {
        *(float *)&this->field_0x4fc = gpGlobals->time + 0.3;
        iVar3 = CTSStunt::GoRoll((int)&this->field_0x4f0);
        if (iVar3 != 0) {
          bVar2 = true;
          lVar10 = UTIL_WeaponTimeBase();
          *(float *)&this->field_0x12c = (float)(lVar10 + (longdouble)0.75);
        }
      }
      if (!bVar2) {
        peVar4 = this->pev->pContainingEntity;
        fVar11 = 0.5;
        iVar3 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN((int)peVar4,4,"player/superjump-land.wav",0x3f800000,0x3f4ccccd,0,
                       iVar3 + 0x5f,fVar11);
        piVar6 = &this->pev->iuser4;
        *piVar6 = *piVar6 | 4;
        piVar6 = &this->pev->iuser4;
        *piVar6 = *piVar6 | 1;
        local_3c[0] = 0.0;
        local_3c[1] = 0.0;
        local_3c[2] = 16.0;
        pvVar8 = local_3c;
        pvVar9 = this->pev->view_ofs;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pvVar9 = *pvVar8;
          pvVar8 = pvVar8 + 1;
          pvVar9 = pvVar9 + 1;
        }
        *(undefined4 *)&this->field_0x4f4 = 0x3f400000;
        CTSAnimation::Animate((CTSAnimation *)&this->field_0x28c,this,0x3a);
      }
    }
  }
  iVar3 = (*this->vtable[0x2d])(this);
  if (iVar3 != 0) {
    if (this->pev->velocity[0] == 0.0) {
      if (this->pev->velocity[1] != 0.0) {
        if (((this->pev->velocity[0] == 0.0) && (this->pev->velocity[1] == 0.0)) &&
           (this->pev->waterlevel < 2)) goto LAB_00091aae;
        goto LAB_00091a99;
      }
      iVar3 = 6;
    }
    else {
LAB_00091a99:
      iVar3 = 1;
    }
    CTSAnimation::Animate((CTSAnimation *)&this->field_0x28c,this,iVar3);
  }
LAB_00091aae:
  CBaseAnimating::StudioFrameAdvance((CBaseAnimating *)this,0.0);
  CheckPowerups((int)this->pev);
  UpdatePlayerSound(this);
  *(int *)&this->field_0x810 = this->pev->button;
LAB_00091ae0:
  lVar10 = (longdouble)(*this->vtable[4])(this);
  lVar10 = lVar10 * (longdouble)gpGlobals->frametime;
  if ((*(uint *)&this->field_0x724 & 0x10) != 0) {
    lVar10 = lVar10 * (longdouble)1.5;
  }
  local_44 = (float)lVar10;
  local_48 = 0;
  local_4c = 0x9f0;
  do {
    if (*(int *)(&this->field_0x8 + local_4c) != 0) {
      iVar3 = *(int *)(&this->field_0x8 + local_4c);
      do {
        piVar6 = (int *)(**(code **)(*(int *)(iVar3 + 0x60) + 0x158))(iVar3);
        if ((piVar6 != (int *)0x0) &&
           (iVar7 = (**(code **)(piVar6[0x18] + 0x198))(piVar6), iVar7 != 0)) {
          fVar11 = (float)piVar6[0x27] - local_44;
          if (fVar11 < -1.0) {
            fVar11 = -1.0;
          }
          piVar6[0x27] = (int)fVar11;
          fVar11 = (float)piVar6[0x28] - local_44;
          if (fVar11 < -0.001) {
            fVar11 = -0.001;
          }
          piVar6[0x28] = (int)fVar11;
          fVar11 = (float)piVar6[0x29] - local_44;
          if (fVar11 < -0.001) {
            fVar11 = -0.001;
          }
          piVar6[0x29] = (int)fVar11;
          if ((float)piVar6[0x2a] != 1000.0) {
            fVar11 = (float)piVar6[0x2a] - local_44;
            if (fVar11 < -0.001) {
              fVar11 = -0.001;
            }
            piVar6[0x2a] = (int)fVar11;
          }
          fVar11 = *(float *)(*piVar6 + 0x254);
          if (fVar11 != 1000.0) {
            fVar11 = fVar11 - local_44;
            if (fVar11 < -0.001) {
              fVar11 = -0.001;
            }
            *(float *)(*piVar6 + 0x254) = fVar11;
          }
        }
        iVar3 = *(int *)(iVar3 + 0x84);
      } while (iVar3 != 0);
    }
    local_4c = local_4c + 4;
    local_48 = local_48 + 1;
  } while (local_48 < 6);
  fVar11 = *(float *)&this->field_0x12c - local_44;
  *(float *)&this->field_0x12c = fVar11;
  if (fVar11 < -0.001) {
    *(undefined4 *)&this->field_0x12c = 0xba83126f;
  }
  if ((*(float *)&this->field_0xb84 != 1000.0) &&
     (fVar11 = *(float *)&this->field_0xb84 - local_44, *(float *)&this->field_0xb84 = fVar11,
     fVar11 < -0.001)) {
    *(undefined4 *)&this->field_0xb84 = 0xba83126f;
  }
  if ((*(float *)&this->field_0xb7c != 1000.0) &&
     (local_44 = *(float *)&this->field_0xb7c - local_44, *(float *)&this->field_0xb7c = local_44,
     local_44 < -0.001)) {
    *(undefined4 *)&this->field_0xb7c = 0xba83126f;
  }
  return;
}

/* 00091d00  CBasePlayer::UpdateClientData  (2193 bytes)
 * undefined UpdateClientData(void)
 */
/* CBasePlayer::UpdateClientData(void) */

void __thiscall CBasePlayer::UpdateClientData(CBasePlayer *this)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(float *)&this->field_0x534 <= gpGlobals->time) && (0.0 <= *(float *)&this->field_0x534)) {
    *(float *)&this->field_0x534 = gpGlobals->time + 0.1;
    if (*(int *)&this->field_0x9b4 != 0) {
      *(undefined4 *)&this->field_0x9b4 = 0;
      gInitHUD = 0;
      (*g_engfuncs.pfnMessageBegin)(1,gmsgResetHUD,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
      if (*(int *)&this->field_0x9b8 == 0) {
        (*g_engfuncs.pfnMessageBegin)(1,gmsgInitHUD,(float *)0x0,this->pev->pContainingEntity);
        (*g_engfuncs.pfnMessageEnd)();
        (**(code **)(*g_pGameRules + 0x34))(g_pGameRules,this);
        CTSGameRules::InitHUD((CTSGameRules *)&TSGameRules,this);
        *(undefined4 *)&this->field_0x9b8 = 1;
        iVar3 = (**(code **)(*g_pGameRules + 0x1c))(g_pGameRules);
        if (iVar3 != 0) {
          FireTargets(0x1094d7,this,this,3,0);
        }
      }
      FireTargets(0x1094e7,this,this,3,0);
      if ((DAT_001781a8 != 0.0) && (DAT_001781b0 != '\0')) {
        (*g_engfuncs.pfnMessageBegin)(1,gmsgTSRoundTime,(float *)0x0,this->pev->pContainingEntity);
        fVar1 = DAT_001781a8 - gpGlobals->time;
        if (fVar1 < 0.0) {
          fVar1 = 0.0;
        }
        (*g_engfuncs.pfnWriteByte)((int)ROUND(fVar1));
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
      if ((DAT_0017da25 != '\0') && (this->field_0x74f != '\0')) {
        (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,this->pev->pContainingEntity);
        (*g_engfuncs.pfnWriteShort)(0x100);
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
    }
    if (*(int *)&this->field_0x9e8 != *(int *)&this->field_0x9ec) {
      (*g_engfuncs.pfnMessageBegin)(1,gmsgHideWeapon,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x9e8);
      (*g_engfuncs.pfnMessageEnd)();
      *(undefined4 *)&this->field_0x9ec = *(undefined4 *)&this->field_0x9e8;
    }
    if ((float)*(int *)&this->field_0x9e0 != this->pev->health) {
      fVar1 = this->pev->health;
      if (fVar1 < 0.0) {
        fVar1 = 0.0;
      }
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSHealth,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)((int)ROUND(fVar1));
      (*g_engfuncs.pfnMessageEnd)();
      *(int *)&this->field_0x9e0 = (int)ROUND(this->pev->health);
    }
    if ((float)*(int *)&this->field_0x9e4 != this->pev->armorvalue) {
      *(int *)&this->field_0x9e4 = (int)ROUND(this->pev->armorvalue);
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSArmor,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)((int)ROUND(this->pev->armorvalue));
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((*(uint *)&this->field_0x9bc & 0xc0) != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTrain,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(*(uint *)&this->field_0x9bc & 0xf);
      (*g_engfuncs.pfnMessageEnd)();
      *(uint *)&this->field_0x9bc = *(uint *)&this->field_0x9bc & 0xffffff3f;
    }
    if (this->field_0x498 != this->field_0x499) {
      this->field_0x499 = this->field_0x498;
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSState,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)((uint)(byte)this->field_0x498);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (*(int *)&this->field_0x540 != *(int *)&this->field_0x544) {
      *(int *)&this->field_0x544 = *(int *)&this->field_0x540;
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSCash,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x540);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (*(int *)&this->field_0x548 != *(int *)&this->field_0x54c) {
      *(int *)&this->field_0x54c = *(int *)&this->field_0x548;
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSSpace,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x548);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((*(int *)&this->field_0x738 != *(int *)&this->field_0x728) ||
       (*(int *)&this->field_0x734 != *(int *)&this->field_0x730)) {
      *(undefined4 *)&this->field_0x738 = *(undefined4 *)&this->field_0x728;
      *(undefined4 *)&this->field_0x734 = *(undefined4 *)&this->field_0x730;
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x728);
      (*g_engfuncs.pfnWriteByte)
                (*(uint *)&this->field_0x730 &
                 0xffffffffU - ((int)*(uint *)&this->field_0x730 >> 0x1f));
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((*(uint *)&this->field_0x724 & 8) == 0) {
      if ((*(uint *)&this->field_0x724 & 1) == 0) {
        fVar1 = *(float *)&this->field_0x170;
      }
      else {
        fVar1 = 0.35;
      }
    }
    else {
      fVar1 = 0.225;
    }
    if (fVar1 != *(float *)&this->field_0x16c) {
      *(float *)&this->field_0x16c = fVar1;
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSSlowAmt,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0x16c * 100.0);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (this->field_0x174 != this->field_0x175) {
      this->field_0x174 = this->field_0x175;
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSBulletTime,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)((int)(char)this->field_0x174);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((((*(int *)&this->field_0xa10 != 0) && (iVar3 = (*this->vtable[0x2d])(this), iVar3 != 0)) &&
        (*(int *)&(*(CTSGun **)&this->field_0xa10)->field_0x88 == 0x10)) &&
       (bVar2 = this->field_0x720, uVar4 = CTSGun::GetActiveItems(*(CTSGun **)&this->field_0xa10),
       bVar2 != uVar4)) {
      uVar4 = CTSGun::GetActiveItems(*(CTSGun **)&this->field_0xa10);
      this->field_0x720 = (char)uVar4;
      (*g_engfuncs.pfnMessageBegin)(2,gmsgTSActiveItems,(float *)0x0,(edict_t *)0x0);
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(iVar3);
      (*g_engfuncs.pfnWriteByte)((uint)(byte)this->field_0x720);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (this->field_0x74d != this->field_0x74c) {
      this->field_0x74d = this->field_0x74c;
      (*g_engfuncs.pfnMessageBegin)(2,gmsgTSPlayerAward,(float *)0x0,(edict_t *)0x0);
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(iVar3);
      (*g_engfuncs.pfnWriteByte)((uint)(byte)this->field_0x74c);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((this->field_0x78c != this->field_0x78f) ||
       (*(short *)&this->field_0x78d != (short)*(undefined4 *)&this->field_0x790)) {
      this->field_0x78f = this->field_0x78c;
      this->field_0x790 = this->field_0x78d;
      this->field_0x791 = this->field_0x78e;
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSWires,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)((uint)(byte)this->field_0x78c);
      (*g_engfuncs.pfnWriteByte)((uint)(byte)this->field_0x78d);
      (*g_engfuncs.pfnWriteByte)((uint)(byte)this->field_0x78e);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((*(int *)&this->field_0xa10 != 0) && (*(int *)(*(int *)&this->field_0xa10 + 0x88) == 0x10))
    {
      (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x154))
                (*(undefined4 *)&this->field_0xa10,this);
    }
    *(undefined4 *)&this->field_0xa14 = *(undefined4 *)&this->field_0xa10;
    *(undefined4 *)&this->field_0x9f4 = *(undefined4 *)&this->field_0x9f0;
  }
  return;
}

/* 00092594  CBasePlayer::ForceClientDllUpdate  (263 bytes)
 * undefined ForceClientDllUpdate(void)
 */
/* CBasePlayer::ForceClientDllUpdate(void) */

void __thiscall CBasePlayer::ForceClientDllUpdate(CBasePlayer *this)

{
  int iValue;
  
  *(undefined4 *)&this->field_0x9e0 = 0xffffffff;
  *(undefined4 *)&this->field_0x9e4 = 0xffffffff;
  *(uint *)&this->field_0x9bc = *(uint *)&this->field_0x9bc | 0xc0;
  *(undefined4 *)&this->field_0x9c0 = 0;
  *(undefined4 *)&this->field_0x840 = 0;
  this->field_0x499 = 0xff;
  *(undefined4 *)&this->field_0x54c = 0xffffffff;
  *(undefined4 *)&this->field_0x544 = 0xffffffff;
  this->field_0x720 = 0;
  *(undefined4 *)&this->field_0x738 = 0xff;
  *(undefined4 *)&this->field_0x734 = 0;
  *(undefined4 *)&this->field_0x16c = 0xbf800000;
  this->field_0x174 = 0xff;
  *(undefined4 *)&this->field_0x534 = 0;
  (*this->vtable[0x5b])(this);
  (*g_engfuncs.pfnMessageBegin)(1,gmsgSpectator,(float *)0x0,this->pev->pContainingEntity);
  iValue = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteByte)((uint)(this->pev->deadflag == 3));
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 0009269c  CBasePlayer::SendAmmoUpdate  (349 bytes)
 * undefined SendAmmoUpdate(void)
 */
/* CBasePlayer::SendAmmoUpdate(void) */

void __thiscall CBasePlayer::SendAmmoUpdate(CBasePlayer *this)

{
  int iVar1;
  int *piVar2;
  undefined1 *local_24;
  int *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_14;
  
  local_14 = 0;
  piVar2 = (int *)&this->field_0xaa0;
  local_24 = (undefined1 *)piVar2;
  local_20 = piVar2;
  local_1c = (undefined1 *)piVar2;
  local_18 = (undefined1 *)piVar2;
  do {
    if (*(int *)(local_24 + -0x80) != *piVar2) {
      *local_20 = *(int *)(local_24 + -0x80);
      (*g_engfuncs.pfnMessageBegin)(1,gmsgAmmoX,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(local_14);
      if (*(int *)(local_1c + -0x80) < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_18 + -0x80);
        if (0xfe < iVar1) {
          iVar1 = 0xfe;
        }
      }
      (*g_engfuncs.pfnWriteByte)(iVar1);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (*(int *)(local_24 + -0x7c) != piVar2[1]) {
      local_20[1] = *(int *)(local_24 + -0x7c);
      (*g_engfuncs.pfnMessageBegin)(1,gmsgAmmoX,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(local_14 + 1);
      if (*(int *)(local_1c + -0x7c) < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_18 + -0x7c);
        if (0xfe < iVar1) {
          iVar1 = 0xfe;
        }
      }
      (*g_engfuncs.pfnWriteByte)(iVar1);
      (*g_engfuncs.pfnMessageEnd)();
    }
    local_18 = local_18 + 8;
    local_1c = local_1c + 8;
    local_20 = local_20 + 2;
    piVar2 = piVar2 + 2;
    local_24 = local_24 + 8;
    local_14 = local_14 + 2;
  } while (local_14 < 0x20);
  return;
}

/* 000927fc  CBasePlayer::Duck  (101 bytes)
 * undefined Duck(void)
 */
/* CBasePlayer::Duck(void) */

void __thiscall CBasePlayer::Duck(CBasePlayer *this)

{
  int iVar1;
  
  if (((this->field_0x814 & 4) != 0) &&
     (iVar1 = CTSStunt::GoRoll((int)&this->field_0x4f0), iVar1 != 0)) {
    return;
  }
  if (((this->pev->button & 4) != 0) && ((this->pev->flags & 0x4000) == 0)) {
    CTSAnimation::Animate((CTSAnimation *)&this->field_0x28c,this,5);
  }
  return;
}

/* 00092864  CBasePlayer::Jump  (249 bytes)
 * undefined Jump(void)
 */
/* CBasePlayer::Jump(void) */

void __thiscall CBasePlayer::Jump(CBasePlayer *this)

{
  entvars_t *peVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  vec_t *pvVar5;
  float local_2c [7];
  
  if (((this->pev->flags & 0x800) == 0) && (this->pev->waterlevel < 2)) {
    iVar2 = CTSStunt::CloseAttack((CTSStunt *)&this->field_0x4f0);
    if (iVar2 == 0) {
      if (((this->field_0x814 & 2) != 0) &&
         (iVar2 = CTSStunt::GoWheel((CTSStunt *)&this->field_0x4f0), iVar2 != 0)) {
        return;
      }
      if ((((this->field_0x814 & 2) != 0) && ((this->pev->flags & 0x200) != 0)) &&
         (this->pev->groundentity != (edict_t *)0x0)) {
        CTSAnimation::Animate((CTSAnimation *)&this->field_0x28c,this,4);
        peVar1 = this->pev;
        uVar3 = (peVar1->groundentity == (edict_t *)0x0) - 1 & (uint)&peVar1->groundentity->v;
        if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0x1a4) & 4) != 0)) {
          local_2c[0] = peVar1->velocity[0] + peVar1->basevelocity[0];
          local_2c[1] = peVar1->velocity[1] + peVar1->basevelocity[1];
          local_2c[2] = peVar1->velocity[2] + peVar1->basevelocity[2];
          pfVar4 = local_2c;
          pvVar5 = peVar1->velocity;
          for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pvVar5 = *pfVar4;
            pfVar4 = pfVar4 + 1;
            pvVar5 = pvVar5 + 1;
          }
        }
      }
    }
  }
  return;
}

/* 00092960  CBasePlayer::GiveSlowMul  (41 bytes)
 * undefined GiveSlowMul(void)
 */
/* CBasePlayer::GiveSlowMul(void) */

void __thiscall CBasePlayer::GiveSlowMul(CBasePlayer *this)

{
  FixedSlowAmt(this->pev->fuser1);
  return;
}

/* 0009298c  CBasePlayer::InSlow  (67 bytes)
 * undefined4 InSlow(void)
 */
/* CBasePlayer::InSlow(void) */

undefined4 __thiscall CBasePlayer::InSlow(CBasePlayer *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(float *)&this->field_0x168 != 1.0) || (*(float *)&this->field_0x170 != 1.0)) {
    uVar1 = 1;
  }
  return uVar1;
}

/* 000929d0  CBasePlayer::GoSlow  (54 bytes)
 * undefined GoSlow(CBasePlayer * this, undefined4 param_2, CBasePlayer param_3)
 */
/* CBasePlayer::GoSlow(float, char) */

void __thiscall CBasePlayer::GoSlow(void *this,undefined4 param_2,undefined1 param_3)

{
  if (*(int *)(*(int *)this + 0x244) == 0) {
    *(undefined4 *)((int)this + 0x168) = param_2;
  }
  else {
    *(undefined4 *)((int)this + 0x168) = 0x3f800000;
  }
  *(undefined4 *)((int)this + 0x170) = param_2;
  *(undefined1 *)((int)this + 0x175) = param_3;
  return;
}

/* 00092a08  CBasePlayer::UpdatePlayerState  (64 bytes)
 * undefined UpdatePlayerState(void)
 */
/* CBasePlayer::UpdatePlayerState(void) */

void __thiscall CBasePlayer::UpdatePlayerState(CBasePlayer *this)

{
  if ((this->pev->iuser4 & 0x30U) != 0) {
    this->field_0x498 = 2;
    return;
  }
  if ((this->pev->flags & 0x4000) != 0) {
    this->field_0x498 = 1;
    return;
  }
  if ((this->pev->flags & 0x4000) == 0) {
    this->field_0x498 = 0;
  }
  return;
}

/* 00092a4c  CBasePlayer::TSInit  (1208 bytes)
 * undefined TSInit(void)
 */
/* CBasePlayer::TSInit(void) */

void __thiscall CBasePlayer::TSInit(CBasePlayer *this)

{
  int iVar1;
  char *pcVar2;
  entvars_t *peVar3;
  undefined4 *puVar4;
  longdouble lVar5;
  float local_3c;
  float local_38;
  undefined4 local_34;
  
  CTSAnimation::Init((CTSAnimation *)&this->field_0x28c);
  CTSStunt::Init((CTSStunt *)&this->field_0x4f0,this);
  this->pev->fuser1 = 1.0;
  *(undefined4 *)&this->field_0x168 = 0x3f800000;
  *(undefined4 *)&this->field_0x170 = 0x3f800000;
  *(undefined4 *)&this->field_0x16c = 0xbf800000;
  this->field_0x175 = 0;
  this->field_0x174 = 0xff;
  this->field_0x498 = 0;
  this->field_0x499 = 0xff;
  *(undefined4 *)&this->field_0x9e0 = 0xffffffff;
  this->pev->iuser4 = 0;
  SetPlayerSpeed(this,330.0);
  *(undefined4 *)&this->field_0x548 = 0x51;
  *(undefined4 *)&this->field_0x54c = 0xffffffff;
  *(undefined4 *)&this->field_0x544 = 0xffffffff;
  *(undefined4 *)&this->field_0x534 = 0;
  *(float *)&this->field_0x71c = gpGlobals->time + 1.0;
  lVar5 = UTIL_WeaponTimeBase();
  *(float *)&this->field_0x12c = (float)((longdouble)1.0 + lVar5);
  this->pev->renderamt = 125.0;
  this->pev->rendermode = 1;
  this->pev->rendercolor[0] = 0.0;
  this->pev->rendercolor[1] = 0.0;
  this->pev->rendercolor[2] = 0.0;
  this->pev->renderfx = 0xe;
  local_3c = 200.0;
  local_34 = 0x437a0000;
  local_38 = local_3c;
  UTIL_ScreenFade((int *)this,&local_3c,0.2,*(float *)&this->field_0x71c - gpGlobals->time,0x19,0);
  *(undefined4 *)&this->field_0x164 = 0;
  this->field_0x720 = 0;
  *(undefined4 *)&this->field_0x724 = 0;
  *(undefined4 *)&this->field_0x728 = 0;
  *(undefined4 *)&this->field_0x72c = 0;
  *(undefined4 *)&this->field_0x730 = 0;
  *(undefined4 *)&this->field_0x734 = 0;
  *(undefined4 *)&this->field_0x738 = 0xff;
  *(undefined4 *)&this->field_0x740 = 0;
  this->field_0x744 = 0;
  *(undefined4 *)&this->field_0x748 = 0;
  this->field_0x74c = 0;
  this->field_0x74d = 0xff;
  this->field_0x74e = 0;
  if (DAT_0017da25 == '\0') {
    this->field_0x74f = 0;
    peVar3 = this->pev;
    pcVar2 = "0";
  }
  else {
    this->field_0x74f = 1;
    peVar3 = this->pev;
    pcVar2 = "1";
  }
  (*g_engfuncs.pfnSetPhysicsKeyValue)(peVar3->pContainingEntity,"mj",pcVar2);
  *(undefined4 *)&this->field_0x750 = 0;
  *(undefined4 *)&this->field_0x754 = 0;
  if ((this->pev->iuser1 != 0) || (this->pev->iuser2 != 0)) {
    (*g_engfuncs.pfnMessageBegin)(2,gmsgSpectator,(float *)0x0,(edict_t *)0x0);
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteByte)(iVar1);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
    peVar3 = this->pev;
    peVar3->iuser2 = 0;
    peVar3->iuser1 = 0;
  }
  *(undefined4 *)&this->field_0x4dc = 0;
  *(undefined4 *)&this->field_0x4ec = 0;
  *(undefined4 *)&this->field_0x718 = 0;
  *(undefined4 *)&this->field_0x770 = 0;
  *(undefined4 *)&this->field_0x7bc = 0;
  *(undefined4 *)&this->field_0x788 = 0;
  this->field_0x78c = 0;
  this->field_0x78f = 0;
  this->field_0x78d = 0;
  this->field_0x790 = 0;
  this->field_0x78e = 0;
  this->field_0x791 = 0;
  *(undefined4 *)&this->field_0x794 = 0;
  *(undefined4 *)&this->field_0x774 = 0x42c80000;
  *(undefined4 *)&this->field_0x798 = 0;
  *(undefined4 *)&this->field_0x79c = 0;
  *(undefined4 *)&this->field_0x7a0 = 0;
  this->field_0x7a4 = 0;
  *(undefined4 *)&this->field_0x7a8 = 0;
  *(undefined4 *)&this->field_0x7ac = 0;
  *(undefined4 *)&this->field_0x7b0 = 0;
  *(undefined4 *)&this->field_0x7b4 = 0;
  if (this->field_0x7b9 != '\0') {
    DAT_0017da18 = 0;
  }
  this->field_0x7b9 = 0;
  *(undefined4 *)&this->field_0x73c = 0;
  puVar4 = (undefined4 *)&this->field_0x184;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)&this->field_0x17c = 0;
  *(undefined4 *)&this->field_0x180 = 0;
  *(undefined4 *)&this->field_0x178 = 0;
  puVar4 = (undefined4 *)&this->field_0x208;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  this->field_0x288 = 0;
  *(undefined4 *)&this->field_0x77c = 0;
  *(undefined4 *)&this->field_0x780 = 0;
  *(undefined4 *)&this->field_0x784 = 0;
  *(undefined4 *)&this->field_0x778 = 0;
  *(undefined4 *)&this->field_0x7c0 = 0;
  puVar4 = (undefined4 *)&this->field_0x7d0;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = (*g_engfuncs.pfnGetInfoKeyBuffer)(this->pev->pContainingEntity);
  PlayerIsCheating((uint)this,pcVar2);
  peVar3 = this->pev;
  peVar3->gaitsequence = 0;
  peVar3->sequence = 0;
  this->pev->frame = 0.0;
  CBaseAnimating::ResetSequenceInfo((CBaseAnimating *)this);
  *(undefined4 *)&this->field_0x84c = 0;
  return;
}

/* 00092f08  CBasePlayer::CheckForWires  (171 bytes)
 * undefined CheckForWires(void)
 */
/* CBasePlayer::CheckForWires(void) */

void __thiscall CBasePlayer::CheckForWires(CBasePlayer *this)

{
  char cVar1;
  int iVar2;
  CTSObjective *this_00;
  
  this->field_0x78c = 0;
  this->field_0x78d = 0;
  this->field_0x78e = 0;
  this_00 = (CTSObjective *)0x0;
  while( true ) {
    this_00 = (CTSObjective *)UTIL_FindEntityInSphere((int *)this_00,this->pev->origin,0x42800000);
    if (this_00 == (CTSObjective *)0x0) break;
    iVar2 = strcmp(gpGlobals->pStringBase + this_00->pev->classname,"ts_bomb");
    if ((iVar2 == 0) && (*(char *)&this_00[1].pev != '\0')) {
      cVar1 = CTSObjective::CanInteract(this_00,(int)this);
      if (cVar1 != '\0') {
        this->field_0x78c = this_00[1].field_0x18;
        this->field_0x78d = this_00[1].field_0x19;
        this->field_0x78e = this_00[1].field_0x1a;
      }
    }
  }
  return;
}

/* 00092fb4  CBasePlayer::CutWire  (178 bytes)
 * undefined CutWire(uint param_1)
 */
/* CBasePlayer::CutWire(int) */

void __thiscall CBasePlayer::CutWire(CBasePlayer *this,uint param_1)

{
  int iVar1;
  CTSBomb *this_00;
  
  iVar1 = (*this->vtable[0x2d])(this);
  if ((iVar1 != 0) && (this->pev->iuser1 == 0)) {
    this->field_0x78c = 0;
    this->field_0x78d = 0;
    this->field_0x78e = 0;
    this_00 = (CTSBomb *)0x0;
    while( true ) {
      this_00 = (CTSBomb *)UTIL_FindEntityInSphere((int *)this_00,this->pev->origin,0x42800000);
      if (this_00 == (CTSBomb *)0x0) break;
      iVar1 = strcmp(gpGlobals->pStringBase + this_00->pev->classname,"ts_bomb");
      if (iVar1 == 0) {
        CTSBomb::CutWire(this_00,param_1,(int)this);
      }
    }
  }
  return;
}

/* 00093068  CBasePlayer::SetPlayerSpeed  (164 bytes)
 * undefined SetPlayerSpeed(float param_1)
 */
/* CBasePlayer::SetPlayerSpeed(float) */

void __thiscall CBasePlayer::SetPlayerSpeed(CBasePlayer *this,float param_1)

{
  *(float *)&this->field_0x550 = param_1;
  if (330.0 < param_1) {
    *(undefined4 *)&this->field_0x550 = 0x43a50000;
  }
  if (*(float *)&this->field_0x550 < 0.0) {
    *(undefined4 *)&this->field_0x550 = 0;
  }
  (*g_engfuncs.pfnSetClientMaxspeed)
            (this->pev->pContainingEntity,(float)(int)ROUND(*(float *)&this->field_0x550));
  return;
}

/* 0009310c  CBasePlayer::GiveCash  (62 bytes)
 * undefined4 GiveCash(int param_1)
 */
/* CBasePlayer::GiveCash(int) */

undefined4 __thiscall CBasePlayer::GiveCash(CBasePlayer *this,int param_1)

{
  *(int *)&this->field_0x540 = *(int *)&this->field_0x540 + param_1;
  if (*(int *)&this->field_0x540 < 0) {
    *(undefined4 *)&this->field_0x540 = 0;
  }
  if (30000 < *(int *)&this->field_0x540) {
    *(undefined4 *)&this->field_0x540 = 30000;
  }
  return *(undefined4 *)&this->field_0x540;
}

/* 0009314c  CBasePlayer::PickUpWeapon  (506 bytes)
 * undefined4 PickUpWeapon(uint param_1, undefined4 * param_2, uint param_3, char param_4, char param_5)
 */
/* CBasePlayer::PickUpWeapon(tsweapon_t, void *, int, bool, bool) */

undefined4 __thiscall
CBasePlayer::PickUpWeapon
          (CBasePlayer *this,uint param_1,undefined4 *param_2,uint param_3,char param_4,char param_5
          )

{
  CTSGun *this_00;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longdouble lVar4;
  longdouble extraout_ST0;
  uint uVar5;
  
  this_00 = *(CTSGun **)&this->field_0xa10;
  if (((this_00 != (CTSGun *)0x0) && (*(int *)&this_00->field_0x88 == 0x10)) &&
     ((puVar1 = get_weapon_info(param_1), *(char *)(puVar1 + 0xd2) != '\x04' || (puVar1[0x33] == -1)
      ))) {
    lVar4 = (longdouble)*(byte *)(puVar1 + 0x34);
    if ((*(char *)(puVar1 + 0x37) != '\0') && (param_2 != (undefined4 *)0x0)) {
      lVar4 = lVar4 * (longdouble)(int)param_2[1];
    }
    iVar3 = (int)ROUND((longdouble)*(int *)&this->field_0x548 - lVar4);
    if ((-1 < iVar3) && (iVar2 = CTSGun::TakeWeapon(this_00,param_1,param_2,param_3), iVar2 != 0)) {
      if ((param_5 != '\0') &&
         ((EHANDLE::operator=((EHANDLE *)(&this_00->field_0x144 + param_1 * 0x38),(int *)this),
          puVar1[0x32] != -1 && ((&this_00->field_0x114)[puVar1[0x32] * 0x38] != '\0')))) {
        EHANDLE::operator=((EHANDLE *)(&this_00->field_0x144 + puVar1[0x32] * 0x38),(int *)this);
      }
      *(int *)&this->field_0x548 = iVar3;
      GetSpeedBySlots((int)this);
      SetPlayerSpeed(this,(float)extraout_ST0);
      uVar5 = 0;
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"items/gunpickup2.wav",0x3f800000,
                     0x3f4ccccd,0,100,0.5);
      if ((param_4 != '\0') || (*(int *)&this_00->field_0xcc == 0)) {
        if ((puVar1[0x32] != -1) && ((&this_00->field_0x114)[puVar1[0x32] * 0x38] != '\0')) {
          param_1 = puVar1[0x32];
        }
        uVar5 = uVar5 & 0xffff0000;
        iVar3 = CTSGun::SelectWeapon(this_00,param_1);
        if (iVar3 != 0) {
          (*this_00->vtable[0x4a])(this_00,param_1,uVar5);
        }
      }
      return 1;
    }
  }
  return 0;
}

/* 0009334c  CBasePlayer::DropFlag  (1251 bytes)
 * undefined DropFlag(char param_1)
 */
/* CBasePlayer::DropFlag(bool) */

void __thiscall CBasePlayer::DropFlag(CBasePlayer *this,char param_1)

{
  entvars_t *peVar1;
  CTSFlag *pCVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  vec_t *pvVar6;
  float *pfVar7;
  vec_t *pvVar8;
  undefined4 *puVar9;
  longdouble extraout_ST0;
  float local_b0;
  vec_t local_ac;
  vec_t local_a8;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c [4];
  float local_3c;
  float local_38;
  float local_34;
  float local_2c [7];
  
  if (this->field_0x7d0 != '\0') {
    *(int *)&this->field_0x548 = *(int *)&this->field_0x548 + 0x14;
    GetSpeedBySlots((int)this);
    SetPlayerSpeed(this,(float)extraout_ST0);
    if (param_1 == '\0') {
      local_3c = 16.0;
      local_38 = 0.0;
      local_34 = local_38;
      pCVar2 = CTSFlag::CreateFlag((int *)this,(undefined4 *)&this->field_0x7d0);
      iVar3 = (*this->vtable[0x2d])(this);
      if (iVar3 == 0) {
        iVar3 = (*g_engfuncs.pfnRandomLong)(-0x3c,0x3c);
        local_2c[0] = (float)iVar3;
        iVar3 = (*g_engfuncs.pfnRandomLong)(-0xb4,0xb4);
        local_2c[1] = (float)iVar3;
        local_2c[2] = 0.0;
        iVar3 = (*g_engfuncs.pfnRandomLong)(0x3c,0xa0);
        local_b0 = (float)iVar3;
      }
      else {
        pvVar6 = this->pev->v_angle;
        pfVar7 = local_2c;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pvVar6;
          pvVar6 = pvVar6 + 1;
          pfVar7 = pfVar7 + 1;
        }
        local_b0 = (90.0 - local_2c[0]) + (90.0 - local_2c[0]);
      }
      UTIL_MakeVectors(local_2c);
      peVar1 = this->pev;
      local_7c = peVar1->origin[0] + peVar1->view_ofs[0];
      local_78 = peVar1->origin[1] + peVar1->view_ofs[1];
      local_74 = peVar1->origin[2] + peVar1->view_ofs[2];
      local_8c = local_3c * gpGlobals->v_forward[0];
      local_88 = local_3c * gpGlobals->v_forward[1];
      local_84 = local_3c * gpGlobals->v_forward[2];
      local_6c = local_7c + local_8c;
      local_68 = local_78 + local_88;
      local_64 = local_74 + local_84;
      local_9c = local_38 * gpGlobals->v_right[0];
      local_98 = local_38 * gpGlobals->v_right[1];
      local_94 = local_38 * gpGlobals->v_right[2];
      local_5c = local_6c + local_9c;
      local_58 = local_68 + local_98;
      local_54 = local_64 + local_94;
      local_ac = 0.0;
      local_a4 = local_34;
      local_4c[0] = local_5c + 0.0;
      local_4c[1] = local_58 + 0.0;
      local_4c[2] = local_54 + local_34;
      pvVar6 = local_4c;
      pvVar8 = pCVar2->pev->origin;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar8 = *pvVar6;
        pvVar6 = pvVar6 + 1;
        pvVar8 = pvVar8 + 1;
      }
      pvVar6 = (vec_t *)&g_vecZero;
      pvVar8 = pCVar2->pev->angles;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar8 = *pvVar6;
        pvVar6 = pvVar6 + 1;
        pvVar8 = pvVar8 + 1;
      }
      local_a8 = local_ac;
      iVar3 = (*g_engfuncs.pfnRandomLong)(-300,300);
      pCVar2->pev->avelocity[1] = (float)iVar3;
      iVar3 = (*g_engfuncs.pfnRandomLong)(-300,300);
      pCVar2->pev->avelocity[2] = (float)iVar3;
      peVar1 = this->pev;
      local_8c = peVar1->velocity[0] * 0.9;
      local_88 = peVar1->velocity[1] * 0.9;
      local_84 = peVar1->velocity[2] * 0.9;
      local_7c = local_b0 * gpGlobals->v_forward[0];
      local_78 = local_b0 * gpGlobals->v_forward[1];
      local_74 = local_b0 * gpGlobals->v_forward[2];
      local_9c = local_8c + local_7c;
      local_98 = local_88 + local_78;
      local_94 = local_84 + local_74;
      local_64 = local_b0 * 0.33;
      local_6c = 0.0;
      local_ac = local_9c + 0.0;
      local_a8 = local_98 + 0.0;
      local_a4 = local_94 + local_64;
      pvVar6 = &local_ac;
      pvVar8 = pCVar2->pev->velocity;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar8 = *pvVar6;
        pvVar6 = pvVar6 + 1;
        pvVar8 = pvVar8 + 1;
      }
      local_68 = local_6c;
      iVar3 = (*g_engfuncs.pfnGetPlayerUserId)(this->pev->pContainingEntity);
      pcVar4 = (*g_engfuncs.pfnGetPlayerAuthId)(this->pev->pContainingEntity);
      iVar5 = (*g_engfuncs.pfnGetPlayerUserId)(this->pev->pContainingEntity);
      UTIL_LogPrintf("\"%s<%i><%s><%i>\" triggered \"dropped_briefcase\" (contents \"%s\")\n",
                     gpGlobals->pStringBase + this->pev->netname,iVar5,pcVar4,iVar3,
                     gpGlobals->pStringBase + *(int *)&this->field_0x7d4);
      (*g_engfuncs.pfnMessageBegin)(2,gmsgTSHaveFlag,(float *)0x0,(edict_t *)0x0);
      (*g_engfuncs.pfnWriteByte)(2);
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x7d8);
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x7dc + 1);
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(iVar3);
      (*g_engfuncs.pfnMessageEnd)();
    }
    puVar9 = (undefined4 *)&this->field_0x7d0;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  return;
}

/* 00093830  CBasePlayer::TakeFlag  (520 bytes)
 * undefined4 TakeFlag(undefined4 * param_1)
 */
/* CBasePlayer::TakeFlag(s_flag_status *) */

undefined4 __thiscall CBasePlayer::TakeFlag(CBasePlayer *this,undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  longdouble extraout_ST0;
  char local_8c [124];
  
  if ((*(int *)&this->field_0x548 < 0x14) || (this->field_0x7d0 != '\0')) {
    uVar3 = 0;
  }
  else {
    puVar5 = (undefined4 *)&this->field_0x7d0;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    this->field_0x7d0 = 1;
    *(int *)&this->field_0x548 = *(int *)&this->field_0x548 + -0x14;
    GetSpeedBySlots((int)this);
    SetPlayerSpeed(this,(float)extraout_ST0);
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"items/gunpickup2.wav",0x3f800000,0x3f4ccccd,
                   0,100,0.5);
    (*g_engfuncs.pfnMessageBegin)(2,gmsgTSHaveFlag,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(1);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x7d8);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x7dc + 1);
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteByte)(iVar4);
    (*g_engfuncs.pfnMessageEnd)();
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
    if (iVar4 != *(int *)&this->field_0x7e0) {
      sprintf(local_8c,"%s picked up a briefcase containing %s!",
              gpGlobals->pStringBase + this->pev->netname,
              gpGlobals->pStringBase + *(int *)&this->field_0x7d4);
      TSHudMessageAll(0,0xff,0,4,0x1e,local_8c);
    }
    *(int *)&this->field_0x7e0 = iVar4;
    iVar4 = (*g_engfuncs.pfnGetPlayerUserId)(this->pev->pContainingEntity);
    pcVar1 = (*g_engfuncs.pfnGetPlayerAuthId)(this->pev->pContainingEntity);
    iVar2 = (*g_engfuncs.pfnGetPlayerUserId)(this->pev->pContainingEntity);
    uVar3 = UTIL_LogPrintf("\"%s<%i><%s><%i>\" triggered \"aquired_briefcase\" (contents \"%s\")\n",
                           gpGlobals->pStringBase + this->pev->netname,iVar2,pcVar1,iVar4,
                           gpGlobals->pStringBase + *(int *)&this->field_0x7d4);
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar3;
}

/* 00093a3c  CBasePlayer::DropArmor  (867 bytes)
 * undefined DropArmor(void)
 */
/* CBasePlayer::DropArmor(void) */

void __thiscall CBasePlayer::DropArmor(CBasePlayer *this)

{
  entvars_t *peVar1;
  int iVar2;
  CTSAmmoPack *pCVar3;
  vec_t *pvVar4;
  float *pfVar5;
  vec_t *pvVar6;
  undefined2 in_FPUControlWord;
  float local_90;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c [6];
  int local_34;
  undefined2 local_30;
  undefined2 uStack_2e;
  float local_2c [7];
  
  if (0.0 < this->pev->armorvalue) {
    iVar2 = (*this->vtable[0x2d])(this);
    if (iVar2 == 0) {
      iVar2 = (*g_engfuncs.pfnRandomLong)(-0x3c,0x3c);
      local_2c[0] = (float)iVar2;
      iVar2 = (*g_engfuncs.pfnRandomLong)(-0xb4,0xb4);
      local_2c[1] = (float)iVar2;
      local_2c[2] = 0.0;
      iVar2 = (*g_engfuncs.pfnRandomLong)(0x3c,0xa0);
      local_90 = (float)iVar2;
    }
    else {
      pvVar4 = this->pev->v_angle;
      pfVar5 = local_2c;
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pvVar4;
        pvVar4 = pvVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
      local_90 = (90.0 - local_2c[0]) + (90.0 - local_2c[0]);
    }
    UTIL_MakeVectors(local_2c);
    _local_30 = CONCAT22(uStack_2e,in_FPUControlWord);
    local_34 = (int)ROUND(this->pev->armorvalue);
    pCVar3 = CTSAmmoPack::CreateAmmoPack((int *)this,(undefined4 *)0x0);
    peVar1 = this->pev;
    local_6c = gpGlobals->v_forward[0] * 8.0;
    local_68 = gpGlobals->v_forward[1] * 8.0;
    local_64 = gpGlobals->v_forward[2] * 8.0;
    local_5c = peVar1->origin[0] + local_6c;
    local_58 = peVar1->origin[1] + local_68;
    local_54 = peVar1->origin[2] + local_64;
    local_7c = gpGlobals->v_right[0] * 8.0;
    local_78 = gpGlobals->v_right[1] * 8.0;
    local_74 = gpGlobals->v_right[2] * 8.0;
    local_4c[0] = local_5c + local_7c;
    local_4c[1] = local_58 + local_78;
    local_4c[2] = local_54 + local_74;
    pvVar4 = local_4c;
    pvVar6 = pCVar3->pev->origin;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    pvVar4 = (vec_t *)&g_vecZero;
    pvVar6 = pCVar3->pev->angles;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    iVar2 = (*g_engfuncs.pfnRandomLong)(-300,300);
    pCVar3->pev->avelocity[1] = (float)iVar2;
    iVar2 = (*g_engfuncs.pfnRandomLong)(-300,300);
    pCVar3->pev->avelocity[2] = (float)iVar2;
    peVar1 = this->pev;
    local_5c = peVar1->velocity[0] * 0.9;
    local_58 = peVar1->velocity[1] * 0.9;
    local_54 = peVar1->velocity[2] * 0.9;
    local_4c[0] = local_90 * gpGlobals->v_forward[0];
    local_4c[1] = local_90 * gpGlobals->v_forward[1];
    local_4c[2] = local_90 * gpGlobals->v_forward[2];
    local_6c = local_5c + local_4c[0];
    local_68 = local_58 + local_4c[1];
    local_64 = local_54 + local_4c[2];
    local_7c = local_6c + 0.0;
    local_78 = local_68 + 0.0;
    local_74 = local_64 + local_90 * 0.33;
    pvVar4 = &local_7c;
    pvVar6 = pCVar3->pev->velocity;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"weapons/weapondrop.wav",0x3f800000,
                   0x3f4ccccd,0,100,0.5);
    TakeArmor(this,-1);
  }
  return;
}

/* 00093da4  CBasePlayer::TakeArmor  (225 bytes)
 * undefined4 TakeArmor(int param_1)
 */
/* CBasePlayer::TakeArmor(int) */

undefined4 __thiscall CBasePlayer::TakeArmor(CBasePlayer *this,int param_1)

{
  float fVar1;
  undefined4 uVar2;
  longdouble extraout_ST0;
  
  if (param_1 < 0) {
    if ((*(uint *)&this->field_0x718 & 0x10) != 0) {
      *(int *)&this->field_0x548 = *(int *)&this->field_0x548 + 10;
      *(uint *)&this->field_0x718 = *(uint *)&this->field_0x718 & 0xffffffef;
      this->pev->armorvalue = 0.0;
    }
  }
  else {
    if ((this->field_0x718 & 0x10) == 0) {
      if (*(int *)&this->field_0x548 < 10) {
        return 0;
      }
      *(int *)&this->field_0x548 = *(int *)&this->field_0x548 + -10;
      *(uint *)&this->field_0x718 = *(uint *)&this->field_0x718 | 0x10;
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"weapons/items.wav",0x3f800000,0x3f4ccccd,0
                     ,100,0.5);
    }
    fVar1 = (float)param_1 + this->pev->armorvalue;
    if (100.0 < fVar1) {
      fVar1 = 100.0;
    }
    this->pev->armorvalue = fVar1;
  }
  GetSpeedBySlots((int)this);
  uVar2 = SetPlayerSpeed(this,(float)extraout_ST0);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

/* 00093e88  CBasePlayer::ResetArmament  (26 bytes)
 * undefined ResetArmament(void)
 */
/* CBasePlayer::ResetArmament(void) */

void __thiscall CBasePlayer::ResetArmament(CBasePlayer *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&this->field_0x554;
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 00093ea4  CBasePlayer::AddItemToArmament  (80 bytes)
 * undefined AddItemToArmament(CBasePlayer * this, undefined4 param_2, undefined4 param_3, CBasePlayer param_4)
 */
/* CBasePlayer::AddItemToArmament(tsweapon_t, int, bool) */

void __thiscall
CBasePlayer::AddItemToArmament(void *this,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x594) != 0) {
    piVar1 = (int *)((int)this + 0x594);
    do {
      piVar1 = piVar1 + 3;
      iVar2 = iVar2 + 1;
      if (0x1f < iVar2) break;
    } while (*piVar1 != 0);
  }
  if (iVar2 < 0x20) {
    *(undefined4 *)((int)this + iVar2 * 0xc + 0x594) = param_2;
    *(undefined4 *)((int)this + iVar2 * 0xc + 0x598) = param_3;
    *(undefined1 *)((int)this + iVar2 * 0xc + 0x59c) = param_4;
  }
  return;
}

/* 00093ef4  CBasePlayer::AddAmmoToArmament  (25 bytes)
 * undefined AddAmmoToArmament(uint param_1, undefined4 param_2)
 */
/* CBasePlayer::AddAmmoToArmament(int, int) */

void __thiscall CBasePlayer::AddAmmoToArmament(CBasePlayer *this,uint param_1,undefined4 param_2)

{
  if (param_1 < 0x10) {
    *(undefined4 *)(&this->field_0x554 + param_1 * 4) = param_2;
  }
  return;
}

/* 00093f10  CBasePlayer::BuyArmament  (716 bytes)
 * undefined BuyArmament(void)
 */
/* CBasePlayer::BuyArmament(void) */

void __thiscall CBasePlayer::BuyArmament(CBasePlayer *this)

{
  CBasePlayer *pCVar1;
  CBasePlayer *pCVar2;
  int iVar3;
  CBasePlayer *pCVar4;
  CBasePlayer *local_2c;
  CBasePlayer *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  uint local_14;
  
  local_14 = 0;
  local_28 = this;
  local_2c = this;
  pCVar1 = this;
  pCVar2 = this;
  pCVar4 = this;
  do {
    if (*(int *)&pCVar2->field_0x594 != 0) {
      if (pCVar4->field_0x59c == '\0') {
        BuyWeapon(this,*(uint *)&local_2c->field_0x594,*(uint *)&pCVar1->field_0x598);
      }
      else {
        AddItem(this,*(uint *)&local_28->field_0x594);
      }
    }
    if (*(int *)&pCVar2->field_0x5a0 != 0) {
      if (pCVar4->field_0x5a8 == '\0') {
        BuyWeapon(this,*(uint *)&local_2c->field_0x5a0,*(uint *)&pCVar1->field_0x5a4);
      }
      else {
        AddItem(this,*(uint *)&local_28->field_0x5a0);
      }
    }
    if (*(int *)&pCVar2->field_0x5ac != 0) {
      if (pCVar4->field_0x5b4 == '\0') {
        BuyWeapon(this,*(uint *)&local_2c->field_0x5ac,*(uint *)&pCVar1->field_0x5b0);
      }
      else {
        AddItem(this,*(uint *)&local_28->field_0x5ac);
      }
    }
    if (*(int *)&pCVar2->field_0x5b8 != 0) {
      if (pCVar4->field_0x5c0 == '\0') {
        BuyWeapon(this,*(uint *)&local_2c->field_0x5b8,*(uint *)&pCVar1->field_0x5bc);
      }
      else {
        AddItem(this,*(uint *)&local_28->field_0x5b8);
      }
    }
    local_28 = (CBasePlayer *)&local_28->field_0x30;
    local_2c = (CBasePlayer *)&local_2c->field_0x30;
    pCVar1 = (CBasePlayer *)&pCVar1->field_0x30;
    pCVar4 = (CBasePlayer *)&pCVar4->field_0x30;
    pCVar2 = (CBasePlayer *)&pCVar2->field_0x30;
    local_14 = local_14 + 4;
  } while ((int)local_14 < 0x20);
  local_14 = 0;
  local_1c = 0x550;
  local_24 = &this->field_0x550;
  local_20 = local_24;
  do {
    if ((0 < *(int *)(local_24 + 4)) && (iVar3 = 0, 0 < *(int *)(local_20 + 4))) {
      do {
        BuyAmmo(this,local_14);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(&this->field_0x4 + local_1c));
    }
    if ((0 < *(int *)(local_24 + 8)) && (iVar3 = 0, 0 < *(int *)(local_20 + 8))) {
      do {
        BuyAmmo(this,local_14 + 1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(&this->field_0x8 + local_1c));
    }
    if ((0 < *(int *)(local_24 + 0xc)) && (0 < *(int *)(local_20 + 0xc))) {
      iVar3 = 0;
      do {
        BuyAmmo(this,local_14 + 2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(&this->field_0xc + local_1c));
    }
    if ((0 < *(int *)(local_24 + 0x10)) && (0 < *(int *)(local_20 + 0x10))) {
      iVar3 = 0;
      do {
        BuyAmmo(this,local_14 + 3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(&this->field_0x10 + local_1c));
    }
    local_20 = local_20 + 0x10;
    local_24 = local_24 + 0x10;
    local_1c = local_1c + 0x10;
    local_14 = local_14 + 4;
  } while ((int)local_14 < 0x10);
  return;
}

/* 000941e8  CBasePlayer::BuyAmmo  (538 bytes)
 * undefined BuyAmmo(uint param_1)
 */
/* CBasePlayer::BuyAmmo(int) */

void __thiscall CBasePlayer::BuyAmmo(CBasePlayer *this,uint param_1)

{
  byte bVar1;
  CTSGun *this_00;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *local_1c;
  uint local_14;
  
  iVar6 = 0;
  this_00 = *(CTSGun **)&this->field_0xa10;
  if ((this_00 != (CTSGun *)0x0) && (*(int *)&this_00->field_0x88 == 0x10)) {
    if (param_1 == 0xfffffffe) {
      bVar2 = false;
      local_14 = 0x25;
      local_1c = &this_00->field_0x92c;
      do {
        if (*local_1c != '\0') {
          puVar3 = get_weapon_info(local_14);
          bVar1 = *(byte *)(puVar3 + 2);
          uVar5 = (uint)bVar1;
          if (uVar5 != 0) {
            iVar4 = CashBased();
            if (iVar4 != 0) {
              puVar3 = get_ammo_info(uVar5);
              iVar6 = *(int *)&this->field_0x540 - puVar3[1];
            }
            if (-1 < iVar6) {
              while( true ) {
                puVar3 = get_ammo_info(uVar5);
                iVar4 = CTSGun::AddAmmo(this_00,bVar1,puVar3[4]);
                if (iVar4 == 0) break;
                iVar4 = CashBased();
                if (iVar4 != 0) {
                  *(int *)&this->field_0x540 = iVar6;
                  puVar3 = get_ammo_info(uVar5);
                  iVar6 = *(int *)&this->field_0x540 - puVar3[1];
                }
                if (!bVar2) {
                  EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"items/9mmclip1.wav",0x3f800000
                                 ,0x3f4ccccd,0,100,0.5);
                }
                bVar2 = true;
                if (iVar6 < 0) {
                  return;
                }
              }
            }
          }
        }
        local_1c = local_1c + -0x38;
        local_14 = local_14 - 1;
      } while (-1 < (int)local_14);
    }
    else if (*(int *)&this_00->field_0xcc != 0) {
      if (param_1 == 0xffffffff) {
        param_1 = (uint)*(byte *)(*(int *)&this_00->field_0xd0 + 8);
      }
      else if (param_1 == 0) {
        return;
      }
      iVar4 = CashBased();
      if (iVar4 != 0) {
        puVar3 = get_ammo_info(param_1);
        iVar6 = *(int *)&this->field_0x540 - puVar3[1];
      }
      if (-1 < iVar6) {
        puVar3 = get_ammo_info(param_1);
        iVar4 = CTSGun::AddAmmo(this_00,(byte_conflict)param_1,puVar3[4]);
        if (iVar4 != 0) {
          iVar4 = CashBased();
          if (iVar4 != 0) {
            *(int *)&this->field_0x540 = iVar6;
          }
          EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"items/9mmclip1.wav",0x3f800000,
                         0x3f4ccccd,0,100,0.5);
        }
      }
    }
  }
  return;
}

/* 0009440c  CBasePlayer::AddItem  (428 bytes)
 * undefined AddItem(uint param_1)
 */
/* CBasePlayer::AddItem(int) */

void __thiscall CBasePlayer::AddItem(CBasePlayer *this,uint param_1)

{
  CTSGun *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  this_00 = *(CTSGun **)&this->field_0xa10;
  iVar2 = CashBased();
  if (iVar2 != 0) {
    iVar3 = *(int *)&this->field_0x540;
  }
  if ((param_1 & 0x10) == 0) {
    if ((param_1 & 0x20) != 0) {
      if (TSGameRules < 2) {
        return;
      }
      iVar2 = CashBased();
      if (iVar2 != 0) {
        iVar3 = iVar3 + -700;
      }
      uVar1 = this->pev->iuser4;
      if ((uVar1 & 0x200) != 0) {
        return;
      }
      if (iVar3 < 0) {
        return;
      }
      this->pev->iuser4 = uVar1 | 0x200;
      iVar2 = CashBased();
      if (iVar2 != 0) {
        *(int *)&this->field_0x540 = iVar3;
      }
      *(uint *)&this->field_0x718 = *(uint *)&this->field_0x718 | 0x20;
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"weapons/items.wav",0x3f800000,0x3f4ccccd,0
                     ,100,0.5);
      return;
    }
    if (this_00 == (CTSGun *)0x0) {
      return;
    }
    if (*(int *)&this_00->field_0x88 != 0x10) {
      return;
    }
    iVar2 = CashBased();
    if (iVar2 != 0) {
      if ((param_1 & 1) != 0) {
        iVar3 = iVar3 + -900;
      }
      if ((param_1 & 2) != 0) {
        iVar3 = iVar3 + -800;
      }
      if ((param_1 & 4) != 0) {
        iVar3 = iVar3 + -500;
      }
      if ((param_1 & 8) != 0) {
        iVar3 = iVar3 + -0x708;
      }
    }
    if (iVar3 < 0) {
      return;
    }
    iVar2 = CTSGun::AddItem(this_00,param_1);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = CashBased();
  }
  else {
    iVar2 = CashBased();
    if (iVar2 != 0) {
      iVar3 = iVar3 + -0x76c;
    }
    if (100.0 <= this->pev->armorvalue) {
      return;
    }
    if (iVar3 < 0) {
      return;
    }
    TakeArmor(this,100);
    iVar2 = CashBased();
  }
  if (iVar2 != 0) {
    *(int *)&this->field_0x540 = iVar3;
  }
  return;
}

/* 000945bc  CBasePlayer::BuyWeapon  (305 bytes)
 * undefined BuyWeapon(uint param_1, uint param_2)
 */
/* CBasePlayer::BuyWeapon(tsweapon_t, int) */

void __thiscall CBasePlayer::BuyWeapon(CBasePlayer *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((((*(int *)&this->field_0xa10 != 0) && (*(int *)(*(int *)&this->field_0xa10 + 0x88) == 0x10))
      && (uVar1 = IsRestrictedWeapon(param_1,DAT_0017da10), (char)uVar1 == '\0')) &&
     ((1 < TSGameRules || (param_1 != 0x18)))) {
    if (param_1 == 0x18) {
      if (1 < (byte)this->field_0x714) {
        return;
      }
      this->field_0x714 = this->field_0x714 + '\x01';
    }
    iVar2 = CashBased();
    if (iVar2 != 0) {
      puVar3 = get_weapon_info(param_1);
      iVar4 = *(int *)&this->field_0x540 - puVar3[0x36];
    }
    iVar2 = CashBased();
    if (iVar2 != 0) {
      if ((param_2 & 1) != 0) {
        iVar4 = iVar4 + -900;
      }
      if ((param_2 & 2) != 0) {
        iVar4 = iVar4 + -800;
      }
      if ((param_2 & 4) != 0) {
        iVar4 = iVar4 + -500;
      }
      if ((param_2 & 8) != 0) {
        iVar4 = iVar4 + -0x708;
      }
    }
    if (((-1 < iVar4) &&
        (iVar2 = PickUpWeapon(this,param_1,(undefined4 *)0x0,param_2,'\x01','\x01'), iVar2 != 0)) &&
       (iVar2 = CashBased(), iVar2 != 0)) {
      *(int *)&this->field_0x540 = iVar4;
    }
  }
  return;
}

/* 000946f0  CBasePlayer::DropAmmo  (528 bytes)
 * undefined DropAmmo(void)
 */
/* CBasePlayer::DropAmmo(void) */

void __thiscall CBasePlayer::DropAmmo(CBasePlayer *this)

{
  entvars_t *peVar1;
  bool bVar2;
  int *piVar3;
  CTSAmmoPack *pCVar4;
  int iVar5;
  int iVar6;
  vec_t *pvVar7;
  vec_t *pvVar8;
  undefined2 in_FPUControlWord;
  float local_4c [6];
  int local_34;
  undefined2 local_30;
  undefined2 uStack_2e;
  float local_2c;
  float local_28;
  undefined4 local_24;
  
  iVar5 = *(int *)&this->field_0xa10;
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x88) == 0x10)) {
    bVar2 = false;
    iVar6 = 0;
    piVar3 = (int *)(iVar5 + 0xd4);
    do {
      if (0 < *piVar3) {
        bVar2 = true;
      }
      piVar3 = piVar3 + 1;
      iVar6 = iVar6 + 1;
    } while ((iVar6 < 0x10) && (!bVar2));
    if (bVar2) {
      iVar6 = (*g_engfuncs.pfnRandomLong)(-100,100);
      local_2c = (float)iVar6;
      iVar6 = (*g_engfuncs.pfnRandomLong)(-100,100);
      local_28 = (float)iVar6;
      local_24 = 0;
      UTIL_MakeVectors(&local_2c);
      _local_30 = CONCAT22(uStack_2e,in_FPUControlWord);
      local_34 = (int)ROUND(this->pev->armorvalue);
      pCVar4 = CTSAmmoPack::CreateAmmoPack((int *)this,(undefined4 *)(iVar5 + 0xd4));
      peVar1 = this->pev;
      local_4c[0] = peVar1->origin[0] + gpGlobals->v_forward[0] * 8.0 + gpGlobals->v_right[0] * 8.0;
      local_4c[1] = peVar1->origin[1] + gpGlobals->v_forward[1] * 8.0 + gpGlobals->v_right[1] * 8.0;
      local_4c[2] = peVar1->origin[2] + gpGlobals->v_forward[2] * 8.0 + gpGlobals->v_right[2] * 8.0;
      pvVar7 = local_4c;
      pvVar8 = pCVar4->pev->origin;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pvVar8 = *pvVar7;
        pvVar7 = pvVar7 + 1;
        pvVar8 = pvVar8 + 1;
      }
      pvVar7 = (vec_t *)&g_vecZero;
      pvVar8 = pCVar4->pev->angles;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pvVar8 = *pvVar7;
        pvVar7 = pvVar7 + 1;
        pvVar8 = pvVar8 + 1;
      }
      iVar5 = (*g_engfuncs.pfnRandomLong)(-300,300);
      pCVar4->pev->avelocity[1] = (float)iVar5;
      iVar5 = (*g_engfuncs.pfnRandomLong)(-300,300);
      pCVar4->pev->avelocity[2] = (float)iVar5;
    }
  }
  return;
}

/* 00094900  CBasePlayer::DropWeapon  (2432 bytes)
 * undefined DropWeapon(uint param_1, float param_2)
 */
/* CBasePlayer::DropWeapon(tsweapon_t, float) */

void __thiscall CBasePlayer::DropWeapon(CBasePlayer *this,uint param_1,float param_2)

{
  float fVar1;
  CTSGun *this_00;
  float fVar2;
  char cVar3;
  int iVar4;
  CTSPowerUp *pCVar5;
  undefined4 *puVar6;
  int iVar7;
  byte bVar8;
  entvars_t *peVar9;
  uint uVar10;
  vec_t *pvVar11;
  int *piVar12;
  CTSWorldGun *pCVar13;
  vec_t *pvVar14;
  float *pfVar15;
  int *piVar16;
  longdouble extraout_ST0;
  uint uVar17;
  undefined4 in_stack_ffffff4c;
  undefined2 uVar19;
  uint uVar18;
  int local_78;
  byte local_71;
  float local_6c [4];
  int local_5c [19];
  
  uVar19 = (undefined2)((uint)in_stack_ffffff4c >> 0x10);
  pCVar13 = (CTSWorldGun *)0x0;
  this_00 = *(CTSGun **)&this->field_0xa10;
  if (this_00 == (CTSGun *)0x0) {
    return;
  }
  if (*(int *)&this_00->field_0x88 != 0x10) {
    return;
  }
  if (((*(int *)&this_00->field_0xc8 == 0x1d) || (*(int *)&this_00->field_0xc8 < 1)) &&
     (param_1 == 0xfffffffe)) {
    return;
  }
  local_71 = 1;
  if (param_1 == 0xfffffffe) {
    *(float *)&this->field_0x7b4 = param_2 + *(float *)&this->field_0x7b4;
    bVar8 = 0x1e;
    if (*(int *)&this_00->field_0xc8 != 0x22) {
      cVar3 = GetWeaponType(*(uint *)&this_00->field_0xc8);
      bVar8 = 0x19;
      if (cVar3 != '\x03') {
        if ((*(byte *)(*(int *)&this_00->field_0xd0 + 0xd0) < 0x32) &&
           (*(byte *)(*(int *)&this_00->field_0xd0 + 0xd0) < 0x15)) {
          bVar8 = 0x14;
        }
        else {
          bVar8 = 0x32;
          if (*(byte *)(*(int *)&this_00->field_0xd0 + 0xd0) < 0x32) {
            bVar8 = *(byte *)(*(int *)&this_00->field_0xd0 + 0xd0);
          }
        }
      }
    }
    if (*(float *)&this->field_0x7b4 < (float)bVar8) {
      return;
    }
    local_71 = 0;
    *(undefined4 *)&this->field_0x7b4 = 0;
  }
  uVar10 = param_1;
  if (0x7fffffff < param_1) {
    uVar10 = *(uint *)&this_00->field_0xc8;
  }
  if (0x24 < uVar10 - 1) {
    if (param_1 == 0xfffffffe) {
      return;
    }
    cVar3 = HaveFlag((int)this);
    if (cVar3 == '\0') {
      return;
    }
    DropFlag(this,'\0');
    return;
  }
  if ((&this_00->field_0x114)[uVar10 * 0x38] == '\0') {
    return;
  }
  if (((uVar10 == 0x18) && (TSGameRules < 2)) && (iVar4 = (*this->vtable[0x2d])(this), iVar4 == 0))
  {
    if (*(int *)&this_00->field_0x65c == 1) {
      CTSGun::GrenadeIdle(this_00,1);
    }
    local_78 = 0;
    if (*(int *)&this_00->field_0x658 < 1) {
      return;
    }
    iVar4 = 0;
    do {
      pCVar5 = CTSPowerUp::CreatePowerUp(0x20,-1);
      pvVar11 = this->pev->origin;
      pvVar14 = pCVar5->pev->origin;
      for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pvVar14 = *pvVar11;
        pvVar11 = pvVar11 + 1;
        pvVar14 = pvVar14 + 1;
      }
      pCVar5->pev->origin[0] = (float)iVar4 + pCVar5->pev->origin[0];
      iVar4 = iVar4 + 5;
      local_78 = local_78 + 1;
    } while (local_78 < *(int *)&this_00->field_0x658);
    return;
  }
  if (uVar10 == 0x18) {
    if (*(int *)&this_00->field_0x65c == 1) {
      CTSGun::GrenadeIdle(this_00,1);
    }
    else if (0 < *(int *)&this_00->field_0x658) {
      piVar12 = (int *)&this_00->field_0x654;
      piVar16 = local_5c;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar16 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + 1;
      }
      local_5c[1] = 1;
      pCVar13 = ThrowWeapon(this,0x18,local_5c,(float *)0x0,(float *)0x0);
      puVar6 = get_weapon_info(0x18);
      *(uint *)&this->field_0x548 = *(int *)&this->field_0x548 + (uint)*(byte *)(puVar6 + 0x34);
      if (*(int *)&this_00->field_0x658 < 2) {
LAB_000951af:
        CTSGun::DropWeapon(this_00,uVar10,local_71);
      }
      else {
        *(int *)&this_00->field_0x658 = *(int *)&this_00->field_0x658 + -1;
        if (local_71 == 0) {
          CTSGun::HolsterWeapon(this_00);
        }
      }
      peVar9 = this->pev;
      goto LAB_000951c0;
    }
  }
  else {
    puVar6 = get_weapon_info(uVar10);
    if (*(char *)(puVar6 + 0x37) == '\0') {
      puVar6 = get_weapon_info(uVar10);
      if ((*(char *)(puVar6 + 0xd2) == '\x04') &&
         (puVar6 = get_weapon_info(uVar10), puVar6[0x33] != -1)) {
        puVar6 = get_weapon_info(uVar10);
        uVar17 = puVar6[0x33];
        piVar12 = (int *)(&this_00->field_0x114 + uVar17 * 0x38);
        piVar16 = local_5c;
        for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar16 = *piVar12;
          piVar12 = piVar12 + 1;
          piVar16 = piVar16 + 1;
        }
        local_5c[1] = *(int *)(&this_00->field_0x118 + uVar10 * 0x38) / 2;
        pfVar15 = local_6c;
        for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar15 = 0.0;
          pfVar15 = pfVar15 + 1;
        }
        iVar4 = 0;
        do {
          if (iVar4 == 0) {
            local_6c[1] = 4.0;
          }
          else {
            local_6c[1] = -4.0;
          }
          pCVar13 = ThrowWeapon(this,uVar17,local_5c,(float *)0x0,local_6c);
          if ((int)param_1 < 0) {
            fVar1 = gpGlobals->time;
            fVar2 = (float)weaponstay_time._12_4_ + (float)weaponstay_time._12_4_;
            if (120.0 <= fVar2) {
LAB_00094eb2:
              fVar2 = fVar1 + 120.0;
            }
            else if (fVar2 <= 10.0) {
              fVar2 = fVar1 + 10.0;
            }
            else {
              if (120.0 <= fVar2) goto LAB_00094eb2;
              fVar2 = fVar2 + fVar1;
            }
            *(float *)&pCVar13->field_0xc4 = fVar2;
            *(edict_t **)&pCVar13->field_0xd0 = this->pev->pContainingEntity;
          }
          puVar6 = get_weapon_info(uVar17);
          *(uint *)&this->field_0x548 = *(int *)&this->field_0x548 + (uint)*(byte *)(puVar6 + 0x34);
          if (iVar4 == -1) {
            local_6c[1] = 4.0;
          }
          else {
            local_6c[1] = -4.0;
          }
          pCVar13 = ThrowWeapon(this,uVar17,local_5c,(float *)0x0,local_6c);
          if ((int)param_1 < 0) {
            fVar1 = gpGlobals->time;
            fVar2 = (float)weaponstay_time._12_4_ + (float)weaponstay_time._12_4_;
            if (120.0 <= fVar2) {
LAB_00094f86:
              fVar2 = fVar1 + 120.0;
            }
            else if (fVar2 <= 10.0) {
              fVar2 = fVar1 + 10.0;
            }
            else {
              if (120.0 <= fVar2) goto LAB_00094f86;
              fVar2 = fVar2 + fVar1;
            }
            *(float *)&pCVar13->field_0xc4 = fVar2;
            *(edict_t **)&pCVar13->field_0xd0 = this->pev->pContainingEntity;
          }
          puVar6 = get_weapon_info(uVar17);
          *(uint *)&this->field_0x548 = *(int *)&this->field_0x548 + (uint)*(byte *)(puVar6 + 0x34);
          iVar4 = iVar4 + 2;
        } while (iVar4 < 2);
        CTSGun::DropWeapon(this_00,uVar10,local_71);
        CTSGun::DropWeapon(this_00,uVar17,local_71);
      }
      else {
        puVar6 = get_weapon_info(uVar10);
        if ((puVar6[0x32] == -1) ||
           (puVar6 = get_weapon_info(uVar10), (&this_00->field_0x114)[puVar6[0x32] * 0x38] == '\0'))
        {
          pCVar13 = ThrowWeapon(this,uVar10,(undefined4 *)(&this_00->field_0x114 + uVar10 * 0x38),
                                (float *)0x0,(float *)0x0);
          puVar6 = get_weapon_info(uVar10);
          *(uint *)&this->field_0x548 = *(int *)&this->field_0x548 + (uint)*(byte *)(puVar6 + 0x34);
          goto LAB_000951af;
        }
        iVar7 = uVar10 * 0x38;
        piVar12 = (int *)(&this_00->field_0x114 + iVar7);
        piVar16 = local_5c;
        for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar16 = *piVar12;
          piVar12 = piVar12 + 1;
          piVar16 = piVar16 + 1;
        }
        local_5c[1] = *(int *)(&this_00->field_0x118 + iVar7);
        puVar6 = get_weapon_info(uVar10);
        *(undefined4 *)(&this_00->field_0x118 + iVar7) =
             *(undefined4 *)(&this_00->field_0x134 + puVar6[0x32] * 0x38);
        pCVar13 = ThrowWeapon(this,uVar10,local_5c,(float *)0x0,(float *)0x0);
        puVar6 = get_weapon_info(uVar10);
        *(uint *)&this->field_0x548 = *(int *)&this->field_0x548 + (uint)*(byte *)(puVar6 + 0x34);
        uVar18 = CONCAT22(uVar19,(ushort)local_71);
        puVar6 = get_weapon_info(uVar10);
        CTSGun::DropWeapon(this_00,puVar6[0x32],(char)uVar18);
        CTSGun::HolsterWeapon(this_00);
        uVar18 = uVar18 & 0xffff0000;
        uVar17 = uVar10;
        iVar4 = CTSGun::SelectWeapon(this_00,uVar10);
        if (iVar4 != 0) {
          (*this_00->vtable[0x4a])(this_00,uVar17,uVar18);
        }
      }
    }
    else {
      piVar12 = (int *)(&this_00->field_0x114 + uVar10 * 0x38);
      piVar16 = local_5c;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar16 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + 1;
      }
      if (param_1 == 0xfffffffe) {
        local_5c[1] = 1;
      }
      pCVar13 = ThrowWeapon(this,uVar10,local_5c,(float *)0x0,(float *)0x0);
      puVar6 = get_weapon_info(uVar10);
      *(uint *)&this->field_0x548 =
           *(int *)&this->field_0x548 + (uint)*(byte *)(puVar6 + 0x34) * local_5c[1];
      if (local_5c[1] < *(int *)(&this_00->field_0x118 + uVar10 * 0x38)) {
        *(int *)(&this_00->field_0x118 + uVar10 * 0x38) =
             *(int *)(&this_00->field_0x118 + uVar10 * 0x38) - local_5c[1];
        if (local_71 == 0) {
          CTSGun::HolsterWeapon(this_00);
        }
      }
      else {
        CTSGun::DropWeapon(this_00,uVar10,local_71);
      }
    }
    peVar9 = this->pev;
LAB_000951c0:
    EMIT_SOUND_DYN((int)peVar9->pContainingEntity,3,"weapons/weapondrop.wav",0x3f800000,0x3f4ccccd,0
                   ,100,0.5);
  }
  if (((-1 < (int)param_1) || (uVar10 == 0x1d)) || (pCVar13 == (CTSWorldGun *)0x0))
  goto LAB_0009526b;
  fVar1 = gpGlobals->time;
  fVar2 = (float)weaponstay_time._12_4_ + (float)weaponstay_time._12_4_;
  if (120.0 <= fVar2) {
LAB_0009523c:
    fVar2 = fVar1 + 120.0;
  }
  else if (fVar2 <= 10.0) {
    fVar2 = fVar1 + 10.0;
  }
  else {
    if (120.0 <= fVar2) goto LAB_0009523c;
    fVar2 = fVar2 + fVar1;
  }
  *(float *)&pCVar13->field_0xc4 = fVar2;
  *(edict_t **)&pCVar13->field_0xd0 = this->pev->pContainingEntity;
LAB_0009526b:
  GetSpeedBySlots((int)this);
  SetPlayerSpeed(this,(float)extraout_ST0);
  return;
}

/* 0009529c  CBasePlayer::ThrowWeapon  (1088 bytes)
 * CTSWorldGun * ThrowWeapon(int param_1, undefined4 * param_2, float * param_3, float * param_4)
 */
/* CBasePlayer::ThrowWeapon(tsweapon_t, void *, float *, float *) */

CTSWorldGun * __thiscall
CBasePlayer::ThrowWeapon
          (CBasePlayer *this,int param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  entvars_t *peVar1;
  int iVar2;
  CTSWorldGun *pCVar3;
  float *pfVar4;
  vec_t *pvVar5;
  float *pfVar6;
  vec_t *pvVar7;
  float local_5c [4];
  float local_4c [4];
  float local_3c [4];
  float local_2c [7];
  
  iVar2 = (*this->vtable[0x2d])(this);
  if (iVar2 == 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(-0x3c,0x3c);
    local_2c[0] = (float)iVar2;
    iVar2 = (*g_engfuncs.pfnRandomLong)(-0xb4,0xb4);
    local_2c[1] = (float)iVar2;
    local_2c[2] = 0.0;
    (*g_engfuncs.pfnRandomLong)(0x3c,0xa0);
  }
  else {
    pvVar5 = this->pev->v_angle;
    pfVar4 = local_2c;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = *pvVar5;
      pvVar5 = pvVar5 + 1;
      pfVar4 = pfVar4 + 1;
    }
    if (param_3 != (float *)0x0) {
      local_4c[0] = *param_3;
      local_4c[1] = param_3[1];
      local_4c[2] = param_3[2];
      local_3c[0] = local_2c[0] + *param_3;
      local_3c[1] = local_2c[1] + param_3[1];
      local_3c[2] = local_2c[2] + param_3[2];
      pfVar4 = local_3c;
      pfVar6 = local_2c;
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar6 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
  }
  UTIL_MakeVectors(local_2c);
  pCVar3 = CTSWorldGun::CreateWeapon((int *)this,param_1,param_2);
  local_4c[0] = 16.0;
  local_4c[1] = 0.0;
  local_4c[2] = 0.0;
  if (param_4 != (float *)0x0) {
    local_5c[0] = *param_4;
    local_5c[1] = param_4[1];
    local_5c[2] = param_4[2];
    local_3c[0] = *param_4 + 16.0;
    local_3c[1] = param_4[1] + 0.0;
    local_3c[2] = param_4[2] + 0.0;
    pfVar4 = local_3c;
    pfVar6 = local_4c;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  peVar1 = this->pev;
  local_3c[0] = peVar1->origin[0] + peVar1->view_ofs[0] + local_4c[0] * gpGlobals->v_forward[0] +
                local_4c[1] * gpGlobals->v_right[0];
  local_3c[1] = local_4c[1] * gpGlobals->v_right[1] +
                local_4c[0] * gpGlobals->v_forward[1] + peVar1->origin[1] + peVar1->view_ofs[1];
  local_3c[2] = peVar1->origin[2] + peVar1->view_ofs[2] + local_4c[0] * gpGlobals->v_forward[2] +
                local_4c[1] * gpGlobals->v_right[2];
  local_5c[0] = local_3c[0] + 0.0;
  local_5c[1] = local_3c[1] + 0.0;
  local_5c[2] = local_3c[2] + local_4c[2];
  pvVar5 = local_5c;
  pvVar7 = pCVar3->pev->origin;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar7 = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pvVar7 = pvVar7 + 1;
  }
  pvVar5 = (vec_t *)&g_vecZero;
  pvVar7 = pCVar3->pev->angles;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar7 = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pvVar7 = pvVar7 + 1;
  }
  iVar2 = (*g_engfuncs.pfnRandomLong)(-300,300);
  pCVar3->pev->avelocity[1] = (float)iVar2;
  iVar2 = (*g_engfuncs.pfnRandomLong)(-300,300);
  pCVar3->pev->avelocity[2] = (float)iVar2;
  pvVar5 = local_3c;
  pvVar7 = pCVar3->pev->velocity;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar7 = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pvVar7 = pvVar7 + 1;
  }
  return pCVar3;
}

/* 000956e0  CBasePlayer::TSUse  (104 bytes)
 * undefined TSUse(void)
 */
/* CBasePlayer::TSUse(void) */

void __thiscall CBasePlayer::TSUse(CBasePlayer *this)

{
  if ((this->pev->iuser1 == 0) && ((this->field_0x814 & 0x20) != 0)) {
    if (gpGlobals->time <= *(float *)&this->field_0x164) {
      UsePowerUp(this);
    }
    *(float *)&this->field_0x164 = gpGlobals->time + 0.3;
  }
  return;
}

/* 00095748  CBasePlayer::UpdatePowerUpState  (557 bytes)
 * undefined UpdatePowerUpState(void)
 */
/* CBasePlayer::UpdatePowerUpState(void) */

void __thiscall CBasePlayer::UpdatePowerUpState(CBasePlayer *this)

{
  int iVar1;
  CTSPowerUp *pCVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  
  if (*(int *)&this->field_0x728 != 0) {
    if (*(int *)&this->field_0x724 == 0) {
      iVar1 = (*this->vtable[0x2d])(this);
      if (iVar1 != 0) {
        return;
      }
      if ((TSGameRules < 2) &&
         ((((this->field_0x728 ^ 1) & 1) != 0 ||
          (((*(uint *)&this->field_0x728 & 1) != 0 && (2 < *(int *)&this->field_0x730)))))) {
        pCVar2 = CTSPowerUp::CreatePowerUp(*(uint *)&this->field_0x728,-1);
        pvVar3 = this->pev->origin;
        pvVar4 = pCVar2->pev->origin;
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pvVar4 = *pvVar3;
          pvVar3 = pvVar3 + 1;
          pvVar4 = pvVar4 + 1;
        }
      }
    }
    else {
      if ((*(uint *)&this->field_0x724 & 9) == 0) {
        if ((this->field_0x725 & 1) != 0) {
          this->pev->gravity = 0.15;
        }
      }
      else if ((*(float *)&this->field_0x72c < gpGlobals->time) ||
              (iVar1 = (*this->vtable[0x2d])(this), iVar1 == 0)) {
        DeactivateSlowMotionFlow(this);
      }
      else if ((*(uint *)&this->field_0x724 & 8) == 0) {
        if ((*(uint *)&this->field_0x724 & 1) != 0) {
          this->field_0x175 = 0;
          *(undefined4 *)&this->field_0x180 = 0x3eb33333;
          *(undefined4 *)&this->field_0x17c = 0x3f19999a;
        }
      }
      else {
        this->field_0x175 = 1;
        *(undefined4 *)&this->field_0x180 = 0x3e666666;
        *(undefined4 *)&this->field_0x17c = 0x3f4ccccd;
      }
      if ((gpGlobals->time <= *(float *)&this->field_0x72c) &&
         (iVar1 = (*this->vtable[0x2d])(this), iVar1 != 0)) {
        return;
      }
      iVar1 = (*this->vtable[0x2d])(this);
      if (((iVar1 == 0) && (TSGameRules < 2)) &&
         ((((this->field_0x724 ^ 1) & 1) != 0 ||
          (((*(uint *)&this->field_0x724 & 1) != 0 && (2 < *(int *)&this->field_0x730)))))) {
        pCVar2 = CTSPowerUp::CreatePowerUp(*(uint *)&this->field_0x724,-1);
        pvVar3 = this->pev->origin;
        pvVar4 = pCVar2->pev->origin;
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pvVar4 = *pvVar3;
          pvVar3 = pvVar3 + 1;
          pvVar4 = pvVar4 + 1;
        }
      }
      if ((this->field_0x725 & 1) != 0) {
        this->pev->gravity = 1.0;
      }
    }
    *(undefined4 *)&this->field_0x72c = 0;
    *(undefined4 *)&this->field_0x730 = 0;
    *(undefined4 *)&this->field_0x724 = 0;
    *(undefined4 *)&this->field_0x728 = 0;
  }
  return;
}

/* 00095980  CBasePlayer::UsePowerUp  (470 bytes)
 * undefined4 UsePowerUp(void)
 */
/* CBasePlayer::UsePowerUp(void) */

undefined4 __thiscall CBasePlayer::UsePowerUp(CBasePlayer *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((this->pev->iuser1 == 0) && (iVar1 = (*this->vtable[0x2d])(this), iVar1 != 0)) {
    uVar2 = 0;
    if ((*(int *)&this->field_0x728 != 0) && (*(int *)&this->field_0x724 == 0)) {
      if ((DAT_001781b8 == '\0') || ((*(uint *)&this->field_0x728 & 9) == 0)) {
        *(undefined4 *)&this->field_0x724 = *(undefined4 *)&this->field_0x728;
        *(float *)&this->field_0x72c = (float)*(int *)&this->field_0x730 + gpGlobals->time;
        (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUpTime,(float *)0x0,this->pev->pContainingEntity)
        ;
        (*g_engfuncs.pfnWriteByte)((int)ROUND(*(float *)&this->field_0x72c - gpGlobals->time));
        (*g_engfuncs.pfnMessageEnd)();
        if ((this->field_0x728 & 1) == 0) {
          if ((this->field_0x728 & 8) != 0) {
            (*g_engfuncs.pfnMessageBegin)(4,gmsgTSMotionBlur,this->pev->origin,(edict_t *)0x0);
            iVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
            (*g_engfuncs.pfnWriteByte)(iVar1);
            (*g_engfuncs.pfnWriteByte)(2);
            (*g_engfuncs.pfnMessageEnd)();
          }
        }
        else {
          (*g_engfuncs.pfnMessageBegin)(4,gmsgTSMotionBlur,this->pev->origin,(edict_t *)0x0);
          iVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
          (*g_engfuncs.pfnWriteByte)(iVar1);
          (*g_engfuncs.pfnWriteByte)(1);
          (*g_engfuncs.pfnMessageEnd)();
        }
        uVar2 = 1;
      }
      else {
        TSHudMessageOne(0xc3,0x2d,0x2d,0x10,0x14,"You can\'t use Slow-Motion now!",(int)this->pev);
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 00095b58  CBasePlayer::BlockPlayer  (24 bytes)
 * undefined BlockPlayer(undefined4 param_1)
 */
/* CBasePlayer::BlockPlayer(float) */

void __thiscall CBasePlayer::BlockPlayer(CBasePlayer *this,undefined4 param_1)

{
  int *piVar1;
  
  *(undefined4 *)&this->field_0x4dc = param_1;
  piVar1 = &this->pev->iuser4;
  *piVar1 = *piVar1 | 1;
  return;
}

/* 00095b70  CBasePlayer::SetPlayerGravity  (60 bytes)
 * undefined SetPlayerGravity(undefined4 param_1, undefined4 param_2)
 */
/* CBasePlayer::SetPlayerGravity(float, float) */

void __thiscall CBasePlayer::SetPlayerGravity(CBasePlayer *this,undefined4 param_1,float param_2)

{
  if (1.0 <= this->pev->gravity) {
    this->pev->gravity = param_2;
    *(undefined4 *)&this->field_0x4ec = param_1;
  }
  return;
}

/* 00095e28  CBasePlayer::CheckHull  (322 bytes)
 * undefined CheckHull(float * param_1, undefined4 param_2, undefined4 * param_3, int param_4)
 */
/* CBasePlayer::CheckHull(Vector, Vector, TraceResult &, int) */

void __thiscall
CBasePlayer::CheckHull
          (CBasePlayer *this,float *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  edict_t *peVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  UTIL_TraceLine(param_1,param_2,0,this->pev->pContainingEntity,param_3);
  if ((1.0 <= (float)param_3[4]) &&
     (UTIL_TraceHull(param_1,param_2,0,param_4,this->pev->pContainingEntity,param_3),
     (float)param_3[4] < 1.0)) {
    peVar1 = (edict_t *)param_3[0xc];
    if (peVar1 == (edict_t *)0x0) {
      peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar3 = (void *)0x0;
    if (peVar1 != (edict_t *)0x0) {
      pvVar3 = peVar1->pvPrivateData;
    }
    if ((pvVar3 == (void *)0x0) ||
       (iVar2 = (**(code **)(*(int *)((int)pvVar3 + 0x60) + 0xb8))(pvVar3), iVar2 != 0)) {
      if (param_4 == 3) {
        local_24 = 0x41900000;
        local_34 = 0xc1900000;
      }
      else {
        local_24 = 0x42100000;
        local_34 = 0xc2100000;
      }
      local_2c = 0x41800000;
      local_3c = 0xc1800000;
      local_38 = local_3c;
      local_28 = local_2c;
      FindHullIntersectionplayer
                (param_1,param_3,(int)&local_3c,&local_2c,this->pev->pContainingEntity);
    }
  }
  return;
}

/* 00095f70  CBasePlayer::PunchScreen  (21 bytes)
 * undefined PunchScreen(void)
 */
/* CBasePlayer::PunchScreen(float, Vector) */

void CBasePlayer::PunchScreen(void)

{
  return;
}

/* 00095f88  CBasePlayer::CloseCombatAttack  (1407 bytes)
 * CBasePlayer * CloseCombatAttack(float * param_1, float * param_2, float * param_3, int param_4, float param_5, int param_6, char param_7, char param_8, char param_9, char param_10)
 */
/* CBasePlayer::CloseCombatAttack(Vector, Vector, Vector, int, float, int, bool, bool, bool, bool)
    */

CBasePlayer * __thiscall
CBasePlayer::CloseCombatAttack
          (CBasePlayer *this,float *param_1,float *param_2,float *param_3,int param_4,float param_5,
          int param_6,char param_7,char param_8,char param_9,char param_10)

{
  entvars_t *peVar1;
  entvars_t *peVar2;
  edict_t *peVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  CBasePlayer *this_00;
  vec_t *pvVar7;
  vec_t *pvVar8;
  float fVar9;
  float local_9c;
  float local_98;
  float local_94;
  float local_7c [4];
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_5c [4];
  float local_4c;
  edict_t *local_2c;
  
  if (param_6 != -1) {
    CTSAnimation::Animate((CTSAnimation *)&this->field_0x28c,this,param_6);
  }
  iVar5 = (*g_engfuncs.pfnRandomLong)(10,0x50);
  if ((float)iVar5 < param_5) {
    (*g_engfuncs.pfnMessageBegin)(4,gmsgTSMotionBlur,this->pev->origin,(edict_t *)0x0);
    iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteByte)(iVar5);
    (*g_engfuncs.pfnWriteByte)((50.0 < param_5) + 1);
    (*g_engfuncs.pfnMessageEnd)();
  }
  local_6c = *param_1;
  local_68 = param_1[1];
  local_64 = param_1[2];
  local_7c[0] = *param_2;
  local_7c[1] = param_2[1];
  local_7c[2] = param_2[2];
  CheckHull(this,&local_6c,local_7c,local_5c,param_4);
  if (1.0 <= local_4c) {
    return (CBasePlayer *)0x0;
  }
  if (local_2c == (edict_t *)0x0) {
    local_2c = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  this_00 = (CBasePlayer *)0x0;
  if (local_2c != (edict_t *)0x0) {
    this_00 = local_2c->pvPrivateData;
  }
  if (this_00 == (CBasePlayer *)0x0) {
    return (CBasePlayer *)0x0;
  }
  if (((this_00->pev->takedamage == 0.0) || ((this_00->pev->flags & 0x2000000) != 0)) ||
     ((char)this_00->pev->effects < '\0')) {
LAB_000961af:
    this_00 = (CBasePlayer *)0x0;
  }
  else {
    iVar5 = (*this_00->vtable[0x32])(this_00);
    if (iVar5 == 0) {
      if (param_8 != '\0') {
        return (CBasePlayer *)0x0;
      }
    }
    else if (((param_10 != '\0') || ((float)friendlyfire._12_4_ == 0.0)) &&
            (iVar5 = (**(code **)(*g_pGameRules + 0xcc))(g_pGameRules,this,this_00), iVar5 == 1))
    goto LAB_000961af;
    iVar5 = (*this_00->vtable[0x32])(this_00);
    if (iVar5 != 0) {
      uVar6 = VictimKungfuHold(this,this_00);
      if ((char)uVar6 != '\0') goto LAB_000961af;
      if ((param_7 != '\0') && (*(float *)&this_00->field_0x71c < gpGlobals->time)) {
        DropWeapon(this_00,0xfffffffe,param_5);
      }
      if ((param_9 != '\0') && (30.0 < param_5)) {
        peVar1 = this->pev;
        fVar9 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                     peVar1->velocity[1] * peVar1->velocity[1] +
                     peVar1->velocity[0] * peVar1->velocity[0]);
        peVar1 = this_00->pev;
        peVar2 = this->pev;
        local_9c = peVar1->origin[0] - peVar2->origin[0];
        local_98 = peVar1->origin[1] - peVar2->origin[1];
        fVar4 = peVar1->origin[2] - peVar2->origin[2];
        local_94 = SQRT(fVar4 * fVar4 + local_98 * local_98 + local_9c * local_9c);
        if (local_94 == 0.0) {
          local_94 = 1.0;
          local_9c = 0.0;
          local_98 = 0.0;
        }
        else {
          local_94 = 1.0 / local_94;
          local_9c = local_94 * local_9c;
          local_98 = local_94 * local_98;
          local_94 = local_94 * fVar4;
        }
        local_6c = fVar9 * local_9c;
        local_68 = fVar9 * local_98;
        local_64 = fVar9 * local_94;
        local_7c[0] = peVar1->velocity[0] + fVar9 * local_9c;
        local_7c[1] = peVar1->velocity[1] + fVar9 * local_98;
        local_7c[2] = peVar1->velocity[2] + fVar9 * local_94;
        pvVar7 = local_7c;
        pvVar8 = peVar1->velocity;
        for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pvVar8 = *pvVar7;
          pvVar7 = pvVar7 + 1;
          pvVar8 = pvVar8 + 1;
        }
        this_00->pev->velocity[2] = 235.0;
      }
      peVar3 = this_00->pev->pContainingEntity;
      fVar9 = 0.5;
      iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN((int)peVar3,4,"player/kungfuhit.wav",0x3f800000,0x3f4ccccd,0,iVar5 + 0x5f,fVar9
                    );
      if (((*(int *)&this->field_0xa10 != 0) && (20.0 < param_5)) &&
         (*(int *)(*(int *)&this->field_0xa10 + 200) == 0)) {
        peVar1 = this->pev;
        peVar2 = this_00->pev;
        local_7c[0] = peVar1->origin[0] - peVar2->origin[0];
        local_7c[1] = peVar1->origin[1] - peVar2->origin[1];
        local_7c[2] = peVar1->origin[2] - peVar2->origin[2];
        PunchScreen();
      }
    }
    glast_closecombat = 1;
    ClearMultiDamage();
    local_7c[0] = *param_3;
    local_7c[1] = param_3[1];
    local_7c[2] = param_3[2];
    (*this_00->vtable[0x15])(this_00,this->pev,param_5,local_7c,local_5c,0x4001080);
    ApplyMultiDamage(this->pev,this->pev);
    glast_closecombat = 0;
  }
  return this_00;
}

/* 0009650c  CBasePlayer::UpdateMeleeBar  (192 bytes)
 * undefined UpdateMeleeBar(float param_1)
 */
/* CBasePlayer::UpdateMeleeBar(float) */

void __thiscall CBasePlayer::UpdateMeleeBar(CBasePlayer *this,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)&this->field_0x774 - param_1;
  if (0.01 <= fVar1) {
    if (-0.001 <= fVar1) {
      *(float *)&this->field_0x774 = fVar1;
    }
    else {
      *(undefined4 *)&this->field_0x774 = 0;
    }
  }
  else {
    *(undefined4 *)&this->field_0x774 = 0;
    *(undefined4 *)&this->field_0x12c = 0x3fc00000;
  }
  (*g_engfuncs.pfnMessageBegin)(1,gmsgKFuPower,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteChar)((int)ROUND(*(float *)&this->field_0x774));
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000965d0  CBasePlayer::GetMeleeMultiplier  (62 bytes)
 * longdouble GetMeleeMultiplier(CBasePlayer * this)
 */
/* CBasePlayer::GetMeleeMultiplier(void) */

longdouble __thiscall CBasePlayer::GetMeleeMultiplier(CBasePlayer *this)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)*(float *)&this->field_0x774;
  if (lVar1 < (longdouble)0.0) {
    lVar1 = (longdouble)0.0;
  }
  return (lVar1 * (longdouble)0.5 + (longdouble)50.0) * (longdouble)0.01;
}

/* 00096610  CBasePlayer::ColdCockAttack  (1158 bytes)
 * CBasePlayer * ColdCockAttack(float * param_1, float * param_2, float * param_3, int param_4, float param_5, CBasePlayer * param_6, char param_7, char param_8, char param_9, char param_10)
 */
/* CBasePlayer::ColdCockAttack(Vector, Vector, Vector, int, float, int, bool, bool, bool, bool) */

CBasePlayer * __thiscall
CBasePlayer::ColdCockAttack
          (CBasePlayer *this,float *param_1,float *param_2,float *param_3,int param_4,float param_5,
          CBasePlayer *param_6,char param_7,char param_8,char param_9,char param_10)

{
  edict_t *peVar1;
  entvars_t *peVar2;
  entvars_t *peVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  CBasePlayer *this_00;
  entvars_t **ppeVar8;
  vec_t *pvVar9;
  float fVar10;
  float local_9c;
  float local_98;
  float local_94;
  entvars_t *local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_5c [4];
  float local_4c;
  edict_t *local_2c;
  
  CTSAnimation::Animate((CTSAnimation *)&this->field_0x28c,this,(int)param_6);
  local_6c = *param_1;
  local_68 = param_1[1];
  local_64 = param_1[2];
  local_7c = (entvars_t *)*param_2;
  local_78 = param_2[1];
  local_74 = param_2[2];
  CheckHull(this,&local_6c,&local_7c,local_5c,param_4);
  if (1.0 <= local_4c) {
    return (CBasePlayer *)0x0;
  }
  if (local_2c == (edict_t *)0x0) {
    local_2c = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  this_00 = (CBasePlayer *)0x0;
  if (local_2c != (edict_t *)0x0) {
    this_00 = local_2c->pvPrivateData;
  }
  if (this_00 == (CBasePlayer *)0x0) {
    return (CBasePlayer *)0x0;
  }
  if (((this_00->pev->takedamage == 0.0) || ((this_00->pev->flags & 0x2000000) != 0)) ||
     ((char)this_00->pev->effects < '\0')) {
LAB_0009678c:
    this_00 = (CBasePlayer *)0x0;
  }
  else {
    iVar6 = (*this_00->vtable[0x32])(this_00);
    if (iVar6 == 0) {
      if (param_8 != '\0') {
        return (CBasePlayer *)0x0;
      }
    }
    else if (((param_10 != '\0') || ((float)friendlyfire._12_4_ == 0.0)) &&
            (param_6 = this_00,
            iVar6 = (**(code **)(*g_pGameRules + 0xcc))(g_pGameRules,this,this_00), iVar6 == 1))
    goto LAB_0009678c;
    bVar5 = true;
    iVar6 = (*this_00->vtable[0x32])(this_00);
    if (iVar6 != 0) {
      uVar7 = VictimKungfuHold(this,this_00);
      if ((char)uVar7 == '\0') {
        if ((param_7 != '\0') && (*(float *)&this_00->field_0x71c < gpGlobals->time)) {
          DropWeapon(this_00,0xfffffffe,param_5);
        }
        if ((param_9 != '\0') && (30.0 < param_5)) {
          peVar2 = this->pev;
          fVar10 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                        peVar2->velocity[1] * peVar2->velocity[1] +
                        peVar2->velocity[0] * peVar2->velocity[0]);
          peVar2 = this_00->pev;
          peVar3 = this->pev;
          local_9c = peVar2->origin[0] - peVar3->origin[0];
          local_98 = peVar2->origin[1] - peVar3->origin[1];
          fVar4 = peVar2->origin[2] - peVar3->origin[2];
          local_94 = SQRT(fVar4 * fVar4 + local_98 * local_98 + local_9c * local_9c);
          if (local_94 == 0.0) {
            local_94 = 1.0;
            local_9c = 0.0;
            local_98 = 0.0;
          }
          else {
            local_94 = 1.0 / local_94;
            local_9c = local_94 * local_9c;
            local_98 = local_94 * local_98;
            local_94 = local_94 * fVar4;
          }
          local_6c = fVar10 * local_9c;
          local_68 = fVar10 * local_98;
          local_64 = fVar10 * local_94;
          local_7c = (entvars_t *)(peVar2->velocity[0] + fVar10 * local_9c);
          local_78 = peVar2->velocity[1] + fVar10 * local_98;
          local_74 = peVar2->velocity[2] + fVar10 * local_94;
          ppeVar8 = &local_7c;
          pvVar9 = peVar2->velocity;
          for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pvVar9 = (vec_t)*ppeVar8;
            ppeVar8 = ppeVar8 + 1;
            pvVar9 = pvVar9 + 1;
          }
          this_00->pev->velocity[2] = 235.0;
        }
        peVar1 = this_00->pev->pContainingEntity;
        fVar10 = 0.5;
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN((int)peVar1,4,"player/kungfuhit.wav",0x3f800000,0x3f4ccccd,0,iVar6 + 0x5f,
                       fVar10);
      }
      else {
        bVar5 = false;
      }
      peVar2 = this->pev;
      peVar3 = this_00->pev;
      param_6 = (CBasePlayer *)&local_7c;
      local_7c = (entvars_t *)(peVar2->origin[0] - peVar3->origin[0]);
      local_78 = peVar2->origin[1] - peVar3->origin[1];
      local_74 = peVar2->origin[2] - peVar3->origin[2];
      PunchScreen();
    }
    if (bVar5) {
      glast_coldcock = 1;
      ClearMultiDamage();
      local_7c = (entvars_t *)*param_3;
      local_78 = param_3[1];
      local_74 = param_3[2];
      (*this_00->vtable[0x15])(this_00,this->pev,param_5,&local_7c,local_5c,0x4001080,param_6);
      ApplyMultiDamage(this->pev,this->pev);
      glast_coldcock = 0;
    }
  }
  return this_00;
}

/* 00096a9c  CBasePlayer::DeactivateSlowMotionFlow  (273 bytes)
 * undefined DeactivateSlowMotionFlow(void)
 */
/* CBasePlayer::DeactivateSlowMotionFlow(void) */

void __thiscall CBasePlayer::DeactivateSlowMotionFlow(CBasePlayer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (*this->vtable[5])(this,0x3f800000,0);
  *(undefined4 *)&this->field_0x180 = 0;
  *(undefined4 *)&this->field_0x17c = 0;
  this->field_0x175 = 0;
  iVar2 = 1;
  if (0 < gpGlobals->maxClients) {
    iVar3 = 0x184;
    do {
      if (*(int *)(&this->field_0x4 + iVar3) != 0) {
        iVar1 = *(int *)(&this->field_0x4 + iVar3);
        if (*(float *)(iVar1 + 0x17c) == 0.0) {
          (**(code **)(*(int *)(iVar1 + 0x60) + 0x14))(iVar1,0x3f800000,0);
          *(undefined1 *)(*(int *)(&this->field_0x4 + iVar3) + 0x175) = 0;
        }
        *(undefined4 *)(&this->field_0x4 + iVar3) = 0;
      }
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  iVar2 = 0;
  if ('\0' < (char)this->field_0x288) {
    iVar3 = 0x200;
    do {
      if (*(int *)(&this->field_0x8 + iVar3) != 0) {
        (**(code **)(*(int *)(*(int *)(&this->field_0x8 + iVar3) + 0x60) + 0x14))
                  (*(int *)(&this->field_0x8 + iVar3),0x3f800000,0);
        *(undefined4 *)(&this->field_0x8 + iVar3) = 0;
      }
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (char)this->field_0x288);
  }
  this->field_0x288 = 0;
  return;
}

/* 00096bb0  CBasePlayer::SlowMotionFlow  (1760 bytes)
 * undefined SlowMotionFlow(void)
 */
/* CBasePlayer::SlowMotionFlow(void) */

void __thiscall CBasePlayer::SlowMotionFlow(CBasePlayer *this)

{
  entvars_t *peVar1;
  bool bVar2;
  CBasePlayer *pCVar3;
  int iVar4;
  int *piVar5;
  int local_ac;
  int local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_5c [16];
  float local_4c;
  
  if ((*(float *)&this->field_0x17c != 0.0) && (*(float *)&this->field_0x178 <= gpGlobals->time)) {
    *(float *)&this->field_0x178 = gpGlobals->time + 0.5;
    bVar2 = false;
    local_94 = 1;
    if (0 < gpGlobals->maxClients) {
      local_ac = 0x184;
      do {
        if (*(int *)(&this->field_0x4 + local_ac) == 0) {
LAB_00096c70:
          pCVar3 = (CBasePlayer *)UTIL_PlayerByIndex(local_94);
          if ((((pCVar3 != (CBasePlayer *)0x0) &&
               (iVar4 = (*pCVar3->vtable[0x32])(pCVar3), iVar4 != 0)) && (this != pCVar3)) &&
             ((*(float *)&pCVar3->field_0x17c == 0.0 ||
              (*(float *)&pCVar3->field_0x180 != *(float *)&this->field_0x180)))) {
            peVar1 = pCVar3->pev;
            local_7c = peVar1->origin[0] + peVar1->view_ofs[0];
            local_78 = peVar1->origin[1] + peVar1->view_ofs[1];
            local_74 = peVar1->origin[2] + peVar1->view_ofs[2];
            peVar1 = this->pev;
            local_8c = peVar1->origin[0] + peVar1->view_ofs[0];
            local_88 = peVar1->origin[1] + peVar1->view_ofs[1];
            local_84 = peVar1->origin[2] + peVar1->view_ofs[2];
            UTIL_TraceLine(&local_8c,&local_7c,1,1,this->pev->pContainingEntity,local_5c);
            if (1.0 <= local_4c) {
              if (*(float *)&pCVar3->field_0x17c == 0.0) {
                *(CBasePlayer **)(&this->field_0x4 + local_ac) = pCVar3;
              }
              else if (*(float *)&this->field_0x180 <= *(float *)&pCVar3->field_0x180) {
                *(CBasePlayer **)(&this->field_0x4 + local_ac) = pCVar3;
              }
              else {
                bVar2 = true;
                *(undefined4 *)(&this->field_0x4 + local_ac) = 0;
              }
            }
          }
        }
        else if (*(float *)(*(int *)(&this->field_0x4 + local_ac) + 0x17c) != 0.0) {
          *(undefined4 *)(&this->field_0x4 + local_ac) = 0;
          goto LAB_00096c70;
        }
        local_ac = local_ac + 4;
        local_94 = local_94 + 1;
      } while ((local_94 <= gpGlobals->maxClients) && (!bVar2));
    }
    if (!bVar2) {
      (*this->vtable[5])(this,*(undefined4 *)&this->field_0x17c,(int)(char)this->field_0x175);
      local_94 = 1;
      if (0 < gpGlobals->maxClients) {
        iVar4 = 0x184;
        do {
          if (*(int *)(&this->field_0x4 + iVar4) != 0) {
            if ((*(float *)(*(int *)(&this->field_0x4 + iVar4) + 0x17c) == 0.0) ||
               (*(float *)(*(int *)(&this->field_0x4 + iVar4) + 0x180) !=
                *(float *)&this->field_0x180)) {
              (**(code **)(*(int *)(*(int *)(&this->field_0x4 + iVar4) + 0x60) + 0x14))
                        (*(int *)(&this->field_0x4 + iVar4),*(undefined4 *)&this->field_0x180,0);
              *(undefined1 *)(*(int *)(&this->field_0x4 + iVar4) + 0x175) = this->field_0x175;
            }
            else {
              *(undefined4 *)(&this->field_0x4 + iVar4) = 0;
            }
          }
          iVar4 = iVar4 + 4;
          local_94 = local_94 + 1;
        } while (local_94 <= gpGlobals->maxClients);
      }
      if ((char)this->field_0x288 < ' ') {
        piVar5 = (int *)0x0;
        while (piVar5 = (int *)UTIL_FindEntityByClassname(piVar5,"grenade"), piVar5 != (int *)0x0) {
          bVar2 = false;
          if ((*(edict_t **)(*piVar5 + 0x208) == (edict_t *)0x0) ||
             (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(*piVar5 + 0x208)),
             iVar4 == 0)) {
            bVar2 = true;
          }
          if (bVar2) break;
          iVar4 = UTIL_EntInArray((int *)&this->field_0x208,0x20,(int)piVar5);
          if (iVar4 == -1) {
            peVar1 = this->pev;
            local_8c = peVar1->origin[0] + peVar1->view_ofs[0];
            local_88 = peVar1->origin[1] + peVar1->view_ofs[1];
            local_84 = peVar1->origin[2] + peVar1->view_ofs[2];
            UTIL_TraceLine(&local_8c,*piVar5 + 8,1,1,peVar1->pContainingEntity,local_5c);
            if ((1.0 <= local_4c) &&
               ((**(code **)(piVar5[0x18] + 0x14))(piVar5,*(undefined4 *)&this->field_0x180,0),
               (char)this->field_0x288 < ' ')) {
              *(int **)(&this->field_0x208 + (char)this->field_0x288 * 4) = piVar5;
              this->field_0x288 = this->field_0x288 + '\x01';
            }
          }
        }
        piVar5 = (int *)0x0;
        while (piVar5 = (int *)UTIL_FindEntityByClassname(piVar5,&DAT_001077e5),
              piVar5 != (int *)0x0) {
          bVar2 = false;
          if ((*(edict_t **)(*piVar5 + 0x208) == (edict_t *)0x0) ||
             (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(*piVar5 + 0x208)),
             iVar4 == 0)) {
            bVar2 = true;
          }
          if (bVar2) break;
          iVar4 = *piVar5;
          bVar2 = false;
          if (((*(float *)(iVar4 + 0x20) == g_vecZero) && (*(float *)(iVar4 + 0x24) == DAT_00190ef0)
              ) && (*(float *)(iVar4 + 0x28) == DAT_00190ef4)) {
            bVar2 = true;
          }
          if ((!bVar2) &&
             (iVar4 = UTIL_EntInArray((int *)&this->field_0x208,0x20,(int)piVar5), iVar4 == -1)) {
            peVar1 = this->pev;
            local_8c = peVar1->origin[0] + peVar1->view_ofs[0];
            local_88 = peVar1->origin[1] + peVar1->view_ofs[1];
            local_84 = peVar1->origin[2] + peVar1->view_ofs[2];
            UTIL_TraceLine(&local_8c,*piVar5 + 8,1,1,peVar1->pContainingEntity,local_5c);
            if ((1.0 <= local_4c) &&
               ((**(code **)(piVar5[0x18] + 0x14))(piVar5,*(undefined4 *)&this->field_0x180,0),
               (char)this->field_0x288 < ' ')) {
              *(int **)(&this->field_0x208 + (char)this->field_0x288 * 4) = piVar5;
              this->field_0x288 = this->field_0x288 + '\x01';
            }
          }
        }
        piVar5 = (int *)0x0;
        while (piVar5 = (int *)UTIL_FindEntityByClassname(piVar5,"WorldGun"), piVar5 != (int *)0x0)
        {
          bVar2 = false;
          if ((*(edict_t **)(*piVar5 + 0x208) == (edict_t *)0x0) ||
             (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(*piVar5 + 0x208)),
             iVar4 == 0)) {
            bVar2 = true;
          }
          if (bVar2) {
            return;
          }
          iVar4 = *piVar5;
          bVar2 = false;
          if (((*(float *)(iVar4 + 0x20) == g_vecZero) && (*(float *)(iVar4 + 0x24) == DAT_00190ef0)
              ) && (*(float *)(iVar4 + 0x28) == DAT_00190ef4)) {
            bVar2 = true;
          }
          if ((!bVar2) &&
             (iVar4 = UTIL_EntInArray((int *)&this->field_0x208,0x20,(int)piVar5), iVar4 == -1)) {
            peVar1 = this->pev;
            local_8c = peVar1->origin[0] + peVar1->view_ofs[0];
            local_88 = peVar1->origin[1] + peVar1->view_ofs[1];
            local_84 = peVar1->origin[2] + peVar1->view_ofs[2];
            UTIL_TraceLine(&local_8c,*piVar5 + 8,1,1,peVar1->pContainingEntity,local_5c);
            if ((1.0 <= local_4c) &&
               ((**(code **)(piVar5[0x18] + 0x14))(piVar5,*(undefined4 *)&this->field_0x180,0),
               (char)this->field_0x288 < ' ')) {
              *(int **)(&this->field_0x208 + (char)this->field_0x288 * 4) = piVar5;
              this->field_0x288 = this->field_0x288 + '\x01';
            }
          }
        }
      }
    }
  }
  return;
}

/* 0009735c  CBasePlayer::IsObserver  (13 bytes)
 * undefined4 IsObserver(void)
 */
/* CBasePlayer::IsObserver(void) */

int __thiscall CBasePlayer::IsObserver(CBasePlayer *this)

{
  return this->pev->iuser1;
}

/* 0009736c  CBasePlayer::BodyTarget  (155 bytes)
 * CBasePlayer * BodyTarget(int * param_1)
 */
/* CBasePlayer::BodyTarget(Vector const &) */

CBasePlayer * __thiscall CBasePlayer::BodyTarget(CBasePlayer *this,int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longdouble lVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  (**(code **)(param_1[0x18] + 0xf8))(&local_1c,param_1);
  iVar3 = *param_1;
  lVar4 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.5,1.1);
  fVar1 = *(float *)(iVar3 + 0x178);
  fVar2 = *(float *)(iVar3 + 0x17c);
  this->pev = (entvars_t *)(local_20 + (float)(lVar4 * (longdouble)*(float *)(iVar3 + 0x174)));
  *(float *)&this->field_0x4 = local_1c + (float)(lVar4 * (longdouble)fVar1);
  *(float *)&this->field_0x8 = local_18 + (float)(lVar4 * (longdouble)fVar2);
  return this;
}

/* 00097408  CBasePlayer::StartSneaking  (41 bytes)
 * undefined StartSneaking(void)
 */
/* CBasePlayer::StartSneaking(void) */

void __thiscall CBasePlayer::StartSneaking(CBasePlayer *this)

{
  *(float *)&this->field_0x9d8 = gpGlobals->time - 1.0;
  return;
}

/* 00097434  CBasePlayer::StopSneaking  (41 bytes)
 * undefined StopSneaking(void)
 */
/* CBasePlayer::StopSneaking(void) */

void __thiscall CBasePlayer::StopSneaking(CBasePlayer *this)

{
  *(float *)&this->field_0x9d8 = gpGlobals->time + 30.0;
  return;
}

/* 00097460  CBasePlayer::IsSneaking  (54 bytes)
 * bool IsSneaking(void)
 */
/* CBasePlayer::IsSneaking(void) */

bool __thiscall CBasePlayer::IsSneaking(CBasePlayer *this)

{
  return *(float *)&this->field_0x9d8 <= gpGlobals->time;
}

/* 00097498  CBasePlayer::IsAlive  (59 bytes)
 * undefined4 IsAlive(void)
 */
/* CBasePlayer::IsAlive(void) */

undefined4 __thiscall CBasePlayer::IsAlive(CBasePlayer *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((this->pev->deadflag == 0) && (0.0 < this->pev->health)) {
    uVar1 = 1;
  }
  return uVar1;
}

/* 000974d4  CBasePlayer::ShouldFadeOnDeath  (6 bytes)
 * undefined4 ShouldFadeOnDeath(void)
 */
/* CBasePlayer::ShouldFadeOnDeath(void) */

undefined4 CBasePlayer::ShouldFadeOnDeath(void)

{
  return 0;
}

/* 000974dc  CBasePlayer::IsPlayer  (6 bytes)
 * undefined4 IsPlayer(void)
 */
/* CBasePlayer::IsPlayer(void) */

undefined4 CBasePlayer::IsPlayer(void)

{
  return 1;
}

/* 000974e4  CBasePlayer::IsNetClient  (6 bytes)
 * undefined4 IsNetClient(void)
 */
/* CBasePlayer::IsNetClient(void) */

undefined4 CBasePlayer::IsNetClient(void)

{
  return 1;
}

/* 000974ec  CBasePlayer::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CBasePlayer::ObjectCaps(void) */

undefined4 CBasePlayer::ObjectCaps(void)

{
  return 0;
}

/* 00099634  CBasePlayer::StartObserver  (987 bytes)
 * undefined StartObserver(undefined4 param_1, undefined4 * param_2)
 */
/* CBasePlayer::StartObserver(Vector, Vector) */

void __thiscall CBasePlayer::StartObserver(CBasePlayer *this,undefined4 param_1,undefined4 *param_2)

{
  undefined1 *this_00;
  int *piVar1;
  CTSGun *this_01;
  entvars_t *peVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  char *sz;
  vec_t *pvVar6;
  vec_t *pvVar7;
  
  *(undefined4 *)&this->field_0x544 = *(undefined4 *)&this->field_0x540;
  (*g_engfuncs.pfnMessageBegin)(1,gmsgTSCash,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x540);
  (*g_engfuncs.pfnMessageEnd)();
  *(undefined4 *)&this->field_0x764 = 0;
  this->pev->iuser4 = 0;
  this->pev->fuser1 = 1.0;
  *(undefined4 *)&this->field_0x170 = 0x3f800000;
  *(undefined4 *)&this->field_0x168 = 0x3f800000;
  (*g_engfuncs.pfnMessageBegin)(5,0x17,this->pev->origin,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x7d);
  uVar4 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(uVar4 & 0xff);
  (*g_engfuncs.pfnMessageEnd)();
  if (*(int *)&this->field_0xa10 != 0) {
    this_01 = *(CTSGun **)&this->field_0xa10;
    if (*(int *)&this_01->field_0x88 == 0x10) {
      CTSGun::Reset(this_01);
      CTSGun::HolsterWeapon(this_01);
    }
    (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x130))
              (*(undefined4 *)&this->field_0xa10,0);
  }
  DropFlag(this,'\0');
  this_00 = &this->field_0x9c4;
  bVar3 = int((EHANDLE *)this_00);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    iVar5 = EHANDLE::operator->((EHANDLE *)this_00);
    (**(code **)(*(int *)(iVar5 + 0x60) + 0xe0))(iVar5,this,this,0,0);
    EHANDLE::operator=((EHANDLE *)this_00,(int *)0x0);
  }
  SetSuitUpdate(this,(char *)0x0,0,0);
  (*g_engfuncs.pfnMessageBegin)(2,gmsgTSActiveItems,(float *)0x0,(edict_t *)0x0);
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar5);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  *(undefined4 *)&this->field_0x9f4 = 0;
  *(undefined4 *)&this->field_0x9f0 = 0;
  this->pev->fov = 0.0;
  (*g_engfuncs.pfnMessageBegin)(1,gmsgSetFOV,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  this->pev->effects = 0x80;
  pvVar6 = (vec_t *)&g_vecZero;
  pvVar7 = this->pev->view_ofs;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar7 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar7 = pvVar7 + 1;
  }
  peVar2 = this->pev;
  pvVar6 = peVar2->v_angle;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar6 = (vec_t)*param_2;
    param_2 = param_2 + 1;
    pvVar6 = pvVar6 + 1;
  }
  pvVar6 = this->pev->v_angle;
  pvVar7 = peVar2->angles;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar7 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar7 = pvVar7 + 1;
  }
  this->pev->fixangle = 1;
  this->pev->solid = 0;
  this->pev->takedamage = 0.0;
  this->pev->movetype = 0;
  *(uint *)&this->field_0x848 = *(uint *)&this->field_0x848 & 0xfffffff7;
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 & 0xffffbfff;
  this->pev->deadflag = 3;
  this->pev->health = 1.0;
  *(undefined4 *)&this->field_0x9b4 = 1;
  (*g_engfuncs.pfnMessageBegin)(2,gmsgTeamInfo,(float *)0x0,(edict_t *)0x0);
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar5);
  sz = (char *)(*this->vtable[0x34])(this);
  (*g_engfuncs.pfnWriteString)(sz);
  (*g_engfuncs.pfnMessageEnd)();
  RemoveAllItems(this,1);
  UTIL_SetOrigin((int)this->pev,param_1);
  if (*(int *)&this->field_0x76c == 0) {
    iVar5 = 2;
  }
  else {
    iVar5 = *(int *)&this->field_0x76c;
  }
  Observer_SetMode(this,iVar5);
  (*g_engfuncs.pfnMessageBegin)(2,gmsgSpectator,(float *)0x0,(edict_t *)0x0);
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar5);
  (*g_engfuncs.pfnWriteByte)(1);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 00099a14  CBasePlayer::StopObserver  (246 bytes)
 * undefined StopObserver(void)
 */
/* CBasePlayer::StopObserver(void) */

void __thiscall CBasePlayer::StopObserver(CBasePlayer *this)

{
  entvars_t *peVar1;
  int iValue;
  
  if ((*(float *)&this->field_0x770 <= 0.0) || (*(float *)&this->field_0x770 <= gpGlobals->time)) {
    if ((this->pev->iuser1 != 0) || (this->pev->iuser2 != 0)) {
      *(int *)&this->field_0x76c = this->pev->iuser1;
      (*g_engfuncs.pfnMessageBegin)(2,gmsgSpectator,(float *)0x0,(edict_t *)0x0);
      iValue = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(iValue);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
      peVar1 = this->pev;
      peVar1->iuser2 = 0;
      peVar1->iuser1 = 0;
    }
    this->pev->button = 0;
    *(undefined4 *)&this->field_0xb34 = 0;
    respawn((uint)this->pev);
    this->pev->nextthink = -1.0;
  }
  return;
}

/* 00099b0c  CBasePlayer::Observer_FindNextPlayer  (402 bytes)
 * undefined Observer_FindNextPlayer(char param_1)
 */
/* CBasePlayer::Observer_FindNextPlayer(bool) */

void __thiscall CBasePlayer::Observer_FindNextPlayer(CBasePlayer *this,char param_1)

{
  int iVar1;
  CBasePlayer *pCVar2;
  int iVar3;
  entvars_t *peVar4;
  int iVar5;
  
  if (*(int *)&this->field_0x75c == 0) {
    peVar4 = this->pev;
  }
  else {
    peVar4 = (entvars_t *)**(int **)&this->field_0x75c;
  }
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(peVar4->pContainingEntity);
  *(undefined4 *)&this->field_0x75c = 0;
  iVar5 = iVar1;
  do {
    iVar5 = iVar5 + (uint)(param_1 == '\0') * 2 + -1;
    if (gpGlobals->maxClients < iVar5) {
      iVar5 = 1;
    }
    if (iVar5 < 1) {
      iVar5 = gpGlobals->maxClients;
    }
    pCVar2 = (CBasePlayer *)UTIL_PlayerByIndex(iVar5);
    if ((((pCVar2 != (CBasePlayer *)0x0) && (pCVar2 != this)) && (pCVar2->pev->iuser1 == 0)) &&
       (-1 < (char)pCVar2->pev->effects)) {
      iVar3 = (*pCVar2->vtable[0x2d])(pCVar2);
      if (iVar3 != 0) {
        if ((((byte)(TSGameRules - 2U) < 2) || (g_lastManStanding != 0)) &&
           (0.0 <= *(float *)&this->field_0x770)) {
          iVar3 = (**(code **)(*g_pGameRules + 0xcc))(g_pGameRules,this,pCVar2);
          if (iVar3 != 1) goto LAB_00099c38;
        }
        *(CBasePlayer **)&this->field_0x75c = pCVar2;
        break;
      }
    }
LAB_00099c38:
  } while (iVar5 != iVar1);
  if (*(int *)&this->field_0x75c == 0) {
    Observer_SetMode(this,3);
  }
  else {
    peVar4 = this->pev;
    iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(**(int **)&this->field_0x75c + 0x208));
    peVar4->iuser2 = iVar5;
    UTIL_SetOrigin((int)this->pev,**(int **)&this->field_0x75c + 8);
  }
  return;
}

/* 00099ca4  CBasePlayer::Observer_Idle  (142 bytes)
 * undefined Observer_Idle(void)
 */
/* CBasePlayer::Observer_Idle(void) */

void __thiscall CBasePlayer::Observer_Idle(CBasePlayer *this)

{
  int iVar1;
  
  if (((*(float *)&this->field_0x764 <= gpGlobals->time) &&
      (*(float *)&this->field_0x764 = gpGlobals->time + 0.5, this->pev->iuser1 != 3)) &&
     (*(int *)&this->field_0x75c != 0)) {
    iVar1 = (**(code **)(*(int *)(*(int *)&this->field_0x75c + 0x60) + 0xb4))
                      (*(int *)&this->field_0x75c);
    if ((iVar1 == 0) || (*(int *)(**(int **)&this->field_0x75c + 0x244) != 0)) {
      Observer_FindNextPlayer(this,'\0');
    }
  }
  return;
}

/* 00099d34  CBasePlayer::Observer_HandleButtons  (267 bytes)
 * undefined Observer_HandleButtons(void)
 */
/* CBasePlayer::Observer_HandleButtons(void) */

void __thiscall CBasePlayer::Observer_HandleButtons(CBasePlayer *this)

{
  int iVar1;
  
  if (*(float *)&this->field_0x760 <= gpGlobals->time) {
    if ((this->pev->button & 2) != 0) {
      if (this->pev->iuser1 == 3) {
        iVar1 = 2;
      }
      else if (this->pev->iuser1 == 2) {
        iVar1 = 1;
      }
      else if (this->pev->iuser1 == 1) {
        iVar1 = 5;
      }
      else {
        iVar1 = 3;
      }
      Observer_SetMode(this,iVar1);
      *(float *)&this->field_0x760 = gpGlobals->time + 0.2;
    }
    if (((this->pev->button & 8) != 0) && (this->pev->iuser1 != 3)) {
      Observer_FindNextPlayer(this,'\0');
      *(float *)&this->field_0x760 = gpGlobals->time + 0.2;
    }
    if (((this->pev->button & 0x10) != 0) && (this->pev->iuser1 != 3)) {
      Observer_FindNextPlayer(this,'\x01');
      *(float *)&this->field_0x760 = gpGlobals->time + 0.2;
    }
  }
  return;
}

/* 00099e44  CBasePlayer::Observer_SetMode  (366 bytes)
 * undefined Observer_SetMode(int param_1)
 */
/* CBasePlayer::Observer_SetMode(int) */

void __thiscall CBasePlayer::Observer_SetMode(CBasePlayer *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  
  if (param_1 == this->pev->iuser1) {
    return;
  }
  pvVar3 = (vec_t *)&g_vecZero;
  pvVar4 = this->pev->view_ofs;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  this->pev->viewmodel = 0;
  if (param_1 == 3) {
    this->pev->iuser1 = 3;
    this->pev->iuser2 = 0;
    (*g_engfuncs.pfnSetClientMaxspeed)(this->pev->pContainingEntity,420.0);
    return;
  }
  if (param_1 == 5) {
    if (*(int *)&this->field_0x75c == 0) {
      Observer_FindNextPlayer(this,'\0');
    }
    if (*(int *)&this->field_0x75c == 0) goto LAB_00099fa4;
    this->pev->iuser1 = 5;
  }
  else if (param_1 == 1) {
    if (*(int *)&this->field_0x75c == 0) {
      Observer_FindNextPlayer(this,'\0');
    }
    if (*(int *)&this->field_0x75c == 0) {
LAB_00099fa4:
      Observer_SetMode(this,3);
      return;
    }
    this->pev->iuser1 = 1;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    if (*(int *)&this->field_0x75c == 0) {
      Observer_FindNextPlayer(this,'\0');
    }
    if (*(int *)&this->field_0x75c == 0) goto LAB_00099fa4;
    this->pev->iuser1 = 2;
  }
  peVar1 = this->pev;
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(**(int **)&this->field_0x75c + 0x208));
  peVar1->iuser2 = iVar2;
  return;
}

/* 000d847c  CBasePlayer::Pain  (149 bytes)
 * undefined Pain(void)
 */
/* CBasePlayer::Pain(void) */

void __thiscall CBasePlayer::Pain(CBasePlayer *this)

{
  char *pcVar1;
  entvars_t *peVar2;
  longdouble lVar3;
  
  lVar3 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
  if ((longdouble)0.33 < lVar3) {
    if ((longdouble)0.66 < lVar3) {
      peVar2 = this->pev;
      pcVar1 = "player/pl_pain7.wav";
    }
    else {
      peVar2 = this->pev;
      pcVar1 = "player/pl_pain6.wav";
    }
  }
  else {
    peVar2 = this->pev;
    pcVar1 = "player/pl_pain5.wav";
  }
  EMIT_SOUND_DYN((int)peVar2->pContainingEntity,2,pcVar1,0x3f800000,0x3f4ccccd,0,100,0.5);
  return;
}

/* 000d86b8  CBasePlayer::DeathSound  (163 bytes)
 * undefined DeathSound(void)
 */
/* CBasePlayer::DeathSound(void) */

void __thiscall CBasePlayer::DeathSound(CBasePlayer *this)

{
  int iVar1;
  char *pcVar2;
  entvars_t *peVar3;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,5);
  if (iVar1 == 2) {
    peVar3 = this->pev;
    pcVar2 = "player/pl_pain6.wav";
  }
  else if (iVar1 < 3) {
    if (iVar1 != 1) goto LAB_000d8743;
    peVar3 = this->pev;
    pcVar2 = "player/pl_pain5.wav";
  }
  else {
    if (iVar1 != 3) goto LAB_000d8743;
    peVar3 = this->pev;
    pcVar2 = "player/pl_pain7.wav";
  }
  EMIT_SOUND_DYN((int)peVar3->pContainingEntity,2,pcVar2,0x3f800000,0x3f4ccccd,0,100,0.5);
LAB_000d8743:
  EMIT_GROUPNAME_SUIT((int)this->pev->pContainingEntity,"HEV_DEAD");
  return;
}

/* 000d8760  CBasePlayer::TakeHealth  (140 bytes)
 * undefined4 TakeHealth(int * param_1, float param_2)
 */
/* CBasePlayer::TakeHealth(float, int) */

undefined4 CBasePlayer::TakeHealth(int *param_1,float param_2)

{
  undefined4 uVar1;
  
  if ((*(float *)(*param_1 + 0x16c) == 0.0) ||
     (*(float *)(*param_1 + 0x1b0) < *(float *)(*param_1 + 0x160))) {
    uVar1 = 0;
  }
  else {
    *(float *)(*param_1 + 0x160) = param_2 + *(float *)(*param_1 + 0x160);
    if (*(float *)(*param_1 + 0x1b0) < *(float *)(*param_1 + 0x160)) {
      param_1[0x1cf] = (int)(gpGlobals->time + 1.0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* 000d87f0  CBasePlayer::GetGunPosition  (100 bytes)
 * undefined GetGunPosition(undefined4 * param_1, int * param_2)
 */
/* CBasePlayer::GetGunPosition(void) */

void CBasePlayer::GetGunPosition(undefined4 *param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float local_2c [4];
  undefined4 local_1c [5];
  
  iVar1 = *param_2;
  local_2c[0] = *(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x174);
  local_2c[1] = *(float *)(iVar1 + 0xc) + *(float *)(iVar1 + 0x178);
  local_2c[2] = *(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x17c);
  pfVar2 = local_2c;
  puVar3 = local_1c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_1 = local_1c[0];
  param_1[1] = local_1c[1];
  param_1[2] = local_1c[2];
  return;
}

/* 000d8854  CBasePlayer::PackDeadPlayerItems  (1165 bytes)
 * undefined PackDeadPlayerItems(void)
 */
/* CBasePlayer::PackDeadPlayerItems(void) */

void __thiscall CBasePlayer::PackDeadPlayerItems(CBasePlayer *this)

{
  int iVar1;
  entvars_t *peVar2;
  int iVar3;
  CWeaponBox *this_00;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  vec_t *pvVar8;
  vec_t *pvVar9;
  undefined1 *local_130;
  int local_118;
  int local_114;
  float local_10c [4];
  int local_fc [36];
  int local_6c [23];
  
  iVar6 = 0;
  local_118 = 0;
  piVar7 = local_6c;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  memset(local_fc,-1,0x84);
  iVar4 = (**(code **)(*g_pGameRules + 0xc0))(g_pGameRules,this);
  iVar3 = (**(code **)(*g_pGameRules + 0xc4))(g_pGameRules,this);
  if ((iVar4 != 9) || (iVar3 != 0xc)) {
    local_114 = 0;
    puVar5 = &this->field_0x9f0;
    local_130 = puVar5;
    do {
      if (*(int *)(puVar5 + 8) != 0) {
        for (iVar1 = *(int *)(local_130 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x84)) {
          if ((iVar4 == 7) ||
             (((iVar4 == 8 && (*(int *)&this->field_0xa10 != 0)) &&
              (iVar1 == *(int *)&this->field_0xa10)))) {
            local_6c[iVar6] = iVar1;
            iVar6 = iVar6 + 1;
          }
        }
      }
      if (*(int *)(puVar5 + 0xc) != 0) {
        for (iVar1 = *(int *)(local_130 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x84)) {
          if ((iVar4 == 7) ||
             (((iVar4 == 8 && (*(int *)&this->field_0xa10 != 0)) &&
              (iVar1 == *(int *)&this->field_0xa10)))) {
            local_6c[iVar6] = iVar1;
            iVar6 = iVar6 + 1;
          }
        }
      }
      if (*(int *)(puVar5 + 0x10) != 0) {
        for (iVar1 = *(int *)(local_130 + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x84)) {
          if ((iVar4 == 7) ||
             (((iVar4 == 8 && (*(int *)&this->field_0xa10 != 0)) &&
              (iVar1 == *(int *)&this->field_0xa10)))) {
            local_6c[iVar6] = iVar1;
            iVar6 = iVar6 + 1;
          }
        }
      }
      local_130 = local_130 + 0xc;
      puVar5 = puVar5 + 0xc;
      local_114 = local_114 + 3;
    } while (local_114 < 6);
    if (iVar3 != 0xc) {
      local_114 = 0;
      piVar7 = (int *)&this->field_0xa20;
      do {
        if (0 < *piVar7) {
          if (iVar3 == 10) {
            local_fc[local_118] = local_114;
            local_118 = local_118 + 1;
          }
          else if (iVar3 == 0xb) {
            if ((*(int *)&this->field_0xa10 == 0) ||
               (iVar6 = (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x14c))
                                  (*(int *)&this->field_0xa10), local_114 != iVar6)) {
              if ((*(int *)&this->field_0xa10 != 0) &&
                 (iVar6 = (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x150))
                                    (*(int *)&this->field_0xa10), local_114 == iVar6)) {
                local_fc[local_118] = local_114;
                local_118 = local_118 + 1;
              }
            }
            else {
              local_fc[local_118] = local_114;
              local_118 = local_118 + 1;
            }
          }
        }
        iVar6 = local_114 + 1;
        if (0 < piVar7[1]) {
          if (iVar3 == 10) {
            local_fc[local_118] = iVar6;
            local_118 = local_118 + 1;
          }
          else if ((iVar3 == 0xb) &&
                  (((*(int *)&this->field_0xa10 != 0 &&
                    (iVar4 = (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x14c))
                                       (*(int *)&this->field_0xa10), iVar6 == iVar4)) ||
                   ((*(int *)&this->field_0xa10 != 0 &&
                    (iVar4 = (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x150))
                                       (*(int *)&this->field_0xa10), iVar6 == iVar4)))))) {
            local_fc[local_118] = iVar6;
            local_118 = local_118 + 1;
          }
        }
        piVar7 = piVar7 + 2;
        local_114 = local_114 + 2;
      } while (local_114 < 0x20);
    }
    this_00 = (CWeaponBox *)
              CBaseEntity::Create(0x10e5a7,this->pev->origin,this->pev->angles,
                                  this->pev->pContainingEntity);
    this_00->pev->angles[0] = 0.0;
    this_00->pev->angles[2] = 0.0;
    *(undefined4 *)&this_00->field_0xc = 0xffff0000;
    *(code **)&this_00->field_0x10 = CWeaponBox::Kill;
    this_00->pev->nextthink = gpGlobals->time + 120.0;
    local_118 = 0;
    iVar6 = 0;
    while (local_fc[0] != -1) {
      CWeaponBox::PackAmmo
                (this_00,(&CBasePlayerItem::AmmoInfoArray)[local_fc[local_118] * 2] -
                         (int)gpGlobals->pStringBase,
                 *(int *)(&this->field_0xa20 + local_fc[local_118] * 4));
      local_118 = local_118 + 1;
      local_fc[0] = local_fc[local_118];
    }
    iVar4 = 0;
    while (local_6c[0] != 0) {
      CWeaponBox::PackWeapon(this_00,*(int **)((int)local_6c + iVar4));
      iVar6 = iVar6 + 1;
      iVar4 = iVar6 * 4;
      local_6c[0] = local_6c[iVar6];
    }
    peVar2 = this->pev;
    local_10c[0] = peVar2->velocity[0] * 1.2;
    local_10c[1] = peVar2->velocity[1] * 1.2;
    local_10c[2] = peVar2->velocity[2] * 1.2;
    pvVar8 = local_10c;
    pvVar9 = this_00->pev->velocity;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pvVar9 = *pvVar8;
      pvVar8 = pvVar8 + 1;
      pvVar9 = pvVar9 + 1;
    }
  }
  RemoveAllItems(this,1);
  return;
}

/* 000d8cec  CBasePlayer::RemoveAllItems  (609 bytes)
 * undefined RemoveAllItems(int param_1)
 */
/* CBasePlayer::RemoveAllItems(int) */

void __thiscall CBasePlayer::RemoveAllItems(CBasePlayer *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_14;
  
  if (*(int *)&this->field_0xa10 != 0) {
    ResetAutoaim(this);
    (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x130))
              (*(undefined4 *)&this->field_0xa10,0);
    *(undefined4 *)&this->field_0xa10 = 0;
  }
  *(undefined4 *)&this->field_0xa18 = 0;
  local_14 = 0;
  piVar4 = (int *)&this->field_0x9f8;
  do {
    iVar1 = *piVar4;
    *(int *)&this->field_0xa10 = iVar1;
    while (iVar1 != 0) {
      iVar2 = *(int *)&this->field_0xa10;
      iVar1 = *(int *)(iVar2 + 0x84);
      (**(code **)(*(int *)(iVar2 + 0x60) + 0x140))(iVar2);
      *(int *)&this->field_0xa10 = iVar1;
    }
    *piVar4 = 0;
    iVar1 = piVar4[1];
    *(int *)&this->field_0xa10 = iVar1;
    while (iVar1 != 0) {
      iVar2 = *(int *)&this->field_0xa10;
      iVar1 = *(int *)(iVar2 + 0x84);
      (**(code **)(*(int *)(iVar2 + 0x60) + 0x140))(iVar2);
      *(int *)&this->field_0xa10 = iVar1;
    }
    piVar4[1] = 0;
    iVar1 = piVar4[2];
    *(int *)&this->field_0xa10 = iVar1;
    while (iVar1 != 0) {
      iVar2 = *(int *)&this->field_0xa10;
      iVar1 = *(int *)(iVar2 + 0x84);
      (**(code **)(*(int *)(iVar2 + 0x60) + 0x140))(iVar2);
      *(int *)&this->field_0xa10 = iVar1;
    }
    piVar4[2] = 0;
    piVar4 = piVar4 + 3;
    local_14 = local_14 + 3;
  } while (local_14 < 6);
  *(undefined4 *)&this->field_0xa10 = 0;
  this->pev->viewmodel = 0;
  this->pev->weaponmodel = 0;
  if (param_1 == 0) {
    piVar4 = &this->pev->weapons;
    *piVar4 = *piVar4 & 0x80000000;
  }
  else {
    this->pev->weapons = 0;
  }
  local_14 = 0x1f;
  puVar3 = (undefined4 *)&this->field_0xa9c;
  do {
    *puVar3 = 0;
    puVar3[-1] = 0;
    puVar3[-2] = 0;
    puVar3[-3] = 0;
    puVar3[-4] = 0;
    puVar3[-5] = 0;
    puVar3[-6] = 0;
    puVar3[-7] = 0;
    puVar3[-8] = 0;
    puVar3[-9] = 0;
    puVar3[-10] = 0;
    puVar3[-0xb] = 0;
    puVar3[-0xc] = 0;
    puVar3[-0xd] = 0;
    puVar3[-0xe] = 0;
    puVar3[-0xf] = 0;
    puVar3 = puVar3 + -0x10;
    local_14 = local_14 + -0x10;
  } while (-1 < local_14);
  (*this->vtable[0x5b])(this);
  (*g_engfuncs.pfnMessageBegin)(1,gmsgCurWeapon,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000d8f50  CBasePlayer::SetAnimation  (21 bytes)
 * undefined SetAnimation(void)
 */
/* CBasePlayer::SetAnimation(PLAYER_ANIM) */

void CBasePlayer::SetAnimation(void)

{
  return;
}

/* 000d8f68  CBasePlayer::TabulateAmmo  (244 bytes)
 * undefined TabulateAmmo(void)
 */
/* CBasePlayer::TabulateAmmo(void) */

void __thiscall CBasePlayer::TabulateAmmo(CBasePlayer *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetAmmoIndex("9mm");
  uVar2 = AmmoInventory(this,iVar1);
  *(undefined4 *)&this->field_0x2c = uVar2;
  iVar1 = GetAmmoIndex("357");
  uVar2 = AmmoInventory(this,iVar1);
  *(undefined4 *)&this->field_0x30 = uVar2;
  iVar1 = GetAmmoIndex("ARgrenades");
  uVar2 = AmmoInventory(this,iVar1);
  *(undefined4 *)&this->field_0x48 = uVar2;
  iVar1 = GetAmmoIndex("bolts");
  uVar2 = AmmoInventory(this,iVar1);
  *(undefined4 *)&this->field_0x34 = uVar2;
  iVar1 = GetAmmoIndex("buckshot");
  uVar2 = AmmoInventory(this,iVar1);
  *(undefined4 *)&this->field_0x38 = uVar2;
  iVar1 = GetAmmoIndex("rockets");
  uVar2 = AmmoInventory(this,iVar1);
  *(undefined4 *)&this->field_0x3c = uVar2;
  iVar1 = GetAmmoIndex("uranium");
  uVar2 = AmmoInventory(this,iVar1);
  *(undefined4 *)&this->field_0x40 = uVar2;
  iVar1 = GetAmmoIndex("Hornets");
  uVar2 = AmmoInventory(this,iVar1);
  *(undefined4 *)&this->field_0x44 = uVar2;
  return;
}

/* 000d905c  CBasePlayer::WaterMove  (1159 bytes)
 * undefined WaterMove(void)
 */
/* CBasePlayer::WaterMove(void) */

void __thiscall CBasePlayer::WaterMove(CBasePlayer *this)

{
  float fVar1;
  float fVar2;
  char *pcVar3;
  edict_t *peVar4;
  int iVar5;
  edict_t *peVar6;
  entvars_t *peVar7;
  uint uVar8;
  void **ppvVar9;
  uint uVar10;
  undefined4 uVar11;
  
  peVar7 = this->pev;
  if (peVar7->movetype == 8) {
    return;
  }
  if (peVar7->health < 0.0) {
    return;
  }
  if (peVar7->waterlevel == 3) {
    *(uint *)&this->field_0x110 = *(uint *)&this->field_0x110 & 0xfff7ffff;
    this->field_0x118 = 0;
    peVar7 = this->pev;
    if (gpGlobals->time <= peVar7->air_finished) {
      *(uint *)&this->field_0x110 = *(uint *)&this->field_0x110 & 0xffffbfff;
    }
    else if (peVar7->pain_finished < gpGlobals->time) {
      peVar7->dmg = peVar7->dmg + 1.0;
      if (5.0 < this->pev->dmg) {
        this->pev->dmg = 5.0;
      }
      peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      peVar4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      (*this->vtable[0x16])
                (this,(uint)&peVar4->v & (peVar4 == (edict_t *)0x0) - 1,
                 (uint)&peVar6->v & (peVar6 == (edict_t *)0x0) - 1,this->pev->dmg,0x4000);
      this->pev->pain_finished = gpGlobals->time + 1.0;
      *(int *)&this->field_0x9a8 = (int)ROUND((float)*(int *)&this->field_0x9a8 + this->pev->dmg);
    }
  }
  else {
    if (gpGlobals->time <= peVar7->air_finished) {
      peVar7 = this->pev;
      if (peVar7->air_finished < gpGlobals->time + 9.0) {
        pcVar3 = "player/pl_wade2.wav";
        goto LAB_000d90ea;
      }
    }
    else {
      pcVar3 = "player/pl_wade1.wav";
LAB_000d90ea:
      EMIT_SOUND_DYN((int)peVar7->pContainingEntity,2,pcVar3,0x3f800000,0x3f4ccccd,0,100,0.5);
    }
    this->pev->air_finished = gpGlobals->time + 12.0;
    this->pev->dmg = 2.0;
    if (*(int *)&this->field_0x9ac < *(int *)&this->field_0x9a8) {
      *(uint *)&this->field_0x110 = *(uint *)&this->field_0x110 & 0xffffbfff | 0x80000;
      this->field_0x118 = 0;
    }
  }
  peVar7 = this->pev;
  if (peVar7->waterlevel == 0) {
    if ((peVar7->flags & 0x10U) == 0) {
      return;
    }
    peVar7->flags = peVar7->flags & 0xffffffef;
    return;
  }
  fVar1 = this->pev->air_finished;
  fVar2 = gpGlobals->time;
  iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
  if ((iVar5 == 0) &&
     (iVar5 = (*g_engfuncs.pfnRandomLong)(0,0xb), (int)ROUND(fVar1 - fVar2) <= iVar5)) {
    iVar5 = (*g_engfuncs.pfnRandomLong)(0,3);
    switch(iVar5) {
    case 0:
      peVar7 = this->pev;
      pcVar3 = "player/pl_swim1.wav";
      break;
    case 1:
      peVar7 = this->pev;
      pcVar3 = "player/pl_swim2.wav";
      break;
    case 2:
      peVar7 = this->pev;
      pcVar3 = "player/pl_swim3.wav";
      break;
    case 3:
      peVar7 = this->pev;
      pcVar3 = "player/pl_swim4.wav";
      break;
    default:
      goto switchD_000d9352_default;
    }
    EMIT_SOUND_DYN((int)peVar7->pContainingEntity,4,pcVar3,0x3f4ccccd,0x3f4ccccd,0,100,0.5);
  }
switchD_000d9352_default:
  if (this->pev->watertype == -5) {
    if (gpGlobals->time <= this->pev->dmgtime) goto LAB_000d94d1;
    peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    uVar10 = (uint)&peVar6->v & (peVar6 == (edict_t *)0x0) - 1;
    peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    uVar8 = (uint)&peVar6->v & (peVar6 == (edict_t *)0x0) - 1;
    ppvVar9 = this->vtable;
    uVar11 = 8;
    iVar5 = this->pev->waterlevel * 10;
  }
  else {
    if (this->pev->watertype != -4) goto LAB_000d94d1;
    this->pev->dmgtime = gpGlobals->time + 1.0;
    peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    uVar10 = (uint)&peVar6->v & (peVar6 == (edict_t *)0x0) - 1;
    peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    uVar8 = (uint)&peVar6->v & (peVar6 == (edict_t *)0x0) - 1;
    ppvVar9 = this->vtable;
    uVar11 = 0x100000;
    iVar5 = this->pev->waterlevel << 2;
  }
  (*ppvVar9[0x16])(this,uVar8,uVar10,(float)iVar5,uVar11);
LAB_000d94d1:
  uVar8 = this->pev->flags;
  if ((uVar8 & 0x10) == 0) {
    this->pev->flags = uVar8 | 0x10;
    this->pev->dmgtime = 0.0;
  }
  return;
}

/* 000d9500  CBasePlayer::IsOnLadder  (22 bytes)
 * bool IsOnLadder(void)
 */
/* CBasePlayer::IsOnLadder(void) */

bool __thiscall CBasePlayer::IsOnLadder(CBasePlayer *this)

{
  return this->pev->movetype == 5;
}

/* 000d9518  CBasePlayer::StartDeathCam  (812 bytes)
 * undefined StartDeathCam(void)
 */
/* CBasePlayer::StartDeathCam(void) */

void __thiscall CBasePlayer::StartDeathCam(CBasePlayer *this)

{
  entvars_t *peVar1;
  bool bVar2;
  edict_t *pEdict;
  int iVar3;
  uint uVar4;
  edict_t *peVar5;
  vec_t *pvVar6;
  float *pfVar7;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_7c [20];
  float local_68;
  float local_64;
  float local_60;
  float local_3c;
  float local_38;
  float local_34;
  vec_t local_2c;
  vec_t local_28;
  vec_t local_24;
  
  peVar1 = this->pev;
  bVar2 = false;
  if (((peVar1->view_ofs[0] == g_vecZero) && (peVar1->view_ofs[1] == DAT_00190ef0)) &&
     (peVar1->view_ofs[2] == DAT_00190ef4)) {
    bVar2 = true;
  }
  if (bVar2) {
    return;
  }
  pEdict = (*g_engfuncs.pfnFindEntityByString)((edict_t *)0x0,"classname","info_intermission");
  bVar2 = false;
  if ((pEdict == (edict_t *)0x0) ||
     (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar3 == 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    CopyToBodyQue((int)this->pev);
    peVar1 = this->pev;
    pfVar7 = &local_2c;
    local_2c = 0.0;
    local_24 = 128.0;
    pvVar6 = &local_3c;
    local_3c = peVar1->origin[0] + 0.0;
    local_38 = peVar1->origin[1] + 0.0;
    local_34 = peVar1->origin[2] + 128.0;
    local_28 = local_2c;
    UTIL_TraceLine(this->pev->origin,pvVar6,1,peVar1->pContainingEntity,local_7c);
    local_3c = local_68;
    local_38 = local_64;
    local_34 = local_60;
    peVar1 = this->pev;
    local_8c = local_68 - peVar1->origin[0];
    local_88 = local_64 - peVar1->origin[1];
    local_84 = local_60 - peVar1->origin[2];
    UTIL_VecToAngles(pfVar7,&local_8c);
    goto LAB_000d982d;
  }
  iVar3 = (*g_engfuncs.pfnRandomLong)(0,3);
  if (0 < iVar3) {
    uVar4 = -iVar3 & 3;
    if (uVar4 != 0) {
      if (uVar4 < 3) {
        if (uVar4 < 2) {
          peVar5 = (*g_engfuncs.pfnFindEntityByString)(pEdict,"classname","info_intermission");
          if (peVar5 != (edict_t *)0x0) {
            pEdict = peVar5;
          }
          iVar3 = iVar3 + -1;
        }
        peVar5 = (*g_engfuncs.pfnFindEntityByString)(pEdict,"classname","info_intermission");
        if (peVar5 != (edict_t *)0x0) {
          pEdict = peVar5;
        }
        iVar3 = iVar3 + -1;
      }
      peVar5 = (*g_engfuncs.pfnFindEntityByString)(pEdict,"classname","info_intermission");
      if (peVar5 != (edict_t *)0x0) {
        pEdict = peVar5;
      }
      iVar3 = iVar3 + -1;
      if (iVar3 < 1) goto LAB_000d96d7;
    }
    do {
      peVar5 = (*g_engfuncs.pfnFindEntityByString)(pEdict,"classname","info_intermission");
      if (peVar5 != (edict_t *)0x0) {
        pEdict = peVar5;
      }
      peVar5 = (*g_engfuncs.pfnFindEntityByString)(pEdict,"classname","info_intermission");
      if (peVar5 != (edict_t *)0x0) {
        pEdict = peVar5;
      }
      peVar5 = (*g_engfuncs.pfnFindEntityByString)(pEdict,"classname","info_intermission");
      if (peVar5 != (edict_t *)0x0) {
        pEdict = peVar5;
      }
      peVar5 = (*g_engfuncs.pfnFindEntityByString)(pEdict,"classname","info_intermission");
      if (peVar5 != (edict_t *)0x0) {
        pEdict = peVar5;
      }
      iVar3 = iVar3 + -4;
    } while (0 < iVar3);
  }
LAB_000d96d7:
  CopyToBodyQue((int)this->pev);
  pvVar6 = &local_2c;
  local_2c = (pEdict->v).origin[0];
  local_28 = (pEdict->v).origin[1];
  local_24 = (pEdict->v).origin[2];
  pfVar7 = &local_3c;
  local_3c = (pEdict->v).v_angle[0];
  local_38 = (pEdict->v).v_angle[1];
  local_34 = (pEdict->v).v_angle[2];
LAB_000d982d:
  StartObserver(this,pvVar6,pfVar7);
  return;
}

/* 000d9848  CBasePlayer::PlayerUse  (1371 bytes)
 * undefined PlayerUse(void)
 */
/* CBasePlayer::PlayerUse(void) */

void __thiscall CBasePlayer::PlayerUse(CBasePlayer *this)

{
  entvars_t *peVar1;
  code *pcVar2;
  float fVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  undefined3 extraout_var;
  int iVar7;
  edict_t *peVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *this_00;
  int *piVar11;
  float *pfVar12;
  float *pfVar13;
  undefined2 in_FPUControlWord;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_cc [12];
  float *local_c0;
  float *local_bc;
  float *local_b8;
  float local_b4;
  int *local_b0;
  float local_a0;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c [6];
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  puVar10 = auStack_cc;
  if (((this->pev->button | *(uint *)&this->field_0x814 | *(uint *)&this->field_0x818) & 0x20) == 0)
  {
    return;
  }
  if ((*(uint *)&this->field_0x814 & 0x20) != 0) {
    this_00 = &this->field_0x9c4;
    bVar5 = int((EHANDLE *)this_00);
    if (CONCAT31(extraout_var,bVar5) != 0) {
      iVar7 = EHANDLE::operator->((EHANDLE *)this_00);
      (**(code **)(*(int *)(iVar7 + 0x60) + 0xe0))(iVar7,this,this,0,0);
      EHANDLE::operator=((EHANDLE *)this_00,(int *)0x0);
      return;
    }
    if ((*(uint *)&this->field_0x848 & 2) != 0) {
      *(uint *)&this->field_0x848 = *(uint *)&this->field_0x848 & 0xfffffffd;
      *(undefined4 *)&this->field_0x9bc = 0xc0;
      return;
    }
    peVar8 = this->pev->groundentity;
    if (peVar8 == (edict_t *)0x0) {
      peVar8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    piVar11 = (int *)0x0;
    if (peVar8 != (edict_t *)0x0) {
      piVar11 = peVar8->pvPrivateData;
    }
    if ((((piVar11 != (int *)0x0) && ((this->pev->button & 2) == 0)) &&
        ((this->pev->flags & 0x200) != 0)) &&
       ((uVar9 = (**(code **)(piVar11[0x18] + 0x38))(piVar11), (uVar9 & 0x40) != 0 &&
        (iVar7 = (**(code **)(piVar11[0x18] + 0xac))(piVar11,this->pev), iVar7 != 0)))) {
      *(uint *)&this->field_0x848 = *(uint *)&this->field_0x848 | 2;
      _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
      local_24 = (int)ROUND(*(float *)(*piVar11 + 0x1f8));
      uVar9 = TrainSpeed(local_24,*(int *)(*piVar11 + 0x184));
      *(uint *)&this->field_0x9bc = uVar9 | 0xc0;
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"plats/train_use1.wav",0x3f4ccccd,
                     0x3f4ccccd,0,100,0.5);
      return;
    }
  }
  piVar11 = (int *)0x0;
  local_b0 = (int *)0x0;
  local_b4 = 0.7;
  UTIL_MakeVectors(this->pev->v_angle);
  local_b8 = &local_5c;
  local_bc = &local_6c;
  local_c0 = &local_4c;
  while (piVar11 = (int *)UTIL_FindEntityInSphere(piVar11,this->pev->origin,0x42800000),
        piVar4 = local_b0, piVar11 != (int *)0x0) {
    uVar9 = (**(code **)(piVar11[0x18] + 0x38))(piVar11);
    if ((uVar9 & 0x38) != 0) {
      VecBModelOrigin(local_b8,*piVar11);
      peVar1 = this->pev;
      local_6c = peVar1->origin[0] + peVar1->view_ofs[0];
      local_68 = peVar1->origin[1] + peVar1->view_ofs[1];
      local_64 = peVar1->origin[2] + peVar1->view_ofs[2];
      local_4c = local_5c - local_6c;
      local_48 = local_58 - local_68;
      local_44 = fStack_54 - local_64;
      pfVar12 = local_c0;
      pfVar13 = local_3c;
      for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar13 = *pfVar12;
        pfVar12 = pfVar12 + 1;
        pfVar13 = pfVar13 + 1;
      }
      iVar7 = *piVar11;
      local_5c = *(float *)(iVar7 + 0xf4) * 0.5;
      local_58 = *(float *)(iVar7 + 0xf8) * 0.5;
      fStack_54 = *(float *)(iVar7 + 0xfc) * 0.5;
      UTIL_ClampVectorToBox(local_bc,local_3c,local_b8);
      pfVar12 = local_bc;
      pfVar13 = local_3c;
      for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar13 = *pfVar12;
        pfVar12 = pfVar12 + 1;
        pfVar13 = pfVar13 + 1;
      }
      fVar3 = local_3c[2] * gpGlobals->v_forward[2] +
              local_3c[1] * gpGlobals->v_forward[1] + local_3c[0] * gpGlobals->v_forward[0];
      if (local_b4 < fVar3) {
        local_b4 = fVar3;
        local_b0 = piVar11;
      }
    }
  }
  if (local_b0 == (int *)0x0) {
    return;
  }
  cVar6 = (**(code **)(local_b0[0x18] + 0xc))(local_b0);
  if (cVar6 == '\0') {
    uVar15 = *(undefined4 *)(*piVar4 + 0x208);
    peVar1 = this->pev;
    local_6c = peVar1->origin[0] + peVar1->view_ofs[0];
    local_68 = peVar1->origin[1] + peVar1->view_ofs[1];
    local_64 = peVar1->origin[2] + peVar1->view_ofs[2];
    uVar14 = 1;
    piVar11 = piVar4;
    (**(code **)(piVar4[0x18] + 0xf8))(&local_5c);
    UTIL_TraceLine(&local_6c,&local_5c,(int)piVar11,uVar14,uVar15);
    puVar10 = &stack0xffffff30;
    if (local_a0 < 1.0) {
      return;
    }
  }
  iVar7 = piVar4[0x18];
  *(int **)(puVar10 + -0x10) = piVar4;
  pcVar2 = *(code **)(iVar7 + 0x38);
  *(undefined4 *)(puVar10 + -0x14) = 0xd9cbc;
  uVar9 = (*pcVar2)();
  if ((*(byte *)(*(int **)(puVar10 + 0xd0) + 0x205) & 0x20) != 0) {
    iVar7 = **(int **)(puVar10 + 0xd0);
    *(undefined4 *)(puVar10 + -4) = 0x3f000000;
    *(undefined4 *)(puVar10 + -8) = 100;
    *(undefined4 *)(puVar10 + -0xc) = 0;
    *(undefined4 *)(puVar10 + -0x10) = 0x3f4ccccd;
    *(undefined4 *)(puVar10 + -0x14) = 0x3ecccccd;
    *(char **)(puVar10 + -0x18) = "common/wpn_select.wav";
    *(undefined4 *)(puVar10 + -0x1c) = 3;
    *(undefined4 *)(puVar10 + -0x20) = *(undefined4 *)(iVar7 + 0x208);
    *(undefined4 *)(puVar10 + -0x24) = 0xd9cfd;
    EMIT_SOUND_DYN(*(int *)(puVar10 + -0x20),*(undefined4 *)(puVar10 + -0x1c),
                   *(char **)(puVar10 + -0x18),*(undefined4 *)(puVar10 + -0x14),
                   *(undefined4 *)(puVar10 + -0x10),*(undefined4 *)(puVar10 + -0xc),
                   *(int *)(puVar10 + -8),*(float *)(puVar10 + -4));
  }
  if ((((*(byte *)(**(int **)(puVar10 + 0xd0) + 0x180) & 0x20) == 0) || ((uVar9 & 0x10) == 0)) &&
     (((*(byte *)(*(int *)(puVar10 + 0xd0) + 0x814) & 0x20) == 0 || ((uVar9 & 0x28) == 0)))) {
    if ((*(byte *)(*(int *)(puVar10 + 0xd0) + 0x818) & 0x20) == 0) {
      return;
    }
    iVar7 = piVar4[0x18];
    *(int **)(puVar10 + -0x10) = piVar4;
    pcVar2 = *(code **)(iVar7 + 0x38);
    *(undefined4 *)(puVar10 + -0x14) = 0xd9d72;
    uVar9 = (*pcVar2)();
    if ((uVar9 & 0x20) == 0) {
      return;
    }
    iVar7 = piVar4[0x18];
    *(undefined4 *)(puVar10 + -0x10) = 0;
  }
  else {
    if ((uVar9 & 0x10) != 0) {
      *(uint *)(*(int *)(puVar10 + 0xd0) + 0x848) =
           *(uint *)(*(int *)(puVar10 + 0xd0) + 0x848) | 0x10;
    }
    iVar7 = piVar4[0x18];
    *(undefined4 *)(puVar10 + -0x10) = 0x3f800000;
  }
  *(undefined4 *)(puVar10 + -0x14) = 2;
  *(undefined4 *)(puVar10 + -0x18) = *(undefined4 *)(puVar10 + 0xd0);
  *(undefined4 *)(puVar10 + -0x1c) = *(undefined4 *)(puVar10 + 0xd0);
  *(int **)(puVar10 + -0x20) = piVar4;
  pcVar2 = *(code **)(iVar7 + 0xe0);
  *(undefined4 *)(puVar10 + -0x24) = 0xd9d9b;
  (*pcVar2)();
  return;
}

/* 000d9e10  CBasePlayer::Classify  (6 bytes)
 * undefined4 Classify(void)
 */
/* CBasePlayer::Classify(void) */

undefined4 CBasePlayer::Classify(void)

{
  return 2;
}

/* 000d9e18  CBasePlayer::AddPoints  (333 bytes)
 * undefined AddPoints(int param_1, int param_2)
 */
/* CBasePlayer::AddPoints(int, int) */

void __thiscall CBasePlayer::AddPoints(CBasePlayer *this,int param_1,int param_2)

{
  entvars_t *peVar1;
  int iVar2;
  
  if ((param_1 < 0) && (param_2 == 0)) {
    peVar1 = this->pev;
    if (peVar1->frags < 0.0) {
      return;
    }
    if (peVar1->frags < (float)-param_1) {
      param_1 = (int)ROUND(-peVar1->frags);
    }
  }
  this->pev->frags = (float)param_1 + this->pev->frags;
  (*g_engfuncs.pfnMessageBegin)(2,gmsgScoreInfo,(float *)0x0,(edict_t *)0x0);
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar2);
  (*g_engfuncs.pfnWriteShort)((int)ROUND(this->pev->frags));
  (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0xb30);
  (*g_engfuncs.pfnWriteShort)(0);
  iVar2 = (**(code **)(*g_pGameRules + 0xd0))(g_pGameRules,&this->field_0xb48);
  (*g_engfuncs.pfnWriteShort)(iVar2 + 1);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000d9f68  CBasePlayer::AddPointsToTeam  (161 bytes)
 * undefined AddPointsToTeam(undefined4 param_1, undefined4 param_2)
 */
/* CBasePlayer::AddPointsToTeam(int, int) */

void __thiscall
CBasePlayer::AddPointsToTeam(CBasePlayer *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  for (iVar4 = 1; iVar4 <= gpGlobals->maxClients; iVar4 = iVar4 + 1) {
    iVar2 = UTIL_PlayerByIndex(iVar4);
    if ((iVar2 != 0) && (iVar4 != iVar1)) {
      iVar3 = (**(code **)(*g_pGameRules + 0xcc))(g_pGameRules,this,iVar2);
      if (iVar3 == 1) {
        (**(code **)(*(int *)(iVar2 + 0x60) + 0x7c))(iVar2,param_1,param_2);
      }
    }
  }
  return;
}

/* 000da00c  CBasePlayer::CheckTimeBasedDamage  (443 bytes)
 * undefined CheckTimeBasedDamage(void)
 */
/* CBasePlayer::CheckTimeBasedDamage(void) */

void __thiscall CBasePlayer::CheckTimeBasedDamage(CBasePlayer *this)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  if ((*(uint *)&this->field_0x110 & 0xffffc000) != 0) {
    iVar1 = (int)ROUND(gpGlobals->time - *(float *)&this->field_0x980);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (2.0 <= (double)iVar1) {
      *(float *)&this->field_0x980 = gpGlobals->time;
      iVar1 = 0;
      do {
        if ((0x8000 << ((byte)iVar1 & 0x1f) & *(uint *)&this->field_0x110) != 0) {
          uVar2 = 0;
          switch(iVar1) {
          case 0:
          case 1:
          case 3:
          case 5:
          case 6:
          case 7:
            uVar2 = 2;
            break;
          case 2:
            (*this->vtable[0x16])(this,this->pev,this->pev,0x40000000,0);
            uVar2 = 5;
            break;
          case 4:
            if (*(int *)&this->field_0x9ac < *(int *)&this->field_0x9a8) {
              iVar3 = *(int *)&this->field_0x9a8 - *(int *)&this->field_0x9ac;
              if (10 < iVar3) {
                iVar3 = 10;
              }
              (*this->vtable[0x17])(this,(float)iVar3,0);
              *(int *)&this->field_0x9ac = *(int *)&this->field_0x9ac + iVar3;
            }
            uVar2 = 4;
          }
          if ((&this->field_0x114)[iVar1] == '\0') {
            (&this->field_0x114)[iVar1] = uVar2;
          }
          else {
            if ((((iVar1 == 1) && ((byte)this->field_0x115 < 2)) ||
                ((iVar1 == 2 && ((byte)this->field_0x116 < 5)))) &&
               (*(int *)&this->field_0x834 != 0)) {
              (&this->field_0x114)[iVar1] = 0;
              *(int *)&this->field_0x834 = *(int *)&this->field_0x834 + -1;
              SetSuitUpdate(this,"!HEV_HEAL4",0,0);
            }
            if (((&this->field_0x114)[iVar1] == '\0') ||
               ((&this->field_0x114)[iVar1] = (&this->field_0x114)[iVar1] + -1,
               (&this->field_0x114)[iVar1] == '\0')) {
              (&this->field_0x114)[iVar1] = 0;
              *(uint *)&this->field_0x110 =
                   *(uint *)&this->field_0x110 & ~(0x8000 << ((byte)iVar1 & 0x1f));
            }
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 8);
    }
  }
  return;
}

/* 000da1f0  CBasePlayer::UpdateGeigerCounter  (222 bytes)
 * undefined UpdateGeigerCounter(void)
 */
/* CBasePlayer::UpdateGeigerCounter(void) */

void __thiscall CBasePlayer::UpdateGeigerCounter(CBasePlayer *this)

{
  int iVar1;
  uint iValue;
  
  if (*(float *)&this->field_0x988 <= gpGlobals->time) {
    *(float *)&this->field_0x988 = gpGlobals->time + 0.25;
    iValue = (uint)(byte)(short)ROUND(*(float *)&this->field_0x984 * 0.25);
    if (iValue != *(uint *)&this->field_0x98c) {
      *(uint *)&this->field_0x98c = iValue;
      (*g_engfuncs.pfnMessageBegin)(1,gmsgGeigerRange,(float *)0x0,this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(iValue);
      (*g_engfuncs.pfnMessageEnd)();
    }
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,3);
    if (iVar1 == 0) {
      *(undefined4 *)&this->field_0x984 = 0x447a0000;
    }
  }
  return;
}

/* 000da2d0  CBasePlayer::CheckSuitUpdate  (314 bytes)
 * undefined CheckSuitUpdate(void)
 */
/* CBasePlayer::CheckSuitUpdate(void) */

void __thiscall CBasePlayer::CheckSuitUpdate(CBasePlayer *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char local_3c [44];
  
  uVar3 = *(uint *)&this->field_0x878;
  if (this->pev->weapons < 0) {
    UpdateGeigerCounter(this);
    iVar2 = (**(code **)(*g_pGameRules + 0x1c))(g_pGameRules);
    if (((iVar2 == 0) && (*(float *)&this->field_0x864 <= gpGlobals->time)) &&
       (0.0 < *(float *)&this->field_0x864)) {
      iVar2 = 0;
      do {
        iVar1 = *(int *)(&this->field_0x868 + uVar3 * 4);
        if (iVar1 != 0) break;
        uVar3 = uVar3 + 1 & (uVar3 + 1 == 4) - 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      if (iVar1 == 0) {
        *(undefined4 *)&this->field_0x864 = 0;
      }
      else {
        *(undefined4 *)(&this->field_0x868 + uVar3 * 4) = 0;
        if (iVar1 < 1) {
          EMIT_GROUPID_SUIT((int)this->pev->pContainingEntity,-iVar1);
        }
        else {
          local_3c[0] = '!';
          local_3c[1] = '\0';
          strcat(local_3c,gszallsentencenames + iVar1 * 0x10);
          EMIT_SOUND_SUIT((int)this->pev->pContainingEntity,local_3c);
        }
        *(float *)&this->field_0x864 = gpGlobals->time + 3.5;
      }
    }
  }
  return;
}

/* 000da410  CBasePlayer::SetSuitUpdate  (538 bytes)
 * undefined SetSuitUpdate(char * param_1, int param_2, int param_3)
 */
/* CBasePlayer::SetSuitUpdate(char *, int, int) */

void __thiscall CBasePlayer::SetSuitUpdate(CBasePlayer *this,char *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_18;
  
  local_18 = -1;
  if ((this->pev->weapons < 0) &&
     (iVar3 = (**(code **)(*g_pGameRules + 0x1c))(g_pGameRules), iVar3 == 0)) {
    if (param_1 == (char *)0x0) {
      iVar3 = 0;
      puVar4 = (undefined4 *)&this->field_0x868;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
    else {
      if (param_2 == 0) {
        iVar3 = SENTENCEG_Lookup((int)param_1,(char *)0x0);
        if (iVar3 < 0) {
          return;
        }
      }
      else {
        iVar3 = SENTENCEG_GetIndex(param_1);
        iVar3 = -iVar3;
      }
      iVar5 = 0;
      iVar1 = 0x870;
      iVar2 = 0x8f0;
      if (iVar3 == *(int *)&this->field_0x87c) {
        if (gpGlobals->time <= *(float *)&this->field_0x8fc) {
          return;
        }
        *(undefined4 *)&this->field_0x87c = 0;
        *(undefined4 *)&this->field_0x8fc = 0;
        local_18 = 0;
      }
      else {
        do {
          iVar7 = iVar2;
          iVar6 = iVar1;
          if (*(int *)(&this->field_0xc + iVar6) == 0) {
            local_18 = iVar5;
          }
          iVar5 = iVar5 + 1;
          if (0x1f < iVar5) goto LAB_000da549;
          iVar1 = iVar6 + 4;
          iVar2 = iVar7 + 4;
        } while (iVar3 != *(int *)(&this->field_0x10 + iVar6));
        if (gpGlobals->time <= *(float *)(&this->field_0x10 + iVar7)) {
          return;
        }
        *(undefined4 *)(&this->field_0x10 + iVar6) = 0;
        *(undefined4 *)(&this->field_0x10 + iVar7) = 0;
        local_18 = iVar5;
      }
LAB_000da549:
      if (param_3 != 0) {
        if (local_18 < 0) {
          local_18 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        }
        *(int *)(&this->field_0x87c + local_18 * 4) = iVar3;
        *(float *)(&this->field_0x8fc + local_18 * 4) = (float)param_3 + gpGlobals->time;
      }
      *(int *)(&this->field_0x868 + *(int *)&this->field_0x878 * 4) = iVar3;
      *(int *)&this->field_0x878 = *(int *)&this->field_0x878 + 1;
      if (*(int *)&this->field_0x878 == 4) {
        *(undefined4 *)&this->field_0x878 = 0;
      }
      if (*(float *)&this->field_0x864 <= gpGlobals->time) {
        if (*(float *)&this->field_0x864 == 0.0) {
          *(float *)&this->field_0x864 = gpGlobals->time + 0.1;
        }
        else {
          *(float *)&this->field_0x864 = gpGlobals->time + 3.5;
        }
      }
    }
  }
  return;
}

/* 000da630  CBasePlayer::UpdatePlayerSound  (597 bytes)
 * undefined UpdatePlayerSound(void)
 */
/* CBasePlayer::UpdatePlayerSound(void) */

void __thiscall CBasePlayer::UpdatePlayerSound(CBasePlayer *this)

{
  uint uVar1;
  entvars_t *peVar2;
  int iVar3;
  vec_t *pvVar4;
  int iVar5;
  vec_t vVar6;
  vec_t *pvVar7;
  vec_t *pvVar8;
  
  iVar3 = CSoundEnt::ClientSoundIndex(this->pev->pContainingEntity);
  pvVar4 = (vec_t *)CSoundEnt::SoundPointerForIndex(iVar3);
  if (pvVar4 == (vec_t *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"Client lost reserved sound!\n");
  }
  else {
    pvVar4[3] = 0.0;
    peVar2 = this->pev;
    if ((peVar2->flags & 0x200) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)ROUND(SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                              peVar2->velocity[1] * peVar2->velocity[1] +
                              peVar2->velocity[0] * peVar2->velocity[0]));
      if (0x200 < iVar3) {
        iVar3 = 0x200;
      }
    }
    if ((this->pev->button & 2) != 0) {
      iVar3 = iVar3 + 100;
    }
    if (iVar3 < *(int *)&this->field_0x7f8) {
      *(undefined4 *)&this->field_0x7f4 = *(undefined4 *)&this->field_0x7f8;
      pvVar4[3] = (vec_t)((uint)pvVar4[3] | 1);
    }
    else {
      *(int *)&this->field_0x7f4 = iVar3;
    }
    *(int *)&this->field_0x7f8 =
         (int)ROUND((float)*(int *)&this->field_0x7f8 - gpGlobals->frametime * 250.0);
    vVar6 = pvVar4[4];
    if ((int)vVar6 < *(int *)&this->field_0x7f4) {
      vVar6 = *(vec_t *)&this->field_0x7f4;
    }
    else if (*(int *)&this->field_0x7f4 < (int)vVar6) {
      uVar1 = (uint)ROUND((float)(int)vVar6 - gpGlobals->frametime * 250.0);
      vVar6 = (vec_t)(uVar1 & ((int)uVar1 < *(int *)&this->field_0x7f4) - 1);
    }
    iVar3 = *(int *)&this->field_0x9d0;
    if (*(float *)&this->field_0x804 < gpGlobals->time) {
      *(undefined4 *)&this->field_0x7fc = 0;
    }
    if (pvVar4 != (vec_t *)0x0) {
      pvVar7 = this->pev->origin;
      pvVar8 = pvVar4;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pvVar8 = *pvVar7;
        pvVar7 = pvVar7 + 1;
        pvVar8 = pvVar8 + 1;
      }
      pvVar4[3] = (vec_t)((uint)pvVar4[3] | *(uint *)&this->field_0x7fc | 4);
      pvVar4[4] = (vec_t)((uint)vVar6 & (iVar3 != 0) - 1);
    }
    iVar3 = (int)ROUND((float)*(int *)&this->field_0x800 - gpGlobals->frametime * 256.0);
    *(int *)&this->field_0x800 = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)&this->field_0x800 = 0;
    }
  }
  return;
}

/* 000da90c  CBasePlayer::Precache  (200 bytes)
 * undefined Precache(void)
 */
/* CBasePlayer::Precache(void) */

void __thiscall CBasePlayer::Precache(CBasePlayer *this)

{
  int iVar1;
  char *szFmt;
  
  if ((WorldGraph != 0) && (DAT_001911a4 == 0)) {
    iVar1 = CGraph::FSetGraphPointers();
    if (iVar1 == 0) {
      szFmt = "**Graph pointers were not set!\n";
    }
    else {
      szFmt = "**Graph Pointers Set!\n";
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,szFmt);
  }
  *(undefined4 *)&this->field_0x984 = 0x447a0000;
  *(undefined4 *)&this->field_0x98c = 1000;
  *(undefined4 *)&this->field_0x110 = 0;
  *(undefined4 *)&this->field_0x9b0 = 0xffffffff;
  *(undefined4 *)&this->field_0x9e4 = 0xffffffff;
  *(undefined4 *)&this->field_0x9bc = 0xc0;
  LinkUserMessages();
  *(undefined4 *)&this->field_0x9dc = 5;
  if (gInitHUD != 0) {
    *(undefined4 *)&this->field_0x9b4 = 1;
  }
  return;
}

/* 000da9d8  CBasePlayer::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBasePlayer::Save(CSave &) */

undefined4 __thiscall CBasePlayer::Save(CBasePlayer *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"PLAYER",(int)this,(int *)m_playerSaveData,0x24);
  }
  return uVar2;
}

/* 000daa28  CBasePlayer::RenewItems  (1 bytes)
 * undefined RenewItems(void)
 */
/* CBasePlayer::RenewItems(void) */

void CBasePlayer::RenewItems(void)

{
  return;
}

/* 000daa2c  CBasePlayer::Restore  (723 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBasePlayer::Restore(CRestore &) */

undefined4 __thiscall CBasePlayer::Restore(CBasePlayer *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  vec_t *pvVar6;
  vec_t *pvVar7;
  longdouble lVar8;
  entvars_t *peVar9;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_2c [7];
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"PLAYER",(int)this,(int)m_playerSaveData,0x24);
    if (*(int *)((int)gpGlobals->pSaveData + 0x52c) == 0) {
      (*g_engfuncs.pfnAlertMessage)(at_console,"No Landmark:%s\n",(int)gpGlobals->pSaveData + 0x530)
      ;
      iVar1 = EntSelectSpawnPoint((int *)this);
      uVar4 = (iVar1 == 0) - 1 & iVar1 + 0x80U;
      local_2c[0] = *(float *)(uVar4 + 8) + 0.0;
      local_2c[1] = *(float *)(uVar4 + 0xc) + 0.0;
      local_2c[2] = *(float *)(uVar4 + 0x10) + 1.0;
      pfVar5 = local_2c;
      pvVar6 = this->pev->origin;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      pvVar6 = (vec_t *)((iVar1 + 0x80U & (iVar1 == 0) - 1) + 0x50);
      pvVar7 = this->pev->angles;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar7 = *pvVar6;
        pvVar6 = pvVar6 + 1;
        pvVar7 = pvVar7 + 1;
      }
    }
    this->pev->v_angle[2] = 0.0;
    pvVar6 = this->pev->v_angle;
    pvVar7 = this->pev->angles;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar7 = *pvVar6;
      pvVar6 = pvVar6 + 1;
      pvVar7 = pvVar7 + 1;
    }
    this->pev->fixangle = 1;
    *(undefined4 *)&this->field_0x144 = 0xf7;
    g_ulModelIndexPlayer = this->pev->modelindex;
    if ((this->pev->flags & 0x4000) == 0) {
      local_34 = 0x42100000;
      local_2c[2] = -36.0;
      peVar9 = this->pev;
    }
    else {
      local_34 = 0x41900000;
      local_2c[2] = -18.0;
      peVar9 = this->pev;
    }
    local_2c[1] = -16.0;
    local_38 = 0x41800000;
    local_3c = local_38;
    local_2c[0] = local_2c[1];
    UTIL_SetSize((int)peVar9,local_2c,&local_3c);
    (*g_engfuncs.pfnSetPhysicsKeyValue)(this->pev->pContainingEntity,"hl","1");
    if (*(int *)&this->field_0x9d4 == 0) {
      (*g_engfuncs.pfnSetPhysicsKeyValue)(this->pev->pContainingEntity,"slj","0");
    }
    else {
      (*g_engfuncs.pfnSetPhysicsKeyValue)(this->pev->pContainingEntity,"slj","1");
    }
    RenewItems();
    lVar8 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0x12c = (float)lVar8;
  }
  return uVar2;
}

/* 000dad08  CBasePlayer::SelectNextItem  (220 bytes)
 * undefined SelectNextItem(int param_1)
 */
/* CBasePlayer::SelectNextItem(int) */

void __thiscall CBasePlayer::SelectNextItem(CBasePlayer *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(&this->field_0x9f8 + param_1 * 4);
  if (iVar3 != 0) {
    if (iVar3 == *(int *)&this->field_0xa10) {
      iVar3 = *(int *)(iVar3 + 0x84);
      if (iVar3 == 0) {
        return;
      }
      iVar1 = *(int *)(iVar3 + 0x84);
      iVar2 = iVar3;
      while (iVar1 != 0) {
        iVar2 = *(int *)(iVar2 + 0x84);
        iVar1 = *(int *)(iVar2 + 0x84);
      }
      *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)&this->field_0xa10;
      *(undefined4 *)(*(int *)&this->field_0xa10 + 0x84) = 0;
      *(int *)(&this->field_0x9f8 + param_1 * 4) = iVar3;
    }
    ResetAutoaim(this);
    if (*(int *)&this->field_0xa10 != 0) {
      (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x130))
                (*(undefined4 *)&this->field_0xa10,0);
    }
    *(int *)&this->field_0xa10 = iVar3;
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x60) + 0x128))(iVar3);
      (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x134))(*(int *)&this->field_0xa10)
      ;
    }
  }
  return;
}

/* 000dade4  CBasePlayer::SelectItem  (451 bytes)
 * undefined SelectItem(char * param_1)
 */
/* CBasePlayer::SelectItem(char const *) */

void __thiscall CBasePlayer::SelectItem(CBasePlayer *this,char *param_1)

{
  globalvars_t *pgVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *local_18;
  int local_14;
  
  if (param_1 != (char *)0x0) {
    local_14 = 0;
    puVar3 = &this->field_0x9f0;
    puVar4 = (undefined4 *)0x0;
    local_18 = puVar3;
    do {
      pgVar1 = gpGlobals;
      if (*(int *)(puVar3 + 8) != 0) {
        puVar4 = *(undefined4 **)(local_18 + 8);
        while ((puVar4 != (undefined4 *)0x0 &&
               (iVar2 = strcmp(pgVar1->pStringBase + *(int *)*puVar4,param_1), iVar2 != 0))) {
          puVar4 = (undefined4 *)puVar4[0x21];
        }
      }
      pgVar1 = gpGlobals;
      if (puVar4 != (undefined4 *)0x0) break;
      if (*(int *)(puVar3 + 0xc) != 0) {
        puVar4 = *(undefined4 **)(local_18 + 0xc);
        while ((puVar4 != (undefined4 *)0x0 &&
               (iVar2 = strcmp(pgVar1->pStringBase + *(int *)*puVar4,param_1), iVar2 != 0))) {
          puVar4 = (undefined4 *)puVar4[0x21];
        }
      }
      pgVar1 = gpGlobals;
      if (puVar4 != (undefined4 *)0x0) break;
      if (*(int *)(puVar3 + 0x10) != 0) {
        puVar4 = *(undefined4 **)(local_18 + 0x10);
        while ((puVar4 != (undefined4 *)0x0 &&
               (iVar2 = strcmp(pgVar1->pStringBase + *(int *)*puVar4,param_1), iVar2 != 0))) {
          puVar4 = (undefined4 *)puVar4[0x21];
        }
      }
      if (puVar4 != (undefined4 *)0x0) break;
      local_18 = local_18 + 0xc;
      puVar3 = puVar3 + 0xc;
      local_14 = local_14 + 3;
    } while (local_14 < 6);
    if ((puVar4 != (undefined4 *)0x0) && (puVar4 != *(undefined4 **)&this->field_0xa10)) {
      ResetAutoaim(this);
      if (*(int *)&this->field_0xa10 != 0) {
        (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x130))
                  (*(undefined4 *)&this->field_0xa10,0);
      }
      *(undefined4 *)&this->field_0xa18 = *(undefined4 *)&this->field_0xa10;
      *(undefined4 **)&this->field_0xa10 = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)(puVar4[0x18] + 0x128))(puVar4);
        (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x134))
                  (*(int *)&this->field_0xa10);
      }
    }
  }
  return;
}

/* 000dafa8  CBasePlayer::SelectLastItem  (183 bytes)
 * undefined SelectLastItem(void)
 */
/* CBasePlayer::SelectLastItem(void) */

void __thiscall CBasePlayer::SelectLastItem(CBasePlayer *this)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)&this->field_0xa18 != 0) {
    if ((*(int *)&this->field_0xa10 != 0) &&
       (iVar2 = (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 300))
                          (*(int *)&this->field_0xa10), iVar2 == 0)) {
      return;
    }
    ResetAutoaim(this);
    if (*(int *)&this->field_0xa10 != 0) {
      (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x130))
                (*(undefined4 *)&this->field_0xa10,0);
    }
    uVar1 = *(undefined4 *)&this->field_0xa10;
    iVar2 = *(int *)&this->field_0xa18;
    *(int *)&this->field_0xa10 = iVar2;
    *(undefined4 *)&this->field_0xa18 = uVar1;
    (**(code **)(*(int *)(iVar2 + 0x60) + 0x128))(iVar2);
    (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x134))(*(int *)&this->field_0xa10);
  }
  return;
}

/* 000db060  CBasePlayer::HasWeapons  (71 bytes)
 * bool HasWeapons(void)
 */
/* CBasePlayer::HasWeapons(void) */

bool __thiscall CBasePlayer::HasWeapons(CBasePlayer *this)

{
  if ((((*(int *)&this->field_0x9f8 == 0) && (*(int *)&this->field_0x9fc == 0)) &&
      (*(int *)&this->field_0xa00 == 0)) &&
     ((*(int *)&this->field_0xa04 == 0 && (*(int *)&this->field_0xa08 == 0)))) {
    return *(int *)&this->field_0xa0c != 0;
  }
  return true;
}

/* 000db0a8  CBasePlayer::SelectPrevItem  (1 bytes)
 * undefined SelectPrevItem(void)
 */
/* CBasePlayer::SelectPrevItem(int) */

void CBasePlayer::SelectPrevItem(void)

{
  return;
}

/* 000db0ac  CBasePlayer::TeamID  (37 bytes)
 * CBasePlayer * TeamID(void)
 */
/* CBasePlayer::TeamID(void) */

CBasePlayer * __thiscall CBasePlayer::TeamID(CBasePlayer *this)

{
  CBasePlayer *pCVar1;
  
  if (this->pev == (entvars_t *)0x0) {
    pCVar1 = (CBasePlayer *)&DAT_00106657;
  }
  else {
    pCVar1 = (CBasePlayer *)&this->field_0xb48;
  }
  return pCVar1;
}

/* 000db524  CBasePlayer::GiveNamedItem  (206 bytes)
 * undefined GiveNamedItem(int param_1)
 */
/* CBasePlayer::GiveNamedItem(char const *) */

void __thiscall CBasePlayer::GiveNamedItem(CBasePlayer *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  edict_t *pEdict;
  int iVar3;
  vec_t *pvVar4;
  vec_t *pvVar5;
  
  pEdict = (*g_engfuncs.pfnCreateNamedEntity)(param_1 - (int)gpGlobals->pStringBase);
  bVar2 = false;
  if (pEdict != (edict_t *)0x0) {
    iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar3 != 0) goto LAB_000db57a;
  }
  bVar2 = true;
LAB_000db57a:
  if (bVar2) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"NULL Ent in GiveNamedItem!\n");
  }
  else {
    pvVar4 = this->pev->origin;
    pvVar5 = (vec_t *)(((uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1) + 8);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar5 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar5 = pvVar5 + 1;
    }
    piVar1 = &(pEdict->v).spawnflags;
    *piVar1 = *piVar1 | 0x40000000;
    DispatchSpawn(pEdict);
    DispatchTouch(pEdict,this->pev->pContainingEntity);
  }
  return;
}

/* 000db780  CBasePlayer::ImpulseCommands  (603 bytes)
 * undefined ImpulseCommands(void)
 */
/* CBasePlayer::ImpulseCommands(void) */

void __thiscall CBasePlayer::ImpulseCommands(CBasePlayer *this)

{
  int iVar1;
  entvars_t *peVar2;
  entvars_t *peVar3;
  CSprayCan *this_00;
  uint iValue;
  bool bVar4;
  float local_9c;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [16];
  float local_4c;
  
  PlayerUse(this);
  iVar1 = this->pev->impulse;
  if (iVar1 == 0xc9) {
    if (*(float *)&this->field_0xb44 <= gpGlobals->time) {
      UTIL_MakeVectors(this->pev->v_angle);
      peVar2 = this->pev;
      local_7c = peVar2->origin[0] + peVar2->view_ofs[0];
      local_78 = peVar2->origin[1] + peVar2->view_ofs[1];
      local_74 = peVar2->origin[2] + peVar2->view_ofs[2];
      local_8c = gpGlobals->v_forward[0] * 128.0;
      local_88 = gpGlobals->v_forward[1] * 128.0;
      local_84 = gpGlobals->v_forward[2] * 128.0;
      local_6c = local_7c + local_8c;
      local_68 = local_78 + local_88;
      local_64 = local_74 + local_84;
      peVar3 = this->pev;
      local_9c = peVar3->origin[0] + peVar3->view_ofs[0];
      local_98 = peVar3->origin[1] + peVar3->view_ofs[1];
      local_94 = peVar3->origin[2] + peVar3->view_ofs[2];
      UTIL_TraceLine(&local_9c,&local_6c,1,peVar2->pContainingEntity,local_5c);
      if (local_4c != 1.0) {
        *(float *)&this->field_0xb44 = gpGlobals->time + (float)decalfrequency._12_4_;
        this_00 = GetClassPtr<CSprayCan>(0);
        CSprayCan::Spawn(this_00,(int)this->pev);
      }
    }
  }
  else {
    if (iVar1 < 0xca) {
      if (iVar1 == 99) {
        bVar4 = gmsgLogo == 0;
        if (bVar4) {
          gmsgLogo = (*g_engfuncs.pfnRegUserMsg)("Logo",1);
        }
        iValue = (uint)bVar4;
        (*g_engfuncs.pfnMessageBegin)(1,gmsgLogo,(float *)0x0,this->pev->pContainingEntity);
        (*g_engfuncs.pfnWriteByte)(iValue);
        (*g_engfuncs.pfnMessageEnd)();
        if (iValue == 0) {
          gmsgLogo = 0;
        }
        goto LAB_000db9c9;
      }
    }
    else if (iVar1 == 0xcc) {
      ForceClientDllUpdate(this);
      goto LAB_000db9c9;
    }
    CheatImpulseCommands(this,iVar1);
  }
LAB_000db9c9:
  this->pev->impulse = 0;
  return;
}

/* 000db9e4  CBasePlayer::CheatImpulseCommands  (1235 bytes)
 * undefined CheatImpulseCommands(undefined4 param_1)
 */
/* CBasePlayer::CheatImpulseCommands(int) */

void __thiscall CBasePlayer::CheatImpulseCommands(CBasePlayer *this,undefined4 param_1)

{
  entvars_t *peVar1;
  entvars_t *peVar2;
  int iVar3;
  int *piVar4;
  edict_t *pTextureEntity;
  char *pcVar5;
  undefined4 uVar6;
  CBloodSplat *this_00;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  edict_t *local_6c;
  undefined1 local_5c [16];
  float local_4c;
  
  if (g_flWeaponCheat != 0.0) {
    switch(param_1) {
    case 0x66:
      CGib::SpawnRandomGibs((int)this->pev,1,1);
      break;
    case 0x67:
      iVar3 = FindEntityForward((int *)this);
      if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)(iVar3 + 0x60) + 0x70))(iVar3), iVar3 != 0))
      {
        (**(code **)(*(int *)(iVar3 + 0x60) + 0x140))(iVar3);
      }
      break;
    case 0x68:
      CGlobalState::DumpGlobals((CGlobalState *)&gGlobalState);
      break;
    case 0x69:
      if (*(int *)&this->field_0x9d0 == 0) {
        (*g_engfuncs.pfnAlertMessage)(at_console,"Player is silent\n");
        *(undefined4 *)&this->field_0x9d0 = 1;
      }
      else {
        (*g_engfuncs.pfnAlertMessage)(at_console,"Player is audible\n");
        *(undefined4 *)&this->field_0x9d0 = 0;
      }
      break;
    case 0x6a:
      piVar4 = (int *)FindEntityForward((int *)this);
      if (piVar4 != (int *)0x0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,"Classname: %s",gpGlobals->pStringBase + *(int *)*piVar4);
        if (*(int *)(*piVar4 + 0x1cc) == 0) {
          (*g_engfuncs.pfnAlertMessage)(at_console," - TargetName: No Targetname\n");
        }
        else {
          (*g_engfuncs.pfnAlertMessage)
                    (at_console," - Targetname: %s\n",
                     gpGlobals->pStringBase + *(int *)(*piVar4 + 0x1cc));
        }
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,"Model: %s\n",gpGlobals->pStringBase + *(int *)(*piVar4 + 0xb8));
        if (*(int *)(*piVar4 + 4) != 0) {
          (*g_engfuncs.pfnAlertMessage)
                    (at_console,"Globalname: %s\n",gpGlobals->pStringBase + *(int *)(*piVar4 + 4));
        }
      }
      break;
    case 0x6b:
      pTextureEntity = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
      peVar1 = this->pev;
      local_ac = peVar1->origin[0] + peVar1->view_ofs[0];
      local_a8 = peVar1->origin[1] + peVar1->view_ofs[1];
      local_a4 = peVar1->origin[2] + peVar1->view_ofs[2];
      local_cc = gpGlobals->v_forward[0] * 1024.0;
      local_c8 = gpGlobals->v_forward[1] * 1024.0;
      local_c4 = gpGlobals->v_forward[2] * 1024.0;
      local_bc = local_ac + local_cc;
      local_b8 = local_a8 + local_c8;
      local_b4 = local_a4 + local_c4;
      UTIL_TraceLine(&local_ac,&local_bc,1,this->pev->pContainingEntity,&local_9c);
      if (local_6c != (edict_t *)0x0) {
        pTextureEntity = local_6c;
      }
      pcVar5 = (*g_engfuncs.pfnTraceTexture)(pTextureEntity,&local_ac,&local_bc);
      if (pcVar5 != (char *)0x0) {
        (*g_engfuncs.pfnAlertMessage)(at_console,"Texture: %s\n",pcVar5);
      }
      break;
    case 0xc3:
      CBaseEntity::Create(0x10e702,this->pev->origin,this->pev->angles,0);
      break;
    case 0xc4:
      CBaseEntity::Create(0x10e712,this->pev->origin,this->pev->angles,0);
      break;
    case 0xc5:
      CBaseEntity::Create(0x10e724,this->pev->origin,this->pev->angles,0);
      break;
    case 199:
      uVar6 = CGraph::FindNearestNode();
      (*g_engfuncs.pfnAlertMessage)(at_console,"%d\n",uVar6);
      CGraph::FindNearestNode();
      CGraph::ShowNodeConnections();
      break;
    case 0xca:
      UTIL_MakeVectors(this->pev->v_angle);
      peVar1 = this->pev;
      local_bc = peVar1->origin[0] + peVar1->view_ofs[0];
      local_b8 = peVar1->origin[1] + peVar1->view_ofs[1];
      local_b4 = peVar1->origin[2] + peVar1->view_ofs[2];
      local_ac = gpGlobals->v_forward[0] * 128.0;
      local_a8 = gpGlobals->v_forward[1] * 128.0;
      local_a4 = gpGlobals->v_forward[2] * 128.0;
      local_cc = local_bc + local_ac;
      local_c8 = local_b8 + local_a8;
      local_c4 = local_b4 + local_a4;
      peVar2 = this->pev;
      local_9c = peVar2->origin[0] + peVar2->view_ofs[0];
      local_98 = peVar2->origin[1] + peVar2->view_ofs[1];
      local_94 = peVar2->origin[2] + peVar2->view_ofs[2];
      UTIL_TraceLine(&local_9c,&local_cc,1,peVar1->pContainingEntity,local_5c);
      if (local_4c != 1.0) {
        this_00 = GetClassPtr<CBloodSplat>(0);
        CBloodSplat::Spawn(this_00,(int)this->pev);
      }
    }
  }
  return;
}

/* 000dc0c4  CBasePlayer::AddPlayerItem  (430 bytes)
 * undefined4 AddPlayerItem(CBasePlayerItem * param_1)
 */
/* CBasePlayer::AddPlayerItem(CBasePlayerItem *) */

undefined4 __thiscall CBasePlayer::AddPlayerItem(CBasePlayer *this,CBasePlayerItem *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*param_1->vtable[0x57])(param_1);
  puVar1 = *(undefined4 **)(&this->field_0x9f8 + iVar2 * 4);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = (*param_1->vtable[0x46])(param_1,this);
      if (iVar2 == 0) {
LAB_000dc250:
        if (gEvilImpulse101 != 0) {
LAB_000dc25b:
          (*param_1->vtable[0x51])(param_1);
        }
        uVar3 = 0;
      }
      else {
        (**(code **)(*g_pGameRules + 0x7c))(g_pGameRules,this,param_1);
        CBasePlayerItem::CheckRespawn(param_1);
        iVar2 = (*param_1->vtable[0x57])(param_1);
        *(undefined4 *)&param_1[1].field_0x20 = *(undefined4 *)(&this->field_0x9f8 + iVar2 * 4);
        iVar2 = (*param_1->vtable[0x57])(param_1);
        *(CBasePlayerItem **)(&this->field_0x9f8 + iVar2 * 4) = param_1;
        iVar2 = (**(code **)(*g_pGameRules + 0x14))(g_pGameRules,this,param_1);
        if (iVar2 != 0) {
          SwitchWeapon(this,(int)param_1);
        }
        uVar3 = 1;
      }
      return uVar3;
    }
    iVar2 = strcmp(gpGlobals->pStringBase + *(int *)*puVar1,
                   gpGlobals->pStringBase + param_1->pev->classname);
    if (iVar2 == 0) {
      iVar2 = (*param_1->vtable[0x47])(param_1,puVar1);
      if (iVar2 == 0) goto LAB_000dc250;
      (**(code **)(*g_pGameRules + 0x7c))(g_pGameRules,this,param_1);
      CBasePlayerItem::CheckRespawn(param_1);
      (**(code **)(puVar1[0x18] + 0x134))(puVar1);
      if (*(int *)&this->field_0xa10 != 0) {
        (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x134))
                  (*(int *)&this->field_0xa10);
      }
      goto LAB_000dc25b;
    }
    puVar1 = (undefined4 *)puVar1[0x21];
  } while( true );
}

/* 000dc278  CBasePlayer::RemovePlayerItem  (262 bytes)
 * undefined4 RemovePlayerItem(int * param_1)
 */
/* CBasePlayer::RemovePlayerItem(CBasePlayerItem *) */

undefined4 __thiscall CBasePlayer::RemovePlayerItem(CBasePlayer *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (*(int **)&this->field_0xa10 == param_1) {
    ResetAutoaim(this);
    (**(code **)(param_1[0x18] + 0x130))(param_1,0);
    *(undefined4 *)(*param_1 + 0x104) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)&this->field_0xa10 = 0;
    this->pev->viewmodel = 0;
    this->pev->weaponmodel = 0;
  }
  else if (*(int **)&this->field_0xa18 == param_1) {
    *(undefined4 *)&this->field_0xa18 = 0;
  }
  iVar1 = (**(code **)(param_1[0x18] + 0x15c))(param_1);
  piVar3 = *(int **)(&this->field_0x9f8 + iVar1 * 4);
  if (piVar3 == param_1) {
    iVar1 = (**(code **)(piVar3[0x18] + 0x15c))(piVar3);
    *(int *)(&this->field_0x9f8 + iVar1 * 4) = piVar3[0x21];
    uVar2 = 1;
  }
  else {
    for (; (piVar3 != (int *)0x0 && ((int *)piVar3[0x21] != param_1)); piVar3 = (int *)piVar3[0x21])
    {
    }
    if (piVar3 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      piVar3[0x21] = param_1[0x21];
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* 000dc384  CBasePlayer::GiveAmmo  (254 bytes)
 * uint GiveAmmo(int param_1, char * param_2, int param_3)
 */
/* CBasePlayer::GiveAmmo(int, char *, int) */

uint __thiscall CBasePlayer::GiveAmmo(CBasePlayer *this,int param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iValue;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if (param_2 != (char *)0x0) {
    iVar1 = (**(code **)(*g_pGameRules + 0xa4))(g_pGameRules,this,param_2,param_3);
    if (iVar1 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar2 = GetAmmoIndex(param_2);
      uVar3 = 0xffffffff;
      if (uVar2 < 0x20) {
        iVar1 = param_3 - *(int *)(&this->field_0xa20 + uVar2 * 4);
        if (param_1 < iVar1) {
          iVar1 = param_1;
        }
        uVar3 = uVar2;
        if (0 < iVar1) {
          *(int *)(&this->field_0xa20 + uVar2 * 4) =
               *(int *)(&this->field_0xa20 + uVar2 * 4) + iVar1;
          if (gmsgAmmoPickup != 0) {
            (*g_engfuncs.pfnMessageBegin)
                      (1,gmsgAmmoPickup,(float *)0x0,this->pev->pContainingEntity);
            iValue = GetAmmoIndex(param_2);
            (*g_engfuncs.pfnWriteByte)(iValue);
            (*g_engfuncs.pfnWriteByte)(iVar1);
            (*g_engfuncs.pfnMessageEnd)();
          }
          TabulateAmmo(this);
        }
      }
    }
  }
  return uVar3;
}

/* 000dc484  CBasePlayer::ItemPreFrame  (75 bytes)
 * undefined ItemPreFrame(void)
 */
/* CBasePlayer::ItemPreFrame(void) */

void __thiscall CBasePlayer::ItemPreFrame(CBasePlayer *this)

{
  if ((*(float *)&this->field_0x12c <= 0.0) && (*(int *)&this->field_0xa10 != 0)) {
    (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x138))(*(int *)&this->field_0xa10);
  }
  return;
}

/* 000dc4d0  CBasePlayer::ItemPostFrame  (199 bytes)
 * undefined ItemPostFrame(void)
 */
/* CBasePlayer::ItemPostFrame(void) */

void __thiscall CBasePlayer::ItemPostFrame(CBasePlayer *this)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = int((EHANDLE *)&this->field_0x9c4);
  if ((CONCAT31(extraout_var,bVar1) == 0) &&
     ((((*(float *)&this->field_0x12c <= 0.0 || (iVar2 = *(int *)&this->field_0xa10, iVar2 == 0)) ||
       (*(int *)(iVar2 + 0xcc) == 0)) ||
      ((((this->pev->button & 0x40) != 0 && (*(int *)(*(int *)(iVar2 + 0xcc) + 0xc) == 1)) &&
       (*(int *)(*(int *)(iVar2 + 0xd0) + 0x10) != 0)))))) {
    (*this->vtable[0x5c])(this);
    if (*(int *)&this->field_0xa10 != 0) {
      (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x13c))(*(int *)&this->field_0xa10)
      ;
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,32000);
      *(int *)&this->field_0x7ec = iVar2;
    }
  }
  return;
}

/* 000dc598  CBasePlayer::AmmoInventory  (24 bytes)
 * undefined4 AmmoInventory(int param_1)
 */
/* CBasePlayer::AmmoInventory(int) */

undefined4 __thiscall CBasePlayer::AmmoInventory(CBasePlayer *this,int param_1)

{
  if (param_1 == -1) {
    return 0xffffffff;
  }
  return *(undefined4 *)(&this->field_0xa20 + param_1 * 4);
}

/* 000dc5b0  CBasePlayer::GetAmmoIndex  (324 bytes)
 * int GetAmmoIndex(char * param_1)
 */
/* CBasePlayer::GetAmmoIndex(char const *) */

int CBasePlayer::GetAmmoIndex(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 != (char *)0x0) {
    if ((DAT_001a5a28 != (char *)0x0) && (iVar1 = strcasecmp(param_1,DAT_001a5a28), iVar1 == 0)) {
      return 1;
    }
    if ((DAT_001a5a30 != (char *)0x0) && (iVar1 = strcasecmp(param_1,DAT_001a5a30), iVar1 == 0)) {
      return 2;
    }
    if ((DAT_001a5a38 != (char *)0x0) && (iVar1 = strcasecmp(param_1,DAT_001a5a38), iVar1 == 0)) {
      return 3;
    }
    iVar1 = 4;
    piVar3 = &DAT_001a5a40;
    piVar4 = piVar3;
    do {
      if ((*piVar3 != 0) && (iVar2 = strcasecmp(param_1,(char *)*piVar4), iVar2 == 0)) {
        return iVar1;
      }
      if ((piVar3[2] != 0) && (iVar2 = strcasecmp(param_1,(char *)piVar4[2]), iVar2 == 0)) {
        return iVar1 + 1;
      }
      if ((piVar3[4] != 0) && (iVar2 = strcasecmp(param_1,(char *)piVar4[4]), iVar2 == 0)) {
        return iVar1 + 2;
      }
      if ((piVar3[6] != 0) && (iVar2 = strcasecmp(param_1,(char *)piVar4[6]), iVar2 == 0)) {
        return iVar1 + 3;
      }
      piVar4 = piVar4 + 8;
      piVar3 = piVar3 + 8;
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x20);
  }
  return -1;
}

/* 000dc6f8  CBasePlayer::FBecomeProne  (17 bytes)
 * undefined4 FBecomeProne(void)
 */
/* CBasePlayer::FBecomeProne(void) */

undefined4 __thiscall CBasePlayer::FBecomeProne(CBasePlayer *this)

{
  *(uint *)&this->field_0x848 = *(uint *)&this->field_0x848 | 4;
  return 1;
}

/* 000dc70c  CBasePlayer::BarnacleVictimBitten  (52 bytes)
 * undefined BarnacleVictimBitten(undefined4 param_1)
 */
/* CBasePlayer::BarnacleVictimBitten(entvars_s *) */

void __thiscall CBasePlayer::BarnacleVictimBitten(CBasePlayer *this,undefined4 param_1)

{
  (*this->vtable[0x16])(this,param_1,param_1,this->pev->health + this->pev->armorvalue,0x2004);
  return;
}

/* 000dc740  CBasePlayer::BarnacleVictimReleased  (12 bytes)
 * undefined BarnacleVictimReleased(void)
 */
/* CBasePlayer::BarnacleVictimReleased(void) */

void __thiscall CBasePlayer::BarnacleVictimReleased(CBasePlayer *this)

{
  *(uint *)&this->field_0x848 = *(uint *)&this->field_0x848 & 0xfffffffb;
  return;
}

/* 000dc74c  CBasePlayer::Illumination  (68 bytes)
 * int Illumination(void)
 */
/* CBasePlayer::Illumination(void) */

int __thiscall CBasePlayer::Illumination(CBasePlayer *this)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnGetEntityIllum)(this->pev->pContainingEntity);
  iVar1 = iVar1 + *(int *)&this->field_0x800;
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}

/* 000dc790  CBasePlayer::EnableControl  (37 bytes)
 * undefined EnableControl(int param_1)
 */
/* CBasePlayer::EnableControl(int) */

void __thiscall CBasePlayer::EnableControl(CBasePlayer *this,int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    piVar1 = &this->pev->flags;
    *piVar1 = *piVar1 | 0x1000;
    return;
  }
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 & 0xffffefff;
  return;
}

/* 000dc7b8  CBasePlayer::GetAutoaimVector  (1099 bytes)
 * undefined4 GetAutoaimVector(int * param_1)
 */
/* CBasePlayer::GetAutoaimVector(float) */

undefined4 __thiscall CBasePlayer::GetAutoaimVector(CBasePlayer *this,int *param_1)

{
  globalvars_t *pgVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined2 in_FPUControlWord;
  vec_t *unaff_retaddr;
  undefined4 uStack_a0;
  undefined1 auStack_9c [12];
  float *pfStack_90;
  float *pfStack_88;
  float *local_84;
  float *local_80;
  float *local_7c;
  int local_78;
  undefined2 local_74;
  undefined2 uStack_72;
  float local_70;
  float local_6c;
  float fStack_68;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_40 [5];
  float local_2c;
  float local_28;
  float local_24;
  
  puVar4 = (undefined4 *)auStack_9c;
  uStack_a0 = 0xdc7c7;
  if (g_iSkillLevel == 3) {
    iVar3 = *param_1;
    local_2c = *(float *)(iVar3 + 0x74) + *(float *)(iVar3 + 0x68);
    local_28 = *(float *)(iVar3 + 0x78) + *(float *)(iVar3 + 0x6c);
    local_24 = *(float *)(iVar3 + 0x7c) + *(float *)(iVar3 + 0x70);
    UTIL_MakeVectors(&local_2c);
    pgVar1 = gpGlobals;
    this->pev = (entvars_t *)gpGlobals->v_forward[0];
    *(vec_t *)&this->field_0x4 = pgVar1->v_forward[1];
    *(vec_t *)&this->field_0x8 = pgVar1->v_forward[2];
  }
  else {
    local_7c = &local_2c;
    (**(code **)(param_1[0x18] + 0x168))(local_7c,param_1);
    local_84 = local_40;
    local_40[0] = 0.0;
    pfVar5 = local_84;
    pfVar6 = (float *)(param_1 + 0x2c8);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    iVar3 = param_1[0x2cb];
    local_40[1] = local_40[0];
    local_40[2] = local_40[0];
    AutoaimDeflection((int *)local_84,param_1,local_80,8192.0,param_1);
    iVar2 = (**(code **)(*g_pGameRules + 0x60))(g_pGameRules);
    if (iVar2 == 0) {
      param_1[0x2cb] = 0;
    }
    else if (iVar3 != param_1[0x2cb]) {
      (**(code **)(*(int *)(param_1[0x284] + 0x60) + 0x134))(param_1[0x284]);
    }
    if (180.0 < local_40[0]) {
      local_40[0] = local_40[0] - 360.0;
    }
    if (local_40[0] < -180.0) {
      local_40[0] = local_40[0] + 360.0;
    }
    if (180.0 < local_40[1]) {
      local_40[1] = local_40[1] - 360.0;
    }
    if (local_40[1] < -180.0) {
      local_40[1] = local_40[1] + 360.0;
    }
    if (25.0 < local_40[0]) {
      local_40[0] = 25.0;
    }
    if (local_40[0] < -25.0) {
      local_40[0] = -25.0;
    }
    if (12.0 < local_40[1]) {
      local_40[1] = 12.0;
    }
    if (local_40[1] < -12.0) {
      local_40[1] = -12.0;
    }
    if (g_iSkillLevel == 1) {
      local_60 = (float)param_1[0x2c8] * 0.67;
      local_5c = (float)param_1[0x2c9] * 0.67;
      fStack_58 = (float)param_1[0x2ca] * 0.67;
      local_70 = local_40[0] * 0.33;
      local_6c = local_40[1] * 0.33;
      fStack_68 = local_40[2] * 0.33;
      pfStack_88 = &local_50;
      local_50 = (float)param_1[0x2c8] * 0.67 + local_40[0] * 0.33;
      local_4c = local_40[1] * 0.33 + (float)param_1[0x2c9] * 0.67;
      fStack_48 = (float)param_1[0x2ca] * 0.67 + local_40[2] * 0.33;
      iVar3 = 3;
      pfVar6 = pfStack_88;
      pfVar5 = (float *)(param_1 + 0x2c8);
    }
    else {
      pfVar6 = &local_70;
      local_70 = local_40[0] * 0.9;
      local_6c = local_40[1] * 0.9;
      fStack_68 = local_40[2] * 0.9;
      pfVar5 = (float *)(param_1 + 0x2c8);
      iVar3 = 3;
      pfStack_90 = pfVar6;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar5 = pfVar5 + 1;
    }
    if ((*(float *)(g_psv_aim + 0xc) != 0.0) &&
       (((float)param_1[0x2ce] != (float)param_1[0x2c8] ||
        ((float)param_1[0x2cf] != (float)param_1[0x2c9])))) {
      (*g_engfuncs.pfnCrosshairAngle)
                (*(edict_t **)(*param_1 + 0x208),-(float)param_1[0x2c8],(float)param_1[0x2c9]);
      param_1[0x2ce] = (int)ROUND((float)param_1[0x2c8]);
      _local_74 = CONCAT22(uStack_72,in_FPUControlWord);
      local_78 = (int)ROUND((float)param_1[0x2c9]);
      param_1[0x2cf] = local_78;
    }
    iVar3 = *param_1;
    local_60 = *(float *)(iVar3 + 0x74) + *(float *)(iVar3 + 0x68);
    local_5c = *(float *)(iVar3 + 0x78) + *(float *)(iVar3 + 0x6c);
    fStack_58 = *(float *)(iVar3 + 0x7c) + *(float *)(iVar3 + 0x70);
    local_70 = local_60 + (float)param_1[0x2c8];
    local_6c = local_5c + (float)param_1[0x2c9];
    fStack_68 = fStack_58 + (float)param_1[0x2ca];
    UTIL_MakeVectors(&local_70);
    pgVar1 = gpGlobals;
    puVar4 = &uStack_a0;
    *unaff_retaddr = gpGlobals->v_forward[0];
    unaff_retaddr[1] = pgVar1->v_forward[1];
    unaff_retaddr[2] = pgVar1->v_forward[2];
  }
  return *(undefined4 *)((int)puVar4 + 0xa0);
}

/* 000dcc0c  CBasePlayer::AutoaimDeflection  (2019 bytes)
 * undefined4 AutoaimDeflection(int * param_1, int * param_2, float * param_3, float param_4, undefined4 param_5)
 */
/* CBasePlayer::AutoaimDeflection(Vector &, float, float) */

undefined4
CBasePlayer::AutoaimDeflection
          (int *param_1,int *param_2,float *param_3,float param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  float *pfVar6;
  float fVar7;
  edict_t *peVar8;
  int iVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  vec_t *pvVar13;
  undefined4 *puVar14;
  vec_t *pvVar15;
  undefined4 *puVar16;
  undefined4 auStackY_134 [2];
  int aiStack_118 [3];
  undefined1 auStack_10c [20];
  int local_f8 [5];
  int local_e4 [5];
  float local_d0 [3];
  vec_t *local_c4;
  float local_c0 [2];
  int local_b8;
  edict_t *local_b4;
  float local_b0 [17];
  undefined1 local_6c [12];
  float local_60 [8];
  int local_40 [5];
  float local_2c [7];
  
  puVar11 = auStack_10c;
  puVar12 = auStack_10c;
  local_b4 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  if (*(float *)(g_psv_aim + 0xc) == 0.0) {
    param_2[0x2cb] = 0;
    *param_1 = g_vecZero;
    param_1[1] = DAT_00190ef0;
    param_1[2] = DAT_00190ef4;
  }
  else {
    iVar9 = *param_2;
    local_b0[9] = *(float *)(iVar9 + 0x74) + *(float *)(iVar9 + 0x68);
    local_b0[10] = *(float *)(iVar9 + 0x78) + *(float *)(iVar9 + 0x6c);
    local_b0[0xb] = *(float *)(iVar9 + 0x7c) + *(float *)(iVar9 + 0x70);
    local_b0[0xd] = local_b0[9] + (float)param_2[0x2c8];
    local_b0[0xe] = local_b0[10] + (float)param_2[0x2c9];
    local_b0[0xf] = local_b0[0xb] + (float)param_2[0x2ca];
    UTIL_MakeVectors(local_b0 + 0xd);
    local_c4 = gpGlobals->v_forward;
    pvVar13 = local_c4;
    pvVar15 = local_2c;
    for (iVar9 = 3; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pvVar15 = *pvVar13;
      pvVar13 = pvVar13 + 1;
      pvVar15 = pvVar15 + 1;
    }
    local_b8 = param_5;
    local_c0[1] = 0.0;
    param_2[0x2cb] = 0;
    local_b0[0xd] = param_4 * local_2c[0];
    local_b0[0xe] = param_4 * local_2c[1];
    local_b0[0xf] = param_4 * local_2c[2];
    local_b0[9] = *param_3 + local_b0[0xd];
    local_b0[10] = param_3[1] + local_b0[0xe];
    local_b0[0xb] = param_3[2] + local_b0[0xf];
    UTIL_TraceLine(param_3,local_b0 + 9,0,*(undefined4 *)(*param_2 + 0x208),local_6c);
    if ((((local_40[1] == 0) || (*(float *)(local_40[1] + 0x1ec) == 0.0)) ||
        ((*(int *)(*param_2 + 0x1c0) != 3 && (*(int *)(local_40[1] + 0x240) == 3)))) ||
       ((*(int *)(*param_2 + 0x1c0) == 3 && (*(int *)(local_40[1] + 0x240) == 0)))) {
      local_d0[2] = 1.4013e-45;
      puVar12 = auStack_10c;
      if (1 < gpGlobals->maxEntities) {
        do {
          puVar12 = puVar11;
          if (((**(int **)(puVar11 + 0x58) == 0) &&
              ((float)(*(int **)(puVar11 + 0x58))[0x7b] == 2.0)) &&
             (*(int *)(puVar11 + 0x58) != *(int *)(**(int **)(puVar11 + 0x114) + 0x208))) {
            iVar9 = *g_pGameRules;
            *(int *)(puVar11 + -8) = *(int *)(puVar11 + 0x58);
            *(undefined4 *)(puVar11 + -0xc) = *(undefined4 *)(puVar11 + 0x114);
            *(int **)(puVar11 + -0x10) = g_pGameRules;
            pcVar5 = *(code **)(iVar9 + 0x48);
            *(undefined4 *)(puVar11 + -0x14) = 0xdcf2a;
            iVar9 = (*pcVar5)();
            if (iVar9 != 0) {
              peVar8 = *(edict_t **)(puVar11 + 0x58);
              if (peVar8 == (edict_t *)0x0) {
                *(undefined4 *)(puVar11 + -0x10) = 0;
                *(undefined4 *)(puVar11 + -0x14) = 0xdcf4e;
                peVar8 = (*g_engfuncs.pfnPEntityOfEntOffset)(*(int *)(puVar11 + -0x10));
              }
              piVar10 = (int *)0x0;
              if (peVar8 != (edict_t *)0x0) {
                piVar10 = peVar8->pvPrivateData;
              }
              if (piVar10 != (int *)0x0) {
                iVar9 = piVar10[0x18];
                *(int **)(puVar11 + -0x10) = piVar10;
                pcVar5 = *(code **)(iVar9 + 0xb4);
                *(undefined4 *)(puVar11 + -0x14) = 0xdcf74;
                iVar9 = (*pcVar5)();
                if (((iVar9 != 0) &&
                    ((*(int *)(**(int **)(puVar11 + 0x114) + 0x1c0) == 3 ||
                     (*(int *)(*piVar10 + 0x1c0) != 3)))) &&
                   ((*(int *)(**(int **)(puVar11 + 0x114) + 0x1c0) != 3 ||
                    (*(int *)(*piVar10 + 0x1c0) != 0)))) {
                  *(undefined1 **)(puVar11 + 0x3c) = puVar11 + 0x70;
                  iVar9 = piVar10[0x18];
                  *(undefined4 *)(puVar11 + -8) = *(undefined4 *)(puVar11 + 0x118);
                  *(int **)(puVar11 + -0xc) = piVar10;
                  *(undefined4 *)(puVar11 + -0x10) = *(undefined4 *)(puVar11 + 0x3c);
                  pcVar5 = *(code **)(iVar9 + 0x104);
                  *(undefined4 *)(puVar11 + -0x14) = 0xdcfe3;
                  (*pcVar5)();
                  *(undefined1 **)(puVar11 + 0x34) = puVar11 + 0x7c;
                  puVar14 = *(undefined4 **)(puVar11 + 0x38);
                  puVar16 = (undefined4 *)(puVar11 + 0x7c);
                  for (iVar9 = 3; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *puVar16 = *puVar14;
                    puVar14 = puVar14 + 1;
                    puVar16 = puVar16 + 1;
                  }
                  puVar12 = puVar11 + -4;
                  pfVar6 = *(float **)(puVar11 + 0x114);
                  fVar1 = *pfVar6;
                  fVar2 = pfVar6[1];
                  fVar3 = *(float *)(puVar11 + 0x84) - pfVar6[2];
                  *(float *)(puVar11 + 0x5c) = *(float *)(puVar11 + 0x7c) - fVar1;
                  *(float *)(puVar11 + 0x60) = *(float *)(puVar11 + 0x80) - fVar2;
                  *(float *)(puVar11 + 100) = fVar3;
                  *(float *)(puVar11 + 0x58) =
                       SQRT(fVar3 * fVar3 +
                            (*(float *)(puVar11 + 0x80) - fVar2) * *(float *)(puVar11 + 0x60) +
                            (*(float *)(puVar11 + 0x7c) - fVar1) * *(float *)(puVar11 + 0x5c));
                  if (*(float *)(puVar11 + 0x58) == 0.0) {
                    *(undefined4 *)(puVar11 + 0x6c) = 0;
                    *(undefined4 *)(puVar11 + 0x70) = 0;
                    *(undefined4 *)(puVar11 + 0x74) = 0x3f800000;
                  }
                  else {
                    fVar1 = 1.0 / *(float *)(puVar11 + 0x58);
                    *(float *)(puVar11 + 0x6c) = fVar1 * *(float *)(puVar11 + 0x5c);
                    *(float *)(puVar11 + 0x70) = fVar1 * *(float *)(puVar11 + 0x60);
                    *(float *)(puVar11 + 0x74) = fVar1 * *(float *)(puVar11 + 100);
                  }
                  *(undefined1 **)(puVar11 + 0x2c) = puVar11 + 0x8c;
                  *(undefined1 **)(puVar11 + 0x28) = puVar11 + 0x6c;
                  puVar14 = *(undefined4 **)(puVar11 + 0x28);
                  puVar16 = (undefined4 *)(puVar11 + 0x8c);
                  for (iVar9 = 3; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *puVar16 = *puVar14;
                    puVar14 = puVar14 + 1;
                    puVar16 = puVar16 + 1;
                  }
                  fVar1 = *(float *)(puVar11 + 0x8c);
                  fVar2 = *(float *)(puVar11 + 0x90);
                  fVar3 = *(float *)(puVar11 + 0x94);
                  if (0.0 <= fVar3 * gpGlobals->v_forward[2] +
                             fVar2 * gpGlobals->v_forward[1] + fVar1 * gpGlobals->v_forward[0]) {
                    *(float *)(puVar11 + 0x3c) =
                         ABS(fVar3 * gpGlobals->v_up[2] +
                             fVar2 * gpGlobals->v_up[1] + fVar1 * gpGlobals->v_up[0]) * 0.5 +
                         ABS(fVar3 * gpGlobals->v_right[2] +
                             fVar2 * gpGlobals->v_right[1] + fVar1 * gpGlobals->v_right[0]);
                    pfVar6 = *(float **)(puVar11 + 0x114);
                    fVar1 = *(float *)(puVar11 + 0x7c) - *pfVar6;
                    fVar3 = *(float *)(puVar11 + 0x80) - pfVar6[1];
                    fVar2 = *(float *)(puVar11 + 0x84) - pfVar6[2];
                    *(float *)(puVar11 + 0x5c) = fVar1;
                    *(float *)(puVar11 + 0x60) = fVar3;
                    *(float *)(puVar11 + 100) = fVar2;
                    *(float *)(puVar11 + 0x58) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1)
                    ;
                    *(undefined8 *)(puVar11 + 0x1c) = 0x3ff0000000000000;
                    *(float *)(puVar11 + 0x3c) =
                         ((*(float *)(puVar11 + 0x58) / *(float *)(puVar11 + 0x118)) * 0.2 + 1.0) *
                         *(float *)(puVar11 + 0x3c);
                    puVar12 = puVar11 + -4;
                    if (*(float *)(puVar11 + 0x3c) <= *(float *)(puVar11 + 0x50)) {
                      iVar9 = **(int **)(puVar11 + 0x110);
                      *(undefined1 **)(puVar11 + -0x14) = puVar11 + 0x9c;
                      *(undefined4 *)(puVar11 + -0x18) = *(undefined4 *)(iVar9 + 0x208);
                      *(undefined4 *)(puVar11 + -0x1c) = 0;
                      *(undefined1 **)(puVar11 + -0x20) = puVar11 + 0x7c;
                      *(undefined4 *)(puVar11 + -0x24) = *(undefined4 *)(puVar11 + 0x114);
                      *(undefined4 *)(puVar11 + -0x28) = 0xdd1fd;
                      UTIL_TraceLine(*(undefined4 *)(puVar11 + -0x24),
                                     *(undefined4 *)(puVar11 + -0x20),*(int *)(puVar11 + -0x1c),
                                     *(undefined4 *)(puVar11 + -0x18),
                                     *(undefined4 *)(puVar11 + -0x14));
                      puVar12 = puVar11 + -4;
                      if ((*(float *)(puVar11 + 0xac) == (float)*(double *)(puVar11 + 0x1c)) ||
                         (*(int *)(puVar11 + 0xcc) == *(int *)(puVar11 + 0x54))) {
                        iVar9 = *(int *)(*(int *)(puVar11 + 0x110) + 0x60);
                        *(int **)(puVar11 + -0x10) = piVar10;
                        *(int *)(puVar11 + -0x14) = *(int *)(puVar11 + 0x110);
                        pcVar5 = *(code **)(iVar9 + 0x138);
                        *(undefined4 *)(puVar11 + -0x18) = 0xdd238;
                        iVar9 = (*pcVar5)();
                        if (iVar9 < 0) {
                          iVar9 = piVar10[0x18];
                          *(int **)(puVar11 + -0x14) = piVar10;
                          pcVar5 = *(code **)(iVar9 + 200);
                          *(undefined4 *)(puVar11 + -0x18) = 0xdd24c;
                          iVar9 = (*pcVar5)();
                          if (iVar9 == 0) {
                            iVar9 = *g_pGameRules;
                            *(int **)(puVar11 + -0x14) = g_pGameRules;
                            pcVar5 = *(code **)(iVar9 + 0x20);
                            *(undefined4 *)(puVar11 + -0x18) = 0xdd264;
                            iVar9 = (*pcVar5)();
                            puVar12 = puVar11 + -4;
                            if (iVar9 == 0) goto LAB_000dd2a7;
                          }
                        }
                        puVar12 = puVar11 + -4;
                        *(undefined4 *)(puVar11 + 0x50) = *(undefined4 *)(puVar11 + 0x3c);
                        *(undefined4 *)(puVar11 + 0x4c) = *(undefined4 *)(puVar11 + 0x54);
                        *(undefined1 **)(puVar11 + 0x18) = puVar11 + 0xdc;
                        *(undefined1 **)(puVar11 + 0x14) = puVar11 + 0x8c;
                        puVar14 = *(undefined4 **)(puVar11 + 0x14);
                        puVar16 = (undefined4 *)(puVar11 + 0xdc);
                        for (iVar9 = 3; iVar9 != 0; iVar9 = iVar9 + -1) {
                          *puVar16 = *puVar14;
                          puVar14 = puVar14 + 1;
                          puVar16 = puVar16 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_000dd2a7:
          *(int *)(puVar12 + 0x44) = *(int *)(puVar12 + 0x44) + 1;
          *(int *)(puVar12 + 0x58) = *(int *)(puVar12 + 0x58) + 0x324;
          puVar11 = puVar12;
        } while (*(int *)(puVar12 + 0x44) < gpGlobals->maxEntities);
      }
      if (*(int *)(puVar12 + 0x50) != 0) {
        *(undefined1 **)(puVar12 + 0x14) = puVar12 + 0x60;
        *(undefined1 **)(puVar12 + 0x10) = puVar12 + 0xe0;
        *(undefined1 **)(puVar12 + -0xc) = puVar12 + 0xe0;
        *(undefined1 **)(puVar12 + -0x10) = puVar12 + 0x60;
        *(undefined4 *)(puVar12 + -0x14) = 0xdd2f3;
        UTIL_VecToAngles(*(undefined4 **)(puVar12 + -0x10),*(undefined4 *)(puVar12 + -0xc));
        puVar14 = *(undefined4 **)(puVar12 + 0x14);
        puVar16 = *(undefined4 **)(puVar12 + 0x10);
        for (iVar9 = 3; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        fVar1 = *(float *)(puVar12 + 0xe0);
        *(float *)(puVar12 + 0xe0) = -fVar1;
        iVar9 = **(int **)(puVar12 + 0x114);
        fVar7 = -fVar1 - *(float *)(iVar9 + 0x74);
        fVar1 = *(float *)(iVar9 + 0x78);
        fVar2 = *(float *)(iVar9 + 0x7c);
        *(float *)(puVar12 + 0x70) = fVar7;
        *(float *)(puVar12 + 0x74) = *(float *)(puVar12 + 0xe4) - fVar1;
        *(float *)(puVar12 + 0x78) = *(float *)(puVar12 + 0xe8) - fVar2;
        iVar9 = **(int **)(puVar12 + 0x114);
        fVar3 = *(float *)(iVar9 + 0x6c);
        fVar4 = *(float *)(iVar9 + 0x70);
        *(float *)(puVar12 + 0x60) = fVar7 - *(float *)(iVar9 + 0x68);
        *(float *)(puVar12 + 100) = (*(float *)(puVar12 + 0xe4) - fVar1) - fVar3;
        *(float *)(puVar12 + 0x68) = (*(float *)(puVar12 + 0xe8) - fVar2) - fVar4;
        puVar14 = *(undefined4 **)(puVar12 + 0x14);
        puVar16 = *(undefined4 **)(puVar12 + 0x10);
        for (iVar9 = 3; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        if (*(float *)(*(int *)(puVar12 + 0x50) + 0x1ec) == 2.0) {
          *(undefined4 *)(*(int *)(puVar12 + 0x114) + 0xb2c) = 1;
        }
        puVar14 = *(undefined4 **)(puVar12 + 0x110);
        *puVar14 = *(undefined4 *)(puVar12 + 0xe0);
        puVar14[1] = *(undefined4 *)(puVar12 + 0xe4);
        puVar14[2] = *(undefined4 *)(puVar12 + 0xe8);
        goto LAB_000dd3e1;
      }
      iVar9 = 0;
      param_1 = *(int **)(puVar12 + 0x110);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(float *)(local_40[1] + 0x1ec) == 2.0) {
        param_2[0x2cb] = 1;
      }
      *param_1 = param_2[0x2c8];
      param_1[1] = param_2[0x2c9];
      iVar9 = param_2[0x2ca];
      puVar12 = auStack_10c;
    }
    param_1[2] = iVar9;
  }
LAB_000dd3e1:
  return *(undefined4 *)(puVar12 + 0x110);
}

/* 000dd3f8  CBasePlayer::ResetAutoaim  (141 bytes)
 * undefined ResetAutoaim(void)
 */
/* CBasePlayer::ResetAutoaim(void) */

void __thiscall CBasePlayer::ResetAutoaim(CBasePlayer *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_2c [7];
  
  if ((*(float *)&this->field_0xb20 != 0.0) || (*(float *)&this->field_0xb24 != 0.0)) {
    local_2c[0] = 0;
    local_2c[1] = 0;
    local_2c[2] = 0;
    puVar2 = local_2c;
    puVar3 = (undefined4 *)&this->field_0xb20;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    (*g_engfuncs.pfnCrosshairAngle)(this->pev->pContainingEntity,0.0,0.0);
  }
  *(undefined4 *)&this->field_0xb2c = 0;
  return;
}

/* 000dd488  CBasePlayer::SetCustomDecalFrames  (27 bytes)
 * undefined SetCustomDecalFrames(uint param_1)
 */
/* CBasePlayer::SetCustomDecalFrames(int) */

void __thiscall CBasePlayer::SetCustomDecalFrames(CBasePlayer *this,uint param_1)

{
  *(uint *)&this->field_0xb40 = param_1 | ~-(uint)(param_1 - 1 < 7);
  return;
}

/* 000dd4a4  CBasePlayer::GetCustomDecalFrames  (11 bytes)
 * undefined4 GetCustomDecalFrames(void)
 */
/* CBasePlayer::GetCustomDecalFrames(void) */

undefined4 __thiscall CBasePlayer::GetCustomDecalFrames(CBasePlayer *this)

{
  return *(undefined4 *)&this->field_0xb40;
}

/* 000dd4b0  CBasePlayer::DropPlayerItem  (844 bytes)
 * undefined DropPlayerItem(char * param_1)
 */
/* CBasePlayer::DropPlayerItem(char *) */

void __thiscall CBasePlayer::DropPlayerItem(CBasePlayer *this,char *param_1)

{
  int *piVar1;
  char cVar2;
  entvars_t *peVar3;
  int iVar4;
  int iVar5;
  CWeaponBox *this_00;
  int *piVar6;
  char *pcVar7;
  vec_t *pvVar8;
  vec_t *pvVar9;
  bool bVar10;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  iVar4 = (**(code **)(*g_pGameRules + 0x1c))(g_pGameRules);
  if ((iVar4 != 0) && ((float)weaponstay._12_4_ <= 0.0)) {
    iVar4 = -1;
    pcVar7 = param_1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    pcVar7 = (char *)((uint)param_1 & (iVar4 == -2) - 1);
    iVar4 = 0;
    do {
      for (piVar6 = *(int **)(&this->field_0x9f8 + iVar4 * 4); piVar6 != (int *)0x0;
          piVar6 = (int *)piVar6[0x21]) {
        if (pcVar7 == (char *)0x0) {
          bVar10 = piVar6 == *(int **)&this->field_0xa10;
        }
        else {
          iVar5 = strcmp(pcVar7,gpGlobals->pStringBase + *(int *)*piVar6);
          bVar10 = iVar5 == 0;
        }
        if (bVar10) break;
      }
      if (piVar6 != (int *)0x0) {
        (**(code **)(*g_pGameRules + 0x18))(g_pGameRules,this,piVar6);
        UTIL_MakeVectors(this->pev->angles);
        piVar1 = &this->pev->weapons;
        *piVar1 = *piVar1 & (-2 << (*(byte *)(piVar6 + 0x22) & 0x1f) |
                            0xfffffffeU >> 0x20 - (*(byte *)(piVar6 + 0x22) & 0x1f));
        peVar3 = this->pev;
        local_3c = gpGlobals->v_forward[0] * 10.0;
        local_38 = gpGlobals->v_forward[1] * 10.0;
        local_34 = gpGlobals->v_forward[2] * 10.0;
        local_2c = peVar3->origin[0] + local_3c;
        local_28 = peVar3->origin[1] + local_38;
        local_24 = peVar3->origin[2] + local_34;
        this_00 = (CWeaponBox *)
                  CBaseEntity::Create(0x10e5a7,&local_2c,this->pev->angles,peVar3->pContainingEntity
                                     );
        this_00->pev->angles[0] = 0.0;
        this_00->pev->angles[2] = 0.0;
        CWeaponBox::PackWeapon(this_00,piVar6);
        local_2c = gpGlobals->v_forward[0] * 300.0;
        local_28 = gpGlobals->v_forward[1] * 300.0;
        local_24 = gpGlobals->v_forward[2] * 300.0;
        local_3c = local_2c + gpGlobals->v_forward[0] * 100.0;
        local_38 = local_28 + gpGlobals->v_forward[1] * 100.0;
        local_34 = local_24 + gpGlobals->v_forward[2] * 100.0;
        pvVar8 = &local_3c;
        pvVar9 = this_00->pev->velocity;
        for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pvVar9 = *pvVar8;
          pvVar8 = pvVar8 + 1;
          pvVar9 = pvVar9 + 1;
        }
        iVar4 = GetAmmoIndex((char *)(&DAT_001a5b48)[piVar6[0x22] * 0xb]);
        if (iVar4 == -1) {
          return;
        }
        if (((&DAT_001a5b64)[piVar6[0x22] * 0x2c] & 0x10) != 0) {
          CWeaponBox::PackAmmo
                    (this_00,(&DAT_001a5b48)[piVar6[0x22] * 0xb] - (int)gpGlobals->pStringBase,
                     *(int *)(&this->field_0xa20 + iVar4 * 4));
          *(undefined4 *)(&this->field_0xa20 + iVar4 * 4) = 0;
          return;
        }
        iVar4 = iVar4 * 4;
        CWeaponBox::PackAmmo
                  (this_00,(&DAT_001a5b48)[piVar6[0x22] * 0xb] - (int)gpGlobals->pStringBase,
                   *(int *)(&this->field_0xa20 + iVar4) / 2);
        *(int *)(&this->field_0xa20 + iVar4) = *(int *)(&this->field_0xa20 + iVar4) / 2;
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
  }
  return;
}

/* 000dd808  CBasePlayer::HasPlayerItem  (128 bytes)
 * undefined4 HasPlayerItem(undefined4 * param_1)
 */
/* CBasePlayer::HasPlayerItem(CBasePlayerItem *) */

undefined4 __thiscall CBasePlayer::HasPlayerItem(CBasePlayer *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  globalvars_t *pgVar2;
  int iVar3;
  
  iVar3 = (**(code **)(param_1[0x18] + 0x15c))(param_1);
  pgVar2 = gpGlobals;
  puVar1 = *(undefined4 **)(&this->field_0x9f8 + iVar3 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar3 = strcmp(pgVar2->pStringBase + *(int *)*puVar1,pgVar2->pStringBase + *(int *)*param_1);
    if (iVar3 == 0) break;
    puVar1 = (undefined4 *)puVar1[0x21];
  }
  return 1;
}

/* 000dd88c  CBasePlayer::HasNamedPlayerItem  (251 bytes)
 * undefined4 HasNamedPlayerItem(char * param_1)
 */
/* CBasePlayer::HasNamedPlayerItem(char const *) */

undefined4 __thiscall CBasePlayer::HasNamedPlayerItem(CBasePlayer *this,char *param_1)

{
  undefined4 *puVar1;
  globalvars_t *pgVar2;
  globalvars_t *pgVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  local_14 = 0;
  iVar5 = 0x9f0;
  do {
    pgVar3 = gpGlobals;
    pgVar2 = gpGlobals;
    for (puVar1 = *(undefined4 **)(&this->field_0x8 + iVar5); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x21]) {
      gpGlobals = pgVar2;
      iVar4 = strcmp(param_1,pgVar3->pStringBase + *(int *)*puVar1);
      if (iVar4 == 0) {
        return 1;
      }
      pgVar2 = gpGlobals;
    }
    pgVar3 = pgVar2;
    for (puVar1 = *(undefined4 **)(&this->field_0xc + iVar5); gpGlobals = pgVar3,
        puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[0x21]) {
      iVar4 = strcmp(param_1,pgVar2->pStringBase + *(int *)*puVar1);
      if (iVar4 == 0) {
        return 1;
      }
      pgVar3 = gpGlobals;
    }
    for (puVar1 = *(undefined4 **)(&this->field_0x10 + iVar5); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x21]) {
      iVar4 = strcmp(param_1,pgVar3->pStringBase + *(int *)*puVar1);
      if (iVar4 == 0) {
        return 1;
      }
    }
    iVar5 = iVar5 + 0xc;
    local_14 = local_14 + 3;
  } while (local_14 < 6);
  return 0;
}

/* 000dd98c  CBasePlayer::SwitchWeapon  (131 bytes)
 * undefined4 SwitchWeapon(int param_1)
 */
/* CBasePlayer::SwitchWeapon(CBasePlayerItem *) */

undefined4 __thiscall CBasePlayer::SwitchWeapon(CBasePlayer *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x60) + 0x124))(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    ResetAutoaim(this);
    if (*(int *)&this->field_0xa10 != 0) {
      (**(code **)(*(int *)(*(int *)&this->field_0xa10 + 0x60) + 0x130))
                (*(undefined4 *)&this->field_0xa10,0);
    }
    *(int *)&this->field_0xa10 = param_1;
    (**(code **)(*(int *)(param_1 + 0x60) + 0x128))(param_1);
    uVar2 = 1;
  }
  return uVar2;
}

