/**
 * FUN_0031724c.c
 * Source line: 418354
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0031724c(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xeb58);
  for (piVar1 = *(int **)(param_1 + 0xeb54); piVar1 != piVar2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      (**(code **)*param_2)(param_2);
    }
  }
  return;
}
