/**
 * FUN_00758e2c.c
 * Source line: 1114168
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00758e2c(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x14)) {
  default:
    return 0;
  case 1:
    return 300000;
  case 2:
    return 500000;
  case 3:
    return 1000000;
  case 4:
    return 2000000;
  }
}
