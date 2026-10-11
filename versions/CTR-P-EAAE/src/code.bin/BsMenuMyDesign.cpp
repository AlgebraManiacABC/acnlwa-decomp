#include "acnlwa/BsMenuMyDesign.h"
#include "types.h"

extern "C" {
int FUN_001323bc(...);
int FUN_0029b5c4(...);
int FUN_002ba3cc(...);
int FUN_0031e8bc(...);
int FUN_00569e6c(...);
}

BsMenuMyDesign::~BsMenuMyDesign() {}

unsigned int BsMenuMyDesign::Process_VF03() {}

unsigned int BsMenuMyDesign::Process_VF06() {}

unsigned int BsMenuMyDesign::Process_VF09() {}

// was FUN_0025a408
unsigned int BsMenuMyDesign::Process_VF12()
{
  int param_1 = (int)this;
  undefined4 uVar1;
  
  FUN_0031e8bc(param_1 + 0x3b7c);
  FUN_002ba3cc(param_1 + 0x22b4);
  FUN_002ba3cc(param_1 + 0x2f18);
  FUN_0029b5c4(param_1 + 0x464);
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x310,1);
  return 2;
}

void BsMenuMyDesign::MenuBase_VF17() {}

