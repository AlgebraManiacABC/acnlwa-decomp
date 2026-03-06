/**
 * FUN_006aca10.c
 * Source line: 1007766
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006aca10(int param_1)

{
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  FUN_006f7e40();
  *(int *)(param_1 + 0x3c) = (int)in_stack_00000000;
  *(int *)(param_1 + 0x10) = (int)((ulonglong)in_stack_00000000 >> 0x20);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0x14) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x28) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}
