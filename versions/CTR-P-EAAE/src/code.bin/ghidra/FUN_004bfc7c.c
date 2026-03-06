/**
 * FUN_004bfc7c.c
 * Source line: 701938
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004bfc7c(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00901e34;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0x2f;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  return;
}
