/**
 * FUN_003480c0.c
 * Source line: 444787
 * Body lines: 5
 */
#include "../../../include/types.h"

int FUN_003480c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    software_interrupt(CloseHandle);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return param_1;
}
