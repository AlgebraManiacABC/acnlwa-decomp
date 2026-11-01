#include "../../../include/types.h"

void FUN_00567a80(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 4); piVar1 != NULL; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x14))(piVar1);
  }
  return;
}
