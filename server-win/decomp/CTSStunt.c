/* mp.dll - CTSStunt (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10068440  CTSStunt::Play  (1196 bytes)
 * undefined Play(float * param_1)
 * called by: CBasePlayer::PreThink
 */
/* .so 0x9a014; arg pl+0x4dc */

void __fastcall CTSStunt::Play(float *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  void *this;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)(**(code **)(*(int *)param_1[0x10] + 8))();
  fVar5 = fVar5 * (float10)gpGlobals->frametime;
  if (param_1[1] != 0.0) {
    fVar6 = (float10)param_1[1] - fVar5;
    if (fVar6 <= (float10)0.001) {
      fVar6 = (float10)0.001;
    }
    param_1[1] = (float)fVar6;
  }
  fVar6 = (float10)*param_1 - fVar5;
  if (fVar6 <= (float10)0.0) {
    fVar6 = (float10)0.0;
  }
  *param_1 = (float)fVar6;
  fVar6 = (float10)param_1[2] - fVar5;
  if (fVar6 <= (float10)0.0) {
    fVar6 = (float10)0.0;
  }
  param_1[2] = (float)fVar6;
  fVar5 = (float10)param_1[0xc] - fVar5;
  if (fVar5 <= (float10)0.0) {
    fVar5 = (float10)0.0;
  }
  param_1[0xc] = (float)fVar5;
  iVar4 = (**(code **)(*(int *)param_1[0x10] + 0xac))();
  if ((iVar4 != 0) && (iVar4 = *(int *)((int)param_1[0x10] + 4), *(int *)(iVar4 + 0x244) == 0)) {
    if ((*(uint *)(iVar4 + 0x250) & 0x200000) != 0) {
      *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) | 0x100000;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xffdfffff;
      CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9e),(int *)param_1[0x10],0x39)
      ;
      uVar1 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
      (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(this,uVar1,4,s_player_airwheel_wav_100a5948,0x3f800000,0x3f4ccccd,0);
    }
    if ((*(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x1a4) & 0x200) != 0) {
      param_1[0xe] = 0.0;
      param_1[5] = 0.0;
      param_1[0xf] = 0.0;
    }
    bVar3 = CBasePlayer::IsOnLadder((int)param_1[0x10]);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      iVar4 = *(int *)((int)param_1[0x10] + 4);
      if (*(int *)(iVar4 + 0x1c0) != 3) {
        if ((param_1[1] != 0.0) &&
           ((param_1[1] < 0.01 || (*(int *)((int)param_1[0x10] + 0x68) != 0)))) {
          *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) & 0xfffbffff;
          *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
               *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfff7ffff;
          *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
               *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffffb;
          *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
               *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffffe;
          *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
               *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffffd;
          param_1[1] = 0.0;
          *(undefined4 *)((int)param_1[0x10] + 0x4c8) = 0;
          *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3f800000;
          iVar4 = *(int *)((int)param_1[0x10] + 4);
          if ((*(uint *)(iVar4 + 0x1a4) & 0x4000) == 0) {
            *(undefined4 *)(iVar4 + 0x174) = 0;
            *(undefined4 *)(iVar4 + 0x178) = 0;
            *(undefined4 *)(iVar4 + 0x17c) = 0x41e00000;
          }
          else {
            *(undefined4 *)(iVar4 + 0x174) = 0;
            *(undefined4 *)(iVar4 + 0x178) = 0;
            *(undefined4 *)(iVar4 + 0x17c) = 0x41800000;
          }
        }
        if ((*(byte *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0x10) != 0) {
          FUN_10069a70((int)param_1);
        }
        if ((*(byte *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0x20) != 0) {
          FUN_10069c50((int)param_1);
        }
        if ((*(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xc00) != 0) {
          FUN_10069a90((int)param_1);
        }
        if ((*(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0x10000) != 0) {
          FUN_10069800(param_1);
        }
        if ((*(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0x20000) != 0) {
          FUN_10069910(param_1);
        }
        uVar2 = *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x180);
        if (((uVar2 & 0x4000) == 0) && ((uVar2 & 2) == 0)) {
          return;
        }
        FUN_10069310(param_1);
        return;
      }
    }
    *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
         *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xffefffff;
    uVar2 = *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250);
    if ((uVar2 & 0x70c31) != 0) {
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) = uVar2 & 0xfffbffff;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffffb;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffffe;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xffffffef;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xffffffdf;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffbff;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffff7ff;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffeffff;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffdffff;
      iVar4 = *(int *)((int)param_1[0x10] + 4);
      *(undefined4 *)(iVar4 + 0x174) = 0;
      *(undefined4 *)(iVar4 + 0x178) = 0;
      *(undefined4 *)(iVar4 + 0x17c) = 0x41e00000;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3f800000;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f800000;
      param_1[1] = 0.0;
      *(undefined4 *)((int)param_1[0x10] + 0x4c8) = 0;
      *(undefined4 *)((int)param_1[0x10] + 0x278) = 0xffffffff;
      CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9e),(int *)param_1[0x10],1);
    }
  }
  return;
}

/* 10069f90  CTSStunt::CheckForBreakables  (1966 bytes)
 * undefined CheckForBreakables(int param_1)
 * called by: CBasePlayer::PreThink
 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* .so 0x9bd9c; arg pl+0x4dc */

void __fastcall CTSStunt::CheckForBreakables(int param_1)

{
  int iVar1;
  CBasePlayer *this;
  entvars_t *peVar2;
  int *piVar3;
  void **ppvVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this_00;
  float fVar13;
  edict_t *peVar14;
  Vector *pVVar15;
  char *pcVar16;
  Vector local_88;
  float local_7c;
  float local_78;
  Vector local_74;
  undefined4 uStack_68;
  float local_64;
  float local_60;
  Vector local_5c;
  undefined4 uStack_50;
  float local_4c;
  float local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [16];
  float local_28;
  edict_t *local_8;
  
  if (*(int *)(param_1 + 0x18) == -0x40800000) {
    return;
  }
  if (gpGlobals->time < *(float *)(param_1 + 0x18)) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x40);
  *(float *)(param_1 + 0x18) = gpGlobals->time;
  iVar1 = *(int *)(iVar9 + 4);
  if (((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) && (*(float *)(iVar9 + 0x788) == 0.0)) {
    *(undefined4 *)(iVar9 + 0x784) = 0;
    return;
  }
  if ((SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
            *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
            *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) < 64.0) &&
     (*(float *)(iVar9 + 0x788) == 0.0)) {
    return;
  }
  if (*(float *)(iVar9 + 0x788) == 0.0) {
    iVar9 = *(int *)(iVar9 + 4);
    fVar13 = *(float *)(iVar9 + 0x208);
    fVar5 = SQRT(*(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) +
                 *(float *)(iVar9 + 0x20) * *(float *)(iVar9 + 0x20) +
                 *(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28));
    if (fVar5 == 0.0) {
      pfVar12 = &local_78;
      local_78 = 0.0;
      local_74.x = 0.0;
      local_74.y = 1.0;
    }
    else {
      fVar5 = 1.0 / fVar5;
      pfVar12 = (float *)Vector::Vector((Vector *)local_44,fVar5 * *(float *)(iVar9 + 0x20),
                                        fVar5 * *(float *)(iVar9 + 0x24),
                                        fVar5 * *(float *)(iVar9 + 0x28));
    }
    Vector::Vector(&local_88,pfVar12);
    local_4c = local_88.y * 64.0;
    local_48 = local_88.z * 64.0;
    iVar9 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    local_5c.x = local_88.x * 64.0 + *(float *)(iVar9 + 8);
    local_64 = local_4c + *(float *)(iVar9 + 0xc);
    local_60 = local_48 + *(float *)(iVar9 + 0x10);
    iVar9 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    pVVar15 = &local_5c;
    local_5c.y = local_64;
    local_5c.z = local_60;
  }
  else {
    UTIL_MakeVectors(iVar1 + 0x74);
    iVar9 = *(int *)(param_1 + 0x40);
    local_7c = -NAN;
    if (0.0 <= *(float *)(iVar9 + 0x78c)) {
      local_7c = 4.48416e-44;
    }
    fVar5 = (float)(int)local_7c;
    iVar1 = *(int *)(iVar9 + 4);
    local_78 = fVar5 * gpGlobals->v_forward[0];
    fVar13 = *(float *)(iVar1 + 0x208);
    local_88.x = local_78 + *(float *)(iVar1 + 8);
    local_88.y = fVar5 * gpGlobals->v_forward[1] + *(float *)(iVar1 + 0xc);
    local_88.z = fVar5 * gpGlobals->v_forward[2] + *(float *)(iVar1 + 0x10);
    iVar9 = *(int *)(iVar9 + 4);
    pVVar15 = &local_88;
    local_74.x = local_88.y;
    local_74.y = local_88.z;
  }
  FUN_10076fe0(iVar9 + 8,pVVar15,0,3,fVar13,local_38);
  if (1.0 <= local_28) {
    return;
  }
  if ((local_8 == (edict_t *)0x0) &&
     (local_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), local_8 == (edict_t *)0x0)) {
    return;
  }
  this = local_8->pvPrivateData;
  if (this == (CBasePlayer *)0x0) {
    return;
  }
  iVar9 = (*this->vtable[0x30])();
  if ((iVar9 != 0) && (*(float *)(*(int *)(param_1 + 0x40) + 0x788) == 0.0)) {
    return;
  }
  peVar2 = this->pev;
  if (peVar2->takedamage == 0.0) {
    return;
  }
  if ((peVar2->flags & 0x2000000U) != 0) {
    return;
  }
  if ((peVar2->effects & 0x80) != 0) {
    return;
  }
  iVar10 = (**(code **)(**(int **)(param_1 + 0x40) + 0xac))();
  iVar9 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(iVar9 + 4);
  if (iVar10 == 0) {
    local_88.x = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                      *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                      *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20));
  }
  else {
    local_88.x = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                      *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                      *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) * 0.1;
  }
  if (*(CBasePlayer **)(iVar9 + 0x784) == this) {
    return;
  }
  uStack_68 = 0x1080;
  bVar7 = true;
  fVar13 = local_88.x;
  if (*(float *)(iVar9 + 0x788) != 0.0) {
    if (*(char *)(iVar9 + 0x790) == '\0') {
      DAT_100da9d8 = 1;
      uStack_68 = 0x4001080;
    }
    iVar9 = *(int *)(param_1 + 0x40);
    local_88.x = ABS(*(float *)(iVar9 + 0x78c));
    *(float *)(iVar9 + 0x78c) = *(float *)(iVar9 + 0x78c) * 0.5;
    if (*(float *)(*(int *)(param_1 + 0x40) + 0x78c) < 5.0) {
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x78c) = 0;
    }
    iVar9 = (*this->vtable[0x30])();
    fVar13 = local_88.x;
    if ((iVar9 != 0) && (0.0 < local_88.x)) {
      if ((_DAT_1009ebc4 == 0.0) && (iVar9 = (**(code **)(*g_pGameRules + 0xc4))(), iVar9 == 1)) {
        bVar7 = false;
      }
      else {
        piVar3 = *(int **)(param_1 + 0x40);
        if ((char)piVar3[0x1e4] == '\0') {
          uVar11 = FUN_1004cec0(piVar3,(int *)this);
          if ((char)uVar11 == '\0') {
            if (*(float *)&this->field_0x708 < gpGlobals->time) {
              CBasePlayer::DropWeapon(this,0xfffffffe,fVar13);
            }
            if (30.0 < local_88.x) {
              iVar9 = *(int *)(*(int *)(param_1 + 0x40) + 4);
              iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 4);
              peVar2 = this->pev;
              local_78 = SQRT(*(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28) +
                              *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) +
                              *(float *)(iVar9 + 0x20) * *(float *)(iVar9 + 0x20));
              fVar5 = peVar2->origin[0] - *(float *)(iVar1 + 8);
              local_88.z = peVar2->origin[1] - *(float *)(iVar1 + 0xc);
              local_7c = peVar2->origin[2] - *(float *)(iVar1 + 0x10);
              fVar6 = SQRT(local_88.z * local_88.z + local_7c * local_7c + fVar5 * fVar5);
              if (fVar6 == 0.0) {
                local_5c.y = 0.0;
                local_5c.z = 0.0;
                uStack_50 = 0x3f800000;
                pfVar12 = &local_5c.y;
              }
              else {
                fVar6 = 1.0 / fVar6;
                pfVar12 = (float *)Vector::Vector((Vector *)(local_44 + 4),fVar5 * fVar6,
                                                  local_88.z * fVar6,local_7c * fVar6);
              }
              Vector::Vector(&local_74,pfVar12);
              local_60 = local_74.y * local_78;
              peVar2 = this->pev;
              local_5c.x = local_74.z * local_78;
              local_88.y = local_74.x * local_78 + peVar2->velocity[0];
              local_88.z = local_60 + peVar2->velocity[1];
              local_7c = local_5c.x + peVar2->velocity[2];
              peVar2->velocity[0] = local_88.y;
              peVar2->velocity[1] = local_88.z;
              peVar2->velocity[2] = local_7c;
              this->pev->velocity[2] = 235.0;
              local_48 = local_88.z;
              local_44._0_4_ = local_7c;
            }
            peVar14 = this->pev->pContainingEntity;
            (*g_engfuncs.pfnRandomLong)(0,0x1f);
            pcVar16 = s_player_kungfuhit_wav_100a3700;
            this_00 = extraout_ECX;
            goto LAB_1006a664;
          }
          bVar7 = false;
        }
        else if ((char)piVar3[0x1e4] == '\x02') {
          uVar8 = FUN_1004cc30(piVar3,(int *)this);
          if ((char)uVar8 == '\0') {
            peVar14 = this->pev->pContainingEntity;
            (*g_engfuncs.pfnRandomLong)(0,0x1f);
            pcVar16 = s_weapons_katana_hit_body_wav_100a45a0;
            this_00 = extraout_ECX_00;
LAB_1006a664:
            EMIT_SOUND_DYN(this_00,peVar14,4,pcVar16,0x3f800000,0x3f4ccccd,0);
          }
          else {
            bVar7 = false;
          }
        }
        else {
          uVar8 = FUN_1004cd70(piVar3,(int *)this);
          if ((char)uVar8 == '\0') {
            peVar14 = this->pev->pContainingEntity;
            (*g_engfuncs.pfnRandomLong)(0,0x1f);
            pcVar16 = s_weapons_knife_knife_hitbody_wav_100a43e4;
            this_00 = extraout_ECX_01;
            goto LAB_1006a664;
          }
          bVar7 = false;
        }
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x40) + 0x9fc);
      if (((iVar9 != 0) && (20.0 < local_88.x)) && (*(int *)(iVar9 + 0xb8) == 0)) {
        FUN_100148b0((void *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 8),(float *)(local_44 + 4),
                     this->pev->origin);
        CTSGroundAmmo::Use();
      }
      if (!bVar7) goto LAB_1006a723;
    }
  }
  FUN_100796a0();
  ppvVar4 = this->vtable;
  Vector::Vector((Vector *)&stack0xffffff50,&DAT_100ae498);
  (*ppvVar4[0x13])(*(undefined4 *)(*(int *)(param_1 + 0x40) + 4),fVar13);
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 4);
  FUN_100796c0(uVar11,uVar11);
LAB_1006a723:
  DAT_100da9d8 = 0;
  *(CBasePlayer **)(*(int *)(param_1 + 0x40) + 0x784) = this;
  return;
}

/* 1006afd0  CTSStunt::GoRoll  (910 bytes)
 * undefined4 GoRoll(int param_1)
 * called by: CBasePlayer::Duck, CBasePlayer::PostThink
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall CTSStunt::GoRoll(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  int iVar4;
  Vector *pVVar5;
  void *this;
  float10 fVar6;
  float in_stack_ffffff70;
  float in_stack_ffffff7c;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Vector local_5c;
  Vector local_50;
  Vector local_44;
  undefined1 local_38 [56];
  
  if (((*(uint *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1a4) & 0x200) == 0) &&
     (*(float *)(param_1 + 0xc) < gpGlobals->time)) {
    DAT_100da9d0 = '\0';
    return 0;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  fVar8 = *(float *)(iVar4 + 0x24);
  fVar9 = *(float *)(iVar4 + 0x20);
  DAT_100da9d0 = 80.0 <= SQRT(fVar8 * fVar8 + fVar9 * fVar9) &&
                 gpGlobals->time <= *(float *)(param_1 + 0xc);
  if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x250) & 0x130c30) != 0) {
    DAT_100da9d0 = '\0';
  }
  if (0.0 < *(float *)(param_1 + 4)) {
    DAT_100da9d0 = '\0';
  }
  bVar2 = CBasePlayer::IsOnLadder(*(int *)(param_1 + 0x40));
  if (CONCAT31(extraout_var,bVar2) != 0) {
    DAT_100da9d0 = '\0';
  }
  if (*(float *)(param_1 + 8) <= 0.0) {
    if (DAT_100da9d0 != '\0') {
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      fVar8 = *(float *)(iVar4 + 0x20);
      fVar8 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                   *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) + fVar8 * fVar8);
      if (fVar8 == 0.0) {
        fVar10 = 1.0;
        fVar9 = 0.0;
        fVar8 = 0.0;
        pVVar5 = &local_50;
      }
      else {
        fVar8 = 1.0 / fVar8;
        fVar10 = fVar8 * *(float *)(iVar4 + 0x28);
        fVar9 = fVar8 * *(float *)(iVar4 + 0x24);
        fVar8 = fVar8 * *(float *)(iVar4 + 0x20);
        pVVar5 = &local_44;
      }
      fVar7 = 2.6563386e-29;
      puVar3 = (undefined4 *)Vector::Vector(pVVar5,fVar8,fVar9,fVar10);
      Vector::Vector(&local_5c,puVar3);
      fVar11 = 0.3;
      fVar10 = 0.6;
      *(float *)(param_1 + 0x20) = local_5c.x;
      *(float *)(param_1 + 0x24) = local_5c.y;
      *(float *)(param_1 + 0x28) = local_5c.z;
      puVar3 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x74);
      fVar9 = 2.656358e-29;
      Vector::Vector((Vector *)&stack0xffffff7c,puVar3);
      Vector::Vector((Vector *)&stack0xffffff70,(float *)(param_1 + 0x20));
      _DAT_100da9d4 =
           FUN_10044510(in_stack_ffffff70,fVar9,(float)puVar3,in_stack_ffffff7c,fVar7,fVar8,fVar10,
                        fVar11);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3e99999a;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) & 0xffefffff;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) | 0x40005;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar4 + 0x174) = DAT_100ae498;
      *(undefined4 *)(iVar4 + 0x178) = DAT_100ae49c;
      *(undefined4 *)(iVar4 + 0x17c) = DAT_100ae4a0;
      *(undefined4 *)(param_1 + 4) = 0x3f400000;
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int **)(param_1 + 0x40) + 0x9e),*(int **)(param_1 + 0x40),0x2f);
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      if ((*(uint *)(iVar4 + 0x250) & 0x80000) == 0) {
        uVar1 = *(undefined4 *)(iVar4 + 0x208);
        (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN(this,uVar1,4,s_player_land_wav_100a595c,0x3f800000,0x3f4ccccd,0);
      }
      else {
        local_5c.x = *(float *)(iVar4 + 8);
        local_5c.y = *(float *)(iVar4 + 0xc);
        local_5c.z = *(float *)(iVar4 + 0x10) - 4000.0;
        iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
        fVar8 = *(float *)(iVar4 + 0x208);
        fVar11 = 1.4013e-45;
        fVar7 = 1.4013e-45;
        fVar9 = 2.6564273e-29;
        FUN_10076f70(iVar4 + 8,&local_5c,1,1,fVar8,local_38);
        pVVar5 = &local_5c;
        fVar12 = 0.0;
        fVar10 = 2.656433e-29;
        Vector::Vector((Vector *)&stack0xffffff80,&pVVar5->x);
        Vector::Vector((Vector *)&stack0xffffff74,
                       (undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 8));
        TEXTURETYPE_PlaySound((int)local_38,fVar9,fVar10,pVVar5,fVar7,fVar11,fVar8,fVar12);
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x40) + 8))();
      local_5c.y = (float)(fVar6 * (float10)10.0);
      local_5c.z = (float)(*g_engfuncs.pfnRandomLong)(0,10);
      if (9.0 < (float)(int)local_5c.z + local_50.x) {
        (*g_engfuncs.pfnMessageBegin)
                  (4,DAT_100d97d8,(float *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 8),
                   (edict_t *)0x0);
        iVar4 = (*g_engfuncs.pfnIndexOfEdict)
                          (*(edict_t **)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x208));
        (*g_engfuncs.pfnWriteByte)(iVar4);
        (*g_engfuncs.pfnWriteByte)(2);
        local_50.z = 2.6564978e-29;
        (*g_engfuncs.pfnMessageEnd)();
      }
      return 1;
    }
  }
  else {
    DAT_100da9d0 = '\0';
  }
  *(float *)(param_1 + 0xc) = gpGlobals->time + 0.3;
  return 0;
}

