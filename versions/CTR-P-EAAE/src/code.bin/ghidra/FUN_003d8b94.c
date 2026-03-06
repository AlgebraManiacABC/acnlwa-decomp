/**
 * FUN_003d8b94.c
 * Source line: 549537
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_003d8b94(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (cRam0096b901 != '\0') {
    (**(code **)(*(int *)(param_1 + 0x78) + 8))();
    FUN_003d8e18(param_1,param_2,param_3);
          // WARNING: Could not recover jumptable at 0x003d8be8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
    return;
  }
  FUN_003d8e18(param_1);
  return;
}
