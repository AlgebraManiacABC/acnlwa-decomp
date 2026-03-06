/**
 * FUN_005aa6f0.c
 * Source line: 857058
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_005aa6f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}
