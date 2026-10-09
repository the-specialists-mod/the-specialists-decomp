/* ts_i386.so - CGameText (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cc6d0  CGameText::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CGameText::Save(CSave &) */

undefined4 __thiscall CGameText::Save(CGameText *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CRuleEntity::Save((CRuleEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CGameText",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000cc720  CGameText::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CGameText::Restore(CRestore &) */

undefined4 __thiscall CGameText::Restore(CGameText *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CRuleEntity::Restore((CRuleEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CGameText",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000cc770  CGameText::KeyValue  (680 bytes)
 * undefined KeyValue(int param_1)
 */
/* CGameText::KeyValue(KeyValueData_s *) */

void __thiscall CGameText::KeyValue(CGameText *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longdouble lVar3;
  undefined1 local_2c [4];
  undefined1 local_28;
  undefined1 local_24;
  undefined1 local_20;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"channel");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x8c = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"x");
    if (iVar1 == 0) {
      lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(float *)&this->field_0x68 = (float)lVar3;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"y");
      if (iVar1 == 0) {
        lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this->field_0x6c = (float)lVar3;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"effect");
        if (iVar1 == 0) {
          uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
          *(undefined4 *)&this->field_0x70 = uVar2;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          iVar1 = strcmp(*(char **)(param_1 + 4),"color");
          if (iVar1 == 0) {
            UTIL_StringToIntArray((undefined4 *)local_2c,4,*(char **)(param_1 + 8));
            this->field_0x74 = local_2c[0];
            this->field_0x75 = local_28;
            this->field_0x76 = local_24;
            this->field_0x77 = local_20;
            *(undefined4 *)(param_1 + 0xc) = 1;
          }
          else {
            iVar1 = strcmp(*(char **)(param_1 + 4),"color2");
            if (iVar1 == 0) {
              UTIL_StringToIntArray((undefined4 *)local_2c,4,*(char **)(param_1 + 8));
              this->field_0x78 = local_2c[0];
              this->field_0x79 = local_28;
              this->field_0x7a = local_24;
              this->field_0x7b = local_20;
              *(undefined4 *)(param_1 + 0xc) = 1;
            }
            else {
              iVar1 = strcmp(*(char **)(param_1 + 4),"fadein");
              if (iVar1 == 0) {
                lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                *(float *)&this->field_0x7c = (float)lVar3;
                *(undefined4 *)(param_1 + 0xc) = 1;
              }
              else {
                iVar1 = strcmp(*(char **)(param_1 + 4),"fadeout");
                if (iVar1 == 0) {
                  lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                  *(float *)&this->field_0x80 = (float)lVar3;
                  *(undefined4 *)(param_1 + 0xc) = 1;
                }
                else {
                  iVar1 = strcmp(*(char **)(param_1 + 4),"holdtime");
                  if (iVar1 == 0) {
                    lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                    *(float *)&this->field_0x84 = (float)lVar3;
                    *(undefined4 *)(param_1 + 0xc) = 1;
                  }
                  else {
                    iVar1 = strcmp(*(char **)(param_1 + 4),"fxtime");
                    if (iVar1 == 0) {
                      lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                      *(float *)&this->field_0x88 = (float)lVar3;
                      *(undefined4 *)(param_1 + 0xc) = 1;
                    }
                    else {
                      CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
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
  return;
}

/* 000cca2c  CGameText::Use  (149 bytes)
 * undefined Use(CRuleEntity * param_1, int * param_2)
 */
/* CGameText::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CGameText::Use(CRuleEntity *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if ((param_1->pev->spawnflags & 1) == 0) {
      iVar2 = (**(code **)(param_2[0x18] + 0xcc))(param_2);
      if (iVar2 != 0) {
        UTIL_HudMessage(param_2,(float *)&param_1[1].field_0x4,
                        gpGlobals->pStringBase + param_1->pev->message);
      }
    }
    else {
      UTIL_HudMessageAll((float *)&param_1[1].field_0x4,
                         gpGlobals->pStringBase + param_1->pev->message);
    }
  }
  return;
}

/* 000ce14c  CGameText::MessageToAll  (16 bytes)
 * uint MessageToAll(void)
 */
/* CGameText::MessageToAll(void) */

uint __thiscall CGameText::MessageToAll(CGameText *this)

{
  return this->pev->spawnflags & 1;
}

/* 000ce15c  CGameText::MessageSet  (54 bytes)
 * undefined MessageSet(undefined4 param_1)
 */
/* CGameText::MessageSet(char const *) */

void __thiscall CGameText::MessageSet(CGameText *this,char *param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnAllocString)(param_1);
  this->pev->message = iVar1;
  return;
}

/* 000ce194  CGameText::MessageGet  (41 bytes)
 * int MessageGet(void)
 */
/* CGameText::MessageGet(void) */

int __thiscall CGameText::MessageGet(CGameText *this)

{
  return (int)(gpGlobals->pStringBase + this->pev->message);
}

