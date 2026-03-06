/**
 * FUN_0056bbdc.c
 * Source line: 813106
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 FUN_0056bbdc(uint param_1)

{
  if (((param_1 & 3) == 0) && (((int)param_1 % 100 != 0 || ((param_1 & 0xf) == 0)))) {
    return 0x16e;
  }
  return 0x16d;
}
