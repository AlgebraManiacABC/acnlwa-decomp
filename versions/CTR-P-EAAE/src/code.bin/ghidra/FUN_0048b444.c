/**
 * FUN_0048b444.c
 * Source line: 661428
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0048b444(uint *param_1,int param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  
  uVar1 = param_2 + 3U & 0xfffffffc;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 3) = param_4;
  param_1[1] = 0;
  param_1[2] = (param_2 + param_3) - uVar1 & 0xfffffff8;
  return;
}
