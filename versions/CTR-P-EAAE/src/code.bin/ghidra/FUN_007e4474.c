/**
 * FUN_007e4474.c
 * Source line: 1188543
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_007e4474(uint param_1)

{
  bool bVar1;
  
  bVar1 = (param_1 & 0x3fc00) == 0x18400;
  if (bVar1) {
    param_1 &= 0x3ff;
  }
  return bVar1 && param_1 == 600;
}
