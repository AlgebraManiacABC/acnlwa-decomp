/**
 * FUN_007206b8.c
 * Source line: 1077689
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_007206b8(char *param_1,uint param_2,uint param_3)

{
  if (param_3 < 0x60) {
    param_1 = param_1 + param_3 * 0x70;
  }
  if (param_2 < 0x70) {
    param_1 = param_1 + param_2;
  }
  return *param_1 != -1;
}
