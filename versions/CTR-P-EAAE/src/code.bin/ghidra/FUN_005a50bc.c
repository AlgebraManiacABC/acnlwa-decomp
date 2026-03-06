/**
 * FUN_005a50bc.c
 * Source line: 853261
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005a50bc(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x68) = (param_2 & 0x1f) << 7 | *(uint *)(param_1 + 0x68) & 0xfffff07f;
  return;
}
