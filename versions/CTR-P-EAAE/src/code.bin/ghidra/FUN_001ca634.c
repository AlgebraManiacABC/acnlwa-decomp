/**
 * FUN_001ca634.c
 * Source line: 232568
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001ca634(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  FUN_0070e1dc(0x3f800000,param_1,param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3c) = 3;
  return;
}
