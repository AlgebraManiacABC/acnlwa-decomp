#include "../../../include/types.h"

void FUN_0021ca24(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007234f8(param_1 + 0x1494);
  if (iVar1 == 1) {
    DAT_0094fd38 = (**(code **)(**(int **)(param_1 + 0x1fdc) + 0x20))();
  }
  else {
    DAT_0094fd38 = 0xffffffff;
  }
  DAT_0094fd2b = iVar1 == 1;
  FUN_001323b4(param_1 + 0x298);
}
