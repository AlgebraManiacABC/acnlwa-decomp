#include "../../../include/types.h"

void FUN_003b94ac(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  (**(code **)(*piVar1 + 8))(piVar1);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return;
  }
  return;
}
