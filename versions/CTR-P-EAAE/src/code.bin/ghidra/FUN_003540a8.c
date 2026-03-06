/**
 * FUN_003540a8.c
 * Source line: 455371
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_003540a8(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    software_interrupt(CloseHandle);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_002ffb64(param_1);
  return;
}
