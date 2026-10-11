#include "acnlwa/BsMenuCoolbox.h"
#include "types.h"

extern "C" {
int FUN_00267758(...);
int FUN_0026ea88(...);
int FUN_0029b5c4(...);
int FUN_002ba3cc(...);
int FUN_0031e8bc(...);
}

BsMenuCoolbox::~BsMenuCoolbox() {}

unsigned int BsMenuCoolbox::Process_VF03() {}

unsigned int BsMenuCoolbox::Process_VF06() {}

unsigned int BsMenuCoolbox::Process_VF09() {}

// was FUN_0021df88
unsigned int BsMenuCoolbox::Process_VF12()
{
  int param_1 = (int)this;
  FUN_0031e8bc(param_1 + 0xced8);
  FUN_0026ea88(param_1 + 0x3cf4);
  FUN_00267758(param_1 + 0x4c);
  FUN_0029b5c4(param_1 + 0xc15c);
  FUN_002ba3cc(param_1 + 0xc274);
  return 2;
}

