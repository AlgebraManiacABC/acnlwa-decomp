/**
 * FUN_0062b08c.c
 * Source line: 943763
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_0062b08c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  FUN_005cdf48(param_1 + 0x1c,param_2,0xffffffff,0x7fffffff);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x79) = 0;
  FUN_0027a48c(param_1 + 1);
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  FUN_00303cdc(param_1 + 0x1c);
  return param_1;
}
