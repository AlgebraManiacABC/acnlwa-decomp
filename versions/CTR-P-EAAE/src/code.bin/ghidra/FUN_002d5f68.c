/**
 * FUN_002d5f68.c
 * Source line: 374085
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002d5f68(int param_1)

{
  if (*(char *)(param_1 + 0xdc) != '\0') {
    FUN_002e9268(param_1);
    *(undefined1 *)(param_1 + 0xdc) = 0;
  }
  return;
}
