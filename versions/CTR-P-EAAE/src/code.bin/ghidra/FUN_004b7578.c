/**
 * FUN_004b7578.c
 * Source line: 695418
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004b7578(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  if ((*(byte *)((int)param_1 + 0xb7) & 1) != 0) {
    if (((*(byte *)((int)param_1 + 0xb6) & 0x10) == 0) || (*(char *)((int)param_1 + 0xb5) != '\0'))
    {
      (**(code **)(*param_1 + 100))(param_1);
    }
    piVar1 = (int *)param_1[5];
    if (piVar1 != param_1 + 5) {
      do {
        (**(code **)(piVar1[-1] + 0x60))(piVar1 + -1,param_2);
        piVar1 = (int *)*piVar1;
      } while (piVar1 != param_1 + 5);
    }
  }
  return;
}
