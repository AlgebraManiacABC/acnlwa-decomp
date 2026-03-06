/**
 * FUN_005445e4.c
 * Source line: 787360
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005445e4(undefined4 *param_1)

{
  *param_1 = &UNK_00904734;
  if ((int *)param_1[0x14] != NULL) {
    (**(code **)(*(int *)param_1[0x14] + 4))();
    param_1[0x14] = 0;
  }
  FUN_0053e958(param_1);
  return;
}
