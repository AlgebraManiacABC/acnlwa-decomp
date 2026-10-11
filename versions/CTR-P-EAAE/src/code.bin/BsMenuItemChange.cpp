#include "acnlwa/BsMenuItemChange.h"
#include "types.h"

extern "C" {
int FUN_0022bcec(...);
int FUN_0026f6fc(...);
int FUN_002ba5f0(...);
int FUN_0031eb20(...);
int FUN_004b6dbc(...);
}

BsMenuItemChange::~BsMenuItemChange() {}

unsigned int BsMenuItemChange::Process_VF03() {}

// was FUN_002af6a4
unsigned int BsMenuItemChange::Process_VF06()
{
  int param_1 = (int)this;
  if (*(int *)(param_1 + 0xa1c8) != 7) {
    FUN_004b6dbc(param_1 + 0xa078);
  }
  FUN_0026f6fc(param_1 + 0xf4);
  FUN_0031eb20(param_1 + 0x855c);
  FUN_002ba5f0(param_1 + 0x8a4c);
  FUN_0022bcec(param_1 + 0x96b0);
  return 2;
}

unsigned int BsMenuItemChange::Process_VF09() {}

unsigned int BsMenuItemChange::Process_VF12() {}

