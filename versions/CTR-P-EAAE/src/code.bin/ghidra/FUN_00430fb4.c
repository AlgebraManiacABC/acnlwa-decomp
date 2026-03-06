/**
 * FUN_00430fb4.c
 * Source line: 597385
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_00430fb4(int *param_1)

{
  (**(code **)(**(int **)(iRam00974a64 + 8) + 0x14))();
          // WARNING: Could not recover jumptable at 0x00430fe4. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}
