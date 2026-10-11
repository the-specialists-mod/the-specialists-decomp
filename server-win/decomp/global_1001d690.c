/* mp.dll - global_1001d690 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001d690  GetClassPtr<CPointEntity>  (76 bytes)
 * undefined GetClassPtr<CPointEntity>(int param_1)
 * called by: info_landmark
 */
void __cdecl GetClassPtr<CPointEntity>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CPointEntity::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001d6e0  GetClassPtr<CBubbling>  (76 bytes)
 * undefined GetClassPtr<CBubbling>(int param_1)
 * called by: env_bubbles
 */
void __cdecl GetClassPtr<CBubbling>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,100), peVar1 = (entvars_t *)param_1,
        puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBubbling::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001d730  GetClassPtr<CBeam>  (76 bytes)
 * undefined GetClassPtr<CBeam>(int param_1)
 * called by: CBeam::BeamCreate, beam
 */
void __cdecl GetClassPtr<CBeam>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBeam::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001d810  GetClassPtr<CLightning>  (79 bytes)
 * undefined GetClassPtr<CLightning>(int param_1)
 * called by: env_beam
 */
void __cdecl GetClassPtr<CLightning>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x88), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CLightning::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001d860  GetClassPtr<CLaser>  (76 bytes)
 * undefined GetClassPtr<CLaser>(int param_1)
 * called by: env_laser
 */
void __cdecl GetClassPtr<CLaser>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x68), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CLaser::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001d8b0  GetClassPtr<CGlow>  (76 bytes)
 * undefined GetClassPtr<CGlow>(int param_1)
 * called by: env_glow
 */
void __cdecl GetClassPtr<CGlow>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGlow::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001d900  GetClassPtr<CSprite>  (76 bytes)
 * undefined GetClassPtr<CSprite>(int param_1)
 * called by: CSprite::SpriteCreate, env_sprite
 */
void __cdecl GetClassPtr<CSprite>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CSprite::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001d950  GetClassPtr<CGibShooter>  (76 bytes)
 * undefined GetClassPtr<CGibShooter>(int param_1)
 * called by: gibshooter
 */
void __cdecl GetClassPtr<CGibShooter>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x78), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGibShooter::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001d9a0  GetClassPtr<CEnvShooter>  (76 bytes)
 * undefined GetClassPtr<CEnvShooter>(int param_1)
 * called by: env_shooter
 */
void __cdecl GetClassPtr<CEnvShooter>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x78), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvShooter::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001d9f0  GetClassPtr<CTestEffect>  (79 bytes)
 * undefined GetClassPtr<CTestEffect>(int param_1)
 * called by: test_effect
 */
void __cdecl GetClassPtr<CTestEffect>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x128),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTestEffect::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001da40  GetClassPtr<CBlood>  (76 bytes)
 * undefined GetClassPtr<CBlood>(int param_1)
 * called by: env_blood
 */
void __cdecl GetClassPtr<CBlood>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBlood::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001da90  GetClassPtr<CShake>  (76 bytes)
 * undefined GetClassPtr<CShake>(int param_1)
 * called by: env_shake
 */
void __cdecl GetClassPtr<CShake>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CShake::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001dae0  GetClassPtr<CFade>  (76 bytes)
 * undefined GetClassPtr<CFade>(int param_1)
 * called by: env_fade
 */
void __cdecl GetClassPtr<CFade>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFade::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001db30  GetClassPtr<CMessage>  (76 bytes)
 * undefined GetClassPtr<CMessage>(int param_1)
 * called by: env_message
 */
void __cdecl GetClassPtr<CMessage>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CMessage::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001db80  GetClassPtr<CEnvFunnel>  (76 bytes)
 * undefined GetClassPtr<CEnvFunnel>(int param_1)
 * called by: env_funnel
 */
void __cdecl GetClassPtr<CEnvFunnel>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvFunnel::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001dbd0  GetClassPtr<CEnvBeverage>  (76 bytes)
 * undefined GetClassPtr<CEnvBeverage>(int param_1)
 * called by: env_beverage
 */
void __cdecl GetClassPtr<CEnvBeverage>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvBeverage::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001dc20  GetClassPtr<CItemSoda>  (76 bytes)
 * undefined GetClassPtr<CItemSoda>(int param_1)
 * called by: item_sodacan
 */
void __cdecl GetClassPtr<CItemSoda>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CItemSoda::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001dc70  spark_shower  (12 bytes)
 * undefined spark_shower(int param_1)
 */
void __cdecl spark_shower(int param_1)

{
                    /* 0x1dc70  285  spark_shower */
  GetClassPtr<CShower>(param_1);
  return;
}

/* 1001dfd0  env_explosion  (12 bytes)
 * undefined env_explosion(int param_1)
 */
void __cdecl env_explosion(int param_1)

{
                    /* 0x1dfd0  190  env_explosion */
  GetClassPtr<CEnvExplosion>(param_1);
  return;
}

/* 1001e500  GetClassPtr<CShower>  (76 bytes)
 * undefined GetClassPtr<CShower>(int param_1)
 * called by: spark_shower
 */
void __cdecl GetClassPtr<CShower>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CShower::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001e550  GetClassPtr<CEnvExplosion>  (79 bytes)
 * undefined GetClassPtr<CEnvExplosion>(int param_1)
 * called by: env_explosion
 */
void __cdecl GetClassPtr<CEnvExplosion>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x158),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvExplosion::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001e990  func_breakable  (12 bytes)
 * undefined func_breakable(int param_1)
 */
void __cdecl func_breakable(int param_1)

{
                    /* 0x1e990  205  func_breakable */
  GetClassPtr<CBreakable>(param_1);
  return;
}

/* 1001f900  func_pushable  (12 bytes)
 * undefined func_pushable(int param_1)
 */
void __cdecl func_pushable(int param_1)

{
                    /* 0x1f900  219  func_pushable */
  GetClassPtr<CPushable>(param_1);
  return;
}

/* 10020050  GetClassPtr<CBreakable>  (166 bytes)
 * undefined GetClassPtr<CBreakable>(int param_1)
 * called by: func_breakable
 */
void __cdecl GetClassPtr<CBreakable>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_10088d41;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) &&
     (ExceptionList = &pvStack_c, peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0
     )) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x108),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBreakable::vftable;
    pcStack_8 = (code *)puVar3;
    EHANDLE::operator=((EHANDLE *)(puVar3 + 0x18),0);
    puVar3[1] = param_1;
    ExceptionList = pvStack_4;
    return;
  }
  iRam00000004 = peVar1;
  ExceptionList = pvStack_c;
  return;
}

/* 10020100  GetClassPtr<CPushable>  (172 bytes)
 * undefined GetClassPtr<CPushable>(int param_1)
 * called by: func_pushable
 */
void __cdecl GetClassPtr<CPushable>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_10088d61;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) &&
     (ExceptionList = &pvStack_c, peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0
     )) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x114),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBreakable::vftable;
    pcStack_8 = (code *)puVar3;
    EHANDLE::operator=((EHANDLE *)(puVar3 + 0x18),0);
    *puVar3 = &CPushable::vftable;
    puVar3[1] = param_1;
    ExceptionList = pvStack_4;
    return;
  }
  iRam00000004 = peVar1;
  ExceptionList = pvStack_c;
  return;
}

/* 10022070  func_tank  (12 bytes)
 * undefined func_tank(int param_1)
 */
void __cdecl func_tank(int param_1)

{
                    /* 0x22070  223  func_tank */
  GetClassPtr<CFuncTankGun>(param_1);
  return;
}

/* 100221b0  func_tanklaser  (12 bytes)
 * undefined func_tanklaser(int param_1)
 */
void __cdecl func_tanklaser(int param_1)

{
                    /* 0x221b0  225  func_tanklaser */
  GetClassPtr<CFuncTankLaser>(param_1);
  return;
}

/* 10022540  func_tankrocket  (12 bytes)
 * undefined func_tankrocket(int param_1)
 */
void __cdecl func_tankrocket(int param_1)

{
                    /* 0x22540  227  func_tankrocket */
  GetClassPtr<CFuncTankRocket>(param_1);
  return;
}

/* 10022600  func_tankmortar  (12 bytes)
 * undefined func_tankmortar(int param_1)
 */
void __cdecl func_tankmortar(int param_1)

{
                    /* 0x22600  226  func_tankmortar */
  GetClassPtr<CFuncTankMortar>(param_1);
  return;
}

/* 10022760  func_tankcontrols  (12 bytes)
 * undefined func_tankcontrols(int param_1)
 */
void __cdecl func_tankcontrols(int param_1)

{
                    /* 0x22760  224  func_tankcontrols */
  GetClassPtr<CFuncTankControls>(param_1);
  return;
}

/* 10022960  GetClassPtr<CFuncTankGun>  (79 bytes)
 * undefined GetClassPtr<CFuncTankGun>(int param_1)
 * called by: func_tank
 */
void __cdecl GetClassPtr<CFuncTankGun>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xd4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTankGun::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100229f0  GetClassPtr<CFuncTankLaser>  (79 bytes)
 * undefined GetClassPtr<CFuncTankLaser>(int param_1)
 * called by: func_tanklaser
 */
void __cdecl GetClassPtr<CFuncTankLaser>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xdc), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTankLaser::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10022a40  GetClassPtr<CFuncTankRocket>  (79 bytes)
 * undefined GetClassPtr<CFuncTankRocket>(int param_1)
 * called by: func_tankrocket
 */
void __cdecl GetClassPtr<CFuncTankRocket>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xd4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTankRocket::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10022a90  GetClassPtr<CFuncTankMortar>  (79 bytes)
 * undefined GetClassPtr<CFuncTankMortar>(int param_1)
 * called by: func_tankmortar
 */
void __cdecl GetClassPtr<CFuncTankMortar>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xd4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTankMortar::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10022ae0  GetClassPtr<CFuncTankControls>  (76 bytes)
 * undefined GetClassPtr<CFuncTankControls>(int param_1)
 * called by: func_tankcontrols
 */
void __cdecl GetClassPtr<CFuncTankControls>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTankControls::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10026110  cmd_addbot  (131 bytes)
 * undefined cmd_addbot()
 */
/* .so 0xc5520 is a stub; dll: dedicated check, "help" usage, 0x1006b7c0(argv1) */

void cmd_addbot(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = (*g_engfuncs.pfnIsDedicatedServer)();
  if (iVar2 != 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Bots_only_in_listen_servers__1009f1f0);
    return;
  }
  pbVar5 = &DAT_1009f22c;
  pbVar3 = (byte *)(*g_engfuncs.pfnCmd_Argv)(1);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_10026154:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10026159;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_10026154;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_10026159:
  if (iVar2 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Usage__addbot__botname__1009f210);
    return;
  }
  pcVar4 = (*g_engfuncs.pfnCmd_Argv)(1);
  BotCreate(pcVar4);
  return;
}

/* 100261a0  cmd_addcustombot  (171 bytes)
 * undefined cmd_addcustombot()
 */
/* .so 0xc5550 stub; dll: 0x1006b590(argv1, argv2, atof(argv3)) */

void cmd_addcustombot(undefined4 param_1,char *param_2,float param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte_conflict *pbVar4;
  char *pcVar5;
  undefined *extraout_ECX;
  byte *pbVar6;
  bool bVar7;
  
  iVar2 = (*g_engfuncs.pfnIsDedicatedServer)();
  if (iVar2 != 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Bots_only_in_listen_servers__1009f1f0);
    return;
  }
  pbVar6 = &DAT_1009f22c;
  pbVar3 = (byte *)(*g_engfuncs.pfnCmd_Argv)(1);
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_100261e8:
      iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100261ed;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_100261e8;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_100261ed:
  if (iVar2 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Usage__addcustombot__botname___t_1009f234);
    return;
  }
  pbVar4 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(3);
  atof(extraout_ECX,pbVar4);
  (*g_engfuncs.pfnCmd_Argv)(2);
  pcVar5 = (*g_engfuncs.pfnCmd_Argv)(1);
  BotCreateCustom(pcVar5,param_2,param_3);
  return;
}

/* 10026250  cmd_globalslow  (386 bytes)
 * undefined cmd_globalslow()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cmd_globalslow(undefined4 param_1)

{
  int iVar1;
  byte_conflict *pbVar2;
  undefined *extraout_ECX;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  iVar1 = (*g_engfuncs.pfnCmd_Argc)(param_1);
  fVar5 = _DAT_100c0fac;
  if (iVar1 < 2) goto joined_r0x1002626d;
  pbVar2 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
  fVar3 = atof(extraout_ECX,pbVar2);
  fVar3 = fVar3 * (float10)0.01;
  fVar4 = fVar3;
  if ((float10)2.0 <= fVar3) {
    fVar4 = (float10)2.0;
  }
  if (fVar4 <= (float10)0.0) {
    fVar3 = (float10)0.0;
  }
  else if ((float10)2.0 <= fVar3) {
    fVar3 = (float10)2.0;
  }
  fVar5 = (float)fVar3;
  if ((fVar3 <= (float10)0.999) || (1.001 <= fVar5)) {
    if ((fVar5 <= 0.0) || (0.01 <= fVar5)) {
      if (fVar5 == 0.0) goto LAB_10026302;
    }
    else {
      fVar5 = 0.01;
    }
    if (fVar5 != _DAT_100c0fac) {
      FUN_1004e950(&TSGameRules,fVar5,0.0);
    }
  }
  else {
    fVar5 = 0.0;
LAB_10026302:
    if (_DAT_100c0fac != fVar5) {
      _DAT_100c0fa8 = 0;
    }
  }
joined_r0x1002626d:
  if (fVar5 == 0.0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Globalslow_is_off__1009f264);
    return;
  }
  (*g_engfuncs.pfnAlertMessage)
            (at_console,s_Globalslow_is_at___0f____1009f278,(double)(fVar5 * 100.0));
  return;
}

/* 100263e0  cmd_restartround  (13 bytes)
 * undefined cmd_restartround()
 */
/* .so 0xc5748; GameDLLInit order, calls CTSGameRules::ResetRestartRound */

void cmd_restartround(void)

{
  CTSGameRules::ResetRestartRound((CTSGameRules *)&TSGameRules,2);
  return;
}

/* 100263f0  display_weaponrestriction  (38 bytes)
 * undefined display_weaponrestriction(void)
 * called by: cmd_weaponrestriction
 */
void display_weaponrestriction(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_64 [100];
  
  local_64[0] = '\0';
  if (DAT_100c62b8 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_All_weapons_are_restricted__1009f2ac);
    return;
  }
  if ((DAT_100c62b8 & 1) != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = PTR_s_Knives_1009ef18;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = local_64;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  if ((DAT_100c62b8 & 2) != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = PTR_s_Pistols_1009ef1c;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = local_64;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  if ((DAT_100c62b8 & 4) != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = PTR_DAT_1009ef20;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = local_64;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  if ((DAT_100c62b8 & 8) != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = PTR_s_Rifles_1009ef24;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = local_64;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  if ((DAT_100c62b8 & 0x10) != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = PTR_s_Shotguns_1009ef28;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = local_64;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_Weapons_allowed___s_1009f294,local_64);
  return;
}

/* 10026540  cmd_weaponrestriction  (146 bytes)
 * undefined cmd_weaponrestriction()
 */
/* .so 0xc58a0; GameDLLInit order, InitWeaponRestriction */

void cmd_weaponrestriction(void)

{
  uint uVar1;
  int iVar2;
  byte_conflict *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  void *this;
  void *this_00;
  
  iVar2 = (*g_engfuncs.pfnCmd_Argc)();
  uVar1 = DAT_100c62b8;
  if (iVar2 < 2) {
    display_weaponrestriction();
    return;
  }
  pbVar3 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
  iVar2 = atoi(this,pbVar3);
  if (iVar2 == 5) {
    DAT_100c62b8 = InitWeaponRestriction();
  }
  else {
    pbVar3 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
    uVar4 = atoi(this_00,pbVar3);
    uVar5 = WeaponRestrictionByID(uVar4);
    DAT_100c62b8 = uVar5 & DAT_100c62b4;
  }
  if (DAT_100c62b8 != uVar1) {
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97bc,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(3);
    (*g_engfuncs.pfnWriteShort)(DAT_100c62b8);
    (*g_engfuncs.pfnMessageEnd)();
  }
  display_weaponrestriction();
  return;
}

/* 100265e0  cmd_loadweapons  (77 bytes)
 * undefined cmd_loadweapons()
 */
void cmd_loadweapons(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar1 < 2) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_ERROR__specify_a_file___example__1009f2cc);
    return;
  }
  (*g_engfuncs.pfnCmd_Argv)(1);
  uVar2 = adjust_weapon_value();
  if ((char)uVar2 != '\0') {
    InformClientsOnWeaponsParams(0);
    return;
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_ERROR__file_doesn_t_exist__1009f308);
  return;
}

/* 10026630  cmd_saveweapons  (66 bytes)
 * undefined cmd_saveweapons()
 */
void cmd_saveweapons(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar1 < 2) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_ERROR__specify_a_file___example__1009f324);
  }
  else {
    (*g_engfuncs.pfnCmd_Argv)(1);
    uVar2 = save_weapon_value();
    if ((char)uVar2 == '\0') {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_ERROR__unable_to_save__1009f360);
      return;
    }
  }
  return;
}

/* 10026680  pfnGameInit  (591 bytes)
 * void pfnGameInit(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnGameInit(void)

{
  (*g_engfuncs.pfnAddServerCommand)(s_addbot_1009f404,cmd_addbot);
  (*g_engfuncs.pfnAddServerCommand)(s_addcustombot_1009f3f4,cmd_addcustombot);
  (*g_engfuncs.pfnAddServerCommand)(s_globalslow_1009f3e8,cmd_globalslow);
  (*g_engfuncs.pfnAddServerCommand)(s_restartround_1009f3d8,cmd_restartround);
  (*g_engfuncs.pfnAddServerCommand)(s_weaponrestriction_1009f3c4,cmd_weaponrestriction);
  (*g_engfuncs.pfnAddServerCommand)(s_loadweapons_1009f3b8,cmd_loadweapons);
  (*g_engfuncs.pfnAddServerCommand)(s_saveweapons_1009f3ac,cmd_saveweapons);
  _DAT_100ae474 = (*g_engfuncs.pfnCVarGetPointer)(s_sv_gravity_1009f3a0);
  _DAT_100ae478 = (*g_engfuncs.pfnCVarGetPointer)(s_sv_aim_1009f398);
  _DAT_100ae47c = (*g_engfuncs.pfnCVarGetPointer)(s_mp_footsteps_1009f388);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_displaysoundlist_1009eb28);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_teamplay_1009eb70);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_fraglimit_1009eb88);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_timelimit_1009eba0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_fragsleft_1009eb40);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_timeleft_1009eb58);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_friendlyfire_1009ebb8);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_falldamage_1009ebd0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_weaponstay_1009ebe8);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_forcerespawn_1009ec00);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_autocrosshair_1009ec18);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_decalfrequency_1009ec30);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_teamlist_1009ec48);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_teammodels_1009ec60);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_teamoverride_1009ec78);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_defaultteam_1009ec90);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_allowmonsters_1009eca8);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_chattime_1009ecc0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_roundtime_1009ed20);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_respawntime_1009ed38);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_damagemult_1009ed50);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_slowmatch_1009ed68);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&cvar_botlearn);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_nopowerup_1009ed80);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_realbullet_1009edb0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_usecash_1009edc8);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_ammocount_1009ede0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&cvar_bottalk);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_weaponstay_1009ee10);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_theonemode_1009ee28);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_theone_1009ee40);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_theothers_1009ee58);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_lastmanstanding_1009ee70);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_spectacularness_1009ee88);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_customweapons_1009eeb8);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_banfortk_1009eed0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&cvar_botarmor);
  (*g_engfuncs.pfnServerCommand)(s_exec_skill_cfg_1009f378);
  return;
}

/* 10026ae0  InstallGameRules  (360 bytes)
 * undefined4 * InstallGameRules(void)
 * called by: CWorld::Precache
 */
undefined4 * InstallGameRules(void)

{
  globalvars_t *pgVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10088d9c;
  puStack_c = ExceptionList;
  ExceptionList = &puStack_c;
  (*g_engfuncs.pfnServerCommand)(s_exec_game_cfg_1009f414);
  (*g_engfuncs.pfnServerExecute)();
  pgVar1 = gpGlobals;
  if (gpGlobals->deathmatch == 0.0) {
    g_teamplay = 0;
    puStack_c = operator_new(4);
    if (puStack_c != (undefined4 *)0x0) {
      puVar2 = FUN_1003abc0(puStack_c);
      ExceptionList = pcStack_8;
      return puVar2;
    }
  }
  else {
    lVar3 = __ftol();
    g_teamplay = FUN_1004c8c0(pgVar1->pStringBase + pgVar1->mapname,(int)lVar3);
    if (g_teamplay < 1) {
      lVar3 = __ftol();
      g_teamplay = 0;
      if ((int)lVar3 == 1) {
        puStack_c = operator_new(0xc);
        if (puStack_c != (undefined4 *)0x0) {
          puVar2 = CHalfLifeMultiplay::CHalfLifeMultiplay(puStack_c);
          ExceptionList = pcStack_8;
          return puVar2;
        }
      }
      else {
        puStack_c = operator_new(0xc);
        if (puStack_c != (undefined4 *)0x0) {
          puVar2 = CHalfLifeMultiplay::CHalfLifeMultiplay(puStack_c);
          ExceptionList = pcStack_8;
          return puVar2;
        }
      }
    }
    else {
      puStack_c = operator_new(0x218);
      if (puStack_c != (undefined4 *)0x0) {
        puVar2 = CHalfLifeTeamplay::CHalfLifeTeamplay(puStack_c);
        ExceptionList = pcStack_8;
        return puVar2;
      }
    }
  }
  ExceptionList = pcStack_8;
  return (undefined4 *)0x0;
}

/* 10026d00  func_recharge  (12 bytes)
 * undefined func_recharge(int param_1)
 */
void __cdecl func_recharge(int param_1)

{
                    /* 0x26d00  220  func_recharge */
  GetClassPtr<CRecharge>(param_1);
  return;
}

/* 10027040  GetClassPtr<CRecharge>  (79 bytes)
 * undefined GetClassPtr<CRecharge>(int param_1)
 * called by: func_recharge
 */
void __cdecl GetClassPtr<CRecharge>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x104),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CRecharge::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100270f0  cycler  (12 bytes)
 * undefined cycler(int param_1)
 */
void __cdecl cycler(int param_1)

{
                    /* 0x270f0  179  cycler */
  GetClassPtr<CGenericCycler>(param_1);
  return;
}

/* 10027100  cycler_prdroid  (12 bytes)
 * undefined cycler_prdroid(int param_1)
 */
void __cdecl cycler_prdroid(int param_1)

{
                    /* 0x27100  180  cycler_prdroid */
  GetClassPtr<CCyclerProbe>(param_1);
  return;
}

/* 100274c0  cycler_sprite  (12 bytes)
 * undefined cycler_sprite(int param_1)
 */
void __cdecl cycler_sprite(int param_1)

{
                    /* 0x274c0  181  cycler_sprite */
  GetClassPtr<CCyclerSprite>(param_1);
  return;
}

/* 10027710  cycler_weapon  (12 bytes)
 * undefined cycler_weapon(int param_1)
 */
void __cdecl cycler_weapon(int param_1)

{
                    /* 0x27710  182  cycler_weapon */
  GetClassPtr<CWeaponCycler>(param_1);
  return;
}

/* 100279b0  cycler_wreckage  (12 bytes)
 * undefined cycler_wreckage(int param_1)
 */
void __cdecl cycler_wreckage(int param_1)

{
                    /* 0x279b0  183  cycler_wreckage */
  GetClassPtr<CWreckage>(param_1);
  return;
}

/* 10027c10  GetClassPtr<CGenericCycler>  (79 bytes)
 * undefined GetClassPtr<CGenericCycler>(int param_1)
 * called by: cycler
 */
void __cdecl GetClassPtr<CGenericCycler>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGenericCycler::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10027d00  GetClassPtr<CCyclerProbe>  (79 bytes)
 * undefined GetClassPtr<CCyclerProbe>(int param_1)
 * called by: cycler_prdroid
 */
void __cdecl GetClassPtr<CCyclerProbe>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CCyclerProbe::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10027d50  GetClassPtr<CCyclerSprite>  (76 bytes)
 * undefined GetClassPtr<CCyclerSprite>(int param_1)
 * called by: cycler_sprite
 */
void __cdecl GetClassPtr<CCyclerSprite>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CCyclerSprite::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10027db0  GetClassPtr<CWeaponCycler>  (79 bytes)
 * undefined GetClassPtr<CWeaponCycler>(int param_1)
 * called by: cycler_weapon
 */
void __cdecl GetClassPtr<CWeaponCycler>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xc0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CWeaponCycler::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10027e50  GetClassPtr<CWreckage>  (79 bytes)
 * undefined GetClassPtr<CWreckage>(int param_1)
 * called by: cycler_wreckage
 */
void __cdecl GetClassPtr<CWreckage>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CWreckage::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10027eb0  GiveFnptrsToDll  (32 bytes)
 * undefined GiveFnptrsToDll(undefined4 * param_1, undefined4 param_2)
 */
void GiveFnptrsToDll(undefined4 *param_1,globalvars_t *param_2)

{
  int iVar1;
  enginefuncs_t_ts30 *peVar2;
  
  peVar2 = &g_engfuncs;
                    /* 0x27eb0  1  GiveFnptrsToDll */
  for (iVar1 = 0x9b; iVar1 != 0; iVar1 = iVar1 + -1) {
    peVar2->pfnPrecacheModel = (_func_38 *)*param_1;
    param_1 = param_1 + 1;
    peVar2 = (enginefuncs_t_ts30 *)&peVar2->pfnPrecacheSound;
  }
  gpGlobals = param_2;
  return;
}

/* 10027ed0  item_healthkit  (12 bytes)
 * undefined item_healthkit(int param_1)
 */
void __cdecl item_healthkit(int param_1)

{
                    /* 0x27ed0  263  item_healthkit */
  GetClassPtr<CHealthKit>(param_1);
  return;
}

/* 10028070  func_healthcharger  (12 bytes)
 * undefined func_healthcharger(int param_1)
 */
void __cdecl func_healthcharger(int param_1)

{
                    /* 0x28070  212  func_healthcharger */
  GetClassPtr<CWallHealth>(param_1);
  return;
}

/* 10028590  GetClassPtr<CHealthKit>  (76 bytes)
 * undefined GetClassPtr<CHealthKit>(int param_1)
 * called by: item_healthkit
 */
void __cdecl GetClassPtr<CHealthKit>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CHealthKit::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100285e0  GetClassPtr<CWallHealth>  (79 bytes)
 * undefined GetClassPtr<CWallHealth>(int param_1)
 * called by: func_healthcharger
 */
void __cdecl GetClassPtr<CWallHealth>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x104),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CWallHealth::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028630  ammo_crossbow  (12 bytes)
 * undefined ammo_crossbow(int param_1)
 */
void __cdecl ammo_crossbow(int param_1)

{
                    /* 0x28630  173  ammo_crossbow */
  GetClassPtr<CTSSniperAmmo>(param_1);
  return;
}

/* 10028640  weapon_crossbow  (12 bytes)
 * undefined weapon_crossbow(int param_1)
 */
void __cdecl weapon_crossbow(int param_1)

{
                    /* 0x28640  334  weapon_crossbow */
  GetClassPtr<CTSSniperWeapon>(param_1);
  return;
}

/* 10028650  ammo_buckshot  (12 bytes)
 * undefined ammo_buckshot(int param_1)
 */
void __cdecl ammo_buckshot(int param_1)

{
                    /* 0x28650  172  ammo_buckshot */
  GetClassPtr<CTSShotgunAmmo>(param_1);
  return;
}

/* 10028660  weapon_shotgun  (12 bytes)
 * undefined weapon_shotgun(int param_1)
 */
void __cdecl weapon_shotgun(int param_1)

{
                    /* 0x28660  341  weapon_shotgun */
  GetClassPtr<CTSShotgunWeapon>(param_1);
  return;
}

/* 10028670  ammo_gaussclip  (12 bytes)
 * undefined ammo_gaussclip(int param_1)
 */
void __cdecl ammo_gaussclip(int param_1)

{
                    /* 0x28670  174  ammo_gaussclip */
  GetClassPtr<CTSRifleAmmo>(param_1);
  return;
}

/* 10028680  weapon_egon  (12 bytes)
 * undefined weapon_egon(int param_1)
 */
void __cdecl weapon_egon(int param_1)

{
                    /* 0x28680  335  weapon_egon
                       0x28680  336  weapon_gauss */
  GetClassPtr<CTSRifleWeapon>(param_1);
  return;
}

/* 10028690  ammo_rpgclip  (12 bytes)
 * undefined ammo_rpgclip(int param_1)
 */
void __cdecl ammo_rpgclip(int param_1)

{
                    /* 0x28690  175  ammo_rpgclip */
  GetClassPtr<CTSSMGAmmo>(param_1);
  return;
}

/* 100286a0  weapon_rpg  (12 bytes)
 * undefined weapon_rpg(int param_1)
 */
void __cdecl weapon_rpg(int param_1)

{
                    /* 0x286a0  339  weapon_rpg */
  GetClassPtr<CTSSMGWeapon>(param_1);
  return;
}

/* 100286b0  ammo_9mmAR  (12 bytes)
 * undefined ammo_9mmAR(int param_1)
 */
void __cdecl ammo_9mmAR(int param_1)

{
                    /* 0x286b0  170  ammo_9mmAR */
  GetClassPtr<CTSBigPistolAmmo>(param_1);
  return;
}

/* 100286c0  weapon_9MMAR  (12 bytes)
 * undefined weapon_9MMAR(int param_1)
 */
void __cdecl weapon_9MMAR(int param_1)

{
                    /* 0x286c0  333  weapon_9MMAR */
  GetClassPtr<CTSBigPistolWeapon>(param_1);
  return;
}

/* 100286d0  weapon_hornetgun  (12 bytes)
 * undefined weapon_hornetgun(int param_1)
 */
void __cdecl weapon_hornetgun(int param_1)

{
                    /* 0x286d0  338  weapon_hornetgun */
  GetClassPtr<CTSMGWeapon>(param_1);
  return;
}

/* 100286e0  ammo_ARgrenades  (12 bytes)
 * undefined ammo_ARgrenades(int param_1)
 */
void __cdecl ammo_ARgrenades(int param_1)

{
                    /* 0x286e0  171  ammo_ARgrenades
                       0x286e0  340  weapon_satchel */
  GetClassPtr<CTSKnifeWeapon>(param_1);
  return;
}

/* 100286f0  weapon_snark  (12 bytes)
 * undefined weapon_snark(int param_1)
 */
void __cdecl weapon_snark(int param_1)

{
                    /* 0x286f0  342  weapon_snark */
  GetClassPtr<CTSKatanaWeapon>(param_1);
  return;
}

/* 10028700  weapon_handgrenade  (12 bytes)
 * undefined weapon_handgrenade(int param_1)
 */
void __cdecl weapon_handgrenade(int param_1)

{
                    /* 0x28700  337  weapon_handgrenade */
  GetClassPtr<CTSGrenadeWeapon>(param_1);
  return;
}

/* 10028710  item_longjump  (12 bytes)
 * undefined item_longjump(int param_1)
 */
void __cdecl item_longjump(int param_1)

{
                    /* 0x28710  264  item_longjump */
  GetClassPtr<CTSSuperJump>(param_1);
  return;
}

/* 10028a90  GetClassPtr<CTSSniperAmmo>  (79 bytes)
 * undefined GetClassPtr<CTSSniperAmmo>(int param_1)
 * called by: ammo_crossbow
 */
void __cdecl GetClassPtr<CTSSniperAmmo>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x9c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSSniperAmmo::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028af0  GetClassPtr<CTSSniperWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSSniperWeapon>(int param_1)
 * called by: weapon_crossbow
 */
void __cdecl GetClassPtr<CTSSniperWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSSniperWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028b40  GetClassPtr<CTSShotgunAmmo>  (79 bytes)
 * undefined GetClassPtr<CTSShotgunAmmo>(int param_1)
 * called by: ammo_buckshot
 */
void __cdecl GetClassPtr<CTSShotgunAmmo>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x9c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSShotgunAmmo::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028b90  GetClassPtr<CTSShotgunWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSShotgunWeapon>(int param_1)
 * called by: weapon_shotgun
 */
void __cdecl GetClassPtr<CTSShotgunWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSShotgunWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028be0  GetClassPtr<CTSRifleAmmo>  (79 bytes)
 * undefined GetClassPtr<CTSRifleAmmo>(int param_1)
 * called by: ammo_gaussclip
 */
void __cdecl GetClassPtr<CTSRifleAmmo>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x9c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSRifleAmmo::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028c30  GetClassPtr<CTSRifleWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSRifleWeapon>(int param_1)
 * called by: weapon_egon
 */
void __cdecl GetClassPtr<CTSRifleWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSRifleWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028c80  GetClassPtr<CTSSMGAmmo>  (79 bytes)
 * undefined GetClassPtr<CTSSMGAmmo>(int param_1)
 * called by: ammo_rpgclip
 */
void __cdecl GetClassPtr<CTSSMGAmmo>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x9c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSSMGAmmo::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028cd0  GetClassPtr<CTSSMGWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSSMGWeapon>(int param_1)
 * called by: weapon_rpg
 */
void __cdecl GetClassPtr<CTSSMGWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSSMGWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028d20  GetClassPtr<CTSBigPistolAmmo>  (79 bytes)
 * undefined GetClassPtr<CTSBigPistolAmmo>(int param_1)
 * called by: ammo_9mmAR
 */
void __cdecl GetClassPtr<CTSBigPistolAmmo>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x9c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSBigPistolAmmo::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028d70  GetClassPtr<CTSBigPistolWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSBigPistolWeapon>(int param_1)
 * called by: weapon_9MMAR
 */
void __cdecl GetClassPtr<CTSBigPistolWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSBigPistolWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028dc0  GetClassPtr<CTSMGWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSMGWeapon>(int param_1)
 * called by: weapon_hornetgun
 */
void __cdecl GetClassPtr<CTSMGWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSMGWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028e10  GetClassPtr<CTSKnifeWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSKnifeWeapon>(int param_1)
 * called by: ammo_ARgrenades
 */
void __cdecl GetClassPtr<CTSKnifeWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSKnifeWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028e60  GetClassPtr<CTSKatanaWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSKatanaWeapon>(int param_1)
 * called by: weapon_snark
 */
void __cdecl GetClassPtr<CTSKatanaWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSKatanaWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028eb0  GetClassPtr<CTSGrenadeWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSGrenadeWeapon>(int param_1)
 * called by: weapon_handgrenade
 */
void __cdecl GetClassPtr<CTSGrenadeWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSGrenadeWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028f00  GetClassPtr<CTSSuperJump>  (106 bytes)
 * undefined GetClassPtr<CTSSuperJump>(int param_1)
 * called by: item_longjump
 */
void __cdecl GetClassPtr<CTSSuperJump>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x8c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    puVar3[0x1d] = 0;
    puVar3[0x22] = 0x3f800000;
    puVar3[0x21] = 0;
    *puVar3 = &CTSSuperJump::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10028f70  CreateInterface  (121 bytes)
 * undefined4 CreateInterface(byte.conflict * param_1, undefined4 * param_2)
 */
undefined4 __cdecl CreateInterface(byte_conflict *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  puVar2 = DAT_100ae738;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      return 0;
    }
    pbVar3 = (byte *)puVar2[1];
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10028faf:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10028fb4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10028faf;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10028fb4:
    if (iVar4 == 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      uVar5 = (*(code *)*puVar2)();
      return uVar5;
    }
    puVar2 = (undefined4 *)puVar2[2];
  } while( true );
}

/* 10028ff0  world_items  (12 bytes)
 * undefined world_items(int param_1)
 */
void __cdecl world_items(int param_1)

{
                    /* 0x28ff0  345  world_items */
  GetClassPtr<CWorldItem>(param_1);
  return;
}

/* 100293a0  item_suit  (12 bytes)
 * undefined item_suit(int param_1)
 */
void __cdecl item_suit(int param_1)

{
                    /* 0x293a0  267  item_suit */
  GetClassPtr<CItemSuit>(param_1);
  return;
}

/* 100293b0  item_battery  (12 bytes)
 * undefined item_battery(int param_1)
 */
void __cdecl item_battery(int param_1)

{
                    /* 0x293b0  262  item_battery */
  GetClassPtr<CItemBattery>(param_1);
  return;
}

/* 100293c0  item_antidote  (12 bytes)
 * undefined item_antidote(int param_1)
 */
void __cdecl item_antidote(int param_1)

{
                    /* 0x293c0  261  item_antidote */
  GetClassPtr<CItemAntidote>(param_1);
  return;
}

/* 100293d0  item_security  (12 bytes)
 * undefined item_security(int param_1)
 */
void __cdecl item_security(int param_1)

{
                    /* 0x293d0  265  item_security */
  GetClassPtr<CItemSecurity>(param_1);
  return;
}

/* 100293e0  GetClassPtr<CWorldItem>  (76 bytes)
 * undefined GetClassPtr<CWorldItem>(int param_1)
 * called by: world_items
 */
void __cdecl GetClassPtr<CWorldItem>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CWorldItem::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10029430  GetClassPtr<CItemSuit>  (76 bytes)
 * undefined GetClassPtr<CItemSuit>(int param_1)
 * called by: item_suit
 */
void __cdecl GetClassPtr<CItemSuit>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CItemSuit::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10029530  GetClassPtr<CItemBattery>  (76 bytes)
 * undefined GetClassPtr<CItemBattery>(int param_1)
 * called by: item_battery
 */
void __cdecl GetClassPtr<CItemBattery>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CItemBattery::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10029700  GetClassPtr<CItemAntidote>  (76 bytes)
 * undefined GetClassPtr<CItemAntidote>(int param_1)
 * called by: item_antidote
 */
void __cdecl GetClassPtr<CItemAntidote>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CItemAntidote::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100297c0  GetClassPtr<CItemSecurity>  (76 bytes)
 * undefined GetClassPtr<CItemSecurity>(int param_1)
 * called by: item_security
 */
void __cdecl GetClassPtr<CItemSecurity>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CItemSecurity::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10029b20  light  (12 bytes)
 * undefined light(int param_1)
 */
void __cdecl light(int param_1)

{
                    /* 0x29b20  269  light
                       0x29b20  271  light_spot */
  GetClassPtr<CLight>(param_1);
  return;
}

/* 10029b30  light_environment  (12 bytes)
 * undefined light_environment(int param_1)
 */
void __cdecl light_environment(int param_1)

{
                    /* 0x29b30  270  light_environment */
  GetClassPtr<CEnvLight>(param_1);
  return;
}

/* 10029db0  GetClassPtr<CLight>  (76 bytes)
 * undefined GetClassPtr<CLight>(int param_1)
 * called by: light
 */
void __cdecl GetClassPtr<CLight>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CLight::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10029e00  GetClassPtr<CEnvLight>  (76 bytes)
 * undefined GetClassPtr<CEnvLight>(int param_1)
 * called by: light_environment
 */
void __cdecl GetClassPtr<CEnvLight>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvLight::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10029fe0  game_score  (12 bytes)
 * undefined game_score(int param_1)
 */
void __cdecl game_score(int param_1)

{
                    /* 0x29fe0  242  game_score */
  GetClassPtr<CGameScore>(param_1);
  return;
}

/* 1002a0f0  game_end  (12 bytes)
 * undefined game_end(int param_1)
 */
void __cdecl game_end(int param_1)

{
                    /* 0x2a0f0  238  game_end */
  GetClassPtr<CGameEnd>(param_1);
  return;
}

/* 1002a120  game_text  (12 bytes)
 * undefined game_text(int param_1)
 */
void __cdecl game_text(int param_1)

{
                    /* 0x2a120  245  game_text */
  GetClassPtr<CGameText>(param_1);
  return;
}

/* 1002a5c0  game_team_master  (12 bytes)
 * undefined game_team_master(int param_1)
 */
void __cdecl game_team_master(int param_1)

{
                    /* 0x2a5c0  243  game_team_master */
  GetClassPtr<CGameTeamMaster>(param_1);
  return;
}

/* 1002a7e0  game_team_set  (12 bytes)
 * undefined game_team_set(int param_1)
 */
void __cdecl game_team_set(int param_1)

{
                    /* 0x2a7e0  244  game_team_set */
  GetClassPtr<CGameTeamSet>(param_1);
  return;
}

/* 1002a840  game_zone_player  (12 bytes)
 * undefined game_zone_player(int param_1)
 */
void __cdecl game_zone_player(int param_1)

{
                    /* 0x2a840  246  game_zone_player */
  GetClassPtr<CGamePlayerZone>(param_1);
  return;
}

/* 1002ab90  game_player_hurt  (12 bytes)
 * undefined game_player_hurt(int param_1)
 */
void __cdecl game_player_hurt(int param_1)

{
                    /* 0x2ab90  240  game_player_hurt */
  GetClassPtr<CGamePlayerHurt>(param_1);
  return;
}

/* 1002ac30  game_counter  (12 bytes)
 * undefined game_counter(int param_1)
 */
void __cdecl game_counter(int param_1)

{
                    /* 0x2ac30  236  game_counter */
  GetClassPtr<CGameCounter>(param_1);
  return;
}

/* 1002ad50  game_counter_set  (12 bytes)
 * undefined game_counter_set(int param_1)
 */
void __cdecl game_counter_set(int param_1)

{
                    /* 0x2ad50  237  game_counter_set */
  GetClassPtr<CGameCounterSet>(param_1);
  return;
}

/* 1002ada0  game_player_equip  (12 bytes)
 * undefined game_player_equip(int param_1)
 */
void __cdecl game_player_equip(int param_1)

{
                    /* 0x2ada0  239  game_player_equip */
  GetClassPtr<CGamePlayerEquip>(param_1);
  return;
}

/* 1002af00  game_player_team  (12 bytes)
 * undefined game_player_team(int param_1)
 */
void __cdecl game_player_team(int param_1)

{
                    /* 0x2af00  241  game_player_team */
  GetClassPtr<CGamePlayerTeam>(param_1);
  return;
}

/* 1002b030  GetClassPtr<CGameScore>  (76 bytes)
 * undefined GetClassPtr<CGameScore>(int param_1)
 * called by: game_score
 */
void __cdecl GetClassPtr<CGameScore>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameScore::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002b080  GetClassPtr<CGameEnd>  (76 bytes)
 * undefined GetClassPtr<CGameEnd>(int param_1)
 * called by: game_end
 */
void __cdecl GetClassPtr<CGameEnd>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameEnd::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002b0d0  GetClassPtr<CGameText>  (79 bytes)
 * undefined GetClassPtr<CGameText>(int param_1)
 * called by: game_text
 */
void __cdecl GetClassPtr<CGameText>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x80), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameText::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002b120  GetClassPtr<CGameTeamMaster>  (76 bytes)
 * undefined GetClassPtr<CGameTeamMaster>(int param_1)
 * called by: game_team_master
 */
void __cdecl GetClassPtr<CGameTeamMaster>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameTeamMaster::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002b170  GetClassPtr<CGameTeamSet>  (76 bytes)
 * undefined GetClassPtr<CGameTeamSet>(int param_1)
 * called by: game_team_set
 */
void __cdecl GetClassPtr<CGameTeamSet>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameTeamSet::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002b1c0  GetClassPtr<CGamePlayerZone>  (76 bytes)
 * undefined GetClassPtr<CGamePlayerZone>(int param_1)
 * called by: game_zone_player
 */
void __cdecl GetClassPtr<CGamePlayerZone>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x68), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGamePlayerZone::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002b210  GetClassPtr<CGamePlayerHurt>  (76 bytes)
 * undefined GetClassPtr<CGamePlayerHurt>(int param_1)
 * called by: game_player_hurt
 */
void __cdecl GetClassPtr<CGamePlayerHurt>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGamePlayerHurt::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002b260  GetClassPtr<CGameCounter>  (76 bytes)
 * undefined GetClassPtr<CGameCounter>(int param_1)
 * called by: game_counter
 */
void __cdecl GetClassPtr<CGameCounter>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameCounter::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002b2b0  GetClassPtr<CGameCounterSet>  (76 bytes)
 * undefined GetClassPtr<CGameCounterSet>(int param_1)
 * called by: game_counter_set
 */
void __cdecl GetClassPtr<CGameCounterSet>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameCounterSet::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002b300  GetClassPtr<CGamePlayerEquip>  (79 bytes)
 * undefined GetClassPtr<CGamePlayerEquip>(int param_1)
 * called by: game_player_equip
 */
void __cdecl GetClassPtr<CGamePlayerEquip>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x158),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGamePlayerEquip::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002b350  GetClassPtr<CGamePlayerTeam>  (76 bytes)
 * undefined GetClassPtr<CGamePlayerTeam>(int param_1)
 * called by: game_player_team
 */
void __cdecl GetClassPtr<CGamePlayerTeam>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGamePlayerTeam::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002c8a0  ReloadMapCycleFile  (712 bytes)
 * undefined4 ReloadMapCycleFile(undefined4 param_1, undefined4 * param_2)
 * called by: CHalfLifeMultiplay::ChangeLevel
 */
undefined4 __cdecl ReloadMapCycleFile(char *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  byte_conflict *pbVar3;
  byte_conflict *pbVar4;
  byte_conflict *pbVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void *this;
  void *this_00;
  char *pcVar10;
  char *pcVar11;
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  char *pcVar12;
  byte_conflict *pbStack_424;
  byte_conflict *pbStack_420;
  char acStack_418 [4];
  char acStack_414 [28];
  char acStack_3f8 [4];
  char acStack_3f4 [8];
  char acStack_3ec [8];
  char acStack_3e4 [8];
  char acStack_3dc [8];
  char acStack_3d4 [980];
  
  pbVar4 = (*g_engfuncs.pfnLoadFileForMe)(param_1,(int *)&stack0xfffffbd8);
  pbStack_424 = (byte_conflict *)0x0;
  pcVar12 = (char *)0x0;
  if ((pbVar4 != (byte_conflict *)0x0) && (pbVar5 = pbVar4, pbStack_420 != (byte_conflict *)0x0)) {
LAB_1002c8e0:
    pcVar11 = acStack_3f8;
    for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
      pcVar11[0] = '\0';
      pcVar11[1] = '\0';
      pcVar11[2] = '\0';
      pcVar11[3] = '\0';
      pcVar11 = pcVar11 + 4;
    }
    bVar2 = false;
    pbVar5 = (byte_conflict *)FUN_1002c760((char *)pbVar5);
    iVar7 = -1;
    pcVar11 = &DAT_100ae868;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    if (iVar7 != -2) {
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_100ae868;
      do {
        pcVar6 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar6 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar6;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar11 = pcVar6 + -uVar8;
      pcVar6 = acStack_418;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar6 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar6 = pcVar6 + 1;
      }
      iVar7 = FUN_1002c850((void *)0x0,(char *)pbVar5);
      pbStack_424 = pbVar5;
      if (iVar7 != 0) {
        pbStack_424 = (byte_conflict *)FUN_1002c760((char *)pbVar5);
        iVar7 = -1;
        pcVar11 = &DAT_100ae868;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        if (iVar7 != -2) {
          uVar8 = 0xffffffff;
          pcVar11 = &DAT_100ae868;
          do {
            pcVar6 = pcVar11;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar6 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar6;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          bVar2 = true;
          pcVar11 = pcVar6 + -uVar8;
          pcVar6 = acStack_3f8;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar6 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar6 = pcVar6 + 1;
          }
        }
      }
      iVar7 = (*g_engfuncs.pfnIsMapValid)(acStack_418);
      if (iVar7 == 0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,s_Skipping__s_from_mapcycle__not_a_1009ff14,acStack_414);
        pbVar5 = pbStack_420;
      }
      else {
        pcVar6 = operator_new(0x42c);
        uVar8 = 0xffffffff;
        pcVar11 = acStack_414;
        do {
          pcVar10 = pcVar11;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar10 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar10;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar10 + -uVar8;
        pcVar11 = pcVar6;
        for (uVar9 = uVar8 >> 2; pcVar11 = pcVar11 + 4, uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        pcVar6[0x24] = '\0';
        pcVar6[0x25] = '\0';
        pcVar6[0x26] = '\0';
        pcVar6[0x27] = '\0';
        pcVar6[0x28] = '\0';
        pcVar6[0x29] = '\0';
        pcVar6[0x2a] = '\0';
        pcVar6[0x2b] = '\0';
        pcVar11 = pcVar6 + 0x2c;
        for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar11[0] = '\0';
          pcVar11[1] = '\0';
          pcVar11[2] = '\0';
          pcVar11[3] = '\0';
          pcVar11 = pcVar11 + 4;
        }
        if (bVar2) {
          pbVar5 = (byte_conflict *)(*g_engfuncs.pfnInfoKeyValue)(acStack_3f4,s_minplayers_1009ff4c)
          ;
          if ((pbVar5 != (byte_conflict *)0x0) && (*pbVar5 != '\0')) {
            uVar8 = atoi(this,pbVar5);
            *(uint *)(pcVar6 + 0x24) = uVar8;
            uVar8 = uVar8 & ((int)uVar8 < 1) - 1;
            *(uint *)(pcVar6 + 0x24) = uVar8;
            if (gpGlobals->maxClients <= (int)uVar8) {
              uVar8 = gpGlobals->maxClients;
            }
            *(uint *)(pcVar6 + 0x24) = uVar8;
          }
          pbVar5 = (byte_conflict *)(*g_engfuncs.pfnInfoKeyValue)(acStack_3ec,s_maxplayers_1009ff40)
          ;
          if ((pbVar5 != (byte_conflict *)0x0) && (*pbVar5 != '\0')) {
            uVar8 = atoi(this_00,pbVar5);
            *(uint *)(pcVar6 + 0x28) = uVar8;
            uVar8 = uVar8 & ((int)uVar8 < 1) - 1;
            *(uint *)(pcVar6 + 0x28) = uVar8;
            if (gpGlobals->maxClients <= (int)uVar8) {
              uVar8 = gpGlobals->maxClients;
            }
            *(uint *)(pcVar6 + 0x28) = uVar8;
          }
          (*g_engfuncs.pfnInfo_RemoveKey)(acStack_3e4,s_minplayers_1009ff4c);
          pcVar12 = s_maxplayers_1009ff40;
          (*g_engfuncs.pfnInfo_RemoveKey)(acStack_3dc,s_maxplayers_1009ff40);
          uVar8 = 0xffffffff;
          pcVar11 = acStack_3d4;
          do {
            pcVar10 = pcVar11;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar10 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar10;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar11 = pcVar10 + -uVar8;
          pcVar10 = pcVar6 + 0x2c;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
        }
        *(undefined4 *)pcVar6 = *in_stack_00000010;
        *in_stack_00000010 = pcVar6;
        pbVar5 = pbStack_424;
        pbStack_424 = (byte_conflict *)pcVar12;
      }
      goto LAB_1002c8e0;
    }
    (*g_engfuncs.pfnFreeFile)(pbVar4);
  }
  pbVar4 = (byte_conflict *)*in_stack_00000014;
  while (pbVar5 = pbVar4, pbVar5 != (byte_conflict *)0x0) {
    pbVar4 = *(byte_conflict **)pbVar5;
    *(byte_conflict **)pbVar5 = pbStack_424;
    pbStack_424 = pbVar5;
  }
  *in_stack_00000014 = pbStack_424;
  if (pbStack_424 == (byte_conflict *)0x0) {
    return 0;
  }
  pbVar5 = *(byte_conflict **)pbStack_424;
  pbVar4 = pbStack_424;
  while (pbVar3 = pbVar5, pbVar3 != (byte_conflict *)0x0) {
    pbVar4 = pbVar3;
    pbVar5 = *(byte_conflict **)pbVar3;
  }
  *(byte_conflict **)pbVar4 = pbStack_424;
  in_stack_00000014[1] = pbStack_424;
  return 1;
}

/* 1002d1f0  path_corner  (12 bytes)
 * undefined path_corner(int param_1)
 */
void __cdecl path_corner(int param_1)

{
                    /* 0x2d1f0  278  path_corner */
  GetClassPtr<CPathCorner>(param_1);
  return;
}

/* 1002d330  path_track  (12 bytes)
 * undefined path_track(int param_1)
 */
void __cdecl path_track(int param_1)

{
                    /* 0x2d330  279  path_track */
  GetClassPtr<CPathTrack>(param_1);
  return;
}

/* 1002dd20  GetClassPtr<CPathCorner>  (76 bytes)
 * undefined GetClassPtr<CPathCorner>(int param_1)
 * called by: path_corner
 */
void __cdecl GetClassPtr<CPathCorner>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CPathCorner::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002dd80  GetClassPtr<CPathTrack>  (76 bytes)
 * undefined GetClassPtr<CPathTrack>(int param_1)
 * called by: path_track
 */
void __cdecl GetClassPtr<CPathTrack>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x68), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CPathTrack::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002e370  func_plat  (12 bytes)
 * undefined func_plat(int param_1)
 */
void __cdecl func_plat(int param_1)

{
                    /* 0x2e370  217  func_plat */
  GetClassPtr<CFuncPlat>(param_1);
  return;
}

/* 1002e6b0  PlatSpawnInsideTrigger  (32 bytes)
 * undefined PlatSpawnInsideTrigger(int param_1)
 * called by: CFuncPlat::Precache
 */
void __cdecl PlatSpawnInsideTrigger(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = GetClassPtr<CFuncPlat>(param_1);
  this = (void *)FUN_10032750(0);
  FUN_1002e6d0(this,iVar1);
  return;
}

/* 1002ec90  func_platrot  (12 bytes)
 * undefined func_platrot(int param_1)
 */
void __cdecl func_platrot(int param_1)

{
                    /* 0x2ec90  218  func_platrot */
  GetClassPtr<CFuncPlatRot>(param_1);
  return;
}

/* 1002f010  func_train  (12 bytes)
 * undefined func_train(int param_1)
 */
void __cdecl func_train(int param_1)

{
                    /* 0x2f010  231  func_train */
  GetClassPtr<CFuncTrain>(param_1);
  return;
}

/* 1002fa40  func_tracktrain  (12 bytes)
 * undefined func_tracktrain(int param_1)
 */
void __cdecl func_tracktrain(int param_1)

{
                    /* 0x2fa40  230  func_tracktrain */
  GetClassPtr<CFuncTrackTrain>(param_1);
  return;
}

/* 100312f0  func_traincontrols  (12 bytes)
 * undefined func_traincontrols(int param_1)
 */
void __cdecl func_traincontrols(int param_1)

{
                    /* 0x312f0  232  func_traincontrols */
  GetClassPtr<CFuncTrainControls>(param_1);
  return;
}

/* 10031470  func_trackchange  (12 bytes)
 * undefined func_trackchange(int param_1)
 */
void __cdecl func_trackchange(int param_1)

{
                    /* 0x31470  229  func_trackchange */
  GetClassPtr<CFuncTrackChange>(param_1);
  return;
}

/* 10032030  func_trackautochange  (12 bytes)
 * undefined func_trackautochange(int param_1)
 */
void __cdecl func_trackautochange(int param_1)

{
                    /* 0x32030  228  func_trackautochange */
  GetClassPtr<CFuncTrackAuto>(param_1);
  return;
}

/* 10032230  func_guntarget  (12 bytes)
 * undefined func_guntarget(int param_1)
 */
void __cdecl func_guntarget(int param_1)

{
                    /* 0x32230  211  func_guntarget */
  GetClassPtr<CGunTarget>(param_1);
  return;
}

/* 100326f0  GetClassPtr<CFuncPlat>  (79 bytes)
 * undefined GetClassPtr<CFuncPlat>(int param_1)
 * called by: PlatSpawnInsideTrigger, func_plat
 */
void __cdecl GetClassPtr<CFuncPlat>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x100),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncPlat::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100327a0  GetClassPtr<CFuncPlatRot>  (79 bytes)
 * undefined GetClassPtr<CFuncPlatRot>(int param_1)
 * called by: func_platrot
 */
void __cdecl GetClassPtr<CFuncPlatRot>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x118),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncPlatRot::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100327f0  GetClassPtr<CFuncTrain>  (79 bytes)
 * undefined GetClassPtr<CFuncTrain>(int param_1)
 * called by: func_train
 */
void __cdecl GetClassPtr<CFuncTrain>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x104),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTrain::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10032840  GetClassPtr<CFuncTrackTrain>  (79 bytes)
 * undefined GetClassPtr<CFuncTrackTrain>(int param_1)
 * called by: func_tracktrain
 */
void __cdecl GetClassPtr<CFuncTrackTrain>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x9c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTrackTrain::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100328a0  GetClassPtr<CFuncTrainControls>  (76 bytes)
 * undefined GetClassPtr<CFuncTrainControls>(int param_1)
 * called by: func_traincontrols
 */
void __cdecl GetClassPtr<CFuncTrainControls>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTrainControls::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100328f0  GetClassPtr<CFuncTrackChange>  (79 bytes)
 * undefined GetClassPtr<CFuncTrackChange>(int param_1)
 * called by: func_trackchange
 */
void __cdecl GetClassPtr<CFuncTrackChange>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x13c),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTrackChange::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10032940  GetClassPtr<CFuncTrackAuto>  (163 bytes)
 * undefined GetClassPtr<CFuncTrackAuto>(int param_1)
 * called by: func_trackautochange
 */
void __cdecl GetClassPtr<CFuncTrackAuto>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_10088dc1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) &&
     (ExceptionList = &pvStack_c, peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0
     )) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x13c),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    pcStack_8 = (code *)puVar3;
    FUN_10032a60(puVar3);
    *puVar3 = &CFuncTrackAuto::vftable;
    puVar3[1] = param_1;
    ExceptionList = pvStack_4;
    return;
  }
  iRam00000004 = peVar1;
  ExceptionList = pvStack_c;
  return;
}

