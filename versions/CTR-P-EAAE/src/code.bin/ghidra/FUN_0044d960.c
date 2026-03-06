/**
 * FUN_0044d960.c
 * Source line: 614002
 * Body lines: 8
 */
#include "../../../include/types.h"

int * FUN_0044d960(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  param_1[0x44] =
       ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
       ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
  param_1[0x45] = -1;
  (**(code **)(*param_1 + 0x28))(param_1);
  return param_1 + 0x48;
}
