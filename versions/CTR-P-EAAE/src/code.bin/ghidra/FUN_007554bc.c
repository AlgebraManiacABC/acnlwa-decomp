/**
 * FUN_007554bc.c
 * Source line: 1110982
 * Body lines: 1
 */
#include "../../../include/types.h"

bool FUN_007554bc(int param_1,uint param_2)

{
  return ((*(uint *)(param_1 + 0x28) & 0x1e00) >> 9 & 1 << (param_2 & 0xff)) != 0;
}
