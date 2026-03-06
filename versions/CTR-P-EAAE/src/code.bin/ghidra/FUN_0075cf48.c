/**
 * FUN_0075cf48.c
 * Source line: 1117533
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0075cf48(int param_1)

{
  if (*(char *)(param_1 + 4) == '\b') {
    if (*(char *)(param_1 + 6) == '\x05') {
      return 1;
    }
  }
  else if (*(char *)(param_1 + 4) == '\a') {
    return 1;
  }
  return 0;
}
