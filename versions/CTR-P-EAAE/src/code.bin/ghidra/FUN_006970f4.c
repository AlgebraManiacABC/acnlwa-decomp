/**
 * FUN_006970f4.c
 * Source line: 999820
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006970f4(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *local_18;
  
  local_18 = &DAT_008f4028;
  piVar2 = *(int **)(param_1 + 0xeb58);
  for (piVar1 = *(int **)(param_1 + 0xeb54); piVar1 != piVar2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      (*(code *)*local_18)(&local_18);
    }
  }
  if (DAT_00950694 != 0) {
    FUN_00226750();
  }
  return;
}
