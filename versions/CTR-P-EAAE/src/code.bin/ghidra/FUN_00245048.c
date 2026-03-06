/**
 * FUN_00245048.c
 * Source line: 296420
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00245048(undefined4 *param_1)

{
  *param_1 = &DAT_008fa35c;
  if (param_1 == DAT_0094cd0c) {
    DAT_0094cd0c = NULL;
    (**(code **)*DAT_0094cd08)();
    DAT_0094cd08 = NULL;
  }
  FUN_0013efb4(param_1);
  FUN_002ffb64();
  return;
}
