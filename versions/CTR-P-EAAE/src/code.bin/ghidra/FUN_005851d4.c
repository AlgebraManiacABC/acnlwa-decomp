#include "../../../include/types.h"

void FUN_005851d4(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) == '7') {
    piVar1 = *(int **)(param_1 + 8);
    piVar1[5] = 5;
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}
