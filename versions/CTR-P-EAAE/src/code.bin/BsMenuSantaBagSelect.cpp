#include "acnlwa/BsMenuSantaBagSelect.h"
#include "types.h"

extern "C" {
int FUN_0022bf34(...);
int FUN_00275798(...);
int FUN_006a3bd4(...);
}

BsMenuSantaBagSelect::~BsMenuSantaBagSelect() {}

unsigned int BsMenuSantaBagSelect::Process_VF03() {}

// was FUN_0031bfe4
unsigned int BsMenuSantaBagSelect::Process_VF06()
{
  int param_1 = (int)this;
  FUN_00275798(param_1 + 0x9a0);
  FUN_006a3bd4(param_1 + 0x50);
  FUN_0022bf34(param_1 + 0x3648);
  return 2;
}

unsigned int BsMenuSantaBagSelect::Process_VF09() {}

unsigned int BsMenuSantaBagSelect::Process_VF12() {}

