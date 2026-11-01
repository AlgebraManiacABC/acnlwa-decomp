#include "../../../include/types.h"

void FUN_00355fc8(void)

{
  int iVar1;
  
  iVar1 = FUN_00355ff8();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
