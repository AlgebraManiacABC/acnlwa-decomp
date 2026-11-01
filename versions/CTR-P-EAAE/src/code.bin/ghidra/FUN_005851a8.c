#include "../../../include/types.h"

void FUN_005851a8(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) == '7') {
    piVar1 = *(int **)(param_1 + 8);
    piVar1[2] = 0x10000be;
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}
