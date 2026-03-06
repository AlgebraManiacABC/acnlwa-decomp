/**
 * FUN_005e486c.c
 * Source line: 894463
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_005e486c(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x02' || *(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 199) = 1;
  }
  return (int)*(char *)(param_1 + 199);
}
