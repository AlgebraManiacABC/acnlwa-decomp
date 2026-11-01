#include "../../../include/types.h"

void FUN_002d1c1c(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x1d;
  if (param_2 < 2) {
    piVar1 = param_1 + param_2 * 5 + 0x1d;
  }
  FUN_001b0544(piVar1,param_3);
  if (param_3 != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x34))(param_1[7],param_1,param_2);
  return;
}
