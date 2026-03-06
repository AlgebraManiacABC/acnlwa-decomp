/**
 * FUN_005c5b7c.c
 * Source line: 874899
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_005c5b7c(uint param_1,uint param_2)

{
  byte *pbVar1;
  
  Item_Copy((Item_t *)((param_2 & 3) * 4 + 0xaaef34),(Item_t *)((param_1 & 3) * 4 + 0xaaef54));
  pbVar1 = (byte *)((param_2 & 3) + 0xaaf0dc);
  *pbVar1 = *pbVar1 | 1;
  return;
}
