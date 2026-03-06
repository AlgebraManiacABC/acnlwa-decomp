/**
 * FUN_004ba654.c
 * Source line: 697666
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_004ba654(undefined4 *param_1,undefined4 *param_2)

{
  param_1[4] = param_1[4] & 0xffffff80 | 0x90;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
  param_1[4] = param_1[4] & 0xfffff0ff | (*(byte *)(param_2 + 4) & 0xf) << 8;
  FUN_004ba4c8();
  return param_1;
}
