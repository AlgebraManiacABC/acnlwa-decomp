/**
 * FUN_0045ed48.c
 * Source line: 626844
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0045ed48(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 + -0x40000 < (int *)0x3ff00000) {
    uVar1 = (**(code **)(*param_2 + 8))(param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = (**(code **)(*param_2 + 0xc))(param_2);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    FUN_00459f50(*(undefined4 *)(param_1 + 0x24),4);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}
