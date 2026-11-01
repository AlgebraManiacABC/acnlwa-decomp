#include "../../../include/types.h"

void FUN_0018c1c0(int param_1,ItemID param_2,undefined4 param_3,int param_4)

{
  ItemID *pIVar1;
  
  if ((*(char *)(param_1 + 0x8dc) != '\0') && (pIVar1 = FUN_005359fc(0x2f), param_2 < pIVar1[1])) {
    FUN_00584074();
  }
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0x8dd) = 0xff;
    *(undefined1 *)(param_1 + 0x8de) = 0xff;
  }
  return;
}
