#include "../../../include/types.h"

void FUN_004f78d4(int *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x119) == '\0') {
    iVar1 = FUN_004fe968(param_1,2);
    if (iVar1 != 0) {
      param_1[4] = 0;
    }
    return;
  }
  (**(code **)(*param_1 + 0x10))(param_1,0,1);
  return;
}
