/* mp.dll - Vector (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000c120  Vector::Vector  (25 bytes)
 * undefined Vector(undefined4 * param_1)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonReturn, CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp, CBaseEntity::TakeDamage, CBaseEntity::TraceAttack, CBaseMonster::TakeDamage, CBaseMonster::TraceAttack, CBasePlayer::DropFlag, CBasePlayer::PlayerDeathThink, CBasePlayer::Restore, CBasePlayer::ShootBulletsPlayer, ... (106 total)
 */
/* copy constructor */

void __thiscall Vector::Vector(Vector *this,undefined4 *param_1)

{
  this->x = (float)*param_1;
  this->y = (float)param_1[1];
  this->z = (float)param_1[2];
  return;
}

/* 1000e880  Vector::Vector  (25 bytes)
 * undefined Vector(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: CBaseDoor::DoorGoUp, CBaseEntity::TakeDamage, CBaseMonster::TakeDamage, CBasePlayer::DropFlag, CBasePlayer::PlayerDeathThink, CBasePlayer::ShootBulletsPlayer, CBasePlayer::ThrowWeapon, CBotModuleAttack::Think, CBotModuleLookAround::FindLookPoint, CBotNav::GetSteerPoint, CBotNav::RandomWanderPoint, CBreakable::TraceAttack, ... (43 total)
 */
/* Vector(x, y, z) */

void __thiscall Vector::Vector(Vector *this,float param_1,float param_2,float param_3)

{
  this->x = param_1;
  this->y = param_2;
  this->z = param_3;
  return;
}

/* 1000e8a0  Vector::operator+  (51 bytes)
 * undefined operator+(float * param_1, float * param_2)
 * called by: CBaseEntity::TakeDamage, CBasePlayer::ThrowWeapon, CBotNav::GetSteerPoint, CFuncTrain::Next, CGunTarget::Next, CTSGun::AlternateAttack, FUN_10021260, FUN_10056740, FUN_10057210, FUN_10058b30, FUN_1006a740
 */
void __thiscall Vector::operator+(Vector *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = this->y;
  fVar3 = param_2[2];
  fVar4 = this->z;
  *param_1 = *param_2 + this->x;
  param_1[1] = fVar1 + fVar2;
  param_1[2] = fVar3 + fVar4;
  return;
}

/* 1000e8e0  Vector::operator*  (51 bytes)
 * undefined operator*(float * param_1, float param_2)
 * called by: CBaseDoor::DoorGoUp, CBaseEntity::TakeDamage, CBasePlayer::ThrowWeapon, CBotNav::GetSteerPoint, CFuncTrain::Next, CGibShooter::ShootThink, CGunTarget::Next, CM61Grenade::WaitThink, CTSGun::AlternateAttack, CTSKnife::WaitThink, FUN_10014f00, FUN_10021260, ... (17 total)
 */
/* Vector * float */

void __thiscall Vector::operator*(Vector *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->y;
  fVar2 = this->z;
  *param_1 = param_2 * this->x;
  param_1[1] = param_2 * fVar1;
  param_1[2] = param_2 * fVar2;
  return;
}

/* 1000e920  Vector::Length  (33 bytes)
 * float10 Length(float * param_1)
 * called by: CBaseEntity::TakeDamage, CBotModuleAttack::Think, CBreakable::Use, CTSFlag::Fall, CTSKnife::BounceTouch, CTSWorldGun::Fall, CTriggerHurt::RadiationThink, FUN_1001a3c0, FUN_10056d80, FUN_10065f40
 */
float10 __fastcall Vector::Length(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}

