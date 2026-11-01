#include "../../../include/types.h"

void FUN_005e47c4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  if (iVar1 != 0) {
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  return;
}
