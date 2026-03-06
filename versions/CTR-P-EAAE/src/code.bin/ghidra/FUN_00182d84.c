/**
 * FUN_00182d84.c
 * Source line: 199130
 * Body lines: 8
 */
#include "../../../include/types.h"

Item_t * FUN_00182d84(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  Item_t local_10 [2];
  
  Item_Clear(local_10);
  uVar1 = param_2[1];
  local_10[0] = *(Item_t *)(param_2 + 2);
  FUN_00563b8c((uVar1 << 8) >> 0x18,*param_2 & 0xff,uVar1 & 0xff,(uVar1 << 0x10) >> 0x18,
               *param_2 >> 8,local_10,uVar1 >> 0x18,0);
  return local_10;
}
