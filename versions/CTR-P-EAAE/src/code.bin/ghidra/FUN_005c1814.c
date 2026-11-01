#include "../../../include/types.h"

void FUN_005c1814(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005c33d0();
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x5c))();
    return;
  }
  return;
}
