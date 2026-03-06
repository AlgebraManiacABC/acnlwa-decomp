/**
 * FUN_0073a41c.c
 * Source line: 1093897
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0073a41c(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  if ((~*(uint *)(param_2 + 4) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) | 0x1c;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 1;
  }
  uVar1 = *param_5;
  param_1 += 8;
  param_2 += 8;
  param_4 += 8;
  FUN_0073aa64(param_1,param_2,param_4);
  FUN_0073a6ac(uVar1,param_1,param_2,param_4);
  FUN_0073a620(uVar1,param_1,param_2,param_4);
  return 1;
}
