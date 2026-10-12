/* mp.dll - CSave (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10068ee0  CSave::WriteFunction  (74 bytes)
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
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Invalid_function_pointer_in_enti_1009aa10);
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

/* 10069070  CSave::WriteFields  (627 bytes)
 * undefined4 WriteFields(byte.conflict * param_1, int param_2, int param_3, int param_4)
 * called by: CActAnimating::Save, CAmbientGeneric::Save, CAutoTrigger::Save, CBaseAnimating::Save, CBaseButton::Save, CBaseDelay::Save, CBaseDoor::Save, CBaseEntity::Save, CBasePlatTrain::Save, CBasePlayer::Save, CBasePlayerItem::Save, CBasePlayerWeapon::Save, ... (75 total)
 */
undefined4 __thiscall
CSave::WriteFields(CSave *this,byte_conflict *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  short *psVar5;
  int local_10c;
  int local_108;
  int local_104;
  int local_100 [64];
  
  local_10c = 0;
  if (0 < param_4) {
    psVar5 = (short *)(param_3 + 0xc);
    iVar4 = param_4;
    do {
      iVar1 = FUN_10069370(*(int *)(psVar5 + -2) + param_2,
                           *(int *)(&DAT_1009a5f0 + *(int *)(psVar5 + -6) * 4) * (int)*psVar5);
      if (iVar1 != 0) {
        local_10c = local_10c + 1;
      }
      psVar5 = psVar5 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_104 = param_4 - local_10c;
  FUN_10068c10(this,param_1,&local_104,1);
  if (0 < param_4) {
    local_108 = param_4;
    psVar5 = (short *)(param_3 + 0xc);
    do {
      pfVar3 = (float *)(*(int *)(psVar5 + -2) + param_2);
      iVar4 = FUN_10069370((int)pfVar3,
                           *(int *)(&DAT_1009a5f0 + *(int *)(psVar5 + -6) * 4) * (int)*psVar5);
      if (iVar4 == 0) {
        switch(*(undefined4 *)(psVar5 + -6)) {
        case 0:
          FUN_10068c30(this,*(byte_conflict **)(psVar5 + -4),pfVar3,(int)*psVar5);
          break;
        case 1:
        case 0x10:
        case 0x11:
          FUN_10068ce0(this,*(byte_conflict **)(psVar5 + -4),(int)pfVar3,(int)*psVar5);
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          if (0x40 < *psVar5) {
            (*g_engfuncs.pfnAlertMessage)(at_error,s_Can_t_save_more_than__d_entities_1009aa5c,0x40)
            ;
          }
          iVar4 = 0;
          if (0 < *psVar5) {
            pfVar2 = pfVar3;
            do {
              switch(*(undefined4 *)(psVar5 + -6)) {
              case 2:
                iVar1 = FUN_100689a0(this,*(undefined4 *)
                                           ((int)pfVar3 +
                                           (int)local_100 + (iVar4 * 4 - (int)local_100)));
                break;
              case 3:
                iVar1 = *(int *)((int)pfVar3 + (int)local_100 + (iVar4 * 4 - (int)local_100));
                goto LAB_1006920d;
              case 4:
                iVar1 = FUN_1000c1d0((uint *)pfVar2);
LAB_1006920d:
                iVar1 = FUN_10068960(this,iVar1);
                break;
              case 5:
                iVar1 = FUN_10068980(this,*(int *)((int)pfVar3 +
                                                  (int)local_100 + (iVar4 * 4 - (int)local_100)));
                break;
              case 6:
                iVar1 = FUN_100689c0(this,*(int *)((int)pfVar3 +
                                                  (int)local_100 + (iVar4 * 4 - (int)local_100)));
                break;
              default:
                goto switchD_100691bf_default;
              }
              local_100[iVar4] = iVar1;
switchD_100691bf_default:
              iVar4 = iVar4 + 1;
              pfVar2 = pfVar2 + 2;
            } while (iVar4 < *psVar5);
          }
          FUN_10068c10(this,*(byte_conflict **)(psVar5 + -4),local_100,(int)*psVar5);
          break;
        case 7:
          FUN_10068d90(this,*(byte_conflict **)(psVar5 + -4),pfVar3,(int)*psVar5);
          break;
        case 8:
          FUN_10068e30(this,*(byte_conflict **)(psVar5 + -4),pfVar3,(int)*psVar5);
          break;
        case 9:
        case 10:
        case 0xc:
          FUN_10068c10(this,*(byte_conflict **)(psVar5 + -4),pfVar3,(int)*psVar5);
          break;
        case 0xb:
          WriteFunction(this,*(byte_conflict **)(psVar5 + -4),pfVar3);
          break;
        case 0xd:
          BufferField(this,*(byte_conflict **)(psVar5 + -4),*psVar5 * 2,pfVar3);
          break;
        case 0xe:
          BufferField(this,*(byte_conflict **)(psVar5 + -4),(int)*psVar5,pfVar3);
          break;
        case 0xf:
          FUN_10068c50(this,*(byte_conflict **)(psVar5 + -4),pfVar3,(float)(int)*psVar5);
          break;
        default:
          (*g_engfuncs.pfnAlertMessage)(at_error,s_Bad_field_type_1009aa4c);
        }
      }
      psVar5 = psVar5 + 8;
      local_108 = local_108 + -1;
    } while (local_108 != 0);
  }
  return 1;
}

/* 100693a0  CSave::BufferField  (37 bytes)
 * undefined BufferField(byte.conflict * param_1, uint param_2, undefined4 * param_3)
 * called by: CSave::WriteFunction, FUN_10068c10, FUN_10068c30
 */
void __thiscall
CSave::BufferField(CSave *this,byte_conflict *param_1,uint param_2,undefined4 *param_3)

{
  BufferHeader(this,param_1,param_2);
  BufferData(this,param_3,param_2);
  return;
}

/* 100693d0  CSave::BufferHeader  (76 bytes)
 * undefined BufferHeader(byte.conflict * param_1, uint param_2)
 * called by: CSave::BufferField, FUN_10068c50, FUN_10068ce0, FUN_10068d90, FUN_10068e30
 */
void __thiscall CSave::BufferHeader(CSave *this,byte_conflict *param_1,uint param_2)

{
  param_1 = (byte_conflict *)CSaveRestoreBuffer::TokenHash((CSaveRestoreBuffer *)this,param_1);
  if (0x10000 < param_2) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s_CSave____BufferHeader___size_par_1009aa90);
  }
  BufferData(this,&param_2,2);
  BufferData(this,&param_1,2);
  return;
}

/* 10069420  CSave::BufferData  (100 bytes)
 * undefined BufferData(undefined4 * param_1, uint param_2)
 * called by: CSave::BufferField, CSave::BufferHeader, FUN_10068c50, FUN_10068ce0, FUN_10068d90, FUN_10068e30
 */
void __thiscall CSave::BufferData(CSave *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) < (int)(*(int *)(iVar1 + 8) + param_2)) {
      (*g_engfuncs.pfnAlertMessage)(at_error,s_Save_Restore_overflow__1009aac8);
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

