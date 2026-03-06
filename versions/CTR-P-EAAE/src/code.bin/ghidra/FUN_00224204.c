/**
 * FUN_00224204.c
 * Source line: 279693
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00224204(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x2934);
  if (*piVar1 < 0x1c) {
    *(undefined4 *)(param_1 + *piVar1 * 8 + 0x1cd8) = param_3;
    *(undefined1 *)(param_1 + *piVar1 * 8 + 0x1cdc) = param_5;
    *(undefined1 *)(param_1 + *piVar1 * 8 + 0x1cdd) = param_4;
    *piVar1 = *piVar1 + 1;
  }
  return;
}
