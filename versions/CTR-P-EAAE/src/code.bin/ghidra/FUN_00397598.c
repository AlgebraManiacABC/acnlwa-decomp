#include "../../../include/types.h"

void FUN_00397598(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  (**(code **)(*piVar1 + 8))(piVar1);
  FUN_0035ae18(param_1);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
