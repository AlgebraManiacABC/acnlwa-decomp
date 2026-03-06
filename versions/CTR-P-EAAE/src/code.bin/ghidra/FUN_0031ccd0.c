/**
 * FUN_0031ccd0.c
 * Source line: 421946
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0031ccd0(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  param_1[0x61c] = 9;
  do {
    (**(code **)(*param_1 + 0x30))(param_1,param_1[0xf29] + uVar1);
    uVar1 += 1;
  } while (uVar1 < 10);
  return;
}
