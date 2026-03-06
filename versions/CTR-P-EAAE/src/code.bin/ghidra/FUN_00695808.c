/**
 * FUN_00695808.c
 * Source line: 999031
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00695808(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = &DAT_0090af54;
  local_18 = 0;
  piVar2 = *(int **)(param_1 + 0xeb58);
  local_1c = param_2;
  for (piVar1 = *(int **)(param_1 + 0xeb54); piVar1 != piVar2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      (*(code *)*local_20)(&local_20);
    }
  }
  return local_18;
}
