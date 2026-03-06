/**
 * FUN_006531d0.c
 * Source line: 963412
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006531d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_3 + 0x548) = *param_4;
  *(undefined4 *)(param_3 + 0x54c) = param_4[1];
  *(undefined4 *)(param_3 + 0x550) = param_4[2];
  *(undefined4 *)(param_3 + 0x554) = param_1;
  *(undefined4 *)(param_3 + 0x558) = param_2;
  FUN_006aca10(param_3 + 0x55c,param_3 + 0x540,0x10,0x7fffffff,0,0,param_3 + 0x59c);
  *(undefined4 *)(param_3 + 0x590) = 0;
  *(undefined1 *)(param_3 + 0x5a0) = *(undefined1 *)(param_3 + 0x1ac);
  *(undefined4 *)(param_3 + 0x5a4) = 0;
  *(undefined4 *)(param_3 + 0x5a8) = 0;
  return;
}
