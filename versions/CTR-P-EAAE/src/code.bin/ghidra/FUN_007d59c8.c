#include "../../../include/types.h"

void FUN_007d59c8(void)

{
  int iVar1;
  
  iVar1 = FUN_007d59f8();
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
