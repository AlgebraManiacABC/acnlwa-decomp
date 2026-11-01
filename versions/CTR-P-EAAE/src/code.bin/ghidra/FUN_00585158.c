#include "../../../include/types.h"

void FUN_00585158(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) == '\"') {
    piVar1 = *(int **)(param_1 + 8);
    piVar1[5] = 8;
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}
