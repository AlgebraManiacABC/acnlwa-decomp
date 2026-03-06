/**
 * FUN_002bb454.c
 * Source line: 356907
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002bb454(undefined1 *param_1,undefined4 param_2,undefined1 param_3)

{
  byte bVar1;
  
  *param_1 = param_3;
  param_1[1] = param_1[1] & 0xf0 | 1;
  bVar1 = FUN_00305f44();
  param_1[1] = param_1[1] & 0xcf | (bVar1 & 3) << 4;
  return;
}
