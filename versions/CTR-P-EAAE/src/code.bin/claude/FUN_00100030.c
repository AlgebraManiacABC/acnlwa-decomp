/**
 * FUN_00100030.c
 * Source line: 103346
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_00100030(undefined4 *ptr,undefined4 *end,undefined4 val)

{
  for (; ptr < end; ptr = ptr + 1) {
    *ptr = val;
  }
  return;
}
