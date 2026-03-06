/**
 * FUN_002f7d30.c
 * Source line: 390133
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002f7d30(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[6];
  if ((*param_1 & 1) == 0) {
    return;
  }
  while (uVar1 -= 1, -1 < (int)uVar1) {
    (*(code *)param_1[1])(0x20,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}
