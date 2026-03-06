/**
 * FUN_002d6e94.c
 * Source line: 374521
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_002d6e94(int *param_1)

{
  FUN_00521a0c();
  FUN_004f0818(param_1 + 0x2d,0);
  *(undefined2 *)(param_1 + 0x28) = 0x8000;
  *(undefined2 *)((int)param_1 + 0xa2) = 0xeaab;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f800000;
  param_1[0x2c] = 0;
  FUN_0056a378(param_1 + 0x2a);
  FUN_004ed054(param_1 + 0x2d,param_1 + 0x2a);
  (**(code **)(*param_1 + 0x5c))(param_1);
  (**(code **)(*param_1 + 0x60))(param_1);
  (**(code **)(*param_1 + 0x54))(param_1);
  (**(code **)(*param_1 + 100))(param_1);
  thunk_FUN_004ee4b8(param_1 + 0x2d);
  return 2;
}
