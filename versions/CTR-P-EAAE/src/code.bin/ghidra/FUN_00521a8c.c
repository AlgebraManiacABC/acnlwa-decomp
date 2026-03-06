/**
 * FUN_00521a8c.c
 * Source line: 764936
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_00521a8c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  *param_1 = &UNK_009036c4;
  param_1[1] = 0xffffffff;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  FUN_0051fe30();
  uVar1 = FUN_00747944();
  param_1[1] = uVar1;
  return param_1;
}
