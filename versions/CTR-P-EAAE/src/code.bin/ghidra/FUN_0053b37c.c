/**
 * FUN_0053b37c.c
 * Source line: 780924
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0053b37c(undefined4 *param_1)

{
  *param_1 = &UNK_00903c20;
  if (param_1[4] != 0) {
    software_interrupt(CloseHandle);
    param_1[4] = 0;
  }
  FUN_0053d530(param_1);
  return;
}
