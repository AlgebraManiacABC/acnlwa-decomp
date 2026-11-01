#include "../../../include/types.h"

void FUN_003d0b50(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 == 0;
  if (!bVar1) {
    param_1 += -4;
    bVar1 = param_1 == 0;
  }
  if (!bVar1) {
    if (*(code **)(param_1 + -8) != NULL) {
      (**(code **)(param_1 + -8))();
      return;
    }
    FUN_002f83b0();
    return;
  }
  return;
}
