/**
 * FUN_00700198.c
 * Source line: 1057101
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_00700198(uint param_1)

{
  if (param_1 == 4) {
    param_1 = FUN_002ff8b0();
  }
  if (3 < param_1) {
    if ((uRam00952c08 & 1) == 0) {
      FUN_002fe7dc(0x952c08);
    }
    uRam00952c10 = 0;
    uRam00952c12 = 0;
    uRam00952c14 = 0;
    return 0x952c10;
  }
  return param_1 * 6 + 0xa14b30;
}
