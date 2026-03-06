/**
 * FUN_003232a8.c
 * Source line: 425709
 * Body lines: 4
 */
#include "../../../include/types.h"

bool FUN_003232a8(int param_1,uint param_2,undefined1 param_3)

{
  if (param_2 < 0x10) {
    *(undefined1 *)(param_1 + param_2 + 0x40) = param_3;
  }
  return param_2 < 0x10;
}
