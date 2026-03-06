/**
 * FUN_0075f1c4.c
 * Source line: 1119532
 * Body lines: 5
 */
#include "../../../include/types.h"

bool FUN_0075f1c4(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 < 6) && (uVar1 = 1 << (param_2 & 0xff), (uVar1 & 0x3f) != 0)) {
    return ((uint)*(byte *)(param_1 + 9) & uVar1 & 0xff) != 0;
  }
  return false;
}
