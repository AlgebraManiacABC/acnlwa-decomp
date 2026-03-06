/**
 * FUN_00135888.c
 * Source line: 142140
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00135888(int *param_1)

{
  if ((char)param_1[1] == '\0') {
    software_interrupt(WaitSynchronization1);
    if (*param_1 < 0) {
      FUN_0012f204();
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}
