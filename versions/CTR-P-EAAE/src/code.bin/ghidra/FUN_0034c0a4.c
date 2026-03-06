/**
 * FUN_0034c0a4.c
 * Source line: 448623
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0034c0a4(undefined4 *param_1)

{
  *param_1 = &UNK_008b3518;
  if (*(char *)(param_1 + 2) != '\0') {
    if (param_1[1] != 0) {
      software_interrupt(CloseHandle);
      param_1[1] = 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_1[1] != 0) {
    software_interrupt(CloseHandle);
    param_1[1] = 0;
  }
  FUN_002ffb64(param_1);
  return;
}
