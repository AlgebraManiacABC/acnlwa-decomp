/**
 * FUN_00820098.c
 * Source line: 1231154
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00820098(int *param_1)

{
  FUN_0020ae2c();
  if ((param_1[0x11] != 0) && ((**(code **)(*param_1 + 0x14))(param_1), param_1[0x11] != 0)) {
    (**(code **)(*param_1 + 0x34))(param_1[7],param_1,0);
    FUN_00321b08(param_1[8],param_1[9],param_1 + 0x11,param_1[10],param_1 + 0x12);
  }
  param_1[0x10] = param_1[0x10] + 1;
  return;
}
