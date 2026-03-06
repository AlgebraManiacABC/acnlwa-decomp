/**
 * FUN_00348090.c
 * Source line: 444774
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00348090(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    software_interrupt(CloseHandle);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_002ffb64(param_1);
  return;
}
