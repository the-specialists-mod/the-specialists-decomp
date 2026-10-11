/* mp.dll - CBreakable (16 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001e5a0  CBreakable::KeyValue  (996 bytes)
 * undefined KeyValue(int param_1)
 * called by: CPushable::KeyValue
 */
void __thiscall CBreakable::KeyValue(CBreakable *this,int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  CBreakable *this_00;
  void *this_01;
  uint uVar7;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  undefined3 uVar8;
  
  pbVar6 = *(byte **)(param_1 + 4);
  pcVar9 = s_explosion_1009e5ac;
  pbVar3 = pbVar6;
  this_00 = this;
  do {
    bVar2 = *pbVar3;
    uVar8 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
    bVar11 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_1001e5da:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_1001e5df;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
    bVar11 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_1001e5da;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_1001e5df:
  if (iVar4 == 0) {
    uVar5 = FUN_100887b0(this_00,*(byte_conflict **)(param_1 + 8),
                         (byte_conflict *)s_directed_1009e5a0);
    if (uVar5 == 0) {
      *(undefined4 *)&this->field_0x6c = 1;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    uVar5 = FUN_100887b0(this_01,*(byte_conflict **)(param_1 + 8),(byte_conflict *)s_random_1009e598
                        );
    if (uVar5 == 0) {
      *(undefined4 *)&this->field_0x6c = 0;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)&this->field_0x6c = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_material_1009e58c;
  pbVar3 = pbVar6;
  do {
    bVar2 = *pbVar3;
    uVar8 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
    bVar11 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_1001e678:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_1001e67d;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
    bVar11 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_1001e678;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_1001e67d:
  if (iVar4 == 0) {
    iVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    if ((-1 < iVar4) && (iVar4 < 10)) {
      *(int *)&this->field_0x68 = iVar4;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)&this->field_0x68 = 1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_respawntime_1009d714;
  pbVar3 = pbVar6;
  do {
    bVar2 = *pbVar3;
    uVar8 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
    bVar11 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_1001e6e8:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_1001e6ed;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
    bVar11 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_1001e6e8;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_1001e6ed:
  if (iVar4 == 0) {
    iVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x80 = (float)iVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_respawntarget_1009e57c;
  pbVar3 = pbVar6;
  do {
    bVar2 = *pbVar3;
    uVar8 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
    bVar11 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_1001e748:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_1001e74d;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
    bVar11 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_1001e748;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_1001e74d:
  if (iVar4 != 0) {
    pcVar9 = s_deadmodel_1009e570;
    pbVar3 = pbVar6;
    do {
      bVar2 = *pbVar3;
      uVar8 = (undefined3)((uint)this_00 >> 8);
      this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
      bVar11 = bVar2 < (byte)*pcVar9;
      if (bVar2 != *pcVar9) {
LAB_1001e7b4:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_1001e7b9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
      bVar11 = bVar2 < (byte)pcVar9[1];
      if (bVar2 != pcVar9[1]) goto LAB_1001e7b4;
      pbVar3 = pbVar3 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_1001e7b9:
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar9 = s_shards_1009e568;
    pbVar3 = pbVar6;
    do {
      bVar2 = *pbVar3;
      uVar8 = (undefined3)((uint)this_00 >> 8);
      this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
      bVar11 = bVar2 < (byte)*pcVar9;
      if (bVar2 != *pcVar9) {
LAB_1001e7f6:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_1001e7fb;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
      bVar11 = bVar2 < (byte)pcVar9[1];
      if (bVar2 != pcVar9[1]) goto LAB_1001e7f6;
      pbVar3 = pbVar3 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_1001e7fb:
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar9 = s_gibmodel_1009e55c;
    pbVar3 = pbVar6;
    do {
      bVar2 = *pbVar3;
      uVar8 = (undefined3)((uint)this_00 >> 8);
      this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
      bVar11 = bVar2 < (byte)*pcVar9;
      if (bVar2 != *pcVar9) {
LAB_1001e838:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_1001e83d;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
      bVar11 = bVar2 < (byte)pcVar9[1];
      if (bVar2 != pcVar9[1]) goto LAB_1001e838;
      pbVar3 = pbVar3 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_1001e83d:
    if (iVar4 == 0) {
      iVar4 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x78 = iVar4;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar9 = s_spawnobject_1009e550;
    pbVar3 = pbVar6;
    do {
      bVar2 = *pbVar3;
      uVar8 = (undefined3)((uint)this_00 >> 8);
      this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
      bVar11 = bVar2 < (byte)*pcVar9;
      if (bVar2 != *pcVar9) {
LAB_1001e88e:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_1001e893;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
      bVar11 = bVar2 < (byte)pcVar9[1];
      if (bVar2 != pcVar9[1]) goto LAB_1001e88e;
      pbVar3 = pbVar3 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_1001e893:
    if (iVar4 == 0) {
      uVar5 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
      if ((0 < (int)uVar5) && (uVar5 < 0x16)) {
        *(int *)&this->field_0x7c =
             *(int *)(&DAT_1009e148 + uVar5 * 4) - (int)gpGlobals->pStringBase;
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar9 = s_explodemagnitude_1009e53c;
    pbVar3 = pbVar6;
    do {
      bVar2 = *pbVar3;
      uVar8 = (undefined3)((uint)this_00 >> 8);
      this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
      bVar11 = bVar2 < (byte)*pcVar9;
      if (bVar2 != *pcVar9) {
LAB_1001e901:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_1001e906;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      this_00 = (CBreakable *)CONCAT31(uVar8,bVar2);
      bVar11 = bVar2 < (byte)pcVar9[1];
      if (bVar2 != pcVar9[1]) goto LAB_1001e901;
      pbVar3 = pbVar3 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_1001e906:
    if (iVar4 == 0) {
      iVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
      this->pev->impulse = iVar4;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pbVar3 = &DAT_1009e538;
    do {
      bVar2 = *pbVar6;
      bVar11 = bVar2 < *pbVar3;
      if (bVar2 != *pbVar3) {
LAB_1001e95c:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_1001e961;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar11 = bVar2 < pbVar3[1];
      if (bVar2 != pbVar3[1]) goto LAB_1001e95c;
      pbVar6 = pbVar6 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_1001e961:
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
    return;
  }
  uVar5 = 0xffffffff;
  pcVar9 = *(char **)(param_1 + 8);
  do {
    pcVar10 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar10 + -uVar5;
  pcVar10 = &this->field_0x84;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 1001e9a0  CBreakable::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CPushable::Save
 */
void __thiscall CBreakable::Save(CBreakable *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CBreakable_1009e5b8,(int)this,0x1009e1a0,5);
  return;
}

/* 1001e9d0  CBreakable::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CPushable::Restore
 */
void __thiscall CBreakable::Restore(CBreakable *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBreakable_1009e5b8,(int)this,&DAT_1009e1a0,5);
  return;
}

/* 1001ea00  CBreakable::MaterialSoundList  (109 bytes)
 * undefined * * MaterialSoundList(undefined4 param_1, undefined4 * param_2)
 * called by: CBreakable::MaterialSoundPrecache, CBreakable::MaterialSoundRandom
 */
undefined ** __cdecl CBreakable::MaterialSoundList(undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
  case 6:
  case 7:
    *param_2 = 3;
    return &PTR_s_debris_glass1_wav_1009e22c;
  case 1:
    *param_2 = 3;
    return &PTR_s_debris_wood1_wav_1009e1f0;
  case 2:
    *param_2 = 3;
    return &PTR_s_debris_metal1_wav_1009e214;
  case 3:
    *param_2 = 6;
    return &PTR_s_debris_flesh1_wav_1009e1fc;
  case 4:
  case 8:
    *param_2 = 3;
    return &PTR_s_debris_concrete1_wav_1009e220;
  default:
    *param_2 = 0;
    return (undefined **)0x0;
  }
}

/* 1001eaa0  CBreakable::MaterialSoundPrecache  (65 bytes)
 * undefined MaterialSoundPrecache(undefined4 param_1)
 * called by: CBaseDoor::Precache, CBreakable::Precache, CEnvShooter::Precache
 */
void __cdecl CBreakable::MaterialSoundPrecache(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  local_4 = 0;
  ppuVar1 = MaterialSoundList(param_1,&local_4);
  if (0 < local_4) {
    do {
      (*g_engfuncs.pfnPrecacheSound)(*ppuVar1);
      iVar2 = iVar2 + 1;
      ppuVar1 = ppuVar1 + 1;
    } while (iVar2 < local_4);
  }
  return;
}

/* 1001eaf0  CBreakable::MaterialSoundRandom  (89 bytes)
 * undefined MaterialSoundRandom(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: CGib::BounceGibTouch
 */
void __cdecl
CBreakable::MaterialSoundRandom(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  void *this;
  int local_4;
  
  local_4 = 0;
  ppuVar1 = MaterialSoundList(param_2,&local_4);
  if (local_4 != 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,local_4 + -1);
    EMIT_SOUND_DYN(this,param_1,4,ppuVar1[iVar2],param_3,0x3f800000,0);
  }
  return;
}

/* 1001eb50  CBreakable::Precache  (359 bytes)
 * undefined Precache(char * param_1)
 * called by: CPushable::Precache
 */
void __fastcall CBreakable::Precache(char *param_1)

{
  int iVar1;
  char *s;
  
  s = param_1;
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 0:
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustglass1_wav_1009d844);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustglass2_wav_1009d85c);
    s = s_models_glassgibs_mdl_1009d8e0;
    break;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustcrate1_wav_1009d814);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustcrate2_wav_1009d82c);
    s = s_models_woodgibs_mdl_1009d880;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal1_wav_1009d7e4);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal2_wav_1009d7fc);
    s = s_models_metalplategibs_mdl_1009d8c4;
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustflesh1_wav_1009d7b4);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustflesh2_wav_1009d7cc);
    s = s_models_fleshgibs_mdl_1009e5d8;
    break;
  case 4:
    s = s_models_cindergibs_mdl_1009d8ac;
    goto LAB_1001ec33;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustceiling_wav_1009d764);
    s = s_models_ceilinggibs_mdl_1009d894;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark5_wav_1009c424);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark6_wav_1009c410);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal1_wav_1009d7e4);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal2_wav_1009d7fc);
    s = s_models_computergibs_mdl_1009d8f8;
    break;
  case 8:
    s = s_models_rockgibs_mdl_1009e5c4;
LAB_1001ec33:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustconcrete1_wav_1009d77c);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustconcrete2_wav_1009d798);
  }
  MaterialSoundPrecache(*(undefined4 *)(param_1 + 0x68));
  if (*(int *)(param_1 + 0x78) != 0) {
    s = gpGlobals->pStringBase + *(int *)(param_1 + 0x78);
  }
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s);
  *(int *)(param_1 + 0x70) = iVar1;
  if (*(int *)(param_1 + 0x7c) != 0) {
    UTIL_PrecacheOther((int)(gpGlobals->pStringBase + *(int *)(param_1 + 0x7c)));
  }
  return;
}

/* 1001ee80  CBreakable::BreakTouch  (269 bytes)
 * void BreakTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBreakable::BreakTouch(class CBaseEntity *) */

void __thiscall CBreakable::BreakTouch(CBreakable *this,CBaseEntity *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  float unaff_EDI;
  
                    /* 0x1ee80  13  ?BreakTouch@CBreakable@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar4 != 0) {
    bVar3 = FUN_1001f850((int)this);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      if (((this->pev->spawnflags & 2) != 0) &&
         (fVar2 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                       *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                       *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) * 0.01,
         this->pev->health <= fVar2)) {
        *(undefined4 *)&this->field_0x14 = 0;
        (*this->vtable[0x14])(iVar1,iVar1,fVar2,1);
        (**(code **)(*(int *)param_1 + 0x50))(this->pev,this->pev,unaff_EDI * 0.25,4);
      }
      if (((this->pev->spawnflags & 4) != 0) &&
         (this->pev->maxs[2] - 2.0 <= *(float *)(iVar1 + 0xcc))) {
        FUN_1001ece0((int)this);
        *(code **)&this->field_0x10 = Die;
        *(undefined4 *)&this->field_0x14 = 0;
        if (*(float *)&this->field_0x54 == 0.0) {
          *(undefined4 *)&this->field_0x54 = 0x3dcccccd;
        }
        this->pev->nextthink = this->pev->ltime + *(float *)&this->field_0x54;
      }
    }
  }
  return;
}

/* 1001ef90  CBreakable::Use  (835 bytes)
 * undefined Use(int param_1, int param_2)
 * called by: CPushable::Use
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CBreakable::Use(CBreakable *this,int param_1,int param_2)

{
  entvars_t *peVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  float *pfVar5;
  Vector *this_00;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  Vector local_3c;
  Vector local_30;
  Vector local_24;
  Vector local_18;
  Vector local_c;
  
  bVar3 = FUN_1001f850((int)this);
  if ((CONCAT31(extraout_var,bVar3) != 0) && (peVar1 = this->pev, peVar1->deadflag == 0)) {
    local_30.x = peVar1->absmax[0] + peVar1->absmin[0];
    local_30.y = peVar1->absmax[1] + peVar1->absmin[1];
    local_30.z = peVar1->absmax[2] + peVar1->absmin[2];
    Vector::Vector(&local_3c,&local_30.x);
    local_24.x = local_3c.x * 0.5;
    local_24.y = local_3c.y * 0.5;
    local_24.z = local_3c.z * 0.5;
    Vector::Vector(&local_18,&local_24.x);
    local_44 = local_18.y;
    local_48 = local_18.x;
    local_40 = local_18.z;
    if (param_1 == 0) {
      if (param_2 == 0) {
        local_54 = local_18.x;
        local_50 = local_18.y;
        local_4c = local_18.z;
      }
      else {
        iVar2 = *(int *)(param_2 + 4);
        local_18.x = *(float *)(iVar2 + 0xc4) + *(float *)(iVar2 + 0xd0);
        local_18.y = *(float *)(iVar2 + 0xd4) + *(float *)(iVar2 + 200);
        local_18.z = *(float *)(iVar2 + 0xd8) + *(float *)(iVar2 + 0xcc);
        Vector::Vector(&local_24,&local_18.x);
        local_30.x = local_24.x * 0.5;
        local_30.y = local_24.y * 0.5;
        local_30.z = local_24.z * 0.5;
        Vector::Vector(&local_3c,&local_30.x);
        local_54 = local_3c.x;
        local_50 = local_3c.y;
        local_4c = local_3c.z;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
      local_18.x = *(float *)(iVar2 + 0xd0) + *(float *)(iVar2 + 0xc4);
      local_18.y = *(float *)(iVar2 + 200) + *(float *)(iVar2 + 0xd4);
      local_18.z = *(float *)(iVar2 + 0xcc) + *(float *)(iVar2 + 0xd8);
      Vector::Vector(&local_24,&local_18.x);
      local_30.x = local_24.x * 0.5;
      local_30.y = local_24.y * 0.5;
      local_30.z = local_24.z * 0.5;
      Vector::Vector(&local_3c,&local_30.x);
      local_54 = local_3c.x;
      local_50 = local_3c.y;
      local_4c = local_3c.z;
    }
    *(float *)&this->field_0xe8 = local_48;
    *(float *)&this->field_0xec = local_44;
    *(float *)&this->field_0xf0 = local_40;
    puVar4 = (undefined4 *)
             Vector::Vector(&local_18,local_48 - local_54,local_44 - local_50,local_40 - local_4c);
    Vector::Vector(&local_3c,puVar4);
    fVar6 = Vector::Length(&local_3c.x);
    if (fVar6 == (float10)0.0) {
      fVar9 = 1.0;
      fVar8 = 0.0;
      fVar7 = 0.0;
      this_00 = &local_24;
    }
    else {
      fVar6 = (float10)1.0 / fVar6;
      fVar9 = (float)((float10)local_3c.z * fVar6);
      fVar8 = (float)((float10)local_3c.y * fVar6);
      this_00 = &local_c;
      fVar7 = (float)((float10)local_3c.x * fVar6);
    }
    puVar4 = (undefined4 *)Vector::Vector(this_00,fVar7,fVar8,fVar9);
    Vector::Vector(&local_30,puVar4);
    *(undefined4 *)&this->field_0x104 = 0;
    *(float *)&this->field_0xf4 = local_30.x;
    *(float *)&this->field_0xf8 = local_30.y;
    *(float *)&this->field_0xfc = local_30.z;
    pfVar5 = (float *)FUN_100148b0(&local_48,&local_c.x,&local_54);
    fVar6 = Vector::Length(pfVar5);
    *(float *)&this->field_0x100 = (float)fVar6;
    this->pev->angles[1] = *(vec_t *)&this->field_0x74;
    UTIL_MakeVectors(this->pev->angles);
    _DAT_100ae4b8 = gpGlobals->v_forward[0];
    _DAT_100ae4bc = gpGlobals->v_forward[1];
    _DAT_100ae4c0 = gpGlobals->v_forward[2];
    Die(this);
  }
  return;
}

/* 1001f2e0  CBreakable::TraceAttack  (764 bytes)
 * undefined TraceAttack()
 */
void __thiscall
CBreakable::TraceAttack
          (CBaseEntity *param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
          int param_7,undefined4 *param_8,float param_9)

{
  Vector *pVVar1;
  undefined4 *puVar2;
  int iVar3;
  float unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 *unaff_ESI;
  float10 extraout_ST0;
  int in_stack_00000030;
  float fVar4;
  char *pcVar5;
  undefined4 *puVar6;
  float in_stack_ffffffdc;
  float fStack_20;
  float fStack_1c;
  Vector VStack_18;
  Vector VStack_c;
  
  puVar6 = (undefined4 *)(param_7 + 0x14);
  *(undefined4 *)(param_1 + 0xe8) = *puVar6;
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_7 + 0x18);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_7 + 0x1c);
  if (SQRT(param_5 * param_5 + param_6 * param_6 + param_4 * param_4) == 0.0) {
    if (SQRT(*(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x28) +
             *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x24) +
             *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20)) == 0.0) {
      *(undefined4 *)(param_1 + 0xf4) = DAT_100ae498;
      *(undefined4 *)(param_1 + 0xf8) = DAT_100ae49c;
      *(undefined4 *)(param_1 + 0xfc) = DAT_100ae4a0;
    }
    else {
      fVar4 = SQRT(*(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x28) +
                   *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x24) +
                   *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20));
      if (fVar4 == 0.0) {
        pVVar1 = &VStack_18;
        VStack_18.x = 0.0;
        VStack_18.y = 0.0;
        VStack_18.z = 1.0;
      }
      else {
        fVar4 = 1.0 / fVar4;
        pVVar1 = (Vector *)
                 Vector::Vector(&VStack_c,fVar4 * *(float *)(param_2 + 0x20),
                                fVar4 * *(float *)(param_2 + 0x24),
                                fVar4 * *(float *)(param_2 + 0x28));
      }
      Vector::Vector((Vector *)&stack0xffffffdc,&pVVar1->x);
      *(float *)(param_1 + 0xf4) = in_stack_ffffffdc;
      *(float *)(param_1 + 0xf8) = fStack_20;
      *(float *)(param_1 + 0xfc) = fStack_1c;
    }
  }
  else {
    fVar4 = SQRT(param_6 * param_6 + param_5 * param_5 + param_4 * param_4);
    if (fVar4 == 0.0) {
      param_6 = 1.0;
      param_5 = 0.0;
      fVar4 = 0.0;
      pVVar1 = &VStack_c;
    }
    else {
      fVar4 = 1.0 / fVar4;
      param_6 = param_6 * fVar4;
      param_5 = param_5 * fVar4;
      pVVar1 = &VStack_18;
      fVar4 = fVar4 * param_4;
    }
    puVar2 = (undefined4 *)Vector::Vector(pVVar1,fVar4,param_5,param_6);
    Vector::Vector((Vector *)&stack0xffffffdc,puVar2);
    *(float *)(param_1 + 0xf4) = in_stack_ffffffdc;
    *(float *)(param_1 + 0xf8) = fStack_20;
    *(float *)(param_1 + 0xfc) = fStack_1c;
  }
  *(undefined4 **)(param_1 + 0x104) = param_8;
  *(float *)(param_1 + 0x100) =
       (float)(byte)((-(((uint)param_8 & 0x2000000) != 0) & 7U) + 1) * param_3;
  iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x68) == 6) {
      UTIL_Sparks(puVar6);
      (*g_engfuncs.pfnRandomFloat)(0.7,1.0);
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar3 == 0) {
        pcVar5 = s_buttons_spark5_wav_1009c424;
      }
      else {
        unaff_ESI = puVar6;
        if (iVar3 != 1) goto LAB_1001f5b0;
        pcVar5 = s_buttons_spark6_wav_1009c410;
      }
      unaff_EBX = 0.0;
      unaff_EBP = (undefined4 *)0x3f4ccccd;
      unaff_ESI = param_8;
      EMIT_SOUND_DYN(*(void **)(*(int *)(param_1 + 4) + 0x208),
                     *(void **)(*(int *)(param_1 + 4) + 0x208),2,pcVar5,param_8,0x3f4ccccd,0);
    }
    else if (*(int *)(param_1 + 0x68) == 7) {
      (*g_engfuncs.pfnRandomFloat)(0.5,1.5);
      unaff_EBX = (float)extraout_ST0;
      unaff_ESI = (undefined4 *)0x1001f536;
      FUN_10077870(puVar6);
      unaff_EBP = puVar6;
    }
  }
LAB_1001f5b0:
  iVar3 = in_stack_00000030;
  Vector::Vector((Vector *)&stack0xffffffcc,(undefined4 *)&stack0x00000024);
  CBaseEntity::TraceAttack
            (param_1,param_2,param_9,(float)unaff_ESI,(float)unaff_EBP,unaff_EBX,iVar3,(uint)param_8
            );
  return;
}

/* 1001f5e0  CBreakable::TakeDamage  (618 bytes)
 * undefined4 TakeDamage(int param_1, int param_2, float param_3, uint param_4)
 * called by: CPushable::TakeDamage
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
CBreakable::TakeDamage(CBreakable *this,int param_1,int param_2,float param_3,uint param_4)

{
  entvars_t *peVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  float local_54;
  float local_50;
  float local_4c;
  Vector local_48;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  Vector local_24;
  float local_18;
  float local_14;
  float local_10;
  Vector local_c;
  
  peVar1 = this->pev;
  if (param_2 == param_1) {
    local_54 = *(float *)(param_1 + 8) - (peVar1->size[0] * 0.5 + peVar1->absmin[0]);
    local_50 = *(float *)(param_1 + 0xc) - (peVar1->size[1] * 0.5 + peVar1->absmin[1]);
    local_4c = *(float *)(param_1 + 0x10) - (peVar1->size[2] * 0.5 + peVar1->absmin[2]);
    local_48.x = local_54;
    local_48.y = local_50;
    local_48.z = local_4c;
    local_38 = local_50;
    local_34 = local_4c;
    if ((((*(byte *)(param_2 + 0x1a4) & 8) != 0) && ((peVar1->spawnflags & 0x100U) != 0)) &&
       ((param_4 & 0x80) != 0)) {
      param_3 = peVar1->health;
    }
  }
  else {
    local_3c = peVar1->size[0] * 0.5;
    local_38 = peVar1->size[1] * 0.5;
    local_34 = peVar1->size[2] * 0.5;
    Vector::Vector(&local_48,&local_3c);
    peVar1 = this->pev;
    local_30 = local_48.x + peVar1->absmin[0];
    local_2c = local_48.y + peVar1->absmin[1];
    local_28 = local_48.z + peVar1->absmin[2];
    Vector::Vector(&local_24,&local_30);
    local_18 = *(float *)(param_1 + 8) - local_24.x;
    local_14 = *(float *)(param_1 + 0xc) - local_24.y;
    local_10 = *(float *)(param_1 + 0x10) - local_24.z;
    Vector::Vector(&local_c,&local_18);
    local_54 = local_c.x;
    local_50 = local_c.y;
    local_4c = local_c.z;
  }
  bVar2 = FUN_1001f850((int)this);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if ((param_4 & 0x80) != 0) {
    param_3 = param_3 + param_3;
  }
  if ((param_4 & 0x20000) != 0) {
    param_3 = param_3 * 0.1;
  }
  puVar3 = (undefined4 *)FUN_100148f0(&local_54,&local_c.x);
  _DAT_100ae4b8 = *puVar3;
  _DAT_100ae4bc = puVar3[1];
  _DAT_100ae4c0 = puVar3[2];
  this->pev->health = this->pev->health - param_3;
  if (this->pev->health <= 0.0) {
    DAT_100c0a44 = param_2;
    Die(this);
    DAT_100c0a44 = 0;
    return 0;
  }
  FUN_1001ece0((int)this);
  return 1;
}

/* 1001f860  CBreakable::DamageDecal  (51 bytes)
 * undefined DamageDecal()
 */
int __fastcall CBreakable::DamageDecal(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
    return iVar1 + 0x19;
  }
  if (*(int *)(param_1 + 0x68) == 7) {
    return 0x23;
  }
  iVar1 = CBaseEntity::DamageDecal(param_1);
  return iVar1;
}

/* 1004b5f0  CBreakable::BreakableRespawn  (544 bytes)
 * undefined BreakableRespawn()
 */
void __thiscall CBreakable::BreakableRespawn(CBaseDelay *param_1,char param_2)

{
  float fVar1;
  byte bVar2;
  entvars_t *peVar3;
  bool bVar4;
  int iVar5;
  undefined3 extraout_var;
  byte *pbVar6;
  entvars_t **ppeVar7;
  byte *pbVar8;
  int iStack_1c;
  vec_t vStack_18;
  vec_t vStack_14;
  vec_t vStack_10;
  vec_t vStack_c;
  vec_t vStack_8;
  vec_t vStack_4;
  
  peVar3 = param_1->pev;
  if (((peVar3->deadflag == 2) || (peVar3->effects == 0x80)) || (param_2 != '\0')) {
    if (*(float *)&param_1[1].field_0x24 < 0.0) {
      CBaseEntity::SUB_Remove((CBaseEntity *)param_1);
      return;
    }
    vStack_c = peVar3->absmin[0];
    vStack_8 = peVar3->absmin[1];
    vStack_4 = peVar3->absmin[2];
    vStack_18 = peVar3->absmax[0];
    vStack_14 = peVar3->absmax[1];
    vStack_10 = peVar3->absmax[2];
    iVar5 = UTIL_EntitiesInBox(&iStack_1c,1,&vStack_c,&vStack_18,0x2008);
    if (iVar5 == 0) {
      if ((param_1->pev->spawnflags & 8) != 0) {
        pbVar8 = &DAT_100a9398;
        pbVar6 = &param_1[1].field_0x28;
        do {
          bVar2 = *pbVar6;
          bVar4 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) {
LAB_1004b72c:
            iVar5 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
            goto LAB_1004b731;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar4 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_1004b72c;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_1004b731:
        if (iVar5 == 0) {
          CBaseDelay::SUB_UseTargets(param_1,(int *)0x0,3,0);
        }
        else if (*(float *)&param_1->field_0x54 == 0.0) {
          FireTargets((int)&param_1[1].field_0x28,0,param_1,3,0);
        }
        else {
          iVar5 = GetClassPtr<CBaseDelay>(0);
          **(int **)(iVar5 + 4) = (int)s_DelayedUse_100a2730 - (int)gpGlobals->pStringBase;
          *(float *)(*(int *)(iVar5 + 4) + 0x104) = *(float *)&param_1->field_0x54 + gpGlobals->time
          ;
          *(code **)(iVar5 + 0x10) = CBaseDelay::DelayThink;
          *(undefined4 *)(*(int *)(iVar5 + 4) + 0x180) = 3;
          *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)&param_1->field_0x58;
          *(undefined4 *)(iVar5 + 0x54) = 0;
          *(int *)(*(int *)(iVar5 + 4) + 0x1c8) =
               (int)param_1 + (0x84 - (int)gpGlobals->pStringBase);
          *(undefined4 *)(*(int *)(iVar5 + 4) + 0x198) = 0;
        }
      }
      param_1->pev->deadflag = 0;
      param_1->pev->health = (float)param_1[1].vtable;
      param_1->pev->effects = 0;
      *(undefined4 *)&param_1->field_0x10 = 0;
      (*param_1->vtable[7])();
    }
    else {
      ppeVar7 = &param_1[1].pev;
      bVar4 = FUN_1000e440((uint *)ppeVar7);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        fVar1 = gpGlobals->time;
        iVar5 = EHANDLE::operator->((uint *)ppeVar7);
        *(float *)(*(int *)(iVar5 + 4) + 0x104) = fVar1 + 5.0;
        iVar5 = EHANDLE::operator->((uint *)ppeVar7);
        *(code **)(iVar5 + 0x10) = CInfoBreakable::RespawnThink;
        return;
      }
    }
  }
  return;
}

/* 1004b810  CBreakable::Spawn  (367 bytes)
 * undefined Spawn(int * param_1)
 * called by: CPushable::Spawn
 */
void __fastcall CBreakable::Spawn(int *param_1)

{
  EHANDLE *this;
  uint *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar3;
  int iVar4;
  undefined3 extraout_var_01;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float afStack_c [3];
  
  (**(code **)(*param_1 + 0x20))();
  param_1[0x17] = *(int *)(param_1[1] + 0x160);
  *(undefined4 *)(param_1[1] + 0x254) = 0x3f800000;
  iVar4 = param_1[1];
  if ((*(byte *)(iVar4 + 0x1a0) & 1) == 0) {
    *(undefined4 *)(iVar4 + 0x16c) = 0x3f800000;
  }
  else {
    *(undefined4 *)(iVar4 + 0x16c) = 0;
  }
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  param_1[0x1d] = *(int *)(param_1[1] + 0x54);
  *(undefined4 *)(param_1[1] + 0x54) = 0;
  if (param_1[0x1a] == 0) {
    *(undefined4 *)(param_1[1] + 0x20c) = 1;
  }
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  param_1[5] = (int)BreakTouch;
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    param_1[5] = 0;
  }
  bVar2 = FUN_1001f850((int)param_1);
  if ((CONCAT31(extraout_var,bVar2) == 0) && (*(int *)(param_1[1] + 0x148) != 0)) {
    puVar1 = (uint *)(param_1[1] + 0x1a4);
    *puVar1 = *puVar1 | 0x2000000;
  }
  if (0.0 <= (float)param_1[0x20]) {
    this = (EHANDLE *)(param_1 + 0x18);
    bVar2 = FUN_1000e440((uint *)this);
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      iVar4 = param_1[1];
      uVar7 = *(undefined4 *)(iVar4 + 0x208);
      puVar6 = (undefined4 *)(iVar4 + 0x50);
      puVar3 = (undefined4 *)VecBModelOrigin(afStack_c,iVar4);
      iVar4 = CBaseEntity::Create(0x100a36bc,puVar3,puVar6,uVar7);
      EHANDLE::operator=(this,iVar4);
    }
    bVar2 = FUN_1000e440((uint *)this);
    if (CONCAT31(extraout_var_01,bVar2) != 0) {
      uVar5 = EHANDLE::Get((uint *)this);
      if (uVar5 != 0) {
        EHANDLE::operator=((EHANDLE *)(*(int *)(uVar5 + 0x7c) + 0x54),(int)param_1);
        return;
      }
      EHANDLE::operator=((EHANDLE *)0x54,(int)param_1);
    }
  }
  return;
}

/* 1004b980  CBreakable::Killed  (27 bytes)
 * undefined Killed()
 */
void __thiscall CBreakable::Killed(CBreakable *param_1,undefined4 param_2)

{
  DAT_100c0a44 = param_2;
  Die(param_1);
  DAT_100c0a44 = 0;
  return;
}

/* 1004b9a0  CBreakable::Die  (1911 bytes)
 * void Die(void)
 * called by: CBreakable::Killed, CBreakable::TakeDamage, CBreakable::Use
 */
/* public: void __thiscall CBreakable::Die(void) */

void __thiscall CBreakable::Die(CBreakable *this)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  int *piVar5;
  uint uVar6;
  entvars_t *peVar7;
  char cVar8;
  float10 extraout_ST0;
  float10 fVar9;
  longlong lVar10;
  char *pcVar11;
  float fStack_444;
  undefined4 uStack_43c;
  float fStack_430;
  float fStack_42c;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float in_stack_fffffbe8;
  entvars_t *peVar16;
  float in_stack_fffffbec;
  float in_stack_fffffbf0;
  float fVar17;
  float in_stack_fffffbf4;
  undefined4 uVar18;
  float fVar19;
  vec_t *pvVar20;
  edict_t *peVar21;
  vec_t vStack_3cc;
  vec_t vStack_3c8;
  float fStack_3c4;
  float afStack_3c0 [3];
  vec_t vStack_3b4;
  vec_t vStack_3b0;
  vec_t vStack_3ac;
  int aiStack_39c [231];
  
                    /* 0x4b9a0  34  ?Die@CBreakable@@QAEXXZ */
  cVar8 = '\0';
  if (this->pev->deadflag == 2) {
    return;
  }
  (*g_engfuncs.pfnRandomLong)(0,0x1d);
  peVar16 = this->pev;
  (*g_engfuncs.pfnRandomFloat)(0.85,1.0);
  lVar10 = __ftol();
  uVar6 = (int)(uint)lVar10 >> 0x1f;
  fVar9 = (float10)(int)(((uint)lVar10 ^ uVar6) - uVar6) * (float10)0.01 + extraout_ST0;
  fStack_444 = (float)fVar9;
  if ((float10)1.0 < fVar9) {
    fStack_444 = 1.0;
  }
  if (DAT_100c0a44 != (entvars_t *)0x0) {
    peVar16->fuser1 = DAT_100c0a44->fuser1;
  }
  switch(*(undefined4 *)&this->field_0x68) {
  case 0:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      pcVar11 = s_debris_bustglass1_wav_1009d844;
LAB_1004baa3:
      peVar21 = this->pev->pContainingEntity;
      EMIT_SOUND_DYN(peVar21,peVar21,2,pcVar11,uStack_43c,0x3f4ccccd,0);
    }
    else if (iVar3 == 1) {
      pcVar11 = s_debris_bustglass2_wav_1009d85c;
      goto LAB_1004baa3;
    }
    cVar8 = '\x01';
    break;
  case 1:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      pcVar11 = s_debris_bustcrate1_wav_1009d814;
LAB_1004bb03:
      peVar21 = this->pev->pContainingEntity;
      EMIT_SOUND_DYN(peVar21,peVar21,2,pcVar11,uStack_43c,0x3f4ccccd,0);
    }
    else if (iVar3 == 1) {
      pcVar11 = s_debris_bustcrate2_wav_1009d82c;
      goto LAB_1004bb03;
    }
    cVar8 = '\b';
    break;
  case 2:
  case 6:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      pcVar11 = s_debris_bustmetal1_wav_1009d7e4;
LAB_1004bb6b:
      peVar21 = this->pev->pContainingEntity;
      EMIT_SOUND_DYN(peVar21,peVar21,2,pcVar11,uStack_43c,0x3f4ccccd,0);
    }
    else if (iVar3 == 1) {
      pcVar11 = s_debris_bustmetal2_wav_1009d7fc;
      goto LAB_1004bb6b;
    }
    cVar8 = '\x02';
    break;
  case 3:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      pcVar11 = s_debris_bustflesh1_wav_1009d7b4;
LAB_1004bbd3:
      peVar21 = this->pev->pContainingEntity;
      EMIT_SOUND_DYN(peVar21,peVar21,2,pcVar11,uStack_43c,0x3f4ccccd,0);
    }
    else if (iVar3 == 1) {
      pcVar11 = s_debris_bustflesh2_wav_1009d7cc;
      goto LAB_1004bbd3;
    }
    cVar8 = '\x04';
    break;
  case 4:
  case 8:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      pcVar11 = s_debris_bustconcrete1_wav_1009d77c;
LAB_1004bc3b:
      peVar21 = this->pev->pContainingEntity;
      EMIT_SOUND_DYN(peVar21,peVar21,2,pcVar11,uStack_43c,0x3f4ccccd,0);
    }
    else if (iVar3 == 1) {
      pcVar11 = s_debris_bustconcrete2_wav_1009d798;
      goto LAB_1004bc3b;
    }
    cVar8 = '@';
    break;
  case 5:
    peVar21 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(peVar21,peVar21,2,s_debris_bustceiling_wav_1009d764,fStack_444,0x3f4ccccd,0);
  }
  peVar16 = this->pev;
  fVar19 = (peVar16->maxs[1] + peVar16->mins[1]) * 0.5;
  fStack_430 = (peVar16->maxs[0] + peVar16->mins[0]) * 0.5 + peVar16->origin[0];
  fStack_42c = fVar19 + peVar16->origin[1];
  fVar12 = (peVar16->maxs[2] + peVar16->mins[2]) * 0.5 + peVar16->origin[2];
  if (*(int *)&this->field_0x68 == 0) {
    fVar12 = fStack_430;
    fVar13 = fStack_42c;
    (*g_engfuncs.pfnMessageBegin)(4,DAT_100d97a8,&fStack_430,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteCoord)(fVar13);
    (*g_engfuncs.pfnWriteCoord)(in_stack_fffffbe8);
    (*g_engfuncs.pfnWriteCoord)(in_stack_fffffbf0);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[2]);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0xe8);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0xec);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0xf0);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0xf4);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0xf8);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0xfc);
    (*g_engfuncs.pfnWriteLong)(*(int *)&this->field_0x104);
    (*g_engfuncs.pfnWriteCoord)(fVar19 * *(float *)&this->field_0x100);
    (*g_engfuncs.pfnMessageEnd)();
  }
  else {
    fVar19 = fStack_42c;
    fVar13 = fVar12;
    (*g_engfuncs.pfnMessageBegin)(4,0x17,&fStack_430,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x6c);
    (*g_engfuncs.pfnWriteCoord)(fVar12);
    (*g_engfuncs.pfnWriteCoord)(in_stack_fffffbec);
    (*g_engfuncs.pfnWriteCoord)(in_stack_fffffbf4);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[2]);
    (*g_engfuncs.pfnWriteCoord)
              (in_stack_fffffbf4 * *(float *)&this->field_0xf4 * *(float *)&this->field_0x100);
    fVar12 = 2.617929e-29;
    (*g_engfuncs.pfnWriteCoord)(fVar19 * *(float *)&this->field_0xf8 * *(float *)&this->field_0x100)
    ;
    (*g_engfuncs.pfnWriteCoord)(fVar13 * *(float *)&this->field_0xfc * *(float *)&this->field_0x100)
    ;
    (*g_engfuncs.pfnWriteByte)(10);
    (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x70);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteByte)(0x19);
    (*g_engfuncs.pfnWriteByte)((int)cVar8);
    (*g_engfuncs.pfnMessageEnd)();
  }
  peVar16 = this->pev;
  vStack_3b4 = peVar16->absmin[0];
  vStack_3b0 = peVar16->absmin[1];
  vStack_3cc = peVar16->absmax[0];
  vStack_3c8 = peVar16->absmax[1];
  vStack_3ac = peVar16->absmax[2];
  fStack_3c4 = peVar16->absmax[2] + 8.0;
  iVar3 = UTIL_EntitiesInBox(aiStack_39c,0x100,&vStack_3b4,&vStack_3cc,0x200);
  if ((iVar3 != 0) && (0 < iVar3)) {
    piVar5 = aiStack_39c;
    do {
      iVar3 = iVar3 + -1;
      *(uint *)(*(int *)(*piVar5 + 4) + 0x1a4) =
           *(uint *)(*(int *)(*piVar5 + 4) + 0x1a4) & 0xfffffdff;
      *(undefined4 *)(*(int *)(*piVar5 + 4) + 0x19c) = 0;
      piVar5 = piVar5 + 1;
    } while (iVar3 != 0);
  }
  this->pev->solid = 0;
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)0x0,3,0);
  if (*(int *)&this->field_0x7c != 0) {
    peVar16 = this->pev;
    peVar21 = peVar16->pContainingEntity;
    pvVar20 = peVar16->angles;
    puVar4 = (undefined4 *)VecBModelOrigin(afStack_3c0,(int)peVar16);
    CBaseEntity::Create((int)(gpGlobals->pStringBase + *(int *)&this->field_0x7c),puVar4,pvVar20,
                        peVar21);
  }
  peVar16 = this->pev;
  if (0 < peVar16->impulse) {
    peVar7 = DAT_100c0a44;
    if (DAT_100c0a44 == (entvars_t *)0x0) {
      peVar7 = peVar16;
    }
    iVar3 = peVar16->impulse;
    fVar19 = (float)iVar3 * 2.5;
    fVar13 = (float)iVar3;
    fVar17 = (float)iVar3;
    uVar18 = 0x1040;
    pfVar15 = afStack_3c0;
    fVar14 = 2.6180574e-29;
    puVar4 = (undefined4 *)(*this->vtable[0x3c])();
    fStack_42c = 2.6180607e-29;
    Vector::Vector((Vector *)&stack0xfffffbdc,puVar4);
    TSExplosion(fVar12,fVar14,(float)pfVar15,(int)peVar16,(int)peVar7,fVar17,uVar18,fVar13,fVar19);
  }
  this->pev->deadflag = 2;
  this->pev->effects = 0x80;
  this->pev->takedamage = 0.0;
  if (0.0 <= *(float *)&this->field_0x80) {
    puVar1 = &this->field_0x60;
    bVar2 = FUN_1000e440((uint *)puVar1);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      if (*(float *)&this->field_0x80 == 0.0) {
        fVar19 = 30.0;
      }
      else {
        fVar19 = *(float *)&this->field_0x80;
      }
      fVar12 = gpGlobals->time;
      iVar3 = EHANDLE::operator->((uint *)puVar1);
      *(float *)(*(int *)(iVar3 + 4) + 0x104) = fVar19 + fVar12;
      iVar3 = EHANDLE::operator->((uint *)puVar1);
      *(code **)(iVar3 + 0x10) = CInfoBreakable::RespawnThink;
      return;
    }
  }
  CBaseEntity::SUB_Remove((CBaseEntity *)this);
  return;
}

