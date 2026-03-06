/**
 * FUN_00210b84.c
 * Source line: 270949
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00210b84(int param_1)

{
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_00246b90(param_1 + 8);
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}
