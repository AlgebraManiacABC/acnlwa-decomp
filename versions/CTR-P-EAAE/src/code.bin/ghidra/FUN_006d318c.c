/**
 * FUN_006d318c.c
 * Source line: 1032794
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_006d318c(Item_t *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_006d1ffc(0x4c,0);
  if (iVar1 != 0) {
    Item_Copy((Item_t *)0x94fd64,param_1);
    uRam0098c560 = *param_2;
    uRam0098c564 = param_2[1];
    uRam0098c568 = param_2[2];
  }
  return iVar1;
}
