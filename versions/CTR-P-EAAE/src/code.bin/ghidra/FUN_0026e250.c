/**
 * FUN_0026e250.c
 * Source line: 316786
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0026e250(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x8431) != '\0') {
          // WARNING: Could not recover jumptable at 0x0026e27c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)(param_1 + param_2 * 0x394 + 0x4410) + 0x60))();
    return;
  }
  param_1 += param_2 * 0x36c;
          // WARNING: Could not recover jumptable at 0x0026e298. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(param_1 + 0x890) + 0x60))(param_1 + 0x890);
  return;
}
