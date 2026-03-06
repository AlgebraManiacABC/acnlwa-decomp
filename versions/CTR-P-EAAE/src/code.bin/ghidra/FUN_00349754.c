/**
 * FUN_00349754.c
 * Source line: 446319
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_00349754(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x23c;
  }
  else {
    uVar1 = 0x23d;
  }
  *param_1 = 1;
  param_1[1] = uVar1 | 0xf0000;
  return param_1 + 2;
}
