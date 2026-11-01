#include "../../../include/types.h"

void FUN_00384a3c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  *(undefined1 *)(param_1 + 0x1086) = 1;
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
