/**
 * FUN_00537028.c
 * Source line: 778360
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00537028(int param_1)

{
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_006aac18(param_1);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  FUN_002f73b8(param_1);
  return;
}
