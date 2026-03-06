/**
 * FUN_0057d55c.c
 * Source line: 824957
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0057d55c(int param_1)

{
  FUN_00580490(param_1,1);
  DAT_0094fd58 &= 0xffffffbf;
  *(undefined1 *)(param_1 + 0x11c5) = 1;
  if ((*(code **)(param_1 + 0xb0) == FUN_0057e024) && (*(int *)(param_1 + 0xb4) == 0)) {
    return;
  }
  FUN_005204b0(param_1);
  return;
}
