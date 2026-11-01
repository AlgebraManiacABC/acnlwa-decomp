#include "../../../include/types.h"

void FUN_004ba048(int param_1,undefined4 *param_2)

{
  FUN_001408d4(param_1 + 4,param_2 + 1);
  if (param_2 != NULL) {
    (**(code **)*param_2)(param_2);
    (**(code **)(*piRam00975138 + 0xc))(piRam00975138,param_2);
    return;
  }
  return;
}
