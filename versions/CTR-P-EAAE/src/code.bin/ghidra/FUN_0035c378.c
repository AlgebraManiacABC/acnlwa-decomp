#include "../../../include/types.h"

void FUN_0035c378(void)

{
  int iVar1;
  
  iVar1 = FUN_0035c3a8();
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
