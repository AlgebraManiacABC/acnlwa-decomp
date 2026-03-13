/**
 * FUN_005aa4d4.c
 * Source line: 856839
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005aa4d4(uint *param_1,int param_2)

{
  *param_1 = *param_1 & 0x3ffff | param_2 << 0x12;
  return;
}
