/**
 * FUN_00393b50.c
 * Source line: 501317
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00393b50(undefined4 *param_1)

{
  int iVar1;
  
  param_1[9] = 0;
  *param_1 = &UNK_008fc620;
  FUN_003937f8(param_1);
  iVar1 = FUN_00378054(param_1);
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x00393b88. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
