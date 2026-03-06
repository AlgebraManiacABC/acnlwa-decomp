/**
 * FUN_005205ec.c
 * Source line: 764032
 * Body lines: 1
 */
#include "../../../include/types.h"

bool FUN_005205ec(int param_1,uint param_2)

{
  return (param_2 & ~(uint)*(byte *)(param_1 + 0x1142d)) == 0;
}
