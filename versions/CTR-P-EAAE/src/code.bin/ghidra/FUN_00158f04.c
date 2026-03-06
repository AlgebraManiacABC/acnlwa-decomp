/**
 * FUN_00158f04.c
 * Source line: 171687
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_00158f04(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = param_2;
  *(uint *)(param_1 + 0x18) = param_2 >> 3;
  *(char *)(param_1 + 0x10) = (char)(1 << (param_2 & 7));
  return;
}
