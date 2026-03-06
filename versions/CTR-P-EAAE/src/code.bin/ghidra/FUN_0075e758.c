/**
 * FUN_0075e758.c
 * Source line: 1118856
 * Body lines: 5
 */
#include "../../../include/types.h"

bool FUN_0075e758(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 < 6) && (uVar1 = 1 << (param_2 & 0xff), (uVar1 & 0x1f) != 0)) {
    return ((uint)*(byte *)(param_1 + 6) & uVar1 & 0xff) != 0;
  }
  return false;
}
