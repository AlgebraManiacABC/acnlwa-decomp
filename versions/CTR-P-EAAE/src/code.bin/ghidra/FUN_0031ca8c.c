#include "../../../include/types.h"

void FUN_0031ca8c(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  (**(code **)(param_1[iVar1 * 0xdb + 0x622] + 0x60))();
  return;
}
