/* ts_i386.so - CBasePlatTrain (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d1ee0  CBasePlatTrain::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBasePlatTrain::Save(CSave &) */

undefined4 __thiscall CBasePlatTrain::Save(CBasePlatTrain *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CBasePlatTrain",(int)this,(int *)m_SaveData,3);
  }
  return uVar2;
}

/* 000d1f30  CBasePlatTrain::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBasePlatTrain::Restore(CRestore &) */

undefined4 __thiscall CBasePlatTrain::Restore(CBasePlatTrain *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CBasePlatTrain",(int)this,(int)m_SaveData,3);
  }
  return uVar2;
}

/* 000d1f80  CBasePlatTrain::KeyValue  (535 bytes)
 * undefined KeyValue(int param_1)
 */
/* CBasePlatTrain::KeyValue(KeyValueData_s *) */

void __thiscall CBasePlatTrain::KeyValue(CBasePlatTrain *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"lip");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this[1].field_0x2c = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"wait");
    if (iVar1 == 0) {
      lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(float *)&this[1].field_0x28 = (float)lVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"height");
      if (iVar1 == 0) {
        lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this[2].field_0x8 = (float)lVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"rotation");
        if (iVar1 == 0) {
          lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          *(float *)&this[2].field_0x28 = (float)lVar2;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          iVar1 = strcmp(*(char **)(param_1 + 4),"movesnd");
          if (iVar1 == 0) {
            lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
            this[2].field_0x3c = (char)(short)ROUND(lVar2);
            *(undefined4 *)(param_1 + 0xc) = 1;
          }
          else {
            iVar1 = strcmp(*(char **)(param_1 + 4),"stopsnd");
            if (iVar1 == 0) {
              lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
              this[2].field_0x3d = (char)(short)ROUND(lVar2);
              *(undefined4 *)(param_1 + 0xc) = 1;
            }
            else {
              iVar1 = strcmp(*(char **)(param_1 + 4),"volume");
              if (iVar1 == 0) {
                lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                *(float *)&this[2].field_0x40 = (float)lVar2;
                *(undefined4 *)(param_1 + 0xc) = 1;
              }
              else {
                CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
              }
            }
          }
        }
      }
    }
  }
  return;
}

/* 000d21a4  CBasePlatTrain::Precache  (573 bytes)
 * undefined Precache(void)
 */
/* CBasePlatTrain::Precache(void) */

void __thiscall CBasePlatTrain::Precache(CBasePlatTrain *this)

{
  char *pcVar1;
  
  switch(this[2].field_0x3c) {
  default:
    this->pev->noise = (int)"common/null.wav" - (int)gpGlobals->pStringBase;
    goto LAB_000d2348;
  case 1:
    pcVar1 = "plats/bigmove1.wav";
    break;
  case 2:
    pcVar1 = "plats/bigmove2.wav";
    break;
  case 3:
    pcVar1 = "plats/elevmove1.wav";
    break;
  case 4:
    pcVar1 = "plats/elevmove2.wav";
    break;
  case 5:
    pcVar1 = "plats/elevmove3.wav";
    break;
  case 6:
    pcVar1 = "plats/freightmove1.wav";
    break;
  case 7:
    pcVar1 = "plats/freightmove2.wav";
    break;
  case 8:
    pcVar1 = "plats/heavymove1.wav";
    break;
  case 9:
    pcVar1 = "plats/rackmove1.wav";
    break;
  case 10:
    pcVar1 = "plats/railmove1.wav";
    break;
  case 0xb:
    pcVar1 = "plats/squeekmove1.wav";
    break;
  case 0xc:
    pcVar1 = "plats/talkmove1.wav";
    break;
  case 0xd:
    pcVar1 = "plats/talkmove2.wav";
  }
  (*g_engfuncs.pfnPrecacheSound)(pcVar1);
  this->pev->noise = (int)pcVar1 - (int)gpGlobals->pStringBase;
LAB_000d2348:
  switch(this[2].field_0x3d) {
  default:
    this->pev->noise1 = (int)"common/null.wav" - (int)gpGlobals->pStringBase;
    return;
  case 1:
    pcVar1 = "plats/bigstop1.wav";
    break;
  case 2:
    pcVar1 = "plats/bigstop2.wav";
    break;
  case 3:
    pcVar1 = "plats/freightstop1.wav";
    break;
  case 4:
    pcVar1 = "plats/heavystop2.wav";
    break;
  case 5:
    pcVar1 = "plats/rackstop1.wav";
    break;
  case 6:
    pcVar1 = "plats/railstop1.wav";
    break;
  case 7:
    pcVar1 = "plats/squeekstop1.wav";
    break;
  case 8:
    pcVar1 = "plats/talkstop1.wav";
  }
  (*g_engfuncs.pfnPrecacheSound)(pcVar1);
  this->pev->noise1 = (int)pcVar1 - (int)gpGlobals->pStringBase;
  return;
}

/* 000d7a88  CBasePlatTrain::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CBasePlatTrain::ObjectCaps(void) */

undefined4 CBasePlatTrain::ObjectCaps(void)

{
  return 0;
}

/* 000d7a90  CBasePlatTrain::IsTogglePlat  (22 bytes)
 * bool IsTogglePlat(void)
 */
/* CBasePlatTrain::IsTogglePlat(void) */

bool __thiscall CBasePlatTrain::IsTogglePlat(CBasePlatTrain *this)

{
  return (this->pev->spawnflags & 1) != 0;
}

