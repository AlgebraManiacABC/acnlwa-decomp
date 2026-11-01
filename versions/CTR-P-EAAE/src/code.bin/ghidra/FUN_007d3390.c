#include "../../../include/types.h"

void FUN_007d3390(void)

{
  int iVar1;
  
  iVar1 = FUN_003827d4();
  if (*(code **)(iVar1 + -8) != NULL) {
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
