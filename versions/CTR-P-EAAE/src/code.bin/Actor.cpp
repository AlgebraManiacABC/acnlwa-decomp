#include "acnlwa/Actor.h"
#include "types.h"

extern "C" {
int FUN_00529d78(...);
int FUN_00529d8c(...);
int FUN_00529da0(...);
}

Actor::~Actor() {}

// was FUN_0057ba40
bool Actor::Process_VF02()
{
  int iVar1;
  
  iVar1 = FUN_00529d8c();
  return iVar1 != 0;
}

void Actor::Process_VF04() {}

// was FUN_0057ba54
bool Actor::Process_VF05()
{
  int iVar1;
  
  iVar1 = FUN_00529da0();
  return iVar1 != 0;
}

void Actor::Process_VF07() {}

bool Actor::Process_VF08() {}

void Actor::Process_VF10() {}

// was FUN_0057ba2c
bool Actor::Process_VF11()
{
  int iVar1;
  
  iVar1 = FUN_00529d78();
  return iVar1 != 0;
}

void Actor::Process_VF13() {}

void Actor::Base_VF15() {}

void Actor::Actor_VF16() {}

