/**
 * FUN_004c5110.c
 * Source line: 705542
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004c5110(float param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  uVar1 = FUN_00134440((undefined4 *)(param_2 + 0xb8));
  *(undefined4 *)(param_2 + 0xb8) = uVar1;
  *(float *)(param_2 + 0xbc) = param_1;
  *(undefined4 *)(param_2 + 0xc0) = param_3;
  *(undefined4 *)(param_2 + 0xc4) = 0;
  return;
}
