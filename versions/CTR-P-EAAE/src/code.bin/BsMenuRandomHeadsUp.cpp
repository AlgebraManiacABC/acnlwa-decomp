#include "acnlwa/BsMenuRandomHeadsUp.h"
#include "types.h"

extern "C" {
int FUN_001323bc(...);
int FUN_00569e6c(...);
}

BsMenuRandomHeadsUp::~BsMenuRandomHeadsUp() {}

unsigned int BsMenuRandomHeadsUp::Process_VF03() {}

unsigned int BsMenuRandomHeadsUp::Process_VF06() {}

unsigned int BsMenuRandomHeadsUp::Process_VF09() {}

// was FUN_002f2f2c
unsigned int BsMenuRandomHeadsUp::Process_VF12()
{
  int param_1 = (int)this;
  undefined4 uVar1;
  
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x280,1);
  return 2;
}

