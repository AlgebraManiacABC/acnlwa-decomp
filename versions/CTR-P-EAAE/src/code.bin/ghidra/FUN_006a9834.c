/**
 * FUN_006a9834.c
 * Source line: 1005449
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_006a9834(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  __rt_memclr_w(param_1 + 7,0xa00);
  iVar1 = FUN_00301d0c(param_1 + 7,FUN_0060d240,10,0x100);
  return iVar1 + -0x1c;
}
