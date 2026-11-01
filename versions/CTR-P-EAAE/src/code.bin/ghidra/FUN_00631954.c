#include "../../../include/types.h"

void FUN_00631954(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0076054c(param_1,0xffffffff);
  if ((iVar1 != 0) && (param_1[0x40b] != 0 && param_1[0x40b] != -0x38)) {
    FUN_0051f58c();
    (**(code **)(*param_1 + 0x1a0))(param_1);
    return;
  }
  return;
}
