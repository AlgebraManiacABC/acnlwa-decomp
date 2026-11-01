#include "../../../include/types.h"

void FUN_007e35cc(void)

{
  int iVar1;
  
  iVar1 = FUN_007e35fc();
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
