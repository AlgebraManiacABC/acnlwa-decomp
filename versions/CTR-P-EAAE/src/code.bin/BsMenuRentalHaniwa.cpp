#include "acnlwa/BsMenuRentalHaniwa.h"
#include "types.h"

extern "C" {
int FUN_0026ea88(...);
int FUN_0029b5c4(...);
int FUN_002b7598(...);
int FUN_0031e8bc(...);
}

BsMenuRentalHaniwa::~BsMenuRentalHaniwa() {}

unsigned int BsMenuRentalHaniwa::Process_VF03() {}

unsigned int BsMenuRentalHaniwa::Process_VF06() {}

unsigned int BsMenuRentalHaniwa::Process_VF09() {}

// was FUN_002dd444
unsigned int BsMenuRentalHaniwa::Process_VF12()
{
  int param_1 = (int)this;
  FUN_0031e8bc(param_1 + 0xad54);
  FUN_0026ea88(param_1 + 0x27d4);
  FUN_002b7598(param_1 + 0x4c);
  FUN_0029b5c4(param_1 + 0xac3c);
  return 2;
}

