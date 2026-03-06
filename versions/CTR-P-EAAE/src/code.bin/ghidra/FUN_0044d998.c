/**
 * FUN_0044d998.c
 * Source line: 614018
 * Body lines: 4
 */
#include "../../../include/types.h"

int * FUN_0044d998(int *param_1,int param_2)

{
  param_1[0x44] = (param_2 << 0x18 | ((uint)(param_2 << 0x10) >> 0x18) << 0x10) >> 0x10;
  param_1[0x45] = 0xffff;
  (**(code **)(*param_1 + 0x28))(param_1);
  return param_1 + 0x48;
}
