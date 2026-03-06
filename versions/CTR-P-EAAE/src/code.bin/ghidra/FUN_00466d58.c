/**
 * FUN_00466d58.c
 * Source line: 633113
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00466d58(undefined4 *param_1)

{
  *param_1 = &UNK_00901024;
  if (param_1[5] != 0) {
    software_interrupt(CloseHandle);
    param_1[5] = 0;
  }
  FUN_002ffb64(param_1);
  return;
}
