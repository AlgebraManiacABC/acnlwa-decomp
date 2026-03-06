/**
 * FUN_0029cf0c.c
 * Source line: 341626
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0029cf0c(int param_1,char param_2)

{
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x3f | 0x80;
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  FUN_0062512c(param_2 + '\t',param_1,1);
  return;
}
