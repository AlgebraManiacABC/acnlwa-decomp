/**
 * FUN_006d4608.c
 * Source line: 1033775
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006d4608(int param_1)

{
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_005204b0();
  }
  FUN_005204b0(*(undefined4 *)(param_1 + 0x1d8));
  FUN_005204b0(*(undefined4 *)(param_1 + 0x1dc));
  FUN_005204b0(*(undefined4 *)(param_1 + 500));
  if (*(int *)(param_1 + 0x1f8) != 0) {
    FUN_005204b0();
  }
  DAT_0094fd3c = 0;
  return 2;
}
