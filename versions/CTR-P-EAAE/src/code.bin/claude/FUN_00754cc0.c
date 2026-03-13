/**
 * FUN_00754cc0.c
 * Source line: 1110467
 * Body lines: 1
 */
#include "../../../include/types.h"

bool FUN_00754cc0(int param_1,uint param_2)

{
  return ((uint)*(byte *)(param_1 + 0xf) & 1 << (param_2 & 0xff)) != 0;
}
