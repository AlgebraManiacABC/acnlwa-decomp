/**
 * FUN_0072b0c0.c
 * Source line: 1083460
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0072b0c0(int *param_1,int *param_2)

{
  int *piVar1;
  int local_20 [4];
  
  piVar1 = param_1 + 0x417;
  (**(code **)(*piVar1 + 8))();
  (**(code **)(*param_1 + 0x40))(local_20,param_1);
  if (local_20[0] < 0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  *param_2 = param_1[0x423];
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return 1;
}
