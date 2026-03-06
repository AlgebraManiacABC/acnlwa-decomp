/**
 * FUN_003cf9cc.c
 * Source line: 541540
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_003cf9cc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &UNK_008fe954;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar1 = FUN_003cf6cc(param_1);
  param_1[3] = uVar1;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  return param_1;
}
