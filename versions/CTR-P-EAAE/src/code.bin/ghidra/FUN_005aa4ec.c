/**
 * FUN_005aa4ec.c
 * Source line: 856848
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005aa4ec(uint *param_1,uint param_2)

{
  *param_1 = param_2 & 0x3ffff | *param_1 & 0xfffc0000;
  return;
}
