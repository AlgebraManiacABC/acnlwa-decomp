/**
 * FUN_0025efb8.c
 * Source line: 308062
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0025efb8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x7e0e) = param_2;
  if (*(char *)(param_1 + 0x7e0e) == '\x01') {
    FUN_0029b480(param_1 + 0x6e2c);
    return;
  }
  return;
}
