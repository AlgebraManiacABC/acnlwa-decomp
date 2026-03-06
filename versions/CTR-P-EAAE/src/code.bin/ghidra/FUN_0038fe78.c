/**
 * FUN_0038fe78.c
 * Source line: 498263
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0038fe78(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (cRam0096b8f5 != '\0') {
    (**(code **)(*(int *)(param_1 + 0x18) + 8))();
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      do {
        (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
        piVar1 = (int *)piVar1[1];
      } while (piVar1 != *(int **)(param_1 + 0x10));
    }
          // WARNING: Could not recover jumptable at 0x0038feec. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)(param_1 + 0x18) + 0xc))((int *)(param_1 + 0x18));
    return;
  }
  return;
}
