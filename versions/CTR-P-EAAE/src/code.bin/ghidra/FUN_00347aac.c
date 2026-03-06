/**
 * FUN_00347aac.c
 * Source line: 444437
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00347aac(int *param_1)

{
  (**(code **)(*param_1 + 0x34))(param_1);
  FUN_00135748(0xae0c34);
  *param_1 = (int)piRam00ae0c28;
  iRam00ae0c30 += -1;
  piRam00ae0c28 = param_1;
  FUN_001357ec(0xae0c34);
  return;
}
