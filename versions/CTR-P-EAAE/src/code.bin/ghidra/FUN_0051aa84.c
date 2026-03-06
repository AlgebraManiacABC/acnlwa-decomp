/**
 * FUN_0051aa84.c
 * Source line: 760236
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0051aa84(int param_1,int param_2)

{
  FUN_00135748(param_1 + 0xa8);
  FUN_00135748(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xfffffffd;
  *(undefined4 *)(param_2 + 0x1c) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x28) = 0;
  FUN_001357ec(param_2 + 0xc);
  FUN_0013f134(param_1 + 0x90,param_2);
  FUN_001357ec(param_1 + 0xa8);
  return;
}
