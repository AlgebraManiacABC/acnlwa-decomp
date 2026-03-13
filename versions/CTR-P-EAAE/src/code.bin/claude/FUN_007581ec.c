/**
 * FUN_007581ec.c
 * Source line: 1113514
 * Body lines: 1
 */
#include "../../../include/types.h"

bool FUN_007581ec(int param_1)

{
  return *(char *)(param_1 + 0x30) == '\x01' || *(char *)(param_1 + 0x30) == '\x03';
}
