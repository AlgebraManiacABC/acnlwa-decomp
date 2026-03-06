/**
 * FUN_0076f354.c
 * Source line: 1132385
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0076f354(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x67bc) != 0) && ((int *)**(int **)(param_1 + 0x67c4) != NULL)) {
          // WARNING: Could not recover jumptable at 0x0076f380. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*(int *)**(int **)(param_1 + 0x67c4) + 0x78))();
    return uVar1;
  }
  return 0;
}
