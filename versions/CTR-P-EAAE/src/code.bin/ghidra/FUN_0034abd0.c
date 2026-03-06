/**
 * FUN_0034abd0.c
 * Source line: 447523
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_0034abd0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    *param_1 = 0;
    param_1[1] = &UNK_00200080;
    puVar1 = param_1 + 3;
    param_1[2] = 0;
    param_1 = param_1 + 4;
    *puVar1 = 0;
  }
  *param_1 = 0x13000;
  param_1[1] = 0xf0080;
  return param_1 + 2;
}
