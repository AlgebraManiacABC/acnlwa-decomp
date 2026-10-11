#include "acnlwa/BsMenuLetterEditer.h"
#include "types.h"

extern "C" {
int FUN_001323bc(...);
int FUN_00569e6c(...);
}

BsMenuLetterEditer::~BsMenuLetterEditer() {}

unsigned int BsMenuLetterEditer::Process_VF03() {}

unsigned int BsMenuLetterEditer::Process_VF06() {}

unsigned int BsMenuLetterEditer::Process_VF09() {}

// was FUN_002da74c
unsigned int BsMenuLetterEditer::Process_VF12()
{
  int param_1 = (int)this;
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x7a5) == '\x01') {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 0x50,1);
  }
  return 2;
}

