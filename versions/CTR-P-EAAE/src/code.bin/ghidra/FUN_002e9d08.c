/**
 * FUN_002e9d08.c
 * Source line: 383792
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002e9d08(int param_1,int param_2)

{
  param_1 += param_2 * 6;
  *(undefined2 *)(param_1 + 0xc90) = 0;
  *(undefined2 *)(param_1 + 0xc92) = 0;
  *(undefined1 *)(param_1 + 0xc94) = 0;
  return;
}
