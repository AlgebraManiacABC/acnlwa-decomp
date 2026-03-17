/**
 * FUN_002e5a4c.c
 * Source line: 380728
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002e5a4c(undefined1 *param_1,uint param_2,uint param_3,undefined1 param_4)

{
  if (param_3 < 0x60) {
    param_1 = param_1 + param_3 * 0x70;
  }
  if (param_2 < 0x70) {
    param_1 = param_1 + param_2;
  }
  *param_1 = param_4;
  return;
}
