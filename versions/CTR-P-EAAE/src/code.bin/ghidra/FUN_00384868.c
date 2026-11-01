#include "../../../include/types.h"

void FUN_00384868(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10c4) = param_2;
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
