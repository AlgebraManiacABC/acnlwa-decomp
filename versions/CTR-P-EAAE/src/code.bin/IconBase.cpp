#include "acnlwa/IconBase.h"
#include "types.h"

extern "C" {
int FUN_001323bc(...);
int FUN_00569e6c(...);
}

IconBase::~IconBase() {}

void IconBase::VF02() {}

void IconBase::VF03() {}

// was FUN_006a8d7c
void IconBase::VF04()
{
  int param_1 = (int)this;
  undefined4 uVar1;
  
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x108,1);
  return;
}

void IconBase::VF05() {}

