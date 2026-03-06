/**
 * FUN_0041cbe0.c
 * Source line: 585452
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0041cbe0(int param_1,uint param_2)

{
  if ((param_2 != 0) && (param_2 < 0xd)) {
    *(undefined2 *)(*(int *)(param_1 + 8) + param_2 * 2 + -2) =
         *(undefined2 *)(*(int *)(iRam00974a58 + 0x14) + 0x42);
  }
  return;
}
