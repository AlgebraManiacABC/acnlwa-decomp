/**
 * FUN_00585490.c
 * Source line: 831764
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00585490(int param_1)

{
  if (*(char *)(param_1 + 7) == '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
          // WARNING: Subroutine does not return
    FUN_00584074();
  }
  return;
}
