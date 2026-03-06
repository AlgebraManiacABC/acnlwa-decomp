/**
 * FUN_004b4ba8.c
 * Source line: 693403
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004b4ba8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)(param_1 + 0x10)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x3c))((int *)piVar1[2],param_2,param_3,param_4);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(param_1 + 0x10));
  }
  return;
}
