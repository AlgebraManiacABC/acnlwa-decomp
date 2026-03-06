/**
 * FUN_0049f998.c
 * Source line: 676170
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0049f998(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[0xf];
  if ((~uVar1 & 0x10) != 0) {
    if ((*param_1 == 0x3f800000) && (param_1[5] == 0x3f800000)) {
      uVar1 |= 0x80;
    }
    else {
      uVar1 &= 0xffffff7f;
    }
    param_1[0xf] = uVar1;
  }
  return;
}
