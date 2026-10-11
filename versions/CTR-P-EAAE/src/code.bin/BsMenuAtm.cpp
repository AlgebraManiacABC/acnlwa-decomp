#include "acnlwa/BsMenuAtm.h"
#include "types.h"

extern "C" {
int FUN_0022bf34(...);
int FUN_006cd970(...);
int FUN_006d1e64(...);
int FUN_006f5b24(...);
}

BsMenuAtm::~BsMenuAtm() {}

unsigned int BsMenuAtm::Process_VF03() {}

// was FUN_006d1280
unsigned int BsMenuAtm::Process_VF06()
{
  int param_1 = (int)this;
  int iVar1;
  
  FUN_006cd970(param_1 + 0x4c);
  FUN_006f5b24(param_1 + 0xb78);
  FUN_0022bf34(param_1 + 0x2438);
  iVar1 = FUN_006d1e64();
  *(undefined1 *)(*(int *)(iVar1 + 500) + 0x4d7) = 0;
  return 2;
}

unsigned int BsMenuAtm::Process_VF09() {}

unsigned int BsMenuAtm::Process_VF12() {}

