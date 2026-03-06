/**
 * FUN_00585db8.c
 * Source line: 832130
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00585db8(int param_1)

{
  if (*(char *)(param_1 + 7) == '\x01' || *(char *)(param_1 + 7) == '\x03') {
    FUN_00583310();
  }
  *(undefined1 *)(param_1 + 7) = 5;
          // WARNING: Subroutine does not return
  FUN_00584074();
}
