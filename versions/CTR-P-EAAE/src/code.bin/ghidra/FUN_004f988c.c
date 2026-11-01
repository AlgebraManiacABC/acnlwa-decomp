#include "../../../include/types.h"

void FUN_004f988c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x28))(piVar1,0);
    (**(code **)(*piVar1 + 0x10))(piVar1);
    return;
  }
  return;
}
