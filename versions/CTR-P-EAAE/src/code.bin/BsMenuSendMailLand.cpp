#include "acnlwa/BsMenuSendMailLand.h"
#include "types.h"

extern "C" {
int FUN_00273ba8(...);
int FUN_0029b5c4(...);
int FUN_002ba3cc(...);
int FUN_0031e8bc(...);
int FUN_0031f7f0(...);
}

BsMenuSendMailLand::~BsMenuSendMailLand() {}

unsigned int BsMenuSendMailLand::Process_VF03() {}

unsigned int BsMenuSendMailLand::Process_VF06() {}

unsigned int BsMenuSendMailLand::Process_VF09() {}

// was FUN_002deecc
unsigned int BsMenuSendMailLand::Process_VF12()
{
  int param_1 = (int)this;
  FUN_0031f7f0(param_1 + 0x2c40);
  FUN_00273ba8(param_1 + 0x4c);
  FUN_0031e8bc(param_1 + 0x4f30);
  FUN_002ba3cc(param_1 + 0x5420);
  FUN_0029b5c4(param_1 + 0x4e18);
  return 2;
}

