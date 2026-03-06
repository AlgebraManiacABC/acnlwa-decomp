/**
 * FUN_006cbea8.c
 * Source line: 1028564
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_006cbea8(int param_1)

{
  if (param_1 - 0x12U < 0x30) {
    if (param_1 - 0x12U < 0x10) {
      return 0;
    }
    if (param_1 - 0x22U < 0x10) {
      return 1;
    }
    if (param_1 - 0x32U < 0x10) {
      return 2;
    }
  }
  return 3;
}
