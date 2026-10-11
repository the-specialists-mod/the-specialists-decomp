/* mp.dll - CSave (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10078370  CSave::WriteFunction  (74 bytes)
 * undefined WriteFunction(byte.conflict * param_1, undefined4 * param_2)
 * called by: CSave::WriteFields
 */
void __thiscall CSave::WriteFunction(CSave *this,byte_conflict *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar2 = (*g_engfuncs.pfnNameForFunction)(*param_2);
  if (pcVar2 == (char *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Invalid_function_pointer_in_enti_100a7188);
    return;
  }
  uVar3 = 0xffffffff;
  pcVar4 = pcVar2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  BufferField(this,(byte_conflict *)param_2,~uVar3,(undefined4 *)pcVar2);
  return;
}

/* 100784d0  CSave::WriteEntVars  (25 bytes)
 * undefined WriteEntVars(byte.conflict * param_1, int param_2)
 * called by: CBaseEntity::Save
 */
void __thiscall CSave::WriteEntVars(CSave *this,byte_conflict *param_1,int param_2)

{
  WriteFields(this,param_1,param_2,0x100a6810,0x56);
  return;
}

/* 100784f0  CSave::WriteFields  (623 bytes)
 * undefined4 WriteFields(byte.conflict * param_1, int param_2, int param_3, int param_4)
 * called by: CActAnimating::Save, CAmbientGeneric::Save, CAutoTrigger::Save, CBaseAnimating::Save, CBaseButton::Save, CBaseDelay::Save, CBaseDoor::Save, CBaseEntity::Save, CBasePlatTrain::Save, CBasePlayer::Save, CBasePlayerItem::Save, CBasePlayerWeapon::Save, ... (75 total)
 */
undefined4 __thiscall
CSave::WriteFields(CSave *this,byte_conflict *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int local_110;
  int local_10c;
  int local_104;
  int local_100 [64];
  
  local_110 = 0;
  if (0 < param_4) {
    psVar4 = (short *)(param_3 + 0xc);
    iVar3 = param_4;
    do {
      iVar1 = FUN_100787c0(*(int *)(psVar4 + -2) + param_2,
                           *(int *)(&DAT_100a6d70 + *(int *)(psVar4 + -6) * 4) * (int)*psVar4);
      if (iVar1 != 0) {
        local_110 = local_110 + 1;
      }
      psVar4 = psVar4 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_104 = param_4 - local_110;
  FUN_10078170(this,param_1,&local_104,1);
  if (0 < param_4) {
    local_10c = param_4;
    psVar4 = (short *)(param_3 + 0xc);
    do {
      pfVar2 = (float *)(*(int *)(psVar4 + -2) + param_2);
      iVar3 = FUN_100787c0((int)pfVar2,
                           *(int *)(&DAT_100a6d70 + *(int *)(psVar4 + -6) * 4) * (int)*psVar4);
      if (iVar3 == 0) {
        switch(*(undefined4 *)(psVar4 + -6)) {
        case 0:
          FUN_10078170(this,*(byte_conflict **)(psVar4 + -4),pfVar2,(int)*psVar4);
          break;
        case 1:
        case 0x10:
        case 0x11:
          FUN_100781f0(this,*(byte_conflict **)(psVar4 + -4),(int *)pfVar2,(int)*psVar4);
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          if (0x40 < *psVar4) {
            (*g_engfuncs.pfnAlertMessage)(at_error,s_Can_t_save_more_than__d_entities_100a71d4,0x40)
            ;
          }
          local_110 = 0;
          if (0 < *psVar4) {
            piVar5 = local_100;
            iVar3 = (int)pfVar2 - (int)local_100;
            do {
              switch(*(undefined4 *)(psVar4 + -6)) {
              case 2:
                iVar1 = FUN_10077f30(this,*(undefined4 *)((int)piVar5 + iVar3));
                break;
              case 3:
                iVar1 = *(int *)((int)piVar5 + iVar3);
                goto LAB_10078680;
              case 4:
                iVar1 = EHANDLE::operator->((uint *)pfVar2);
LAB_10078680:
                iVar1 = FUN_10077ef0(this,iVar1);
                break;
              case 5:
                iVar1 = FUN_10077f10(this,*(int *)((int)piVar5 + iVar3));
                break;
              case 6:
                iVar1 = FUN_10077f50(this,*(int *)((int)piVar5 + iVar3));
                break;
              default:
                goto switchD_10078646_default;
              }
              *piVar5 = iVar1;
switchD_10078646_default:
              local_110 = local_110 + 1;
              pfVar2 = pfVar2 + 2;
              piVar5 = piVar5 + 1;
            } while (local_110 < *psVar4);
          }
          FUN_10078170(this,*(byte_conflict **)(psVar4 + -4),local_100,(int)*psVar4);
          break;
        case 7:
          FUN_10078280(this,*(byte_conflict **)(psVar4 + -4),pfVar2,(int)*psVar4);
          break;
        case 8:
          FUN_100782b0(this,*(byte_conflict **)(psVar4 + -4),pfVar2,(int)*psVar4);
          break;
        case 9:
        case 10:
        case 0xc:
          FUN_10078170(this,*(byte_conflict **)(psVar4 + -4),pfVar2,(int)*psVar4);
          break;
        case 0xb:
          WriteFunction(this,*(byte_conflict **)(psVar4 + -4),pfVar2);
          break;
        case 0xd:
          FUN_10078150(this,*(byte_conflict **)(psVar4 + -4),(int)*psVar4 << 1,pfVar2);
          break;
        case 0xe:
          FUN_10078150(this,*(byte_conflict **)(psVar4 + -4),(int)*psVar4,pfVar2);
          break;
        case 0xf:
          FUN_10078190(this,*(byte_conflict **)(psVar4 + -4),pfVar2,(float)(int)*psVar4);
          break;
        default:
          (*g_engfuncs.pfnAlertMessage)(at_error,s_Bad_field_type_100a71c4);
        }
      }
      psVar4 = psVar4 + 8;
      local_10c = local_10c + -1;
    } while (local_10c != 0);
  }
  return 1;
}

/* 100787f0  CSave::BufferField  (37 bytes)
 * undefined BufferField(byte.conflict * param_1, uint param_2, undefined4 * param_3)
 * called by: CSave::WriteFunction, FUN_10078150, FUN_10078170
 */
void __thiscall
CSave::BufferField(CSave *this,byte_conflict *param_1,uint param_2,undefined4 *param_3)

{
  BufferHeader(this,param_1,param_2);
  BufferData(this,param_3,param_2);
  return;
}

/* 10078820  CSave::BufferHeader  (76 bytes)
 * undefined BufferHeader(byte.conflict * param_1, uint param_2)
 * called by: CSave::BufferField, FUN_10078190, FUN_100781f0, FUN_10078280, FUN_100782b0
 */
void __thiscall CSave::BufferHeader(CSave *this,byte_conflict *param_1,uint param_2)

{
  param_1 = (byte_conflict *)CSaveRestoreBuffer::TokenHash((CSaveRestoreBuffer *)this,param_1);
  if (0x10000 < param_2) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s_CSave____BufferHeader___size_par_100a7208);
  }
  BufferData(this,&param_2,2);
  BufferData(this,&param_1,2);
  return;
}

/* 10078870  CSave::BufferData  (100 bytes)
 * undefined BufferData(undefined4 * param_1, uint param_2)
 * called by: CSave::BufferField, CSave::BufferHeader, FUN_10078190, FUN_100781f0, FUN_10078280, FUN_100782b0
 */
void __thiscall CSave::BufferData(CSave *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) < (int)(*(int *)(iVar1 + 8) + param_2)) {
      (*g_engfuncs.pfnAlertMessage)(at_error,s_Save_Restore_overflow__100a7240);
      *(undefined4 *)(*(int *)this + 8) = *(undefined4 *)(*(int *)this + 0xc);
      return;
    }
    puVar3 = *(undefined4 **)(iVar1 + 4);
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(uint *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + param_2;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + param_2;
  }
  return;
}

