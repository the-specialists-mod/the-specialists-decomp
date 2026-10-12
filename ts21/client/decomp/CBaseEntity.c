/* client.dll - CBaseEntity (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10002bf8  CBaseEntity::SUB_Remove  (5 bytes)
 * void SUB_Remove(void)
 */
/* public: void __thiscall CBaseEntity::SUB_Remove(void) */

void __thiscall CBaseEntity::SUB_Remove(CBaseEntity *this)

{
                    /* 0x2bf8  227  ?SUB_Remove@CBaseEntity@@QAEXXZ */
  return;
}

/* 10003ee5  CBaseEntity::SUB_CallUseToggle  (5 bytes)
 * void SUB_CallUseToggle(void)
 */
/* public: void __thiscall CBaseEntity::SUB_CallUseToggle(void) */

void __thiscall CBaseEntity::SUB_CallUseToggle(CBaseEntity *this)

{
                    /* 0x3ee5  226  ?SUB_CallUseToggle@CBaseEntity@@QAEXXZ */
  (**(code **)(*(int *)this + 0xc0))(this,this,3,0);
  return;
}

