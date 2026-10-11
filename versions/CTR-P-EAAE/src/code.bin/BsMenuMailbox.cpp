#include "acnlwa/BsMenuMailbox.h"
#include "types.h"

extern "C" {
int FUN_00273ba8(...);
int FUN_00274478(...);
int FUN_0029b5c4(...);
int FUN_002ba3cc(...);
int FUN_0031e8bc(...);
int FUN_0031f7f0(...);
}

BsMenuMailbox::~BsMenuMailbox() {}

unsigned int BsMenuMailbox::Process_VF03() {}

unsigned int BsMenuMailbox::Process_VF06() {}

unsigned int BsMenuMailbox::Process_VF09() {}

// was FUN_0021f5b0
unsigned int BsMenuMailbox::Process_VF12()
{
  int param_1 = (int)this;
  FUN_0031f7f0(param_1 + 0x2cbc);
  FUN_00274478(param_1 + 200);
  FUN_00273ba8(param_1 + 200);
  FUN_0031e8bc(param_1 + 0x4e94);
  FUN_002ba3cc(param_1 + 0x5384);
  FUN_0029b5c4(param_1 + 0x5fe8);
  return 2;
}

void BsMenuMailbox::MenuBase_VF17() {}

