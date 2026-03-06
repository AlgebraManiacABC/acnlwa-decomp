/**
 * FUN_0054a98c.c
 * Source line: 790977
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0054a98c(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5
                 )

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_5 + 0x94) = param_1;
  *(undefined4 *)(param_5 + 0x98) = param_2;
  *(undefined1 *)(param_5 + 4) = 1;
  *(float *)(param_5 + 0x9c) = param_3;
  param_3 = param_3 * 0.5;
  uVar1 = FUN_0077b36c(param_3);
  *(undefined4 *)(param_5 + 0xa0) = uVar1;
  uVar1 = __hardfp_cosf(param_3);
  *(undefined4 *)(param_5 + 0xa4) = uVar1;
  uVar1 = FUN_0077b534(param_3);
  *(undefined4 *)(param_5 + 0xa8) = uVar1;
  *(undefined1 *)(param_5 + 4) = 1;
  *(undefined4 *)(param_5 + 0xac) = param_4;
  return;
}
