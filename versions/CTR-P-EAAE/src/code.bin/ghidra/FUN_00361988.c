#include "../../../include/types.h"

void FUN_00361988(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(code **)(param_1 + -8) != NULL) {
    (**(code **)(param_1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
