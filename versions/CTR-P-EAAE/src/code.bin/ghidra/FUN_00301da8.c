/**
 * FUN_00301da8.c
 * Source line: 399502
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 FUN_00301da8(uint param_1)

{
  if (((param_1 & 3) == 0) && (((int)param_1 % 100 != 0 || ((param_1 & 0xf) == 0)))) {
    return 1;
  }
  return 0;
}
