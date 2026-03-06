/**
 * FUN_0046efd0.c
 * Source line: 640451
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0046efd0(undefined4 *param_1)

{
  *param_1 = &UNK_00901144;
  if (0 < (int)param_1[1]) {
    software_interrupt(CloseHandle);
    if (cRam00ae0ecc == '\0') {
      param_1[1] = 0;
    }
    else {
      FUN_0046f38c(0xae0ef4,param_1[1]);
      param_1[1] = 0;
    }
  }
  FUN_002ffb64(param_1);
  return;
}
