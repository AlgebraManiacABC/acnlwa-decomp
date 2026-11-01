#include "../../../include/types.h"

void FUN_00361180(void)

{
  int iVar1;
  
  iVar1 = FUN_003611b0();
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
