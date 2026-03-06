/**
 * FUN_00116e4e.c
 * Source line: 115867
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00116e4e(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < *param_1) {
    uVar1 = 1 << (param_2 & 0xff);
    if ((param_1[1] & uVar1) != 0) {
      param_1[1] = param_1[1] & ~uVar1;
      param_1[2] = param_1[2] - 1;
    }
  }
  return;
}
