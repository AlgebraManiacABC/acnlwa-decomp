/**
 * FUN_0041cbbc.c
 * Source line: 585441
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0041cbbc(int param_1,uint param_2,undefined2 param_3)

{
  if ((param_2 != 0) && (param_2 < 0xd)) {
    *(undefined2 *)(*(int *)(param_1 + 8) + param_2 * 2 + -2) = param_3;
  }
  return;
}
