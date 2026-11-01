#include "../../../include/types.h"

void FUN_004c4880(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1[3],param_2);
    return;
  }
  return;
}
